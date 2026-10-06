/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fc8db8; end: 105fc8fb7; -[SCChatReplyComposeViewController initWithViewModelObservable:valdiRuntimeProvider:scopeDelegate:queue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105fc8db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126eec68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273c10c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273c10c) = puVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11273c110;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273c114,param_5);
    puVar2 = PTR_PTR_1126c6cd8;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar5 = (long)_DAT_11273c118;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = param_3;
    func_0x00010c0e0ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fc8fb8; end: 105fc9073;  */

void FUN_105fc8fb8(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_105fc9074;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fc9074; end: 105fc90a7;  */

void FUN_105fc9074(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc90a8; end: 105fc90b7; -[SCChatReplyComposeViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc90a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11273c118));
  return;
}



/* Entry: 105fc90b8; end: 105fc912f; -[SCChatReplyComposeViewController _updateViewWithViewModel:] */

void FUN_105fc90b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fc9130;
  puStack_20 = &UNK_110904f68;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105fc9138;
  puStack_48 = &UNK_110904f98;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf0a0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105fc9130; end: 105fc9143;  */

void FUN_105fc9130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dismissScope_11255e6c0);
  return;
}



/* Entry: 105fc9144; end: 105fc918b; -[SCChatReplyComposeViewController _dismissScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc9144(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11273c10c));
  param_1 = param_1 + _DAT_11273c114;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf835a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc918c; end: 105fc93ab; -[SCChatReplyComposeViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc918c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11273c11c;
  func_0x00010bf6ef60(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126c6ce0;
  _objc_alloc(PTR_PTR_1126c6ce0);
  func_0x00010c02b2e0();
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105fc93ac;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1d1760(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273c110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c6cd8);
  uVar3 = uVar5;
  func_0x00010bf55740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c1ee6c0(*(undefined8 *)(param_1 + lVar6));
  _objc_initWeak(auStack_98,*(undefined8 *)(param_1 + lVar6));
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_copyWeak(auStack_a8,auStack_98);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c0e4c00(uVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc93ac; end: 105fc93d7;  */

void FUN_105fc93ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc93d8; end: 105fc947b;  */

void FUN_105fc93d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c2a15a0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fc947c; end: 105fc950b;  */

void FUN_105fc947c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fc950c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105fc950c; end: 105fc9537;  */

void FUN_105fc950c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc9538; end: 105fc9617; -[SCChatReplyComposeViewController _handleValdiViewChange] */

/* WARNING: Possible PIC construction at 0x000105fc95a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105fc95a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc9538(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_4 + _DAT_11273c11c);
  lVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c0c3ec0(param_3,0x7fefffffffffffff,uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + _DAT_11273c120),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 105fc9618; end: 105fc9693; -[SCChatReplyComposeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc9618(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c118,0);
  _objc_storeStrong(param_1 + _DAT_11273c11c,0);
  _objc_storeStrong(param_1 + _DAT_11273c10c,0);
  _objc_destroyWeak(param_1 + _DAT_11273c114);
  _objc_storeStrong(param_1 + _DAT_11273c120,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c110,0);
  return;
}



/* Entry: 105fc9694; end: 105fc976b; -[SCChatReplyComposeViewModel initWithMessage:conversationParticipants:snapchatters:] */

undefined1 *
FUN_105fc9694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eec70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc976c; end: 105fc978f; -[SCChatReplyComposeViewModel copyWithZone:] */

undefined8 FUN_105fc976c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105fc9790; end: 105fc980f; -[SCChatReplyComposeViewModel hash] */

undefined8 * FUN_105fc9790(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105fc98a8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105fc98b4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105fc98b4;
          }
          goto LAB_105fc98a8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105fc98b4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105fc9810; end: 105fc98cf; -[SCChatReplyComposeViewModel isEqual:] */

long FUN_105fc9810(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105fc98a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105fc98b4;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105fc98b4;
          }
          goto LAB_105fc98a8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105fc98b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105fc98d0; end: 105fc98d7; -[SCChatReplyComposeViewModel message] */

undefined8 FUN_105fc98d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105fc98d8; end: 105fc98df; -[SCChatReplyComposeViewModel conversationParticipants] */

undefined8 FUN_105fc98d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105fc98e0; end: 105fc98e7; -[SCChatReplyComposeViewModel snapchatters] */

undefined8 FUN_105fc98e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fc98e8; end: 105fc9923; -[SCChatReplyComposeViewModel .cxx_destruct] */

void FUN_105fc98e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fc9924; end: 105fc9997; -[SCGraphenePresentKeepSnapsUpsellMetric2 init] */

undefined1 * FUN_105fc9924(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eec78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105fc9998; end: 105fc9b0b;  */

undefined ** FUN_105fc9998(long param_1,undefined **param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
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
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110904fc8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110e35358;
}



/* Entry: 105fc9b0c; end: 105fc9b17; +[SCCChatKeepSnapsUpsellComponent componentPath] */

undefined ** FUN_105fc9b0c(void)

{
  return &PTR____CFConstantStringClassReference_110e35358;
}



/* Entry: 105fc9b18; end: 105fc9b4b; -[SCCChatKeepSnapsUpsellComponent initWithViewModel:componentContext:runtime:] */

void FUN_105fc9b18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eec80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fc9b4c; end: 105fc9b9b; -[SCCChatKeepSnapsUpsellComponent setViewModel:] */

void FUN_105fc9b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fc9b9c; end: 105fc9bdf; -[SCCChatKeepSnapsUpsellComponent viewModel] */

void FUN_105fc9b9c(undefined8 param_1)

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



/* Entry: 105fc9be0; end: 105fc9c77; -[SCCChatKeepSnapsUpsellContext initWithOnAction:onDismiss:] */

undefined8 *
FUN_105fc9be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_38 = PTR_PTR_1126eec88;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105fc9c78; end: 105fc9c87; +[SCCChatKeepSnapsUpsellContext valdiMarshallableObjectDescriptor] */

void FUN_105fc9c78(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110905028;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc9c88; end: 105fc9cbb; -[SCCChatKeepSnapsUpsellViewModel init] */

void FUN_105fc9c88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eec90;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105fc9cbc; end: 105fc9cd7; +[SCCChatKeepSnapsUpsellViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc9cbc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110905070;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc9cd8; end: 105fca047; -[SCChatLockedConversationAlertEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc9cd8(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11273c134;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (lVar4 != 0) {
    lVar2 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf60a00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010bf60a00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x000108ef3728(lVar4,lVar6,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000105fca224();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x000105fca23c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000105fca254();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_1);
    puVar9 = PTR_PTR_1126aed70;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar10);
    _objc_release(puVar11);
    func_0x00010c211b40(puVar10);
    func_0x00010c18b5e0(puVar10);
    param_1 = param_1 + lVar12;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(lVar1);
  func_0x00010bf84b00(param_2);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfc0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fca048; end: 105fca087;  */

void FUN_105fca048(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fca088; end: 105fca08b; -[SCChatLockedConversationAlertEntryPoint dialogDidDismiss:] */

void FUN_105fca088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dialogDidDismiss_11255c9c8);
  return;
}



/* Entry: 105fca08c; end: 105fca173; -[SCChatLockedConversationAlertEntryPoint _dialogDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca08c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_11273c134;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fca174; end: 105fca19f;  */

void FUN_105fca174(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fca1a0; end: 105fca213; -[SCChatLockedConversationAlertEntryPoint _notifyDelegateOfDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca1a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c134;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09fea0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fca214; end: 105fca26b; -[SCChatLockedConversationAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273c134);
  return;
}



/* Entry: 105fca26c; end: 105fca2cb; -[SCUnreadMessageAlertEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca26c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11273c138;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebba60(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fca2cc; end: 105fca6cf; -[SCUnreadMessageAlertEntryPoint _showUnreadMessageDialogForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca2cc(long param_1,undefined1 *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_138 [8];
  ulong uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010901d778();
    puVar2 = PTR_PTR_1126b2c18;
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = param_3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = puVar2;
    }
    else {
      puVar1 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1120();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = puVar2;
      _objc_release(puVar1);
    }
    unaff_x20 = (long)_DAT_11273c138;
    unaff_x22 = param_1 + unaff_x20;
    _objc_loadWeakRetained();
    uVar3 = unaff_x22;
    func_0x00010bf75f00();
    unaff_x21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar3 & 1) == 0) {
      func_0x000105fca8fc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105fca914();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_100 = puStack_f8;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release();
    func_0x000105fca92c();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    puVar1 = PTR_PTR_1126aed70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105fca6d0;
    puStack_b0 = &UNK_110849410;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_3);
    puStack_a8 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar5 = PTR_PTR_1126aed70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x105fca7c4;
    puStack_d8 = &UNK_1108482a8;
    param_2 = auStack_98;
    _objc_copyWeak(auStack_d0,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar2 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar1;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c420(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c18b5e0(puVar2);
    param_1 = param_1 + unaff_x20;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar1);
    _objc_release(puStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puStack_f8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  puVar2 = param_3;
  __Unwind_Resume();
  pcStack_108 = FUN_105fca6d0;
  uStack_130 = unaff_x22;
  puStack_128 = unaff_x21;
  lStack_120 = unaff_x20;
  puStack_118 = param_3;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_138,puVar2 + 0x28);
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_138);
  _objc_release(param_2);
  return;
}



/* Entry: 105fca6d0; end: 105fca78f;  */

void FUN_105fca6d0(long param_1,undefined8 param_2)

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



/* Entry: 105fca790; end: 105fca803;  */

void FUN_105fca790(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fca804; end: 105fca873; -[SCUnreadMessageAlertEntryPoint _didConfirmEnterChatWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273c138;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf741c0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fca874; end: 105fca8e7; -[SCUnreadMessageAlertEntryPoint _didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca874(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c138;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75360(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fca8e8; end: 105fca8eb; -[SCUnreadMessageAlertEntryPoint dialogDidDismiss:] */

void FUN_105fca8e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismiss_11255ce98);
  return;
}



/* Entry: 105fca8ec; end: 105fca943; -[SCUnreadMessageAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fca8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273c138);
  return;
}



/* Entry: 105fca944; end: 105fcaabf; -[SCStreaksEducationStatusMessagePluginMessagePlugin initWithCurrentUserId:userProvider:composerCoreUIServices:friendmojiRegistry:userInfoProvider:groupStore:messagingMessageProvider:] */

undefined1 *
FUN_105fca944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126eec98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 105fcaac0; end: 105fcae5f; -[SCStreaksEducationStatusMessagePluginMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fcaac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25be40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 == 0) || (uVar2 = uVar4, func_0x00010c25c360(), (int)uVar2 == 0)) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010beff660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar7);
    uVar8 = uVar6;
    func_0x00010c0b7600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8e420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar9 = PTR_PTR_1126c6ce8;
    _objc_alloc_init(PTR_PTR_1126c6ce8);
    uVar5 = param_4;
    func_0x0001070b1c70();
    if ((int)uVar5 == 0) {
      uVar5 = param_4;
      func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6b20(puVar9);
    }
    else {
      uVar5 = param_3;
      func_0x00010bf6e760(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4760(puVar9);
      _objc_release(uVar10);
    }
    _objc_release(uVar11);
    _objc_release(uVar5);
    func_0x00010c25c360(uVar4);
    func_0x00010c1b4ba0(puVar9);
    uVar2 = uVar4;
    func_0x00010c25be80(uVar4);
    func_0x00010c20e2c0((double)(uVar2 & 0xffffffff),puVar9);
    func_0x00010c20e2e0(puVar9);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c32a0(puVar9);
    _objc_release(puVar14);
    puVar12 = PTR_PTR_1126c6cf0;
    _objc_alloc_init(PTR_PTR_1126c6cf0);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f040(puVar12);
    _objc_release(uVar5);
    func_0x00010c166b20(puVar12);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e800(puVar12);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4aa0(puVar12);
    _objc_release(uVar5);
    puVar14 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar13 = PTR_PTR_1126c6cf8;
    func_0x00010bf44480(PTR_PTR_1126c6cf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(uVar8);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105fcae60; end: 105fcae8f; -[SCStreaksEducationStatusMessagePluginMessagePlugin identifier] */

void FUN_105fcae60(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebb18);
  return;
}



/* Entry: 105fcae90; end: 105fcae97; -[SCStreaksEducationStatusMessagePluginMessagePlugin pluginType] */

undefined8 FUN_105fcae90(void)

{
  return 1;
}



/* Entry: 105fcae98; end: 105fcae9f; -[SCStreaksEducationStatusMessagePluginMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fcae98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105fcaea0; end: 105fcaecf; -[SCStreaksEducationStatusMessagePluginMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fcaea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcaed0; end: 105fcaed7; -[SCStreaksEducationStatusMessagePluginMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fcaed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105fcaed8; end: 105fcaf07; -[SCStreaksEducationStatusMessagePluginMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fcaed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcaf08; end: 105fcaf1f; -[SCStreaksEducationStatusMessagePluginMessagePlugin uiContainer] */

void FUN_105fcaf08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fcaf20; end: 105fcaf2b; -[SCStreaksEducationStatusMessagePluginMessagePlugin setUiContainer:] */

void FUN_105fcaf20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105fcaf2c; end: 105fcafb7; -[SCStreaksEducationStatusMessagePluginMessagePlugin .cxx_destruct] */

void FUN_105fcaf2c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105fcafb8; end: 105fcafc3; +[SCCTinySnapsView componentPath] */

undefined ** FUN_105fcafb8(void)

{
  return &PTR____CFConstantStringClassReference_110e35498;
}



/* Entry: 105fcafc4; end: 105fcaff7; -[SCCTinySnapsView initWithViewModel:componentContext:runtime:] */

void FUN_105fcafc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeca0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fcaff8; end: 105fcb047; -[SCCTinySnapsView setViewModel:] */

void FUN_105fcaff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fcb048; end: 105fcb08b; -[SCCTinySnapsView viewModel] */

void FUN_105fcb048(undefined8 param_1)

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



/* Entry: 105fcb08c; end: 105fcb0af; -[SCCTinySnapContext init] */

void FUN_105fcb08c(void)

{
  func_0x000105fcb0fc(PTR_PTR_1126eeca8);
  return;
}



/* Entry: 105fcb0b0; end: 105fcb0c3; +[SCCTinySnapContext valdiMarshallableObjectDescriptor] */

void FUN_105fcb0b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109050a0;
  param_1[1] = &PTR_DAT_110905100;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fcb0c4; end: 105fcb0e7; -[SCCTinySnapViewModel init] */

void FUN_105fcb0c4(void)

{
  func_0x000105fcb0fc(PTR_PTR_1126eecb0);
  return;
}



/* Entry: 105fcb0e8; end: 105fcb11f; +[SCCTinySnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fcb0e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110905120;
  param_1[1] = &PTR_DAT_110905180;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fcb120; end: 105fcb373; -[SCUrlPreviewMessageFetchingPlugin initWithUrlPreviewProvider:urlSpamProvider:messagingMessageProvider:experimentService:normalizedSpamCheckURLFinder:grapheneRegistry:conversationUpdatesPublisher:] */

undefined1 *
FUN_105fcb120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eecb8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x68) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
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



/* Entry: 105fcb374; end: 105fcb81f; -[SCUrlPreviewMessageFetchingPlugin prefetchDataForMessageViewModel:isGroupConversation:] */

void FUN_105fcb374(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar11 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  uVar3 = uVar11;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c6d08;
  _objc_opt_class(PTR_PTR_1126c6d08);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar3 = uVar2;
  func_0x00010c0c4420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar18 = *plStack_1a0;
    do {
      uVar14 = 0;
      do {
        if (*plStack_1a0 != lVar18) {
          _objc_enumerationMutation(uVar3);
        }
        uVar5 = *(undefined8 *)(lStack_1a8 + uVar14 * 8);
        func_0x00010c0c43a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_1;
        func_0x00010bee6340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        lVar12 = lVar19;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010c08fa60();
        _objc_release(lVar12);
        if (lVar6 != 0) {
          lVar12 = lVar19;
          func_0x00010beec820(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar12);
        }
        _objc_release(lVar19);
        uVar14 = uVar14 + 1;
      } while (uVar4 != uVar14);
      uVar4 = uVar3;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c078d60();
  _objc_release(uVar7);
  if ((int)uVar5 == 0) {
    lVar18 = 0;
  }
  else {
    lVar19 = param_1;
    func_0x00010be64160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar19 == 0) {
      func_0x00010be38600(param_1);
      lVar18 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c0cb140(uVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar18;
      func_0x00010c28f500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar18);
      lVar18 = lVar12;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar18;
      func_0x00010c08fa60();
      _objc_release(lVar18);
      if (lVar6 == 0) {
        lVar18 = 0;
      }
      else {
        func_0x00010be38600(param_1);
        lVar18 = lVar12;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar12);
    }
    else {
      func_0x00010be38600(param_1);
      lVar18 = 0;
    }
    _objc_release(lVar19);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = uVar11;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar1);
  puVar13 = &uStack_1f0;
  puVar8 = puVar1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar19 = *plStack_1e0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar19) {
          _objc_enumerationMutation(puVar1);
        }
        iVar20 = (int)*(undefined8 *)(lStack_1e8 + (long)puVar15 * 8);
        lVar12 = param_1;
        func_0x00010be132c0();
        if (((lVar18 != 0) && ((int)lVar12 != 0)) && (func_0x00010c0720c0(), iVar20 != 0)) {
          func_0x00010be38600(param_1);
        }
        puVar15 = puVar15 + 1;
      } while (puVar8 != puVar15);
      puVar13 = &uStack_1f0;
      puVar8 = puVar1;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar18);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  puVar9 = puVar13;
  func_0x00010bfcbc80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  while (puVar10 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(puVar9);
      }
      uVar11 = param_3;
      func_0x00010be21a20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010c0cbe00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58d40(param_3);
      _objc_release(uVar5);
      _objc_release(uVar7);
      func_0x00010c1d0640(ppuVar16);
      _objc_release(uVar11);
      puVar17 = (undefined8 *)((long)puVar17 + 1);
    } while (puVar10 != puVar17);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c078d60();
  _objc_release(uVar7);
  if (((int)uVar5 != 0) && (puVar10 = puVar9, func_0x00010bf529e0(), puVar10 == (undefined8 *)0x0))
  {
    uVar11 = param_3;
    func_0x00010be64160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar11 == 0) {
      lVar12 = *(long *)(param_3 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar12;
      func_0x00010c28f500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      if (lVar18 != 0) {
        lVar12 = lVar18;
        func_0x00010beec820(lVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_3;
        func_0x00010be21a20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        if (uVar11 != 0) {
          uVar2 = uVar11;
          func_0x00010c07efa0();
          if ((int)uVar2 != 0) {
            func_0x00010be38600(param_3);
          }
          uVar7 = *(undefined8 *)(param_3 + 0x18);
          func_0x00010c0cbe00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58d40(param_3);
          _objc_release(uVar5);
          _objc_release(uVar7);
          lVar12 = lVar18;
          func_0x00010beec820(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar16);
          _objc_release(lVar12);
          _objc_release(uVar11);
        }
      }
      _objc_release(lVar18);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    ppuVar16 = &PTR____CFConstantStringClassReference_110eeb8d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eeb8d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
  return;
}



/* Entry: 105fcb820; end: 105fcbb53; -[SCUrlPreviewMessageFetchingPlugin prefetchedDataForMessage:] */

void FUN_105fcb820(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
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
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfcbc80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(ppuVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        lVar3 = param_1;
        func_0x00010be21a20(param_1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0cbe00(uVar4,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be58d40(param_1,param_2,lVar3,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010c1d0640(ppuVar6,param_2,lVar3,uVar8);
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c078d60();
  _objc_release(uVar4);
  if (((int)uVar5 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = param_1;
    func_0x00010be64160(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar9 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar9;
      func_0x00010c28f500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (lVar2 != 0) {
        lVar9 = lVar2;
        func_0x00010beec820(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010be21a20(param_1,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        if (lVar7 != 0) {
          lVar9 = lVar7;
          func_0x00010c07efa0();
          if ((int)lVar9 != 0) {
            func_0x00010be38600(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ce38,0);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0cbe00(uVar4,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58d40(param_1,param_2,lVar7,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar4);
          lVar9 = lVar2;
          func_0x00010beec820(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar6,param_2,lVar7,lVar9);
          _objc_release(lVar9);
          _objc_release(lVar7);
        }
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar6 = &PTR____CFConstantStringClassReference_110eeb8d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eeb8d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105fcbb54; end: 105fcbb83; -[SCUrlPreviewMessageFetchingPlugin identifier] */

void FUN_105fcbb54(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb8d8);
  return;
}



/* Entry: 105fcbb84; end: 105fcbb8b; -[SCUrlPreviewMessageFetchingPlugin pluginType] */

undefined8 FUN_105fcbb84(void)

{
  return 2;
}



/* Entry: 105fcbb8c; end: 105fcbcaf; -[SCUrlPreviewMessageFetchingPlugin setActiveConversationIdObservable:] */

void FUN_105fcbb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fcbcb0; end: 105fcbcf7;  */

void FUN_105fcbcb0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fcbcf8; end: 105fcbd7b; -[SCUrlPreviewMessageFetchingPlugin _logSpammerIfNeededForUrlPreview:senderId:] */

void FUN_105fcbcf8(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c07efa0();
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf4b900(uVar1,param_2,param_4);
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133b20();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fcbd7c; end: 105fcbe4f; -[SCUrlPreviewMessageFetchingPlugin _handleConversationChangeToConversationIdOptional:] */

void FUN_105fcbd7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x58));
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x68);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x78) = 0;
  _os_unfair_lock_unlock(param_1 + 0x68);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010be949a0(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fcbe50; end: 105fcbfc7; -[SCUrlPreviewMessageFetchingPlugin _resolveEligibilityForConversationId:] */

void FUN_105fcbe50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105fcbfc8; end: 105fcc0d3;  */

void FUN_105fcbfc8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf509a0(lVar1);
      lVar3 = lVar1;
      func_0x00010bf5a660(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0db720();
      func_0x00010c14f920(uVar2);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      func_0x00010bdd7d20(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fcc0d4; end: 105fcc14b; -[SCUrlPreviewMessageFetchingPlugin _cacheScenario:forConversationId:] */

void FUN_105fcc0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + 0x70));
  if ((int)uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = param_3;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  _os_unfair_lock_unlock(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fcc14c; end: 105fcc1bb; -[SCUrlPreviewMessageFetchingPlugin _normalizedSpamCheckSkipReasonForGroupConversation:] */

undefined ** FUN_105fcc14c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if ((param_3 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x68);
    if ((*(char *)(param_1 + 0x78) == '\x01') && (uVar1 = *(long *)(param_1 + 0x80) - 1, uVar1 < 3))
    {
      ppuVar2 = (undefined **)(&PTR_PTR_110905278)[uVar1];
    }
    else {
      ppuVar2 = (undefined **)0x0;
    }
    _os_unfair_lock_unlock(param_1 + 0x68);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbce78;
  }
  return ppuVar2;
}



/* Entry: 105fcc1bc; end: 105fcc243; -[SCUrlPreviewMessageFetchingPlugin _getPreviewFromMemoryIfPresentForUrl:] */

void FUN_105fcc1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fcc244; end: 105fcc417; -[SCUrlPreviewMessageFetchingPlugin _fetchPreviewForUrlIfNotPresent:senderUserId:] */

undefined8 FUN_105fcc244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be21a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf87a80();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfa9620(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105fcc418; end: 105fcc4d7;  */

void FUN_105fcc418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fcc4d8; end: 105fcc52b;  */

void FUN_105fcc4d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fcc52c; end: 105fcc62f; -[SCUrlPreviewMessageFetchingPlugin _incrementNormalizedUrlSpamCheckStage:reason:] */

void FUN_105fcc52c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  func_0x00010c0db700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fcc630; end: 105fcc713; -[SCUrlPreviewMessageFetchingPlugin _handleUpdateForUrl:preview:] */

void FUN_105fcc630(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be21a20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,param_4,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63800();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fcc714; end: 105fcc7ff; -[SCUrlPreviewMessageFetchingPlugin _urlFromMediaCardContent:] */

void FUN_105fcc714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105fcc800;
  uStack_30 = 0x105fcc810;
  uStack_28 = 0;
  func_0x00010c0bf360(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fcc800; end: 105fcc81f;  */

void FUN_105fcc800(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fcc820; end: 105fcc85f;  */

void FUN_105fcc820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcc860; end: 105fcc877; -[SCUrlPreviewMessageFetchingPlugin delegate] */

void FUN_105fcc860(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fcc878; end: 105fcc883; -[SCUrlPreviewMessageFetchingPlugin setDelegate:] */

void FUN_105fcc878(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105fcc884; end: 105fcc88b; -[SCUrlPreviewMessageFetchingPlugin activeConversationIdObservable] */

undefined8 FUN_105fcc884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105fcc88c; end: 105fcc893; -[SCUrlPreviewMessageFetchingPlugin activeConversationInformationObservable] */

undefined8 FUN_105fcc88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105fcc894; end: 105fcc8c3; -[SCUrlPreviewMessageFetchingPlugin setActiveConversationInformationObservable:] */

void FUN_105fcc894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcc8c4; end: 105fcc997; -[SCUrlPreviewMessageFetchingPlugin .cxx_destruct] */

void FUN_105fcc8c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 105fcc998; end: 105fcc9a3; +[SCCMyAIInteractiveMessageView componentPath] */

undefined ** FUN_105fcc998(void)

{
  return &PTR____CFConstantStringClassReference_110e35578;
}



/* Entry: 105fcc9a4; end: 105fcc9d7; -[SCCMyAIInteractiveMessageView initWithViewModel:componentContext:runtime:] */

void FUN_105fcc9a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eecc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fcc9d8; end: 105fcca27; -[SCCMyAIInteractiveMessageView setViewModel:] */

void FUN_105fcc9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fcca28; end: 105fcca6b; -[SCCMyAIInteractiveMessageView viewModel] */

void FUN_105fcca28(undefined8 param_1)

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



/* Entry: 105fcca6c; end: 105fcca73; -[SCCMyAIInteractiveContentType__Enum init] */

void FUN_105fcca6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105fcca74; end: 105fccaa7; -[SCCMyAIInteractiveContext init] */

void FUN_105fcca74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eecc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}


