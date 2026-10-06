/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b029cc; end: 106b02baf;  */

void FUN_106b029cc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  double dVar8;
  
  if (*(long *)(param_2 + 0x28) == 2) {
    func_0x00010c0938c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    ppuVar7 = &PTR____CFConstantStringClassReference_110dea8b8;
  }
  else {
    if (*(long *)(param_2 + 0x28) != 1) {
      return;
    }
    func_0x00010c093480(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    ppuVar7 = &PTR____CFConstantStringClassReference_110de18b8;
  }
  if (param_1 <= 0.0) {
    return;
  }
  dVar8 = *(double *)(param_2 + 0x30);
  puVar1 = PTR_PTR_1126d0760;
  func_0x00010bf9ce80(PTR_PTR_1126d0760);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dd7ff8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf48f60();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010c272260(PTR_PTR_1126ba4e8,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110e722b8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dea2f8,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar1);
  func_0x00010befbfe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar1,
                      (long)((dVar8 - param_1) * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b02bb0; end: 106b02c1f; -[SCLensExplorerPerformanceLogger logLensExplorerLensAppearenceWithEntryPoint:] */

void FUN_106b02bb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440(*(undefined8 *)(param_2 + 0x10));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b02c20;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}



/* Entry: 106b02c20; end: 106b02e03;  */

void FUN_106b02c20(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  double dVar8;
  
  if (*(long *)(param_2 + 0x28) == 1) {
    func_0x00010c0931e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    ppuVar7 = &PTR____CFConstantStringClassReference_110e5e018;
  }
  else {
    if (*(long *)(param_2 + 0x28) != 2) {
      return;
    }
    func_0x00010c093660(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    ppuVar7 = &PTR____CFConstantStringClassReference_110de3ab8;
  }
  if (param_1 <= 0.0) {
    return;
  }
  dVar8 = *(double *)(param_2 + 0x30);
  puVar1 = PTR_PTR_1126d0760;
  func_0x00010bf9ce60(PTR_PTR_1126d0760);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dd7ff8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf48f60();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010c272260(PTR_PTR_1126ba4e8,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110e722b8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110db16f8,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar1);
  func_0x00010befbfe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar1,
                      (long)((dVar8 - param_1) * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b02e04; end: 106b02e9b; -[SCLensExplorerPerformanceLogger logLensExplorerFeedLoadingFailedWithEntryPoint:viewType:] */

void FUN_106b02e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b02e9c;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106b02e9c; end: 106b0304f;  */

void FUN_106b02e9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010c093380(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR_PTR_1126d0760;
  func_0x00010bf9ce00(PTR_PTR_1126d0760);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf48f60();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ba4e8;
  func_0x00010c272260(PTR_PTR_1126ba4e8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30) - 1;
  if (uVar5 < 0xb) {
    uVar6 = *(undefined8 *)(&UNK_10dde5810 + uVar5 * 8);
  }
  else {
    uVar6 = 0;
  }
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e722b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db16f8,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec58a0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9058,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010baff720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e722d8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b03050; end: 106b03157; -[SCLensExplorerPerformanceLogger logFailedToHandleInteractionForItemWithLoggingData:] */

void FUN_106b03050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b030e0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b03158; end: 106b0325f; -[SCLensExplorerPerformanceLogger logFailedToHandleDisappearForItemWithLoggingData:] */

void FUN_106b03158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b031e8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b03260; end: 106b0326b; -[SCLensExplorerPerformanceLogger _pageViewTypeFromLensExplorerPageViewType:] */

bool FUN_106b03260(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 106b0326c; end: 106b03287; -[SCLensExplorerPerformanceLogger _stringValueForLensExplorerPageViewType:] */

undefined ** FUN_106b0326c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6d98;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e655d8;
  }
  return ppuVar1;
}



/* Entry: 106b03288; end: 106b032af; -[SCLensExplorerPerformanceLogger _canLogAppearenceWithEntryPoint:viewType:] */

uint FUN_106b03288(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4b900(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106b032b0; end: 106b0330f; -[SCLensExplorerPerformanceLogger .cxx_destruct] */

void FUN_106b032b0(long param_1)

{
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



/* Entry: 106b03310; end: 106b033d7; -[SCLensExplorerPerformanceTimeTracker initWithTimeProvider:performer:] */

undefined1 *
FUN_106b03310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4e50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b033d8; end: 106b03507; -[SCLensExplorerPerformanceTimeTracker trackLensExplorerPageAppearenceTimeWithEntryPoint:] */

void FUN_106b033d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010bfc4440(param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106b03474;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106b03508; end: 106b0356f; -[SCLensExplorerPerformanceTimeTracker trackLensExplorerPreviewAppearenceTime] */

void FUN_106b03508(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b03570;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 106b03570; end: 106b0358b;  */

void FUN_106b03570(long param_1)

{
  if (*(double *)(*(long *)(param_1 + 0x20) + 0x20) == 0.0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 106b0358c; end: 106b035f3; -[SCLensExplorerPerformanceTimeTracker trackLensExplorerThumbnailAppearenceTime] */

void FUN_106b0358c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b035f4;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 106b035f4; end: 106b0360f;  */

void FUN_106b035f4(long param_1)

{
  if (*(double *)(*(long *)(param_1 + 0x20) + 0x28) == 0.0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 106b03610; end: 106b03677; -[SCLensExplorerPerformanceTimeTracker trackLensExplorerLensAppearenceTime] */

void FUN_106b03610(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b03678;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 106b03678; end: 106b03693;  */

void FUN_106b03678(long param_1)

{
  if (*(double *)(*(long *)(param_1 + 0x20) + 0x30) == 0.0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 106b03694; end: 106b036fb; -[SCLensExplorerPerformanceTimeTracker trackLensExplorerSearchLensAppearenceTime] */

void FUN_106b03694(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106b036fc;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 106b036fc; end: 106b03717;  */

void FUN_106b036fc(long param_1)

{
  if (*(double *)(*(long *)(param_1 + 0x20) + 0x38) == 0.0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 106b03718; end: 106b03797; -[SCLensExplorerPerformanceTimeTracker lensExplorerPageAppearenceTimeWithEntryPoint:] */

undefined8 FUN_106b03718(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,0,param_4);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106b03798; end: 106b0379f; -[SCLensExplorerPerformanceTimeTracker getCurrentAbsoluteTime] */

void FUN_106b03798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_currentRelativeSeconds_1125b5908);
  return;
}



/* Entry: 106b037a0; end: 106b037ab; -[SCLensExplorerPerformanceTimeTracker lensExplorerPreviewAppearenceTime] */

undefined8 FUN_106b037a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return uVar1;
}



/* Entry: 106b037ac; end: 106b037b7; -[SCLensExplorerPerformanceTimeTracker lensExplorerThumbnailAppearenceTime] */

undefined8 FUN_106b037ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return uVar1;
}



/* Entry: 106b037b8; end: 106b037c3; -[SCLensExplorerPerformanceTimeTracker lensExplorerLensAppearenceTime] */

undefined8 FUN_106b037b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return uVar1;
}



/* Entry: 106b037c4; end: 106b037cf; -[SCLensExplorerPerformanceTimeTracker lensExplorerSearchLensAppearenceTime] */

undefined8 FUN_106b037c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return uVar1;
}



/* Entry: 106b037d0; end: 106b0380b; -[SCLensExplorerPerformanceTimeTracker .cxx_destruct] */

void FUN_106b037d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b0380c; end: 106b038f7; -[SCLensExplorerCategoriesLoggingContext initWithSessionIdentifier:sectionName:pageName:lensExplorerPageType:productMode:] */

undefined1 *
FUN_106b0380c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4e58;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b038f8; end: 106b03a2b; -[SCLensExplorerCategoriesLoggingContext loggingContext] */

undefined * FUN_106b038f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bde9320(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
  uVar5 = *(long *)(param_1 + 0x28) - 1;
  if (uVar5 < 0xb) {
    uVar7 = *(undefined8 *)(&UNK_10dde5868 + uVar5 * 8);
  }
  else {
    uVar7 = 0;
  }
  uStack_70 = *(undefined8 *)(param_1 + 8);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e724f8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e72358;
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e72378;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e72398;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e72538;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar6;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_70;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar4,&ppuStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar6 = (undefined *)((long)puVar4 - 1);
  if ((undefined *)0x2 < puVar6) {
    puVar6 = (undefined *)0xffffffffffffffff;
  }
  return puVar6;
}



/* Entry: 106b03a2c; end: 106b03a3b; -[SCLensExplorerCategoriesLoggingContext _convertPageType:] */

ulong FUN_106b03a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (2 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 106b03a3c; end: 106b03a77; -[SCLensExplorerCategoriesLoggingContext .cxx_destruct] */

void FUN_106b03a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b03a78; end: 106b03b23; -[SCLensExplorerAnalytics initWithBlizzardLogger:productMode:sessionIdentifier:] */

undefined1 *
FUN_106b03a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4e60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b03b24; end: 106b03b47; -[SCLensExplorerAnalytics setExitSource:] */

void FUN_106b03b24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be0ab40();
  *(long *)(param_1 + 0x28) = lVar1;
  return;
}



/* Entry: 106b03b48; end: 106b03bcf; -[SCLensExplorerAnalytics startSessionWithEntryPoint:entryCategory:cameraSource:pickerModeEnabled:] */

void FUN_106b03b48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = 5;
  if (param_7 == 0) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x10) = param_1;
  lVar1 = param_2;
  func_0x00010be0ab40(param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = param_5;
  _objc_release(uVar2);
  lVar1 = param_2;
  func_0x00010bdd94a0(param_2,param_3,param_6);
  *(undefined8 *)(param_2 + 0x28) = 5;
  *(long *)(param_2 + 0x30) = lVar1;
  return;
}



/* Entry: 106b03bd0; end: 106b03cf7; -[SCLensExplorerAnalytics stopSession] */

void FUN_106b03bd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_1;
  func_0x00010bee7900();
  if (((int)lVar1 != 0) && (dVar5 = *(double *)(param_1 + 0x10), dVar5 != 0.0)) {
    _CACurrentMediaTime();
    dVar6 = *(double *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126d0770;
    _objc_opt_new(PTR_PTR_1126d0770);
    uVar3 = *(long *)(param_1 + 0x40) - 1;
    if (uVar3 < 0xb) {
      uVar4 = *(undefined8 *)(&UNK_10dde58c0 + uVar3 * 8);
    }
    else {
      uVar4 = 0;
    }
    func_0x00010c1b9da0(puVar2,param_2,*(undefined8 *)(param_1 + 0x48));
    func_0x00010c196980(puVar2,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c196a60(puVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c198620(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1fdde0((double)(long)((dVar5 - dVar6) * 10.0) / 10.0,puVar2);
    func_0x00010c206c40(puVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1769e0(puVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1bb840(puVar2,param_2,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b03cf8; end: 106b03d33; -[SCLensExplorerAnalytics _validateEvent] */

/* WARNING: Possible PIC construction at 0x000106b03d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b03d10) */
/* WARNING: Removing unreachable block (ram,0x000106b03d28) */
/* WARNING: Removing unreachable block (ram,0x000106b03d14) */

void FUN_106b03cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee78f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__validateEntryPoint__1125977e0,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 106b03d34; end: 106b03d53; -[SCLensExplorerAnalytics _validateEntryPoint:] */

uint FUN_106b03d34(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(4 < param_3 + 1U) | 8U >> (ulong)((uint)(param_3 + 1U) & 0x1f) & 1;
}



/* Entry: 106b03d54; end: 106b03d73; -[SCLensExplorerAnalytics _entryPointFromSource:] */

undefined8 FUN_106b03d54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xc) {
    return *(undefined8 *)(&UNK_10dde5918 + param_3 * 8);
  }
  return 6;
}



/* Entry: 106b03d74; end: 106b03d93; -[SCLensExplorerAnalytics _cameraSourceFromNavigationCameraSource:] */

undefined8 FUN_106b03d74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return *(undefined8 *)(&UNK_10dde5978 + param_3 * 8);
  }
  return 0;
}



/* Entry: 106b03d94; end: 106b03dcf; -[SCLensExplorerAnalytics .cxx_destruct] */

void FUN_106b03d94(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b03dd0; end: 106b03dfb; +[SCGrapheneLensExplorerMetric explorerButtonAppearence] */

void FUN_106b03dd0(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03dfc; end: 106b03e27; +[SCGrapheneLensExplorerMetric explorerFeedLatency] */

void FUN_106b03dfc(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03e28; end: 106b03e53; +[SCGrapheneLensExplorerMetric explorerPreviewLatency] */

void FUN_106b03e28(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03e54; end: 106b03e7f; +[SCGrapheneLensExplorerMetric explorerLiveLensLatency] */

void FUN_106b03e54(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03e80; end: 106b03eab; +[SCGrapheneLensExplorerMetric explorerFeedLoadingFailed] */

void FUN_106b03e80(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03eac; end: 106b03ed7; +[SCGrapheneLensExplorerMetric explorerFeedLoggingFailed] */

void FUN_106b03eac(void)

{
  _objc_alloc(PTR_PTR_1126d0760);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b03ed8; end: 106b03f77; -[SCGrapheneLensExplorerMetric description] */

void FUN_106b03ed8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44958;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e44958,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f4e68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106b03f78; end: 106b040eb; -[SCGrapheneRegistry lensExplorerGraphene] */

void FUN_106b03f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106b04000;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c66b0 != -1) {
    func_0x00010002a2fc(0x1136c66b0,&puStack_48);
  }
  uVar1 = uRam00000001136c66a8;
  _objc_retain(uRam00000001136c66a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b040ec; end: 106b04133; -[SCLensExplorerStoryContainerViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b040ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f4e70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127580c8) = 1;
  }
  return;
}



/* Entry: 106b04134; end: 106b0413b; -[SCLensExplorerStoryContainerViewController shouldAutorotate] */

undefined8 FUN_106b04134(void)

{
  return 0;
}



/* Entry: 106b0413c; end: 106b0414b; -[SCLensExplorerStoryContainerViewController shouldAutomaticallyForwardAppearanceMethods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b0413c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127580c8);
}



/* Entry: 106b0414c; end: 106b0415b; -[SCLensExplorerStoryContainerViewController setShouldAutomaticallyForwardAppearanceMethods:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b0414c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127580c8) = param_3;
  return;
}



/* Entry: 106b0415c; end: 106b04163; -[SCLensExplorerStoryContainerViewController pageViewName] */

undefined8 FUN_106b0415c(void)

{
  return 0x8e;
}



/* Entry: 106b04164; end: 106b04177; +[SCLensExplorerStoryContextMapper broadcastViewLocationForContext:] */

undefined8 FUN_106b04164(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x34;
  if (param_3 != 0) {
    uVar1 = 100;
  }
  return uVar1;
}



/* Entry: 106b04178; end: 106b0417f; -[SCLensExplorerStoryPresentationController shouldRemovePresentersView] */

undefined8 FUN_106b04178(void)

{
  return 1;
}



/* Entry: 106b04180; end: 106b04203; -[SCLensExplorerStoryTransition initWithContainerViewController:presenting:] */

undefined1 *
FUN_106b04180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4e78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b04204; end: 106b0425b; -[SCLensExplorerStoryTransition setChildViewController:] */

void FUN_106b04204(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x30,param_3);
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf17b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b0425c; end: 106b04263; -[SCLensExplorerStoryTransition transitionDuration:] */

undefined8 FUN_106b0425c(void)

{
  return 0;
}



/* Entry: 106b04264; end: 106b0428b; -[SCLensExplorerStoryTransition animateTransition:] */

void FUN_106b04264(undefined8 param_1)

{
  func_0x00010c24f080();
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 106b0428c; end: 106b04333; -[SCLensExplorerStoryTransition startInteractiveTransition:] */

void FUN_106b0428c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  func_0x00010c200040(*(undefined8 *)(param_1 + 8),param_2,0);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf17b00();
  _objc_release(lVar2);
  func_0x00010bdc8820(param_1,param_2,param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf43bc0(param_1,param_2,*(undefined1 *)(param_1 + 0x21));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b04334; end: 106b043e7; -[SCLensExplorerStoryTransition completeTransition:] */

void FUN_106b04334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(char *)(param_1 + 0x21) = (char)param_3;
  if (*(long *)(param_1 + 0x18) != 0) {
    if ((int)param_3 == 0) {
      func_0x00010bf2e5a0();
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf17b00();
      _objc_release(lVar1);
    }
    else {
      func_0x00010bfaf8e0();
    }
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf941a0();
    _objc_release(lVar1);
    func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    func_0x00010c200040(*(undefined8 *)(param_1 + 8),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    *(undefined2 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 106b043e8; end: 106b044cf; -[SCLensExplorerStoryTransition _addSubviewsFromTransitionContext:] */

void FUN_106b043e8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  cVar1 = *(char *)(param_1 + 0x10);
  lVar2 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  if (cVar1 == '\x01') {
    if (lVar2 == 0) goto LAB_106b044bc;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
  }
  else {
    func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50
                       );
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0 && lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010bf4b2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0();
      _objc_release(lVar4);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106b044bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b044d0; end: 106b044d7; -[SCLensExplorerStoryTransition onTransitionStarted] */

undefined8 FUN_106b044d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b044d8; end: 106b044df; -[SCLensExplorerStoryTransition setOnTransitionStarted:] */

void FUN_106b044d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b044e0; end: 106b044f7; -[SCLensExplorerStoryTransition childViewController] */

void FUN_106b044e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b044f8; end: 106b0453b; -[SCLensExplorerStoryTransition .cxx_destruct] */

void FUN_106b044f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b0453c; end: 106b04637; -[SCLensExplorerCreatorStoryPlaybackWorkflow initWithLensExplorerStoryScope:storyCreatorInfo:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_106b0453c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4e80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b04638; end: 106b0466f; -[SCLensExplorerCreatorStoryPlaybackWorkflow isPresenting] */

bool FUN_106b04638(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106b04670; end: 106b04673; -[SCLensExplorerCreatorStoryPlaybackWorkflow dismiss] */

void FUN_106b04670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeStoryScopeIfNeeded_1126293d8);
  return;
}



/* Entry: 106b04674; end: 106b047ef; -[SCLensExplorerCreatorStoryPlaybackWorkflow begin] */

void FUN_106b04674(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf5b440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar2,param_3,7,0x4d,(long)(param_1 * 1000.0),0x34,uVar1,uVar1,0,0);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf16300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c247e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar3,param_3,uVar4,uVar5,0,param_2,0,0,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b4d38;
  func_0x00010c092100(PTR_PTR_1126b4d38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf22a20(uVar4,param_3,puVar2,puVar3,0,9,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x18),param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b047f0; end: 106b0482f; -[SCLensExplorerCreatorStoryPlaybackWorkflow playbackPresenterDidTearDown:playbackScope:] */

void FUN_106b047f0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e6e0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf767c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04830; end: 106b04877; -[SCLensExplorerCreatorStoryPlaybackWorkflow removeStoryScopeIfNeeded] */

void FUN_106b04830(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106b04878; end: 106b048bf; -[SCLensExplorerCreatorStoryPlaybackWorkflow .cxx_destruct] */

void FUN_106b04878(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b048c0; end: 106b04a13; -[SCLensExplorerStoriesGroupPlaybackWorkflow initWithLensExplorerStoryScope:storiesGroupDataSource:contentProductPlaybackScopeExposer:modalUIContainer:storiesGrapheneMetricsEmitter:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_106b048c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f4e88;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b04a14; end: 106b04a4b; -[SCLensExplorerStoriesGroupPlaybackWorkflow isPresenting] */

bool FUN_106b04a14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106b04a4c; end: 106b04a73; -[SCLensExplorerStoriesGroupPlaybackWorkflow dismiss] */

void FUN_106b04a4c(undefined8 param_1)

{
  func_0x00010be8d8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdfb5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachModalUiAnimated__11255c708,0);
  return;
}



/* Entry: 106b04a74; end: 106b04be7; -[SCLensExplorerStoriesGroupPlaybackWorkflow begin] */

void FUN_106b04a74(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126d0778;
  _objc_alloc_init();
  func_0x00010c1c8b80();
  func_0x00010c219b20(puVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  puVar2 = PTR_PTR_1126d0780;
  _objc_alloc();
  func_0x00010c002a40();
  _objc_initWeak(auStack_38,param_2);
  _objc_initWeak(auStack_40,puVar2);
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  func_0x00010c1d4160(puVar2);
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined **)(param_2 + 0x58) = puVar1;
  _objc_release(uVar3);
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar2;
  _objc_release(uVar3);
  func_0x00010bdd04e0(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b04be8; end: 106b04c53;  */

void FUN_106b04be8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf43bc0();
    _objc_release(lVar2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d260();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b04c54; end: 106b04e87; -[SCLensExplorerStoriesGroupPlaybackWorkflow _exposeScope] */

void FUN_106b04c54(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  
  puVar2 = PTR_PTR_1126d0788;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c259540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4e080();
  func_0x00010bf21440(puVar2,param_3,uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  param_1 = param_1 * 1000.0;
  lVar7 = (long)param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0644c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0644c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar3,param_3,7,0x4c,lVar7,puVar2,uVar4,uVar1,0,0);
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf16300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar5,param_3,uVar4,*(undefined8 *)(param_2 + 0x58),1,param_2,0,4,0,0);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b4d38;
  func_0x00010c092ba0(PTR_PTR_1126b4d38,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  dVar8 = *(double *)(param_2 + 0x50);
  _CACurrentMediaTime();
  func_0x000108534a80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((param_1 - dVar8) * 1000.0),uVar4,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  func_0x00010bff0a00(*(undefined8 *)(param_2 + 0x50));
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf22a20(uVar4,param_3,puVar3,puVar5,0,9,puVar6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x18),param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b04e88; end: 106b04ec7; -[SCLensExplorerStoriesGroupPlaybackWorkflow _reset] */

void FUN_106b04e88(long param_1)

{
  undefined8 uVar1;
  
  _objc_storeWeak(param_1 + 0x38,0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04ec8; end: 106b04f0f; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterDidTearDown:playbackScope:] */

void FUN_106b04ec8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be92140();
  func_0x00010be8d8c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf767c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04f10; end: 106b04f7b; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_106b04f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x38,param_3);
  uVar1 = param_4;
  func_0x00010bf38e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17c420(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04f7c; end: 106b04fb7; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_106b04f7c(long param_1)

{
  undefined8 uVar1;
  
  _objc_storeWeak(param_1 + 0x38,0);
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04fb8; end: 106b04fe7; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_106b04fb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x60),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b04fe8; end: 106b05087; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_106b04fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bf43bc0(*(long *)(param_1 + 0x60),param_2,1);
  }
  puVar1 = PTR_PTR_1126d0780;
  _objc_alloc();
  func_0x00010c002a40();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf38e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c420(*(undefined8 *)(param_1 + 0x60),param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdfb5a0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b05088; end: 106b050cf; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_106b05088(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bf43bc0(*(long *)(param_1 + 0x60),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachModalUiAnimated__11255c708,0);
  return;
}



/* Entry: 106b050d0; end: 106b050ff; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_106b050d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x60),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b05100; end: 106b0521b; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_106b05100(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    puVar3 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 != 0) {
      lVar5 = param_1;
      func_0x00010bec4a20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x40);
      func_0x00010bfece40();
      if (lVar6 != 0x7fffffffffffffff) {
        lVar7 = *(long *)(param_1 + 0x40);
        func_0x00010bf529e0();
        if ((ulong)(lVar7 - lVar6) < 10) {
          *(undefined1 *)(param_1 + 0x48) = 1;
          iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
          func_0x00010bfd9420();
          if (iVar2 != 0) {
            func_0x00010c135e80(*(undefined8 *)(param_1 + 0x10));
          }
        }
      }
      _objc_release(lVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b0521c; end: 106b05273;  */

undefined8
FUN_106b0521c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar1;
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106b05274; end: 106b0527b; -[SCLensExplorerStoriesGroupPlaybackWorkflow storiesObservable] */

void FUN_106b05274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_storiesObservable_112673c38);
  return;
}



/* Entry: 106b0527c; end: 106b052e7; -[SCLensExplorerStoriesGroupPlaybackWorkflow playbleDataModelsResolved:] */

void FUN_106b0527c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2889e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b052e8; end: 106b05353; -[SCLensExplorerStoriesGroupPlaybackWorkflow presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_106b052e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038a20();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b05354; end: 106b0537b; -[SCLensExplorerStoriesGroupPlaybackWorkflow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106b05354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b0537c; end: 106b053a3; -[SCLensExplorerStoriesGroupPlaybackWorkflow animationControllerForDismissedController:] */

void FUN_106b0537c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b053a4; end: 106b053cb; -[SCLensExplorerStoriesGroupPlaybackWorkflow interactionControllerForPresentation:] */

void FUN_106b053a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b053cc; end: 106b053f3; -[SCLensExplorerStoriesGroupPlaybackWorkflow interactionControllerForDismissal:] */

void FUN_106b053cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b053f4; end: 106b0543b; -[SCLensExplorerStoriesGroupPlaybackWorkflow _removeStoryScopeIfNeeded] */

void FUN_106b053f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106b0543c; end: 106b05443; -[SCLensExplorerStoriesGroupPlaybackWorkflow _attachModalUi:] */

void FUN_106b0543c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 106b05444; end: 106b054af; -[SCLensExplorerStoriesGroupPlaybackWorkflow _detachModalUiAnimated:] */

void FUN_106b05444(long param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b054b0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}


