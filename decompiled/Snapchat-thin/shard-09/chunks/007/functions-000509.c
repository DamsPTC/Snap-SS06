/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107131260; end: 1071313db;  */

void FUN_107131260(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x0001070c53c8();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c292d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c960(lVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071313dc; end: 1071314ff;  */

void FUN_1071313dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e8660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107131500; end: 107131543; -[PreviewViewController features_DEPRECATED] */

void FUN_107131500(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c476c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107131544; end: 107131573; -[PreviewViewController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107131544(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644a8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107131574; end: 10713165f; -[PreviewViewController setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107131574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127644a8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107131660;
  puStack_50 = &UNK_11098fc28;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(param_3);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_didChangeState_oldSta_11266dbc0,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107131660; end: 10713166f;  */

void FUN_107131660(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_didChangeState_oldSta_11266dbc0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107131670; end: 1071316d3; -[PreviewViewController isVisible] */

bool FUN_107131670(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c10fc80();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1071316d4; end: 1071316d7; -[PreviewViewController updateAudioFunctionality] */

void FUN_1071316d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateAudioFunctionalityEnabled_11267e848);
  return;
}



/* Entry: 1071316d8; end: 1071316db; -[PreviewViewController exitPreviewWithExitType:] */

void FUN_1071316d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitPreviewWithExitType__112560a10);
  return;
}



/* Entry: 1071316dc; end: 10713185b; -[PreviewViewController openSnapEditorWithPreselectedPluginType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071316dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127644ac;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c27aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c200a80(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c1e0ba0(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c245f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 != 0) && (lVar3 != 0)) {
      func_0x00010bf20c00(lVar3);
      func_0x00010c19f0e0(lVar2);
      func_0x00010befbb60(lVar3,param_2,lVar2);
      func_0x00010c219a40(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    }
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a040();
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar1);
    func_0x00010be0c1c0(param_1,param_2,6);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10713185c; end: 1071318ab;  */

void FUN_10713185c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cea50;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1937e0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071318ac; end: 1071319e7; -[PreviewViewController _iterateListenersRespondingToSelector:withBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071318ac(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_4);
  if (param_4 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar6 = *(long *)(param_1 + _DAT_112764470);
    _objc_retain(lVar6);
    lVar1 = lVar6;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar8 = *plStack_110;
      do {
        lVar9 = 0;
        do {
          if (*plStack_110 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          uVar7 = *(ulong *)(lStack_118 + lVar9 * 8);
          uVar2 = uVar7;
          _objc_opt_respondsToSelector(uVar7,param_3);
          if ((uVar2 & 1) != 0) {
            (**(code **)(param_4 + 0x10))(param_4,uVar7);
          }
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = lVar6;
        puVar5 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar6);
    puVar4 = (undefined1 *)puVar5;
  }
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_170;
  pcStack_128 = FUN_1071319e8;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107131a64;
  puStack_158 = &UNK_11098fc78;
  lStack_150 = lVar1;
  puStack_148 = puVar4;
  puStack_140 = param_3;
  lStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retainBlock(&puStack_170);
  func_0x00010be462e0(lVar1);
  _objc_release(ppuVar3);
  return;
}



/* Entry: 1071319e8; end: 107131a63; -[PreviewViewController _notifyListenersOfExport:] */

void FUN_1071319e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107131a64;
  puStack_38 = &UNK_11098fc78;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock(&puStack_50);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_didInitiateExportWith_11266dbd8,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107131a64; end: 107131a6f;  */

void FUN_107131a64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2406d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_didInitiateExportWith_11266dbd8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107131a70; end: 107131b73; -[PreviewViewController _notifyListenersToUpdateLogging] */

void FUN_107131a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_70;
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107131b74;
  puStack_58 = &UNK_11098fca8;
  uStack_50 = param_1;
  uStack_48 = uVar5;
  _objc_retainBlock(&puStack_70);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_updateLoggingWithBuil_11266dbf0,ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(uVar5);
  return;
}



/* Entry: 107131b74; end: 107131b7f;  */

void FUN_107131b74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_updateLoggingWithBuil_11266dbf0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107131b80; end: 107131bfb; -[PreviewViewController _notifyListenersWillStartSending] */

void FUN_107131b80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107131bfc;
  puStack_30 = &UNK_11098e348;
  ppuVar1 = &puStack_48;
  uStack_28 = param_1;
  _objc_retainBlock(ppuVar1);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditorWillStartSending__11266ddd0,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107131bfc; end: 107131c07;  */

void FUN_107131bfc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditorWillStartSending__11266ddd0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107131c08; end: 107131c83; -[PreviewViewController _notifyListenersOfDiscard] */

void FUN_107131c08(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107131c84;
  puStack_30 = &UNK_11098e348;
  ppuVar1 = &puStack_48;
  uStack_28 = param_1;
  _objc_retainBlock(ppuVar1);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditorWillDiscard__11266ddc0,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107131c84; end: 107131c8f;  */

void FUN_107131c84(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditorWillDiscard__11266ddc0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107131c90; end: 107131d0b; -[PreviewViewController _notifyListenersOfTriggeredLifecycle:] */

void FUN_107131c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107131d0c;
  puStack_38 = &UNK_11098fc78;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retainBlock(&puStack_50);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_didTriggerLifecycle__11266dbe8,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107131d0c; end: 107131d17;  */

void FUN_107131d0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_didTriggerLifecycle__11266dbe8,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107131d18; end: 107131d9f; -[PreviewViewController prepareEphemeralMediaListForSaving:] */

void FUN_107131d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109380();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107131da0; end: 107131da7; -[PreviewViewController didInitiateSending] */

void FUN_107131da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersOfExport__112576cc0,1);
  return;
}



/* Entry: 107131da8; end: 107131dab; -[PreviewViewController updateLoggingParams] */

void FUN_107131da8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersToUpdateLogging_112576cd8);
  return;
}



/* Entry: 107131dac; end: 107131fe3; -[PreviewViewController previewPresentationAnimationDidFinish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107131dac(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c09b840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acbc0();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar7 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c075080();
  lVar6 = *(long *)(param_1 + lVar7);
  if (iVar1 == 0) {
    func_0x00010c2295e0(param_1);
    lVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2525a0();
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar5 == 1) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112764474);
      func_0x00010bfaeca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beefbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  else {
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupWithFullscreenImage_112589f70);
      return;
    }
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfbbbe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_50;
    _objc_copyWeak(puVar4,auStack_48);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107131fe4; end: 107132047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107131fe4(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c1a1640(*(undefined8 *)(param_1 + _DAT_1127644ac));
    func_0x00010beb1720(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107132048; end: 10713210b; -[PreviewViewController _snapshotView:] */

void FUN_107132048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010bf20c00(param_3);
  func_0x00010bff9500(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10713210c;
  puStack_40 = &UNK_11086bc40;
  uStack_38 = param_3;
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10713210c; end: 107132137;  */

void FUN_10713210c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf20c00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,0);
  return;
}



/* Entry: 107132138; end: 1071321bb; -[PreviewViewController _shouldFreezeViewFinderOnCapture] */

undefined8 FUN_107132138(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1071321bc; end: 10713223f; -[PreviewViewController _shouldUsePreviewSentinel] */

undefined8 FUN_1071321bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107132240; end: 10713259b; -[PreviewViewController _displayFullscreenImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107132240(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar3 = param_1;
  func_0x00010c27acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010010fab4();
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010beb3e20();
  if ((int)lVar3 == 0) {
    func_0x00010be8ce20(param_1);
    lVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5edc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010be3f4e0(param_1);
    func_0x00010c219ae0(*(undefined8 *)(param_1 + _DAT_1127644f0));
  }
  else {
    lVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5edc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010be3f4e0(param_1);
    func_0x00010c219ae0(*(undefined8 *)(param_1 + _DAT_1127644f0));
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10713259c;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010bf03420(0x3fc999999999999a,puVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar4);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c111920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ddb60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2000();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c09b840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acbe0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afbc0();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c06c6e0();
  if ((int)lVar3 != 0) {
    func_0x00010c138400(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10713259c; end: 107132607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713259c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)(param_1 + _DAT_1127644f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107132608; end: 10713270b; -[PreviewViewController _setupWithFullscreenImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107132608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c2295e0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127644ac));
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10713270c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10713270c; end: 10713273f;  */

void FUN_10713270c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4dc60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107132740; end: 107132783; -[PreviewViewController _removePlaceholderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107132740(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127644f4;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107132784; end: 107132d0b; -[PreviewViewController _loadLazyResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107132784(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + _DAT_1127644f8) & 1) != 0) goto LAB_107132cc8;
  *(undefined1 *)(param_1 + _DAT_1127644f8) = 1;
  lVar3 = param_1;
  func_0x00010be3f8a0();
  if ((int)lVar3 != 0) {
    func_0x00010beaa720(param_1);
  }
  lVar1 = param_1;
  func_0x00010c240aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar8 = PTR_s_activate_112599760;
  while (PTR_s_activate_112599760 = puVar8, lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar1);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      uVar2 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar8);
      if ((uVar2 & 1) != 0) {
        func_0x00010beef6e0(uVar10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    puVar8 = PTR_s_activate_112599760;
  }
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010c10aac0();
  if (lVar3 != 0 && lVar3 != 0xe) {
    func_0x00010c2738a0(param_1);
  }
  func_0x00010bec2400(param_1);
  func_0x00010be91c00(param_1);
  lVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar1 == 0) {
    func_0x00010c1087c0(param_1);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127644b0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2440(uVar5);
    _objc_release(lVar3);
    _objc_release(uVar5);
    lVar3 = param_1;
    func_0x00010c111c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c3400;
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127644c8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127644b4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c15bd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c15ba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76bc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    lVar4 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(puVar8);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c07e680();
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1087a0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  unaff_x20 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  unaff_x21 = unaff_x20;
  func_0x0001070c51ac();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x21;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f440();
  _objc_release(lVar3);
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  if ((int)lVar4 == 0) goto LAB_107132ca0;
  lVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c090540();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c5ee4();
  _objc_retainAutoreleasedReturnValue();
  unaff_x20 = lVar4;
  func_0x00010bf234e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  unaff_x21 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x21 == 0) goto LAB_107132d04;
  uVar5 = *(undefined8 *)(unaff_x21 + _DAT_1127641d4);
  while( true ) {
    _objc_retain(uVar5);
    func_0x00010bf9d620(uVar5);
    _objc_release(uVar5);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
LAB_107132ca0:
    lVar3 = param_1;
    func_0x00010beb5060();
    if ((int)lVar3 != 0) {
      func_0x00010be7fb20(param_1);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_11276448c));
    unaff_x19 = param_1;
LAB_107132cc8:
    param_1 = unaff_x19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) break;
    ___stack_chk_fail();
LAB_107132d04:
    uVar5 = 0;
  }
  return;
}



/* Entry: 107132d0c; end: 107132f2b; -[PreviewViewController _preuploadMedia] */

void FUN_107132d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  func_0x00010c111a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aba0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bdd6860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064a40();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1093a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c078080();
  if ((int)uVar4 == 0) {
    uVar4 = param_1;
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109ac0(param_1,param_2,uVar6,0,uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c109ac0(param_1,param_2,0,0,uVar2);
  }
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b38a0();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d4c68;
  uVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c242400();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c083340();
  func_0x00010c0a48c0(puVar1,param_2,uVar4,uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107132f2c; end: 10713308f; -[PreviewViewController _buildPreuploadMediaDestinationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107132f2c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uStack_128;
  undefined *puStack_120;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  long lStack_c8;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = (long)_DAT_1127644ac;
  uVar1 = *(ulong *)(param_1 + lVar27);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4288;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010c1322c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f228(puVar2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c077de0();
    if ((uVar3 & 1) == 0) {
      uVar26 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010bfbacc0();
    }
    func_0x00010b68f26c(puVar2,uVar26);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar2;
  func_0x00010b68f1bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_128;
  func_0x00010c06ba20();
  _objc_release();
  if ((int)uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c24b740();
    _objc_retainAutoreleasedReturnValue();
    if (uVar10 == 0) {
      uVar11 = uVar1;
      func_0x00010bf46560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = uVar1;
      func_0x00010bebee00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
    }
    else {
      _objc_retain(uVar10);
      uStack_128 = uVar10;
    }
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (uVar5 == 0) {
      puStack_120 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126bb878;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar3 = uVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf93480();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar1;
      func_0x00010bf46560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c09a760();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c0d3a80();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290120();
      func_0x00010c054bc0();
      puStack_120 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar12);
      _objc_release(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_d8,uVar1);
    uVar3 = uVar1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010befb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf46560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c096b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar1;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_d8);
    func_0x00010c108f80(uVar6);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar1);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puStack_120);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume();
  lVar25 = uStack_128 + 0x20;
  _objc_loadWeakRetained();
  if (lVar25 != 0) {
    lVar27 = lVar25;
    func_0x00010bfa3600(lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar27;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar25;
    func_0x00010bfa3600(lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2291e0(lVar20);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar27);
    lVar27 = lVar25;
    func_0x00010bfa3600(lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar27;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240620();
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar27);
    lVar27 = lVar25;
    func_0x00010bfa3600(lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar27;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar25;
    func_0x00010bfa3600(lVar25);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(lVar20);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar27);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar25);
  return;
}



/* Entry: 107133090; end: 107133643; -[PreviewViewController _setupAddSnap] */

void FUN_107133090(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_c8;
  func_0x00010c06ba20();
  _objc_release();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c24b740();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      lVar8 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lStack_c8 = param_1;
      func_0x00010bebee00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
    }
    else {
      _objc_retain(lVar7);
      lStack_c8 = lVar7;
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puStack_c0 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126bb878;
      _objc_alloc();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c0df880();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf93480();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c09a760();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar8;
      func_0x00010c0d3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290120();
      func_0x00010c054bc0();
      puStack_c0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar9;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_initWeak(auStack_78,param_1);
    lVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010befb5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c096b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c108f80(lVar3);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(param_1);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puStack_c0);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lStack_c8 = lStack_c8 + 0x20;
  _objc_loadWeakRetained();
  if (lStack_c8 != 0) {
    lVar1 = lStack_c8;
    func_0x00010bfa3600(lStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_c8;
    func_0x00010bfa3600(lStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2291e0(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lStack_c8;
    func_0x00010bfa3600(lStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lStack_c8;
    func_0x00010bfa3600(lStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_c8;
    func_0x00010bfa3600(lStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lStack_c8);
  return;
}



/* Entry: 107133644; end: 107133853;  */

void FUN_107133644(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2291e0(lVar3,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(lVar3,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107133854; end: 107133867; -[PreviewViewController setWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107133854(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127644fc,param_3);
  return;
}



/* Entry: 107133868; end: 107133a1b; -[PreviewViewController willResignActive] */

void FUN_107133868(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c15d920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar2 == lVar4) goto LAB_1071339f8;
  }
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29f360();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc12c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3320();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3300();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1071339f8:
  func_0x00010be954c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be64cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersOfTriggeredLifec_112576cd0,6)
  ;
  return;
}



/* Entry: 107133a1c; end: 107133c13; -[PreviewViewController didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107133a1c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_107133aa4:
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29f420();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c15d920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar3 != uVar5) goto LAB_107133aa4;
  }
  func_0x00010bef7be0(param_1);
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06ff20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c083340();
  if ((iVar1 != 0) && ((uVar5 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c070a20();
    if (iVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c100380();
      _objc_release(uVar2);
      if (uVar3 != 2) goto LAB_107133bf0;
    }
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
LAB_107133bf0:
  func_0x00010c13d4e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be64cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersOfTriggeredLifec_112576cd0,5)
  ;
  return;
}



/* Entry: 107133c14; end: 107133ca7; -[PreviewViewController _didReceiveMediaServicesWereResetNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107133c14(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c29ae80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52240();
    func_0x00010c221d20(*(undefined8 *)(param_1 + lVar4));
    _objc_release(uVar3);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + _DAT_112764500) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c23ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showVideoIfNecessary_11266c538);
    return;
  }
  return;
}



/* Entry: 107133ca8; end: 107133cf3; -[PreviewViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107133ca8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010c243400();
  if (lVar1 == 7) {
    return 0x7f;
  }
  _objc_opt_class(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 107133cf4; end: 107133cfb; +[PreviewViewController pageViewName] */

undefined8 FUN_107133cf4(void)

{
  return 0xce;
}



/* Entry: 107133cfc; end: 107133cff; -[PreviewViewController cancelPreviewWithExitType:] */

void FUN_107133cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitPreviewWithExitType__112560a10);
  return;
}



/* Entry: 107133d00; end: 107133ec7; -[PreviewViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107133d00(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010be4ee80(param_1);
  lVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_1070c4ee8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c231a80();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a98e0();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1a20();
    _objc_release(lVar2);
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107133ec8; end: 10713582b; -[PreviewViewController _loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107133ec8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined **param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  undefined **ppuVar45;
  undefined **ppuVar46;
  undefined **ppuVar47;
  undefined **ppuVar48;
  undefined **ppuVar49;
  undefined **ppuVar50;
  undefined **ppuVar51;
  undefined **ppuVar52;
  undefined **ppuVar53;
  undefined **ppuVar54;
  undefined **ppuVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  ulong uVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  long lVar63;
  undefined8 uVar64;
  long lVar65;
  long lVar66;
  undefined **ppuVar67;
  long lVar68;
  undefined *puVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [136];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar71 = param_3;
  dVar73 = param_4;
  func_0x000100841590(param_3,param_4);
  dVar70 = param_3;
  dVar76 = param_4;
  dVar72 = dVar71;
  dVar77 = dVar73;
  _objc_release(puVar2);
  lVar63 = (long)_DAT_1127644ac;
  uVar3 = *(ulong *)((long)param_5 + lVar63);
  func_0x00010c070a20();
  if (((uVar3 & 1) == 0) &&
     (puVar4 = PTR_PTR_1126b9e78, func_0x00010c072be0(), puVar2 = PTR_PTR_1126b9e78,
     (int)puVar4 != 0)) {
    func_0x00010c11cac0(param_5);
    func_0x00010c0c2620(puVar2);
    dVar74 = dVar70;
    dVar75 = dVar76;
    dVar76 = dVar72;
  }
  else {
    func_0x00010c11cac0(param_5);
    func_0x00010be5e420(param_5);
    dVar74 = param_3 + dVar76;
    dVar75 = param_4 + dVar70;
    dVar76 = dVar71 - (dVar76 + dVar77);
    dVar77 = dVar73 - (dVar70 + dVar72);
  }
  puVar2 = PTR_PTR_1126c4a40;
  _objc_alloc();
  puVar4 = PTR_PTR_1126d4d40;
  _objc_alloc();
  ppuVar67 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar67;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe5c0();
  ppuVar7 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x0001070c5218();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x0001070c5a40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x0001070c5da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c11a940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar17;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar21;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar23;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar27 = ppuVar26;
  func_0x0001070c5164();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar29 = ppuVar28;
  func_0x0001070c5d58();
  _objc_retainAutoreleasedReturnValue();
  ppuVar30 = ppuVar29;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar31;
  func_0x0001070c5d58();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar32;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2fb20();
  ppuVar34 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar35 = ppuVar34;
  func_0x0001070c5de8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar36 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar36;
  func_0x0001070c46dc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar38 = ppuVar37;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar39 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar40 = ppuVar39;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  ppuVar41 = ppuVar40;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar42 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar43 = ppuVar42;
  func_0x0001070c5d7c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar44 = ppuVar43;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar45 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar46 = ppuVar45;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar47 = ppuVar46;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar48 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar49 = ppuVar48;
  func_0x0001070c5f2c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar50 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar51 = ppuVar50;
  func_0x0001070c488c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar52 = ppuVar51;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar53 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar54 = ppuVar53;
  func_0x0001070c5794();
  _objc_retainAutoreleasedReturnValue();
  ppuVar55 = ppuVar54;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014120(param_3,param_4,dVar71,dVar73,dVar74,dVar75,dVar76,dVar77);
  lVar65 = (long)_DAT_1127644f0;
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  *(undefined **)((long)param_5 + lVar65) = puVar2;
  _objc_release(uVar64);
  _objc_release(ppuVar55);
  _objc_release(ppuVar54);
  _objc_release(ppuVar53);
  _objc_release(ppuVar52);
  _objc_release(ppuVar51);
  _objc_release(ppuVar50);
  _objc_release(ppuVar49);
  _objc_release(ppuVar48);
  _objc_release(ppuVar47);
  _objc_release(ppuVar46);
  _objc_release(ppuVar45);
  _objc_release(ppuVar44);
  _objc_release(ppuVar43);
  _objc_release(ppuVar42);
  _objc_release(ppuVar41);
  _objc_release(ppuVar40);
  _objc_release(ppuVar39);
  _objc_release(ppuVar38);
  _objc_release(ppuVar37);
  _objc_release(ppuVar36);
  _objc_release(ppuVar35);
  _objc_release(ppuVar34);
  _objc_release(ppuVar33);
  _objc_release(ppuVar32);
  _objc_release(ppuVar31);
  _objc_release(ppuVar30);
  _objc_release(ppuVar29);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar4);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar67);
  _objc_initWeak(auStack_138,param_5);
  lVar68 = (long)_DAT_112764494;
  uVar56 = *(undefined8 *)((long)param_5 + lVar68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar56;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = uVar57;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar58;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_10713582c;
  puStack_148 = &UNK_1108d8b90;
  _objc_copyWeak(auStack_140,auStack_138);
  uVar64 = uVar59;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar64);
  _objc_release(uVar59);
  _objc_release(puVar2);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  uVar56 = *(undefined8 *)((long)param_5 + lVar68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar56;
  func_0x00010bf13c20();
  _objc_retainAutoreleasedReturnValue();
  uVar64 = uVar59;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar64;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_107135880;
  puStack_170 = &UNK_1108d8bc0;
  _objc_copyWeak(auStack_168,auStack_138);
  uVar58 = uVar57;
  func_0x00010c25ff60(uVar57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(puVar2);
  _objc_release(uVar64);
  _objc_release(uVar59);
  _objc_release(uVar56);
  func_0x00010c222380(param_5);
  puVar2 = PTR_PTR_1126d4d48;
  _objc_alloc();
  func_0x00010c039da0();
  lVar68 = (long)_DAT_112764504;
  uVar64 = *(undefined8 *)((long)param_5 + lVar68);
  *(undefined **)((long)param_5 + lVar68) = puVar2;
  _objc_release(uVar64);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar66 = (long)_DAT_112764508;
  uVar64 = *(undefined8 *)((long)param_5 + lVar66);
  *(undefined **)((long)param_5 + lVar66) = puVar2;
  _objc_release(uVar64);
  func_0x00010c18b5e0(*(undefined8 *)((long)param_5 + lVar66));
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010bf4b2a0(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar64);
  uVar64 = *(undefined8 *)((long)param_5 + lVar68);
  func_0x00010c269020(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1374a0();
  _objc_release(uVar64);
  puVar2 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_alloc();
  func_0x00010c050900();
  lVar68 = (long)_DAT_11276450c;
  uVar64 = *(undefined8 *)((long)param_5 + lVar68);
  *(undefined **)((long)param_5 + lVar68) = puVar2;
  _objc_release(uVar64);
  func_0x00010c18b5e0(*(undefined8 *)((long)param_5 + lVar68));
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar64);
  puVar2 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_alloc();
  func_0x00010c050900();
  lVar68 = (long)_DAT_112764510;
  uVar64 = *(undefined8 *)((long)param_5 + lVar68);
  *(undefined **)((long)param_5 + lVar68) = puVar2;
  _objc_release(uVar64);
  func_0x00010c18b5e0(*(undefined8 *)((long)param_5 + lVar68));
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010bf4b2a0(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(uVar64);
  ppuVar67 = param_5;
  func_0x00010be4bfa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2fe0();
  _objc_release(ppuVar67);
  ppuVar67 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar67;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar5;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar67);
  _objc_initWeak(auStack_190,param_5);
  func_0x00010bf4b2c0(param_5);
  ppuVar67 = param_5;
  dVar76 = dVar73;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar67;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_5;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d460(param_5);
  dVar70 = dVar71;
  func_0x00010bf54860(dVar71,dVar73,param_3,ppuVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar67);
  ppuVar67 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar67;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_5;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d460(param_5);
  ppuVar9 = ppuVar6;
  func_0x00010bf56940(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar67);
  func_0x00010bf20c80(ppuVar9);
  func_0x000100841590();
  if ((((NAN(dVar70)) || (NAN(dVar71))) || (NAN(dVar76))) || (NAN(dVar73))) {
    ppuVar67 = param_5;
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar67;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar67);
    if (ppuVar10 != (undefined **)0x0) {
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x000107ffc4b0(ppuVar10,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(puVar2);
      goto LAB_107134c28;
    }
  }
  else {
    ppuVar7 = ppuVar9;
    if (ppuVar10 != (undefined **)0x0) {
LAB_107134c28:
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar67 = param_5;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar67;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c240640();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar8;
      func_0x00010bf5ffa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c071ae0();
      _objc_release(puVar4);
      _objc_release(ppuVar11);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar67);
      if ((int)ppuVar12 == 0) {
        ppuVar67 = param_5;
        func_0x00010c13b540(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar67;
        func_0x0001070c4790();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c240640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar8;
        func_0x00010bf5ffa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(ppuVar11);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar67);
      }
      else {
        for (ppuVar67 = (undefined **)0x0; ppuVar5 = ppuVar10, func_0x00010c09dea0(),
            ppuVar67 < ppuVar5; ppuVar67 = (undefined **)((long)ppuVar67 + 1)) {
          puVar4 = PTR_PTR_1126affe8;
          func_0x00010c09e180(PTR_PTR_1126affe8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar4);
        }
      }
      dVar70 = 0.0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      _objc_retain(puVar2);
      puVar4 = puVar2;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar68 = *plStack_1c0;
        do {
          puVar69 = (undefined *)0x0;
          do {
            if (*plStack_1c0 != lVar68) {
              _objc_enumerationMutation(puVar2);
            }
            uVar64 = *(undefined8 *)(lStack_1c8 + (long)puVar69 * 8);
            ppuVar67 = ppuVar10;
            func_0x000107ffcb24(ppuVar10,uVar64);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar67 == (undefined **)0x0) {
              func_0x000107ffcd08(ppuVar10,uVar64,ppuVar9);
            }
            puVar69 = puVar69 + 1;
          } while (puVar4 != puVar69);
          puVar4 = puVar2;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      _objc_release(puVar2);
      ppuVar7 = ppuVar9;
    }
  }
  func_0x00010c186260(*(undefined8 *)((long)param_5 + lVar63));
  func_0x00010bfbb9e0(param_5);
  ppuVar67 = param_5;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182420(dVar70,dVar71,dVar73,dVar76);
  _objc_release(ppuVar67);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010bf4cf40(*(undefined8 *)((long)param_5 + lVar65));
  func_0x00010c013de0(puVar2);
  func_0x00010c219b00(*(undefined8 *)((long)param_5 + lVar65));
  _objc_release(puVar2);
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010bf4b2a0(uVar64);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010c27ac80(uVar59);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar64);
  _objc_release(uVar59);
  _objc_release(uVar64);
  lVar68 = *(long *)((long)param_5 + lVar63);
  func_0x00010c0fdb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar68 != 0) {
    uVar64 = *(undefined8 *)((long)param_5 + lVar63);
    func_0x00010c0fdb20();
    _objc_retainAutoreleasedReturnValue();
    lVar68 = (long)_DAT_1127644f4;
    uVar59 = *(undefined8 *)((long)param_5 + lVar68);
    *(undefined8 *)((long)param_5 + lVar68) = uVar64;
    _objc_release(uVar59);
    ppuVar67 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cf40();
    func_0x00010c19f0e0(*(undefined8 *)((long)param_5 + lVar68));
    _objc_release(ppuVar67);
    uVar64 = *(undefined8 *)((long)param_5 + lVar65);
    func_0x00010bf4b2a0(uVar64);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar64);
    uVar64 = *(undefined8 *)((long)param_5 + lVar63);
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    uStack_1e8 = 0x1071358f8;
    puStack_1e0 = &UNK_11084dd40;
    _objc_copyWeak(auStack_1d8,auStack_190);
    func_0x00010befa300(uVar64);
    _objc_destroyWeak(auStack_1d8);
  }
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_190);
  _objc_release(ppuVar10);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_initWeak(auStack_138,param_5);
  uVar64 = *(undefined8 *)((long)param_5 + lVar63);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_107135980;
  puStack_208 = &UNK_11084dd40;
  _objc_copyWeak(auStack_200,auStack_138);
  func_0x00010befa300(uVar64);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_138);
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010c2be8a0(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar64);
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010bf88120(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar64);
  func_0x00010beaa5e0(param_5);
  func_0x00010beb0a40(param_5);
  func_0x00010beaf480(param_5);
  uVar64 = *(undefined8 *)((long)param_5 + lVar65);
  func_0x00010c15b700(uVar64);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar64);
  func_0x00010beacde0(param_5);
  func_0x00010bead020(param_5);
  _objc_initWeak(auStack_138,param_5);
  uVar64 = *(undefined8 *)((long)param_5 + lVar63);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x1071359c8;
  puStack_230 = &UNK_11084dd40;
  _objc_copyWeak(auStack_228,auStack_138);
  func_0x00010befa300(uVar64);
  func_0x00010beafd40(param_5);
  iVar1 = (int)*(undefined8 *)((long)param_5 + lVar63);
  func_0x00010c07e920();
  if (iVar1 == 0) {
LAB_107135354:
    lVar65 = *(long *)((long)param_5 + lVar63);
    func_0x00010c123d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar65 == 0) {
      lVar65 = *(long *)((long)param_5 + lVar63);
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar65 == 0) {
        _objc_initWeak(auStack_190,param_5);
        uVar64 = *(undefined8 *)((long)param_5 + lVar63);
        puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_290 = 0xc2000000;
        pcStack_288 = FUN_107135b24;
        puStack_280 = &UNK_11084dd40;
        ppuVar67 = &puStack_298;
        _objc_copyWeak(auStack_278,auStack_190);
        func_0x00010befa300(uVar64);
        _objc_initWeak(auStack_2a0,param_5);
        uVar64 = *(undefined8 *)((long)param_5 + lVar63);
        puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2c0 = 0xc2000000;
        pcStack_2b8 = FUN_107135c24;
        puStack_2b0 = &UNK_11084dd40;
        ppuVar5 = &puStack_2c8;
        _objc_copyWeak(auStack_2a8,auStack_2a0);
        func_0x00010befa300(uVar64);
        _objc_destroyWeak(auStack_2a8);
        _objc_destroyWeak(auStack_2a0);
        _objc_destroyWeak(auStack_278);
        _objc_destroyWeak(auStack_190);
        goto LAB_10713560c;
      }
    }
    else {
      _objc_release();
    }
  }
  else {
    uVar59 = *(undefined8 *)((long)param_5 + lVar63);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar64 = uVar59;
    func_0x00010c073b80();
    if ((int)uVar64 == 0) {
      uVar60 = *(ulong *)((long)param_5 + lVar63);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar60;
      func_0x00010c073ea0();
      _objc_release(uVar60);
      _objc_release(uVar59);
      if ((uVar3 & 1) == 0) goto LAB_107135354;
    }
    else {
      _objc_release(uVar59);
    }
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_1071359fc;
    puStack_258 = &UNK_11084d858;
    ppuVar67 = &puStack_270;
    ppuStack_250 = param_5;
    _objc_retainBlock();
    lVar65 = *(long *)((long)param_5 + lVar63);
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar64 = *(undefined8 *)((long)param_5 + lVar63);
    if (lVar65 == 0) {
      func_0x00010c083340();
      if ((int)uVar64 != 0) {
        lVar65 = *(long *)((long)param_5 + lVar63);
        func_0x00010c29a1e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar65 != 0) {
          ppuVar5 = param_5;
          func_0x00010bf60ee0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = param_5;
          func_0x00010bfa3600(param_5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010c23fc40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010bfe6060();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar5;
          func_0x00010c072080();
          _objc_release(ppuVar9);
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
          _objc_release(lVar65);
          if (((ulong)ppuVar10 & 1) == 0) {
            uVar64 = *(undefined8 *)((long)param_5 + lVar63);
            func_0x00010c29a1e0(uVar64);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)ppuVar67[2])(ppuVar67,uVar64);
            goto LAB_107135348;
          }
        }
      }
    }
    else {
      func_0x00010c0fd9a0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar67[2])(ppuVar67,uVar64);
LAB_107135348:
      _objc_release(uVar64);
    }
    ppuVar5 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4be0(0x3fe0000000000000);
    _objc_release(ppuVar5);
    ppuVar5 = param_5;
    func_0x00010c13b540(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a020();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar67);
  }
  ppuVar6 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar67 = ppuVar6;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar67;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010beffe80();
  _objc_release(ppuVar7);
  _objc_release(ppuVar67);
  _objc_release(ppuVar6);
  if (((ulong)ppuVar5 & 1) == 0) {
    func_0x00010be09260(param_5);
  }
LAB_10713560c:
  _objc_initWeak(auStack_190,param_5);
  uVar64 = *(undefined8 *)((long)param_5 + lVar63);
  puVar62 = auStack_190;
  _objc_copyWeak(auStack_2d0,puVar62);
  func_0x00010befa300(uVar64);
  _objc_destroyWeak(auStack_2d0);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_228);
  puVar61 = auStack_138;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 4);
  _objc_destroyWeak(auStack_2a0);
  _objc_destroyWeak(ppuVar67 + 4);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_228);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar62);
  puVar61 = puVar61 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c1cb640(*(undefined8 *)(puVar61 + _DAT_1127644f0));
  _objc_release(puVar62);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar61);
  return;
}



/* Entry: 10713582c; end: 10713587f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713582c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c1cb640(*(undefined8 *)(param_1 + _DAT_1127644f0));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107135880; end: 10713597f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107135880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c188e00(*(undefined8 *)(param_1 + _DAT_1127644f0));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107135980; end: 1071359fb;  */

void FUN_107135980(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bead900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071359fc; end: 107135b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071359fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1122a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cf40();
  func_0x00010c013de0();
  _objc_release(uVar2);
  func_0x00010c182220(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010c1a9f00(puVar1);
  _objc_release(param_2);
  func_0x00010be8ce20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644f4);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644f4) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644f0);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107135b24; end: 107135c23;  */

void FUN_107135b24(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x22;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfbbbe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      unaff_x22 = param_2;
      func_0x00010c123d20();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x22 == 0) goto LAB_107135c00;
    }
    uVar3 = uVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010beffe80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (lVar2 != 0) {
      unaff_x22 = lVar2;
    }
    _objc_release(unaff_x22);
    if ((uVar6 & 1) == 0) {
      func_0x00010be09260(uVar1);
    }
  }
LAB_107135c00:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107135c24; end: 107135cb3;  */

void FUN_107135c24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc7e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107135cb4; end: 107135cff; -[PreviewViewController traitCollectionDidChange:] */

void FUN_107135cb4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8a50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee0a40(param_1);
  return;
}



/* Entry: 107135d00; end: 107135db7; -[PreviewViewController _updateStatusBarAnimated:] */

void FUN_107135d00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (lRam00000001138466f0 < 3) {
    lVar4 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c292b20();
    lVar4 = 3;
    if (lVar2 == 2) {
      lVar4 = 1;
    }
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c106ec0();
  if (lVar1 == lVar4) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 107135db8; end: 107135e9b; -[PreviewViewController waitingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107135db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112764514;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60(puVar1,param_2,puVar2,2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5),param_2,
                        &PTR____CFConstantStringClassReference_110f030d8);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764518);
    *(undefined **)(param_1 + _DAT_112764518) = puVar1;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107135e9c; end: 107135ff7; -[PreviewViewController showSpinnerForRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107135e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar6 = (long)_DAT_112764518;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar5 = (long)_DAT_1127644f0;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf4b2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2a16c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe5d60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(uVar2,param_2,lVar1,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107135ff8;
    puStack_60 = &UNK_1108471b0;
    lStack_58 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_112764514),param_2,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2a16c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107135ff8; end: 10713608b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107135ff8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644f0);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10713608c; end: 107136143; -[PreviewViewController hideSpinnerForRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713608c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112764518;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar4 = (long)_DAT_112764514;
    lVar2 = *(long *)(param_1 + lVar4);
    if (lVar2 != 0) {
      func_0x00010c06c0e0();
      if ((int)lVar2 != 0) {
        func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar4));
      }
      if (*(long *)(param_1 + lVar4) != 0) {
        func_0x00010c12c960();
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(undefined8 *)(param_1 + lVar4) = 0;
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 107136144; end: 1071362a7; -[PreviewViewController showLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107136144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276451c;
  if (*(long *)(param_5 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d4d50;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5;
  func_0x00010c2a16c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014860(param_1,param_2,param_3,param_4,puVar1,param_6,lVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071362a8; end: 107136337; -[PreviewViewController removeLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071362a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276451c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107136338; end: 1071363eb; -[PreviewViewController _setupGradients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107136338(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644ac);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa300(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1071363ec; end: 107136477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071363ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    lVar2 = (long)_DAT_1127644f0;
    func_0x00010bf20140(*(undefined8 *)(param_5 + lVar2));
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010bf20120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107136478; end: 107136537; -[PreviewViewController _subscribeToQuickSendEventObservable:] */

void FUN_107136478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c25ff60(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107136538; end: 1071367bb;  */

void FUN_107136538(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d4d20(param_2);
    lVar1 = param_1;
    func_0x00010c25ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165620();
    _objc_release(lVar1);
    func_0x00010c0d4d20(param_2);
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165620();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = param_2;
    func_0x00010bfb8940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ffc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c0ce9e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8660();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010bf620e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ac0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010bf25220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174620();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c0ee280(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff100();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071367bc; end: 10713692b; -[PreviewViewController _setupQuickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071367bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_1127644f0;
  func_0x00010c229580(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c15b960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6b20();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c15b960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(uVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644ac);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010befa300(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10713692c; end: 107136973;  */

void FUN_10713692c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be274a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107136974; end: 107136d47; -[PreviewViewController _handleConfigurationCommitForQuickSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107136974(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00010c07ba00();
  lVar12 = (long)_DAT_1127644bc;
  *(undefined1 *)(param_2 + lVar12) = param_4;
  lVar1 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffe80();
  lVar13 = (long)_DAT_1127644f0;
  uVar4 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c15b960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(char *)(param_2 + lVar12) == '\x01') {
    lVar1 = param_2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5704();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11e880();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010c13b540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001070c574c();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c258a40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c11e840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec8200(param_2);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar12);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010bde5640(param_2);
    func_0x00010c12e2e0(*(undefined8 *)(param_2 + lVar13));
    _objc_release(lVar3);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c15b960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6b20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c15b960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar4);
    func_0x00010c1fc080(*(undefined8 *)(param_2 + lVar13));
  }
  lVar1 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09b840();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  lVar12 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c243400();
  lVar5 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfbb020();
  func_0x000108edf718(lVar13,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075080();
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbd220();
  func_0x00010c2291a0(param_1,lVar3);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107136d48; end: 10713864f; -[PreviewViewController _configureQuickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107136d48(undefined **param_1,undefined **param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  long lVar33;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar7;
  func_0x0001070c5704();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar32;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar32);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar7;
  func_0x00010c11e880();
  _objc_release(ppuVar7);
  if ((int)ppuVar32 == 0) {
    lVar33 = (long)_DAT_1127644ac;
    uVar4 = *(ulong *)((long)param_1 + lVar33);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c077de0();
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)((long)param_1 + lVar33);
      func_0x00010bfbacc0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        uVar6 = *(undefined8 *)((long)param_1 + lVar33);
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c077e60();
        _objc_release(uVar6);
        ppuVar7 = *(undefined ***)((long)param_1 + lVar33);
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        if ((int)uVar3 == 0) {
          ppuVar32 = ppuVar7;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar32;
          func_0x00010c08fa60();
          _objc_release(ppuVar32);
          _objc_release(ppuVar7);
          if (ppuVar8 == (undefined **)0x0) {
            uVar6 = *(undefined8 *)((long)param_1 + lVar33);
            func_0x00010c131e40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c0729c0();
            _objc_release(uVar6);
            ppuVar7 = *(undefined ***)((long)param_1 + lVar33);
            func_0x00010c131e40();
            _objc_retainAutoreleasedReturnValue();
            if ((int)uVar3 != 0) {
              ppuVar32 = ppuVar7;
              func_0x00010bfa09a0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar32 == (undefined **)0x0) {
                ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSUUID_1126b0270;
                func_0x00010bdc3540();
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar18;
                func_0x00010bdc3580();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar18);
              }
              else {
                _objc_retain(ppuVar32);
                ppuVar8 = ppuVar32;
              }
              _objc_release(ppuVar32);
              _objc_release(ppuVar7);
              ppuVar7 = (undefined **)PTR_PTR_1126b5170;
              _objc_alloc();
              ppuVar32 = ppuVar7;
              func_0x000108f5989c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c020280();
              _objc_release(ppuVar32);
              puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
              ppuStack_88 = ppuVar7;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              ppuVar32 = param_1;
              func_0x00010c1122a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar32;
              func_0x00010c15b960();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c174620();
              _objc_release(ppuVar18);
              _objc_release(ppuVar32);
              _objc_release(puVar12);
              goto LAB_107136e6c;
            }
            ppuVar32 = ppuVar7;
            func_0x00010befc200();
            if ((int)ppuVar32 == 0) {
              uVar6 = *(undefined8 *)((long)param_1 + lVar33);
              func_0x00010c131e40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar6;
              func_0x00010befc240();
              _objc_release(uVar6);
              _objc_release(ppuVar7);
              if ((int)uVar3 == 0) {
                uVar6 = *(undefined8 *)((long)param_1 + lVar33);
                func_0x00010c131e40();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar6;
                func_0x00010c0780a0();
                _objc_release(uVar6);
                if ((int)uVar3 == 0) {
                  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                  _objc_alloc_init();
                  lVar10 = *(long *)((long)param_1 + lVar33);
                  func_0x00010c131e40();
                  _objc_retainAutoreleasedReturnValue();
                  lVar15 = lVar10;
                  func_0x00010c1322c0();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar15 == 0) {
                    _objc_release(lVar10);
LAB_107138054:
                    lVar10 = *(long *)((long)param_1 + lVar33);
                    func_0x00010c131e40();
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar10;
                    func_0x00010c1322c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(lVar10);
                    lVar10 = *(long *)((long)param_1 + lVar33);
                    func_0x00010c131e40();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar15 != 0) {
                      lVar33 = lVar10;
                      func_0x00010c1322c0(lVar10);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar10);
                      ppuVar7 = param_1;
                      func_0x00010c13b540();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar32 = ppuVar7;
                      func_0x0001070c5578();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar18 = ppuVar32;
                      func_0x00010c244d60();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar19 = ppuVar18;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar9 = ppuVar19;
                      func_0x00010c0ee920();
                      _objc_retainAutoreleasedReturnValue();
                      if (ppuVar9 == (undefined **)0x0) {
                        ppuVar14 = param_1;
                        func_0x00010c13b540();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar20 = ppuVar14;
                        func_0x0001070c5578();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar21 = ppuVar20;
                        func_0x00010c244d60();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar22 = ppuVar21;
                        func_0x00010c269d40();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar23 = ppuVar22;
                        func_0x00010bfebfc0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar22);
                        _objc_release(ppuVar21);
                        _objc_release(ppuVar20);
                        _objc_release(ppuVar14);
                      }
                      else {
                        _objc_retain(ppuVar9);
                        ppuVar23 = ppuVar9;
                      }
                      _objc_release(ppuVar9);
                      _objc_release(ppuVar19);
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                      _objc_release(ppuVar7);
                      ppuVar7 = ppuVar23;
                      func_0x000108438614();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar23);
                      _objc_release(lVar33);
                      goto LAB_10713833c;
                    }
                    lVar15 = lVar10;
                    func_0x00010c1322e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(lVar10);
                    if (lVar15 != 0) {
                      ppuVar7 = param_1;
                      func_0x00010c13b540();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar32 = ppuVar7;
                      func_0x0001070c5578();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar18 = ppuVar32;
                      func_0x00010c244d60();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar19 = ppuVar18;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = *(undefined8 *)((long)param_1 + lVar33);
                      func_0x00010c131e40(uVar6);
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = uVar6;
                      func_0x00010c1322e0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar9 = ppuVar19;
                      func_0x000108065ef4(ppuVar19,uVar3);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar3);
                      _objc_release(uVar6);
                      _objc_release(ppuVar19);
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                      _objc_release(ppuVar7);
                      if (ppuVar9 == (undefined **)0x0) {
                        ppuVar7 = (undefined **)0x0;
                      }
                      else {
                        ppuVar32 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                        ppuStack_98 = ppuVar9;
                        func_0x00010bf0a140();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar18 = ppuVar32;
                        func_0x000100504554();
                        ppuVar7 = ppuVar18;
                        func_0x00010bfb1920();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar18);
                        _objc_release(ppuVar32);
                      }
                      goto LAB_107138338;
                    }
                  }
                  else {
                    lVar16 = *(long *)((long)param_1 + lVar33);
                    func_0x00010c131e40();
                    _objc_retainAutoreleasedReturnValue();
                    lVar17 = lVar16;
                    func_0x00010c131ca0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(lVar16);
                    _objc_release(lVar15);
                    _objc_release(lVar10);
                    if (lVar17 == 0) goto LAB_107138054;
                    ppuVar7 = (undefined **)PTR_PTR_1126b5170;
                    _objc_alloc();
                    ppuVar9 = *(undefined ***)((long)param_1 + lVar33);
                    func_0x00010c131e40(ppuVar9);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar32 = ppuVar9;
                    func_0x00010c1322c0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = *(undefined8 *)((long)param_1 + lVar33);
                    func_0x00010c131e40(uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar6;
                    func_0x00010c131ca0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c020280();
                    _objc_release(uVar3);
                    _objc_release(uVar6);
                    _objc_release(ppuVar32);
LAB_107138338:
                    _objc_release(ppuVar9);
LAB_10713833c:
                    if (ppuVar7 != (undefined **)0x0) {
                      func_0x00010befa120(ppuVar8);
                      _objc_release(ppuVar7);
                    }
                  }
                  ppuVar7 = param_1;
                  func_0x00010c13b540();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar32 = ppuVar7;
                  func_0x0001070c5578();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar18 = ppuVar32;
                  func_0x00010c244d60();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar19 = ppuVar18;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = param_1;
                  func_0x00010bfa3600();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar9;
                  func_0x00010c10ab20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar20 = ppuVar14;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar21 = ppuVar20;
                  func_0x00010bfc9000();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar22 = ppuVar19;
                  param_2 = ppuVar21;
                  func_0x000108065f70(ppuVar19,ppuVar21);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar21);
                  _objc_release(ppuVar20);
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar9);
                  _objc_release(ppuVar19);
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar32);
                  _objc_release(ppuVar7);
                  ppuVar7 = ppuVar22;
                  func_0x00010bf529e0();
                  if (ppuVar7 != (undefined **)0x0) {
                    param_2 = &PTR___NSConcreteGlobalBlock_110a48b68;
                    ppuVar7 = ppuVar22;
                    func_0x000100504554(ppuVar22,&PTR___NSConcreteGlobalBlock_110a48b68);
                    func_0x00010befa160(ppuVar8);
                    _objc_release(ppuVar7);
                  }
                  ppuVar7 = ppuVar8;
                  func_0x00010bf00560(ppuVar8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar32 = param_1;
                  func_0x00010c1122a0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar18 = ppuVar32;
                  func_0x00010c15b960();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c19ffc0();
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar32);
LAB_1071384d0:
                  _objc_release(ppuVar7);
                }
                else {
                  ppuVar7 = *(undefined ***)((long)param_1 + lVar33);
                  func_0x00010c131e40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar8 = ppuVar7;
                  func_0x00010bfceb60();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar7);
                  ppuVar7 = *(undefined ***)((long)param_1 + lVar33);
                  func_0x00010c131e40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar22 = ppuVar7;
                  func_0x00010c292720();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar7);
                  ppuVar7 = ppuVar8;
                  func_0x00010bf529e0();
                  if (ppuVar7 != (undefined **)0x0) {
                    ppuVar7 = param_1;
                    func_0x00010c13b540();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar32 = ppuVar7;
                    func_0x0001070c53a4();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar18 = ppuVar32;
                    func_0x00010bfcf8c0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar19 = ppuVar18;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar9 = ppuVar19;
                    func_0x00010bfc61c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar19);
                    _objc_release(ppuVar18);
                    _objc_release(ppuVar32);
                    _objc_release(ppuVar7);
                    ppuVar7 = ppuVar9;
                    func_0x00010bf529e0();
                    if (ppuVar7 != (undefined **)0x0) {
                      ppuVar7 = param_1;
                      func_0x00010c13b540();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar32 = ppuVar7;
                      func_0x0001070c45e0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar18 = ppuVar32;
                      func_0x00010c293740();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar19 = ppuVar18;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                      _objc_release(ppuVar7);
                      ppuVar7 = param_1;
                      func_0x00010c13b540();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar32 = ppuVar7;
                      func_0x0001070c5650();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar18 = ppuVar32;
                      func_0x00010bf85f80();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar14 = ppuVar18;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar20 = ppuVar14;
                      func_0x00010bf60aa0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar14);
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                      _objc_release(ppuVar7);
                      ppuVar7 = ppuVar9;
                      param_2 = ppuVar19;
                      func_0x0001084386bc(ppuVar9,ppuVar19,ppuVar20);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar32 = param_1;
                      func_0x00010c1122a0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar18 = ppuVar32;
                      func_0x00010c15b960();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1c8660();
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                      _objc_release(ppuVar7);
                      _objc_release(ppuVar20);
                      _objc_release(ppuVar19);
                    }
                    _objc_release(ppuVar9);
                  }
                  ppuVar7 = ppuVar22;
                  func_0x00010bf529e0();
                  if (ppuVar7 != (undefined **)0x0) {
                    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b8 = 0xc2000000;
                    uStack_b0 = 0x1071384e8;
                    puStack_a8 = &UNK_11089b0f0;
                    param_2 = &puStack_c0;
                    ppuVar7 = ppuVar22;
                    ppuStack_a0 = param_1;
                    func_0x000100504554(ppuVar22,param_2);
                    ppuVar32 = ppuVar7;
                    func_0x00010bf529e0();
                    if (ppuVar32 != (undefined **)0x0) {
                      param_2 = &PTR___NSConcreteGlobalBlock_110a48b68;
                      ppuVar32 = ppuVar7;
                      func_0x000100504554(ppuVar7,&PTR___NSConcreteGlobalBlock_110a48b68);
                      ppuVar18 = param_1;
                      func_0x00010c1122a0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar19 = ppuVar18;
                      func_0x00010c15b960();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c19ffc0();
                      _objc_release(ppuVar19);
                      _objc_release(ppuVar18);
                      _objc_release(ppuVar32);
                    }
                    goto LAB_1071384d0;
                  }
                }
                _objc_release(ppuVar22);
                goto LAB_107136e74;
              }
            }
            else {
              _objc_release(ppuVar7);
            }
            uVar3 = *(undefined8 *)((long)param_1 + lVar33);
            func_0x00010c131e40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc200();
            func_0x00010c165620(param_1);
            _objc_release(uVar3);
            uVar3 = *(undefined8 *)((long)param_1 + lVar33);
            func_0x00010c131e40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc200();
            ppuVar7 = param_1;
            func_0x00010c1122a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar32 = ppuVar7;
            func_0x00010c15b960();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c165620();
            _objc_release(ppuVar32);
            _objc_release(ppuVar7);
            _objc_release(uVar3);
            uVar3 = *(undefined8 *)((long)param_1 + lVar33);
            func_0x00010c131e40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc200();
            ppuVar7 = param_1;
            func_0x00010c25ac00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c165620();
            _objc_release(ppuVar7);
            _objc_release(uVar3);
            uVar6 = *(undefined8 *)((long)param_1 + lVar33);
            func_0x00010c131e40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010befc240();
            _objc_release();
            if ((int)uVar3 != 0) {
              func_0x000108f580b4();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR_PTR_1126b5170;
              _objc_alloc();
              func_0x00010c020280();
              puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_90 = puVar12;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = param_1;
              func_0x00010c1122a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar32 = ppuVar7;
              func_0x00010c15b960();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ff100();
              _objc_release(ppuVar32);
              _objc_release(ppuVar7);
              _objc_release(puVar13);
              ppuVar7 = param_1;
              func_0x00010c29d0c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar32 = ppuVar7;
              func_0x00010c2a71e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(ppuVar7);
              if (ppuVar32 == (undefined **)0x0) {
                *(undefined1 *)((long)param_1 + (long)_DAT_112764520) = 1;
              }
              else {
                ppuVar7 = param_1;
                func_0x00010c231fc0();
                if ((int)ppuVar7 != 0) {
                  func_0x00010bf85940(param_1);
                }
              }
              _objc_release(puVar12);
              _objc_release(uVar6);
            }
            ppuVar7 = param_1;
            func_0x00010c1122a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar32 = ppuVar7;
            func_0x00010c15b960();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c19ffc0();
            _objc_release(ppuVar32);
            _objc_release(ppuVar7);
            goto LAB_107137b30;
          }
          ppuVar7 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar7;
          func_0x0001070c55e4();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar32;
          func_0x00010c1176a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = *(undefined ***)((long)param_1 + lVar33);
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar9;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar8;
          param_2 = ppuVar18;
          func_0x000108f04f08(ppuVar8,ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar18);
          _objc_release(ppuVar9);
          _objc_release(ppuVar8);
          _objc_release(ppuVar32);
          _objc_release(ppuVar7);
          ppuVar7 = ppuVar19;
          func_0x00010bf2d160();
          if ((int)ppuVar7 != 0) {
            lVar10 = *(long *)((long)param_1 + lVar33);
            func_0x00010c131e40();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar10;
            func_0x00010bf252a0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar15 == 0) {
              _objc_release(lVar10);
              bVar1 = false;
              ppuVar32 = &PTR____CFConstantStringClassReference_110f52d38;
            }
            else {
              uVar11 = *(undefined8 *)((long)param_1 + lVar33);
              func_0x00010c131e40();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar11;
              func_0x00010bf252a0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar3;
              func_0x00010c067ec0();
              _objc_release(uVar3);
              _objc_release(uVar11);
              _objc_release(lVar15);
              _objc_release(lVar10);
              bVar1 = (int)uVar6 == 1;
              ppuVar32 = &PTR_PTR_110cb3078;
              if (!bVar1) {
                ppuVar32 = &PTR_PTR_110cb3008;
              }
              ppuVar32 = (undefined **)*ppuVar32;
            }
            _objc_retain(ppuVar32);
            ppuVar7 = ppuVar19;
            func_0x00010c074e40();
            if ((int)ppuVar7 == 0) {
              ppuVar8 = ppuVar19;
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar8;
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar18;
              func_0x00010c08fa60();
              if (ppuVar7 == (undefined **)0x0) {
                func_0x000108f591dc();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                ppuVar9 = ppuVar19;
                func_0x00010c1164a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = ppuVar9;
                func_0x00010c2711a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar9);
              }
              _objc_release(ppuVar18);
              _objc_release(ppuVar8);
            }
            else {
              func_0x000108f591dc();
              _objc_retainAutoreleasedReturnValue();
            }
            if (bVar1) {
              ppuVar9 = *(undefined ***)((long)param_1 + lVar33);
              func_0x00010c131e40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar9;
              func_0x00010c131ca0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = ppuVar18;
              func_0x00010c08fa60();
              if (ppuVar8 == (undefined **)0x0) {
                func_0x000108f58d8c();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                ppuVar14 = *(undefined ***)((long)param_1 + lVar33);
                func_0x00010c131e40();
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar14;
                func_0x00010c131ca0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar14);
              }
              _objc_release(ppuVar18);
              _objc_release(ppuVar9);
            }
            else {
              _objc_retain(ppuVar7);
              ppuVar8 = ppuVar7;
            }
            puVar12 = PTR_PTR_1126b5170;
            _objc_alloc();
            ppuVar18 = ppuVar19;
            func_0x00010c1164a0(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar18;
            func_0x00010c116a20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c020280();
            _objc_release(ppuVar9);
            _objc_release(ppuVar18);
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_80 = puVar12;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = param_1;
            func_0x00010c1122a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar18;
            func_0x00010c15b960();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c174620();
            _objc_release(ppuVar9);
            _objc_release(ppuVar18);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(ppuVar8);
            goto LAB_107137b18;
          }
        }
        else {
          ppuVar19 = ppuVar7;
          func_0x00010c1322e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x000107d6fa04();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar32 = ppuVar8;
          func_0x00010bf625c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
          if (ppuVar32 != (undefined **)0x0) {
            ppuVar7 = (undefined **)PTR_PTR_1126b5170;
            _objc_alloc();
            ppuVar8 = ppuVar32;
            func_0x00010c11ac00(ppuVar32);
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = ppuVar32;
            func_0x00010bf85d80(ppuVar32);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar32;
            func_0x00010c27dd80(ppuVar32);
            func_0x000108438cec();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c020280();
            _objc_release(ppuVar9);
            _objc_release(ppuVar18);
            _objc_release(ppuVar8);
            puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_78 = ppuVar7;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = param_1;
            func_0x00010c1122a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = ppuVar8;
            func_0x00010c15b960();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a4ac0();
            _objc_release(ppuVar18);
            _objc_release(ppuVar8);
            _objc_release(puVar12);
LAB_107137b18:
            _objc_release(ppuVar7);
          }
          _objc_release(ppuVar32);
        }
        _objc_release(ppuVar19);
        goto LAB_107137b30;
      }
    }
    else {
      _objc_release(uVar4);
    }
    ppuVar7 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar7;
    func_0x0001070c53a4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar32;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)param_1 + lVar33);
    func_0x00010c131e40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c1322e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar18;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(ppuVar18);
    _objc_release(ppuVar8);
    _objc_release(ppuVar32);
    _objc_release(ppuVar7);
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar7 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar32 = ppuVar7;
      func_0x0001070c45e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar32;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar8;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar32);
      _objc_release(ppuVar7);
      ppuVar7 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar32 = ppuVar7;
      func_0x0001070c5650();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar32;
      func_0x00010bf85f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar32);
      _objc_release(ppuVar7);
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_70 = ppuVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x0001084386bc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar32 = ppuVar7;
      func_0x00010c15b960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8660();
      _objc_release(ppuVar32);
      _objc_release(ppuVar7);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(ppuVar14);
      _objc_release(ppuVar18);
    }
    ppuVar7 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar7;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar32;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar9;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar20;
    func_0x00010bfc9000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar18;
    param_2 = ppuVar21;
    func_0x000108065f70(ppuVar18,ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    _objc_release(ppuVar14);
    _objc_release(ppuVar9);
    _objc_release(ppuVar18);
    _objc_release(ppuVar8);
    _objc_release(ppuVar32);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar22;
    func_0x00010bf529e0();
    if (ppuVar7 != (undefined **)0x0) {
      param_2 = &PTR___NSConcreteGlobalBlock_110a48b68;
      ppuVar7 = ppuVar22;
      func_0x000100504554(ppuVar22,&PTR___NSConcreteGlobalBlock_110a48b68);
      ppuVar32 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar32;
      func_0x00010c15b960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ffc0();
      _objc_release(ppuVar8);
      _objc_release(ppuVar32);
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar19);
  }
  else {
    ppuVar8 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x0001070c574c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar7;
    func_0x00010c258a40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)param_1 + (long)_DAT_1127644ac);
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47360(ppuVar18);
    _objc_release(uVar3);
    _objc_release(ppuVar18);
    _objc_release(ppuVar32);
LAB_107136e6c:
    _objc_release(ppuVar7);
LAB_107136e74:
    _objc_release(ppuVar8);
  }
LAB_107137b30:
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152600();
  _objc_release(ppuVar7);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar24 = ppuVar2[4];
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar24;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar26 == (undefined *)0x0) {
      puVar27 = ppuVar2[4];
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar27;
      func_0x0001070c5578();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar28;
      func_0x00010c244d60();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar29;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar30;
      func_0x00010bfebfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(puVar28);
      _objc_release(puVar27);
    }
    else {
      _objc_retain(puVar26);
      puVar31 = puVar26;
    }
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar24);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
    return;
  }
  return;
}



/* Entry: 107138650; end: 1071388bf; -[PreviewViewController _setupActionHandlerForBottomButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107138650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127644f0;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c22a7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c14a0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c259240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c24ae20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  lVar3 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5940();
  _objc_release(lVar3);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c14a0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c14a920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c14a0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8ba0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  lVar3 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cca0();
  _objc_release(lVar3);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c259240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c259260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c259240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071388c0; end: 107138a43; -[PreviewViewController _setupToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071388c0(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar7 = (long)_DAT_1127644f0;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2737a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010be7ff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c42b8;
  _objc_opt_class(PTR_PTR_1126c42b8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c2737a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0669c0();
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127644d8);
  puVar6 = auStack_40;
  _objc_copyWeak(puVar6,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 107138a44; end: 107138ab3;  */

void FUN_107138a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb0aa0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107138ab4; end: 107138d37; -[PreviewViewController _setupToolbarWithItemProviders:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107138ab4(undefined8 param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    lVar8 = 0;
    if (lVar5 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar6 = 0;
        lVar9 = lVar8;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          lVar1 = *(long *)(lStack_128 + lVar6 * 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar9;
          if (lVar1 != 0) {
            lVar2 = lVar1;
            func_0x00010c273ac0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
              lVar8 = lVar2;
              func_0x00010c0b8600();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf41860();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar9);
            }
            _objc_release(lVar2);
          }
          _objc_release(lVar1);
          lVar6 = lVar6 + 1;
          lVar9 = lVar8;
        } while (lVar5 != lVar6);
        lVar5 = param_3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(param_3);
    _objc_initWeak(auStack_138,param_1);
    param_2 = auStack_138;
    _objc_copyWeak(auStack_140);
    lVar5 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_release(lVar8);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 0x20);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf09f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_arrayByAddingObject__1125a0180);
  return;
}



/* Entry: 107138d38; end: 107138dc3;  */

void FUN_107138d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf09f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_arrayByAddingObject__1125a0180);
  return;
}



/* Entry: 107138dc4; end: 107138dcb;  */

void FUN_107138dc4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_arrayByAddingObject__1125a0180);
  return;
}



/* Entry: 107138dcc; end: 107138f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107138dcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = param_2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764524);
  *(undefined8 *)(param_1 + _DAT_112764524) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129120();
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107138f50; end: 107138fcf; -[PreviewViewController _isToolbarItemViewModelSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107138f50(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c078580();
  if (((iVar2 == 0) || (lVar3 = param_3, func_0x00010c112040(), lVar3 == 2)) ||
     (lVar3 = param_3, func_0x00010c112040(), lVar3 == 1)) {
    bVar1 = true;
  }
  else {
    lVar3 = param_3;
    func_0x00010c112040(param_3);
    bVar1 = lVar3 == 0xc;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107138fd0; end: 10713961f; -[PreviewViewController _previewToolbarButtonItemFromItemType:] */

void FUN_107138fd0(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  double dVar11;
  
  puVar6 = (undefined *)0x0;
  puVar9 = param_2;
  switch(param_4) {
  case 1:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c273820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar9);
    func_0x00010c18b5e0(puVar6,param_3,param_2);
    goto LAB_107139578;
  case 2:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf55000();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    goto code_r0x000107139560;
  case 3:
    puVar6 = param_2;
    func_0x00010becd120(param_2,param_3,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar11 = param_1;
    func_0x00010c1122a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    func_0x00010c1fb780(param_1 - dVar11,puVar6);
    puVar9 = param_2;
    param_2 = puVar6;
    goto code_r0x000107139574;
  case 4:
    uVar10 = 4;
    goto code_r0x00010713926c;
  case 5:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_toolbarButtonTapped__11267a848;
    puVar8 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf5a120(puVar7,param_3,param_2,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    goto code_r0x00010713943c;
  case 6:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf599c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    goto code_r0x000107139560;
  case 7:
    puVar6 = param_2;
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf0f000();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c273a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126c3e40;
    _objc_alloc(PTR_PTR_1126c3e40);
    puVar6 = puVar9;
    func_0x00010bf0edc0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c112020();
    func_0x00010c01fd80(puVar5,param_3,puVar6,puVar3,param_2,PTR_s_toolbarButtonTapped__11267a848);
    goto code_r0x00010713943c;
  default:
    goto LAB_107139578;
  case 10:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf559a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    goto code_r0x000107139560;
  case 0xf:
    uVar10 = 0xf;
code_r0x00010713926c:
    func_0x00010becd120(param_2,param_3,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    goto LAB_107139578;
  case 0x10:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c092a20();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x11:
    func_0x00010bfa3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x14:
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf5ce40();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000107139400;
  case 0x15:
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c094ec0();
    _objc_retainAutoreleasedReturnValue();
code_r0x000107139400:
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c273a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becd100(param_2,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
code_r0x00010713943c:
    _objc_release(puVar4);
    goto code_r0x000107139558;
  case 0x17:
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010befec80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf547a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_2;
    goto code_r0x000107139558;
  case 0x18:
    puVar6 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c102540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c273a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar9 == (undefined *)0x0) {
      param_2 = (undefined *)0x0;
    }
    else {
      func_0x00010becd100(param_2,param_3,puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    goto code_r0x000107139574;
  }
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c273a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd100(param_2,param_3,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
code_r0x000107139558:
  _objc_release(puVar8);
code_r0x000107139560:
  param_2 = puVar5;
  _objc_release(puVar7);
  _objc_release(puVar6);
code_r0x000107139574:
  _objc_release(puVar9);
  puVar6 = param_2;
LAB_107139578:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107139620; end: 1071396cf; -[PreviewViewController _toolbarButtonItemWithType:] */

void FUN_107139620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126c3e40;
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c112020();
  func_0x00010bf15ae0(puVar5,param_2,param_3,uVar4,param_1,PTR_s_toolbarButtonTapped__11267a848);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1071396d0; end: 107139797; -[PreviewViewController _toolbarButtonItemWithConfiguration:] */

void FUN_1071396d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c3e40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c112020();
  func_0x00010c01fd80(puVar1,param_2,param_3,uVar5,param_1,PTR_s_toolbarButtonTapped__11267a848);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107139798; end: 1071397e7; -[PreviewViewController previewGallery] */

void FUN_107139798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a5940;
  _objc_retain();
  uVar3 = param_1;
  func_0x00010010fab4(param_1,puVar2);
  uVar1 = param_1;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071397e8; end: 107139813; -[PreviewViewController toolbarButtonTapped:] */

void FUN_1071397e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c084c40(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c2738b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toolbarButtonTappedWithType__11267a850,param_3);
  return;
}



/* Entry: 107139814; end: 10713a133; -[PreviewViewController toolbarButtonTappedWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107139814(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010be42f20();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216e60(0);
    _objc_release(uVar2);
  }
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf115c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d020();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf5afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83da0();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (param_3 == 6) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar5 = *(long *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar1;
    func_0x00010c2708a0();
    if (lVar5 != 1) {
      _objc_release(lVar1);
      goto LAB_107139c5c;
    }
    lVar5 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c29a9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c071800();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar3 == 0) {
      lVar4 = lVar5;
      func_0x00010c29a9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0818a0();
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar5);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      if ((int)lVar3 == 0) goto LAB_107139cc4;
      lVar4 = param_1;
      func_0x00010c29a9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2ea0();
    }
    else {
LAB_107139cc4:
      lVar4 = lVar5;
      func_0x00010c2705e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285ec0();
      param_1 = lVar5;
    }
    _objc_release(lVar6);
    _objc_release(lVar4);
code_r0x000107139d00:
    _objc_release(param_1);
    goto LAB_107139d08;
  }
  if (param_3 == 7) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf0f000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c273a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0400();
    goto code_r0x0001071399c0;
  }
  if (param_3 == 0x10) {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c092a20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10caa0();
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_1;
    goto LAB_107139d08;
  }
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c29a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe25c0();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  switch(param_3) {
  case 2:
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2fc40();
    lVar1 = param_1;
    break;
  default:
    goto LAB_107139c5c;
  case 4:
    func_0x00010c1888a0(param_1);
    goto LAB_107139c5c;
  case 10:
    func_0x00010c10d1c0(param_1);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfe0a80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2dc0();
    lVar1 = param_1;
    break;
  case 0xb:
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0420();
    lVar1 = param_1;
    break;
  case 0xf:
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf426c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d840();
    lVar1 = param_1;
    break;
  case 0x11:
    lVar5 = *(long *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c111f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e8a0();
      _objc_release(lVar1);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf0f000();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9ce0();
      lVar1 = param_1;
    }
    else {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c2a0940();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1100();
      lVar1 = param_1;
    }
    break;
  case 0x14:
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2be0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0f7f60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c072ba0();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf5ce40();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010713a0bc;
    }
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0f7f60();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010713a084;
  case 0x15:
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c094ec0();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010713a0bc:
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd05c0();
    lVar1 = param_1;
    break;
  case 0x17:
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010befec80();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010713a084:
    lVar1 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd05c0();
code_r0x0001071399c0:
    _objc_release(lVar1);
    lVar1 = param_1;
    break;
  case 0x18:
    lVar5 = *(long *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c102540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2820();
    _objc_release(lVar4);
    _objc_release(lVar5);
    goto code_r0x000107139d00;
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
LAB_107139d08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
LAB_107139c5c:
  lVar6 = (long)_DAT_1127644f0;
  lVar4 = *(long *)(param_1 + lVar6);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c084c40();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar5 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeToolbarSelectedItem_1125ad138);
    return;
  }
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openToolbarItemType__1126180c8,param_3);
  return;
}



/* Entry: 10713a134; end: 10713a30b; -[PreviewViewController openToolbarItemType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a134(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_3 == 5) && (lVar3 != 0)) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf42260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109fe0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127644f0);
  func_0x00010c2737a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae750;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(uVar4,param_2,puVar6,1);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10713a30c; end: 10713a36b;  */

void FUN_10713a30c(long param_1,undefined1 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10713a36c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  uStack_18 = param_2;
  func_0x00010bcbe2c4("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10713a36c; end: 10713a463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a36c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127644f0;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c3dc0;
  _objc_opt_class(PTR_PTR_1126c3dc0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c20c1e0(uVar1);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010c2737a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10713a464; end: 10713a4cb; -[PreviewViewController closeToolbarSelectedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644f0);
  func_0x00010c2737a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(uVar1,param_2,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10713a4cc; end: 10713a803; -[PreviewViewController previewToolBar:itemDidChangeSelectedState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a4cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c07d660();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10713a804;
  puStack_80 = &UNK_11098fd78;
  lStack_78 = param_1;
  _objc_retain(param_4);
  uStack_68 = (undefined1)lVar1;
  ppuVar2 = &puStack_98;
  lStack_70 = param_4;
  _objc_retainBlock(ppuVar2);
  func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_didChangeToolBarButto_11266dbc8,ppuVar2);
  lVar9 = param_1;
  if ((int)lVar1 == 0) {
    func_0x00010c111f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fe80();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127644f0);
    func_0x00010c273c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83140();
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c6c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bfe2600(param_1);
    func_0x00010c111f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24eb00();
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010be163e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218d20();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c070080();
  func_0x00010c287d60(lVar5,param_2,lVar6,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127644f0;
  func_0x00010c2173a0(*(undefined8 *)(param_1 + lVar9),param_2,lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c274580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  lVar9 = param_4;
  func_0x00010c084c40();
  if (lVar9 == 4) {
    func_0x00010bfa2540(param_1,param_2,param_4,lVar1);
  }
  else {
    lVar9 = param_4;
    func_0x00010c084c40();
    if (lVar9 == 3) {
      func_0x00010c285ea0(param_1,param_2,lVar1,*(undefined8 *)(param_1 + _DAT_112764528));
    }
    else {
      lVar9 = param_4;
      func_0x00010c084c40();
      if (lVar9 == 9) {
        func_0x00010be163e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c218d20();
        _objc_release(param_1);
      }
      else {
        lVar9 = param_4;
        func_0x00010c084c40();
        if (lVar9 == 0xc) {
          func_0x00010c285e00(param_1,param_2,lVar1);
        }
      }
    }
  }
  _objc_release(ppuVar2);
  _objc_release(lStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 10713a804; end: 10713a857;  */

void FUN_10713a804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c084c40(uVar1);
  func_0x00010c240680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10713a858; end: 10713a96f; -[PreviewViewController tearDownQuickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a858(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c11e820();
  if ((int)lVar2 != 0) {
    func_0x00010c1e6b20(param_1);
    lVar2 = (long)_DAT_1127644f0;
    func_0x00010c229560(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c15b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c15b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c15b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c15b960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c15b960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setSendConfirmationView__11265ca48,0);
    return;
  }
  return;
}



/* Entry: 10713a970; end: 10713a9d3; -[PreviewViewController shouldDisplayStatusBar] */

long FUN_10713a970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c22fc40();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 10713a9d4; end: 10713ad13; -[PreviewViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713a9d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127644f0);
    func_0x00010c2737a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2929c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292040();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08ae00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a90c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08ae00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_11276452c) == '\x01') {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf6d9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffe80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764534);
  func_0x00010c0c4e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bda0();
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf840a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a3a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f8a50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10713ad14; end: 10713ad1b; -[PreviewViewController shouldPopToRootViewController] */

undefined8 FUN_10713ad14(void)

{
  return 0;
}



/* Entry: 10713ad1c; end: 10713ad23; -[PreviewViewController shouldPreventOperaBackgroundDismiss] */

undefined8 FUN_10713ad1c(void)

{
  return 1;
}



/* Entry: 10713ad24; end: 10713ad2b; -[PreviewViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_10713ad24(void)

{
  return 0;
}



/* Entry: 10713ad2c; end: 10713ad67; -[PreviewViewController _setupHintLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713ad2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c233980();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c228b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127644f0),PTR_s_setupHintLabels_112667d08);
    return;
  }
  return;
}



/* Entry: 10713ad68; end: 10713ae9f; -[PreviewViewController _logLegacyPreviewActionWithActionIntent:interactionType:] */

void FUN_10713ad68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acb40(uVar3,param_2,param_3,param_4,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


