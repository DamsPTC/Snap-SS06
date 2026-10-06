/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b4603c; end: 105b4606f; -[SCCSuggestionTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_105b4603c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec048;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105b46070; end: 105b460bf; -[SCCSuggestionTakeoverView setViewModel:] */

void FUN_105b46070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105b460c0; end: 105b46103; -[SCCSuggestionTakeoverView viewModel] */

void FUN_105b460c0(undefined8 param_1)

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



/* Entry: 105b46104; end: 105b461c7; -[SCCSuggestionTakeoverContext initWithFriendStore:suggestedFriendStore:onClickOutside:showPostAddChatSnapPills:] */

undefined8 *
FUN_105b46104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1126ec050;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105b461c8; end: 105b461e7; +[SCCSuggestionTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_105b461c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d67a8;
  param_1[1] = &PTR_DAT_1108d6928;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105b461e8; end: 105b4621b; -[SCComposerSuggestionTakeoverHooks init] */

void FUN_105b461e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec058;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105b4621c; end: 105b46243; +[SCComposerSuggestionTakeoverHooks valdiMarshallableObjectDescriptor] */

void FUN_105b4621c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d69b0;
  param_1[1] = &PTR_DAT_1108d6ad0;
  param_1[2] = &PTR_s_ob_v_1108d6968;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105b46244; end: 105b4626b;  */

undefined8 FUN_105b46244(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105b4626c; end: 105b462cf;  */

void FUN_105b4626c(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_105b463c4(FUN_105b46360);
  _objc_retainBlock(&puStack_48);
  func_0x000105b463d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b462d0; end: 105b462fb;  */

undefined8 FUN_105b462d0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1],param_2[3]);
  return 0;
}



/* Entry: 105b462fc; end: 105b4635f;  */

void FUN_105b462fc(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_105b463c4(0x105b46390);
  _objc_retainBlock(&puStack_48);
  func_0x000105b463d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b46360; end: 105b463c3;  */

void FUN_105b46360(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105b463c4; end: 105b463eb;  */

void FUN_105b463c4(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105b463ec; end: 105b465df; -[SCSuggestionTakeoverLoggerDefault initWithBlizzardLogger:grapheneRegistry:sourcePage:takeoverType:triggerCondition:lazyQuickAddLogger:friendSurfaceImpressionLogger:] */

undefined1 *
FUN_105b463ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ec060;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2626a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_9;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b465e0; end: 105b46667; -[SCSuggestionTakeoverLoggerDefault markSuggestedSnapchatterAsSeen:index:isRecentlyActive:] */

void FUN_105b465e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbbc0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b46668; end: 105b466b7; -[SCSuggestionTakeoverLoggerDefault markIncomingSnapchatterAsSeen:] */

void FUN_105b46668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb700();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b466b8; end: 105b4678b; -[SCSuggestionTakeoverLoggerDefault logContinueDidClicked] */

void FUN_105b466b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c28a8;
  func_0x00010bf4fbc0(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010be54a40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf529e0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf529e0(uVar5);
  func_0x00010be50a40(param_1,param_2,1,uVar2,uVar3,uVar4,uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
  _objc_release(uVar2);
  func_0x00010c0a6f00(param_1,param_2,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b4678c; end: 105b4685f; -[SCSuggestionTakeoverLoggerDefault logMaybeLaterDidClicked] */

void FUN_105b4678c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c28a8;
  func_0x00010c0c3960(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010be54a40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf529e0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf529e0(uVar5);
  func_0x00010be50a40(param_1,param_2,2,uVar2,uVar3,uVar4,uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
  _objc_release(uVar2);
  func_0x00010c0a6f00(param_1,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b46860; end: 105b46933; -[SCSuggestionTakeoverLoggerDefault logDismissSuggestionTakeover] */

void FUN_105b46860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c28a8;
  func_0x00010bf836a0(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010be54a40(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf529e0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf529e0(uVar5);
  func_0x00010be50a40(param_1,param_2,0,uVar2,uVar3,uVar4,uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
  _objc_release(uVar2);
  func_0x00010c0a6f00(param_1,param_2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b46934; end: 105b4698b; -[SCSuggestionTakeoverLoggerDefault logPopupOfSuggestionTakeover] */

void FUN_105b46934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c28a8;
  func_0x00010c104040(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x00010be3b920(param_1);
  lVar2 = param_1;
  func_0x00010be19620();
  *(long *)(param_1 + 0x80) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b4698c; end: 105b46a0b; -[SCSuggestionTakeoverLoggerDefault logImpressedSuggestionWithUserId:isRecentlyActive:] */

void FUN_105b4698c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    if (param_4 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    }
    if ((uVar2 & 1) == 0) {
      func_0x00010bdcd100(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b46a0c; end: 105b46a8b; -[SCSuggestionTakeoverLoggerDefault logImpressedIncomingWithUserId:isRecentlyActive:] */

void FUN_105b46a0c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    if (param_4 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    }
    if ((uVar2 & 1) == 0) {
      func_0x00010bdcd100(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b46a8c; end: 105b46b13; -[SCSuggestionTakeoverLoggerDefault logFriendSurfaceImpressionWithDismissReason:] */

void FUN_105b46a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_1;
    func_0x00010be19620();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf51e00();
    func_0x00010c0a81e0(uVar4,param_2,1,2,0,param_3,lVar3,lVar1,uVar2);
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



/* Entry: 105b46b14; end: 105b46b97; -[SCSuggestionTakeoverLoggerDefault _appendFriendSurfaceImpressionItemWithUserId:] */

void FUN_105b46b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (uVar1 < 10) {
    puVar2 = PTR_PTR_1126b4a10;
    _objc_alloc(PTR_PTR_1126b4a10);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf529e0(uVar3);
    func_0x00010c050cc0(puVar2,param_2,param_3,uVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b46b98; end: 105b46be7; -[SCSuggestionTakeoverLoggerDefault _friendSurfaceCurrentTimeMs] */

long FUN_105b46b98(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 105b46be8; end: 105b46c2b; -[SCSuggestionTakeoverLoggerDefault logAddedSuggestionWithUserId:] */

void FUN_105b46be8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b46c2c; end: 105b46c6f; -[SCSuggestionTakeoverLoggerDefault logAddedIncomingWithUserId:] */

void FUN_105b46c2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b46c70; end: 105b46cb3; -[SCSuggestionTakeoverLoggerDefault logMultiAddedSuggestionsWithUserIds:] */

void FUN_105b46c70(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b46cb4; end: 105b46dd3; -[SCSuggestionTakeoverLoggerDefault _logImpressionAndAddedSuggestions] */

void FUN_105b46cb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c28a8;
  func_0x00010c2624a0(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar5);
  func_0x00010bef9180(uVar3,param_2,puVar1,uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar5);
  func_0x00010bfec320(uVar3,param_2,puVar1,uVar5);
  puVar2 = PTR_PTR_1126c28a8;
  func_0x00010bef1180(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar3);
  func_0x00010bef9180(uVar5,param_2,puVar2,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar3);
  func_0x00010bfec320(uVar5,param_2,puVar2,uVar3);
  puVar4 = PTR_PTR_1126c28a8;
  func_0x00010c2623e0(PTR_PTR_1126c28a8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  func_0x00010bef9180(uVar5,param_2,puVar4,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  func_0x00010bfec320(uVar5,param_2,puVar4,uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b46dd4; end: 105b46e27; -[SCSuggestionTakeoverLoggerDefault _initializePopupEvent] */

void FUN_105b46dd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c28b0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
  func_0x00010c206f20(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c2119e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c21a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setTriggerCondition__1126642e0,
             *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 105b46e28; end: 105b46ec7; -[SCSuggestionTakeoverLoggerDefault _logBlizzardEventWithDismissAction:suggestionsImpressedCount:suggestionsAddedCount:incomingAddedCount:incomingRequestsImpressedCount:] */

void FUN_105b46e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x00010c18f380(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c20fc40(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
  func_0x00010c20fbe0(*(undefined8 *)(param_1 + 0x48),param_2,param_5);
  func_0x00010c1abf40(*(undefined8 *)(param_1 + 0x48),param_2,param_6);
  func_0x00010c1abf60(*(undefined8 *)(param_1 + 0x48),param_2,param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b46ec8; end: 105b46f6f; -[SCSuggestionTakeoverLoggerDefault .cxx_destruct] */

void FUN_105b46ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105b46f70; end: 105b46f9b; +[SCGrapheneSuggestionTakeoverMetric maybeLaterCount] */

void FUN_105b46f70(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b46f9c; end: 105b46fc7; +[SCGrapheneSuggestionTakeoverMetric continueCount] */

void FUN_105b46f9c(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b46fc8; end: 105b46ff3; +[SCGrapheneSuggestionTakeoverMetric dismissCount] */

void FUN_105b46fc8(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b46ff4; end: 105b4701f; +[SCGrapheneSuggestionTakeoverMetric popupFrequency] */

void FUN_105b46ff4(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b47020; end: 105b4704b; +[SCGrapheneSuggestionTakeoverMetric suggestionImpressionCount] */

void FUN_105b47020(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b4704c; end: 105b47077; +[SCGrapheneSuggestionTakeoverMetric suggestionAddedCount] */

void FUN_105b4704c(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b47078; end: 105b470a3; +[SCGrapheneSuggestionTakeoverMetric activeSuggestionCount] */

void FUN_105b47078(void)

{
  _objc_alloc(PTR_PTR_1126c28a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b470a4; end: 105b47143; -[SCGrapheneSuggestionTakeoverMetric description] */

void FUN_105b470a4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f2b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e1f2b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ec068;
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



/* Entry: 105b47144; end: 105b472c3; -[SCGrapheneRegistry suggestionTakeoverGraphene] */

void FUN_105b47144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105b471cc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1c38 != -1) {
    func_0x00010002a2fc(0x1136c1c38,&puStack_48);
  }
  uVar1 = uRam00000001136c1c30;
  _objc_retain(uRam00000001136c1c30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b472c4; end: 105b47373; -[SCFriendsFeedCTAImpressionTracker initWithBlizzardLogger:] */

undefined8 FUN_105b472c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f32b26a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0xb);
  _objc_release(puVar2);
  func_0x00010bff8aa0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105b47374; end: 105b4744b; -[SCFriendsFeedCTAImpressionTracker initWithBlizzardLogger:queuePerformer:] */

undefined1 *
FUN_105b47374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
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



/* Entry: 105b4744c; end: 105b47567; -[SCFriendsFeedCTAImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105b4744c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b47568; end: 105b4763b;  */

void FUN_105b47568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb81f8);
    if ((int)uVar2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8218);
      if ((int)uVar2 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8178);
        if ((int)uVar2 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb8198);
          if ((int)uVar2 == 0) goto LAB_105b475d8;
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          uVar3 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          uVar3 = 1;
        }
        func_0x00010be29280(lVar1,param_2,uVar2,uVar3);
        goto LAB_105b475d8;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = 1;
    }
    func_0x00010be292c0(lVar1,param_2,uVar2,uVar3);
  }
LAB_105b475d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b4763c; end: 105b479a3; -[SCFriendsFeedCTAImpressionTracker _handleExtraDataForFeedVisible:start:] */

void FUN_105b4763c(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar9 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar4);
          }
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010be4b180();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0e00e0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be50ee0(param_1);
            _objc_release(uVar7);
          }
          _objc_release(lVar6);
          _objc_release(uVar1);
          lVar14 = lVar14 + 1;
        } while (lVar5 != lVar14);
        lVar5 = lVar4;
        ppuVar9 = &puStack_130;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    ppuVar11 = *(undefined ***)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    ppuVar11 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar12 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar10);
    ppuVar9 = ppuVar11;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar11);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined ***)(param_1 + 0x28) = ppuVar9;
    _objc_release(uVar1);
    ppuVar11 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar9 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar10);
    ppuVar12 = ppuVar11;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar12 = (undefined **)0x0;
    }
    _objc_retain(ppuVar12);
    _objc_release(ppuVar11);
    ppuVar9 = &PTR____CFConstantStringClassReference_110eb8378;
    ppuVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar3 = ppuVar2;
    _objc_opt_isKindOfClass(ppuVar2,puVar10);
    ppuVar8 = ppuVar2;
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar2);
    if (ppuVar12 == (undefined **)0x0 || ppuVar8 == (undefined **)0x0) {
      _objc_release(ppuVar8);
      ppuVar11 = ppuVar12;
    }
    else {
      ppuVar12 = ppuVar11;
      func_0x00010bf529e0();
      ppuVar8 = ppuVar2;
      func_0x00010bf529e0();
      if ((ppuVar12 == ppuVar8) &&
         (ppuVar12 = ppuVar11, func_0x00010bf529e0(), ppuVar12 != (undefined **)0x0)) {
        ppuVar12 = (undefined **)0x0;
        do {
          ppuVar8 = ppuVar11;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c0dfd40(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010be323a0(param_1);
          _objc_release(ppuVar3);
          _objc_release(ppuVar8);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          ppuVar8 = ppuVar11;
          func_0x00010bf529e0();
        } while (ppuVar12 < ppuVar8);
      }
      _objc_release(ppuVar2);
    }
  }
  _objc_release(ppuVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  ppuVar11 = ppuVar9;
  func_0x00010c140b20();
  if (ppuVar11 == (undefined **)0x7) {
    ppuVar11 = ppuVar9;
    func_0x00010bf4ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar9;
      func_0x00010bf4ee40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar8;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010beeed20();
      _objc_release(ppuVar11);
      if ((int)ppuVar12 == 0xe) {
        ppuVar12 = ppuVar8;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar12;
        func_0x00010c08fba0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar12);
      }
      else {
        ppuVar11 = (undefined **)0x0;
      }
      ppuVar12 = ppuVar11;
      func_0x00010c08fa60();
      if (ppuVar12 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR_PTR_1126c28b8;
        _objc_opt_new(PTR_PTR_1126c28b8);
        func_0x00010c1bbd60();
LAB_105b47d44:
        func_0x00010c197c80(puVar10);
      }
LAB_105b47d48:
      _objc_release(ppuVar11);
      _objc_release(ppuVar8);
      goto LAB_105b47d58;
    }
  }
  else if (ppuVar11 == (undefined **)0xe) {
    ppuVar11 = ppuVar9;
    func_0x00010c09a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar11 != (undefined **)0x0) {
      puVar10 = PTR_PTR_1126c28b8;
      _objc_opt_new(PTR_PTR_1126c28b8);
      ppuVar11 = ppuVar9;
      func_0x00010c09a8c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar12;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar8;
      func_0x00010c08fa60();
      if (ppuVar11 != (undefined **)0x0) {
        func_0x00010c1bbd60(puVar10);
      }
      func_0x00010c197c80(puVar10);
      ppuVar11 = (undefined **)PTR_PTR_1126c28c0;
      _objc_opt_new(PTR_PTR_1126c28c0);
      ppuVar12 = ppuVar9;
      func_0x00010c09a8c0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar12;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183b80(ppuVar11);
      _objc_release(ppuVar2);
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar9;
      func_0x00010c09a8c0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar12;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1fe0(ppuVar11);
      _objc_release(ppuVar2);
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar9;
      func_0x00010c09a8c0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074920();
      func_0x00010c1b18e0(ppuVar11);
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar9;
      func_0x00010c09a8c0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbe0c0();
      func_0x00010c1a1f80(ppuVar11);
      _objc_release(ppuVar12);
      func_0x00010c1a1f00(puVar10);
      goto LAB_105b47d48;
    }
  }
  else if (ppuVar11 == (undefined **)0x9) {
    ppuVar11 = ppuVar9;
    func_0x00010c097200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar11 != (undefined **)0x0) {
      puVar10 = PTR_PTR_1126c28b8;
      _objc_opt_new(PTR_PTR_1126c28b8);
      ppuVar11 = ppuVar9;
      func_0x00010c097200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar8;
      func_0x00010c08fa60();
      if (ppuVar11 != (undefined **)0x0) {
        func_0x00010c1bbd60(puVar10);
      }
      ppuVar11 = ppuVar9;
      func_0x00010c097200(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9a440();
      func_0x000106c197a0();
      goto LAB_105b47d44;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_105b47d58:
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105b479a4; end: 105b47d7f; -[SCFriendsFeedCTAImpressionTracker _lensImpressionForTrackingData:] */

void FUN_105b479a4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010c140b20();
  if (puVar5 == (undefined *)0x7) {
    puVar5 = param_3;
    func_0x00010bf4ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010bf4ee40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010beeed20();
      _objc_release(puVar5);
      if ((int)puVar4 == 0xe) {
        puVar4 = puVar2;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010c08fba0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      else {
        puVar5 = (undefined *)0x0;
      }
      puVar4 = puVar5;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126c28b8;
        _objc_opt_new(PTR_PTR_1126c28b8);
        func_0x00010c1bbd60();
        puVar3 = (undefined *)0x1a;
LAB_105b47d44:
        func_0x00010c197c80(puVar4,param_2,puVar3);
      }
LAB_105b47d48:
      _objc_release(puVar5);
      _objc_release(puVar2);
      goto LAB_105b47d58;
    }
  }
  else if (puVar5 == (undefined *)0xe) {
    puVar5 = param_3;
    func_0x00010c09a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c28b8;
      _objc_opt_new(PTR_PTR_1126c28b8);
      puVar5 = param_3;
      func_0x00010c09a8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1bbd60(puVar4,param_2,puVar2);
      }
      func_0x00010c197c80(puVar4,param_2,0x19);
      puVar5 = PTR_PTR_1126c28c0;
      _objc_opt_new(PTR_PTR_1126c28c0);
      puVar3 = param_3;
      func_0x00010c09a8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183b80(puVar5,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c09a8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1fe0(puVar5,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c09a8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c074920();
      func_0x00010c1b18e0(puVar5,param_2,puVar1);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c09a8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bfbe0c0();
      func_0x00010c1a1f80(puVar5,param_2,puVar1);
      _objc_release(puVar3);
      func_0x00010c1a1f00(puVar4,param_2,puVar5);
      goto LAB_105b47d48;
    }
  }
  else if (puVar5 == (undefined *)0x9) {
    puVar5 = param_3;
    func_0x00010c097200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c28b8;
      _objc_opt_new(PTR_PTR_1126c28b8);
      puVar5 = param_3;
      func_0x00010c097200();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1bbd60(puVar4,param_2,puVar2);
      }
      puVar5 = param_3;
      func_0x00010c097200(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf9a440();
      func_0x000106c197a0();
      goto LAB_105b47d44;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105b47d58:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b47d80; end: 105b47eeb; -[SCFriendsFeedCTAImpressionTracker _logCTAImpressionWithLensImpression:data:position:] */

void FUN_105b47d80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c28c8;
  _objc_opt_new(PTR_PTR_1126c28c8);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1a0a00(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x00010c0b4ca0(param_5);
    func_0x00010c1def00(puVar1,param_2,lVar2);
  }
  lVar2 = param_4;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = param_4;
  if (lVar3 == 0) {
    lVar3 = param_4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_105b47e88;
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1844c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
LAB_105b47e88:
  func_0x00010c1bbe20(puVar1,param_2,param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b47eec; end: 105b47fe3; -[SCFriendsFeedCTAImpressionTracker _handleExtraDataForFeedItem:start:] */

void FUN_105b47eec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba1f8;
  _objc_opt_class(PTR_PTR_1126ba1f8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  func_0x00010be323a0(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b47fe4; end: 105b4809b; -[SCFriendsFeedCTAImpressionTracker _handleTrackingData:atPosition:] */

void FUN_105b47fe4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_1;
    func_0x00010bece380(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0dff20(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,param_3,lVar1);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_4,lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4809c; end: 105b4829b; -[SCFriendsFeedCTAImpressionTracker _trackingIdForData:] */

void FUN_105b4809c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c140b20();
  if (puVar1 == (undefined *)0x7) {
    puVar1 = param_3;
    func_0x00010bf4ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bf4ee40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = puVar3;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010beeed20();
      _objc_release(puVar1);
      if ((int)puVar2 == 0xe) {
        puVar1 = puVar3;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c08fba0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar2 = puVar4;
        func_0x00010c08fa60();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = param_3;
          func_0x00010bf33f20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_3;
          func_0x00010bf4ee40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf4f080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1f3b8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar3);
          goto LAB_105b48274;
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
  }
  puVar1 = param_3;
  func_0x00010bf33f20(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_105b48274:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b4829c; end: 105b482ef; -[SCFriendsFeedCTAImpressionTracker .cxx_destruct] */

void FUN_105b4829c(long param_1)

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



/* Entry: 105b482f0; end: 105b483ef; -[SCFriendsFeedCTAImpressionTrackingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b482f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c28d0;
  _objc_alloc(PTR_PTR_1126c28d0);
  func_0x00010c01d480();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127305b8));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b483f0; end: 105b4842f;  */

void FUN_105b483f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be19780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b48430; end: 105b484ab; -[SCFriendsFeedCTAImpressionTrackingEntryPoint _friendsFeedCTAImpressionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b48430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c28d8;
  _objc_alloc(PTR_PTR_1126c28d8);
  param_1 = param_1 + _DAT_1127305bc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8500(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b484ac; end: 105b484f3; -[SCFriendsFeedCTAImpressionTrackingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b484ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127305b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127305bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127305c0);
  return;
}



/* Entry: 105b484f4; end: 105b48567; -[SCGrapheneSponsoredSnapFeedMetric2 init] */

undefined1 * FUN_105b484f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b48568; end: 105b485df;  */

void FUN_105b48568(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108d6b60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b485e0; end: 105b48657;  */

void FUN_105b485e0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108d6bb0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b48658; end: 105b487cb;  */

char * FUN_105b48658(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108d6c00,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar4 = acStack_100;
  pcStack_88 = FUN_105b487cc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar7 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108d6c50,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar8 = pcVar4;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar4;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_105b48940;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar2 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = acStack_198;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108d6ca0,pcVar1,param_4);
    pcStack_180 = acStack_198;
    func_0x00010007e5dc(&pcStack_180);
    lVar10 = 0;
    puVar11 = auStack_178;
    pcVar2 = param_4;
    do {
      if ((&cStack_149)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  ppcVar5 = &pcStack_1e0;
  pcStack_1a8 = FUN_105b48b70;
  puStack_1d0 = puVar11;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar8;
  pcStack_1b8 = pcVar7;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(param_5);
  puStack_1d8 = PTR_PTR_1126ec080;
  pcStack_1e0 = pcVar4;
  _objc_msgSendSuper2(&pcStack_1e0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
    *(char **)((long)ppcVar5 + 0x10) = pcVar1;
    _objc_release(uVar6);
    _objc_storeWeak((char *)((long)ppcVar5 + 0x18),pcVar2);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x20);
    *(undefined8 *)((long)ppcVar5 + 0x20) = param_5;
    _objc_release(uVar6);
  }
  _objc_release(param_5);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  return (char *)ppcVar5;
}



/* Entry: 105b487cc; end: 105b4893f;  */

char * FUN_105b487cc(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108d6c50,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105b48940;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar11 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar7 = acStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108d6ca0,pcVar7,param_4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar10 = 0;
    puVar11 = auStack_f8;
    pcVar8 = param_4;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_160;
  pcStack_128 = FUN_105b48b70;
  puStack_150 = puVar11;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar6;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  _objc_retain(param_5);
  puStack_158 = PTR_PTR_1126ec080;
  pcStack_160 = pcVar3;
  _objc_msgSendSuper2(&pcStack_160,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar7);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(char **)((long)ppcVar4 + 0x10) = pcVar7;
    _objc_release(uVar5);
    _objc_storeWeak((char *)((long)ppcVar4 + 0x18),pcVar8);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x20);
    *(undefined8 *)((long)ppcVar4 + 0x20) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  return (char *)ppcVar4;
}



/* Entry: 105b48940; end: 105b48b6f;  */

char * FUN_105b48940(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
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
  pcVar1 = param_3;
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
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108d6ca0,pcVar1,param_4);
    pcStack_80 = acStack_98;
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
    return pcVar2;
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
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_105b48b70;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126ec080;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(char **)((long)ppcVar4 + 0x10) = pcVar1;
    _objc_release(uVar5);
    _objc_storeWeak((char *)((long)ppcVar4 + 0x18),uVar6);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x20);
    *(undefined8 *)((long)ppcVar4 + 0x20) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 105b48b70; end: 105b48c33; -[SCFriendsFeedMessageActionMenuActionHandler initWithSnapReplayScopeExposer:snapReplayScopeDelegate:uiContainer:] */

undefined1 *
FUN_105b48b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ec080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b48c34; end: 105b48eeb; -[SCFriendsFeedMessageActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105b48c34(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    puVar7 = PTR_PTR_1126c28e8;
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar8 = 0;
        goto LAB_105b48e78;
      }
      puVar7 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar7);
      func_0x00010bf83de0();
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131480(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126c28f0;
      _objc_alloc(PTR_PTR_1126c28f0);
      lVar6 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c00ae40(puVar5);
      _objc_release(lVar6);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf83de0();
      _objc_release(param_1);
      _objc_release(puVar5);
    }
    _objc_release(puVar7);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c28e0;
    _objc_opt_class(PTR_PTR_1126c28e0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar7);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar3 = uVar2;
    func_0x00010bf50280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de060(uVar2);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c14b040(uVar8);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
  }
  uVar8 = 1;
LAB_105b48e78:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 105b48eec; end: 105b48f7b;  */

void FUN_105b48eec(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b48f7c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b48f7c; end: 105b4906f;  */

void FUN_105b48f7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf83de0();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126afca8;
    func_0x0001070b06f0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar4,param_2,lVar1,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b49070; end: 105b49087; -[SCFriendsFeedMessageActionMenuActionHandler delegate] */

void FUN_105b49070(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b49088; end: 105b49093; -[SCFriendsFeedMessageActionMenuActionHandler setDelegate:] */

void FUN_105b49088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105b49094; end: 105b490df; -[SCFriendsFeedMessageActionMenuActionHandler .cxx_destruct] */

void FUN_105b49094(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b490e0; end: 105b492cf; -[SCFriendsFeedMessageActionMenuOpenActionHandler initWithSnapReplayScopeExposer:snapReplayScopeDelegate:] */

undefined8 *
FUN_105b490e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126ec088;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105b492ec;
    puStack_88 = &UNK_1108d6d70;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b492d0; end: 105b492eb;  */

void FUN_105b492d0(void)

{
  _objc_opt_new(PTR_PTR_1126c28f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b492ec; end: 105b49493;  */

void FUN_105b492ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c2900;
    _objc_alloc(PTR_PTR_1126c2900);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    func_0x00010c0484c0(puVar4,param_2,uVar5,lVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c18b5e0(puVar4,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b49494; end: 105b49613; -[SCFriendsFeedMessageActionMenuOpenActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_105b49494(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c28e0;
    _objc_opt_class(PTR_PTR_1126c28e0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161920();
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64160(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d0c0(uVar6);
    _objc_release(param_1);
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 105b49614; end: 105b4964f; -[SCFriendsFeedMessageActionMenuOpenActionHandler dismissMessageActionMenu] */

void FUN_105b49614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b49650; end: 105b49667; -[SCFriendsFeedMessageActionMenuOpenActionHandler presentingViewController] */

void FUN_105b49650(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b49668; end: 105b49673; -[SCFriendsFeedMessageActionMenuOpenActionHandler setPresentingViewController:] */

void FUN_105b49668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105b49674; end: 105b496d7; -[SCFriendsFeedMessageActionMenuOpenActionHandler .cxx_destruct] */

void FUN_105b49674(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b496d8; end: 105b49937; -[SCFriendsFeedMessageActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_105b496d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010beee2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c239940();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = param_1;
    func_0x00010beee2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar8 = &PTR____CFConstantStringClassReference_110ddea78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ddea78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(puVar4);
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010beee2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0de060();
  _objc_release(uVar2);
  if (0 < (int)uVar3) {
    func_0x00010beee2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar6 = puVar4;
    func_0x0001070b0690();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010befa120(puVar1);
    _objc_release(puVar7);
    _objc_release(param_1);
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110e20b98;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110e20b98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c019f60(puVar4);
  _objc_release(puVar6);
  (**(code **)(param_3 + 0x10))(param_3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b49938; end: 105b4994f; -[SCFriendsFeedMessageActionMenuDataProvider delegate] */

void FUN_105b49938(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b49950; end: 105b4995b; -[SCFriendsFeedMessageActionMenuDataProvider setDelegate:] */

void FUN_105b49950(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105b4995c; end: 105b49973; -[SCFriendsFeedMessageActionMenuDataProvider actionData] */

void FUN_105b4995c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b49974; end: 105b4997f; -[SCFriendsFeedMessageActionMenuDataProvider setActionData:] */

void FUN_105b49974(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105b49980; end: 105b499a7; -[SCFriendsFeedMessageActionMenuDataProvider .cxx_destruct] */

void FUN_105b49980(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105b499a8; end: 105b49a0f; -[SCFriendsFeedAlternateTextAnimation updateWithSourceView:parentView:data:] */

void FUN_105b499a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_storeWeak(param_1 + 0x18,param_4);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b49a10; end: 105b49bcf; -[SCFriendsFeedAlternateTextAnimation alreadyRunningWithSourceView:parentView:data:] */

bool FUN_105b49a10(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_retain();
  _objc_retain(param_3);
  if (lVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar2);
LAB_105b49ab0:
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_retain();
    _objc_retain(param_4);
    if (lVar3 == param_4) {
      _objc_release(param_4);
      _objc_release(lVar3);
LAB_105b49b18:
      lVar5 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar5);
      _objc_retain(param_5);
      if (lVar5 == param_5) {
        _objc_release(param_5);
        _objc_release(lVar5);
      }
      else {
        if (param_5 == 0) goto LAB_105b49b84;
        lVar4 = lVar5;
        func_0x00010c071ae0(lVar5,param_2,param_5);
        _objc_release(param_5);
        _objc_release(lVar5);
        if ((int)lVar4 == 0) goto LAB_105b49b88;
      }
      bVar1 = *(long *)(param_1 + 8) != 0;
    }
    else {
      lVar5 = lVar3;
      if (param_4 == 0) {
LAB_105b49b84:
        _objc_release(lVar5);
      }
      else {
        func_0x00010c071ae0(lVar3,param_2,param_4);
        _objc_release(param_4);
        _objc_release(lVar3);
        if ((int)lVar5 != 0) goto LAB_105b49b18;
      }
LAB_105b49b88:
      bVar1 = false;
    }
  }
  else {
    if (param_3 != 0) {
      lVar3 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar2);
      if ((int)lVar3 == 0) {
        bVar1 = false;
        goto LAB_105b49b94;
      }
      goto LAB_105b49ab0;
    }
    bVar1 = false;
    lVar3 = lVar2;
  }
  _objc_release(lVar3);
LAB_105b49b94:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105b49bd0; end: 105b49de3; -[SCFriendsFeedAlternateTextAnimation run] */

void FUN_105b49bd0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_2 + 0x10;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = param_2 + 0x18;
    _objc_loadWeakRetained();
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar5 = *(long *)(param_2 + 0x20);
    _objc_release();
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar1 = param_2 + 0x18;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar5 = lVar1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(lVar5);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf01e40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c16b720();
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c069d00(*(undefined8 *)(param_2 + 8));
      _objc_initWeak(auStack_48,param_2);
      puVar3 = PTR_PTR_1126ae888;
      _objc_alloc();
      func_0x00010c130c20(*(undefined8 *)(param_2 + 0x20));
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0522e0(param_1);
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined **)(param_2 + 8) = puVar3;
      _objc_release(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105b49de4; end: 105b49e0f;  */

void FUN_105b49de4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdca880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b49e10; end: 105b49e5f; -[SCFriendsFeedAlternateTextAnimation cancel] */

void FUN_105b49e10(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x10,0);
  _objc_storeWeak(param_1 + 0x18,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b49e60; end: 105b49ff3; -[SCFriendsFeedAlternateTextAnimation _animateAlternateText] */

void FUN_105b49e60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf01e40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfecde0();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf01e40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0x7fffffffffffffff) {
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf01e40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar5);
  func_0x00010be0b7a0(param_1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar5);
  _objc_release(lVar2);
  return;
}



/* Entry: 105b49ff4; end: 105b4a027;  */

void FUN_105b49ff4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee06c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4a028; end: 105b4a08f; -[SCFriendsFeedAlternateTextAnimation _updateSourceViewWithAlternatingText:] */

void FUN_105b4a028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf51e00(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c16b720();
  _objc_release(lVar1);
  _objc_release(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b4a090; end: 105b4a13b; -[SCFriendsFeedAlternateTextAnimation _executeAnimations:] */

void FUN_105b4a090(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)puVar2 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c27ac60(puVar1,param_2,lVar3,0x500000,param_3,0);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4a13c; end: 105b4a17b; -[SCFriendsFeedAlternateTextAnimation .cxx_destruct] */

void FUN_105b4a13c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b4a17c; end: 105b4a1fb; -[SCFriendsFeedAlternateTextAnimationHandler init] */

undefined1 * FUN_105b4a17c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b4a1fc; end: 105b4a40f; -[SCFriendsFeedAlternateTextAnimationHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_105b4a1fc(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2908;
    _objc_opt_class(PTR_PTR_1126c2908);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar3 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_retain(param_5);
    _objc_opt_class(puVar4);
    uVar6 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar4);
    uVar5 = param_5;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_5);
    uVar6 = param_1;
    func_0x00010bdcb640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf01d20();
    if ((uVar7 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c28cd80(uVar6);
      func_0x00010c142680(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105b4a410; end: 105b4a497; -[SCFriendsFeedAlternateTextAnimationHandler clearAnimationWithSourceView:] */

void FUN_105b4a410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bf2dba0(lVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,puVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b4a498; end: 105b4a547; -[SCFriendsFeedAlternateTextAnimationHandler _animationWithSourceView:] */

void FUN_105b4a498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126c2910;
      _objc_opt_new(PTR_PTR_1126c2910);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x10);
      func_0x00010bf04a20(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b4a548; end: 105b4a577; -[SCFriendsFeedAlternateTextAnimationHandler .cxx_destruct] */

void FUN_105b4a548(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b4a578; end: 105b4a75f; -[SCFriendsFeedAnimationHandler initWithSubstituteAnimationStateProvider:snapReplayAnimationStateProvider:peekAPeekAnimationStateProvider:snapCountDownManager:actionHandler:messagingExperimentService:] */

undefined8 *
FUN_105b4a578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ec098;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b4a760; end: 105b4a77b;  */

void FUN_105b4a760(void)

{
  _objc_opt_new(PTR_PTR_1126c2918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


