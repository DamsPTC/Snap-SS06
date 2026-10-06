/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106587258; end: 1065872f3; -[SCChatInputViewController inputTextView:didPasteGif:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_4);
  func_0x00010c0662a0(uVar2,param_2,param_1,param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aaac);
  puVar1 = PTR_PTR_1126cb978;
  func_0x00010bfcc960(PTR_PTR_1126cb978,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065872f4; end: 10658738f; -[SCChatInputViewController inputTextView:didPasteImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065872f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_4);
  func_0x00010c0662c0(uVar2,param_2,param_1,param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aaac);
  puVar1 = PTR_PTR_1126cb978;
  func_0x00010bfe94a0(PTR_PTR_1126cb978,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106587390; end: 10658742b; -[SCChatInputViewController inputTextView:didPasteSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_4);
  func_0x00010c0662e0(uVar2,param_2,param_1,param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aaac);
  puVar1 = PTR_PTR_1126cb978;
  func_0x00010c255380(PTR_PTR_1126cb978,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10658742c; end: 1065874e3; -[SCChatInputViewController inputTextView:didPasteVideo:contentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658742c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c066300(uVar2,param_2,param_1,param_3,param_4,param_5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aaac);
  puVar1 = PTR_PTR_1126cb978;
  func_0x00010c29bde0(PTR_PTR_1126cb978,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065874e4; end: 10658751f; -[SCChatInputViewController sendItemControllerDidPressSend:] */

void FUN_1065874e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97180(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106587520; end: 106587553; -[SCChatInputViewController expendItemDidPressExpand:] */

void FUN_106587520(undefined8 param_1)

{
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106587554; end: 106587677; -[SCChatInputViewController _returnKeyPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf3a1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c380();
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274aaa0);
  puVar3 = PTR_PTR_1126cb8d0;
  func_0x00010bfaffa0(PTR_PTR_1126cb8d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c0663a0(*(undefined8 *)(param_1 + _DAT_11274aac0),param_2,param_1,param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar3 = PTR_PTR_1126cb968;
  func_0x00010bf7a260(PTR_PTR_1126cb968,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106587678; end: 1065876cb; -[SCChatInputViewController applicationWillResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aae8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e54238,0,0);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be01cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__disableKeyboardIfNecessaryAsync_11255e0d0,1);
    return;
  }
  return;
}



/* Entry: 1065876cc; end: 1065876fb; -[SCChatInputViewController applicationDidBecomeActive:] */

void FUN_1065876cc(undefined8 param_1)

{
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065876fc; end: 10658773b; -[SCChatInputViewController keyboardDidShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065876fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10658773c; end: 10658774b; -[SCChatInputViewController style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10658773c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ab04);
}



/* Entry: 10658774c; end: 10658775b; -[SCChatInputViewController logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10658774c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ab3c);
}



/* Entry: 10658775c; end: 10658779b; -[SCChatInputViewController setLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658775c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274ab3c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10658779c; end: 1065877bb; -[SCChatInputViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658779c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274ab20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065877bc; end: 1065877cf; -[SCChatInputViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065877bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274ab20,param_3);
  return;
}



/* Entry: 1065877d0; end: 1065877e3; -[SCChatInputViewController setPersistentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065877d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274ab18,param_3);
  return;
}



/* Entry: 1065877e4; end: 1065877f3; -[SCChatInputViewController scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065877e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274aa8c);
}



/* Entry: 1065877f4; end: 106587803; -[SCChatInputViewController coordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065877f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ab08);
}



/* Entry: 106587804; end: 106587843; -[SCChatInputViewController setCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274ab08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106587844; end: 106587883; -[SCChatInputViewController setTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274ab40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106587884; end: 106587acb; -[SCChatInputViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106587884(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ab40,0);
  _objc_storeStrong(param_1 + _DAT_11274ab08,0);
  _objc_destroyWeak(param_1 + _DAT_11274ab18);
  _objc_destroyWeak(param_1 + _DAT_11274ab20);
  _objc_storeStrong(param_1 + _DAT_11274ab3c,0);
  _objc_storeStrong(param_1 + _DAT_11274aad4,0);
  _objc_storeStrong(param_1 + _DAT_11274aad0,0);
  _objc_storeStrong(param_1 + _DAT_11274aacc,0);
  _objc_storeStrong(param_1 + _DAT_11274ab34,0);
  _objc_storeStrong(param_1 + _DAT_11274aac4,0);
  _objc_storeStrong(param_1 + _DAT_11274ab28,0);
  _objc_storeStrong(param_1 + _DAT_11274ab00,0);
  _objc_storeStrong(param_1 + _DAT_11274ab14,0);
  _objc_storeStrong(param_1 + _DAT_11274ab38,0);
  _objc_storeStrong(param_1 + _DAT_11274aaf8,0);
  _objc_storeStrong(param_1 + _DAT_11274aac8,0);
  _objc_storeStrong(param_1 + _DAT_11274aabc,0);
  _objc_storeStrong(param_1 + _DAT_11274aab8,0);
  _objc_storeStrong(param_1 + _DAT_11274aab4,0);
  _objc_storeStrong(param_1 + _DAT_11274aab0,0);
  _objc_storeStrong(param_1 + _DAT_11274aaac,0);
  _objc_storeStrong(param_1 + _DAT_11274aaa8,0);
  _objc_storeStrong(param_1 + _DAT_11274aaa4,0);
  _objc_storeStrong(param_1 + _DAT_11274aaa0,0);
  _objc_storeStrong(param_1 + _DAT_11274aa9c,0);
  _objc_storeStrong(param_1 + _DAT_11274aa98,0);
  _objc_storeStrong(param_1 + _DAT_11274aa94,0);
  _objc_storeStrong(param_1 + _DAT_11274aaf4,0);
  _objc_storeStrong(param_1 + _DAT_11274aaf0,0);
  _objc_storeStrong(param_1 + _DAT_11274aaec,0);
  _objc_storeStrong(param_1 + _DAT_11274aad8,0);
  _objc_storeStrong(param_1 + _DAT_11274aae8,0);
  _objc_storeStrong(param_1 + _DAT_11274ab0c,0);
  _objc_storeStrong(param_1 + _DAT_11274aadc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274aac0,0);
  return;
}



/* Entry: 106587acc; end: 106587b73;  */

void FUN_106587acc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e54298;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e54298,
                      &PTR____CFConstantStringClassReference_110e542b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106587b74; end: 106587cef; -[SCChatInputTextViewListenerAnnouncer description] */

void FUN_106587b74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_106587cf0(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106587cf0; end: 106587d4f;  */

void FUN_106587cf0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 106587d50; end: 106587ffb; -[SCChatInputTextViewListenerAnnouncer addListener:] */

undefined8 FUN_106587d50(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_11092b3c8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_106587ffc(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10658813c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_106587f04:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_106587f24;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106587ffc(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106587ffc(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10658813c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_106587f04;
    }
  }
  uVar9 = 1;
LAB_106587f24:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106587ffc; end: 10658813b;  */

void FUN_106587ffc(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1065891b4();
LAB_106588138:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106588138;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10658813c; end: 106588183;  */

void FUN_10658813c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106588184; end: 1065883b3; -[SCChatInputTextViewListenerAnnouncer removeListener:] */

void FUN_106588184(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106588338;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_1065881ec;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10658813c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106588338;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_1065881ec:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_11092b3c8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_106587ffc(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10658813c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106588338;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106588338:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065883b4; end: 1065884db; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewWillBeginEditing:] */

void FUN_1065883b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0663c0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065884dc; end: 106588603; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewDidBeginEditing:] */

void FUN_1065884dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c066340(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588604; end: 10658872b; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewWillEndEditing:] */

void FUN_106588604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0663e0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658872c; end: 106588853; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewDidEndEditing:] */

void FUN_10658872c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c066380(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588854; end: 10658897b; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewDidChange:] */

void FUN_106588854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c066360(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658897c; end: 106588aa3; -[SCChatInputTextViewListenerAnnouncer inputViewController:textViewDidReturn:] */

void FUN_10658897c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106587cf0(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0663a0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588aa4; end: 106588bf3; -[SCChatInputTextViewListenerAnnouncer inputViewController:textView:didPasteImage:] */

void FUN_106588aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_106587cf0(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0662c0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588bf4; end: 106588d43; -[SCChatInputTextViewListenerAnnouncer inputViewController:textView:didPasteSticker:] */

void FUN_106588bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_106587cf0(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0662e0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588d44; end: 106588e93; -[SCChatInputTextViewListenerAnnouncer inputViewController:textView:didPasteGifData:] */

void FUN_106588d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_106587cf0(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c0662a0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106588e94; end: 106589003; -[SCChatInputTextViewListenerAnnouncer inputViewController:textView:didPasteVideoData:contentType:] */

void FUN_106588e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_106587cf0(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c066300(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106589004; end: 10658916b; -[SCChatInputTextViewListenerAnnouncer inputViewController:textView:willChangeTextInRange:replacementText:] */

void FUN_106589004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  FUN_106587cf0(&puStack_70,param_1 + 0x48);
  if (puStack_70 != (ulong *)0x0) {
    uVar3 = puStack_70[1];
    for (uVar2 = *puStack_70; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c066320(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658916c; end: 106589193; -[SCChatInputTextViewListenerAnnouncer .cxx_destruct] */

void FUN_10658916c(long param_1)

{
  FUN_1065891c8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106589194; end: 1065891b3; -[SCChatInputTextViewListenerAnnouncer .cxx_construct] */

void FUN_106589194(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1065891b4; end: 1065891c7;  */

undefined * FUN_1065891b4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 1065891c8; end: 10658921f;  */

long FUN_1065891c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106589220; end: 10658922f;  */

void FUN_106589220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11092b3c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106589230; end: 10658924f;  */

void FUN_106589230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11092b3c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106589250; end: 1065892b7;  */

void FUN_106589250(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1065892b8; end: 1065892bb;  */

void FUN_1065892b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1065892bc; end: 1065894c3;  */

void FUN_1065892bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c6c20();
  func_0x0001070b5b08();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e54438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065894c4; end: 10658a287;  */

undefined1 *
FUN_1065894c4(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **unaff_x25;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuStack_2e0 = param_4;
  _objc_retain(param_4);
  ppuVar18 = param_1;
  func_0x00010bf66040();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  ppuStack_2c8 = ppuVar18;
  func_0x00010c25da60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar18 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_380 = ppuVar18;
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar18);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar18 = param_1;
  func_0x00010c074920();
  ppuStack_380 = &PTR____CFConstantStringClassReference_110db6ad8;
  if ((int)ppuVar18 == 0) {
    ppuStack_380 = &PTR____CFConstantStringClassReference_110db6af8;
  }
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar18 = param_1;
  func_0x00010bf50920();
  if ((long)ppuVar18 - 1U < 9) {
    ppuStack_380 = (undefined **)(&PTR_PTR_11092b438)[(long)ppuVar18 - 1U];
  }
  else {
    ppuStack_380 = &PTR____CFConstantStringClassReference_110dd32f8;
  }
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(puVar2);
  ppuVar18 = ppuStack_2e0;
  _objc_retain(ppuStack_2e0);
  ppuVar16 = ppuStack_2c8;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar16;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  ppuVar16 = ppuVar19;
  func_0x00010c08fa60();
  puStack_2e8 = puVar1;
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar18;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuStack_2e0;
    _objc_release(ppuVar3);
    puVar1 = puStack_2e8;
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar4;
  }
  uStack_2f0 = param_3;
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  ppuVar18 = ppuVar16;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  ppuVar16 = ppuVar18;
  func_0x00010c08fa60();
  if (ppuVar16 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_380 = ppuVar18;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(puVar1);
    _objc_release(puVar2);
  }
  ppuVar16 = param_1;
  ppuStack_300 = ppuVar18;
  func_0x00010c245de0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain();
  func_0x00010c25da60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar19 = ppuVar16;
  func_0x00010c089d60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = ppuVar16;
  func_0x00010c089d60(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_380 = ppuVar19;
  ppuStack_378 = ppuVar18;
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar18);
  _objc_release(ppuVar4);
  _objc_release(ppuVar19);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar19 = ppuVar16;
  func_0x00010c089d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_380 = ppuVar19;
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar19);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar19 = ppuVar16;
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  ppuStack_380 = ppuVar19;
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  puVar12 = puStack_2e8;
  _objc_release(puVar2);
  _objc_release(ppuVar19);
  func_0x00010bf070e0(puVar12);
  _objc_release(puVar1);
  _objc_release(ppuVar16);
  func_0x00010bf070e0(puVar12);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar19 = ppuStack_2c8;
  func_0x00010c0cb880();
  ppuVar16 = ppuStack_2e0;
  uVar10 = uStack_2f0;
  if ((long)ppuVar19 - 1U < 5) {
    ppuStack_380 = (undefined **)(&PTR_PTR_11092b480)[(long)ppuVar19 - 1U];
  }
  else {
    ppuStack_380 = &PTR____CFConstantStringClassReference_110e547d8;
  }
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar12);
  _objc_release(puVar2);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar19 = ppuStack_2c8;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar19;
  func_0x00010c2425e0();
  ppuStack_380 = &PTR____CFConstantStringClassReference_110e54638;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_380 = &PTR____CFConstantStringClassReference_110db9458;
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar12);
  _objc_release(ppuVar4);
  _objc_release(ppuVar19);
  func_0x00010bf070e0(puVar12);
  func_0x00010bf070e0(puVar12);
  func_0x00010bf070e0(puVar12);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  ppuVar3 = param_1;
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_180;
  uVar14 = 0x10;
  ppuStack_2d8 = ppuVar3;
  func_0x00010bf52a60();
  uVar15 = (undefined1)param_6;
  ppuStack_270 = ppuVar3;
  if (ppuVar3 != (undefined **)0x0) {
    lStack_278 = *plStack_220;
    uStack_2f8 = param_2;
    ppuStack_2d0 = param_1;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if (*plStack_220 != lStack_278) {
          _objc_enumerationMutation(ppuStack_2d8);
        }
        ppuVar4 = *(undefined ***)(lStack_228 + (long)ppuVar18 * 8);
        ppuStack_238 = ppuVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar3 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar19 = ppuVar4;
        if (((ulong)ppuVar3 & 1) == 0) {
          ppuVar19 = (undefined **)0x0;
        }
        _objc_retain(ppuVar19);
        _objc_release(ppuVar4);
        if (ppuVar19 != (undefined **)0x0) {
          ppuVar3 = ppuStack_2c8;
          ppuStack_248 = ppuVar19;
          func_0x00010c0cbb60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          if (unaff_x25 != (undefined **)0x0) {
            _objc_retain(param_1);
            _objc_retain(ppuStack_238);
            _objc_retain(unaff_x25);
            _objc_retain(param_2);
            _objc_retain(uVar10);
            ppuVar16 = unaff_x25;
            func_0x00010c07c1e0();
            ppuStack_288 = (undefined **)CONCAT44(ppuStack_288._4_4_,(int)ppuVar16);
            ppuVar16 = unaff_x25;
            func_0x00010c0cb8c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar16;
            func_0x00010c0720c0();
            if ((((ulong)ppuVar19 & 1) != 0) ||
               (ppuVar19 = ppuVar16, func_0x00010c0720c0(), (int)ppuVar19 != 0)) {
              _objc_release(ppuVar16);
              ppuVar16 = &PTR____CFConstantStringClassReference_110e54458;
            }
            ppuVar19 = unaff_x25;
            ppuStack_250 = ppuVar16;
            func_0x00010c07ea80();
            ppuStack_240 = &PTR____CFConstantStringClassReference_110daafd8;
            ppuStack_280 = ppuVar18;
            if ((int)ppuVar19 != 0) {
              ppuVar19 = unaff_x25;
              func_0x00010c0791e0();
              ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              ppuVar18 = &PTR____CFConstantStringClassReference_110db6ad8;
              if ((int)ppuVar19 == 0) {
                ppuVar18 = &PTR____CFConstantStringClassReference_110db6af8;
              }
              _objc_retain(ppuVar18);
              ppuVar19 = unaff_x25;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar19;
              func_0x00010c242620();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain();
              if (ppuVar4 == (undefined **)0x0) {
                ppuVar3 = &PTR____CFConstantStringClassReference_110e0a478;
              }
              else {
                ppuVar5 = ppuVar4;
                func_0x00010c067fc0();
                ppuVar3 = &PTR____CFConstantStringClassReference_110e54638;
                if (ppuVar5 != (undefined **)0x0) {
                  ppuVar3 = &PTR____CFConstantStringClassReference_110db9458;
                }
              }
              _objc_release(ppuVar4);
              ppuStack_380 = ppuVar18;
              ppuStack_378 = ppuVar3;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_240 = ppuVar16;
              _objc_release(ppuVar18);
              _objc_release(ppuVar4);
              _objc_release(ppuVar19);
              param_1 = ppuStack_2d0;
            }
            ppuVar18 = unaff_x25;
            func_0x00010c252440();
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuStack_290 = &PTR____CFConstantStringClassReference_110e54658;
            if ((long)ppuVar18 - 1U < 5) {
              ppuStack_290 = (undefined **)(&PTR_PTR_11092b4a8)[(long)ppuVar18 - 1U];
            }
            ppuVar18 = unaff_x25;
            func_0x00010c0ecae0();
            ppuStack_380 = ppuVar18;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = param_1;
            puStack_258 = puVar2;
            func_0x00010c074920();
            ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
            if ((int)ppuVar19 != 0) {
              func_0x00010bfce400(param_1);
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = param_1;
              func_0x00010c0ecc20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf529e0();
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar16;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_380 = ppuVar4;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar4);
              _objc_release(ppuVar16);
              _objc_release(ppuVar19);
              _objc_release(param_1);
              ppuVar4 = ppuVar18;
            }
            ppuVar18 = unaff_x25;
            ppuStack_260 = ppuVar4;
            func_0x00010c120dc0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1a0 = 0xc2000000;
            uStack_198 = 0x1065893c4;
            puStack_190 = &UNK_11092b408;
            _objc_retain(uVar10);
            ppuVar16 = ppuVar18;
            uStack_188 = uVar10;
            func_0x000100504554(ppuVar18,&puStack_1a8);
            ppuVar19 = ppuVar16;
            func_0x00010bf446e0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_268 = ppuVar19;
            _objc_release(ppuVar16);
            _objc_release(ppuVar18);
            puStack_2a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar18 = unaff_x25;
            func_0x00010bf4df40();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_298 = ppuVar18;
            func_0x000107d60b58();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = unaff_x25;
            ppuStack_2a8 = ppuVar18;
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = unaff_x25;
            ppuStack_2b0 = ppuVar16;
            func_0x00010bf026e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = unaff_x25;
            ppuStack_2c0 = ppuVar18;
            func_0x00010c07d080();
            ppuStack_2b8 = &PTR____CFConstantStringClassReference_110db6ad8;
            if ((int)ppuVar16 == 0) {
              ppuStack_2b8 = &PTR____CFConstantStringClassReference_110db6af8;
            }
            _objc_retain();
            ppuVar19 = unaff_x25;
            func_0x00010bf2c580();
            ppuVar16 = &PTR____CFConstantStringClassReference_110db6ad8;
            if ((int)ppuVar19 == 0) {
              ppuVar16 = &PTR____CFConstantStringClassReference_110db6af8;
            }
            ppuVar19 = &PTR____CFConstantStringClassReference_110db6ad8;
            if ((int)ppuStack_288 == 0) {
              ppuVar19 = &PTR____CFConstantStringClassReference_110db6af8;
            }
            _objc_retain(ppuVar19);
            _objc_retain(ppuVar16);
            ppuVar6 = unaff_x25;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar7 = unaff_x25;
            ppuStack_288 = ppuVar6;
            func_0x00010c0cb9a0(unaff_x25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f200();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuStack_238;
            func_0x00010c22f340();
            ppuVar5 = ppuStack_2a8;
            ppuVar3 = ppuStack_2b0;
            ppuVar4 = ppuStack_2b8;
            ppuStack_318 = &PTR____CFConstantStringClassReference_110db6ad8;
            if ((int)ppuVar8 == 0) {
              ppuStack_318 = &PTR____CFConstantStringClassReference_110db6af8;
            }
            ppuStack_310 = ppuStack_268;
            ppuStack_330 = ppuStack_240;
            ppuStack_348 = ppuStack_2b8;
            puStack_358 = puStack_258;
            ppuStack_350 = ppuStack_250;
            ppuStack_368 = ppuStack_290;
            ppuStack_378 = ppuStack_2a8;
            ppuStack_370 = ppuStack_2b0;
            ppuStack_380 = ppuStack_260;
            puVar1 = puStack_2a0;
            ppuStack_360 = ppuVar18;
            ppuStack_340 = ppuVar16;
            ppuStack_338 = ppuVar19;
            ppuStack_328 = ppuVar6;
            puStack_320 = puVar2;
            func_0x00010c14de00(puStack_2a0);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar1;
            func_0x00010c0d3c80();
            _objc_release(puVar1);
            _objc_release(ppuVar19);
            _objc_release(puVar2);
            _objc_release(ppuVar7);
            _objc_release(ppuStack_288);
            _objc_release(ppuVar16);
            _objc_release(ppuVar4);
            _objc_release(ppuStack_2c0);
            _objc_release(ppuVar3);
            _objc_release(ppuVar5);
            _objc_release(ppuStack_298);
            ppuVar18 = unaff_x25;
            func_0x00010c0c72c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar18;
            func_0x00010bf529e0();
            param_2 = uStack_2f8;
            if (ppuVar16 != (undefined **)0x0) {
              func_0x00010bf070e0(puVar9);
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              lStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              plStack_1e0 = (long *)0x0;
              _objc_retain(ppuVar18);
              ppuVar16 = ppuVar18;
              func_0x00010bf52a60();
              if (ppuVar16 != (undefined **)0x0) {
                lVar17 = *plStack_1e0;
                do {
                  ppuVar19 = (undefined **)0x0;
                  do {
                    if (*plStack_1e0 != lVar17) {
                      _objc_enumerationMutation(ppuVar18);
                    }
                    uVar10 = *(undefined8 *)(lStack_1e8 + (long)ppuVar19 * 8);
                    FUN_1065892bc(uVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf070e0(puVar9);
                    _objc_release(uVar10);
                    ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                  } while (ppuVar16 != ppuVar19);
                  ppuVar16 = ppuVar18;
                  func_0x00010bf52a60();
                } while (ppuVar16 != (undefined **)0x0);
              }
              _objc_release(ppuVar18);
            }
            ppuVar4 = unaff_x25;
            func_0x00010c131d80();
            _objc_retainAutoreleasedReturnValue();
            param_1 = ppuStack_2d0;
            if (ppuVar4 != (undefined **)0x0) {
              func_0x00010bf070e0(puVar9);
              ppuVar16 = ppuVar4;
              FUN_1065892bc(ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf070e0(puVar9);
              _objc_release(ppuVar16);
            }
            _objc_release(ppuVar4);
            _objc_release(ppuVar18);
            _objc_release(ppuStack_268);
            _objc_release(uStack_188);
            _objc_release(ppuStack_260);
            _objc_release(puStack_258);
            _objc_release(ppuStack_240);
            _objc_release(ppuStack_250);
            uVar10 = uStack_2f0;
            _objc_release(uStack_2f0);
            _objc_release(param_2);
            _objc_release(unaff_x25);
            _objc_release(ppuStack_238);
            _objc_release(param_1);
            puVar12 = puStack_2e8;
            func_0x00010bf070e0(puStack_2e8);
            func_0x00010bf070e0(puVar12);
            _objc_release(puVar9);
            ppuVar16 = ppuStack_2e0;
            ppuVar18 = ppuStack_280;
          }
          _objc_release(unaff_x25);
          ppuVar19 = ppuStack_248;
        }
        _objc_release(ppuVar19);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar18 != ppuStack_270);
      puVar13 = auStack_180;
      uVar14 = 0x10;
      ppuVar3 = ppuStack_2d8;
      func_0x00010bf52a60();
      uVar15 = (undefined1)param_6;
      ppuStack_270 = ppuVar3;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuStack_2d8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dfce78;
  func_0x00010bf070e0(puVar12);
  _objc_release(ppuStack_300);
  _objc_release(ppuStack_2c8);
  _objc_release(ppuVar16);
  _objc_release(uVar10);
  _objc_release(param_2);
  ppuVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pppuVar11 = &ppuStack_3e0;
    pcStack_388 = FUN_10658a288;
    ppuStack_3d0 = param_1;
    ppuStack_3c8 = unaff_x25;
    uStack_3c0 = uVar10;
    ppuStack_3b8 = ppuVar18;
    ppuStack_3b0 = ppuVar16;
    puStack_3a8 = puVar12;
    ppuStack_3a0 = ppuVar19;
    ppuStack_398 = ppuVar4;
    puStack_390 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    _objc_retain(puVar13);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puStack_3d8 = PTR_PTR_1126f1c40;
    ppuStack_3e0 = ppuVar5;
    _objc_msgSendSuper2(&ppuStack_3e0,PTR_s_init_1125d9248);
    if (pppuVar11 != (undefined ***)0x0) {
      _objc_retain(ppuVar3);
      uVar10 = *(undefined8 *)((long)pppuVar11 + 0x10);
      *(undefined ***)((long)pppuVar11 + 0x10) = ppuVar3;
      _objc_release(uVar10);
      _objc_retain(puVar13);
      uVar10 = *(undefined8 *)((long)pppuVar11 + 0x18);
      *(undefined1 **)((long)pppuVar11 + 0x18) = puVar13;
      _objc_release(uVar10);
      *(undefined1 *)((long)pppuVar11 + 8) = uVar14;
      *(undefined1 *)((long)pppuVar11 + 9) = uVar15;
      _objc_storeWeak((undefined1 *)((long)pppuVar11 + 0x20),param_7);
      _objc_retain(param_8);
      uVar10 = *(undefined8 *)((long)pppuVar11 + 0x28);
      *(undefined8 *)((long)pppuVar11 + 0x28) = param_8;
      _objc_release(uVar10);
    }
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puVar13);
    _objc_release(ppuVar3);
    return (undefined1 *)pppuVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 10658a288; end: 10658a393; -[SCChatEraseMessageScope initWithMessageId:conversationId:isGroupConversation:isSnap:delegate:uiContainer:] */

undefined1 *
FUN_10658a288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1c40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10658a394; end: 10658a39b; -[SCChatEraseMessageScope messageId] */

undefined8 FUN_10658a394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10658a39c; end: 10658a3cb; -[SCChatEraseMessageScope setMessageId:] */

void FUN_10658a39c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10658a3cc; end: 10658a3d3; -[SCChatEraseMessageScope conversationId] */

undefined8 FUN_10658a3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10658a3d4; end: 10658a403; -[SCChatEraseMessageScope setConversationId:] */

void FUN_10658a3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10658a404; end: 10658a40b; -[SCChatEraseMessageScope isGroupConversation] */

undefined1 FUN_10658a404(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10658a40c; end: 10658a413; -[SCChatEraseMessageScope setIsGroupConversation:] */

void FUN_10658a40c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10658a414; end: 10658a41b; -[SCChatEraseMessageScope isSnap] */

undefined1 FUN_10658a414(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10658a41c; end: 10658a423; -[SCChatEraseMessageScope setIsSnap:] */

void FUN_10658a41c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10658a424; end: 10658a43b; -[SCChatEraseMessageScope delegate] */

void FUN_10658a424(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10658a43c; end: 10658a447; -[SCChatEraseMessageScope setDelegate:] */

void FUN_10658a43c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10658a448; end: 10658a44f; -[SCChatEraseMessageScope uiContainer] */

undefined8 FUN_10658a448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10658a450; end: 10658a47f; -[SCChatEraseMessageScope setUiContainer:] */

void FUN_10658a450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10658a480; end: 10658a4c3; -[SCChatEraseMessageScope .cxx_destruct] */

void FUN_10658a480(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10658a4c4; end: 10658a523;  */

void FUN_10658a4c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e54898;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e54898,
                      &PTR____CFConstantStringClassReference_110e548b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10658a524; end: 10658a62f;  */

void FUN_10658a524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10658a630;
    uStack_40 = 0x10658a640;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c11e0();
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10658a630; end: 10658a647;  */

void FUN_10658a630(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10658a648; end: 10658a67f;  */

void FUN_10658a648(long param_1,undefined8 param_2)

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



/* Entry: 10658a680; end: 10658a683;  */

void FUN_10658a680(void)

{
  return;
}



/* Entry: 10658a684; end: 10658aaf7; -[SCSnapRadialAnimationLayer initWithBounds:color:percentCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10658a684(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  _objc_retain(param_8);
  puStack_a8 = PTR_PTR_1126f1c48;
  puVar1 = &uStack_b0;
  uStack_b0 = param_6;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1739e0(param_1,param_2,param_3,param_4,puVar1);
    dVar13 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar9 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar11 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar11 = dVar13 * 0.5 + dVar11;
    dVar12 = dVar9 * 0.5 + dVar12;
    func_0x00010c1dee80(dVar11,dVar12,puVar1);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274ab64;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_retainAutorelease(param_8);
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1dee80(dVar11,dVar12,*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar10 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar10 * 0.15,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdca0();
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1739e0(param_1,param_2,param_3,param_4,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb20(puVar1);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11274ab68;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    func_0x00010c1739e0(param_1,param_2,param_3,param_4,*(undefined8 *)((long)puVar1 + lVar8));
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1dee80(dVar11,dVar12,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1bdd00(dVar13 * 0.1,*(undefined8 *)((long)puVar1 + lVar8));
    _objc_retainAutorelease(param_8);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb20(puVar1);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    dVar13 = (double)SQRT((float)(dVar13 * dVar13 + dVar9 * dVar9));
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19960(dVar11,dVar12,dVar13 * 0.5,0x4012d97c7f3321d2,
                        (param_5 * 360.0 * 3.141592653589793) / 180.0 + -1.5707963267948966,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar3);
    _objc_release(puVar5);
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar3);
    func_0x00010c1739e0(param_1,param_2,param_3,param_4,puVar3);
    func_0x00010c1dee80(dVar11,dVar12,puVar3);
    func_0x00010c1bdd00(dVar13,puVar3);
    func_0x00010c1c2c00(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 10658aaf8; end: 10658ab03; -[SCSnapRadialAnimationLayer animateRadialWipe:completion:] */

void FUN_10658aaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateFill_duration_completion_1125504a8,0,param_3);
  return;
}



/* Entry: 10658ab04; end: 10658ab0f; -[SCSnapRadialAnimationLayer animateRadialFill:completion:] */

void FUN_10658ab04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateFill_duration_completion_1125504a8,1,param_3);
  return;
}



/* Entry: 10658ab10; end: 10658ac9b; -[SCSnapRadialAnimationLayer _animateFill:duration:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658ab10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_1);
  func_0x00010c1a1180(puVar2);
  func_0x00010c216920(puVar2);
  _objc_initWeak(auStack_58,param_2);
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x00010c17fb40(puVar1);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11274ab64);
  func_0x00010c0bc120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10658ac9c; end: 10658accf;  */

void FUN_10658ac9c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde28a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658acd0; end: 10658ad13; -[SCSnapRadialAnimationLayer _completeAnimation:] */

void FUN_10658acd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c12c940(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10658ad14; end: 10658ad5f; -[SCSnapRadialAnimationLayer pauseAnimation] */

void FUN_10658ad14(undefined8 param_1,undefined8 param_2)

{
  _CACurrentMediaTime();
  func_0x00010bf514c0(param_2);
  func_0x00010c207c40(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c214e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setTimeOffset__112662db8);
  return;
}



/* Entry: 10658ad60; end: 10658adc7; -[SCSnapRadialAnimationLayer resumeAnimation] */

/* WARNING: Possible PIC construction at 0x00010658ad9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010658ada0) */

void FUN_10658ad60(undefined8 param_1)

{
  func_0x00010c26f540();
  func_0x00010c207c40(0x3f800000,param_1);
  func_0x00010c214e40(0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setBeginTime__112639970);
  return;
}



/* Entry: 10658adc8; end: 10658ae07; -[SCSnapRadialAnimationLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658adc8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ab64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ab68,0);
  return;
}



/* Entry: 10658ae08; end: 10658ae17; -[SCCStreakRestoreStreakRestorePromoType__Enum init] */

void FUN_10658ae08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x113153350,2);
  return;
}



/* Entry: 10658ae18; end: 10658ae1f; -[SCCStreakRestoreStreakRestoreSource__Enum init] */

void FUN_10658ae18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10658ae20; end: 10658ae47; -[SCCStreakRestoreBulkConversationProductFetchResult initWithProduct:streaks:] */

void FUN_10658ae20(void)

{
  func_0x00010658b490(PTR_PTR_1126f1c50);
  func_0x00010658b45c();
  return;
}



/* Entry: 10658ae48; end: 10658ae5b; +[SCCStreakRestoreBulkConversationProductFetchResult valdiMarshallableObjectDescriptor] */

void FUN_10658ae48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092b4f0;
  param_1[1] = &PTR_DAT_11092b538;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658ae5c; end: 10658ae7f; -[SCCStreakRestoreBulkConversationStreakRestoreStreak initWithConversationMetadata:restorableStreakMetadata:price:] */

void FUN_10658ae5c(void)

{
  func_0x00010658b4a0(PTR_PTR_1126f1c58);
  func_0x00010658b47c();
  return;
}



/* Entry: 10658ae80; end: 10658ae93; +[SCCStreakRestoreBulkConversationStreakRestoreStreak valdiMarshallableObjectDescriptor] */

void FUN_10658ae80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092b550;
  param_1[1] = &PTR_DAT_11092b5b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658ae94; end: 10658aebb; -[SCCStreakRestoreBulkProductFetchResult initWithProduct:streaks:] */

void FUN_10658ae94(void)

{
  func_0x00010658b490(PTR_PTR_1126f1c60);
  func_0x00010658b45c();
  return;
}



/* Entry: 10658aebc; end: 10658aecf; +[SCCStreakRestoreBulkProductFetchResult valdiMarshallableObjectDescriptor] */

void FUN_10658aebc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092b5d0;
  param_1[1] = &PTR_DAT_11092b618;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658aed0; end: 10658aef3; -[SCCStreakRestoreBulkStreakRestoreStreak initWithUser:restorableStreakMetadata:price:] */

void FUN_10658aed0(void)

{
  func_0x00010658b4a0(PTR_PTR_1126f1c68);
  func_0x00010658b47c();
  return;
}



/* Entry: 10658aef4; end: 10658af07; +[SCCStreakRestoreBulkStreakRestoreStreak valdiMarshallableObjectDescriptor] */

void FUN_10658aef4(undefined8 *param_1)

{
  *param_1 = &PTR_s_user_11092b630;
  param_1[1] = &PTR_DAT_11092b690;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658af08; end: 10658af2f; -[SCCStreakRestoreConversationMetadataFetchResult initWithConversationMetadata:] */

void FUN_10658af08(void)

{
  func_0x00010658b490(PTR_PTR_1126f1c70);
  func_0x00010658b45c();
  return;
}



/* Entry: 10658af30; end: 10658af43; +[SCCStreakRestoreConversationMetadataFetchResult valdiMarshallableObjectDescriptor] */

void FUN_10658af30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092b6b0;
  param_1[1] = &PTR_DAT_11092b6f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658af44; end: 10658af83; -[SCCStreakRestoreConversationRestorePageContext initWithNavigator:blizzardLogger:loggingContext:alertPresenter:streakRestoreService:actionHandler:streakEmoji:] */

void FUN_10658af44(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010658b4e4(in_stack_00000000);
  func_0x00010658b47c();
  return;
}



/* Entry: 10658af84; end: 10658af97; +[SCCStreakRestoreConversationRestorePageContext valdiMarshallableObjectDescriptor] */

void FUN_10658af84(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_11092b710;
  param_1[1] = &PTR_s_SCValdiINavigator_11092b830;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658af98; end: 10658afbb; -[SCCStreakRestoreConversationRestorePageViewModel init] */

void FUN_10658af98(void)

{
  func_0x00010658b4d0(PTR_PTR_1126f1c80);
  return;
}



/* Entry: 10658afbc; end: 10658afcf; +[SCCStreakRestoreConversationRestorePageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10658afbc(undefined8 *param_1)

{
  *param_1 = &PTR_s_source_11092b888;
  param_1[1] = &PTR_DAT_11092b8b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658afd0; end: 10658aff7; -[SCCStreakRestoreMetadataFetchResult initWithUser:] */

void FUN_10658afd0(void)

{
  func_0x00010658b490(PTR_PTR_1126f1c88);
  func_0x00010658b45c();
  return;
}



/* Entry: 10658aff8; end: 10658b00b; +[SCCStreakRestoreMetadataFetchResult valdiMarshallableObjectDescriptor] */

void FUN_10658aff8(undefined8 *param_1)

{
  *param_1 = &PTR_s_user_11092b8c8;
  param_1[1] = &PTR_DAT_11092b910;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658b00c; end: 10658b047; -[SCCStreakRestoreProductFetchResult initWithProduct:freeRestoresLeft:] */

void FUN_10658b00c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010658b4a0(PTR_PTR_1126f1c90);
  func_0x00010658b4b8(auStack_20);
  return;
}



/* Entry: 10658b048; end: 10658b05b; +[SCCStreakRestoreProductFetchResult valdiMarshallableObjectDescriptor] */

void FUN_10658b048(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092b928;
  param_1[1] = &PTR_DAT_11092b9b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658b05c; end: 10658b097; -[SCCStreakRestorePromotionalRestoreTrayContext initWithNavigator:blizzardLogger:loggingContext:alertPresenter:streakEmoji:cofStore:service:userProvider:supStore:] */

void FUN_10658b05c(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010658b4e4(in_stack_00000010);
  func_0x00010658b468();
  return;
}



/* Entry: 10658b098; end: 10658b0ab; +[SCCStreakRestorePromotionalRestoreTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10658b098(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_11092b9c8;
  param_1[1] = &PTR_s_SCValdiINavigator_11092bab8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10658b0ac; end: 10658b0cb; -[SCCStreakRestorePromotionalRestoreTrayViewModel initWithPromotionType:] */

void FUN_10658b0ac(void)

{
  func_0x00010658b440(PTR_PTR_1126f1ca0);
  return;
}


