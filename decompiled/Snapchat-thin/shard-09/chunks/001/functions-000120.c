/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a3915c; end: 106a39163; -[SCChatCommandMenuTextInputEvent updatedText] */

undefined8 FUN_106a3915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a39164; end: 106a3916b; -[SCChatCommandMenuTextInputEvent addedText] */

undefined8 FUN_106a39164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a3916c; end: 106a39177; -[SCChatCommandMenuTextInputEvent changedRange] */

undefined1  [16] FUN_106a3916c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106a39178; end: 106a391b3; -[SCChatCommandMenuTextInputEvent .cxx_destruct] */

void FUN_106a39178(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a391b4; end: 106a3920f; -[SCChatCommandTokenInfo initWithType:range:] */

void FUN_106a391b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f44c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 106a39210; end: 106a39233; -[SCChatCommandTokenInfo copyWithZone:] */

undefined8 FUN_106a39210(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a39234; end: 106a3929b; -[SCChatCommandTokenInfo hash] */

long * FUN_106a39234(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  plVar1 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100505190(&lStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == (long *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)plVar1;
      _objc_opt_class(plVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)plVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)
                 (ulong)(*(long *)((long)plVar1 + 0x10) == *(long *)(param_3 + 0x10) &&
                        *(long *)((long)plVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar4;
}



/* Entry: 106a3929c; end: 106a39337; -[SCChatCommandTokenInfo isEqual:] */

bool FUN_106a3929c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
                *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106a39338; end: 106a3933f; -[SCChatCommandTokenInfo type] */

undefined8 FUN_106a39338(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a39340; end: 106a3934b; -[SCChatCommandTokenInfo range] */

undefined1  [16] FUN_106a39340(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 106a3934c; end: 106a393cf; +[CSPromptDb schema] */

void FUN_106a3934c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a8cc5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a393d0; end: 106a393f7; -[CSPromptDb getConn] */

void FUN_106a393d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a393f8; end: 106a3947f; -[CSPromptDb initWithSqliteConnection:] */

undefined1 * FUN_106a393f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f44d0;
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



/* Entry: 106a39480; end: 106a39563; -[CSPromptDb .cxx_destruct] */

void FUN_106a39480(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a39564; end: 106a39573; -[CSPromptDb .cxx_construct] */

void FUN_106a39564(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 106a39574; end: 106a396d7;  */

void FUN_106a39574(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde3670,0x14e);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_106a396d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a3961c;
    }
  }
  lVar1 = 0;
LAB_106a3961c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a396d8; end: 106a39817;  */

void FUN_106a396d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cfde0;
  _objc_alloc(PTR_PTR_1126cfde0);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  uVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  uVar7 = param_1;
  func_0x00010b5ef268(param_1,5);
  func_0x00010b5ef268(param_1,6);
  FUN_106a3a254(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a39818; end: 106a3997b;  */

void FUN_106a39818(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde37bf,0x44);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_106a3997c);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a398c0;
    }
  }
  lVar1 = 0;
LAB_106a398c0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a3997c; end: 106a399bf;  */

void FUN_106a3997c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfde8;
  _objc_alloc(PTR_PTR_1126cfde8);
  func_0x00010b5ef268(param_1,0);
  FUN_106a3a85c(puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a399c0; end: 106a39bb3;  */

void FUN_106a399c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x20;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10dde3804,0xc4);
      iStack_64 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_64,param_3);
      func_0x0001005fcac0(lVar2,&iStack_64,param_4);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_5);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_6);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_7);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_8);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a39bb4; end: 106a39d17;  */

void FUN_106a39bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde38c9,0x5b);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a39d18; end: 106a39e5b;  */

void FUN_106a39d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde3925,0x5f);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a39e5c; end: 106a39fbf;  */

void FUN_106a39e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde3985,0x66);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a39fc0; end: 106a3a123;  */

void FUN_106a39fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde39ec,100);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a3a124; end: 106a3a253;  */

void FUN_106a3a124(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x48;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde3a51,0x31);
      func_0x0001005fcac0();
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a3a254; end: 106a3a357;  */

undefined1 *
FUN_106a3a254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f44d8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 106a3a358; end: 106a3a37b; -[CSPromptResult copyWithZone:] */

undefined8 FUN_106a3a358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3a37c; end: 106a3a40f; -[CSPromptResult hash] */

undefined8 * FUN_106a3a37c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106a3a4e8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106a3a4f4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106a3a4f4;
          }
          goto LAB_106a3a4e8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106a3a4f4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106a3a410; end: 106a3a50f; -[CSPromptResult isEqual:] */

long FUN_106a3a410(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a3a4e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a3a4f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106a3a4f4;
          }
          goto LAB_106a3a4e8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a3a4f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a3a510; end: 106a3a53f;  */

undefined8 FUN_106a3a510(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 106a3a540; end: 106a3a57b; -[CSPromptResult .cxx_destruct] */

void FUN_106a3a540(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3a57c; end: 106a3a59f; -[CSPromptInteraction copyWithZone:] */

undefined8 FUN_106a3a57c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3a5a0; end: 106a3a61f; -[CSPromptInteraction hash] */

undefined8 * FUN_106a3a5a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a3a6c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a3a6cc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106a3a6cc;
        }
        goto LAB_106a3a6c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a3a6cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a3a620; end: 106a3a6e7; -[CSPromptInteraction isEqual:] */

long FUN_106a3a620(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a3a6c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a3a6cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106a3a6cc;
        }
        goto LAB_106a3a6c0;
      }
    }
    lVar3 = 0;
  }
LAB_106a3a6cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a3a6e8; end: 106a3a717; -[CSPromptInteraction .cxx_destruct] */

void FUN_106a3a6e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3a718; end: 106a3a73b; -[CSPromptFetchHistory copyWithZone:] */

undefined8 FUN_106a3a718(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3a73c; end: 106a3a7af; -[CSPromptFetchHistory hash] */

undefined8 * FUN_106a3a73c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a3a834;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_106a3a834;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_106a3a834;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_106a3a834:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106a3a7b0; end: 106a3a84f; -[CSPromptFetchHistory isEqual:] */

long FUN_106a3a7b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a3a834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_106a3a834;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106a3a834;
    }
  }
  lVar3 = 1;
LAB_106a3a834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a3a850; end: 106a3a85b; -[CSPromptFetchHistory .cxx_destruct] */

void FUN_106a3a850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3a85c; end: 106a3a8a7;  */

void FUN_106a3a85c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = &lStack_30;
    puStack_28 = PTR_PTR_1126f44f0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
    }
  }
  return;
}



/* Entry: 106a3a8a8; end: 106a3a8cb; -[CSGetFetchedAt copyWithZone:] */

undefined8 FUN_106a3a8a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3a8cc; end: 106a3a8db; -[CSGetFetchedAt hash] */

long FUN_106a3a8cc(long param_1)

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



/* Entry: 106a3a8dc; end: 106a3a963; -[CSGetFetchedAt isEqual:] */

bool FUN_106a3a8dc(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 106a3a964; end: 106a3a96f;  */

undefined8 FUN_106a3a964(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 106a3a970; end: 106a3a9e3; -[SCGrapheneConvoSafetyMetric2 init] */

undefined1 * FUN_106a3a970(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f44f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a3a9e4; end: 106a3aa5b;  */

void FUN_106a3a9e4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109548e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3aa5c; end: 106a3aad3;  */

void FUN_106a3aa5c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954930,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3aad4; end: 106a3ab4b;  */

void FUN_106a3aad4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954980,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3ab4c; end: 106a3abc3;  */

void FUN_106a3ab4c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109549d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3abc4; end: 106a3ac3b;  */

void FUN_106a3abc4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954a20,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3ac3c; end: 106a3adaf;  */

void FUN_106a3ac3c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
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
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110954a70,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106a3adb0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110954ac0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106a3adb0; end: 106a3ae27;  */

void FUN_106a3adb0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954ac0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3ae28; end: 106a3ae9f;  */

void FUN_106a3ae28(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954b10,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3aea0; end: 106a3af17;  */

void FUN_106a3aea0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954b60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3af18; end: 106a3af8f;  */

void FUN_106a3af18(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110954bb0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a3af90; end: 106a3b103;  */

void FUN_106a3af90(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 *extraout_x8;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110954c00,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = &PTR_DAT_110954c70;
  *(undefined1 *)(extraout_x8 + 3) = 1;
  return;
}



/* Entry: 106a3b104; end: 106a3b11f; +[SCCConvoSafetyPromptDelegate valdiMarshallableObjectDescriptor] */

void FUN_106a3b104(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110954c70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106a3b120; end: 106a3b12b; +[SCCConvoSafetyPromptView componentPath] */

undefined ** FUN_106a3b120(void)

{
  return &PTR____CFConstantStringClassReference_110e67f18;
}



/* Entry: 106a3b12c; end: 106a3b15f; -[SCCConvoSafetyPromptView initWithViewModel:componentContext:runtime:] */

void FUN_106a3b12c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4500;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a3b160; end: 106a3b1af; -[SCCConvoSafetyPromptView setViewModel:] */

void FUN_106a3b160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106a3b1b0; end: 106a3b1f3; -[SCCConvoSafetyPromptView viewModel] */

void FUN_106a3b1b0(undefined8 param_1)

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



/* Entry: 106a3b1f4; end: 106a3b237; -[SCCConvoSafetyPromptContext initWithDeckContainerFactory:actionSheetPresenter:blizzardLogger:pageLauncher:delegate:] */

void FUN_106a3b1f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4508;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a3b238; end: 106a3b257; +[SCCConvoSafetyPromptContext valdiMarshallableObjectDescriptor] */

void FUN_106a3b238(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110954d00;
  param_1[1] = &PTR_DAT_110954d90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3b258; end: 106a3b29b; -[SCCConvoSafetyPromptViewModel initWithType:message:primaryAction:secondaryAction:] */

void FUN_106a3b258(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4510;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a3b29c; end: 106a3b2b3; +[SCCConvoSafetyPromptViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a3b29c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110954dc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a3b2b4; end: 106a3b3af; -[SCSnapchattersActionHanderServices initWithSnapchattersBlocker:snapchattersUnblocker:snapchattersDeleter:snapchattersAdder:] */

undefined1 *
FUN_106a3b2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4518;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3b3b0; end: 106a3b3b7; -[SCSnapchattersActionHanderServices snapchattersBlocker] */

undefined8 FUN_106a3b3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a3b3b8; end: 106a3b3bf; -[SCSnapchattersActionHanderServices snapchattersUnblocker] */

undefined8 FUN_106a3b3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a3b3c0; end: 106a3b3c7; -[SCSnapchattersActionHanderServices snapchattersDeleter] */

undefined8 FUN_106a3b3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a3b3c8; end: 106a3b3cf; -[SCSnapchattersActionHanderServices snapchattersAdder] */

undefined8 FUN_106a3b3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a3b3d0; end: 106a3b417; -[SCSnapchattersActionHanderServices .cxx_destruct] */

void FUN_106a3b3d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3b418; end: 106a3b4bb; -[SCGenerativeDisclaimerPresenter initWithWebBrowsingScopeExposer:disclaimerConfiguration:] */

undefined1 *
FUN_106a3b418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3b4bc; end: 106a3b5a7; -[SCGenerativeDisclaimerPresenter presentInContainer:] */

void FUN_106a3b4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a3b5a8; end: 106a3b6b3;  */

void FUN_106a3b5a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a3b6b4; end: 106a3b6ef;  */

void FUN_106a3b6b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7be00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a3b6f0; end: 106a3bb1b; -[SCGenerativeDisclaimerPresenter _presentInContainer:observer:] */

void FUN_106a3b6f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  lStack_148 = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_a8,param_1);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106a3bb1c;
  puStack_c0 = &UNK_110849410;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2e000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a3bca4;
  puStack_f0 = &UNK_110849410;
  _objc_copyWeak(auStack_e0,auStack_a8);
  _objc_retain(param_4);
  uStack_e8 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf71dc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puStack_138;
  puStack_88 = puStack_140;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf42fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c263000();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106a3be2c;
  puStack_118 = &UNK_110849f88;
  puVar11 = auStack_a8;
  _objc_copyWeak(auStack_110,puVar11);
  ppuStack_158 = &puStack_130;
  puStack_160 = puVar8;
  func_0x00010bfefea0();
  puVar13 = (undefined8 *)(param_1 + 8);
  uVar12 = *puVar13;
  *puVar13 = puVar3;
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c211b40(*puVar13);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf0c980(lStack_148);
  _objc_destroyWeak(auStack_110);
  _objc_release(puStack_140);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puStack_138);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_4);
  lVar9 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  lVar10 = lVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_106a3bb1c;
  puStack_190 = puVar6;
  lStack_188 = param_1;
  uStack_180 = param_4;
  lStack_178 = lVar9;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_copyWeak(auStack_198,lVar10 + 0x28);
  uVar1 = *(undefined8 *)(lVar10 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(puVar11);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar11);
  return;
}



/* Entry: 106a3bb1c; end: 106a3bbdb;  */

void FUN_106a3bb1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a3bbdc; end: 106a3bc73;  */

void FUN_106a3bbdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a3bc74;
    puStack_40 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010bf6f440(uVar3,param_2,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a3bc74; end: 106a3bca3;  */

void FUN_106a3bc74(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,PTR____kCFBooleanTrue_11034ab68);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106a3bca4; end: 106a3bd63;  */

void FUN_106a3bca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a3bd64; end: 106a3bdfb;  */

void FUN_106a3bd64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a3bdfc;
    puStack_40 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010bf6f440(uVar3,param_2,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a3bdfc; end: 106a3be2b;  */

void FUN_106a3bdfc(long param_1,undefined8 param_2)

{
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,PTR____kCFBooleanFalse_11034ab60);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106a3be2c; end: 106a3be93;  */

bool FUN_106a3be2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7a520(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return param_1 != 0;
}



/* Entry: 106a3be94; end: 106a3bf83; -[SCGenerativeDisclaimerPresenter presentCommunityGuidlinesInContainer:] */

void FUN_106a3be94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c263000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106a3bf84;
      puStack_50 = &UNK_110848ba8;
      lStack_48 = param_1;
      _objc_retain(puVar3);
      puStack_40 = puVar3;
      _objc_retain(param_3);
      uStack_38 = param_3;
      func_0x00010bcbe2c4("APPSTORE",&puStack_68);
      _objc_release(uStack_38);
      _objc_release(puStack_40);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a3bf84; end: 106a3bf93;  */

void FUN_106a3bf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentBrowserForURL_inContaine_11257c2e0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106a3bf94; end: 106a3bf9f; -[SCGenerativeDisclaimerPresenter dialogDidDismiss:] */

void FUN_106a3bf94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106a3bfa0; end: 106a3bfe7; -[SCGenerativeDisclaimerPresenter webBrowserDidDismiss:] */

void FUN_106a3bfa0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a3bfe8; end: 106a3c053; -[SCGenerativeDisclaimerPresenter _presentBrowserForUrl:] */

void FUN_106a3bfe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x000108065c5c(param_3,*(undefined8 *)(param_1 + 8),1,*(undefined8 *)(param_1 + 0x10),
                        param_1,0x14,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a3c054; end: 106a3c0d3; -[SCGenerativeDisclaimerPresenter _presentBrowserForURL:inContainer:] */

void FUN_106a3c054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x000108065a84(param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a3c0d4; end: 106a3c11b; -[SCGenerativeDisclaimerPresenter .cxx_destruct] */

void FUN_106a3c0d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a3c11c; end: 106a3c287; -[SCGenerativeDisclaimerConfiguration initWithSupportUrl:dialogText:title:acceptButtonText:cancelButtonText:communityGuidelinesText:] */

undefined1 *
FUN_106a3c11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f4528;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3c288; end: 106a3c2ab; -[SCGenerativeDisclaimerConfiguration copyWithZone:] */

undefined8 FUN_106a3c288(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a3c2ac; end: 106a3c34f; -[SCGenerativeDisclaimerConfiguration hash] */

undefined8 * FUN_106a3c2ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a3c430:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a3c43c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_106a3c43c;
                }
                goto LAB_106a3c430;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a3c43c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a3c350; end: 106a3c457; -[SCGenerativeDisclaimerConfiguration isEqual:] */

long FUN_106a3c350(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a3c430:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a3c43c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_106a3c43c;
                }
                goto LAB_106a3c430;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a3c43c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a3c458; end: 106a3c45f; -[SCGenerativeDisclaimerConfiguration supportUrl] */

undefined8 FUN_106a3c458(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a3c460; end: 106a3c467; -[SCGenerativeDisclaimerConfiguration dialogText] */

undefined8 FUN_106a3c460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a3c468; end: 106a3c46f; -[SCGenerativeDisclaimerConfiguration title] */

undefined8 FUN_106a3c468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a3c470; end: 106a3c477; -[SCGenerativeDisclaimerConfiguration acceptButtonText] */

undefined8 FUN_106a3c470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a3c478; end: 106a3c47f; -[SCGenerativeDisclaimerConfiguration cancelButtonText] */

undefined8 FUN_106a3c478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a3c480; end: 106a3c487; -[SCGenerativeDisclaimerConfiguration communityGuidelinesText] */

undefined8 FUN_106a3c480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


