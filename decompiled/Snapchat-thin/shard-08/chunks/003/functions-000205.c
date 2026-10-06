/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f9a6f4; end: 105f9a6f7;  */

void FUN_105f9a6f4(void)

{
  return;
}



/* Entry: 105f9a6f8; end: 105f9a75f; -[SCFriendingComposerMentionedFriendStore _publishInitData] */

void FUN_105f9a6f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010050471c(uVar1,&PTR___NSConcreteGlobalBlock_110900bd8,
                      &PTR___NSConcreteGlobalBlock_110900bf8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110900c38);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f9a760; end: 105f9a767;  */

void FUN_105f9a760(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105f9a768; end: 105f9a78f;  */

void FUN_105f9a768(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105f9a790; end: 105f9a79b;  */

void FUN_105f9a790(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126c69b8;
  _objc_alloc(PTR_PTR_1126c69b8);
  func_0x00010c05a680();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010901c6c4(param_2);
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1d80(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af120(puVar2);
  _objc_release(puVar3);
  uVar4 = param_2;
  func_0x00010901c974();
  uVar5 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar4 = param_2;
    func_0x00010901c6c4();
    if ((int)uVar4 == 0) {
      func_0x00010c20f640(puVar2);
      goto LAB_105f9a8e0;
    }
    func_0x00010bfebe20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c262240(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c261d20();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c20f640(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
LAB_105f9a8e0:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f9a79c; end: 105f9a907;  */

void FUN_105f9a79c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126c69b8;
  _objc_alloc(PTR_PTR_1126c69b8);
  func_0x00010c05a680();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010901c6c4(param_1);
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1d80(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af120(puVar2);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010901c974();
  uVar5 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010901c6c4();
    if ((int)uVar4 == 0) {
      func_0x00010c20f640(puVar2);
      goto LAB_105f9a8e0;
    }
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c262240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c261d20();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c20f640(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
LAB_105f9a8e0:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f9a908; end: 105f9aa9f; -[SCFriendingComposerMentionedFriendStore _didAddSnapchatter:success:error:] */

void FUN_105f9a908(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if (iVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010901c6c4();
      if ((int)uVar1 == 0) {
        func_0x00010c0a30a0(*(undefined8 *)(param_1 + 0x48));
      }
      else {
        func_0x00010c0a3080();
      }
      uVar1 = *(undefined8 *)(param_1 + 8);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x105f9aa20;
      puStack_40 = &UNK_110900c58;
      lStack_38 = param_1;
      func_0x000100504554(uVar1,&puStack_58);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9aaa0; end: 105f9ac17; -[SCFriendingComposerMentionedFriendStore _didRemoveSnapchatter:success:error:] */

void FUN_105f9aaa0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if (iVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x105f9ab98;
      puStack_40 = &UNK_110900c58;
      lStack_38 = param_1;
      func_0x000100504554(uVar1,&puStack_58);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9ac18; end: 105f9ac1b; -[SCFriendingComposerMentionedFriendStore didStartSnapchattersUpdateDataRequest:] */

void FUN_105f9ac18(void)

{
  return;
}



/* Entry: 105f9ac1c; end: 105f9ada7; -[SCFriendingComposerMentionedFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105f9ac1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f9ada8;
  puStack_80 = &UNK_110900c88;
  uStack_78 = uVar1;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_copyWeak(auStack_a8,auStack_58);
  uStack_a0 = param_4;
  _objc_retain(param_5);
  func_0x00010c0bc6c0(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105f9ada8; end: 105f9af0f;  */

void FUN_105f9ada8(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x30);
  _objc_retain(param_2);
  uStack_68 = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(param_2);
  return;
}



/* Entry: 105f9af10; end: 105f9af47;  */

void FUN_105f9af10(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9af48; end: 105f9b083;  */

void FUN_105f9af48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,param_1 + 0x30);
  _objc_retain(param_2);
  uStack_58 = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105f9b084; end: 105f9b0bb;  */

void FUN_105f9b084(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9b0bc; end: 105f9b0c3; -[SCFriendingComposerMentionedFriendStore mentionedFriendsObservable] */

undefined8 FUN_105f9b0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f9b0c4; end: 105f9b0f3; -[SCFriendingComposerMentionedFriendStore setMentionedFriendsObservable:] */

void FUN_105f9b0c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9b0f4; end: 105f9b183; -[SCFriendingComposerMentionedFriendStore .cxx_destruct] */

void FUN_105f9b0f4(long param_1)

{
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



/* Entry: 105f9b184; end: 105f9b1f7; -[SCFriendingMentionNameCardLogger initWithGrapheneRegistry:] */

undefined1 * FUN_105f9b184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee7a0;
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



/* Entry: 105f9b1f8; end: 105f9b2a3; -[SCFriendingMentionNameCardLogger logMentionedNumber:] */

void FUN_105f9b1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c69c0;
  func_0x00010c10f820(PTR_PTR_1126c69c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(uVar2,param_2,puVar3,param_3);
  puVar4 = PTR_PTR_1126c69c0;
  func_0x00010c236ce0(PTR_PTR_1126c69c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f9b2a4; end: 105f9b317; -[SCFriendingMentionNameCardLogger logClickAdd] */

void FUN_105f9b2a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c69c0;
  func_0x00010befcac0(PTR_PTR_1126c69c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f9b318; end: 105f9b38b; -[SCFriendingMentionNameCardLogger logClickAccept] */

void FUN_105f9b318(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c69c0;
  func_0x00010beecb80(PTR_PTR_1126c69c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f9b38c; end: 105f9b397; -[SCFriendingMentionNameCardLogger .cxx_destruct] */

void FUN_105f9b38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f9b398; end: 105f9b5f3; -[SCFriendingMentionNameCardMessageAccessoryPlugin initWithCurrentUserId:snapchattersObservableRepository:snapchattersDataMutator:snapchattersDataTracker:navigationController:friendProfileScopeExposer:performerProvider:grapheneRegistry:deepLinkHandler:] */

undefined8 *
FUN_105f9b398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ee7a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
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



/* Entry: 105f9b5f4; end: 105f9b887; -[SCFriendingMentionNameCardMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105f9b5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c268560(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar7);
  uVar2 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105f9b940;
  puStack_80 = &UNK_110900d48;
  _objc_retain(uVar7);
  uVar3 = uVar2;
  uStack_78 = uVar7;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105f9ba7c;
  puStack_b0 = &UNK_1108a4880;
  _objc_copyWeak(auStack_a8,auStack_a0);
  uVar2 = uVar4;
  func_0x00010bfb26a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_a0);
  uVar6 = uVar3;
  func_0x00010bfb26a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105f9b888; end: 105f9ba27;  */

void FUN_105f9b888(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef57c8();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR____kCFBooleanFalse_11034ab60;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x000108ef55a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x000108ef56b4(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100bf0c60(uVar1,uVar2);
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = puVar3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f9ba28; end: 105f9ba4f;  */

void FUN_105f9ba28(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105f9ba50; end: 105f9ba7b;  */

uint FUN_105f9ba50(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
    return (uint)param_2 ^ 1;
  }
  return 0;
}



/* Entry: 105f9ba7c; end: 105f9bbdb;  */

void FUN_105f9ba7c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010be074c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f9bbdc; end: 105f9bc87; -[SCFriendingMentionNameCardMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_105f9bbdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && (uVar1 = param_3, func_0x00010c080dc0(), (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x000100bf0c60(0,uVar1);
    _objc_release(uVar1);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105f9bc88; end: 105f9bcb7; -[SCFriendingMentionNameCardMessageAccessoryPlugin identifier] */

void FUN_105f9bc88(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e35698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e35698);
  return;
}



/* Entry: 105f9bcb8; end: 105f9bcbf; -[SCFriendingMentionNameCardMessageAccessoryPlugin pluginType] */

undefined8 FUN_105f9bcb8(void)

{
  return 0;
}



/* Entry: 105f9bcc0; end: 105f9bd77; -[SCFriendingMentionNameCardMessageAccessoryPlugin _eligibleSnapchattersToBeRenderedWithEligibleUserIds:] */

void FUN_105f9bcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c09dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e0ea0(uVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f9bd78; end: 105f9bd97;  */

void FUN_105f9bd78(undefined8 param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110900d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9bd98; end: 105f9be23;  */

uint FUN_105f9bd98(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((uVar1 == 0) && (uVar1 = param_2, func_0x000100bf119c(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_2, func_0x00010c06d560(), (uVar1 & 1) == 0)) {
    uVar1 = param_2;
    func_0x000100bf0c60(param_2,0);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105f9be24; end: 105f9c03b; -[SCFriendingMentionNameCardMessageAccessoryPlugin _contextParamsForSnapchatters:] */

void FUN_105f9be24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c69c8;
  _objc_opt_new(PTR_PTR_1126c69c8);
  puVar2 = PTR_PTR_1126c69d0;
  _objc_alloc(PTR_PTR_1126c69d0);
  func_0x00010c049620();
  func_0x00010c1c69c0(puVar1);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f9c03c;
  puStack_78 = &UNK_110855260;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1d2f80(puVar1);
  func_0x00010c1d2fc0(puVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_retain(param_3);
  func_0x00010c1d2fa0(puVar1);
  puVar2 = PTR_PTR_1126ae750;
  puVar3 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar4 = PTR_PTR_1126c69d8;
  func_0x00010bf44480(PTR_PTR_1126c69d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar3);
  func_0x00010c2468a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f9c03c; end: 105f9c0e3;  */

void FUN_105f9c03c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f9c0e4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f9c0e4; end: 105f9c137;  */

void FUN_105f9c0e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be62260(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f9c138; end: 105f9c13b;  */

void FUN_105f9c138(void)

{
  return;
}



/* Entry: 105f9c13c; end: 105f9c223;  */

void FUN_105f9c13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f9c224;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105f9c224; end: 105f9c25b;  */

void FUN_105f9c224(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9c25c; end: 105f9c43f; -[SCFriendingMentionNameCardMessageAccessoryPlugin _presentUserProfileWithUser:source:snapchatters:] */

void FUN_105f9c25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105f9c440;
  puStack_70 = &UNK_11085a548;
  _objc_retain(param_3);
  lVar1 = param_5;
  uStack_68 = param_3;
  func_0x0001006372a4(param_5,&puStack_88);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    lVar3 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010c0159e0();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f9c440; end: 105f9c4af;  */

undefined8 FUN_105f9c440(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105f9c4b0; end: 105f9c503; -[SCFriendingMentionNameCardMessageAccessoryPlugin friendProfileDidDismiss:] */

void FUN_105f9c4b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9c504; end: 105f9c5a7; -[SCFriendingMentionNameCardMessageAccessoryPlugin _navigateToChatWithUserId:] */

void FUN_105f9c504(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3400(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1bc0();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105f9c5a8; end: 105f9c5ab;  */

void FUN_105f9c5a8(void)

{
  return;
}



/* Entry: 105f9c5ac; end: 105f9c637; -[SCFriendingMentionNameCardMessageAccessoryPlugin .cxx_destruct] */

void FUN_105f9c5ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f9c638; end: 105f9c663; +[SCGrapheneMentionsNameCardMetric presented] */

void FUN_105f9c638(void)

{
  _objc_alloc(PTR_PTR_1126c69c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9c664; end: 105f9c68f; +[SCGrapheneMentionsNameCardMetric showCount] */

void FUN_105f9c664(void)

{
  _objc_alloc(PTR_PTR_1126c69c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9c690; end: 105f9c6bb; +[SCGrapheneMentionsNameCardMetric added] */

void FUN_105f9c690(void)

{
  _objc_alloc(PTR_PTR_1126c69c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9c6bc; end: 105f9c6e7; +[SCGrapheneMentionsNameCardMetric accepted] */

void FUN_105f9c6bc(void)

{
  _objc_alloc(PTR_PTR_1126c69c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9c6e8; end: 105f9c787; -[SCGrapheneMentionsNameCardMetric description] */

void FUN_105f9c6e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34718;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e34718,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ee7b0;
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



/* Entry: 105f9c788; end: 105f9c8e7; -[SCGrapheneRegistry mentionsNameCardGraphene] */

void FUN_105f9c788(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105f9c810;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2540 != -1) {
    func_0x00010002a2fc(0x1136c2540,&puStack_48);
  }
  uVar1 = uRam00000001136c2538;
  _objc_retain(uRam00000001136c2538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f9c8e8; end: 105f9c8f3; +[SCCChatMentionUpsellView componentPath] */

undefined ** FUN_105f9c8e8(void)

{
  return &PTR____CFConstantStringClassReference_110e347b8;
}



/* Entry: 105f9c8f4; end: 105f9c927; -[SCCChatMentionUpsellView initWithViewModel:componentContext:runtime:] */

void FUN_105f9c8f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f9c928; end: 105f9c977; -[SCCChatMentionUpsellView setViewModel:] */

void FUN_105f9c928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9c978; end: 105f9c9bb; -[SCCChatMentionUpsellView viewModel] */

void FUN_105f9c978(undefined8 param_1)

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



/* Entry: 105f9c9bc; end: 105f9ca9b; -[SCCChatMentionUpsellContext initWithMentionedFriendStore:onPresentUserProfile:onPresentUserChat:onPresentUserSnap:] */

undefined8 *
FUN_105f9c9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126ee7c0;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 105f9ca9c; end: 105f9cabb; +[SCCChatMentionUpsellContext valdiMarshallableObjectDescriptor] */

void FUN_105f9ca9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110900e48;
  param_1[1] = &PTR_DAT_110900ec0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9cabc; end: 105f9caef; -[SCCChatMentionUpsellViewModel init] */

void FUN_105f9cabc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f9caf0; end: 105f9cb07; +[SCCChatMentionUpsellViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9caf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1bd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9cb08; end: 105f9cb13; +[SCCSnapProProfileShareView componentPath] */

undefined ** FUN_105f9cb08(void)

{
  return &PTR____CFConstantStringClassReference_110e347d8;
}



/* Entry: 105f9cb14; end: 105f9cb47; -[SCCSnapProProfileShareView initWithViewModel:componentContext:runtime:] */

void FUN_105f9cb14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f9cb48; end: 105f9cb97; -[SCCSnapProProfileShareView setViewModel:] */

void FUN_105f9cb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9cb98; end: 105f9cbdb; -[SCCSnapProProfileShareView viewModel] */

void FUN_105f9cb98(undefined8 param_1)

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



/* Entry: 105f9cbdc; end: 105f9cc1b; -[SCCSnapProProfileShareContext initWithSubscriptionManager:] */

void FUN_105f9cbdc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f9cc1c; end: 105f9cc3b; +[SCCSnapProProfileShareContext valdiMarshallableObjectDescriptor] */

void FUN_105f9cc1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110900ed8;
  param_1[1] = &PTR_DAT_110900f38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9cc3c; end: 105f9cc77; -[SCCSnapProProfileShareViewModel initWithProfileId:isSentByUser:] */

void FUN_105f9cc3c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f9cc78; end: 105f9cc8f; +[SCCSnapProProfileShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9cc78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_profileId_110900f50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9cc90; end: 105f9cc9b; +[SCCLensSpotlightShareBelowMessageActionComponent componentPath] */

undefined ** FUN_105f9cc90(void)

{
  return &PTR____CFConstantStringClassReference_110e347f8;
}



/* Entry: 105f9cc9c; end: 105f9cccf; -[SCCLensSpotlightShareBelowMessageActionComponent initWithViewModel:componentContext:runtime:] */

void FUN_105f9cc9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f9ccd0; end: 105f9cd1f; -[SCCLensSpotlightShareBelowMessageActionComponent setViewModel:] */

void FUN_105f9ccd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9cd20; end: 105f9cd63; -[SCCLensSpotlightShareBelowMessageActionComponent viewModel] */

void FUN_105f9cd20(undefined8 param_1)

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



/* Entry: 105f9cd64; end: 105f9cdfb; -[SCCLensSpotlightShareBelowMessageActionContext initWithPrimaryCtaHandler:secondaryCtaHandler:] */

undefined8 *
FUN_105f9cd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126ee7f0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105f9cdfc; end: 105f9ce0b; +[SCCLensSpotlightShareBelowMessageActionContext valdiMarshallableObjectDescriptor] */

void FUN_105f9cdfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110900f98;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9ce0c; end: 105f9ce3f; -[SCCLensSpotlightShareBelowMessageActionViewModel init] */

void FUN_105f9ce0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee7f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f9ce40; end: 105f9ce5b; +[SCCLensSpotlightShareBelowMessageActionViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9ce40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1be8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9ce5c; end: 105f9ce67; +[SCCLensPromptMessageView componentPath] */

undefined ** FUN_105f9ce5c(void)

{
  return &PTR____CFConstantStringClassReference_110e34818;
}



/* Entry: 105f9ce68; end: 105f9ce9b; -[SCCLensPromptMessageView initWithViewModel:componentContext:runtime:] */

void FUN_105f9ce68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee800;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f9ce9c; end: 105f9ceeb; -[SCCLensPromptMessageView setViewModel:] */

void FUN_105f9ce9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9ceec; end: 105f9cf2f; -[SCCLensPromptMessageView viewModel] */

void FUN_105f9ceec(undefined8 param_1)

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



/* Entry: 105f9cf30; end: 105f9cf6b; -[SCCLensPromptBoltMessageInfo initWithLensId:url:key:] */

void FUN_105f9cf30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee808;
  uStack_20 = param_1;
  func_0x000105f9d0bc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f9cf6c; end: 105f9cf7b; +[SCCLensPromptBoltMessageInfo valdiMarshallableObjectDescriptor] */

void FUN_105f9cf6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110900fe0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9cf7c; end: 105f9cffb; -[SCCLensPromptMessageContext initWithOnCtaTap:messageInfoObservable:] */

undefined8 *
FUN_105f9cf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ee810;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105f9d0bc(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f9cffc; end: 105f9d00f; +[SCCLensPromptMessageContext valdiMarshallableObjectDescriptor] */

void FUN_105f9cffc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901040;
  param_1[1] = &PTR_s_SCBridgeObservable_110901088;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d010; end: 105f9d047; -[SCCLensPromptMessageInfo initWithEncryptedPromptInfo:encryptedResponseInfo:] */

void FUN_105f9d010(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee818;
  uStack_20 = param_1;
  func_0x000105f9d0bc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f9d048; end: 105f9d05b; +[SCCLensPromptMessageInfo valdiMarshallableObjectDescriptor] */

void FUN_105f9d048(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109010a0;
  param_1[1] = &PTR_DAT_1109010e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d05c; end: 105f9d08f; -[SCCLensPromptMessageViewModel init] */

void FUN_105f9d05c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee820;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f9d090; end: 105f9d0c3; +[SCCLensPromptMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f9d090(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f9d0c4; end: 105f9d0cf; +[SCCArrivalNotificationStatusMessage componentPath] */

undefined ** FUN_105f9d0c4(void)

{
  return &PTR____CFConstantStringClassReference_110e34838;
}



/* Entry: 105f9d0d0; end: 105f9d103; -[SCCArrivalNotificationStatusMessage initWithViewModel:componentContext:runtime:] */

void FUN_105f9d0d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee828;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f9d104; end: 105f9d153; -[SCCArrivalNotificationStatusMessage setViewModel:] */

void FUN_105f9d104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9d154; end: 105f9d197; -[SCCArrivalNotificationStatusMessage viewModel] */

void FUN_105f9d154(undefined8 param_1)

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



/* Entry: 105f9d198; end: 105f9d1af; +[SCCArrivalNotificationPreviewActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f9d198(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901128;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1109010f8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f9d1b0; end: 105f9d1d7;  */

undefined8 FUN_105f9d1b0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1]);
  return 0;
}



/* Entry: 105f9d1d8; end: 105f9d237;  */

void FUN_105f9d1d8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105f9d430(FUN_105f9d3b4);
  _objc_retainBlock(&puStack_48);
  func_0x000105f9d440();
  func_0x000105f9d428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d238; end: 105f9d257; +[SCCArrivalNotificationsActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f9d238(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109011b8;
  param_1[1] = &PTR_s_SCBridgeObservable_1109012d8;
  param_1[2] = &PTR_DAT_110901170;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f9d258; end: 105f9d287;  */

undefined8 FUN_105f9d258(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3]);
  return 0;
}



/* Entry: 105f9d288; end: 105f9d2e7;  */

void FUN_105f9d288(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105f9d430(0x105f9d3e4);
  _objc_retainBlock(&puStack_48);
  func_0x000105f9d440();
  func_0x000105f9d428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9d2e8; end: 105f9d2f3; +[SCCArrivalNotificationUpsellTray componentPath] */

undefined ** FUN_105f9d2e8(void)

{
  return &PTR____CFConstantStringClassReference_110e34858;
}



/* Entry: 105f9d2f4; end: 105f9d327; -[SCCArrivalNotificationUpsellTray initWithViewModel:componentContext:runtime:] */

void FUN_105f9d2f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee830;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}


