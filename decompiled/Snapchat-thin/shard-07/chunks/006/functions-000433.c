/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057f6d70; end: 1057f6e57; +[SCNSmartReplySmartReplyModel from:withConfiguration:] */

void FUN_1057f6d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bea28;
  func_0x00010bfba9e0(PTR_PTR_1126bea28,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d8c80(param_1,param_2,param_3,puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057f6e68;
  puStack_48 = &UNK_1108b5000;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c0bfa60(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108b4fe0,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1057f6e58; end: 1057f6e67;  */

void FUN_1057f6e58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2619f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af5d0,PTR_s_successWithObject__1126760a0,param_2);
  return;
}



/* Entry: 1057f6e68; end: 1057f6ec7;  */

void FUN_1057f6e68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be39b60(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057f6ec8; end: 1057f6fe7; +[SCNSmartReplySmartReplyModel _initErrorWithCode:data:] */

void FUN_1057f6ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c067fc0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e04618;
  uVar2 = param_4;
  func_0x00010c08fa60(param_4);
  _objc_release(param_4);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e045d8;
  puVar5 = puVar1;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puStack_88 = puVar1;
    pcStack_68 = FUN_1057f6fe8;
    puStack_90 = puVar3;
    uStack_80 = param_3;
    puStack_78 = puVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    puVar3 = puVar4;
    func_0x00010bf39dc0(puVar4,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1057f711c;
    puStack_a8 = &UNK_11088c260;
    puStack_a0 = puVar4;
    ppuStack_98 = ppuVar6;
    _objc_retain(ppuVar6);
    puVar5 = puVar3;
    func_0x00010c0bfa60(puVar3,param_2,&PTR___NSConcreteGlobalBlock_1108b5030,&puStack_c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_98);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057f6fe8; end: 1057f70ab; -[SCNSmartReplySmartReplyModel tagsForQuery:] */

void FUN_1057f6fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39dc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057f711c;
  puStack_48 = &UNK_11088c260;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0bfa60(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108b5030,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057f70ac; end: 1057f710b;  */

void FUN_1057f70ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_1108b5070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f710c; end: 1057f711b;  */

void FUN_1057f710c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfba9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bea30,PTR_s_from__1125cc420,param_2);
  return;
}



/* Entry: 1057f711c; end: 1057f71a3;  */

void FUN_1057f711c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_opt_class(uVar2);
  func_0x00010bddedc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfa01c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f71a4; end: 1057f7267; -[SCNSmartReplySmartReplyModel bestTagForQuery:] */

void FUN_1057f71a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39d60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057f72c8;
  puStack_48 = &UNK_11088c260;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0bfa60(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108b5090,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057f7268; end: 1057f72c7;  */

void FUN_1057f7268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = PTR_PTR_1126bea30;
  func_0x00010bfba9e0(PTR_PTR_1126bea30,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057f72c8; end: 1057f734f;  */

void FUN_1057f72c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_opt_class(uVar2);
  func_0x00010bddedc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfa01c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f7350; end: 1057f742f; +[SCNSmartReplySmartReplyModel _classifyErrorWithCode:forSearchQuery:] */

void FUN_1057f7350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c067fc0(param_4);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e04638;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e045f8;
  func_0x00010bf99240(puVar2,param_3,&PTR____CFConstantStringClassReference_110e045f8,param_4,puVar1
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126bea30;
    _objc_retain(ppuVar4);
    _objc_alloc(puVar2);
    ppuVar3 = ppuVar4;
    func_0x00010c086940(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1144a0(ppuVar4);
    _objc_release(ppuVar4);
    func_0x00010c020ea0(param_1,puVar2,param_3,ppuVar3);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057f7430; end: 1057f74bf; +[SCSmartReplySearchTag from:] */

void FUN_1057f7430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bea30;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c086940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1144a0(param_4);
  _objc_release(param_4);
  func_0x00010c020ea0(param_1,puVar1,param_3,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f74c0; end: 1057f752b;  */

void FUN_1057f74c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bea38;
  _objc_alloc(PTR_PTR_1126bea38);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020ea0(*(undefined8 *)(param_1 + 0x18),puVar1,param_2,lVar2);
  FUN_1057f752c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057f752c; end: 1057f7537;  */

void FUN_1057f752c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1057f7538; end: 1057f75af; -[SCNSmartReplySmartReplyModel initWithCpp:] */

undefined1 * FUN_1057f7538(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ea640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1057f7d60();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1057f7b8c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057f75b0; end: 1057f7767; +[SCNSmartReplySmartReplyModel newModel:configuration:] */

undefined * FUN_1057f75b0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int extraout_w10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  
  func_0x0001057f7da0();
  _objc_retain(param_4);
  func_0x000100685674();
  uVar2 = param_4;
  lStack_58 = param_3;
  lStack_50 = param_2;
  func_0x00010c080a20();
  ppuStack_48 = (undefined **)CONCAT71(ppuStack_48._1_7_,(char)uVar2);
  FUN_1057fabd8(&uStack_70,&lStack_58,&ppuStack_48);
  puVar3 = PTR_PTR_1126b9638;
  if (cStack_60 == '\x01') {
    lVar1 = CONCAT44(uStack_6c,uStack_70);
    if (lVar1 != 0) {
      lStack_50 = lStack_68;
      ppuStack_48 = &PTR_DAT_1108b50b0;
      lStack_58 = lVar1;
      if (lStack_68 != 0) {
        do {
          func_0x0001057f7d60();
        } while (extraout_w10 != 0);
      }
      func_0x00010015c218(&ppuStack_48,&lStack_58,FUN_1057f7cbc);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001000df524(&lStack_58);
    }
    func_0x00010bfbaec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1057f7d30(uStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001057f7d84();
  FUN_1057f7b6c(&uStack_70);
  _objc_release(param_4);
  func_0x0001006856d0();
  return puVar3;
}



/* Entry: 1057f7768; end: 1057f7933; -[SCNSmartReplySmartReplyModel classifyTagsForQuery:] */

void FUN_1057f7768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  char cStack_48;
  
  func_0x0001057f7da0();
  plVar4 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_78,param_3);
  (**(code **)(*plVar4 + 0x10))(&uStack_60,plVar4,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  puVar3 = PTR_PTR_1126b9638;
  if (cStack_48 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    for (lVar5 = CONCAT44(uStack_5c,uStack_60); lVar5 != lStack_58; lVar5 = lVar5 + 0x20) {
      lVar2 = lVar5;
      FUN_1057f74c0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(lVar2);
    }
    func_0x00010bf51e00(puVar1);
    func_0x0001057f7d7c();
    func_0x00010bfbaec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1057f7d30(uStack_60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001057f7d84();
  FUN_1057f7bb8(&uStack_60);
  func_0x0001006856d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057f7934; end: 1057f7ad3; -[SCNSmartReplySmartReplyModel classifyBestTagForQuery:] */

void FUN_1057f7934(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  int unaff_w22;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [24];
  undefined4 auStack_68 [8];
  char cStack_48;
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001057f7da0();
  plVar4 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_80,param_3);
  (**(code **)(*plVar4 + 0x18))(auStack_68,plVar4,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  puVar2 = PTR_PTR_1126b9638;
  if (cStack_40 == '\x01') {
    if (cStack_48 == '\x01') {
      FUN_1057f74c0(auStack_68);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1057f7d30(auStack_68[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001057f7d7c();
  FUN_1057f7c90(auStack_68);
  func_0x0001006856d0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x0001057f7d70();
    puVar3 = auStack_68;
    FUN_1057f7c90();
    if (unaff_w22 != 1) {
      func_0x0001006856d0();
      func_0x0001057f7d8c();
      pcStack_88 = FUN_1057f7ad4;
      puStack_a0 = puVar2;
      uStack_98 = param_3;
      puStack_90 = &stack0xfffffffffffffff0;
      if (*(long *)(puVar3 + 6) != 0) {
        ppuStack_a8 = &PTR_DAT_1108b50b0;
        func_0x0001004a52a0(puVar3 + 2,&ppuStack_a8);
      }
      FUN_1057f7b8c(puVar3 + 6);
      func_0x0001004a5588(puVar3 + 2);
      return;
    }
    ___cxa_begin_catch(puVar2);
    func_0x00010bd47250(&UNK_10f2fca03);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1057f7aac);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057f7ad4; end: 1057f7b27; -[SCNSmartReplySmartReplyModel .cxx_destruct] */

void FUN_1057f7ad4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108b50b0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1057f7b8c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1057f7b28; end: 1057f7b6b; -[SCNSmartReplySmartReplyModel .cxx_construct] */

undefined8 * FUN_1057f7b28(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1057f7d60();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1057f7b6c; end: 1057f7b8b;  */

void FUN_1057f7b6c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1057f7b8c();
  }
  return;
}



/* Entry: 1057f7b8c; end: 1057f7bb7;  */

long FUN_1057f7b8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1057f7bb8; end: 1057f7bd7;  */

void FUN_1057f7bb8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1057f7bd8();
  }
  return;
}



/* Entry: 1057f7bd8; end: 1057f7c4b;  */

undefined8 FUN_1057f7bd8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001057f7c0c(&uStack_28);
  return param_1;
}



/* Entry: 1057f7c4c; end: 1057f7c53;  */

void FUN_1057f7c4c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1057f7c54; end: 1057f7c8f;  */

void FUN_1057f7c54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1057f7c90; end: 1057f7cbb;  */

void FUN_1057f7c90(long param_1)

{
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x20) == '\x01')) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1057f7cbc; end: 1057f7d2f;  */

void FUN_1057f7cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bea20;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1057f7d60();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1057f7b8c(&uStack_30);
  return;
}



/* Entry: 1057f7d30; end: 1057f7d5f;  */

void FUN_1057f7d30(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f7d60; end: 1057f7da7;  */

void FUN_1057f7d60(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1057f7da8; end: 1057f7def; -[SCNSmartReplyConfiguration initWithIsTagsNormalized:] */

void FUN_1057f7da8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1057f7df0; end: 1057f7df7; -[SCNSmartReplyConfiguration isTagsNormalized] */

undefined1 FUN_1057f7df0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057f7df8; end: 1057f7eab; -[SCNSmartReplySmartReplyAnswerTag initWithKeyPhrase:probability:] */

undefined1 *
FUN_1057f7df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ea650;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1057f7eac; end: 1057f7eb3; -[SCNSmartReplySmartReplyAnswerTag keyPhrase] */

undefined8 FUN_1057f7eac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057f7eb4; end: 1057f7ebb; -[SCNSmartReplySmartReplyAnswerTag probability] */

undefined8 FUN_1057f7eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057f7ebc; end: 1057f7ec7; -[SCNSmartReplySmartReplyAnswerTag .cxx_destruct] */

void FUN_1057f7ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057f7ec8; end: 1057f7ef3;  */

undefined1  [16] FUN_1057f7ec8(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  float fVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long *extraout_x8;
  long *plVar15;
  long ****pppplVar16;
  ulong extraout_x8_00;
  long ****extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long ****extraout_x9;
  ulong uVar17;
  ulong extraout_x9_00;
  long ****pppplVar18;
  long *plVar19;
  long *plVar20;
  long *extraout_x10;
  long ****pppplVar21;
  long ****pppplVar22;
  long ****extraout_x11;
  long *plVar23;
  long ****unaff_x23;
  long ****pppplVar24;
  long ****pppplVar25;
  ulong uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long **applStack_1a0 [3];
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_160;
  long *plStack_158;
  long *plStack_150;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_100;
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  
  if (param_3 <= param_2) {
    uVar26 = param_2 - param_3;
    if (param_4 <= param_2 - param_3) {
      uVar26 = param_4;
    }
    auVar31._8_8_ = uVar26;
    auVar31._0_8_ = param_1 + param_3 * 4;
    return auVar31;
  }
  puVar10 = &UNK_10f2fca6e;
  func_0x000104c03f28();
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  plVar15 = extraout_x8 + 2;
  extraout_x8[3] = 0;
  *plVar15 = 0;
  *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
  uStack_1d8 = 10;
  uStack_1d0 = 0;
  puStack_1e8 = puVar10;
  uStack_1e0 = param_2;
  FUN_1057fa6a0();
  uStack_1c0 = 1;
  puStack_1c8 = puVar10;
  do {
    FUN_1057f87ac(&uStack_200,&puStack_1e8);
    uStack_e0 = uStack_200;
    uStack_d8 = uStack_1f8;
    uStack_d0 = 0x7c;
    uStack_c8 = 0;
    FUN_1057fa6a0(uStack_200,uStack_1f8,0,0x7c);
    uStack_b8 = 1;
    if ((int)param_3 == 0) {
      func_0x0001057fa9f0();
      func_0x000106e5ec34(&pppuStack_f8,uStack_128,uStack_120);
    }
    else {
      func_0x0001057fa9f0();
      func_0x000106e5ea70(&pppuStack_f8,uStack_128,uStack_120);
    }
    plVar23 = extraout_x8;
    FUN_1057f9540(extraout_x8,&pppuStack_f8);
    if (plVar23 != (long *)0x0) {
      uVar13 = 0x10;
      ___cxa_allocate_exception(0x10);
      if (-1 < (char)bStack_e1) {
        uStack_f0 = (ulong)bStack_e1;
        pppuStack_f8 = &pppuStack_f8;
      }
      func_0x000106e5ec10(&plStack_188,pppuStack_f8,uStack_f0);
      func_0x0001004c3cd0(&uStack_128,&UNK_10f2fca82,&plStack_188);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar13,&uStack_128);
      func_0x0001057fa9c8();
      goto LAB_1057f8684;
    }
    iVar9 = (int)&uStack_e0;
    func_0x0001057f87f0();
    if (iVar9 == 0) {
LAB_1057f85a4:
      func_0x0001057fab2c();
      uVar13 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEm(&ppplStack_b0,1);
      func_0x0001004c3cd0(&plStack_188,&UNK_10f2fca3c,&ppplStack_b0);
      func_0x00010048a6c8(&uStack_128,&plStack_188,": ");
      func_0x000100060b18(&pppuStack_f8,&uStack_200);
      FUN_10533a9c0(&uStack_e0,&uStack_128,&pppuStack_f8);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar13,&uStack_e0);
      func_0x0001057fa9c8();
      goto LAB_1057f8684;
    }
    func_0x0001057fa9f0();
    uStack_118 = 0x3b;
    uStack_110 = 0;
    FUN_1057fa6a0(uStack_128,uStack_120,0,0x3b);
    uStack_100 = 1;
    ppplStack_140 = (long ***)0x0;
    ppplStack_138 = (long ***)0x0;
    ppplStack_130 = (long ***)0x0;
    do {
      FUN_1057f87ac(&plStack_158,&uStack_128);
      pppplVar16 = (long ****)0x0;
      if (plStack_150 != (long *)0x0) {
        plStack_188 = plStack_158;
        plStack_180 = plStack_150;
        uStack_178 = CONCAT71(uStack_178._1_7_,0x2c);
        uStack_170 = 0;
        FUN_1057fa6a0(plStack_158,plStack_150,0,0x2c);
        uStack_160 = 1;
        if ((int)param_3 == 0) {
          func_0x0001057fab00(&lStack_1b8);
          func_0x000106e5ec34(applStack_1a0,lStack_1b8,uStack_1b0);
        }
        else {
          func_0x0001057fab00(&ppplStack_b0);
          func_0x000106e5ea70(applStack_1a0,ppplStack_b0,ppplStack_a8);
        }
        uVar26 = 0;
        func_0x0001057f87f0();
        if ((((uVar26 & 1) == 0) ||
            (func_0x0001057fab00(&ppplStack_b0), ppplVar5 = ppplStack_a8, ppplVar3 = ppplStack_b0,
            (long ****)ppplStack_a8 == (long ****)0x0)) ||
           (_strtof(ppplStack_b0,&lStack_1b8), ppplVar4 = ppplStack_138,
           lStack_1b8 != (long)ppplVar3 + (long)ppplVar5)) {
          func_0x0001057fab34();
          func_0x0001057fab5c();
          goto LAB_1057f85a4;
        }
        uVar1 = CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
        if (ppplStack_138 < ppplStack_130) {
          pppplVar16 = (long ****)applStack_1a0;
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                    (ppplStack_138,pppplVar16);
          *(undefined4 *)(ppplVar4 + 3) = uVar1;
          pppplVar25 = (long ****)(ppplVar4 + 4);
        }
        else {
          pppplVar16 = &ppplStack_140;
          lVar14 = ((long)ppplStack_138 - (long)ppplStack_140 >> 5) + 1;
          func_0x0001057f9708();
          ppplVar5 = ppplStack_138;
          ppplVar3 = ppplStack_140;
          ppplStack_90 = (long ***)&ppplStack_130;
          if (pppplVar16 == (long ****)0x0) {
            pppplVar16 = (long ****)0x0;
            lVar14 = 0;
          }
          else {
            FUN_1057f973c();
          }
          lVar11 = (long)pppplVar16 + ((long)ppplVar5 - (long)ppplVar3);
          unaff_x23 = pppplVar16 + lVar14 * 4;
          ppplStack_b0 = (long ***)pppplVar16;
          ppplStack_a8 = (long ***)lVar11;
          ppplStack_a0 = (long ***)lVar11;
          ppplStack_98 = (long ***)unaff_x23;
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                    (lVar11,applStack_1a0);
          *(undefined4 *)(lVar11 + 0x18) = uVar1;
          pppplVar25 = (long ****)(lVar11 + 0x20);
          pppplVar18 = (long ****)(lVar11 - ((long)ppplStack_138 - (long)ppplStack_140));
          pppplVar16 = (long ****)ppplStack_140;
          _memcpy(pppplVar18);
          ppplStack_a0 = ppplStack_140;
          ppplStack_98 = ppplStack_130;
          ppplStack_b0 = ppplStack_140;
          ppplStack_a8 = ppplStack_140;
          ppplStack_140 = (long ***)pppplVar18;
          ppplStack_138 = (long ***)pppplVar25;
          ppplStack_130 = (long ***)unaff_x23;
          func_0x0001057f9770(&ppplStack_b0);
        }
        ppplStack_138 = (long ***)pppplVar25;
        func_0x0001057fab34();
      }
      uVar26 = 0;
      func_0x0001057f87f0();
    } while ((uVar26 & 1) != 0);
    if (ppplStack_140 != ppplStack_138) {
      pppplVar18 = &pppuStack_f8;
      FUN_1057f9618();
      pppplVar25 = (long ****)extraout_x8[1];
      if (pppplVar25 != (long ****)0x0) {
        uVar26 = (long)pppplVar25 - 1;
        if (((ulong)pppplVar25 & uVar26) == 0) {
          unaff_x23 = (long ****)(uVar26 & (ulong)pppplVar18);
        }
        else {
          unaff_x23 = pppplVar18;
          if (pppplVar25 <= pppplVar18) {
            uVar17 = 0;
            if (pppplVar25 != (long ****)0x0) {
              uVar17 = (ulong)pppplVar18 / (ulong)pppplVar25;
            }
            unaff_x23 = (long ****)((long)pppplVar18 - uVar17 * (long)pppplVar25);
          }
        }
        plVar23 = *(long **)(*extraout_x8 + (long)unaff_x23 * 8);
        if (plVar23 != (long *)0x0) {
          do {
            while( true ) {
              plVar23 = (long *)*plVar23;
              if (plVar23 == (long *)0x0) goto LAB_1057f822c;
              pppplVar16 = (long ****)plVar23[1];
              if (pppplVar16 != pppplVar18) break;
              plVar19 = plVar23 + 2;
              pppplVar16 = &pppuStack_f8;
              FUN_1057f9638(plVar19,pppplVar16);
              if (((ulong)plVar19 & 1) != 0) goto LAB_1057f84a4;
            }
            if (((ulong)pppplVar25 & uVar26) == 0) {
              pppplVar16 = (long ****)((ulong)pppplVar16 & uVar26);
            }
            else if (pppplVar25 <= pppplVar16) {
              uVar17 = 0;
              if (pppplVar25 != (long ****)0x0) {
                uVar17 = (ulong)pppplVar16 / (ulong)pppplVar25;
              }
              pppplVar16 = (long ****)((long)pppplVar16 - uVar17 * (long)pppplVar25);
            }
          } while (pppplVar16 == unaff_x23);
        }
      }
LAB_1057f822c:
      plVar23 = (long *)0x40;
      __Znwm();
      uStack_178 = 0;
      pppplVar21 = (long ****)(plVar23 + 2);
      *plVar23 = 0;
      plVar23[1] = (long)pppplVar18;
      pppplVar16 = &pppuStack_f8;
      plStack_188 = plVar23;
      plStack_180 = plVar15;
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                (pppplVar21,pppplVar16);
      plVar23[5] = 0;
      plVar23[6] = 0;
      plVar23[7] = 0;
      uStack_178 = CONCAT71(uStack_178._1_7_,1);
      func_0x0001057fab98();
      fVar2 = (float)extraout_x8_00;
      uVar27 = SUB41(fVar2,0);
      uVar28 = (undefined1)((uint)fVar2 >> 8);
      uVar29 = (undefined1)((uint)fVar2 >> 0x10);
      uVar30 = (undefined1)((uint)fVar2 >> 0x18);
      if ((pppplVar25 == (long ****)0x0) ||
         (*(float *)(extraout_x8 + 4) * (float)pppplVar25 < fVar2)) {
        bVar7 = (long ****)0x2 < pppplVar25;
        bVar8 = pppplVar25 == (long ****)0x3;
        func_0x0001057fab78((long)pppplVar25 << 1);
        pppplVar24 = extraout_x8_01;
        if (!bVar7 || bVar8) {
          pppplVar24 = extraout_x9;
        }
        if ((long)pppplVar24 - 1U == 0) {
          pppplVar24 = (long ****)0x2;
        }
        else if (((ulong)pppplVar24 & (long)pppplVar24 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppplVar21 = pppplVar24;
        }
        pppplVar25 = (long ****)extraout_x8[1];
        bVar8 = pppplVar25 <= pppplVar24;
        if (bVar8 && pppplVar24 != pppplVar25) {
LAB_1057f82cc:
          if ((ulong)pppplVar24 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_1057f8684;
          }
          pppplVar16 = (long ****)((long)pppplVar24 << 3);
          __Znwm(pppplVar16);
          FUN_1057f97b8(extraout_x8,pppplVar16);
          extraout_x8[1] = (long)pppplVar24;
          lVar14 = *extraout_x8;
          for (pppplVar25 = (long ****)0x0; pppplVar24 != pppplVar25;
              pppplVar25 = (long ****)((long)pppplVar25 + 1)) {
            *(undefined8 *)(lVar14 + (long)pppplVar25 * 8) = 0;
          }
          plVar19 = (long *)*plVar15;
          pppplVar25 = pppplVar24;
          if (plVar19 != (long *)0x0) {
            pppplVar21 = (long ****)plVar19[1];
            uVar17 = (long)pppplVar24 - 1;
            uVar26 = 0;
            if (pppplVar24 != (long ****)0x0) {
              uVar26 = (ulong)pppplVar21 / (ulong)pppplVar24;
            }
            pppplVar22 = pppplVar21;
            if (pppplVar24 <= pppplVar21) {
              pppplVar22 = (long ****)((long)pppplVar21 - uVar26 * (long)pppplVar24);
            }
            if (((ulong)pppplVar24 & uVar17) == 0) {
              pppplVar22 = (long ****)((ulong)pppplVar21 & uVar17);
            }
            *(long **)(lVar14 + (long)pppplVar22 * 8) = plVar15;
            while (plVar20 = plVar19, plVar19 = (long *)*plVar20, plVar19 != (long *)0x0) {
              pppplVar21 = (long ****)plVar19[1];
              if (((ulong)pppplVar24 & uVar17) == 0) {
                pppplVar21 = (long ****)((ulong)pppplVar21 & uVar17);
              }
              else if (pppplVar24 <= pppplVar21) {
                uVar26 = 0;
                if (pppplVar24 != (long ****)0x0) {
                  uVar26 = (ulong)pppplVar21 / (ulong)pppplVar24;
                }
                pppplVar21 = (long ****)((long)pppplVar21 - uVar26 * (long)pppplVar24);
              }
              if (pppplVar21 != pppplVar22) {
                if (*(long *)(lVar14 + (long)pppplVar21 * 8) == 0) {
                  *(long **)(lVar14 + (long)pppplVar21 * 8) = plVar20;
                  pppplVar22 = pppplVar21;
                }
                else {
                  func_0x0001057faa24();
                  lVar14 = extraout_x8_02;
                  uVar17 = extraout_x9_00;
                  plVar19 = extraout_x10;
                  pppplVar22 = extraout_x11;
                }
              }
            }
          }
        }
        else if (!bVar8) {
          func_0x0001057faa44();
          if ((bVar8) && (((ulong)pppplVar25 & (long)pppplVar25 - 1U) == 0)) {
            if ((long ****)0x1 < pppplVar21) {
              pppplVar21 = (long ****)(1L << (-LZCOUNT((long)pppplVar21 + -1) & 0x3fU));
            }
          }
          else {
            __ZNSt3__112__next_primeEm();
          }
          if (pppplVar24 <= pppplVar21) {
            pppplVar24 = pppplVar21;
          }
          if (pppplVar24 < pppplVar25) {
            if (pppplVar24 != (long ****)0x0) goto LAB_1057f82cc;
            pppplVar16 = (long ****)0x0;
            FUN_1057f97b8(extraout_x8,0);
            extraout_x8[1] = 0;
            pppplVar25 = (long ****)0x0;
          }
          else {
            pppplVar25 = (long ****)extraout_x8[1];
          }
        }
        if (((ulong)pppplVar25 & (long)pppplVar25 - 1U) == 0) {
          unaff_x23 = (long ****)((long)pppplVar25 - 1U & (ulong)pppplVar18);
        }
        else {
          unaff_x23 = pppplVar18;
          if (pppplVar25 <= pppplVar18) {
            uVar26 = 0;
            if (pppplVar25 != (long ****)0x0) {
              uVar26 = (ulong)pppplVar18 / (ulong)pppplVar25;
            }
            unaff_x23 = (long ****)((long)pppplVar18 - uVar26 * (long)pppplVar25);
          }
        }
      }
      lVar14 = *extraout_x8;
      plVar19 = *(long **)(lVar14 + (long)unaff_x23 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar23 = *plVar15;
        *plVar15 = (long)plVar23;
        *(long **)(lVar14 + (long)unaff_x23 * 8) = plVar15;
        if (*plVar23 != 0) {
          pppplVar18 = *(long *****)(*plVar23 + 8);
          if (((ulong)pppplVar25 & (long)pppplVar25 - 1U) == 0) {
            pppplVar18 = (long ****)((ulong)pppplVar18 & (long)pppplVar25 - 1U);
          }
          else if (pppplVar25 <= pppplVar18) {
            uVar26 = 0;
            if (pppplVar25 != (long ****)0x0) {
              uVar26 = (ulong)pppplVar18 / (ulong)pppplVar25;
            }
            pppplVar18 = (long ****)((long)pppplVar18 - uVar26 * (long)pppplVar25);
          }
          *(long **)(lVar14 + (long)pppplVar18 * 8) = plVar23;
        }
      }
      else {
        *plVar23 = *plVar19;
        *plVar19 = (long)plVar23;
      }
      plStack_188 = (long *)0x0;
      func_0x0001057fab98();
      extraout_x8[3] = extraout_x8_03;
      FUN_1057f97d0(&plStack_188);
LAB_1057f84a4:
      ppplVar5 = ppplStack_138;
      ppplVar3 = ppplStack_140;
      pppplVar25 = (long ****)(plVar23 + 5);
      if (pppplVar25 != &ppplStack_140) {
        uVar26 = (long)ppplStack_138 - (long)ppplStack_140;
        lVar14 = plVar23[5];
        unaff_x23 = (long ****)ppplVar5;
        if ((ulong)(plVar23[7] - lVar14) < uVar26) {
          if (lVar14 != 0) {
            FUN_1057f99c0(pppplVar25);
            __ZdlPv(*pppplVar25);
            *pppplVar25 = (long ***)0x0;
            plVar23[6] = 0;
            plVar23[7] = 0;
          }
          lVar14 = (long)uVar26 >> 5;
          pppplVar16 = pppplVar25;
          func_0x0001057f9708();
          if ((ulong)pppplVar16 >> 0x3b != 0) {
            func_0x0001057f9730();
LAB_1057f8684:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1057f8688);
            (*pcVar6)();
          }
          FUN_1057f973c();
          plVar23[5] = (long)pppplVar16;
          plVar23[6] = (long)pppplVar16;
          plVar23[7] = (long)(pppplVar16 + lVar14 * 4);
          pppplVar16 = (long ****)ppplVar3;
        }
        else {
          if (uVar26 <= (ulong)(plVar23[6] - lVar14)) {
            pppplVar16 = (long ****)ppplStack_140;
            FUN_1057f9934(ppplStack_140,ppplStack_138);
            FUN_1057f998c(pppplVar25,pppplVar16);
            goto LAB_1057f8564;
          }
          pppplVar16 = (long ****)((long)ppplStack_140 + (plVar23[6] - lVar14));
          FUN_1057f9934(ppplStack_140,pppplVar16);
        }
        FUN_1057f9838(pppplVar25,pppplVar16,ppplVar5);
      }
    }
LAB_1057f8564:
    func_0x0001057fab5c();
    func_0x0001057fab2c();
    ppuVar12 = &puStack_1e8;
    func_0x0001057f87f0();
    if (((ulong)ppuVar12 & 1) == 0) {
      auVar32._8_8_ = pppplVar16;
      auVar32._0_8_ = ppuVar12;
      return auVar32;
    }
  } while( true );
}



/* Entry: 1057f7ef4; end: 1057f87ab;  */

void FUN_1057f7ef4(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long ****pppplVar14;
  ulong extraout_x8;
  long ****extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long ****extraout_x9;
  ulong uVar15;
  ulong extraout_x9_00;
  long ****pppplVar16;
  long *plVar17;
  long *plVar18;
  long *extraout_x10;
  long ****pppplVar19;
  long ****extraout_x11;
  long *plVar20;
  long ****unaff_x23;
  long ****pppplVar21;
  long ****pppplVar22;
  ulong uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_190 [24];
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f0;
  undefined8 ***pppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  plVar13 = param_1 + 2;
  param_1[3] = 0;
  *plVar13 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  uStack_1c8 = 10;
  uStack_1c0 = 0;
  uStack_1d8 = param_2;
  uStack_1d0 = param_3;
  FUN_1057fa6a0(param_2,param_3,0,10);
  uStack_1b0 = 1;
  uStack_1b8 = param_2;
  do {
    FUN_1057f87ac(&uStack_1f0,&uStack_1d8);
    uStack_d0 = uStack_1f0;
    uStack_c8 = uStack_1e8;
    uStack_c0 = 0x7c;
    uStack_b8 = 0;
    FUN_1057fa6a0(uStack_1f0,uStack_1e8,0,0x7c);
    uStack_a8 = 1;
    if (param_4 == 0) {
      func_0x0001057fa9f0();
      func_0x000106e5ec34(&pppuStack_e8,uStack_118,uStack_110);
    }
    else {
      func_0x0001057fa9f0();
      func_0x000106e5ea70(&pppuStack_e8,uStack_118,uStack_110);
    }
    plVar20 = param_1;
    FUN_1057f9540(param_1,&pppuStack_e8);
    if (plVar20 != (long *)0x0) {
      uVar11 = 0x10;
      ___cxa_allocate_exception(0x10);
      if (-1 < (char)bStack_d1) {
        uStack_e0 = (ulong)bStack_d1;
        pppuStack_e8 = &pppuStack_e8;
      }
      func_0x000106e5ec10(&plStack_178,pppuStack_e8,uStack_e0);
      func_0x0001004c3cd0(&uStack_118,&UNK_10f2fca82,&plStack_178);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar11,&uStack_118);
      func_0x0001057fa9c8();
      goto LAB_1057f8684;
    }
    iVar9 = (int)&uStack_d0;
    func_0x0001057f87f0();
    if (iVar9 == 0) {
LAB_1057f85a4:
      func_0x0001057fab2c();
      uVar11 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEm(&ppplStack_a0,1);
      func_0x0001004c3cd0(&plStack_178,&UNK_10f2fca3c,&ppplStack_a0);
      func_0x00010048a6c8(&uStack_118,&plStack_178,": ");
      func_0x000100060b18(&pppuStack_e8,&uStack_1f0);
      FUN_10533a9c0(&uStack_d0,&uStack_118,&pppuStack_e8);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar11,&uStack_d0);
      func_0x0001057fa9c8();
      goto LAB_1057f8684;
    }
    func_0x0001057fa9f0();
    uStack_108 = 0x3b;
    uStack_100 = 0;
    FUN_1057fa6a0(uStack_118,uStack_110,0,0x3b);
    uStack_f0 = 1;
    ppplStack_130 = (long ***)0x0;
    ppplStack_128 = (long ***)0x0;
    ppplStack_120 = (long ***)0x0;
    do {
      FUN_1057f87ac(&plStack_148,&uStack_118);
      if (plStack_140 != (long *)0x0) {
        plStack_178 = plStack_148;
        plStack_170 = plStack_140;
        uStack_168 = CONCAT71(uStack_168._1_7_,0x2c);
        uStack_160 = 0;
        FUN_1057fa6a0(plStack_148,plStack_140,0,0x2c);
        uStack_150 = 1;
        if (param_4 == 0) {
          func_0x0001057fab00(&lStack_1a8);
          func_0x000106e5ec34(auStack_190,lStack_1a8,uStack_1a0);
        }
        else {
          func_0x0001057fab00(&ppplStack_a0);
          func_0x000106e5ea70(auStack_190,ppplStack_a0,ppplStack_98);
        }
        uVar23 = 0;
        func_0x0001057f87f0();
        if ((((uVar23 & 1) == 0) ||
            (func_0x0001057fab00(&ppplStack_a0), ppplVar5 = ppplStack_98, ppplVar3 = ppplStack_a0,
            (long ****)ppplStack_98 == (long ****)0x0)) ||
           (_strtof(ppplStack_a0,&lStack_1a8), ppplVar4 = ppplStack_128,
           lStack_1a8 != (long)ppplVar3 + (long)ppplVar5)) {
          func_0x0001057fab34();
          func_0x0001057fab5c();
          goto LAB_1057f85a4;
        }
        uVar1 = CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
        if (ppplStack_128 < ppplStack_120) {
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                    (ppplStack_128,auStack_190);
          *(undefined4 *)(ppplVar4 + 3) = uVar1;
          pppplVar22 = (long ****)(ppplVar4 + 4);
        }
        else {
          pppplVar22 = &ppplStack_130;
          lVar12 = ((long)ppplStack_128 - (long)ppplStack_130 >> 5) + 1;
          func_0x0001057f9708();
          ppplVar5 = ppplStack_128;
          ppplVar3 = ppplStack_130;
          ppplStack_80 = (long ***)&ppplStack_120;
          if (pppplVar22 == (long ****)0x0) {
            pppplVar22 = (long ****)0x0;
            lVar12 = 0;
          }
          else {
            FUN_1057f973c();
          }
          lVar10 = (long)pppplVar22 + ((long)ppplVar5 - (long)ppplVar3);
          unaff_x23 = pppplVar22 + lVar12 * 4;
          ppplStack_a0 = (long ***)pppplVar22;
          ppplStack_98 = (long ***)lVar10;
          ppplStack_90 = (long ***)lVar10;
          ppplStack_88 = (long ***)unaff_x23;
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                    (lVar10,auStack_190);
          *(undefined4 *)(lVar10 + 0x18) = uVar1;
          pppplVar22 = (long ****)(lVar10 + 0x20);
          pppplVar16 = (long ****)(lVar10 - ((long)ppplStack_128 - (long)ppplStack_130));
          _memcpy(pppplVar16);
          ppplStack_90 = ppplStack_130;
          ppplStack_88 = ppplStack_120;
          ppplStack_a0 = ppplStack_130;
          ppplStack_98 = ppplStack_130;
          ppplStack_130 = (long ***)pppplVar16;
          ppplStack_128 = (long ***)pppplVar22;
          ppplStack_120 = (long ***)unaff_x23;
          func_0x0001057f9770(&ppplStack_a0);
        }
        ppplStack_128 = (long ***)pppplVar22;
        func_0x0001057fab34();
      }
      uVar23 = 0;
      func_0x0001057f87f0();
    } while ((uVar23 & 1) != 0);
    if (ppplStack_130 != ppplStack_128) {
      pppplVar16 = &pppuStack_e8;
      FUN_1057f9618();
      pppplVar22 = (long ****)param_1[1];
      if (pppplVar22 != (long ****)0x0) {
        uVar23 = (long)pppplVar22 - 1;
        if (((ulong)pppplVar22 & uVar23) == 0) {
          unaff_x23 = (long ****)(uVar23 & (ulong)pppplVar16);
        }
        else {
          unaff_x23 = pppplVar16;
          if (pppplVar22 <= pppplVar16) {
            uVar15 = 0;
            if (pppplVar22 != (long ****)0x0) {
              uVar15 = (ulong)pppplVar16 / (ulong)pppplVar22;
            }
            unaff_x23 = (long ****)((long)pppplVar16 - uVar15 * (long)pppplVar22);
          }
        }
        plVar20 = *(long **)(*param_1 + (long)unaff_x23 * 8);
        if (plVar20 != (long *)0x0) {
          do {
            while( true ) {
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_1057f822c;
              pppplVar14 = (long ****)plVar20[1];
              if (pppplVar14 != pppplVar16) break;
              plVar17 = plVar20 + 2;
              FUN_1057f9638(plVar17,&pppuStack_e8);
              if (((ulong)plVar17 & 1) != 0) goto LAB_1057f84a4;
            }
            if (((ulong)pppplVar22 & uVar23) == 0) {
              pppplVar14 = (long ****)((ulong)pppplVar14 & uVar23);
            }
            else if (pppplVar22 <= pppplVar14) {
              uVar15 = 0;
              if (pppplVar22 != (long ****)0x0) {
                uVar15 = (ulong)pppplVar14 / (ulong)pppplVar22;
              }
              pppplVar14 = (long ****)((long)pppplVar14 - uVar15 * (long)pppplVar22);
            }
          } while (pppplVar14 == unaff_x23);
        }
      }
LAB_1057f822c:
      plVar20 = (long *)0x40;
      __Znwm();
      uStack_168 = 0;
      pppplVar14 = (long ****)(plVar20 + 2);
      *plVar20 = 0;
      plVar20[1] = (long)pppplVar16;
      plStack_178 = plVar20;
      plStack_170 = plVar13;
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                (pppplVar14,&pppuStack_e8);
      plVar20[5] = 0;
      plVar20[6] = 0;
      plVar20[7] = 0;
      uStack_168 = CONCAT71(uStack_168._1_7_,1);
      func_0x0001057fab98();
      fVar2 = (float)extraout_x8;
      uVar24 = SUB41(fVar2,0);
      uVar25 = (undefined1)((uint)fVar2 >> 8);
      uVar26 = (undefined1)((uint)fVar2 >> 0x10);
      uVar27 = (undefined1)((uint)fVar2 >> 0x18);
      if ((pppplVar22 == (long ****)0x0) || (*(float *)(param_1 + 4) * (float)pppplVar22 < fVar2)) {
        bVar7 = (long ****)0x2 < pppplVar22;
        bVar8 = pppplVar22 == (long ****)0x3;
        func_0x0001057fab78((long)pppplVar22 << 1);
        pppplVar21 = extraout_x8_00;
        if (!bVar7 || bVar8) {
          pppplVar21 = extraout_x9;
        }
        if ((long)pppplVar21 - 1U == 0) {
          pppplVar21 = (long ****)0x2;
        }
        else if (((ulong)pppplVar21 & (long)pppplVar21 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppplVar14 = pppplVar21;
        }
        pppplVar22 = (long ****)param_1[1];
        bVar8 = pppplVar22 <= pppplVar21;
        if (bVar8 && pppplVar21 != pppplVar22) {
LAB_1057f82cc:
          if ((ulong)pppplVar21 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_1057f8684;
          }
          lVar12 = (long)pppplVar21 << 3;
          __Znwm(lVar12);
          FUN_1057f97b8(param_1,lVar12);
          param_1[1] = (long)pppplVar21;
          lVar12 = *param_1;
          for (pppplVar22 = (long ****)0x0; pppplVar21 != pppplVar22;
              pppplVar22 = (long ****)((long)pppplVar22 + 1)) {
            *(undefined8 *)(lVar12 + (long)pppplVar22 * 8) = 0;
          }
          plVar17 = (long *)*plVar13;
          pppplVar22 = pppplVar21;
          if (plVar17 != (long *)0x0) {
            pppplVar14 = (long ****)plVar17[1];
            uVar15 = (long)pppplVar21 - 1;
            uVar23 = 0;
            if (pppplVar21 != (long ****)0x0) {
              uVar23 = (ulong)pppplVar14 / (ulong)pppplVar21;
            }
            pppplVar19 = pppplVar14;
            if (pppplVar21 <= pppplVar14) {
              pppplVar19 = (long ****)((long)pppplVar14 - uVar23 * (long)pppplVar21);
            }
            if (((ulong)pppplVar21 & uVar15) == 0) {
              pppplVar19 = (long ****)((ulong)pppplVar14 & uVar15);
            }
            *(long **)(lVar12 + (long)pppplVar19 * 8) = plVar13;
            while (plVar18 = plVar17, plVar17 = (long *)*plVar18, plVar17 != (long *)0x0) {
              pppplVar14 = (long ****)plVar17[1];
              if (((ulong)pppplVar21 & uVar15) == 0) {
                pppplVar14 = (long ****)((ulong)pppplVar14 & uVar15);
              }
              else if (pppplVar21 <= pppplVar14) {
                uVar23 = 0;
                if (pppplVar21 != (long ****)0x0) {
                  uVar23 = (ulong)pppplVar14 / (ulong)pppplVar21;
                }
                pppplVar14 = (long ****)((long)pppplVar14 - uVar23 * (long)pppplVar21);
              }
              if (pppplVar14 != pppplVar19) {
                if (*(long *)(lVar12 + (long)pppplVar14 * 8) == 0) {
                  *(long **)(lVar12 + (long)pppplVar14 * 8) = plVar18;
                  pppplVar19 = pppplVar14;
                }
                else {
                  func_0x0001057faa24();
                  lVar12 = extraout_x8_01;
                  uVar15 = extraout_x9_00;
                  plVar17 = extraout_x10;
                  pppplVar19 = extraout_x11;
                }
              }
            }
          }
        }
        else if (!bVar8) {
          func_0x0001057faa44();
          if ((bVar8) && (((ulong)pppplVar22 & (long)pppplVar22 - 1U) == 0)) {
            if ((long ****)0x1 < pppplVar14) {
              pppplVar14 = (long ****)(1L << (-LZCOUNT((long)pppplVar14 + -1) & 0x3fU));
            }
          }
          else {
            __ZNSt3__112__next_primeEm();
          }
          if (pppplVar21 <= pppplVar14) {
            pppplVar21 = pppplVar14;
          }
          if (pppplVar21 < pppplVar22) {
            if (pppplVar21 != (long ****)0x0) goto LAB_1057f82cc;
            FUN_1057f97b8(param_1,0);
            param_1[1] = 0;
            pppplVar22 = (long ****)0x0;
          }
          else {
            pppplVar22 = (long ****)param_1[1];
          }
        }
        if (((ulong)pppplVar22 & (long)pppplVar22 - 1U) == 0) {
          unaff_x23 = (long ****)((long)pppplVar22 - 1U & (ulong)pppplVar16);
        }
        else {
          unaff_x23 = pppplVar16;
          if (pppplVar22 <= pppplVar16) {
            uVar23 = 0;
            if (pppplVar22 != (long ****)0x0) {
              uVar23 = (ulong)pppplVar16 / (ulong)pppplVar22;
            }
            unaff_x23 = (long ****)((long)pppplVar16 - uVar23 * (long)pppplVar22);
          }
        }
      }
      lVar12 = *param_1;
      plVar17 = *(long **)(lVar12 + (long)unaff_x23 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar20 = *plVar13;
        *plVar13 = (long)plVar20;
        *(long **)(lVar12 + (long)unaff_x23 * 8) = plVar13;
        if (*plVar20 != 0) {
          pppplVar16 = *(long *****)(*plVar20 + 8);
          if (((ulong)pppplVar22 & (long)pppplVar22 - 1U) == 0) {
            pppplVar16 = (long ****)((ulong)pppplVar16 & (long)pppplVar22 - 1U);
          }
          else if (pppplVar22 <= pppplVar16) {
            uVar23 = 0;
            if (pppplVar22 != (long ****)0x0) {
              uVar23 = (ulong)pppplVar16 / (ulong)pppplVar22;
            }
            pppplVar16 = (long ****)((long)pppplVar16 - uVar23 * (long)pppplVar22);
          }
          *(long **)(lVar12 + (long)pppplVar16 * 8) = plVar20;
        }
      }
      else {
        *plVar20 = *plVar17;
        *plVar17 = (long)plVar20;
      }
      plStack_178 = (long *)0x0;
      func_0x0001057fab98();
      param_1[3] = extraout_x8_02;
      FUN_1057f97d0(&plStack_178);
LAB_1057f84a4:
      ppplVar3 = ppplStack_128;
      pppplVar16 = (long ****)ppplStack_130;
      pppplVar22 = (long ****)(plVar20 + 5);
      if (pppplVar22 != &ppplStack_130) {
        uVar23 = (long)ppplStack_128 - (long)ppplStack_130;
        lVar12 = plVar20[5];
        unaff_x23 = (long ****)ppplVar3;
        if ((ulong)(plVar20[7] - lVar12) < uVar23) {
          if (lVar12 != 0) {
            FUN_1057f99c0(pppplVar22);
            __ZdlPv(*pppplVar22);
            *pppplVar22 = (long ***)0x0;
            plVar20[6] = 0;
            plVar20[7] = 0;
          }
          lVar12 = (long)uVar23 >> 5;
          pppplVar14 = pppplVar22;
          func_0x0001057f9708();
          if ((ulong)pppplVar14 >> 0x3b != 0) {
            func_0x0001057f9730();
LAB_1057f8684:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1057f8688);
            (*pcVar6)();
          }
          FUN_1057f973c();
          plVar20[5] = (long)pppplVar14;
          plVar20[6] = (long)pppplVar14;
          plVar20[7] = (long)(pppplVar14 + lVar12 * 4);
        }
        else {
          if (uVar23 <= (ulong)(plVar20[6] - lVar12)) {
            FUN_1057f9934(ppplStack_130,ppplStack_128);
            FUN_1057f998c(pppplVar22,pppplVar16);
            goto LAB_1057f8564;
          }
          pppplVar16 = (long ****)((long)ppplStack_130 + (plVar20[6] - lVar12));
          FUN_1057f9934(ppplStack_130,pppplVar16);
        }
        FUN_1057f9838(pppplVar22,pppplVar16,ppplVar3);
      }
    }
LAB_1057f8564:
    func_0x0001057fab5c();
    func_0x0001057fab2c();
    uVar23 = 0;
    func_0x0001057f87f0();
    if ((uVar23 & 1) == 0) {
      return;
    }
  } while( true );
}



/* Entry: 1057f87ac; end: 1057f887b;  */

void FUN_1057f87ac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = *(char *)(param_2 + 0x28) != '\x01';
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x0001000671d4(param_2,lVar2,*(undefined8 *)(param_2 + 0x20));
    *param_1 = param_2;
    param_1[1] = lVar2;
  }
  *(bool *)(param_1 + 2) = !bVar1;
  return;
}



/* Entry: 1057f887c; end: 1057f8d2b;  */

long * FUN_1057f887c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long *plVar14;
  ulong extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar15;
  long *extraout_x9;
  ulong extraout_x9_00;
  long *plVar16;
  long *extraout_x10;
  long *plVar17;
  long *plVar18;
  long *extraout_x11;
  long *plVar19;
  long *plVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long *unaff_x25;
  long unaff_x26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  float fVar31;
  float fVar32;
  long *plStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  byte bStack_e1;
  long lStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_c0 = 0x3f800000;
  func_0x000106e5ea70(&pppuStack_f8,param_3,param_4);
  ppppuVar22 = (undefined8 ****)pppuStack_f0;
  ppppuVar21 = (undefined8 ****)pppuStack_f8;
  if (-1 < (char)bStack_e1) {
    ppppuVar22 = (undefined8 ****)(ulong)bStack_e1;
    ppppuVar21 = &pppuStack_f8;
  }
  pppuStack_88 = (undefined8 ****)0x0;
  func_0x0001057f910c(&lStack_b0,&pppuStack_88,1);
  while( true ) {
    ppppuVar11 = *(undefined8 *****)(lStack_a8 + -8);
    if (ppppuVar22 < ppppuVar11) break;
    lVar25 = (long)ppppuVar21 + (long)ppppuVar11 * 4;
    _wmemchr(lVar25,0x20,(long)ppppuVar22 - (long)ppppuVar11);
    if (lVar25 == 0 || lVar25 - (long)ppppuVar21 == -4) break;
    pppuStack_88 = (undefined8 ***)((lVar25 - (long)ppppuVar21 >> 2) + 1);
    FUN_1057f9264(&lStack_b0,&pppuStack_88);
  }
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  lVar25 = 1;
  uStack_100 = 0;
  for (uVar23 = 0; uVar23 < (ulong)(lStack_a8 - lStack_b0 >> 3); uVar23 = uVar23 + 1) {
    unaff_x25 = (long *)0x6;
    unaff_x26 = lVar25;
    do {
      if (unaff_x26 == lStack_a8 - lStack_b0 >> 3) {
        ppppuVar11 = ppppuVar21;
        ppppuVar10 = ppppuVar22;
        FUN_1057f7ec8(ppppuVar21,ppppuVar22,*(undefined8 *)(lStack_b0 + uVar23 * 8),
                      0xffffffffffffffff);
        pppuStack_88 = ppppuVar11;
        pppuStack_80 = ppppuVar10;
        func_0x0001057fab64();
        break;
      }
      ppppuVar11 = ppppuVar21;
      ppppuVar10 = ppppuVar22;
      FUN_1057f7ec8();
      pppuStack_88 = ppppuVar11;
      pppuStack_80 = ppppuVar10;
      func_0x0001057fab64();
      unaff_x26 = unaff_x26 + 1;
      unaff_x25 = (long *)((long)unaff_x25 + -1);
    } while (unaff_x25 != (long *)0x0);
    lVar25 = lVar25 + 1;
  }
  func_0x0001057f951c(&lStack_b0);
  puVar2 = puStack_108;
  for (puVar24 = puStack_110; puVar24 != puVar2; puVar24 = puVar24 + 2) {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwm
              (&lStack_b0,*puVar24,puVar24[1]);
    lVar25 = param_2;
    FUN_1057f9540(param_2,&lStack_b0);
    pfVar6 = (float *)&lStack_b0;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
    ppppuVar22 = (undefined8 ****)0x0;
    if (lVar25 != 0) {
      ppppuVar22 = *(undefined8 *****)(lVar25 + 0x30);
      for (ppppuVar21 = *(undefined8 *****)(lVar25 + 0x28); ppppuVar21 != ppppuVar22;
          ppppuVar21 = ppppuVar21 + 4) {
        func_0x0001057fab50();
        fVar31 = *pfVar6;
        fVar32 = *(float *)(ppppuVar21 + 3);
        func_0x0001057fab50();
        uVar27 = SUB41(fVar32,0);
        uVar28 = (undefined1)((uint)fVar32 >> 8);
        uVar29 = (undefined1)((uint)fVar32 >> 0x10);
        uVar30 = (undefined1)((uint)fVar32 >> 0x18);
        if (fVar32 <= fVar31) {
          uVar27 = SUB41(fVar31,0);
          uVar28 = (undefined1)((uint)fVar31 >> 8);
          uVar29 = (undefined1)((uint)fVar31 >> 0x10);
          uVar30 = (undefined1)((uint)fVar31 >> 0x18);
        }
        *pfVar6 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
      }
    }
  }
  func_0x0001057f94f0(&puStack_110);
  for (plVar12 = plStack_d0; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001057f90a0(param_1,uStack_c8);
  for (plVar12 = plStack_d0; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    lVar25 = (long)*(char *)((long)plVar12 + 0x27);
    if (lVar25 < 0) {
      lVar7 = plVar12[2];
      lVar25 = plVar12[3];
    }
    else {
      lVar7 = (long)(plVar12 + 2);
    }
    func_0x000106e5ec10(&puStack_110,lVar7,lVar25);
    if ((ulong)param_1[1] < (ulong)param_1[2]) {
      func_0x0001057faa04();
      ppppuVar21 = (undefined8 ****)(extraout_x8 + 0x20);
    }
    else {
      plVar26 = param_1;
      FUN_1057f9af8(param_1,(param_1[1] - *param_1 >> 5) + 1);
      func_0x0001057f9a54(&lStack_b0,plVar26,param_1[1] - *param_1 >> 5,param_1 + 2);
      func_0x0001057faa04(puStack_a0);
      puStack_a0 = (undefined8 *)(extraout_x8_00 + 0x20);
      func_0x0001057fab24();
      ppppuVar21 = (undefined8 ****)param_1[1];
      FUN_1057f9ab0(&lStack_b0);
    }
    param_1[1] = (long)ppppuVar21;
    func_0x0001057fab70();
  }
  plVar26 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  plVar8 = plVar26;
  if (plVar26 != plVar12) {
    FUN_1057f9b20(plVar26,plVar12,LZCOUNT((long)plVar12 - (long)plVar26 >> 5) << 1 ^ 0x7e,1);
    plVar26 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    plVar8 = plVar12;
  }
  if (0x140 < (ulong)((long)plVar8 - (long)plVar26)) {
    uVar23 = (long)plVar12 - (long)plVar26 >> 5;
    if (uVar23 < 10) {
      ppppuVar21 = (undefined8 ****)(10 - uVar23);
      if ((undefined8 ****)(param_1[2] - (long)plVar12 >> 5) < ppppuVar21) {
        uVar13 = param_1[2] - (long)plVar26;
        uVar15 = (long)uVar13 >> 4;
        if (uVar15 < 0xb) {
          uVar15 = 10;
        }
        if (0x7fffffffffffffdf < uVar13) {
          uVar15 = 0x7ffffffffffffff;
        }
        func_0x0001057f9a54(&lStack_b0,uVar15,uVar23,param_1 + 2);
        puVar1 = puStack_a0 + (long)ppppuVar21 * 4;
        for (lVar25 = uVar23 * -0x20 + 0x140; lVar25 != 0; lVar25 = lVar25 + -0x20) {
          *puStack_a0 = 0;
          puStack_a0[1] = 0;
          *(undefined4 *)(puStack_a0 + 3) = 0;
          puStack_a0[2] = 0;
          puStack_a0 = puStack_a0 + 4;
        }
        plVar12 = &lStack_b0;
        puStack_a0 = puVar1;
        func_0x0001057fab24();
        FUN_1057f9ab0(&lStack_b0);
      }
      else {
        plVar26 = plVar12 + (long)ppppuVar21 * 4;
        for (lVar25 = uVar23 * -0x20 + 0x140; lVar25 != 0; lVar25 = lVar25 + -0x20) {
          *plVar12 = 0;
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 3) = 0;
          plVar12[2] = 0;
          plVar12 = plVar12 + 4;
        }
        param_1[1] = (long)plVar26;
      }
    }
    else if ((long)plVar12 - (long)plVar26 != 0x140) {
      plVar12 = plVar26 + 0x28;
      func_0x0001057fa604(param_1);
    }
  }
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&pppuStack_f8);
  plVar26 = &lStack_e0;
  FUN_1057fa78c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar26;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&pppuStack_f8);
  plVar8 = &lStack_e0;
  FUN_1057fa78c();
  func_0x0001057fab3c();
  puStack_150 = puVar2;
  pcStack_118 = FUN_1057f8d2c;
  plVar9 = plVar12;
  lStack_160 = unaff_x26;
  plStack_158 = unaff_x25;
  puStack_148 = puVar24;
  pppuStack_140 = ppppuVar22;
  pppuStack_138 = ppppuVar21;
  plStack_130 = plVar26;
  plStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_1057f9618();
  plVar26 = (long *)plVar8[1];
  if (plVar26 != (long *)0x0) {
    uVar23 = (long)plVar26 - 1;
    if (((ulong)plVar26 & uVar23) == 0) {
      unaff_x25 = (long *)(uVar23 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar26 <= plVar9) {
        uVar15 = 0;
        if (plVar26 != (long *)0x0) {
          uVar15 = (ulong)plVar9 / (ulong)plVar26;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar15 * (long)plVar26);
      }
    }
    plVar20 = *(long **)(*plVar8 + (long)unaff_x25 * 8);
    if (plVar20 != (long *)0x0) {
      do {
        while( true ) {
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_1057f8dec;
          plVar14 = (long *)plVar20[1];
          if (plVar14 != plVar9) break;
          plVar14 = plVar20 + 2;
          FUN_1057f9638(plVar14,plVar12);
          if (((ulong)plVar14 & 1) != 0) goto LAB_1057f9064;
        }
        if (((ulong)plVar26 & uVar23) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar23);
        }
        else if (plVar26 <= plVar14) {
          uVar15 = 0;
          if (plVar26 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)plVar26;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)plVar26);
        }
      } while (plVar14 == unaff_x25);
    }
  }
LAB_1057f8dec:
  plVar14 = plVar8 + 2;
  plVar20 = (long *)0x30;
  __Znwm();
  uStack_168 = 0;
  plVar16 = plVar20 + 2;
  *plVar20 = 0;
  plVar20[1] = (long)plVar9;
  plStack_178 = plVar20;
  plStack_170 = plVar14;
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(plVar16,plVar12);
  *(undefined4 *)(plVar20 + 5) = 0;
  uStack_168 = CONCAT71(uStack_168._1_7_,1);
  func_0x0001057fab98();
  if ((plVar26 != (long *)0x0) && ((float)extraout_x8_01 <= *(float *)(plVar8 + 4) * (float)plVar26)
     ) goto LAB_1057f8ff0;
  bVar4 = (long *)0x2 < plVar26;
  bVar5 = plVar26 == (long *)0x3;
  func_0x0001057fab78((long)plVar26 << 1);
  plVar12 = extraout_x8_02;
  if (!bVar4 || bVar5) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar16 = plVar12;
  }
  plVar26 = (long *)plVar8[1];
  bVar5 = plVar26 <= plVar12;
  if (bVar5 && plVar12 != plVar26) {
LAB_1057f8e90:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1057f908c);
      (*pcVar3)();
    }
    lVar25 = (long)plVar12 << 3;
    __Znwm(lVar25);
    FUN_1057fa7dc(plVar8,lVar25);
    plVar8[1] = (long)plVar12;
    lVar25 = *plVar8;
    for (plVar26 = (long *)0x0; plVar12 != plVar26; plVar26 = (long *)((long)plVar26 + 1)) {
      *(undefined8 *)(lVar25 + (long)plVar26 * 8) = 0;
    }
    plVar16 = (long *)*plVar14;
    plVar26 = plVar12;
    if (plVar16 != (long *)0x0) {
      plVar17 = (long *)plVar16[1];
      uVar15 = (long)plVar12 - 1;
      uVar23 = 0;
      if (plVar12 != (long *)0x0) {
        uVar23 = (ulong)plVar17 / (ulong)plVar12;
      }
      plVar18 = plVar17;
      if (plVar12 <= plVar17) {
        plVar18 = (long *)((long)plVar17 - uVar23 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar15) == 0) {
        plVar18 = (long *)((ulong)plVar17 & uVar15);
      }
      *(long **)(lVar25 + (long)plVar18 * 8) = plVar14;
      while (plVar17 = plVar16, plVar16 = (long *)*plVar17, plVar16 != (long *)0x0) {
        plVar19 = (long *)plVar16[1];
        if (((ulong)plVar12 & uVar15) == 0) {
          plVar19 = (long *)((ulong)plVar19 & uVar15);
        }
        else if (plVar12 <= plVar19) {
          uVar23 = 0;
          if (plVar12 != (long *)0x0) {
            uVar23 = (ulong)plVar19 / (ulong)plVar12;
          }
          plVar19 = (long *)((long)plVar19 - uVar23 * (long)plVar12);
        }
        if (plVar19 != plVar18) {
          if (*(long *)(lVar25 + (long)plVar19 * 8) == 0) {
            *(long **)(lVar25 + (long)plVar19 * 8) = plVar17;
            plVar18 = plVar19;
          }
          else {
            func_0x0001057faa24();
            lVar25 = extraout_x8_03;
            uVar15 = extraout_x9_00;
            plVar16 = extraout_x10;
            plVar18 = extraout_x11;
          }
        }
      }
    }
  }
  else if (!bVar5) {
    func_0x0001057faa44();
    if ((bVar5) && (((ulong)plVar26 & (long)plVar26 - 1U) == 0)) {
      if ((long *)0x1 < plVar16) {
        plVar16 = (long *)(1L << (-LZCOUNT((long)plVar16 + -1) & 0x3fU));
      }
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (plVar12 <= plVar16) {
      plVar12 = plVar16;
    }
    if (plVar12 < plVar26) {
      if (plVar12 != (long *)0x0) goto LAB_1057f8e90;
      FUN_1057fa7dc(plVar8,0);
      plVar8[1] = 0;
      plVar26 = (long *)0x0;
    }
    else {
      plVar26 = (long *)plVar8[1];
    }
  }
  if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar26 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar26 <= plVar9) {
      uVar23 = 0;
      if (plVar26 != (long *)0x0) {
        uVar23 = (ulong)plVar9 / (ulong)plVar26;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar23 * (long)plVar26);
    }
  }
LAB_1057f8ff0:
  lVar25 = *plVar8;
  plVar12 = *(long **)(lVar25 + (long)unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar20 = *plVar14;
    *plVar14 = (long)plVar20;
    *(long **)(lVar25 + (long)unaff_x25 * 8) = plVar14;
    if (*plVar20 != 0) {
      plVar12 = *(long **)(*plVar20 + 8);
      if (((ulong)plVar26 & (long)plVar26 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar26 - 1U);
      }
      else if (plVar26 <= plVar12) {
        uVar23 = 0;
        if (plVar26 != (long *)0x0) {
          uVar23 = (ulong)plVar12 / (ulong)plVar26;
        }
        plVar12 = (long *)((long)plVar12 - uVar23 * (long)plVar26);
      }
      *(long **)(lVar25 + (long)plVar12 * 8) = plVar20;
    }
  }
  else {
    *plVar20 = *plVar12;
    *plVar12 = (long)plVar20;
  }
  plStack_178 = (long *)0x0;
  func_0x0001057fab98();
  plVar8[3] = extraout_x8_04;
  FUN_1057fa7f4(&plStack_178);
LAB_1057f9064:
  return plVar20 + 5;
}



/* Entry: 1057f8d2c; end: 1057f909f;  */

long * FUN_1057f8d2c(long *param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x9;
  ulong uVar6;
  ulong extraout_x9_00;
  long *plVar7;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_2;
  FUN_1057f9618();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar14 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar15 <= plVar7) {
        uVar6 = 0;
        if (plVar15 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1057f8dec;
          plVar5 = (long *)plVar12[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar12 + 2;
          FUN_1057f9638(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) goto LAB_1057f9064;
        }
        if (((ulong)plVar15 & uVar14) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar14);
        }
        else if (plVar15 <= plVar5) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar5 / (ulong)plVar15;
          }
          plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar15);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1057f8dec:
  plVar5 = param_1 + 2;
  plVar12 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  plVar8 = plVar12 + 2;
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  plStack_68 = plVar12;
  plStack_60 = plVar5;
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(plVar8,param_2);
  *(undefined4 *)(plVar12 + 5) = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  func_0x0001057fab98();
  if ((plVar15 != (long *)0x0) && ((float)extraout_x8 <= *(float *)(param_1 + 4) * (float)plVar15))
  goto LAB_1057f8ff0;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x0001057fab78((long)plVar15 << 1);
  plVar13 = extraout_x8_00;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = plVar13;
  }
  plVar15 = (long *)param_1[1];
  bVar3 = plVar15 <= plVar13;
  if (bVar3 && plVar13 != plVar15) {
LAB_1057f8e90:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1057f908c);
      (*pcVar1)();
    }
    lVar4 = (long)plVar13 << 3;
    __Znwm(lVar4);
    FUN_1057fa7dc(param_1,lVar4);
    param_1[1] = (long)plVar13;
    lVar4 = *param_1;
    for (plVar15 = (long *)0x0; plVar13 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar5;
    plVar15 = plVar13;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar13 - 1;
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar13;
      }
      plVar10 = plVar9;
      if (plVar13 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar4 + (long)plVar10 * 8) = plVar5;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar13 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar13 <= plVar11) {
          uVar14 = 0;
          if (plVar13 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            func_0x0001057faa24();
            lVar4 = extraout_x8_01;
            uVar6 = extraout_x9_00;
            plVar8 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (!bVar3) {
    func_0x0001057faa44();
    if ((bVar3) && (((ulong)plVar15 & (long)plVar15 - 1U) == 0)) {
      if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_1057f8e90;
      FUN_1057fa7dc(param_1,0);
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar15 <= plVar7) {
      uVar14 = 0;
      if (plVar15 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
    }
  }
LAB_1057f8ff0:
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar7) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar15;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  func_0x0001057fab98();
  param_1[3] = extraout_x8_02;
  FUN_1057fa7f4(&plStack_68);
LAB_1057f9064:
  return plVar12 + 5;
}



/* Entry: 1057f90a0; end: 1057f913b;  */

long * FUN_1057f90a0(long *param_1,ulong param_2)

{
  long alStack_48 [5];
  
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_1057f9a28();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_1057f913c();
      return param_1;
    }
    func_0x0001057f9a54(alStack_48,param_2,param_1[1] - *param_1 >> 5);
    func_0x0001057fab24();
    param_1 = alStack_48;
    FUN_1057f9ab0(param_1);
  }
  return param_1;
}



/* Entry: 1057f913c; end: 1057f91bb;  */

void FUN_1057f913c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1057f91bc(param_1,param_4);
    FUN_1057f91f4(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_1057f9220(&uStack_40);
  return;
}



/* Entry: 1057f91bc; end: 1057f91f3;  */

void FUN_1057f91bc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    func_0x000104becd60();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    return;
  }
  FUN_1057f9214();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1057f91f4; end: 1057f9213;  */

void FUN_1057f91f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1057f9214; end: 1057f921f;  */

long FUN_1057f9214(long param_1)

{
  func_0x0001057fa854();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1057f924c(param_1);
  }
  return param_1;
}



/* Entry: 1057f9220; end: 1057f924b;  */

long FUN_1057f9220(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1057f924c(param_1);
  }
  return param_1;
}



/* Entry: 1057f924c; end: 1057f9263;  */

void FUN_1057f924c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1057f9264; end: 1057f92a7;  */

undefined8 * FUN_1057f9264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1057f92a8();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1057f92a8; end: 1057f9353;  */

long FUN_1057f92a8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_1057f9354(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x000104becd60();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_1057f9394(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_1057f93b4(&plStack_58);
  return lVar3;
}



/* Entry: 1057f9354; end: 1057f9393;  */

long * FUN_1057f9354(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1057f9214();
  func_0x0001057fa9a0();
  func_0x0001057fa8a8();
  return param_1;
}



/* Entry: 1057f9394; end: 1057f93b3;  */

void FUN_1057f9394(void)

{
  func_0x0001057fa9a0();
  func_0x0001057fa8a8();
  return;
}



/* Entry: 1057f93b4; end: 1057f93df;  */

long * FUN_1057f93b4(long *param_1)

{
  FUN_1057f93e0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057f93e0; end: 1057f9403;  */

void FUN_1057f93e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1057f9404; end: 1057f94e3;  */

long * FUN_1057f9404(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    puVar10 = puVar10 + 2;
    plVar4 = param_1;
LAB_1057f94c0:
    param_1[1] = (long)puVar10;
    return plVar4;
  }
  lVar7 = *param_1;
  lVar9 = (long)puVar10 - lVar7;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 >> 0x3c == 0) {
      lVar3 = uVar6 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar9);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar10 = puVar2 + 2;
      plVar8 = puVar2 + (lVar9 >> 4) * -2;
      plVar4 = plVar8;
      _memcpy(plVar8,lVar7,lVar9);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar3 + uVar6 * 0x10;
      if (lVar7 != 0) {
        func_0x0001057faa68();
      }
      goto LAB_1057f94c0;
    }
  }
  else {
    FUN_1057f94e4();
  }
  func_0x000104bd35f4();
  func_0x0001057fa854();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057f94e4; end: 1057f94ef;  */

long * FUN_1057f94e4(long *param_1)

{
  func_0x0001057fa854();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057f94f0; end: 1057f953f;  */

long * FUN_1057f94f0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057f9540; end: 1057f9617;  */

long FUN_1057f9540(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    FUN_1057f9618();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar2 != uVar4) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1057f9638(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 1057f9618; end: 1057f9637;  */

void FUN_1057f9618(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  func_0x0001000df1ac(&uStack_11,puVar2,uVar1 << 2);
  return;
}



/* Entry: 1057f9638; end: 1057f96a3;  */

bool FUN_1057f9638(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    FUN_1057f96a4(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1057f96a4; end: 1057f96b3;  */

undefined8 FUN_1057f96a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__wmemcmp_11034cde8)();
    return param_1;
  }
  return 0;
}



/* Entry: 1057f96b4; end: 1057f96c7;  */

void FUN_1057f96b4(void)

{
  func_0x000104bd47e8(&DAT_10f2fca96);
  FUN_1057f96ec();
  return;
}



/* Entry: 1057f96c8; end: 1057f96eb;  */

void FUN_1057f96c8(void)

{
  FUN_1057f96ec();
  return;
}



/* Entry: 1057f96ec; end: 1057f973b;  */

/* WARNING: Possible PIC construction at 0x0001057f972c: Changing call to branch */

undefined1  [16] FUN_1057f96ec(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar2 = param_2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104bd35f4();
  if (param_2 >> 0x3b == 0) {
    func_0x0001057fabb0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  func_0x0001057fa854();
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar2 = (long)param_1 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  lVar2 = param_1[1];
  while (lVar2 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1057f973c; end: 1057f97b7;  */

undefined1  [16] FUN_1057f973c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar1 = (long)param_1 << 5;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1057f97b8; end: 1057f97cf;  */

void FUN_1057f97b8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1057f97d0; end: 1057f9837;  */

long * FUN_1057f97d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001057f9810(lVar1 + 0x10);
    }
    func_0x0001057faa68();
  }
  return param_1;
}



/* Entry: 1057f9838; end: 1057f98ef;  */

void FUN_1057f9838(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x20) {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(lVar1,param_2);
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    lVar1 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  FUN_1057f98f0(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1057f98f0; end: 1057f9933;  */

long FUN_1057f98f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
    }
  }
  return param_1;
}



/* Entry: 1057f9934; end: 1057f998b;  */

long FUN_1057f9934(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_(lVar1,param_1);
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    lVar1 = lVar1 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



/* Entry: 1057f998c; end: 1057f99bf;  */

void FUN_1057f998c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001057fa9e4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1057f99c0; end: 1057f99c7;  */

void FUN_1057f99c0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001057fa9e4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1057f99c8; end: 1057f9a27;  */

void FUN_1057f99c8(void)

{
  func_0x0001057faa80();
  func_0x0001057f99ec();
  return;
}



/* Entry: 1057f9a28; end: 1057f9a33;  */

void FUN_1057f9a28(void)

{
  func_0x0001057fa854();
  func_0x0001057fa9a0();
  func_0x0001057fa8a8();
  return;
}



/* Entry: 1057f9a34; end: 1057f9aaf;  */

void FUN_1057f9a34(void)

{
  func_0x0001057fa9a0();
  func_0x0001057fa8a8();
  return;
}



/* Entry: 1057f9ab0; end: 1057f9af7;  */

long * FUN_1057f9ab0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057f9af8; end: 1057f9b1f;  */

undefined8 * FUN_1057f9af8(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_CY;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  undefined8 uVar9;
  long extraout_x8_00;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar12;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001057fabb0();
    puVar8 = extraout_x9;
    if ((bool)in_CY) {
      puVar8 = extraout_x8;
    }
    return puVar8;
  }
  FUN_1057f9a28();
  func_0x0001057fa9e4();
LAB_1057f9b50:
  puVar8 = unaff_x20;
LAB_1057f9b64:
  while( true ) {
    unaff_x20 = puVar8;
    uVar18 = (long)unaff_x19 - (long)unaff_x20 >> 5;
    switch(uVar18) {
    case 0:
    case 1:
      return param_1;
    case 2:
      if (*(float *)(unaff_x19 + -1) <= *(float *)(unaff_x20 + 3)) {
        return param_1;
      }
      uVar21 = unaff_x20[1];
      uVar9 = *unaff_x20;
      func_0x0001057fab8c();
      uVar22 = unaff_x19[-3];
      uVar20 = unaff_x19[-4];
      unaff_x20[2] = unaff_x19[-2];
      unaff_x20[1] = uVar22;
      *unaff_x20 = uVar20;
      unaff_x19[-2] = uStack_90;
      unaff_x19[-3] = uVar21;
      unaff_x19[-4] = uVar9;
      uVar19 = *(undefined4 *)(unaff_x20 + 3);
      *(undefined4 *)(unaff_x20 + 3) = *(undefined4 *)(unaff_x19 + -1);
      *(undefined4 *)(unaff_x19 + -1) = uVar19;
      return param_1;
    case 3:
      func_0x0001057faa60(unaff_x20,unaff_x20 + 4);
      return unaff_x20;
    case 4:
      FUN_1057fa320(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x19 + -4);
      return unaff_x20;
    case 5:
      FUN_1057fa378(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x20 + 0xc,unaff_x19 + -4);
      return unaff_x20;
    }
    if ((long)uVar18 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return param_1;
        }
        while( true ) {
          puVar8 = unaff_x20;
          unaff_x20 = puVar8 + 4;
          cVar4 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar5 = (long)unaff_x20 - (long)unaff_x19 < 0;
          bVar6 = unaff_x20 == unaff_x19;
          if (bVar6) break;
          func_0x0001057faba4(*(undefined4 *)(puVar8 + 7));
          if (!bVar6 && cVar5 == cVar4) {
            uStack_98 = puVar8[5];
            uStack_a0 = *unaff_x20;
            func_0x0001057fab8c();
            func_0x0001057faa70();
            do {
              param_1 = puVar8;
              func_0x0001057fab14(param_1 + 4);
              puVar8 = param_1 + -4;
            } while (*(float *)(param_1 + -1) < fStack_88);
            FUN_1057fa5dc(param_1,&uStack_a0);
            func_0x0001057fa9fc();
          }
        }
        return param_1;
      }
      if (unaff_x20 == unaff_x19) {
        return param_1;
      }
      lVar12 = 0;
      puVar8 = unaff_x20;
      goto LAB_1057f9f0c;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return param_1;
      }
      uVar13 = uVar18 - 2 >> 1;
      uVar14 = uVar13;
      goto LAB_1057f9fac;
    }
    puVar8 = unaff_x20 + (uVar18 >> 1) * 4;
    if (uVar18 < 0x81) {
      func_0x0001057faa60(puVar8,unaff_x20);
    }
    else {
      func_0x0001057faa60(unaff_x20,puVar8);
      FUN_1057fa268(unaff_x20 + 4,puVar8 + -4,unaff_x19 + -8);
      FUN_1057fa268(unaff_x20 + 8,puVar8 + 4,unaff_x19 + -0xc);
      FUN_1057fa268(puVar8 + -4,puVar8,puVar8 + 4);
      uVar22 = unaff_x20[1];
      uVar20 = *unaff_x20;
      func_0x0001057fab8c();
      uVar9 = puVar8[2];
      uVar21 = *puVar8;
      unaff_x20[1] = puVar8[1];
      *unaff_x20 = uVar21;
      unaff_x20[2] = uVar9;
      puVar8[2] = uStack_90;
      puVar8[1] = uVar22;
      *puVar8 = uVar20;
      uVar19 = *(undefined4 *)(unaff_x20 + 3);
      *(undefined4 *)(unaff_x20 + 3) = *(undefined4 *)(puVar8 + 3);
      *(undefined4 *)(puVar8 + 3) = uVar19;
      uStack_a0 = uVar20;
      uStack_98 = uVar22;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) break;
    uVar18 = (ulong)(uint)*(float *)(unaff_x20 + 3);
    if (*(float *)(unaff_x20 + 3) < *(float *)(unaff_x20 + -1)) goto LAB_1057f9c40;
    uVar20 = unaff_x20[1];
    uVar9 = *unaff_x20;
    func_0x0001057fab8c();
    uStack_a0 = uVar9;
    uStack_98 = uVar20;
    func_0x0001057faa70();
    fVar23 = (float)uVar18;
    puVar7 = unaff_x20;
    if (fVar23 <= *(float *)(unaff_x19 + -1)) {
      do {
        puVar8 = puVar7 + 4;
        if (unaff_x19 <= puVar8) break;
        pfVar1 = (float *)(puVar7 + 7);
        puVar7 = puVar8;
      } while (fVar23 <= *pfVar1);
    }
    else {
      do {
        puVar8 = puVar7 + 4;
        pfVar1 = (float *)(puVar7 + 7);
        puVar7 = puVar8;
      } while (fVar23 <= *pfVar1);
    }
    puVar7 = unaff_x19;
    puVar10 = unaff_x19;
    if (puVar8 < unaff_x19) {
      do {
        puVar7 = puVar10 + -4;
        pfVar1 = (float *)(puVar10 + -1);
        puVar10 = puVar7;
      } while (*pfVar1 < fVar23);
    }
    while (puVar8 < puVar7) {
      func_0x0001057fa860();
      do {
        pfVar1 = (float *)(puVar8 + 7);
        puVar8 = puVar8 + 4;
        puVar7 = extraout_x8_02;
      } while ((float)uVar18 <= *pfVar1);
      do {
        pfVar1 = (float *)(puVar7 + -1);
        puVar7 = puVar7 + -4;
      } while (*pfVar1 < (float)uVar18);
    }
    param_1 = puVar8 + -4;
    if (unaff_x20 != param_1) {
      FUN_1057fa5dc(unaff_x20,param_1);
    }
    FUN_1057fa5dc(param_1,&uStack_a0);
    func_0x0001057fa9fc();
    param_4 = 0;
  }
  uVar18 = (ulong)*(uint *)(unaff_x20 + 3);
LAB_1057f9c40:
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_90 = unaff_x20[2];
  func_0x0001057faa70(0);
  lVar12 = extraout_x8_00;
  do {
    lVar3 = lVar12 + 0x38;
    lVar12 = lVar12 + 0x20;
    fVar23 = (float)uVar18;
  } while (fVar23 < *(float *)((long)unaff_x20 + lVar3));
  puVar7 = (undefined8 *)((long)unaff_x20 + lVar12);
  puVar10 = unaff_x19;
  puVar8 = puVar7;
  if (lVar12 == 0x20) {
    do {
      puVar11 = puVar10;
      if (puVar10 <= puVar7) break;
      puVar11 = puVar10 + -4;
      pfVar1 = (float *)(puVar10 + -1);
      puVar10 = puVar11;
    } while (*pfVar1 <= fVar23);
  }
  else {
    do {
      puVar11 = puVar10 + -4;
      pfVar1 = (float *)(puVar10 + -1);
      puVar10 = puVar11;
    } while (*pfVar1 <= fVar23);
  }
  while (puVar8 < puVar11) {
    func_0x0001057fa860();
    do {
      pfVar1 = (float *)(puVar8 + 7);
      puVar8 = puVar8 + 4;
      puVar11 = extraout_x8_01;
    } while ((float)uVar18 < *pfVar1);
    do {
      pfVar1 = (float *)(puVar11 + -1);
      puVar11 = puVar11 + -4;
    } while (*pfVar1 <= (float)uVar18);
  }
  puVar11 = puVar8 + -4;
  if (unaff_x20 != puVar11) {
    FUN_1057fa5dc(unaff_x20,puVar11);
  }
  FUN_1057fa5dc(puVar11,&uStack_a0);
  func_0x0001057fa9fc();
  if (puVar10 <= puVar7) {
    puVar7 = unaff_x20;
    FUN_1057fa41c(unaff_x20,puVar11);
    param_1 = puVar8;
    FUN_1057fa41c(puVar8,unaff_x19);
    if ((int)param_1 != 0) goto LAB_1057f9e40;
    if (((ulong)puVar7 & 1) != 0) goto LAB_1057f9b64;
  }
  FUN_1057f9b20(unaff_x20,puVar11,param_3,(uint)param_4 & 1);
  param_4 = 0;
  param_1 = unaff_x20;
  goto LAB_1057f9b64;
LAB_1057f9f0c:
  puVar7 = puVar8 + 4;
  if (puVar7 == unaff_x19) {
    return param_1;
  }
  fStack_88 = *(float *)(puVar8 + 7);
  if (*(float *)(puVar8 + 3) < fStack_88) {
    uStack_98 = puVar8[5];
    uStack_a0 = *puVar7;
    uStack_90 = puVar8[6];
    puVar8[5] = 0;
    puVar8[6] = 0;
    *puVar7 = 0;
    lVar3 = lVar12;
    do {
      lVar16 = lVar3;
      func_0x0001057fab14((long)unaff_x20 + lVar16 + 0x20);
      param_1 = unaff_x20;
      if (lVar16 == 0) goto LAB_1057f9f7c;
      lVar3 = lVar16 + -0x20;
    } while (*(float *)((long)unaff_x20 + lVar16 + -8) < fStack_88);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar16);
LAB_1057f9f7c:
    FUN_1057fa5dc(param_1,&uStack_a0);
    func_0x0001057fa9fc();
  }
  lVar12 = lVar12 + 0x20;
  puVar8 = puVar7;
  goto LAB_1057f9f0c;
LAB_1057f9fac:
  do {
    if ((long)uVar14 <= (long)uVar13) {
      uVar17 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = unaff_x20 + uVar17 * 4;
      uVar15 = uVar14 * 2 + 2;
      if (((long)uVar15 < (long)uVar18) && (*(float *)(puVar8 + 7) < *(float *)(puVar8 + 3))) {
        puVar8 = puVar8 + 4;
        uVar17 = uVar15;
      }
      param_1 = unaff_x20 + uVar14 * 4;
      fVar23 = *(float *)(param_1 + 3);
      if (*(float *)(puVar8 + 3) <= fVar23) {
        uStack_98 = param_1[1];
        uStack_a0 = *param_1;
        uStack_90 = param_1[2];
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        puVar7 = param_1;
        fStack_88 = fVar23;
        do {
          param_1 = puVar8;
          FUN_1057fa5dc(puVar7,param_1);
          if ((long)uVar13 < (long)uVar17) break;
          uVar2 = uVar17 << 1 | 1;
          puVar8 = unaff_x20 + uVar2 * 4;
          uVar15 = uVar17 * 2 + 2;
          uVar17 = uVar2;
          if (((long)uVar15 < (long)uVar18) && (*(float *)(puVar8 + 7) < *(float *)(puVar8 + 3))) {
            puVar8 = puVar8 + 4;
            uVar17 = uVar15;
          }
          puVar7 = param_1;
        } while (*(float *)(puVar8 + 3) <= fVar23);
        FUN_1057fa5dc(param_1,&uStack_a0);
        func_0x0001057fa9fc();
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  do {
    if ((long)uVar18 < 2) {
      return param_1;
    }
    uStack_b8 = unaff_x20[1];
    uStack_c0 = *unaff_x20;
    uStack_b0 = unaff_x20[2];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uStack_a8 = *(undefined4 *)(unaff_x20 + 3);
    puVar8 = unaff_x20;
    uVar14 = 0;
    do {
      uVar15 = uVar14 << 1 | 1;
      uVar13 = uVar14 * 2 + 2;
      puVar7 = puVar8 + uVar14 * 4 + 4;
      if (((long)uVar13 < (long)uVar18) &&
         (*(float *)(puVar8 + uVar14 * 4 + 0xb) < *(float *)(puVar8 + uVar14 * 4 + 7))) {
        puVar7 = puVar8 + uVar14 * 4 + 8;
        uVar15 = uVar13;
      }
      puVar8 = puVar7;
      func_0x0001057fab14();
      uVar14 = uVar15;
    } while ((long)uVar15 <= (long)(uVar18 - 2 >> 1));
    unaff_x19 = unaff_x19 + -4;
    if (puVar8 == unaff_x19) {
      FUN_1057fa5dc(puVar8,&uStack_c0);
    }
    else {
      FUN_1057fa5dc(puVar8,unaff_x19);
      FUN_1057fa5dc(unaff_x19,&uStack_c0);
      lVar12 = (long)puVar8 + (0x20 - (long)unaff_x20) >> 5;
      if (1 < lVar12) {
        uVar14 = lVar12 - 2U >> 1;
        fVar23 = *(float *)(puVar8 + 3);
        if (fVar23 < *(float *)(unaff_x20 + uVar14 * 4 + 3)) {
          uStack_98 = puVar8[1];
          uStack_a0 = *puVar8;
          uStack_90 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar7 = unaff_x20 + uVar14 * 4;
          fStack_88 = fVar23;
          do {
            puVar10 = puVar7;
            FUN_1057fa5dc(puVar8,puVar10);
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar7 = unaff_x20 + uVar14 * 4;
            puVar8 = puVar10;
          } while (fVar23 < *(float *)(unaff_x20 + uVar14 * 4 + 3));
          FUN_1057fa5dc(puVar10,&uStack_a0);
          func_0x0001057fa9fc();
        }
      }
    }
    param_1 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    uVar18 = uVar18 - 1;
  } while( true );
LAB_1057f9e40:
  unaff_x19 = puVar11;
  if (((ulong)puVar7 & 1) != 0) {
    return param_1;
  }
  goto LAB_1057f9b50;
}



/* Entry: 1057f9b20; end: 1057fa267;  */

void FUN_1057f9b20(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 *puVar11;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  
  func_0x0001057fa9e4();
LAB_1057f9b50:
  puVar9 = unaff_x20;
LAB_1057f9b64:
  while( true ) {
    unaff_x20 = puVar9;
    uVar18 = (long)unaff_x19 - (long)unaff_x20 >> 5;
    switch(uVar18) {
    case 0:
    case 1:
      return;
    case 2:
      if (*(float *)(unaff_x19 + -1) <= *(float *)(unaff_x20 + 3)) {
        return;
      }
      uVar21 = unaff_x20[1];
      uVar10 = *unaff_x20;
      func_0x0001057fab8c();
      uVar22 = unaff_x19[-3];
      uVar20 = unaff_x19[-4];
      unaff_x20[2] = unaff_x19[-2];
      unaff_x20[1] = uVar22;
      *unaff_x20 = uVar20;
      unaff_x19[-2] = uStack_80;
      unaff_x19[-3] = uVar21;
      unaff_x19[-4] = uVar10;
      uVar19 = *(undefined4 *)(unaff_x20 + 3);
      *(undefined4 *)(unaff_x20 + 3) = *(undefined4 *)(unaff_x19 + -1);
      *(undefined4 *)(unaff_x19 + -1) = uVar19;
      return;
    case 3:
      func_0x0001057faa60(unaff_x20,unaff_x20 + 4);
      return;
    case 4:
      FUN_1057fa320(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x19 + -4);
      return;
    case 5:
      FUN_1057fa378(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x20 + 0xc,unaff_x19 + -4);
      return;
    }
    if ((long)uVar18 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          puVar9 = unaff_x20;
          unaff_x20 = puVar9 + 4;
          cVar4 = SBORROW8((long)unaff_x20,(long)unaff_x19);
          cVar5 = (long)unaff_x20 - (long)unaff_x19 < 0;
          bVar6 = unaff_x20 == unaff_x19;
          if (bVar6) break;
          func_0x0001057faba4(*(undefined4 *)(puVar9 + 7));
          if (!bVar6 && cVar5 == cVar4) {
            uStack_88 = puVar9[5];
            uStack_90 = *unaff_x20;
            func_0x0001057fab8c();
            func_0x0001057faa70();
            do {
              puVar7 = puVar9;
              func_0x0001057fab14(puVar7 + 4);
              puVar9 = puVar7 + -4;
            } while (*(float *)(puVar7 + -1) < fStack_78);
            FUN_1057fa5dc(puVar7,&uStack_90);
            func_0x0001057fa9fc();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar12 = 0;
      puVar9 = unaff_x20;
      goto LAB_1057f9f0c;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar13 = uVar18 - 2 >> 1;
      uVar14 = uVar13;
      goto LAB_1057f9fac;
    }
    puVar9 = unaff_x20 + (uVar18 >> 1) * 4;
    if (uVar18 < 0x81) {
      func_0x0001057faa60(puVar9,unaff_x20);
    }
    else {
      func_0x0001057faa60(unaff_x20,puVar9);
      FUN_1057fa268(unaff_x20 + 4,puVar9 + -4,unaff_x19 + -8);
      FUN_1057fa268(unaff_x20 + 8,puVar9 + 4,unaff_x19 + -0xc);
      FUN_1057fa268(puVar9 + -4,puVar9,puVar9 + 4);
      uVar22 = unaff_x20[1];
      uVar20 = *unaff_x20;
      func_0x0001057fab8c();
      uVar10 = puVar9[2];
      uVar21 = *puVar9;
      unaff_x20[1] = puVar9[1];
      *unaff_x20 = uVar21;
      unaff_x20[2] = uVar10;
      puVar9[2] = uStack_80;
      puVar9[1] = uVar22;
      *puVar9 = uVar20;
      uVar19 = *(undefined4 *)(unaff_x20 + 3);
      *(undefined4 *)(unaff_x20 + 3) = *(undefined4 *)(puVar9 + 3);
      *(undefined4 *)(puVar9 + 3) = uVar19;
      uStack_90 = uVar20;
      uStack_88 = uVar22;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) break;
    uVar18 = (ulong)(uint)*(float *)(unaff_x20 + 3);
    if (*(float *)(unaff_x20 + 3) < *(float *)(unaff_x20 + -1)) goto LAB_1057f9c40;
    uVar20 = unaff_x20[1];
    uVar10 = *unaff_x20;
    func_0x0001057fab8c();
    uStack_90 = uVar10;
    uStack_88 = uVar20;
    func_0x0001057faa70();
    fVar23 = (float)uVar18;
    puVar7 = unaff_x20;
    if (fVar23 <= *(float *)(unaff_x19 + -1)) {
      do {
        puVar9 = puVar7 + 4;
        if (unaff_x19 <= puVar9) break;
        pfVar1 = (float *)(puVar7 + 7);
        puVar7 = puVar9;
      } while (fVar23 <= *pfVar1);
    }
    else {
      do {
        puVar9 = puVar7 + 4;
        pfVar1 = (float *)(puVar7 + 7);
        puVar7 = puVar9;
      } while (fVar23 <= *pfVar1);
    }
    puVar7 = unaff_x19;
    puVar8 = unaff_x19;
    if (puVar9 < unaff_x19) {
      do {
        puVar7 = puVar8 + -4;
        pfVar1 = (float *)(puVar8 + -1);
        puVar8 = puVar7;
      } while (*pfVar1 < fVar23);
    }
    while (puVar9 < puVar7) {
      func_0x0001057fa860();
      do {
        pfVar1 = (float *)(puVar9 + 7);
        puVar9 = puVar9 + 4;
        puVar7 = extraout_x8_01;
      } while ((float)uVar18 <= *pfVar1);
      do {
        pfVar1 = (float *)(puVar7 + -1);
        puVar7 = puVar7 + -4;
      } while (*pfVar1 < (float)uVar18);
    }
    puVar7 = puVar9 + -4;
    if (unaff_x20 != puVar7) {
      FUN_1057fa5dc(unaff_x20,puVar7);
    }
    FUN_1057fa5dc(puVar7,&uStack_90);
    func_0x0001057fa9fc();
    param_4 = 0;
  }
  uVar18 = (ulong)*(uint *)(unaff_x20 + 3);
LAB_1057f9c40:
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_80 = unaff_x20[2];
  func_0x0001057faa70(0);
  lVar12 = extraout_x8;
  do {
    lVar3 = lVar12 + 0x38;
    lVar12 = lVar12 + 0x20;
    fVar23 = (float)uVar18;
  } while (fVar23 < *(float *)((long)unaff_x20 + lVar3));
  puVar7 = (undefined8 *)((long)unaff_x20 + lVar12);
  puVar8 = unaff_x19;
  puVar9 = puVar7;
  if (lVar12 == 0x20) {
    do {
      puVar11 = puVar8;
      if (puVar8 <= puVar7) break;
      puVar11 = puVar8 + -4;
      pfVar1 = (float *)(puVar8 + -1);
      puVar8 = puVar11;
    } while (*pfVar1 <= fVar23);
  }
  else {
    do {
      puVar11 = puVar8 + -4;
      pfVar1 = (float *)(puVar8 + -1);
      puVar8 = puVar11;
    } while (*pfVar1 <= fVar23);
  }
  while (puVar9 < puVar11) {
    func_0x0001057fa860();
    do {
      pfVar1 = (float *)(puVar9 + 7);
      puVar9 = puVar9 + 4;
      puVar11 = extraout_x8_00;
    } while ((float)uVar18 < *pfVar1);
    do {
      pfVar1 = (float *)(puVar11 + -1);
      puVar11 = puVar11 + -4;
    } while (*pfVar1 <= (float)uVar18);
  }
  puVar11 = puVar9 + -4;
  if (unaff_x20 != puVar11) {
    FUN_1057fa5dc(unaff_x20,puVar11);
  }
  FUN_1057fa5dc(puVar11,&uStack_90);
  func_0x0001057fa9fc();
  if (puVar8 <= puVar7) {
    puVar7 = unaff_x20;
    FUN_1057fa41c(unaff_x20,puVar11);
    puVar8 = puVar9;
    FUN_1057fa41c(puVar9,unaff_x19);
    if ((int)puVar8 != 0) goto LAB_1057f9e40;
    if (((ulong)puVar7 & 1) != 0) goto LAB_1057f9b64;
  }
  FUN_1057f9b20(unaff_x20,puVar11,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_1057f9b64;
LAB_1057f9f0c:
  puVar7 = puVar9 + 4;
  if (puVar7 == unaff_x19) {
    return;
  }
  fStack_78 = *(float *)(puVar9 + 7);
  if (*(float *)(puVar9 + 3) < fStack_78) {
    uStack_88 = puVar9[5];
    uStack_90 = *puVar7;
    uStack_80 = puVar9[6];
    puVar9[5] = 0;
    puVar9[6] = 0;
    *puVar7 = 0;
    lVar3 = lVar12;
    do {
      lVar16 = lVar3;
      func_0x0001057fab14((long)unaff_x20 + lVar16 + 0x20);
      puVar9 = unaff_x20;
      if (lVar16 == 0) goto LAB_1057f9f7c;
      lVar3 = lVar16 + -0x20;
    } while (*(float *)((long)unaff_x20 + lVar16 + -8) < fStack_78);
    puVar9 = (undefined8 *)((long)unaff_x20 + lVar16);
LAB_1057f9f7c:
    FUN_1057fa5dc(puVar9,&uStack_90);
    func_0x0001057fa9fc();
  }
  lVar12 = lVar12 + 0x20;
  puVar9 = puVar7;
  goto LAB_1057f9f0c;
LAB_1057f9fac:
  do {
    if ((long)uVar14 <= (long)uVar13) {
      uVar17 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      puVar9 = unaff_x20 + uVar17 * 4;
      uVar15 = uVar14 * 2 + 2;
      if (((long)uVar15 < (long)uVar18) && (*(float *)(puVar9 + 7) < *(float *)(puVar9 + 3))) {
        puVar9 = puVar9 + 4;
        uVar17 = uVar15;
      }
      puVar7 = unaff_x20 + uVar14 * 4;
      fVar23 = *(float *)(puVar7 + 3);
      if (*(float *)(puVar9 + 3) <= fVar23) {
        uStack_88 = puVar7[1];
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        fStack_78 = fVar23;
        do {
          puVar8 = puVar9;
          FUN_1057fa5dc(puVar7,puVar8);
          if ((long)uVar13 < (long)uVar17) break;
          uVar2 = uVar17 << 1 | 1;
          puVar9 = unaff_x20 + uVar2 * 4;
          uVar15 = uVar17 * 2 + 2;
          uVar17 = uVar2;
          if (((long)uVar15 < (long)uVar18) && (*(float *)(puVar9 + 7) < *(float *)(puVar9 + 3))) {
            puVar9 = puVar9 + 4;
            uVar17 = uVar15;
          }
          puVar7 = puVar8;
        } while (*(float *)(puVar9 + 3) <= fVar23);
        FUN_1057fa5dc(puVar8,&uStack_90);
        func_0x0001057fa9fc();
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  do {
    if ((long)uVar18 < 2) {
      return;
    }
    uStack_a8 = unaff_x20[1];
    uStack_b0 = *unaff_x20;
    uStack_a0 = unaff_x20[2];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uStack_98 = *(undefined4 *)(unaff_x20 + 3);
    puVar9 = unaff_x20;
    uVar14 = 0;
    do {
      uVar15 = uVar14 << 1 | 1;
      uVar13 = uVar14 * 2 + 2;
      puVar7 = puVar9 + uVar14 * 4 + 4;
      if (((long)uVar13 < (long)uVar18) &&
         (*(float *)(puVar9 + uVar14 * 4 + 0xb) < *(float *)(puVar9 + uVar14 * 4 + 7))) {
        puVar7 = puVar9 + uVar14 * 4 + 8;
        uVar15 = uVar13;
      }
      puVar9 = puVar7;
      func_0x0001057fab14();
      uVar14 = uVar15;
    } while ((long)uVar15 <= (long)(uVar18 - 2 >> 1));
    unaff_x19 = unaff_x19 + -4;
    if (puVar9 == unaff_x19) {
      FUN_1057fa5dc(puVar9,&uStack_b0);
    }
    else {
      FUN_1057fa5dc(puVar9,unaff_x19);
      FUN_1057fa5dc(unaff_x19,&uStack_b0);
      lVar12 = (long)puVar9 + (0x20 - (long)unaff_x20) >> 5;
      if (1 < lVar12) {
        uVar14 = lVar12 - 2U >> 1;
        fVar23 = *(float *)(puVar9 + 3);
        if (fVar23 < *(float *)(unaff_x20 + uVar14 * 4 + 3)) {
          uStack_88 = puVar9[1];
          uStack_90 = *puVar9;
          uStack_80 = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          puVar7 = unaff_x20 + uVar14 * 4;
          fStack_78 = fVar23;
          do {
            puVar8 = puVar7;
            FUN_1057fa5dc(puVar9,puVar8);
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar7 = unaff_x20 + uVar14 * 4;
            puVar9 = puVar8;
          } while (fVar23 < *(float *)(unaff_x20 + uVar14 * 4 + 3));
          FUN_1057fa5dc(puVar8,&uStack_90);
          func_0x0001057fa9fc();
        }
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    uVar18 = uVar18 - 1;
  } while( true );
LAB_1057f9e40:
  unaff_x19 = puVar11;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_1057f9b50;
}



/* Entry: 1057fa268; end: 1057fa31f;  */

void FUN_1057fa268(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x30;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  fVar3 = *(float *)(param_2 + 0x18);
  if (fVar3 <= *(float *)(param_1 + 3)) {
    if (fVar3 < *(float *)(param_3 + 3)) {
      func_0x0001057faad0();
      *(float *)(param_3 + 3) = fVar3;
      if (*(float *)(param_1 + 3) < *(float *)(param_2 + 0x18)) {
        func_0x0001057faa90();
      }
    }
  }
  else {
    if (*(float *)(param_3 + 3) <= fVar3) {
      func_0x0001057faa90();
      if (*(float *)(param_3 + 3) <= fVar3) {
        return;
      }
      func_0x0001057faad0(unaff_x30);
    }
    else {
      uVar1 = param_1[2];
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar2 = param_3[2];
      uVar6 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar6;
      param_1[2] = uVar2;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      param_3[2] = uVar1;
      fVar3 = *(float *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 3);
    }
    *(float *)(param_3 + 3) = fVar3;
  }
  return;
}



/* Entry: 1057fa320; end: 1057fa377;  */

void FUN_1057fa320(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long in_x3;
  
  func_0x0001057fa9e4();
  FUN_1057fa268();
  func_0x0001057faba4(*(undefined4 *)(in_x3 + 0x18));
  if (((!(bool)in_ZR && in_NG == in_OV) && (func_0x0001057fa8ec(), !(bool)in_ZR && in_NG == in_OV))
     && (func_0x0001057fa92c(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x0001057fa96c();
  }
  return;
}



/* Entry: 1057fa378; end: 1057fa41b;  */

void FUN_1057fa378(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  
  func_0x0001057fa9e4();
  FUN_1057fa320();
  fVar6 = *(float *)(in_x4 + 3);
  fVar10 = *(float *)(in_x3 + 3);
  cVar3 = NAN(fVar6) || NAN(fVar10);
  bVar2 = fVar6 == fVar10;
  cVar1 = fVar6 < fVar10;
  if (fVar10 < fVar6) {
    uVar4 = in_x3[2];
    uVar9 = in_x3[1];
    uVar8 = *in_x3;
    uVar5 = in_x4[2];
    uVar11 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar11;
    in_x3[2] = uVar5;
    in_x4[1] = uVar9;
    *in_x4 = uVar8;
    in_x4[2] = uVar4;
    uVar7 = *(undefined4 *)(in_x3 + 3);
    *(undefined4 *)(in_x3 + 3) = *(undefined4 *)(in_x4 + 3);
    *(undefined4 *)(in_x4 + 3) = uVar7;
    func_0x0001057faba4(*(undefined4 *)(in_x3 + 3));
    if (((!bVar2 && cVar1 == cVar3) && (func_0x0001057fa8ec(), !bVar2 && cVar1 == cVar3)) &&
       (func_0x0001057fa92c(), !bVar2 && cVar1 == cVar3)) {
      func_0x0001057fa96c();
    }
  }
  return;
}



/* Entry: 1057fa41c; end: 1057fa5db;  */

bool FUN_1057fa41c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  
  switch((long)param_2 - (long)param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_1 + 3) < *(float *)(param_2 + -1)) {
      uVar6 = param_1[2];
      uVar15 = param_1[1];
      uVar14 = *param_1;
      uVar8 = param_2[-2];
      uVar16 = param_2[-4];
      param_1[1] = param_2[-3];
      *param_1 = uVar16;
      param_1[2] = uVar8;
      param_2[-3] = uVar15;
      param_2[-4] = uVar14;
      param_2[-2] = uVar6;
      uVar12 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + -1);
      *(undefined4 *)(param_2 + -1) = uVar12;
      return true;
    }
    return true;
  case 3:
    FUN_1057fa268(param_1,param_1 + 4,param_2 + -4);
    break;
  case 4:
    FUN_1057fa320(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
    break;
  case 5:
    FUN_1057fa378(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
    break;
  default:
    func_0x0001057faa60(param_1,param_1 + 4);
    lVar10 = 0;
    iVar11 = 0;
    puVar7 = param_1 + 0xc;
    while( true ) {
      cVar2 = SBORROW8((long)puVar7,(long)param_2);
      cVar3 = (long)puVar7 - (long)param_2 < 0;
      bVar4 = puVar7 == param_2;
      if (bVar4) break;
      fVar13 = *(float *)(puVar7 + 3);
      func_0x0001057faba4();
      if (!bVar4 && cVar3 == cVar2) {
        uStack_88 = puVar7[1];
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        lVar1 = lVar10;
        fStack_78 = fVar13;
        do {
          lVar9 = lVar1;
          FUN_1057fa5dc((long)param_1 + lVar9 + 0x60,(long)param_1 + lVar9 + 0x40);
          puVar5 = param_1;
          if (lVar9 == -0x40) goto LAB_1057fa570;
          lVar1 = lVar9 + -0x20;
        } while (*(float *)((long)param_1 + lVar9 + 0x38) < fStack_78);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x40);
LAB_1057fa570:
        FUN_1057fa5dc(puVar5,&uStack_90);
        iVar11 = iVar11 + 1;
        func_0x0001057fab70();
        if (iVar11 == 8) {
          return puVar7 + 4 == param_2;
        }
      }
      puVar7 = puVar7 + 4;
      lVar10 = lVar10 + 0x20;
    }
  }
  return true;
}



/* Entry: 1057fa5dc; end: 1057fa697;  */

void FUN_1057fa5dc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001057fa9e4();
  func_0x000100066230();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1057fa698; end: 1057fa69f;  */

void FUN_1057fa698(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001057fa9e4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1057fa6a0; end: 1057fa6db;  */

long FUN_1057fa6a0(undefined8 param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  puStack_28 = param_2;
  FUN_1057fa6dc(&uStack_30,param_4);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    puStack_28 = (undefined1 *)puVar1;
  }
  return (long)puStack_28 - param_3;
}



/* Entry: 1057fa6dc; end: 1057fa6ef;  */

long FUN_1057fa6dc(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((ulong)param_1[1] < param_3) {
    return -1;
  }
  lVar1 = lVar2 + param_3;
  func_0x0001003b0798(lVar1,param_2,param_1[1] - param_3);
  lVar2 = lVar1 - lVar2;
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  return lVar2;
}



/* Entry: 1057fa6f0; end: 1057fa773;  */

long FUN_1057fa6f0(long param_1)

{
  func_0x0001057fa718(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1057fa774(param_1,0);
  return param_1;
}



/* Entry: 1057fa774; end: 1057fa78b;  */

void FUN_1057fa774(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1057fa78c; end: 1057fa7db;  */

long * FUN_1057fa78c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(lVar1);
    func_0x0001057faa68();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057fa7dc; end: 1057fa7f3;  */

void FUN_1057fa7dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1057fa7f4; end: 1057fa833;  */

long * FUN_1057fa7f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(lVar1 + 0x10);
    }
    func_0x0001057faa68();
  }
  return param_1;
}



/* Entry: 1057fa834; end: 1057fabd7;  */

void FUN_1057fa834(void)

{
  return;
}



/* Entry: 1057fabd8; end: 1057fadf3;  */

void FUN_1057fabd8(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = param_2;
  FUN_1057fb76c();
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_1108b5128;
  uStack_70 = 0;
  uStack_58 = 3;
  func_0x0001057fb710();
  uVar5 = *puVar4;
  func_0x0001057fb6e4();
  func_0x0001057fb6b0();
  func_0x0001057fb6cc();
  uStack_90 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_80 = 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  bVar3 = *param_3;
  puVar6 = (undefined8 *)0x48;
  uStack_88 = uVar5;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1108b51c8;
  puVar7 = puVar6 + 3;
  *puVar7 = &PTR_FUN_1108b50d0;
  FUN_1057f7ef4(puVar6 + 4,uVar1,uVar2,(bVar3 ^ 0xff) & 1);
  puStack_a0 = puVar7;
  puStack_98 = puVar6;
  FUN_1057fb76c();
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_1108b5128;
  uStack_70 = 0;
  uStack_58 = 0;
  func_0x0001057fb710();
  puVar4 = &uStack_90;
  func_0x0001002acb3c();
  func_0x0001057fb758();
  (*extraout_x8)();
  func_0x0001057fb6cc();
  FUN_1057fb76c();
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_1108b5128;
  uStack_70 = 0;
  uStack_58 = 4;
  func_0x0001057fb710();
  func_0x0001057fb6e4(*puVar4);
  func_0x0001057fb6b0();
  func_0x0001057fb6cc();
  *param_1 = puVar7;
  param_1[1] = puVar6;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_1057fb688(&puStack_a0);
  return;
}



/* Entry: 1057fadf4; end: 1057fae93;  */

long FUN_1057fadf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  
  func_0x00010002b838(&uStack_68,PTR_DAT_113102100);
  puVar1 = PTR_DAT_113102108;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar2 = PTR_DAT_113102108;
  _strlen();
  puStack_30 = puVar1;
  puStack_28 = puVar2;
  func_0x0001000fecf4(param_1 + 8,&uStack_50);
  func_0x0001004c38a0(param_1 + 8,&puStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  func_0x0001057fb6f8();
  return param_1;
}



/* Entry: 1057fae94; end: 1057fae97;  */

undefined8 * FUN_1057fae94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108b5190;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 1057fae98; end: 1057fb1ab;  */

void FUN_1057fae98(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *extraout_x8;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long lStack_b0;
  undefined ***pppuStack_a8;
  undefined ***apppuStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x0001057fb6b8();
  FUN_1057fb76c();
  pppuStack_68 = (undefined ***)0x0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_1108b5128;
  uStack_70 = 0;
  uStack_58 = 6;
  func_0x0001057fb73c();
  uVar2 = *param_1;
  func_0x0001057fb6e4();
  func_0x0001057fb6b0();
  func_0x0001057fb6f0();
  uStack_d8 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_c8 = 1;
  uStack_d0 = uVar2;
  func_0x0001057fb724();
  pppuVar3 = (undefined ***)(unaff_x20 + 8);
  FUN_1057f887c(&lStack_90);
  lStack_b0 = 0;
  pppuStack_a8 = (undefined ***)0x0;
  apppuStack_a0[0] = (undefined ***)0x0;
  lVar8 = lStack_90;
  lVar10 = lStack_88;
  if (lStack_88 - lStack_90 != 0) {
    uVar5 = lStack_88 - lStack_90 >> 5;
    if (uVar5 >> 0x3b != 0) {
      FUN_1057fb44c();
LAB_1057fb0c0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1057fb0c4);
      (*pcVar1)();
    }
    pppuVar3 = &ppuStack_78;
    func_0x0001057fb51c(pppuVar3,uVar5,0,apppuStack_a0);
    func_0x0001057fb74c();
    func_0x0001057fb744();
    lVar8 = lStack_90;
    lVar10 = lStack_88;
  }
  do {
    pppuVar9 = pppuStack_a8;
    if (lVar8 == lVar10) {
      FUN_1057fb76c();
      pppuStack_68 = (undefined ***)0x0;
      uStack_60 = 0;
      ppuStack_78 = &PTR_FUN_1108b5128;
      uStack_70 = 0;
      uStack_58 = 1;
      func_0x0001057fb73c();
      puVar4 = &uStack_d8;
      func_0x0001002acb3c(puVar4);
      (**(code **)**pppuVar3)(*pppuVar3,&ppuStack_78,puVar4);
      func_0x0001057fb6f0();
      FUN_1057fb76c();
      pppuStack_68 = (undefined ***)0x0;
      uStack_60 = 0;
      ppuStack_78 = &PTR_FUN_1108b5128;
      uStack_70 = 0;
      uStack_58 = 7;
      func_0x0001057fb73c();
      func_0x0001057fb6d4();
      func_0x0001057fb6b0();
      func_0x0001057fb6f0();
      extraout_x8[1] = (long)pppuStack_a8;
      *extraout_x8 = lStack_b0;
      extraout_x8[2] = (long)apppuStack_a0[0];
      lStack_b0 = 0;
      pppuStack_a8 = (undefined ***)0x0;
      apppuStack_a0[0] = (undefined ***)0x0;
      *(undefined1 *)(extraout_x8 + 3) = 1;
      FUN_1057f7bd8(&lStack_b0);
      func_0x0001057fa638(&lStack_90);
      return;
    }
    if (pppuStack_a8 < apppuStack_a0[0]) {
      func_0x0001057fb5c8(pppuStack_a8,lVar8,lVar8 + 0x18);
      pppuVar9 = pppuVar9 + 4;
      pppuVar3 = pppuStack_a8;
    }
    else {
      lVar6 = (long)pppuStack_a8 - lStack_b0 >> 5;
      uVar5 = lVar6 + 1;
      if (uVar5 >> 0x3b != 0) {
        FUN_1057fb44c();
        goto LAB_1057fb0c0;
      }
      uVar7 = (long)apppuStack_a0[0] - lStack_b0 >> 4;
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      if (0x7fffffffffffffdf < (ulong)((long)apppuStack_a0[0] - lStack_b0)) {
        uVar7 = 0x7ffffffffffffff;
      }
      func_0x0001057fb51c(&ppuStack_78,uVar7,lVar6,apppuStack_a0);
      func_0x0001057fb5c8(pppuStack_68,lVar8,lVar8 + 0x18);
      pppuVar3 = pppuStack_68;
      pppuStack_68 = pppuStack_68 + 4;
      func_0x0001057fb74c();
      pppuVar9 = pppuStack_a8;
      func_0x0001057fb744();
    }
    lVar8 = lVar8 + 0x20;
    pppuStack_a8 = pppuVar9;
  } while( true );
}



/* Entry: 1057fb1ac; end: 1057fb3db;  */

void FUN_1057fb1ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined4 uStack_50;
  
  func_0x0001057fb6b8();
  FUN_1057fb76c();
  uStack_60 = 0;
  dStack_58 = 0.0;
  ppuStack_70 = &PTR_FUN_1108b5128;
  uStack_68 = 0;
  uStack_50 = 9;
  func_0x0001057fb708();
  uVar3 = *param_1;
  func_0x0001057fb6e4();
  func_0x0001057fb6b0();
  func_0x0001057fb6c4();
  uStack_88 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_78 = 1;
  uStack_80 = uVar3;
  func_0x0001057fb724();
  FUN_1057f887c(&lStack_a0,unaff_x20 + 8);
  if (lStack_a0 == lStack_98) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 4) = 0;
    *(undefined1 *)(extraout_x8 + 5) = 1;
  }
  else {
    FUN_1057fb76c();
    uStack_60 = 0;
    dStack_58 = 0.0;
    ppuStack_70 = &PTR_FUN_1108b5128;
    uStack_68 = 0;
    uStack_50 = 2;
    func_0x0001057fb708();
    puVar4 = &uStack_88;
    func_0x0001002acb3c();
    func_0x0001057fb758();
    (*extraout_x8_00)();
    func_0x0001057fb6c4();
    FUN_1057fb76c();
    uStack_60 = 0;
    dStack_58 = 0.0;
    ppuStack_70 = &PTR_FUN_1108b5128;
    uStack_68 = 0;
    uStack_50 = 10;
    func_0x0001057fb708();
    func_0x0001057fb6e4(*puVar4);
    func_0x0001057fb6b0();
    func_0x0001057fb6c4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b8,lStack_a0);
    uVar2 = uStack_a8;
    uVar1 = uStack_b0;
    uVar3 = uStack_b8;
    dStack_58 = (double)*(float *)(lStack_a0 + 0x18);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    extraout_x8[1] = uVar1;
    *extraout_x8 = uVar3;
    extraout_x8[2] = uVar2;
    uStack_68 = 0;
    uStack_60 = 0;
    ppuStack_70 = (undefined **)0x0;
    extraout_x8[3] = dStack_58;
    *(undefined1 *)(extraout_x8 + 4) = 1;
    *(undefined1 *)(extraout_x8 + 5) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_70);
    func_0x0001057fb6f8();
  }
  func_0x0001057fa638(&lStack_a0);
  return;
}



/* Entry: 1057fb3dc; end: 1057fb3df;  */

undefined8 * FUN_1057fb3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b50d0;
  FUN_1057fa6f0(param_1 + 1);
  return param_1;
}



/* Entry: 1057fb3e0; end: 1057fb407;  */

void FUN_1057fb3e0(void)

{
  func_0x0001057fb624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


