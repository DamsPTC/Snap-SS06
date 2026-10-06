/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051baba0; end: 1051bacaf; -[SCContextContentLabelActionPerformer _presentReplyOrTrayWithIsRecommended:calloutLabelData:viewController:params:source:] */

void FUN_1051baba0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_4;
  if (((param_3 & 1) == 0) && (lVar1 = param_4, func_0x00010bfb7f40(), lVar1 < 2)) {
    func_0x00010bfb9180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7aa00(param_1,param_2,lVar1,param_6,param_7);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bfb9180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7e000(param_1,param_2,lVar2,param_6,param_5,param_7);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051bacb0; end: 1051baef7; -[SCContextContentLabelActionPerformer _presentChatReplyWithUserId:params:source:] */

void FUN_1051bacb0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c0db200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010010fab4();
  uVar2 = uVar4;
  if ((int)uVar5 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar4);
    func_0x00010c2448c0(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051baef8; end: 1051baf83;  */

void FUN_1051baef8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7a9e0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051baf84; end: 1051bb44b; -[SCContextContentLabelActionPerformer _presentChatReplyWithSnapchatter:params:source:presenter:] */

void FUN_1051baf84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b23a0;
  uVar12 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar12);
  puVar5 = PTR_PTR_1126b5ba0;
  _objc_alloc();
  func_0x00010c05a6a0();
  puVar6 = PTR_PTR_1126b5ba8;
  _objc_alloc();
  uVar12 = param_4;
  func_0x00010c242420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c242420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c242420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047f80();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  puVar10 = PTR_PTR_1126b5bb0;
  _objc_alloc();
  uVar12 = param_4;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0ea4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c08f3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf50720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010bf4eae0();
  func_0x00010bf4eb00();
  func_0x00010c24b560();
  func_0x00010c24ba40();
  func_0x00010c0954a0();
  func_0x00010c0ea840();
  func_0x00010c0275e0(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c10b9a0(param_6);
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c068440(param_5);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010bf51e00(puVar11);
  func_0x00010c0b04c0(uVar12);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051bb44c; end: 1051bb477;  */

void FUN_1051bb44c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051bb478; end: 1051bb69b; -[SCContextContentLabelActionPerformer _presentRecommendTrayWithUserIds:params:viewController:source:] */

void FUN_1051bb478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b5bb8;
  _objc_alloc(PTR_PTR_1126b5bb8);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c038ee0(0x3fd999999999999a,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf22d00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c068440(param_6);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c0b04c0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051bb69c; end: 1051bb6c7;  */

void FUN_1051bb69c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051bb6c8; end: 1051bb70b; -[SCContextContentLabelActionPerformer _didCompletePresentChatReply] */

void FUN_1051bb6c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051bb70c; end: 1051bb75f; -[SCContextContentLabelActionPerformer _didDismissTrayContainer] */

void FUN_1051bb70c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release();
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1051bb760; end: 1051bb7d7; -[SCContextContentLabelActionPerformer .cxx_destruct] */

void FUN_1051bb760(long param_1)

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



/* Entry: 1051bb7d8; end: 1051bb8d3; -[SCContextDeeplinkStickerActionPerformer initWithChatCameraScopeExposer:chatCameraScopeServices:discoverFeedActionHandler:circumstanceEngine:] */

undefined1 *
FUN_1051bb7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6c30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051bb8d4; end: 1051bbd93; -[SCContextDeeplinkStickerActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051bb8d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar3 = param_8;
    _objc_retainBlock();
    uVar19 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar19);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c150520(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf834c0(param_1);
      _objc_release(uVar3);
    }
    lVar2 = param_3;
    func_0x00010bf688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010c0f5e80(*(undefined8 *)(param_1 + 0x20));
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x000108f54830();
      if (iVar1 != 0) {
        func_0x00010c0ea800(*(undefined8 *)(param_1 + 0x20));
      }
      puVar5 = PTR_PTR_1126ae6c0;
      func_0x00010c294300();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_6;
      func_0x00010c242420(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c241400();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08bda0();
      _objc_release(lVar6);
      _objc_release(lVar2);
      func_0x000108436010(lVar7);
      lVar2 = param_6;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar8 = PTR_PTR_1126ae6d0;
      _objc_alloc();
      func_0x0001091ef76c(lVar7);
      func_0x00010c03e5a0();
      puVar9 = PTR_PTR_1126b5b50;
      _objc_alloc(PTR_PTR_1126b5b50);
      func_0x00010c076240();
      func_0x00010c01f080(puVar9);
      lVar2 = param_6;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        lVar11 = param_6;
        func_0x00010c242420();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c131ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
      }
      else {
        _objc_retain(lVar10);
        lVar14 = lVar10;
      }
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(lVar2);
      puVar15 = PTR_PTR_1126b13b0;
      lVar2 = param_3;
      func_0x00010bf688c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bf68960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf81580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar2);
      puVar16 = PTR_PTR_1126b5b48;
      func_0x00010bf5cd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puVar17 = PTR_PTR_1126b1bb0;
      func_0x00010bf4efa0(PTR_PTR_1126b1bb0);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126b5b40;
      func_0x00010c254180(PTR_PTR_1126b5b40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23680(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar17);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      _objc_release(uVar3);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(lVar14);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar6);
      _objc_release(puVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051bbd94; end: 1051bbe1b; -[SCContextDeeplinkStickerActionPerformer captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1051bbd94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf834c0(param_1);
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051bbe1c; end: 1051bbe7b; -[SCContextDeeplinkStickerActionPerformer dismissCameraScope:] */

void FUN_1051bbe1c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000108f54830();
  if (iVar1 != 0) {
    func_0x00010c0ea7e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resumePlayback_11262cf90);
  return;
}



/* Entry: 1051bbe7c; end: 1051bbecf; -[SCContextDeeplinkStickerActionPerformer .cxx_destruct] */

void FUN_1051bbe7c(long param_1)

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



/* Entry: 1051bbed0; end: 1051bbff3; -[SCContextDirectShareActionPerformer initWithSpotlightShareSender:platformAnalyticsCreator:premiumStoryShareSender:snapProMessageSender:notificationPool:] */

undefined1 *
FUN_1051bbed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6c38;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051bbff4; end: 1051bc2a7; -[SCContextDirectShareActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051bbff4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010bf7f040();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be744c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c29d360();
    uVar3 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2d20;
    func_0x00010c0ffba0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar3 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar4 = uVar3;
    func_0x00010853b70c();
    uVar7 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if (uVar9 == 0) {
      if ((int)uVar4 == 0) {
        func_0x00010bea0840(param_1);
      }
      else {
        func_0x00010bea05a0();
      }
    }
    else {
      func_0x00010be9f6c0(param_1);
    }
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  return 0;
}



/* Entry: 1051bc2a8; end: 1051bc41b; -[SCContextDirectShareActionPerformer _sendLongformShowWithPlatformAnalytics:conversationId:compositeStoryId:viewLocation:] */

void FUN_1051bc2a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5bc8;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c000be0();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c420(uVar2);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,param_2
             ,*(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 1051bc41c; end: 1051bc42b;  */

void FUN_1051bc41c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051bc42c; end: 1051bc5bf; -[SCContextDirectShareActionPerformer _sendSpotlightWithPlatformAnalytics:conversationId:compositeStoryId:viewLocation:] */

void FUN_1051bc42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5bd0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126b5bd8;
  func_0x00010bf36620(PTR_PTR_1126b5bd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000c00();
  _objc_release(param_5);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cbe0(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,param_2
             ,*(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 1051bc5c0; end: 1051bc5cf;  */

void FUN_1051bc5c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051bc5d0; end: 1051bc8bb; -[SCContextDirectShareActionPerformer _sendStoryWithPlatformAnalytics:conversationId:story:compositeStoryId:viewLocation:] */

void FUN_1051bc5d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x00010853a704();
    if ((int)lVar1 == 0) {
      puVar3 = PTR_PTR_1126b1a58;
      _objc_opt_new(PTR_PTR_1126b1a58);
      lVar1 = param_5;
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar3);
      _objc_release(lVar4);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c15f2e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22afc0(uVar2);
      _objc_release(puVar5);
      _objc_release(lVar1);
    }
    else {
      puVar3 = PTR_PTR_1126b5be0;
      _objc_alloc(PTR_PTR_1126b5be0);
      lVar1 = param_5;
      func_0x00010c15f2e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000b80(puVar3);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22ae00(uVar2);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
    }
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,
             param_2,*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1051bc8bc; end: 1051bc8db;  */

void FUN_1051bc8bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentToastWithChatSendResult_v_112621418,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051bc8dc; end: 1051bcc47; -[SCContextDirectShareActionPerformer _platformAnalyticsWithParams:] */

void FUN_1051bc8dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar2 = uVar1;
  func_0x00010c24b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5be8;
  _objc_alloc();
  func_0x00010bff40a0();
  puVar5 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  uVar2 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010bf579a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar5);
  uVar2 = param_3;
  func_0x00010c11fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  puVar5 = puVar13;
  if (uVar4 != 0) {
    puVar14 = PTR_PTR_1126b1a40;
    func_0x00010c0fe200(PTR_PTR_1126b1a40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c11fc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67c0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = puVar14;
    func_0x00010bf21f60(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar14);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051bcc48; end: 1051bcdc7; -[SCContextDirectShareActionPerformer presentToastWithChatSendResult:viewLocation:] */

void FUN_1051bcc48(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = param_1;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
  }
  func_0x00010723ccd0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010723cce8();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 0x65) || (puVar3 = puVar1, param_4 == 0x1d)) {
    puVar3 = puVar2;
    func_0x00010723cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010723ccb8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
  }
  puVar1 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1051bcdc8;
  puStack_58 = &UNK_110841f80;
  uStack_50 = uVar4;
  puStack_48 = puVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 1051bcdc8; end: 1051bcdd3;  */

void FUN_1051bcdc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_submitNotificationWithPresenter__1126756f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051bcdd4; end: 1051bce27; -[SCContextDirectShareActionPerformer .cxx_destruct] */

void FUN_1051bcdd4(long param_1)

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



/* Entry: 1051bce28; end: 1051bcef3; -[SCContextDiscoverActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051bce28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  long in_x7;
  
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  uVar1 = in_x5;
  func_0x00010c0ea4c0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x5;
  func_0x00010c0ea8e0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  func_0x00010c0eb7a0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  _objc_release(in_x7);
  return 0;
}



/* Entry: 1051bcef4; end: 1051bd1cb; -[SCContextDiscoverSubscriptionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined1 *
FUN_1051bcef4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *unaff_x22;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = param_3;
  func_0x00010bf82ae0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) goto LAB_1051bd174;
  puVar2 = param_3;
  func_0x00010bf82ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25fe40();
  _objc_release(puVar2);
  _objc_release(puVar1);
  unaff_x22 = puVar1;
  if ((int)puVar3 == 0) goto LAB_1051bd174;
  puVar1 = param_3;
  func_0x00010bf82ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25fe40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)puVar4 == 1) {
    puVar4 = param_3;
    func_0x00010bf82ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b1e0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
LAB_1051bd084:
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  else {
    if ((int)puVar4 == 2) {
      puVar1 = param_3;
      func_0x00010bf82ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_retain(puVar4);
      puVar1 = puVar4;
      func_0x00010bfe2ee0();
      puVar2 = puVar4;
      func_0x00010c0b5940(puVar4);
      _objc_release(puVar4);
      func_0x000100c4a928(puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar1;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051bd084;
    }
    unaff_x22 = (undefined *)0x0;
  }
  uVar7 = param_6;
  func_0x00010c0ea4c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c25fe20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2cf0;
  func_0x00010c260360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar2;
  puStack_70 = unaff_x22;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  param_4 = uVar5;
  param_5 = puVar3;
  func_0x00010c0eb7c0(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar7);
  (**(code **)(param_8 + 0x10))(param_8,0);
  _objc_release(unaff_x22);
LAB_1051bd174:
  _objc_release(param_8);
  _objc_release(param_6);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)0x0;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_c0;
  pcStack_88 = FUN_1051bd1cc;
  puStack_b0 = unaff_x22;
  lStack_a8 = param_8;
  uStack_a0 = param_6;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_1126e6c40;
  puStack_c0 = puVar1;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(puVar4);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar4;
    _objc_release(uVar7);
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined8 *)((long)ppuVar6 + 0x10) = param_4;
    _objc_release(uVar7);
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined **)((long)ppuVar6 + 0x18) = param_5;
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1051bd1cc; end: 1051bd297; -[SCContextDreamsActionPerformer initWithNavigationServices:memoriesNavigationServices:genAIDreamsService:] */

undefined1 *
FUN_1051bd1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6c40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051bd298; end: 1051bd3c3; -[SCContextDreamsActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051bd298(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x7;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(in_x7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8a500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d6b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d6760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051bd3c4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = in_x7;
  _objc_retain(in_x7);
  func_0x00010c10d100(uVar2,param_2,1,0,0,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(in_x7);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 1051bd3c4; end: 1051bd48f;  */

void FUN_1051bd3c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1051bd448;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar1;
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c152480(uVar1,param_2,1,4,0,0,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1051bd490; end: 1051bd4cb; -[SCContextDreamsActionPerformer .cxx_destruct] */

void FUN_1051bd490(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051bd4cc; end: 1051bd6cf; -[SCContextEditActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined1 * FUN_1051bd4cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *in_x5;
  long in_x7;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  puVar1 = in_x5;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08bda0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = in_x5;
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = in_x5;
  if ((puVar3 < (undefined *)0x23) && ((0x5000001f8U >> ((ulong)puVar3 & 0x3f) & 1) != 0)) {
    puVar3 = PTR_PTR_1126b5b28;
    func_0x00010bf8c140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_x5);
    puVar8 = puVar3;
    puVar9 = puVar2;
    func_0x00010c0eb7c0(puVar1);
  }
  else {
    puVar3 = PTR_PTR_1126b2d30;
    func_0x00010bf8c140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_x5);
    in_x5 = PTR_PTR_1126b5bf0;
    func_0x00010c109f20();
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR____kCFBooleanTrue_11034ab68;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = in_x5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puVar9 = puVar2;
    func_0x00010c0eb7c0(puVar1);
    _objc_release(puVar4);
    _objc_release(in_x5);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  lVar5 = in_x7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)0x0;
  }
  ___stack_chk_fail();
  plVar6 = &lStack_a0;
  pcStack_68 = FUN_1051bd6d0;
  puStack_90 = puVar3;
  puStack_88 = in_x5;
  puStack_80 = puVar1;
  lStack_78 = in_x7;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puStack_98 = PTR_PTR_1126e6c48;
  lStack_a0 = lVar5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_init_1125d9248);
  if (plVar6 != (long *)0x0) {
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)plVar6 + 8);
    *(undefined **)((long)plVar6 + 8) = puVar8;
    _objc_release(uVar7);
    _objc_retain(puVar9);
    uVar7 = *(undefined8 *)((long)plVar6 + 0x10);
    *(undefined **)((long)plVar6 + 0x10) = puVar9;
    _objc_release(uVar7);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  return (undefined1 *)plVar6;
}



/* Entry: 1051bd6d0; end: 1051bd773; -[SCContextFriendAddActionPerformer initWithSnapchattersDataMutator:snapchattersDataFetcher:] */

undefined1 *
FUN_1051bd6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 1051bd774; end: 1051bd8b3; -[SCContextFriendAddActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051bd774(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010bfb7b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c2448c0(uVar3);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  return 0;
}



/* Entry: 1051bd8b4; end: 1051bda4b;  */

void FUN_1051bd8b4(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      if (param_2 == (undefined *)0x0) {
        param_2 = PTR_PTR_1126b15c8;
        _objc_alloc(PTR_PTR_1126b15c8);
        func_0x00010c05c0e0();
      }
      func_0x00010be3f0a0();
      puVar1 = PTR_PTR_1126ae5c0;
      func_0x00010befca80(PTR_PTR_1126ae5c0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef8a80();
    }
    else {
      puVar1 = PTR_PTR_1126ae5c0;
      func_0x00010bf6ce00(PTR_PTR_1126ae5c0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
    }
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051bda4c; end: 1051bdb17; -[SCContextFriendAddActionPerformer _isCommunityStoryWithParams:] */

bool FUN_1051bda4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c27dd80(uVar1);
    _objc_release(uVar1);
    bVar2 = uVar4 == 7;
    _objc_release(uVar3);
  }
  return bVar2;
}



/* Entry: 1051bdb18; end: 1051bdb47; -[SCContextFriendAddActionPerformer .cxx_destruct] */

void FUN_1051bdb18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051bdb48; end: 1051bdc6b; -[SCContextGenAiStoryActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051bdb48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010bfbea20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    lVar1 = param_6;
    func_0x00010c0ea4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_3);
    if (lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar1 = param_6;
      func_0x00010c0ea4c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_6;
      func_0x00010c0ea8e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8,0);
      }
      puVar3 = PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051bdc6c; end: 1051bdc6f;  */

void FUN_1051bdc6c(void)

{
  return;
}



/* Entry: 1051bdc70; end: 1051bdd3b; -[SCContextHeroContextMenuActionPerformer initWithHeroContextMenuScopeExposer:heroContextMenuScopeServices:circumstanceEngine:] */

undefined1 *
FUN_1051bdc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6c50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051bdd3c; end: 1051bde27; -[SCContextHeroContextMenuActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051bdd3c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010beeed20();
  if (param_3 == 0x5b) {
    uVar1 = param_8;
    _objc_retainBlock();
    _objc_release(param_8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    func_0x00010be7bc20(param_1);
    ppuVar3 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dca818;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca818,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1051bde28; end: 1051bde2b;  */

void FUN_1051bde28(void)

{
  return;
}



/* Entry: 1051bde2c; end: 1051bdfc3; -[SCContextHeroContextMenuActionPerformer _presentHeroContextMenuWithViewController:params:] */

void FUN_1051bde2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f30);
  _objc_release(param_3);
  uVar1 = (uint)lVar2 ^ 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    func_0x00010c237b40(param_3);
  }
  puVar3 = PTR_PTR_1126b5bb8;
  _objc_alloc(PTR_PTR_1126b5bb8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c038ee0(0x3ff0000000000000,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf22ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  _objc_release(uVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051bdfc4; end: 1051bdfef;  */

void FUN_1051bdfc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051bdff0; end: 1051be18b; -[SCContextHeroContextMenuActionPerformer _didDismissTrayContainer] */

void FUN_1051bdff0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4f30);
    _objc_release(lVar3);
    if ((int)lVar1 != 0 && lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c150520(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2020();
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar4);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0f7280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010010fab4();
      _objc_release(lVar5);
      _objc_release(lVar3);
      if ((lVar5 != 0) && ((int)lVar1 != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0f3ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0f7280(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8640(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar4);
        func_0x00010c1da160(*(undefined8 *)(param_1 + 0x20));
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1051be18c; end: 1051be1df; -[SCContextHeroContextMenuActionPerformer .cxx_destruct] */

void FUN_1051be18c(long param_1)

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



/* Entry: 1051be1e0; end: 1051be253; -[SCContextIdentityWebViewActionPerformer initWithSnapKitIdentityWebViewScopeExposer:] */

undefined1 * FUN_1051be1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c58;
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



/* Entry: 1051be254; end: 1051be4c7; -[SCContextIdentityWebViewActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051be254(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c241a40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110dca838;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca838,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b5bf8;
    _objc_alloc();
    lVar10 = param_3;
    func_0x00010c0dfac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf0d660(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2418e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf05ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c113f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffef80(puVar1);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
    puVar9 = PTR_PTR_1126b5c00;
    _objc_alloc(PTR_PTR_1126b5c00);
    func_0x00010c0573e0();
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    ppuVar11 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(puVar9);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 1051be4c8; end: 1051be50f; -[SCContextIdentityWebViewActionPerformer identityWebViewDidTearDown] */

void FUN_1051be4c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051be510; end: 1051be51b; -[SCContextIdentityWebViewActionPerformer .cxx_destruct] */

void FUN_1051be510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051be51c; end: 1051be58f; -[SCContextJoinTheChatActionPerformer initWithPublicGroupChatScopeLauncher:] */

undefined1 * FUN_1051be51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c60;
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



/* Entry: 1051be590; end: 1051be6f7; -[SCContextJoinTheChatActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051be590(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_x7;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(in_x7);
  func_0x00010c085b00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    if (in_x7 != 0) {
      (**(code **)(in_x7 + 0x10))(in_x7,0);
    }
    uVar6 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    puVar4 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    func_0x00010c039140();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
    lVar2 = in_x7;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126afd78;
    _objc_alloc();
    func_0x00010bffae00();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(in_x7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1051be6f8; end: 1051be6fb;  */

void FUN_1051be6f8(void)

{
  return;
}



/* Entry: 1051be6fc; end: 1051be73b; -[SCContextJoinTheChatActionPerformer didDismissChatWithScope:] */

void FUN_1051be6fc(long param_1)

{
  long lVar1;
  
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051be72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051be73c; end: 1051be777; -[SCContextJoinTheChatActionPerformer .cxx_destruct] */

void FUN_1051be73c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051be778; end: 1051be8cb; -[SCContextLensActionPerformer initWithLinkActionPerformer:promptLensActionPerformer:shoppingLensProductPreselector:lensPromptDataProvider:currentUserId:nglStudySettings:] */

undefined1 *
FUN_1051be778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6c68;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 1051be8cc; end: 1051bed83; -[SCContextLensActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051be8cc(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  ulong unaff_x27;
  ulong uVar22;
  ulong unaff_x28;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
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
  uVar2 = param_3;
  uVar3 = param_4;
  uVar16 = param_5;
  uVar17 = param_6;
  uVar18 = param_7;
  uVar19 = param_8;
  puStack_138 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c08fba0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar21 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    uStack_140 = param_7;
    func_0x00010c22d020();
    if (uVar2 != 0) {
      puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      uStack_158 = param_6;
      uStack_150 = param_5;
      uStack_148 = param_4;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uVar2 = uVar1;
      func_0x00010c22d000();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = 0x10;
      uVar3 = uVar2;
      func_0x00010bf52a60();
      if (uVar3 != 0) {
        lVar20 = *plStack_120;
        do {
          uVar16 = 0;
          do {
            if (*plStack_120 != lVar20) {
              _objc_enumerationMutation(uVar2);
            }
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0b4ca0(*(undefined8 *)(lStack_128 + uVar16 * 8));
            func_0x00010c0df7c0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar21);
            _objc_release(puVar4);
            uVar16 = uVar16 + 1;
          } while (uVar3 != uVar16);
          uVar16 = 0x10;
          uVar3 = uVar2;
          func_0x00010bf52a60();
        } while (uVar3 != 0);
      }
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(puStack_138 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c094540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10a880(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(puVar21);
      param_4 = uStack_148;
      param_5 = uStack_150;
      param_6 = uStack_158;
    }
    uVar2 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar21 = PTR_PTR_1126b2390;
    _objc_retain(unaff_x27);
    _objc_opt_class(puVar21);
    uVar3 = unaff_x27;
    _objc_opt_isKindOfClass(unaff_x27,puVar21);
    uVar2 = unaff_x27;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(unaff_x27);
    uVar3 = uVar2;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar21 = PTR_PTR_1126b5c10;
    _objc_opt_class(PTR_PTR_1126b5c10);
    uVar6 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar21);
    uVar2 = uVar3;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    unaff_x28 = uVar2;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar7 = unaff_x28;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    uVar6 = uStack_140;
    uVar2 = uVar1;
    uVar3 = param_4;
    if (uVar8 == 0) {
      _objc_release(uVar7);
LAB_1051bec5c:
      uVar6 = param_3;
      func_0x00010c08fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c080040();
      _objc_release(uVar6);
      param_7 = uStack_140;
      puVar21 = puStack_138;
      if ((int)uVar7 == 0) {
        uVar16 = param_5;
        uVar17 = param_6;
        uVar18 = uStack_140;
        uVar19 = param_8;
        func_0x00010be87fa0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = param_4;
        uVar3 = param_8;
        func_0x00010be04800();
        _objc_retainAutoreleasedReturnValue();
        param_7 = uStack_140;
      }
    }
    else {
      uVar8 = uStack_140;
      func_0x00010bf4eae0();
      if (uVar8 == 3) {
        _objc_release(uVar7);
      }
      else {
        func_0x00010bf4eae0();
        _objc_release(uVar7);
        if (uVar6 != 1) goto LAB_1051bec5c;
      }
      uVar16 = unaff_x28;
      func_0x00010c11cb60();
      param_7 = uStack_140;
      puVar21 = puStack_138;
      if ((int)uVar16 == 3) {
        uVar16 = param_5;
        uVar17 = param_6;
        uVar18 = uStack_140;
        uVar19 = param_8;
        func_0x00010be32560();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = param_4;
        uVar3 = param_5;
        uVar16 = param_6;
        uVar17 = uStack_140;
        uVar18 = param_8;
        func_0x00010be87f80();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_168 = FUN_1051bed84;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  puStack_1b0 = puVar21;
  uStack_1a8 = uVar1;
  uStack_1a0 = param_8;
  uStack_198 = param_6;
  uStack_190 = param_5;
  uStack_188 = param_7;
  uStack_180 = param_4;
  uStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar16);
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  _objc_retain(uVar19);
  uVar1 = uVar17;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar21 = PTR_PTR_1126b2390;
  _objc_retain(uVar8);
  _objc_opt_class(puVar21);
  uVar7 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar21);
  uVar1 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar9 = uVar1;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b5c10;
  _objc_opt_class(PTR_PTR_1126b5c10);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar21);
  uVar7 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar9);
  uVar9 = uVar7;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = &uStack_1f8;
  uStack_1f8 = 0;
  uStack_1e8 = 0x3032000000;
  pcStack_1e0 = FUN_1051bf2cc;
  uStack_1d8 = 0x1051bf2dc;
  uVar5 = *(undefined8 *)(uVar6 + 0x28);
  _objc_retain(uVar5);
  uVar12 = uVar9;
  uStack_1d0 = uVar5;
  func_0x00010bfdab40();
  uVar14 = uVar9;
  if ((int)uVar12 == 0) {
    func_0x00010c118560();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x00010bfe2ee0();
    uVar15 = uVar14;
    func_0x00010c0b5940(uVar14);
    func_0x000100c4a928(uVar12,uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar12 = uVar15;
    func_0x00010c0720c0();
    if ((int)uVar12 != 0) {
      uVar12 = uVar1;
      func_0x00010c290fa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar12;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_218 = 0xc2000000;
      pcStack_210 = FUN_1051bf2e4;
      puStack_208 = &UNK_110842b58;
      puStack_200 = &uStack_1f8;
      func_0x00010c0c12a0();
      goto LAB_1051bf08c;
    }
  }
  else {
    func_0x00010c118860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x00010bfe2ee0();
    uVar15 = uVar9;
    func_0x00010c118860(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar15;
    func_0x00010c0b5940();
    func_0x000100c4a928(uVar12,uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = puStack_1f0[5];
    puStack_1f0[5] = uVar13;
LAB_1051bf08c:
    _objc_release(uVar22);
    _objc_release(uVar12);
  }
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_initWeak(auStack_228,uVar6);
  uVar5 = *(undefined8 *)(uVar6 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_230,auStack_228);
  _objc_retain(uVar19);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(uVar16);
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  func_0x00010bfc92c0(uVar5);
  _objc_release(uVar5);
  puVar21 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_228);
  __Block_object_dispose(&uStack_1f8,8);
  _objc_release(uStack_1d0);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1051bed84; end: 1051bf2cb; -[SCContextLensActionPerformer _handleTurnByTurnPromptLensAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051bed84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
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
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2390;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5c10;
  _objc_opt_class(PTR_PTR_1126b5c10);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1051bf2cc;
  uStack_78 = 0x1051bf2dc;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar12);
  uVar8 = uVar5;
  uStack_70 = uVar12;
  func_0x00010bfdab40();
  uVar10 = uVar5;
  if ((int)uVar8 == 0) {
    func_0x00010c118560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bfe2ee0();
    uVar11 = uVar10;
    func_0x00010c0b5940(uVar10);
    func_0x000100c4a928(uVar8,uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar11;
    func_0x00010c0720c0();
    if ((int)uVar8 == 0) goto LAB_1051bf09c;
    uVar8 = uVar1;
    func_0x00010c290fa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1051bf2e4;
    puStack_a8 = &UNK_110842b58;
    puStack_a0 = &uStack_98;
    func_0x00010c0c12a0();
  }
  else {
    func_0x00010c118860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bfe2ee0();
    uVar11 = uVar5;
    func_0x00010c118860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010c0b5940();
    func_0x000100c4a928(uVar8,uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puStack_90[5];
    puStack_90[5] = uVar9;
  }
  _objc_release(uVar13);
  _objc_release(uVar8);
LAB_1051bf09c:
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_initWeak(auStack_c8,param_1);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfc92c0(uVar12);
  _objc_release(uVar12);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051bf2cc; end: 1051bf2e3;  */

void FUN_1051bf2cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051bf2e4; end: 1051bf31b;  */

void FUN_1051bf2e4(long param_1,undefined8 param_2)

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



/* Entry: 1051bf31c; end: 1051bf4b7;  */

void FUN_1051bf31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca858,
                        *(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1051bf4b8; end: 1051bf4ef;  */

void FUN_1051bf4b8(long param_1,undefined8 param_2)

{
  func_0x00010be2e7e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 1051bf4f0; end: 1051bf55b;  */

void FUN_1051bf4f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  return;
}



/* Entry: 1051bf55c; end: 1051bf55f;  */

void FUN_1051bf55c(void)

{
  return;
}



/* Entry: 1051bf560; end: 1051bf6bf; -[SCContextLensActionPerformer _handlePromptDataProviderResponse:error:lensAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051bf560(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_4 == 0) {
    func_0x00010c27d340();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c06fe80(), (int)lVar1 != 0)) {
      func_0x00010be87f80(param_1,param_2,param_6,param_7,param_8,param_9,param_10);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010be87fa0(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(param_3);
  }
  else {
    func_0x00010be87fa0(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051bf6c0; end: 1051bf8cf; -[SCContextLensActionPerformer _displayLensNotPublishedDialog:completion:] */

undefined8 FUN_1051bf6c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = param_4;
  _objc_retain(param_4);
  func_0x00010723cc58();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010723cc70();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010723cc88();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1051bf8d0;
  pcStack_70 = FUN_1051bf8f8;
  uVar3 = param_4;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126aed70;
  uStack_68 = uVar3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  func_0x00010c10eda0(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 0;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_90);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_3 + 0x28) = uVar7;
  return uVar7;
}



/* Entry: 1051bf8d0; end: 1051bf8f7;  */

void FUN_1051bf8d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1051bf8f8; end: 1051bf8ff;  */

void FUN_1051bf8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051bf900; end: 1051bf95b;  */

void FUN_1051bf900(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1051bf95c;
  puStack_20 = &UNK_110847658;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 1051bf95c; end: 1051bf9af;  */

void FUN_1051bf95c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051bf9b0; end: 1051bf9b3;  */

void FUN_1051bf9b0(void)

{
  return;
}



/* Entry: 1051bf9b4; end: 1051bfac7; -[SCContextLensActionPerformer _redirectedPromptAction:uiContainer:params:source:completion:] */

void FUN_1051bf9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5c18;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4dc0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f80c0(uVar3,param_2,puVar2,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051bfac8; end: 1051c017f; -[SCContextLensActionPerformer _redirectedURLAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051bfac8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar18;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2390;
  _objc_retain(puVar2);
  _objc_opt_class(puVar1);
  puVar18 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar18 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar18 = param_3;
  func_0x00010bfd61a0();
  if ((int)puVar18 == 0) {
LAB_1051bfc50:
    if (puVar1 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      goto LAB_1051bfcf0;
    }
    puVar3 = puVar2;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126b5c10;
    _objc_opt_class(PTR_PTR_1126b5c10);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar18);
    puVar18 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar18 = (undefined *)0x0;
    }
    _objc_retain(puVar18);
    _objc_release(puVar3);
    puVar3 = puVar18;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar4 = puVar3;
    func_0x00010bf62d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010bf62d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar18 = param_3;
    func_0x00010bf62d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar18;
    func_0x00010bf62d20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar18);
    if (puVar4 == (undefined *)0x0) goto LAB_1051bfc50;
    puVar3 = param_3;
    func_0x00010bf62d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010bf62d20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_1051bfcf0:
  puVar4 = PTR_PTR_1126b5c20;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf684c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_1051e5758();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar6 = param_3;
  func_0x00010c074340();
  puVar3 = puVar5;
  if ((int)puVar6 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      if (puVar8 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar8);
        puVar9 = puVar8;
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar7);
      func_0x00010c1e6460(puVar6);
      puVar7 = puVar6;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar3 = puVar7;
      }
      _objc_retain(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar9);
    }
    _objc_release(puVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  func_0x00010c21d520(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b000();
  func_0x00010bf29de0();
  puVar6 = param_3;
  func_0x00010c074340();
  if ((int)puVar6 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c07a2a0();
    if ((uVar11 & 1) == 0) {
      _objc_release(uVar10);
    }
    else {
      FUN_1051c3d3c(param_6,param_7);
      _objc_release(uVar10);
    }
  }
  puVar6 = PTR_PTR_1126b5bb0;
  _objc_alloc();
  puVar7 = param_6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_6;
  func_0x00010c0ea4c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_6;
  func_0x00010c08f3a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_6;
  func_0x00010bf50720(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010bf4eae0();
  func_0x00010bf4eb00();
  func_0x00010c24b560();
  func_0x00010c24ba40();
  func_0x00010c0ea840();
  puVar15 = param_6;
  func_0x00010c0f2be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0275e0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f80c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
  return;
}



/* Entry: 1051c0180; end: 1051c01df; -[SCContextLensActionPerformer .cxx_destruct] */

void FUN_1051c0180(long param_1)

{
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



/* Entry: 1051c01e0; end: 1051c0253; -[SCContextLensCollectionActionPerformer initWithLinkActionPerformer:] */

undefined1 * FUN_1051c01e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c70;
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



/* Entry: 1051c0254; end: 1051c05bb; -[SCContextLensCollectionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c0254(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0914a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
    uVar10 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b5c20;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf684c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    func_0x00010c21d520(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b5b00;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b000();
    puVar4 = PTR_PTR_1126b5bb0;
    _objc_alloc();
    uVar10 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_6;
    func_0x00010c0ea4c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c08f3a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010bf50720(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010bf4eae0();
    func_0x00010bf4eb00();
    func_0x00010c24b560();
    func_0x00010c24ba40();
    func_0x00010c0ea840();
    func_0x00010c0275e0(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f80c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 1051c05bc; end: 1051c05c7; -[SCContextLensCollectionActionPerformer .cxx_destruct] */

void FUN_1051c05bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051c05c8; end: 1051c08af; -[SCContextLinkActionPerformer initWithModularCameraPresenter:collectionModularCameraPresenter:lensUnlocker:cameraBIPAConfiguration:cameraBIPAScopeExposer:cameraBIPAScopeServices:lensReplyCameraPresenter:inLensCreationDataProvider:centralizedLensMetadataStoreProvider:deepLinkHandlerCreator:musicContextExtractor:playGamesPresenter:playGamesStudySettings:] */

undefined8 *
FUN_1051c05c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e6c78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[3];
    puVar1[3] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[4];
    puVar1[4] = param_15;
    _objc_release(uVar2);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051c08b0; end: 1051c1003; -[SCContextLinkActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c08b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bdc2be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28fc00();
  _objc_release(lVar1);
  if (lVar2 != 1) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110dca8b8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca8b8,param_8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1051c0fb8;
  }
  lVar1 = param_3;
  func_0x00010bdc2be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28fbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_release(puVar5);
      goto LAB_1051c09d8;
    }
    ppuVar9 = &PTR____CFConstantStringClassReference_110dca8d8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca8d8,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
LAB_1051c09d8:
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = param_6;
    _objc_release(uVar6);
    uVar7 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c0748c0();
    if ((uVar7 & 1) == 0) {
      func_0x00010c070a00();
    }
    uVar7 = param_6;
    func_0x00010c08f3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126b5c28;
    _objc_alloc();
    uVar7 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0();
    func_0x00010beef1e0();
    uVar14 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247d40();
    func_0x00010c29d360();
    func_0x00010c25b720();
    uVar15 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0954a0();
    func_0x00010c0450e0();
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar7);
    puVar18 = PTR_PTR_1126b5c30;
    _objc_alloc();
    func_0x00010c04a7e0();
    uVar7 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c08bda0();
    func_0x00010beef1e0();
    func_0x00010bf4eb00();
    switch(uVar12) {
    case 0:
    case 1:
    case 2:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x1b:
    case 0x1c:
    case 0x1e:
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0x20:
    case 0x22:
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x15:
    case 0x1a:
    case 0x1d:
    case 0x1f:
    case 0x21:
    case 0x23:
      break;
    case 0xf:
    case 0x14:
      break;
    case 0x10:
      break;
    case 0x18:
    }
    _objc_release(uVar11);
    _objc_release(uVar7);
    uVar7 = param_6;
    func_0x00010c0f2be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010c241400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08bda0();
      func_0x000108435ff0();
      _objc_release(uVar11);
      _objc_release(uVar7);
      uVar19 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_6;
      func_0x00010c0f2be0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar19;
      func_0x00010bf9ed20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar19);
    }
    puVar20 = PTR_PTR_1126b5c38;
    _objc_alloc();
    func_0x00010c025b40();
    uVar19 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf55c20();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar19;
    _objc_release(uVar21);
    uVar19 = param_8;
    _objc_retainBlock();
    uVar21 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar19;
    _objc_release(uVar21);
    uVar19 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010bdc2be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1070c0();
    uVar7 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    func_0x00010c27cf40(uVar19);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(lVar1);
    ppuVar9 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(param_8);
    _objc_release(puVar20);
    _objc_release(uVar6);
    _objc_release(puVar18);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
LAB_1051c0fb8:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 1051c1004; end: 1051c102b;  */

void FUN_1051c1004(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be60e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__modalPresentationDidEnd_112575d38);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051c1020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051c102c; end: 1051c103f; -[SCContextLinkActionPerformer deepLinkHandler:wantsToDismissContextCardsWithCompletion:] */

void FUN_1051c102c(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051c1038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3);
    return;
  }
  return;
}



/* Entry: 1051c1040; end: 1051c1043; -[SCContextLinkActionPerformer deepLinkHandlerWillPresentModalContent:] */

void FUN_1051c1040(void)

{
  return;
}



/* Entry: 1051c1044; end: 1051c10a3; -[SCContextLinkActionPerformer deepLinkHandlerDidDismissModalContent:error:] */

void FUN_1051c1044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  func_0x00010be60e20(param_1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051c10a4; end: 1051c10a7; -[SCContextLinkActionPerformer deepLinkHandlerWillTryToLeaveApp:] */

void FUN_1051c10a4(void)

{
  return;
}



/* Entry: 1051c10a8; end: 1051c10f7; -[SCContextLinkActionPerformer deepLinkHandlerDidLeaveApp:successfully:] */

void FUN_1051c10a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051c10f8; end: 1051c1197; -[SCContextLinkActionPerformer _modalPresentationDidEnd] */

void FUN_1051c10f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0ea4c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0ea8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ebecb8,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c1198; end: 1051c1237; -[SCContextLinkActionPerformer _modalDismissalDidEnd] */

void FUN_1051c1198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0ea4c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0ea8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ebecd8,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051c1238; end: 1051c130f; -[SCContextLinkActionPerformer .cxx_destruct] */

void FUN_1051c1238(long param_1)

{
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



/* Entry: 1051c1310; end: 1051c16f7; -[SCContextV2DeepLinkHandlerCreator initWithNavigationServices:featureSettingsService:deepLinkHandling:businessProfileScopeExposer:commerceShoppingScopeExposer:topicViewerScopeExposer:topicViewerScopeServices:mainCameraDeepLinkScopeExposer:groupsDataFetcher:safeBrowsingAPI:circumstanceEngine:urlInterceptorProvider:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:contextExperimentService:fanPassSubscriptionScopeFactoryServices:snapchatterServices:] */

undefined8 *
FUN_1051c1310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126e6c80;
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
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
  }
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



/* Entry: 1051c16f8; end: 1051c17c7; -[SCContextV2DeepLinkHandlerCreator createDeepLinkHandlerWithLensUnlockFlow:] */

void FUN_1051c16f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5c40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d6760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e760(puVar1,param_2,uVar3,param_3,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051c17c8; end: 1051c18b7; -[SCContextV2DeepLinkHandlerCreator .cxx_destruct] */

void FUN_1051c17c8(long param_1)

{
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



/* Entry: 1051c18b8; end: 1051c19b3; -[SCContextMagicCaptionActionPerformer initWithSubscriptionInfoProvider:resourceDownloader:plusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined1 *
FUN_1051c18b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6c88;
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



/* Entry: 1051c19b4; end: 1051c1ce3; -[SCContextMagicCaptionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051c19b4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c0b6260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c080120();
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar3 == 0) {
      lVar1 = param_8;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar1;
      _objc_release(uVar5);
      puVar4 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      func_0x00010c04abe0();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf23e60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
      _objc_release(uVar5);
    }
    else {
      puVar4 = param_1;
      func_0x00010be373c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      puStack_a0 = puVar6;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1051c1ce4;
      puStack_88 = &UNK_11086e938;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      lVar1 = param_8;
      uStack_80 = param_4;
      _objc_retain(param_8);
      lStack_78 = param_8;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar4);
      _objc_release(lVar1);
      _objc_release(lStack_78);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(puVar4);
    _objc_initWeak(auStack_68,param_1);
    puVar6 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_a8,auStack_68);
    func_0x00010bffae00(puVar6);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051c1ce4; end: 1051c1d37;  */

void FUN_1051c1ce4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c4c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c1d38; end: 1051c1d63;  */

void FUN_1051c1d38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c1d64; end: 1051c2023; -[SCContextMagicCaptionActionPerformer _presentMagicCaptionDialogWithImage:onViewController:completion:] */

void FUN_1051c1d64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar9 = param_5;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  _objc_release(uVar8);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dad758,
                      &PTR____CFConstantStringClassReference_110dca918,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010bdec980(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dca938;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dca938,
                      &PTR____CFConstantStringClassReference_110dca918,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dca958;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dca918;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dca958,
                      &PTR____CFConstantStringClassReference_110dca918,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80();
  puVar10 = (undefined8 *)(param_1 + 0x28);
  uVar9 = *puVar10;
  *puVar10 = puVar3;
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(lVar4);
  func_0x00010c18b5e0(*puVar10);
  func_0x00010c10eda0(param_4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  _objc_retain(ppuVar7);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2d260();
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051c2024; end: 1051c206b;  */

void FUN_1051c2024(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051c206c; end: 1051c21c7; -[SCContextMagicCaptionActionPerformer _imageFutureWithImageURL:] */

void FUN_1051c206c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar4,param_2,param_1,0xe);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051c21c8;
  puStack_50 = &UNK_11084d858;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf88c20(uVar3,param_2,puVar2,puVar4,&puStack_68);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


