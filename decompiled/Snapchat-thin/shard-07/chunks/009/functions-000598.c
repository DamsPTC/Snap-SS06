/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b180ec; end: 105b181a3; -[SCRecipientPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b180ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272fc90,0);
  _objc_destroyWeak(param_1 + _DAT_11272fc8c);
  _objc_destroyWeak(param_1 + _DAT_11272fc6c);
  _objc_destroyWeak(param_1 + _DAT_11272fc88);
  _objc_destroyWeak(param_1 + _DAT_11272fc78);
  _objc_destroyWeak(param_1 + _DAT_11272fc64);
  _objc_destroyWeak(param_1 + _DAT_11272fc7c);
  _objc_destroyWeak(param_1 + _DAT_11272fc84);
  _objc_destroyWeak(param_1 + _DAT_11272fc80);
  _objc_destroyWeak(param_1 + _DAT_11272fc74);
  _objc_destroyWeak(param_1 + _DAT_11272fc94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fc68,0);
  return;
}



/* Entry: 105b181a4; end: 105b1864b; -[SCRecipientPickerEventHandler initWithEventTracker:actionButtonProvider:performer:preSelectedItems:disabledItems:sectionCoordinator:sectionCreator:sectionExtensionsProviderFuture:selectionTracker:delegate:] */

undefined8 *
FUN_105b181a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126ebdc8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[9];
    puVar2[9] = param_11;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 10,param_12);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    _objc_initWeak(auStack_90,puVar2);
    uVar5 = puVar2[1];
    func_0x00010bf9a2e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105b1864c;
    puStack_a0 = &UNK_1108d5640;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    uVar5 = puVar2[9];
    func_0x00010bf6d420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105b18694;
    puStack_c8 = &UNK_1108531d0;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = puVar2[9];
    func_0x00010bf6d3e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar7 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = puVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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
  return puVar2;
}



/* Entry: 105b1864c; end: 105b18723;  */

void FUN_105b1864c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be63860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b18724; end: 105b188ff; -[SCRecipientPickerEventHandler _nextEvent:] */

void FUN_105b18724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b18900;
  puStack_30 = &UNK_110841f20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105b18910;
  puStack_58 = &UNK_1108d5670;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105b18924;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b1892c;
  puStack_a8 = &UNK_1108d5670;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105b18940;
  puStack_d0 = &UNK_1108450c8;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105b1894c;
  puStack_f8 = &UNK_1108d56a0;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105b1895c;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x105b18964;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x105b1896c;
  puStack_170 = &UNK_1108d56d0;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x105b18978;
  puStack_198 = &UNK_1108450c8;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x105b18984;
  puStack_1c0 = &UNK_110881940;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x105b18990;
  puStack_1e8 = &UNK_110842e18;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x105b18998;
  puStack_210 = &UNK_110842e18;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  uStack_240 = 0x105b189a0;
  puStack_238 = &UNK_1108450c8;
  uStack_230 = param_1;
  uStack_208 = param_1;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c1580(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,
                      &puStack_200,&puStack_228,&puStack_250);
  return;
}



/* Entry: 105b18900; end: 105b189ab;  */

void FUN_105b18900(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onViewDidLoad_112578b30);
  return;
}



/* Entry: 105b189ac; end: 105b18aab; -[SCRecipientPickerEventHandler _onViewDidLoad] */

void FUN_105b189ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1fb980(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),1,
                      &PTR____CFConstantStringClassReference_110e14e98);
  func_0x00010c1fb960(*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x40) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c297260(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setQueryWithQueryText__112587420,0);
  return;
}



/* Entry: 105b18aac; end: 105b18af3;  */

void FUN_105b18aac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b18af4; end: 105b18b9b; -[SCRecipientPickerEventHandler _onViewDidLoadWithSectionExtensionsProvider:] */

void FUN_105b18af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c1f92a0(uVar2,param_2,param_3);
  func_0x00010c1f92a0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  _objc_release(param_3);
  func_0x00010bea69e0(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b27e0;
  func_0x00010c29cb20(PTR_PTR_1126b27e0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b18b9c; end: 105b18ca3; -[SCRecipientPickerEventHandler _onDidDismissWithSelectedItems:title:selectedItemAttributions:] */

void FUN_105b18b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf79480();
    _objc_release(lVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c25d0a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75440();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b18ca4; end: 105b18d13; -[SCRecipientPickerEventHandler _onNeedsDismissal] */

void FUN_105b18ca4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d72e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b18d14; end: 105b18e1f; -[SCRecipientPickerEventHandler _onConfirmWithSelectedItems:title:selectedItemAttributions:] */

void FUN_105b18d14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf79480();
    _objc_release(lVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c25d0a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74220();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b18e20; end: 105b18eef; -[SCRecipientPickerEventHandler _onSearchWithKeyword:] */

void FUN_105b18e20(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x60);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010bea69e0(param_1);
    }
    else {
      func_0x00010bea69e0(param_1);
      func_0x00010bea2bc0(param_1);
      uVar1 = param_1 + 0x50;
      _objc_loadWeakRetained();
      uVar3 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        lVar2 = param_1 + 0x50;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf77640();
        _objc_release(lVar2);
      }
    }
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b18ef0; end: 105b18fbf; -[SCRecipientPickerEventHandler _onViolateWithSelectedItems:confirmationModel:] */

void FUN_105b18ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c2716e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7eba0(lVar3);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b18fc0; end: 105b19033; -[SCRecipientPickerEventHandler _onTopButtonPressed] */

void FUN_105b18fc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b19034; end: 105b19077; -[SCRecipientPickerEventHandler _onHeaderFocusRequested] */

void FUN_105b19034(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2716e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b19078; end: 105b190f3; -[SCRecipientPickerEventHandler _onGeneratorsUpdated:] */

void FUN_105b19078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf480e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfdfd00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c180b80(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b190f4; end: 105b1916b; -[SCRecipientPickerEventHandler _onUserInputtedTitle:] */

void FUN_105b190f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7ea60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1916c; end: 105b191e3; -[SCRecipientPickerEventHandler _nextSelectionItemToStateMap:] */

void FUN_105b1916c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf794a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b191e4; end: 105b1925b; -[SCRecipientPickerEventHandler _nextSelectionItemUpdates:] */

void FUN_105b191e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf794c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1925c; end: 105b192d3; -[SCRecipientPickerEventHandler _onAvailableSectionsLoaded:] */

void FUN_105b1925c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf79460();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b192d4; end: 105b19343; -[SCRecipientPickerEventHandler _onRender] */

void FUN_105b192d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf79ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b19344; end: 105b193b3; -[SCRecipientPickerEventHandler _titleTextFieldDidBeginEditing] */

void FUN_105b19344(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b193b4; end: 105b194d3; -[SCRecipientPickerEventHandler _onScrollToSection:] */

void FUN_105b193b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      func_0x00010c155c40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c156020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bfecde0(lVar1,param_2,param_3);
      if (lVar2 != 0x7fffffffffffffff) {
        param_1 = param_1 + 0x70;
        _objc_loadWeakRetained();
        lVar2 = param_1;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fc0();
        _objc_release(lVar2);
        _objc_release(param_1);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b194d4; end: 105b19633;  */

void FUN_105b194d4(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,
                      *(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08c9e0(lVar1,param_4,uVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_3 + 0x20);
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,
                        *(undefined8 *)(param_3 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c08c980(lVar4,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar4);
    if (lVar1 != 0) {
      func_0x00010bfb68e0(lVar1);
      func_0x00010bf4c7c0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c182300(0,param_2 - param_1,*(undefined8 *)(param_3 + 0x20),param_4,1);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x00010bfb68e0(lVar3);
    func_0x00010bf4c7c0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c182300(0,param_2 - param_1,*(undefined8 *)(param_3 + 0x20),param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105b19634; end: 105b196b7; -[SCRecipientPickerEventHandler _setQueryWithQueryText:] */

void FUN_105b19634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1158;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03c440();
  _objc_release(param_3);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6360();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b196b8; end: 105b19707; -[SCRecipientPickerEventHandler _setCollectionViewToTop] */

void FUN_105b196b8(double param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + 0x70;
  _objc_loadWeakRetained(param_2);
  _objc_retain();
  func_0x00010bf4c7c0(param_2);
  func_0x00010c182300(0,-param_1,param_2,param_3,0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b19708; end: 105b1971f; -[SCRecipientPickerEventHandler queryResultController] */

void FUN_105b19708(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b19720; end: 105b1972b; -[SCRecipientPickerEventHandler setQueryResultController:] */

void FUN_105b19720(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105b1972c; end: 105b19743; -[SCRecipientPickerEventHandler collectionView] */

void FUN_105b1972c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b19744; end: 105b1974f; -[SCRecipientPickerEventHandler setCollectionView:] */

void FUN_105b19744(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105b19750; end: 105b19767; -[SCRecipientPickerEventHandler header] */

void FUN_105b19750(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b19768; end: 105b19773; -[SCRecipientPickerEventHandler setHeader:] */

void FUN_105b19768(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105b19774; end: 105b1977b; -[SCRecipientPickerEventHandler uiContainer] */

undefined8 FUN_105b19774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105b1977c; end: 105b197ab; -[SCRecipientPickerEventHandler setUiContainer:] */

void FUN_105b1977c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b197ac; end: 105b19873; -[SCRecipientPickerEventHandler .cxx_destruct] */

void FUN_105b197ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105b19874; end: 105b198e7; -[SCRecipientPickerTextFieldHandler initWithEventTracker:] */

undefined1 * FUN_105b19874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebdd0;
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



/* Entry: 105b198e8; end: 105b199c3; -[SCRecipientPickerTextFieldHandler textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_105b198e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b27e0;
  func_0x00010c154940(PTR_PTR_1126b27e0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105b199c4; end: 105b199cb; -[SCRecipientPickerTextFieldHandler textFieldDidEndEditing:] */

void FUN_105b199c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 105b199cc; end: 105b19a33; -[SCRecipientPickerTextFieldHandler textFieldShouldClear:] */

undefined8 FUN_105b199cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c154940(PTR_PTR_1126b27e0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105b19a34; end: 105b19a4f; -[SCRecipientPickerTextFieldHandler textFieldShouldReturn:] */

undefined8 FUN_105b19a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 1;
}



/* Entry: 105b19a50; end: 105b19a5b; -[SCRecipientPickerTextFieldHandler .cxx_destruct] */

void FUN_105b19a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b19a5c; end: 105b19abf; -[SCRecipientPickerEventTracker init] */

undefined1 * FUN_105b19a5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebdd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b19ac0; end: 105b19ac7; -[SCRecipientPickerEventTracker eventSubject] */

undefined8 FUN_105b19ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b19ac8; end: 105b19acf; -[SCRecipientPickerEventTracker headerTitle] */

undefined8 FUN_105b19ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b19ad0; end: 105b19ad7; -[SCRecipientPickerEventTracker setHeaderTitle:] */

void FUN_105b19ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105b19ad8; end: 105b19b07; -[SCRecipientPickerEventTracker .cxx_destruct] */

void FUN_105b19ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b19b08; end: 105b19f17; -[SCRecipientPickerViewController initWithEventHandler:eventTracker:actionButtonProvider:sectionCoordinator:sectionCreator:selectionTracker:performerProvider:emojiOnlyTitle:circumstanceEngine:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b19b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ebde0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11272fce8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fcec;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fcf0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    lVar7 = (long)_DAT_11272fcf4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fcf8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fcfc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11272fd00;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fd04;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bfdfcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb3680();
    *(char *)((long)puVar1 + (long)_DAT_11272fd08) = (char)uVar3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272fd0c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272fd0c) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010c20eaa0(puVar1);
    func_0x00010c21e060(puVar1);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216340();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202660();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b2e0();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1539c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1539c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c189400(puVar1);
    uVar2 = param_5;
    func_0x00010bfdfcc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e2c0(puVar1);
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11272fd10;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b19f18; end: 105b1a04b; -[SCRecipientPickerViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b19f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c2558;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar6 = (long)_DAT_11272fd14;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  puVar2 = PTR_PTR_1126c2560;
  _objc_opt_new(PTR_PTR_1126c2560);
  puVar3 = PTR_PTR_1126c2568;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf40a20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffa00(puVar3,param_2,uVar4,puVar1,*(undefined8 *)(param_1 + _DAT_11272fd0c),puVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272fd18);
  *(undefined **)(param_1 + _DAT_11272fd18) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11272fd1c;
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b1a04c; end: 105b1aba3; -[SCRecipientPickerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1a04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126ebde0;
  puStack_b0 = param_5;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_5);
  puVar1 = param_5;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf80f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar2;
  _objc_release(puVar1);
  func_0x00010c181ec0(0x4035000000000000,puStack_e8);
  puVar1 = param_5;
  func_0x00010c25fc80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010c25fc80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0bd00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8d060();
  puVar2 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2716e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = param_5;
    func_0x00010bfdf5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2792c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c2570;
  _objc_alloc();
  lVar11 = (long)_DAT_11272fcec;
  func_0x00010c010da0();
  uVar10 = *(undefined8 *)(param_5 + _DAT_11272fd20);
  *(undefined **)(param_5 + _DAT_11272fd20) = puVar1;
  _objc_release(uVar10);
  puVar1 = param_5;
  func_0x00010bfdf5e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(puVar1);
  lVar12 = (long)_DAT_11272fcf0;
  uVar4 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfdfcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c239160();
  _objc_release(uVar4);
  if ((int)uVar10 != 0) {
    puVar1 = PTR_PTR_1126c2578;
    _objc_alloc();
    puVar2 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c153980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0429c0();
    uVar10 = *(undefined8 *)(param_5 + _DAT_11272fd24);
    *(undefined **)(param_5 + _DAT_11272fd24) = puVar1;
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar10 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010beee0c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar10;
  func_0x00010c160fc0(uVar10);
  puVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_5 + _DAT_11272fd28);
  *(undefined **)(param_5 + _DAT_11272fd28) = puVar1;
  _objc_release(uVar10);
  lVar12 = (long)_DAT_11272fce8;
  func_0x00010c1e64a0(*(undefined8 *)(param_5 + lVar12));
  func_0x00010c17e6a0(*(undefined8 *)(param_5 + lVar12));
  uVar10 = *(undefined8 *)(param_5 + lVar12);
  puVar1 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7600(uVar10);
  _objc_release(puVar1);
  uVar10 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010bf9a2e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b27e0;
  func_0x00010c29cb20(PTR_PTR_1126b27e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_initWeak(auStack_b8,param_5);
  uVar5 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010bf9a2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b1aba4;
  puStack_c8 = &UNK_1108d5640;
  puVar9 = auStack_b8;
  _objc_copyWeak(auStack_c0,puVar9);
  uVar4 = uVar10;
  func_0x00010c25ff60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar5);
  if (param_5[_DAT_11272fd08] == '\x01') {
    puVar2 = param_5;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c153980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf179a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar11 = (long)_DAT_11272fd2c;
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    *(undefined **)(param_5 + lVar11) = puVar1;
    _objc_release(uVar10);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar11));
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    puVar1 = param_5;
    func_0x00010bf14800(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar10);
    _objc_release(puVar1);
    puVar1 = param_5;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf80f60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11272fd30;
    uVar10 = *(undefined8 *)(param_5 + lVar12);
    *(undefined **)(param_5 + lVar12) = puVar2;
    _objc_release(uVar10);
    _objc_release(puVar1);
    puVar1 = param_5;
    func_0x00010c25fc80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_5;
    func_0x00010c25fc80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bd00();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar13 = (long)_DAT_11272fd34;
    uVar10 = *(undefined8 *)(param_5 + lVar13);
    *(undefined **)(param_5 + lVar13) = puVar1;
    _objc_release(uVar10);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar13));
    func_0x00010c182220(*(undefined8 *)(param_5 + lVar13));
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010bf5e160(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar13));
    _objc_release(uVar10);
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    puStack_f8 = puVar1;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    puVar1 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c19f0e0(0,0,param_3,param_4 + 100.0,puStack_f8);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0(puVar1);
    func_0x00010c16e440(puStack_f8);
    _objc_release(puVar1);
    uVar10 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar10);
    puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    uStack_108 = uVar10;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uStack_108;
    puStack_110 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + lVar13);
    uStack_118 = uVar10;
    uStack_a0 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    uStack_128 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_128;
    puStack_130 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar13);
    uStack_98 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar13);
    uStack_90 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_138);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puStack_130);
    _objc_release(puStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_118);
    _objc_release(puStack_110);
    _objc_release(puStack_100);
    _objc_release(uStack_108);
    _objc_release(puStack_f8);
  }
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_f0);
  puVar2 = puStack_e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_148 = FUN_105b1aba4;
  uStack_170 = uVar10;
  puStack_168 = puVar1;
  puStack_160 = param_5;
  puStack_158 = puVar2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_178,puVar3 + 0x20);
  func_0x00010c0c1580(puVar9);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar9);
  return;
}



/* Entry: 105b1aba4; end: 105b1ac67;  */

void FUN_105b1aba4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1580(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b1ac68; end: 105b1ac93;  */

void FUN_105b1ac68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1ac94; end: 105b1ad43; -[SCRecipientPickerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1ac94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11272fd38) = 1;
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11272fd18),param_2,param_1);
  puStack_38 = PTR_PTR_1126ebde0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  func_0x00010be5b7c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11272fd3c) = puVar2;
  _objc_release(puVar1);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 105b1ad44; end: 105b1ad93; -[SCRecipientPickerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1ad44(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebde0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  *(undefined1 *)(param_1 + _DAT_11272fd40) = 1;
  return;
}



/* Entry: 105b1ad94; end: 105b1ae17; -[SCRecipientPickerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1ad94(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebde0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + _DAT_11272fd40) = 0;
  return;
}



/* Entry: 105b1ae18; end: 105b1af93; -[SCRecipientPickerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1ae18(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ebde0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    bVar7 = *(byte *)(param_1 + (long)_DAT_11272fd44) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  _objc_release();
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if (((uVar1 & 1) != 0) || ((bVar7 & 1) != 0)) {
    lVar8 = (long)_DAT_11272fcfc;
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0ecca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0ecd00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11272fcec);
    func_0x00010bf9a2e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b27e0;
    uVar1 = param_1;
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010bfb4ec0(*(undefined8 *)(param_1 + (long)_DAT_11272fd18));
  return;
}



/* Entry: 105b1af94; end: 105b1af97; -[SCRecipientPickerViewController preferredStatusBarStyle] */

undefined8 FUN_105b1af94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105b1af98; end: 105b1af9f; -[SCRecipientPickerViewController prefersStatusBarHidden] */

undefined8 FUN_105b1af98(void)

{
  return 0;
}



/* Entry: 105b1afa0; end: 105b1b013; -[SCRecipientPickerViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_105b1afa0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebde0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b1b014; end: 105b1b10b; -[SCRecipientPickerViewController searchQueryResultControllerDidUpdateQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b014(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272fd48;
  if (((*(byte *)(param_1 + lVar4) & 1) == 0) &&
     (lVar1 = param_3, func_0x00010bf5fcc0(), lVar1 != 1)) {
    *(undefined1 *)(param_1 + lVar4) = 1;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272fcec);
    func_0x00010bf9a2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b27e0;
    func_0x00010bf79b40(PTR_PTR_1126b27e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar4 = param_3;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    func_0x00010c11d8c0(*(undefined8 *)(param_1 + _DAT_11272fd18));
  }
  else {
    func_0x00010bfb4ec0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1b10c; end: 105b1b10f; -[SCRecipientPickerViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

void FUN_105b1b10c(void)

{
  return;
}



/* Entry: 105b1b110; end: 105b1b113; -[SCRecipientPickerViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_105b1b110(void)

{
  return;
}



/* Entry: 105b1b114; end: 105b1b123; -[SCRecipientPickerViewController searchQueryResultControllerShouldReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105b1b114(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272fd38);
}



/* Entry: 105b1b124; end: 105b1b13f; -[SCRecipientPickerViewController searchQueryResultControllerDidSuspendQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b124(long param_1)

{
  if (*(char *)(param_1 + _DAT_11272fd38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be5b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__makeContentVisibleIfNotLoaded_112574790);
    return;
  }
  return;
}



/* Entry: 105b1b140; end: 105b1b213; -[SCRecipientPickerViewController headerItem:userEnteredTextForTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b140(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c216240(param_1,param_2,param_4);
  }
  if (*(char *)(param_1 + _DAT_11272fd40) == '\x01') {
    func_0x00010c21e400(*(undefined8 *)(param_1 + _DAT_11272fcf0),param_2,param_4);
    lVar3 = (long)_DAT_11272fcec;
    func_0x00010c1a7a60(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf9a2e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b27e0;
    func_0x00010c292960(PTR_PTR_1126b27e0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b1b214; end: 105b1b2eb; -[SCRecipientPickerViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + _DAT_11272fd40) = 0;
  _objc_retain(param_3);
  func_0x00010be02be0(param_1);
  puStack_28 = PTR_PTR_1126ebde0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272fcec);
    func_0x00010bf9a2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b27e0;
    func_0x00010c0d72e0(PTR_PTR_1126b27e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105b1b2ec; end: 105b1b34f; -[SCRecipientPickerViewController titleTextFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b2ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272fcec);
  func_0x00010bf9a2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c271700(PTR_PTR_1126b27e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1b350; end: 105b1b353; -[SCRecipientPickerViewController willConfirmWithSelection] */

void FUN_105b1b350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissKeyboard_11255e498);
  return;
}



/* Entry: 105b1b354; end: 105b1b4eb; -[SCRecipientPickerViewController didUpdateHeaderModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b354(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(param_1,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c081280(param_3);
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2163c0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2715a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c274840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c274840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(lVar1);
    func_0x00010befbd60(puVar3,param_2,param_1,PTR_s__topRightButtonPressed_11252c830,0x40);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7a60(*(undefined8 *)(param_1 + _DAT_11272fcec),param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1b4ec; end: 105b1b84f; -[SCRecipientPickerViewController sectionsDidRenderWithViewModelsMapping:dataReadyTimestampMapping:renderTimestampMapping:visibleCellsNumberMapping:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b4ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar6);
      lVar8 = lVar6;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar6);
          }
          uVar9 = *(ulong *)(lVar15 * 8);
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126b52c0;
          _objc_opt_class(PTR_PTR_1126b52c0);
          uVar11 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar10);
          uVar1 = uVar9;
          if ((uVar11 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar9);
          uVar11 = uVar1;
          func_0x00010bfecc60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar11;
          func_0x00010c15a7a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar11);
          if (uVar9 != 0) {
            uVar11 = uVar1;
            func_0x00010bfecc60(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar11;
            func_0x00010c15a7a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar7);
            _objc_release(uVar9);
            _objc_release(uVar11);
          }
          _objc_release(uVar1);
          lVar15 = lVar15 + 1;
        } while (lVar8 != lVar15);
        lVar8 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      puVar10 = puVar7;
      func_0x00010bf51e00(puVar7);
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(lVar6);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar5);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11272fcec);
  func_0x00010bf9a2e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b27e0;
  puVar10 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010bf129e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar12);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_3 + _DAT_11272fd44) = 1;
  return;
}



/* Entry: 105b1b850; end: 105b1b863; -[SCRecipientPickerViewController _setNeededDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b850(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11272fd44) = 1;
  return;
}



/* Entry: 105b1b864; end: 105b1b8c7; -[SCRecipientPickerViewController _makeContentVisibleIfNotLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b864(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11272fd48) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272fd14);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272fcf4);
  func_0x00010bf5fca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128620(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1b8c8; end: 105b1b953; -[SCRecipientPickerViewController _dismissKeyboard] */

void FUN_105b1b8c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2716e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1b954; end: 105b1b9b7; -[SCRecipientPickerViewController _topRightButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272fcec);
  func_0x00010bf9a2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b27e0;
  func_0x00010c274280(PTR_PTR_1126b27e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1b9b8; end: 105b1b9cb; -[SCRecipientPickerViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b9b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272fd34),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 105b1b9cc; end: 105b1bb1b; -[SCRecipientPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1b9cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272fd04,0);
  _objc_storeStrong(param_1 + _DAT_11272fd10,0);
  _objc_storeStrong(param_1 + _DAT_11272fd30,0);
  _objc_storeStrong(param_1 + _DAT_11272fd34,0);
  _objc_storeStrong(param_1 + _DAT_11272fd2c,0);
  _objc_storeStrong(param_1 + _DAT_11272fd0c,0);
  _objc_storeStrong(param_1 + _DAT_11272fd18,0);
  _objc_storeStrong(param_1 + _DAT_11272fd28,0);
  _objc_storeStrong(param_1 + _DAT_11272fd1c,0);
  _objc_storeStrong(param_1 + _DAT_11272fcf0,0);
  _objc_storeStrong(param_1 + _DAT_11272fd24,0);
  _objc_storeStrong(param_1 + _DAT_11272fd20,0);
  _objc_storeStrong(param_1 + _DAT_11272fd14,0);
  _objc_storeStrong(param_1 + _DAT_11272fd00,0);
  _objc_storeStrong(param_1 + _DAT_11272fcfc,0);
  _objc_storeStrong(param_1 + _DAT_11272fcf8,0);
  _objc_storeStrong(param_1 + _DAT_11272fcf4,0);
  _objc_storeStrong(param_1 + _DAT_11272fcec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fce8,0);
  return;
}



/* Entry: 105b1bb1c; end: 105b1beab; -[SCRecipientPickerActionButtonProvider initWithConfirmationModelGenerator:eventTracker:headerModelGenerator:selectionTracker:] */

undefined8 *
FUN_105b1bb1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ebde8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    _objc_retainBlock();
    uVar8 = puVar1[6];
    puVar1[6] = lVar2;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar8);
    lVar2 = param_5;
    _objc_retainBlock();
    uVar8 = puVar1[7];
    puVar1[7] = lVar2;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar8 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar8);
    uVar8 = param_6;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    (**(code **)(param_5 + 0x10))(param_5,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[10];
    puVar1[10] = lVar2;
    _objc_release(uVar9);
    uVar3 = puVar1[10];
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,uVar8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2580;
    lVar4 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c071800(lVar2);
    func_0x00010c195460(puVar5);
    func_0x00010befbd60(puVar5);
    _objc_retain(puVar5);
    uVar9 = puVar1[8];
    puVar1[8] = puVar5;
    _objc_release(uVar9);
    _objc_retain(uVar3);
    uVar9 = puVar1[9];
    puVar1[9] = uVar3;
    _objc_release(uVar9);
    uVar9 = uVar8;
    func_0x00010bf51e00();
    uVar10 = puVar1[3];
    puVar1[3] = uVar9;
    _objc_release(uVar10);
    _objc_retain(lVar2);
    uVar9 = puVar1[4];
    puVar1[4] = lVar2;
    _objc_release(uVar9);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar9 = puVar1[5];
    puVar1[5] = puVar6;
    _objc_release(uVar9);
    _objc_initWeak(auStack_78,puVar1);
    uVar7 = puVar1[2];
    func_0x00010bf6d420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar10 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(uVar8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b1beac; end: 105b1bed7;  */

void FUN_105b1beac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1bed8; end: 105b1bf3b; -[SCRecipientPickerActionButtonProvider setUserEnteredTitle:] */

void FUN_105b1bed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be6c2c0(param_1,param_2,*(undefined8 *)(param_1 + 0x18),param_3);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b1bf3c; end: 105b1bfbf; -[SCRecipientPickerActionButtonProvider setConfirmationModelGenerator:headerModelGenerator:] */

void FUN_105b1bf3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar2);
  func_0x00010be69740(param_1);
  uVar2 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__onUpdateWithSelectedItems_title_112578a50,
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 105b1bfc0; end: 105b1c05f; -[SCRecipientPickerActionButtonProvider _onHeaderUpdateWithSelectedItems:] */

void FUN_105b1bfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  (**(code **)(uVar1 + 0x10))(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar1;
    _objc_release(uVar3);
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf7e2c0();
    _objc_release(lVar4);
    uVar2 = uVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1c060; end: 105b1c0d7; -[SCRecipientPickerActionButtonProvider _onSelectionUpdate] */

void FUN_105b1c060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ecca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c071b60(uVar2,param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be69740(param_1,param_2,uVar1);
    func_0x00010be6c2c0(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x48));
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b1c0d8; end: 105b1c29f; -[SCRecipientPickerActionButtonProvider _onUpdateWithSelectedItems:title:] */

bool FUN_105b1c0d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  (**(code **)(uVar1 + 0x10))(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29f8c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar5 = uVar1;
    func_0x00010bf48140();
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf9a2e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b27e0;
      func_0x00010c29f8a0(PTR_PTR_1126b27e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
  }
  uVar2 = uVar1;
  func_0x00010c29f8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c071ae0();
  if ((uVar5 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c071800(uVar1);
    func_0x00010c195460(uVar3);
    uVar6 = *(ulong *)(param_1 + 0x40);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = uVar1;
      func_0x00010c2711a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(uVar3);
      _objc_release(uVar5);
    }
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2 == 0;
}



/* Entry: 105b1c2a0; end: 105b1c3a3; -[SCRecipientPickerActionButtonProvider _actionButtonPressed] */

void FUN_105b1c2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a5d00();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29f8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b27e0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0ecd00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48080(puVar4,param_2,uVar5,uVar6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b27e0;
    func_0x00010c29f8a0(PTR_PTR_1126b27e0,param_2,uVar5,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b1c3a4; end: 105b1c3ab; -[SCRecipientPickerActionButtonProvider actionButton] */

undefined8 FUN_105b1c3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105b1c3ac; end: 105b1c3b3; -[SCRecipientPickerActionButtonProvider userEnteredTitle] */

undefined8 FUN_105b1c3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105b1c3b4; end: 105b1c3bb; -[SCRecipientPickerActionButtonProvider headerModel] */

undefined8 FUN_105b1c3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105b1c3bc; end: 105b1c3d3; -[SCRecipientPickerActionButtonProvider delegate] */

void FUN_105b1c3bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b1c3d4; end: 105b1c3df; -[SCRecipientPickerActionButtonProvider setDelegate:] */

void FUN_105b1c3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105b1c3e0; end: 105b1c477; -[SCRecipientPickerActionButtonProvider .cxx_destruct] */

void FUN_105b1c3e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105b1c478; end: 105b1c6f7; -[SCSelectionBestFriendSectionExtension initWithActionHandler:friendmojiPresenter:imageDownloader:performer:sectionIdentifier:selectionTracker:snapchatterObservableRepository:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_105b1c478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126ebdf0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_9);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c2590;
    _objc_alloc();
    func_0x00010bff03c0();
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c2598;
    _objc_alloc();
    func_0x00010c044380();
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c25a0;
    _objc_alloc();
    func_0x00010bfef460();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_9);
    _objc_release(param_6);
  }
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



/* Entry: 105b1c6f8; end: 105b1c727;  */

void FUN_105b1c6f8(void)

{
  _objc_alloc(PTR_PTR_1126c2588);
  func_0x00010c0350a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b1c728; end: 105b1c72f; -[SCSelectionBestFriendSectionExtension sectionIdentifiers] */

undefined8 FUN_105b1c728(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b1c730; end: 105b1c737; -[SCSelectionBestFriendSectionExtension sectionCreator] */

undefined8 FUN_105b1c730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b1c738; end: 105b1c73f; -[SCSelectionBestFriendSectionExtension sectionDescriptor] */

undefined8 FUN_105b1c738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b1c740; end: 105b1c747; -[SCSelectionBestFriendSectionExtension sectionIndexer] */

undefined8 FUN_105b1c740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b1c748; end: 105b1c78f; -[SCSelectionBestFriendSectionExtension .cxx_destruct] */

void FUN_105b1c748(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b1c790; end: 105b1c9f3; -[SCSelectionBestFriendSectionCreator initWithActionHandler:friendmojiPresenter:imageDownloader:sectionIdentifier:sectionDataSource:selectionTracker:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_105b1c790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126ebdf8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c25b0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043480();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_4);
  }
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



/* Entry: 105b1c9f4; end: 105b1ca27;  */

void FUN_105b1c9f4(void)

{
  _objc_alloc(PTR_PTR_1126c25a8);
  func_0x00010c0160a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b1ca28; end: 105b1ca2f; -[SCSelectionBestFriendSectionCreator sectionForDescriptor:] */

void FUN_105b1ca28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b1ca30; end: 105b1ca5f; -[SCSelectionBestFriendSectionCreator .cxx_destruct] */

void FUN_105b1ca30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


