/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109019a14; end: 109019a6f;  */

void FUN_109019a14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1eb2e0(uVar1);
  func_0x00010c1eb300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsMischief__11264a468,1);
  return;
}



/* Entry: 109019a70; end: 109019aeb;  */

void FUN_109019a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1eb2e0(uVar1);
  func_0x00010c1eb300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c1eb080(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109019aec; end: 109019baf;  */

void FUN_109019aec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 2) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80();
    if ((int)puVar1 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea020(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x28) == 2) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c165620(uVar2);
    func_0x0001090229c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(*(undefined8 *)(param_3 + 0x20));
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1eb230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s_setReplyStateType__1126586b0,2);
    return;
  }
  return;
}



/* Entry: 109019bb0; end: 109019c13;  */

void FUN_109019bb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c165620(uVar1,param_2,1);
    func_0x0001090229c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1eb230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setReplyStateType__1126586b0,2);
    return;
  }
  return;
}



/* Entry: 109019c14; end: 109019c93; -[SCSnapchatter _cleanupUsername:] */

void FUN_109019c14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f17ff8);
  uVar2 = param_3;
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f18018),
     (int)uVar1 == 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c260c00(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109019c94; end: 109019d67; -[SCSnapchattersContactDataRequestResult asSuccess] */

void FUN_109019c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109019d68;
  uStack_30 = 0x109019d78;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109019d80;
  puStack_60 = &UNK_110898578;
  puStack_48 = puStack_58;
  func_0x00010c0c0860(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad3bf0,
                      &PTR___NSConcreteGlobalBlock_110ad3c10);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109019d68; end: 109019d7f;  */

void FUN_109019d68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109019d80; end: 109019dbb;  */

void FUN_109019d80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dce88;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109019dbc; end: 109019dc3;  */

void FUN_109019dbc(void)

{
  return;
}



/* Entry: 109019dc4; end: 109019e97; -[SCSnapchattersContactDataRequestResult asFailure] */

void FUN_109019dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109019d68;
  uStack_30 = 0x109019d78;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109019e9c;
  puStack_60 = &UNK_11084d888;
  puStack_48 = puStack_58;
  func_0x00010c0c0860(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3c30,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110ad3c50);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109019e98; end: 109019e9b;  */

void FUN_109019e98(void)

{
  return;
}



/* Entry: 109019e9c; end: 109019ed7;  */

void FUN_109019e9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dce90;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109019ed8; end: 109019edb;  */

void FUN_109019ed8(void)

{
  return;
}



/* Entry: 109019edc; end: 109019faf; -[SCSnapchattersContactDataRequestResult asNoContact] */

void FUN_109019edc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109019d68;
  uStack_30 = 0x109019d78;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109019fb8;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  func_0x00010c0c0860(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3c70,
                      &PTR___NSConcreteGlobalBlock_110ad3c90,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109019fb0; end: 109019fb7;  */

void FUN_109019fb0(void)

{
  return;
}



/* Entry: 109019fb8; end: 109019ff3;  */

void FUN_109019fb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dce98;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109019ff4; end: 10901a0cf; -[SCSnapchattersDataRequest asFetchRequest] */

void FUN_109019ff4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a0e8;
  puStack_60 = &UNK_110ad3cb0;
  puStack_48 = puStack_58;
  func_0x00010c0bdd00(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad3d00,
                      &PTR___NSConcreteGlobalBlock_110ad3d20,&PTR___NSConcreteGlobalBlock_110ad3d40)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a0d0; end: 10901a0e7;  */

void FUN_10901a0d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10901a0e8; end: 10901a11f;  */

void FUN_10901a0e8(long param_1,undefined8 param_2)

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



/* Entry: 10901a120; end: 10901a12b;  */

void FUN_10901a120(void)

{
  return;
}



/* Entry: 10901a12c; end: 10901a207; -[SCSnapchattersDataRequest asUpdateRequest] */

void FUN_10901a12c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a20c;
  puStack_60 = &UNK_110ad3da0;
  puStack_48 = puStack_58;
  func_0x00010c0bdd00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3d80,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110ad3dd0,&PTR___NSConcreteGlobalBlock_110ad3df0)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a208; end: 10901a20b;  */

void FUN_10901a208(void)

{
  return;
}



/* Entry: 10901a20c; end: 10901a243;  */

void FUN_10901a20c(long param_1,undefined8 param_2)

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



/* Entry: 10901a244; end: 10901a24b;  */

void FUN_10901a244(void)

{
  return;
}



/* Entry: 10901a24c; end: 10901a327; -[SCSnapchattersDataRequest asSuggestRequest] */

void FUN_10901a24c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a330;
  puStack_60 = &UNK_110ad3e50;
  puStack_48 = puStack_58;
  func_0x00010c0bdd00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3e10,
                      &PTR___NSConcreteGlobalBlock_110ad3e30,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110ad3e80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a328; end: 10901a32f;  */

void FUN_10901a328(void)

{
  return;
}



/* Entry: 10901a330; end: 10901a367;  */

void FUN_10901a330(long param_1,undefined8 param_2)

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



/* Entry: 10901a368; end: 10901a36b;  */

void FUN_10901a368(void)

{
  return;
}



/* Entry: 10901a36c; end: 10901a447; -[SCSnapchattersDataRequest asContactRequest] */

void FUN_10901a36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a454;
  puStack_60 = &UNK_110ad3f00;
  puStack_48 = puStack_58;
  func_0x00010c0bdd00(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3ea0,
                      &PTR___NSConcreteGlobalBlock_110ad3ec0,&PTR___NSConcreteGlobalBlock_110ad3ee0,
                      &puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a448; end: 10901a453;  */

void FUN_10901a448(void)

{
  return;
}



/* Entry: 10901a454; end: 10901a48b;  */

void FUN_10901a454(long param_1,undefined8 param_2)

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



/* Entry: 10901a48c; end: 10901a493;  */

void FUN_10901a48c(void)

{
  return;
}



/* Entry: 10901a494; end: 10901a567; -[SCSnapchattersFetchDataRequest asHandleSoJuFriendsResponseDictionary] */

void FUN_10901a494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a56c;
  puStack_60 = &UNK_1108a5f78;
  puStack_48 = puStack_58;
  func_0x00010c0bdcc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad3fc0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110ad3fe0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a568; end: 10901a56b;  */

void FUN_10901a568(void)

{
  return;
}



/* Entry: 10901a56c; end: 10901a5cf;  */

void FUN_10901a56c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcea8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c03fc20();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901a5d0; end: 10901a5d3;  */

void FUN_10901a5d0(void)

{
  return;
}



/* Entry: 10901a5d4; end: 10901a6a7; -[SCSnapchattersFetchDataRequest asHandleSyncFriendsData] */

void FUN_10901a5d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a6b0;
  puStack_60 = &UNK_11084c9b0;
  puStack_48 = puStack_58;
  func_0x00010c0bdcc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad4000,
                      &PTR___NSConcreteGlobalBlock_110ad4020,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a6a8; end: 10901a6af;  */

void FUN_10901a6a8(void)

{
  return;
}



/* Entry: 10901a6b0; end: 10901a713;  */

void FUN_10901a6b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dceb0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c03fc00();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901a714; end: 10901a7ef; -[SCSnapchattersUpdateDataRequest asAdd] */

void FUN_10901a714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a7f0;
  puStack_60 = &UNK_1108ec6c8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,&puStack_78,0,0,0,0,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a7f0; end: 10901a90f;  */

void FUN_10901a7f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  puVar1 = PTR_PTR_1126dceb8;
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c048c60();
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901a910; end: 10901a9eb; -[SCSnapchattersUpdateDataRequest asMultiAdd] */

void FUN_10901a910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901a9ec;
  puStack_60 = &UNK_110ad4040;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,&puStack_78,0,0,0,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901a9ec; end: 10901aa67;  */

void FUN_10901a9ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcec0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff2200();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901aa68; end: 10901ab43; -[SCSnapchattersUpdateDataRequest asDelete] */

void FUN_10901aa68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901ab44;
  puStack_60 = &UNK_110ad4070;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,&puStack_78,0,0,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901ab44; end: 10901ac1f;  */

void FUN_10901ab44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcec8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bfefae0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901ac20; end: 10901acfb; -[SCSnapchattersUpdateDataRequest asIgnore] */

void FUN_10901ac20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901acfc;
  puStack_60 = &UNK_110851890;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,&puStack_78,0,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901acfc; end: 10901ad77;  */

void FUN_10901acfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dced0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c01d6c0();
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901ad78; end: 10901ae53; -[SCSnapchattersUpdateDataRequest asBlock] */

void FUN_10901ad78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901ae54;
  puStack_60 = &UNK_110ad40a0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,0,&puStack_78,0,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901ae54; end: 10901aeef;  */

void FUN_10901ae54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dced8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c048ca0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901aef0; end: 10901afcb; -[SCSnapchattersUpdateDataRequest asUnblock] */

void FUN_10901aef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901afcc;
  puStack_60 = &UNK_11085ba00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,0,0,&puStack_78,0,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901afcc; end: 10901b02f;  */

void FUN_10901afcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcee0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff8dc0();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901b030; end: 10901b10f; -[SCSnapchattersUpdateDataRequest asSetDisplay] */

void FUN_10901b030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901b110;
  puStack_60 = &UNK_110851890;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,0,0,0,&puStack_78,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901b110; end: 10901b18b;  */

void FUN_10901b110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcee8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c048da0();
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901b18c; end: 10901b26b; -[SCSnapchattersUpdateDataRequest asSetPostSendEmoji] */

void FUN_10901b18c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901b26c;
  puStack_60 = &UNK_110851890;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,0,0,0,0,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901b26c; end: 10901b2e7;  */

void FUN_10901b26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcef0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c048f80();
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901b2e8; end: 10901b3c7; -[SCSnapchattersUpdateDataRequest asSetStoryPrivacy] */

void FUN_10901b2e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901b3c8;
  puStack_60 = &UNK_110850558;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0bc6c0(param_1,param_2,0,0,0,0,0,0,0,&puStack_78,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901b3c8; end: 10901b42b;  */

void FUN_10901b3c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcef8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c05c340();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901b42c; end: 10901b59f; -[SCSnapchattersUpdateDataRequest asUserId] */

void FUN_10901b42c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_120 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901b5a0;
  puStack_60 = &UNK_1108ec6c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10901b5e0;
  puStack_88 = &UNK_110ad4070;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10901b620;
  puStack_b0 = &UNK_110851890;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10901b660;
  puStack_d8 = &UNK_110ad40a0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x10901b6a0;
  puStack_100 = &UNK_11085ba00;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10901b6e0;
  puStack_128 = &UNK_110851890;
  puStack_f8 = puStack_120;
  puStack_d0 = puStack_120;
  puStack_a8 = puStack_120;
  puStack_80 = puStack_120;
  puStack_58 = puStack_120;
  puStack_48 = puStack_120;
  func_0x00010c0bc6c0(param_1,param_2,&puStack_78,0,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118
                      ,&puStack_140,&PTR___NSConcreteGlobalBlock_110ad40d0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901b5a0; end: 10901b71f;  */

void FUN_10901b5a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10901b720; end: 10901b723;  */

void FUN_10901b720(void)

{
  return;
}



/* Entry: 10901b724; end: 10901b833; -[SCSnapchattersUpdateDataRequest matchAddDeleteBlockWithCompletion:] */

void FUN_10901b724(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10901b834;
    puStack_50 = &UNK_110ad40f0;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10901b840;
    puStack_78 = &UNK_110ad4120;
    lStack_48 = param_3;
    _objc_retain(param_3);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x10901b84c;
    puStack_a0 = &UNK_110ad4150;
    lStack_70 = param_3;
    _objc_retain(param_3);
    lStack_98 = param_3;
    func_0x00010c0bc6c0(param_1,param_2,&puStack_68,0,&puStack_90,0,&puStack_b8,0,0,0,0);
    _objc_release(lStack_98);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10901b834; end: 10901b857;  */

void FUN_10901b834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010901b83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10901b858; end: 10901b997; -[SCSnapchattersUpdateDataRequest matchAddDeleteBlockUnblockWithCompletion:] */

void FUN_10901b858(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10901b998;
    puStack_50 = &UNK_110ad40f0;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10901b9a4;
    puStack_78 = &UNK_110ad4120;
    lStack_48 = param_3;
    _objc_retain(param_3);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x10901b9b0;
    puStack_a0 = &UNK_110ad4150;
    lStack_70 = param_3;
    _objc_retain(param_3);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10901b9bc;
    puStack_c8 = &UNK_110a59010;
    lStack_98 = param_3;
    _objc_retain(param_3);
    lStack_c0 = param_3;
    func_0x00010c0bc6c0(param_1,param_2,&puStack_68,0,&puStack_90,0,&puStack_b8,&puStack_e0,0,0,0);
    _objc_release(lStack_c0);
    _objc_release(lStack_98);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10901b998; end: 10901b9c7;  */

void FUN_10901b998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010901b9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10901b9c8; end: 10901baa3; -[SCSnapchattersSuggestDataRequest asFetch] */

void FUN_10901b9c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901baa4;
  puStack_60 = &UNK_110ad4180;
  puStack_48 = puStack_58;
  func_0x00010c0bdc80(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad41d0,
                      &PTR___NSConcreteGlobalBlock_110ad41f0,&PTR___NSConcreteGlobalBlock_110ad4210)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901baa4; end: 10901bb13;  */

void FUN_10901baa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf00;
  _objc_alloc();
  func_0x00010c01f460();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901bb14; end: 10901bb1f;  */

void FUN_10901bb14(void)

{
  return;
}



/* Entry: 10901bb20; end: 10901bbf7; -[SCSnapchattersSuggestDataRequest asHide] */

void FUN_10901bb20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901bbf8;
  puStack_60 = &UNK_110ad4230;
  puStack_48 = puStack_58;
  func_0x00010c0bdc80(param_1,param_2,0,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad4260,
                      &PTR___NSConcreteGlobalBlock_110ad4280);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901bbf8; end: 10901bc63;  */

void FUN_10901bbf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf08;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c04f680();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901bc64; end: 10901bc6b;  */

void FUN_10901bc64(void)

{
  return;
}



/* Entry: 10901bc6c; end: 10901bd43; -[SCSnapchattersSuggestDataRequest asHideAll] */

void FUN_10901bc6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901bd48;
  puStack_60 = &UNK_110868438;
  puStack_48 = puStack_58;
  func_0x00010c0bdc80(param_1,param_2,0,&PTR___NSConcreteGlobalBlock_110ad42a0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110ad42c0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901bd44; end: 10901bd47;  */

void FUN_10901bd44(void)

{
  return;
}



/* Entry: 10901bd48; end: 10901bd8f;  */

void FUN_10901bd48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf10;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901bd90; end: 10901bd93;  */

void FUN_10901bd90(void)

{
  return;
}



/* Entry: 10901bd94; end: 10901be6b; -[SCSnapchattersSuggestDataRequest asView] */

void FUN_10901bd94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901be74;
  puStack_60 = &UNK_110850558;
  puStack_48 = puStack_58;
  func_0x00010c0bdc80(param_1,param_2,0,&PTR___NSConcreteGlobalBlock_110ad42e0,
                      &PTR___NSConcreteGlobalBlock_110ad4300,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901be6c; end: 10901be73;  */

void FUN_10901be6c(void)

{
  return;
}



/* Entry: 10901be74; end: 10901bed7;  */

void FUN_10901be74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf18;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c04f6c0();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901bed8; end: 10901bfa3; -[SCSnapchattersContactDataRequest asFetchContacts] */

void FUN_10901bed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901bfa4;
  puStack_60 = &UNK_110847180;
  puStack_48 = puStack_58;
  func_0x00010c0bdca0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad4320);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901bfa4; end: 10901bfeb;  */

void FUN_10901bfa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf20;
  _objc_alloc();
  func_0x00010c03e080();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901bfec; end: 10901bfef;  */

void FUN_10901bfec(void)

{
  return;
}



/* Entry: 10901bff0; end: 10901c0bb; -[SCSnapchattersContactDataRequest asDeleteAllContacts] */

void FUN_10901bff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10901a0d0;
  uStack_30 = 0x10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10901c0c0;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  func_0x00010c0bdca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad4340,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901c0bc; end: 10901c0bf;  */

void FUN_10901c0bc(void)

{
  return;
}



/* Entry: 10901c0c0; end: 10901c0fb;  */

void FUN_10901c0c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf28;
  _objc_alloc_init();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10901c0fc; end: 10901c367;  */

undefined8 FUN_10901c0fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  if (param_1 == 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  else {
    _objc_retain();
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf65700();
    puVar3 = puVar2;
    func_0x00010c0d0e40();
    if (((puVar3 == (undefined *)0x3 && puVar1 != (undefined *)0x14) &&
         (puVar3 != (undefined *)0x3 || 0x13 < (long)puVar1)) ||
       (puVar3 == (undefined *)0x4 && (long)puVar1 < 0x14)) {
      uVar4 = 0x2648;
    }
    else if (((puVar3 == (undefined *)0x4 && puVar1 != (undefined *)0x13) &&
              (puVar3 != (undefined *)0x4 || 0x12 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x5 && ((long)puVar1 < 0x15)))) {
      uVar4 = 0x2649;
    }
    else if (((puVar3 == (undefined *)0x5) && (0x14 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x6 && ((long)puVar1 < 0x15)))) {
      uVar4 = 0x264a;
    }
    else if (((puVar3 == (undefined *)0x6) && (0x14 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x7 && ((long)puVar1 < 0x17)))) {
      uVar4 = 0x264b;
    }
    else if (((puVar3 == (undefined *)0x7) && (0x16 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x8 && ((long)puVar1 < 0x17)))) {
      uVar4 = 0x264c;
    }
    else if (((puVar3 == (undefined *)0x8) && (0x16 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x9 && ((long)puVar1 < 0x17)))) {
      uVar4 = 0x264d;
    }
    else if (((puVar3 == (undefined *)0x9) && (0x16 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0xa && ((long)puVar1 < 0x17)))) {
      uVar4 = 0x264e;
    }
    else if (((puVar3 == (undefined *)0xa) && (0x16 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0xb && ((long)puVar1 < 0x16)))) {
      uVar4 = 0x264f;
    }
    else if (((puVar3 == (undefined *)0xb) && (0x15 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0xc && ((long)puVar1 < 0x16)))) {
      uVar4 = 0x2650;
    }
    else if (((puVar3 == (undefined *)0xc) && (0x15 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x1 && ((long)puVar1 < 0x14)))) {
      uVar4 = 0x2651;
    }
    else if (((puVar3 == (undefined *)0x1) && (0x13 < (long)puVar1)) ||
            ((puVar3 == (undefined *)0x2 && ((long)puVar1 < 0x13)))) {
      uVar4 = 0x2652;
    }
    else {
      uVar4 = 0x2653;
      if ((puVar3 != (undefined *)0x3 || 0x14 < (long)puVar1) &&
          (puVar3 != (undefined *)0x2 || (long)puVar1 < 0x13)) {
        uVar4 = 0x7fffffffffffffff;
      }
    }
    _objc_release(puVar2);
  }
  return uVar4;
}



/* Entry: 10901c368; end: 10901c3d3; +[SCBirthdayUtils getAstrologicalSign:] */

undefined ** FUN_10901c368(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    FUN_10901c0fc();
    if (uVar1 >> 2 < 0x995) {
      ppuVar2 = *(undefined ***)(&UNK_110ac1120 + uVar1 * 8);
      goto LAB_10901c3bc;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_10901c3bc:
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 10901c3d4; end: 10901c437; +[SCBirthdayUtils getAstrologicalSignImageForProfile:] */

void FUN_10901c3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dcf30;
  func_0x00010bfc2820();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10901c438; end: 10901c49f; +[SCBirthdayUtils getAstrologicalSignImageAssetForProfile:] */

undefined8 FUN_10901c438(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    FUN_10901c0fc();
    if (uVar1 >> 2 < 0x995) {
      uVar2 = *(undefined8 *)(&UNK_110ac1180 + uVar1 * 8);
      goto LAB_10901c488;
    }
  }
  uVar2 = 0;
LAB_10901c488:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10901c4a0; end: 10901c517;  */

void FUN_10901c4a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c0faf60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10901c518; end: 10901c593;  */

bool FUN_10901c518(long param_1)

{
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10901c594; end: 10901c5ab;  */

undefined8 FUN_10901c594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(0);
  uVar1 = param_1;
  func_0x000107c61174(param_1);
  func_0x000100bec260();
  uVar2 = uVar1;
  func_0x000100bec2c8();
  uVar3 = param_1;
  func_0x000100bec330(param_1,0,uVar1,uVar2);
  func_0x000107c61170(0);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 10901c5ac; end: 10901c683;  */

bool FUN_10901c5ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 10901c684; end: 10901c6c3;  */

bool FUN_10901c684(long param_1)

{
  long lVar1;
  
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10901c6c4; end: 10901c827;  */

bool FUN_10901c6c4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10901c828; end: 10901c973;  */

bool FUN_10901c828(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1;
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0737e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        uVar1 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef89e0();
        uVar2 = param_2;
        dVar6 = dVar5;
        func_0x00010bfebe20(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befcae0();
        if (dVar5 <= dVar6) {
          _objc_release(uVar2);
          _objc_release(uVar1);
          dVar5 = dVar6;
        }
        else {
          uVar3 = param_2;
          func_0x00010bfb8280(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef89e0();
          dVar5 = dVar6;
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if (param_1 < dVar6) goto LAB_10901c87c;
        }
      }
      uVar1 = param_2;
      func_0x00010bfebe20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befcae0();
      bVar4 = param_1 < dVar5;
      _objc_release(uVar1);
      goto LAB_10901c954;
    }
  }
LAB_10901c87c:
  bVar4 = false;
LAB_10901c954:
  _objc_release(param_2);
  return bVar4;
}



/* Entry: 10901c974; end: 10901ca63;  */

bool FUN_10901c974(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010c262240(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10901ca64; end: 10901cb63;  */

undefined1 FUN_10901ca64(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bfb8280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdea0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901cb64; end: 10901cb6b;  */

void FUN_10901cb64(void)

{
  return;
}



/* Entry: 10901cb6c; end: 10901cc3f;  */

void FUN_10901cb6c(long param_1,undefined1 param_2)

{
  func_0x00010c06d240();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10901cc40; end: 10901cdaf;  */

void FUN_10901cc40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010bf5e300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126d78b8;
    _objc_alloc(PTR_PTR_1126d78b8);
    puVar1 = puVar2;
    func_0x00010c0d0e40(puVar2);
    puVar4 = puVar2;
    func_0x00010bf65700(puVar2);
    func_0x00010c02c8c0(puVar3,param_2,(uint)puVar1 & 0xff,(uint)puVar4 & 0xff);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10901cdb0; end: 10901cf0b;  */

undefined1 FUN_10901cdb0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  lVar2 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_2);
    func_0x00010c0bdea0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(param_1);
  }
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}


