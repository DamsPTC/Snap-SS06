/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ede500; end: 105ede533;  */

void FUN_105ede500(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ede534; end: 105ede693; -[SCMapLocationOnboardingController _fetchBlankBitmojiImageWithCompletion:] */

void FUN_105ede534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b20c0;
  func_0x00010687982c(0x4063600000000000,PTR_PTR_1126b20c0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b20c0;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105ede694;
  puStack_60 = &UNK_110853e40;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000106879d48(puVar1,puVar3,uVar4,&puStack_78);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105ede694; end: 105ede7b3;  */

void FUN_105ede694(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)(lVar1 + 0xa0) = param_2;
      _objc_release(uVar2);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105ede7b4;
      puStack_58 = &UNK_110848708;
      _objc_copyWeak(auStack_48,param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_50 = uVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_release(uStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105ede7b4; end: 105ede7e7;  */

void FUN_105ede7b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ede7e8; end: 105ede923; -[SCMapLocationOnboardingController _handleUpsellAssetCompletionWithCompletion:] */

void FUN_105ede7e8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bee6c20();
  if ((*(long *)(param_1 + 0x98) == 0) ||
     ((((uVar1 & 1) == 0 && (*(long *)(param_1 + 0xa0) == 0)) ||
      (uVar1 = param_1, func_0x00010be19a40(), (long)uVar1 < 1)))) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c135c80(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ede924; end: 105ede9b7;  */

void FUN_105ede924(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ede9b8;
  puStack_40 = &UNK_1108511c8;
  uStack_28 = param_2;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 105ede9b8; end: 105edea0f;  */

void FUN_105ede9b8(long param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x01') {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be7f280();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000105edea0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),cVar1);
  return;
}



/* Entry: 105edea10; end: 105eded03; -[SCMapLocationOnboardingController _presentUpsellTrayWithStyle:] */

void FUN_105edea10(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = param_1;
  func_0x00010bee6c20();
  if (*(long *)(param_1 + 0x98) != 0) {
    if ((uVar1 & 1) == 0) {
      if (param_3 == 0) {
        return;
      }
      param_3 = *(long *)(param_1 + 0xa0);
    }
    if ((param_3 != 0) && (*(long *)(param_1 + 0x90) == 0)) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      uVar1 = param_1;
      func_0x00010be19a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126c5ab0;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7b80();
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar4;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar2);
      uVar6 = 0x12;
      func_0x000109203bc0(0x12);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf59b60(0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_initWeak(auStack_68,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c0ba2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      uVar2 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = uVar2;
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106c1af90();
      func_0x00010bdd4000(param_1);
      func_0x00010be19740(param_1);
      func_0x00010c22abe0(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  return;
}



/* Entry: 105eded04; end: 105eded4b;  */

void FUN_105eded04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eded4c; end: 105edee63; -[SCMapLocationOnboardingController _handleUpsellAction:style:updatedPreferences:viewTime:] */

void FUN_105eded4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    if (param_6 == 0) {
      lVar1 = *(long *)(param_2 + 0x18);
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      _objc_retain(param_6);
      lVar2 = param_6;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    lVar1 = lVar2;
    func_0x000106c1af90(lVar2);
    lVar3 = param_2;
    func_0x00010be19a40(param_2,param_3,1);
    lVar4 = param_2;
    func_0x00010bdd4000(param_2);
    lVar5 = param_2;
    func_0x00010be19740(param_2);
    uVar6 = param_5 - 1;
    if (3 < uVar6) {
      uVar6 = 0xffffffffffffffff;
    }
    func_0x00010c22abc0(param_1,uVar7,param_3,param_4,lVar1,lVar3,lVar4,lVar5,uVar6);
    *(undefined1 *)(param_2 + 0x80) = 1;
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105edee64; end: 105edeebf; -[SCMapLocationOnboardingController _handleTrayEvent:] */

void FUN_105edee64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105edeec0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0c1800(param_3,param_2,0,0,&puStack_38);
  return;
}



/* Entry: 105edeec0; end: 105edef37;  */

void FUN_105edeec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x80) & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x88);
    func_0x00010c25dfa0(uVar1);
    func_0x00010c26f7a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
    func_0x00010be32ce0(lVar2,param_2,1,uVar1,0);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105edef38; end: 105edf0bf; -[SCMapLocationOnboardingController locationUpsellShareToAllFriends:] */

void FUN_105edef38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126bf2d8;
  _objc_alloc(PTR_PTR_1126bf2d8);
  uVar5 = uVar1;
  func_0x00010c2a4ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1c9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e7d40(uVar1);
  func_0x00010c045c80(puVar2,param_3,1,0,0,uVar5,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c25dfa0(param_4);
  func_0x00010c26f7a0(param_4);
  _objc_release(param_4);
  func_0x00010be32ce0(param_1,param_2,param_3,3,uVar5,puVar2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ed20();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287680();
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105edf0c0; end: 105edf15b; -[SCMapLocationOnboardingController locationUpsellShowMapSettings:] */

void FUN_105edf0c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c25dfa0(param_4);
  func_0x00010c26f7a0(param_4);
  _objc_release(param_4);
  func_0x00010be32ce0(param_1,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ed20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be47bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__launchMapSettings_11256f898);
  return;
}



/* Entry: 105edf15c; end: 105edf1f7; -[SCMapLocationOnboardingController locationUpsellShareToSelectFriends:] */

void FUN_105edf15c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c25dfa0(param_4);
  func_0x00010c26f7a0(param_4);
  _objc_release(param_4);
  func_0x00010be32ce0(param_1,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ed20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be47910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__launchFriendPicker_11256f7e0);
  return;
}



/* Entry: 105edf1f8; end: 105edf28b; -[SCMapLocationOnboardingController locationUpsellShouldDismiss:] */

void FUN_105edf1f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c25dfa0(param_4);
  func_0x00010c26f7a0(param_4);
  _objc_release(param_4);
  func_0x00010be32ce0(param_1,param_2,param_3,0,uVar1,0);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ed20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105edf28c; end: 105edf34b; -[SCMapLocationOnboardingController _launchMapSettings] */

void FUN_105edf28c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  puVar2 = PTR_PTR_1126c3158;
  _objc_alloc(PTR_PTR_1126c3158);
  func_0x00010c0583c0();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c08bd40(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105edf34c; end: 105edf387; -[SCMapLocationOnboardingController locationUpsellShareHappened:] */

void FUN_105edf34c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105edf388; end: 105edf433; -[SCMapLocationOnboardingController _launchFriendPicker] */

void FUN_105edf388(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  puVar3 = PTR_PTR_1126c5ab8;
  _objc_alloc(PTR_PTR_1126c5ab8);
  func_0x00010c0568a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105edf434; end: 105edf443; -[SCMapLocationOnboardingController locationSharingSettingsScopeDidDismiss] */

void FUN_105edf434(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105edf444; end: 105edf48b; -[SCMapLocationOnboardingController mapFriendPickerScopeDidDismiss] */

void FUN_105edf444(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105edf48c; end: 105edf587; -[SCMapLocationOnboardingController .cxx_destruct] */

void FUN_105edf48c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 105edf588; end: 105ee00a3; -[SCMapLocationOnboardingTrayView initWithFrame:delegate:bitmojiAvatarGenerator:peopleFriendsProvider:friends:currentUser:style:mapPropImage:blankBitmojiImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105edf588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_88 = PTR_PTR_1126ede30;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112739b9c,param_7);
    lVar8 = (long)_DAT_112739ba0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_8;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739ba4) = param_12;
    uVar4 = param_10;
    func_0x00010bf529e0();
    puVar2 = PTR__CGRectZero_110347608;
    if (uVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),
                          *(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x18));
      lVar8 = (long)_DAT_112739ba8;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar5;
      _objc_release(uVar3);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
      uVar4 = param_10;
      func_0x00010c0dfd40(param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4ca40(puVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010befbb60(puVar1);
    }
    uVar4 = param_10;
    func_0x00010bf529e0();
    if (1 < uVar4) {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),
                          *(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x18));
      lVar8 = (long)_DAT_112739bac;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar5;
      _objc_release(uVar3);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
      uVar4 = param_10;
      func_0x00010c0dfd40(param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4ca40(puVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010befbb60(puVar1);
    }
    uVar4 = param_10;
    func_0x00010bf529e0();
    if (2 < uVar4) {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),
                          *(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x18));
      lVar8 = (long)_DAT_112739bb0;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar5;
      _objc_release(uVar3);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
      uVar4 = param_10;
      func_0x00010c0dfd40(param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4ca40(puVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010befbb60(puVar1);
    }
    uVar4 = param_10;
    func_0x00010bf529e0();
    if (uVar4 < 4) {
      uVar3 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)(puVar2 + 8);
      uVar10 = *(undefined8 *)(puVar2 + 0x10);
      uVar11 = *(undefined8 *)(puVar2 + 0x18);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      uVar3 = *(undefined8 *)puVar2;
      uVar9 = *(undefined8 *)(puVar2 + 8);
      uVar10 = *(undefined8 *)(puVar2 + 0x10);
      uVar11 = *(undefined8 *)(puVar2 + 0x18);
      func_0x00010c013de0(uVar3,uVar9,uVar10,uVar11);
      lVar8 = (long)_DAT_112739bb4;
      uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar5;
      _objc_release(uVar7);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
      uVar4 = param_10;
      func_0x00010c0dfd40(param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4ca40(puVar1);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010befbb60(puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar3,uVar9,uVar10,uVar11);
    lVar8 = (long)_DAT_112739bb8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    uVar3 = param_11;
    func_0x00010bf1acc0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4ca40(puVar1);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_112739bbc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    func_0x00010c15cda0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112739bc0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c219b60(uVar3);
    FUN_105ee1ff8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112739bc4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c219b60(uVar3);
    func_0x000105ee2010();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(uVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112739bc8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    func_0x000105ee2028();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112739bcc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x000105ee2040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar3);
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112739bd0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x000105ee2058();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar3);
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112739bd4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x000105ee2070();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar3);
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112739bd8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar3);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x000105ee2088();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar9);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar3);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar3 = param_9;
    func_0x00010bf00100(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bde5cc0(puVar1);
    _objc_release(uVar3);
    func_0x00010bde4f00(puVar1);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105ee00a4; end: 105ee00d7; -[SCMapLocationOnboardingTrayView _letsGoButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee00a4(long param_1)

{
  param_1 = param_1 + _DAT_112739b9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c098980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee00d8; end: 105ee010b; -[SCMapLocationOnboardingTrayView _allMyFriendsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee00d8(long param_1)

{
  param_1 = param_1 + _DAT_112739b9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf004e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee010c; end: 105ee013f; -[SCMapLocationOnboardingTrayView _selectFriendsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee010c(long param_1)

{
  param_1 = param_1 + _DAT_112739b9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c158aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee0140; end: 105ee0173; -[SCMapLocationOnboardingTrayView _skipTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee0140(long param_1)

{
  param_1 = param_1 + _DAT_112739b9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23e4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee0174; end: 105ee0d97; -[SCMapLocationOnboardingTrayView _configureConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee0174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined *puVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_1,param_2,0);
  puVar45 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar48 = (long)_DAT_112739bc0;
  uVar1 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493c0(0x4020000000000000,uVar1,param_2,lVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar48);
  uStack_f0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0x4024000000000000,uVar3,param_2,lVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar48);
  uStack_e8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc024000000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_112739bc4;
  uVar8 = *(undefined8 *)(param_1 + lVar51);
  uStack_e0 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar8;
  func_0x00010bf493c0(0x4018000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar51);
  uStack_d8 = uVar33;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar48);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar51);
  uStack_d0 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar11;
  func_0x00010bf49400(0x3fe999999999999a,0,uVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar49 = (long)_DAT_112739bb8;
  uVar13 = *(undefined8 *)(param_1 + lVar49);
  uStack_c8 = uVar35;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar51);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar13;
  func_0x00010bf493c0(0x4014000000000000,uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar49);
  uStack_c0 = uVar36;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar49);
  uStack_b8 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf49420(0x4063600000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar49);
  uStack_b0 = uVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf49420(0x4063600000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_112739bbc;
  uVar22 = *(undefined8 *)(param_1 + lVar52);
  uStack_a8 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493c0(0x403e000000000000,uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar52);
  uStack_a0 = uVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar52);
  uStack_98 = uVar26;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar52);
  uStack_90 = uVar28;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = 0xe;
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar45,param_2,puVar31);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar49);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar36);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar35);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar34);
  _objc_release(lVar48);
  _objc_release(uVar10);
  _objc_release(uVar33);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar32);
  _objc_release(uVar1);
  puVar45 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar50 = (long)_DAT_112739ba8;
  lVar32 = *(long *)(param_1 + lVar50);
  if (lVar32 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar32;
    func_0x00010bf493c0(0x4045000000000000,lVar32,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + lVar50);
    lStack_110 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar34;
    func_0x00010bf493c0(0xc04e000000000000,uVar34,param_2,lVar48);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + lVar50);
    uStack_108 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar35;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + lVar50);
    uStack_100 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar36;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = 4;
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_110);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar45,param_2,puVar31);
    _objc_release(puVar31);
    _objc_release(uVar7);
    _objc_release(uVar36);
    _objc_release(uVar4);
    _objc_release(uVar35);
    _objc_release(uVar2);
    _objc_release(lVar48);
    _objc_release(uVar34);
    _objc_release(lVar6);
    _objc_release(uVar33);
    _objc_release(lVar32);
  }
  puVar45 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar50 = (long)_DAT_112739bac;
  lVar32 = *(long *)(param_1 + lVar50);
  if (lVar32 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar32;
    func_0x00010bf493c0(0x4045000000000000,lVar32,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + lVar50);
    lStack_130 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar34;
    func_0x00010bf493c0(0x404e000000000000,uVar34,param_2,lVar48);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + lVar50);
    uStack_128 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar35;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + lVar50);
    uStack_120 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar36;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = 4;
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar45,param_2,puVar31);
    _objc_release(puVar31);
    _objc_release(uVar7);
    _objc_release(uVar36);
    _objc_release(uVar4);
    _objc_release(uVar35);
    _objc_release(uVar2);
    _objc_release(lVar48);
    _objc_release(uVar34);
    _objc_release(lVar6);
    _objc_release(uVar33);
    _objc_release(lVar32);
  }
  puVar45 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar50 = (long)_DAT_112739bb0;
  lVar32 = *(long *)(param_1 + lVar50);
  if (lVar32 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar32;
    func_0x00010bf493c0(0x404a000000000000,lVar32,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + lVar50);
    lStack_150 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar34;
    func_0x00010bf493c0(0xc059000000000000,uVar34,param_2,lVar48);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + lVar50);
    uStack_148 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar35;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + lVar50);
    uStack_140 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar36;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = 4;
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_150);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar45,param_2,puVar31);
    _objc_release(puVar31);
    _objc_release(uVar7);
    _objc_release(uVar36);
    _objc_release(uVar4);
    _objc_release(uVar35);
    _objc_release(uVar2);
    _objc_release(lVar48);
    _objc_release(uVar34);
    _objc_release(lVar6);
    _objc_release(uVar33);
    _objc_release(lVar32);
  }
  puVar45 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar50 = (long)_DAT_112739bb4;
  lVar32 = *(long *)(param_1 + lVar50);
  if (lVar32 != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar51);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar32;
    func_0x00010bf493c0(0x404a000000000000,lVar32,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + lVar50);
    lStack_170 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar34;
    func_0x00010bf493c0(0x4059000000000000,uVar34,param_2,lVar48);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + lVar50);
    uStack_168 = uVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar35;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + lVar50);
    uStack_160 = uVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar36;
    func_0x00010bf49420(0x4063600000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = 4;
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_158 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar45,param_2,puVar31);
    _objc_release(puVar31);
    _objc_release(uVar7);
    _objc_release(uVar36);
    _objc_release(uVar4);
    _objc_release(uVar35);
    _objc_release(uVar2);
    _objc_release(lVar48);
    _objc_release(uVar34);
    _objc_release(lVar6);
    _objc_release(uVar33);
    _objc_release(lVar32);
  }
  uVar46 = *(ulong *)(param_1 + _DAT_112739ba4);
  func_0x00010be48ee0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar37 = uVar47;
  _objc_retain(uVar47);
  if ((uVar46 & 0xfffffffffffffffd) == 1) {
    FUN_105ee1ff8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc0),param_2,uVar37);
    _objc_release(uVar37);
    func_0x000105ee2010();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc4),param_2,uVar37);
  }
  else {
    func_0x000105ee20a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc0),param_2,uVar37);
    _objc_release(uVar37);
    func_0x000105ee2010();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_112739bc4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar32),param_2,uVar37);
    _objc_release(uVar37);
    uVar37 = uVar47;
    func_0x00010bf529e0();
    puVar45 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar46 = uVar47;
    if ((param_5 == 4) && (3 < uVar37)) {
      func_0x000105ee20b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(uVar47,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar46;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar47;
      func_0x00010c0dfd40(uVar47,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar41;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar47;
      func_0x00010c0dfd40(uVar47,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar43;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar47;
      func_0x00010c0dfd40(uVar47,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar38;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar45,param_2,uVar37);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar32),param_2,puVar45);
      _objc_release(puVar45);
      _objc_release(uVar39);
      _objc_release(uVar38);
      _objc_release(uVar44);
      _objc_release(uVar43);
      _objc_release(uVar42);
      _objc_release(uVar41);
      _objc_release(uVar40);
    }
    else {
      uVar37 = uVar47;
      func_0x00010bf529e0();
      puVar45 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((param_5 < 5) || (uVar37 < 3)) goto LAB_105ee10f4;
      func_0x000105ee20d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(uVar47,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar46;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar47;
      func_0x00010c0dfd40(uVar47,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar41;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar47;
      func_0x00010c0dfd40(uVar47,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar44 = uVar43;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar45,param_2,uVar37);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar32),param_2,puVar45);
      _objc_release(puVar45);
      _objc_release(uVar44);
      _objc_release(uVar43);
      _objc_release(uVar42);
      _objc_release(uVar41);
      _objc_release(uVar40);
    }
    _objc_release(uVar46);
  }
  _objc_release(uVar37);
LAB_105ee10f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar47);
  return;
}



/* Entry: 105ee0d98; end: 105ee1117; -[SCMapLocationOnboardingTrayView _configureTextBasedOnStyle:friends:totalNumberOfFriends:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee0d98(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  if ((param_3 & 0xfffffffffffffffd) == 1) {
    FUN_105ee1ff8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc0),param_2,uVar1);
    _objc_release(uVar1);
    func_0x000105ee2010();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc4),param_2,uVar1);
  }
  else {
    func_0x000105ee20a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112739bc0),param_2,uVar1);
    _objc_release(uVar1);
    func_0x000105ee2010();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112739bc4;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf529e0();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = param_4;
    if ((param_5 == 4) && (3 < uVar1)) {
      func_0x000105ee20b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(param_4,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0dfd40(param_4,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x00010c0dfd40(param_4,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      uVar1 = param_4;
      func_0x00010bf529e0();
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((param_5 < 5) || (uVar1 < 3)) goto LAB_105ee10f4;
      func_0x000105ee20d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40(param_4,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0dfd40(param_4,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x00010c0dfd40(param_4,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11),param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
LAB_105ee10f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ee1118; end: 105ee177f; -[SCMapLocationOnboardingTrayView _layoutButtonsBasedOnStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1118(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  if (param_3 - 1U < 2) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112739bd0));
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112739bd4));
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112739bc8));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar27 = (long)_DAT_112739bcc;
    lVar2 = *(long *)(param_1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739ba8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf493c0(0x403d000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_112739bd8;
    uVar5 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = *(undefined **)(param_1 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar5;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uStack_108;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112739bcc));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar26 = (long)_DAT_112739bc8;
    lVar2 = *(long *)(param_1 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739bbc);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = (long)_DAT_112739bd0;
    uVar5 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar5;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = *(undefined **)(param_1 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uStack_108;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar28 = (long)_DAT_112739bd4;
    puVar6 = *(undefined **)(param_1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar11;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_112739bd8;
    uVar16 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar29);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(uStack_118);
  _objc_release(puStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(puStack_f8);
  _objc_release(uVar5);
  _objc_release(uStack_f0);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  uVar29 = *(undefined8 *)(lVar2 + _DAT_112739ba0);
  _objc_retain(param_5);
  func_0x00010bfa5480(uVar29);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 105ee1780; end: 105ee183b; -[SCMapLocationOnboardingTrayView _loadAvatarId:stickerId:intoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739ba0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ee183c;
  puStack_40 = &UNK_11086dbb8;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa5480(uVar1,param_2,param_3,param_4,PTR____NSArray0__struct_11034ab48,0,
                      PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 105ee183c; end: 105ee184f;  */

void FUN_105ee183c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,param_2);
    return;
  }
  return;
}



/* Entry: 105ee1850; end: 105ee195b; -[SCMapLocationOnboardingTrayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1850(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739bd8,0);
  _objc_storeStrong(param_1 + _DAT_112739bd4,0);
  _objc_storeStrong(param_1 + _DAT_112739bd0,0);
  _objc_storeStrong(param_1 + _DAT_112739bcc,0);
  _objc_storeStrong(param_1 + _DAT_112739bc8,0);
  _objc_storeStrong(param_1 + _DAT_112739bc4,0);
  _objc_storeStrong(param_1 + _DAT_112739bc0,0);
  _objc_storeStrong(param_1 + _DAT_112739bbc,0);
  _objc_storeStrong(param_1 + _DAT_112739bb8,0);
  _objc_storeStrong(param_1 + _DAT_112739bb4,0);
  _objc_storeStrong(param_1 + _DAT_112739bb0,0);
  _objc_storeStrong(param_1 + _DAT_112739bac,0);
  _objc_storeStrong(param_1 + _DAT_112739ba8,0);
  _objc_storeStrong(param_1 + _DAT_112739ba0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112739b9c);
  return;
}



/* Entry: 105ee195c; end: 105ee1b1f; -[SCMapLocationOnboardingTrayViewController initWithBitmojiAvatarGenerator:currentUser:delegate:friendMapPeople:peopleFriendsProvider:style:mapPropImage:blankBitmojiImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ee195c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ede38;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112739bdc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112739be0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112739be4,param_6);
    lVar3 = (long)_DAT_112739be8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112739bec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112739bf0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112739bf4;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739bf8) = param_9;
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112739bfc) = param_1;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105ee1b20; end: 105ee1d4b; -[SCMapLocationOnboardingTrayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1b20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ede38;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112739c00;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar3));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126c5ac0;
  _objc_alloc();
  func_0x00010c0142c0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_112739c04;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar4));
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe0660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49420(0x407b300000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a5060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
  return;
}



/* Entry: 105ee1d4c; end: 105ee1d7b; -[SCMapLocationOnboardingTrayViewController timeSinceCreation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105ee1d4c(double param_1,long param_2)

{
  _CACurrentMediaTime();
  return param_1 - *(double *)(param_2 + _DAT_112739bfc);
}



/* Entry: 105ee1d7c; end: 105ee1dd3; -[SCMapLocationOnboardingTrayViewController _reportShareHappenedIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1d7c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112739c08) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112739c08) = 1;
  param_1 = param_1 + _DAT_112739be4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee1dd4; end: 105ee1e17; -[SCMapLocationOnboardingTrayViewController allMyFriendsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1dd4(long param_1,undefined8 param_2)

{
  func_0x00010be90360(param_1,param_2,1);
  param_1 = param_1 + _DAT_112739be4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee1e18; end: 105ee1e5b; -[SCMapLocationOnboardingTrayViewController letsGoButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1e18(long param_1,undefined8 param_2)

{
  func_0x00010be90360(param_1,param_2,1);
  param_1 = param_1 + _DAT_112739be4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee1e5c; end: 105ee1e9f; -[SCMapLocationOnboardingTrayViewController selectFriendsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1e5c(long param_1,undefined8 param_2)

{
  func_0x00010be90360(param_1,param_2,1);
  param_1 = param_1 + _DAT_112739be4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee1ea0; end: 105ee1ee3; -[SCMapLocationOnboardingTrayViewController skipTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1ea0(long param_1,undefined8 param_2)

{
  func_0x00010be90360(param_1,param_2,0);
  param_1 = param_1 + _DAT_112739be4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee1ee4; end: 105ee1f13; -[SCMapLocationOnboardingTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1ee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739c00);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ee1f14; end: 105ee1f1f; -[SCMapLocationOnboardingTrayViewController trayFeatureName] */

undefined ** FUN_105ee1f14(void)

{
  return &PTR____CFConstantStringClassReference_110e30658;
}



/* Entry: 105ee1f20; end: 105ee1f33; -[SCMapLocationOnboardingTrayViewController prepareForChangeFromPosition:toPosition:] */

void FUN_105ee1f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be90370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reportShareHappenedIfNecessary__112581a78,0);
    return;
  }
  return;
}



/* Entry: 105ee1f34; end: 105ee1f3b; -[SCMapLocationOnboardingTrayViewController autoSizingEnabled] */

undefined8 FUN_105ee1f34(void)

{
  return 1;
}



/* Entry: 105ee1f3c; end: 105ee1f4b; -[SCMapLocationOnboardingTrayViewController style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ee1f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739bf8);
}



/* Entry: 105ee1f4c; end: 105ee1ff7; -[SCMapLocationOnboardingTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee1f4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739c00,0);
  _objc_storeStrong(param_1 + _DAT_112739bf4,0);
  _objc_storeStrong(param_1 + _DAT_112739bf0,0);
  _objc_storeStrong(param_1 + _DAT_112739c04,0);
  _objc_storeStrong(param_1 + _DAT_112739bec,0);
  _objc_storeStrong(param_1 + _DAT_112739be8,0);
  _objc_destroyWeak(param_1 + _DAT_112739be4);
  _objc_storeStrong(param_1 + _DAT_112739be0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739bdc,0);
  return;
}



/* Entry: 105ee1ff8; end: 105ee20e7;  */

void FUN_105ee1ff8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e30698;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e30698,
                      &PTR____CFConstantStringClassReference_110e306b8,0);
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



/* Entry: 105ee20e8; end: 105ee21e3; -[SCMapChatPresenter initWithUserSession:customStatusBarStyleContextController:chatScopeExposer:chatScopeServices:] */

undefined1 *
FUN_105ee20e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ede40;
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



/* Entry: 105ee21e4; end: 105ee21f7; -[SCMapChatPresenter presentChatOnViewController:chat:deeplinkURL:] */

void FUN_105ee21e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentChat_deeplinkURL_viewCon_11257c3a0,param_4,param_5,param_3);
  return;
}



/* Entry: 105ee21f8; end: 105ee2297; -[SCMapChatPresenter _presentChat:deeplinkURL:viewController:] */

void FUN_105ee21f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3530;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_5);
  func_0x00010be7a7e0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ee2298; end: 105ee236b; -[SCMapChatPresenter _presentChat:deeplinkURL:uiContainer:] */

void FUN_105ee2298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c13a640(puVar1,param_2,param_4);
  puVar1 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22b00(uVar2,param_2,param_3,puVar1,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  func_0x00010c1cbd20(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ee236c; end: 105ee239b; -[SCMapChatPresenter chatScopeDidDismiss:] */

void FUN_105ee236c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setNeedsCustomStatusBarStyleCont_112650970);
  return;
}



/* Entry: 105ee239c; end: 105ee23e3; -[SCMapChatPresenter .cxx_destruct] */

void FUN_105ee239c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ee23e4; end: 105ee45ff; -[SCFullMapScopeEntryPoint _createMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee23e4(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  long lVar44;
  long lVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined8 uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined *puVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  undefined8 uVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  undefined8 uVar118;
  long lVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  undefined *puVar132;
  ulong uVar133;
  ulong uVar134;
  ulong uVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  undefined8 uVar143;
  long lStack_4e8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e307f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_112739c94;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar139;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar139);
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_112739c44;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar139;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar139);
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_112739cb8;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar139;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar139);
  lVar139 = param_1;
  FUN_105ee4600();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar139;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar139);
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_112739ce0;
    _objc_loadWeakRetained();
  }
  lVar136 = lVar139;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar136;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar136);
  _objc_release(lVar139);
  if (param_1 == 0) {
    lVar139 = 0;
  }
  else {
    lVar139 = param_1 + _DAT_112739cdc;
    _objc_loadWeakRetained();
  }
  lVar136 = lVar139;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar136;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar136);
  _objc_release(lVar139);
  lVar139 = param_1;
  func_0x000105ee4624();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = lVar139;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar136;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar136);
  _objc_release(lVar139);
  puVar12 = PTR_PTR_1126c5ac8;
  _objc_alloc();
  lVar139 = param_1 + _DAT_112739d8c;
  _objc_loadWeakRetained(lVar139);
  func_0x00010c05d580();
  _objc_release(lVar139);
  puVar13 = PTR_PTR_1126c5ad0;
  _objc_alloc();
  lVar139 = param_1 + _DAT_112739cf8;
  _objc_loadWeakRetained(lVar139);
  lVar136 = lVar139;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + _DAT_112739e10);
  _objc_retain(uVar143);
  func_0x00010c009aa0();
  _objc_release(uVar143);
  _objc_release(lVar136);
  _objc_release(lVar139);
  puVar14 = PTR_PTR_1126c5ad8;
  _objc_alloc();
  uVar143 = *(undefined8 *)(param_1 + _DAT_112739dd4);
  _objc_retain(uVar143);
  func_0x00010c0158a0();
  _objc_release(uVar143);
  lVar139 = param_1 + _DAT_112739cc4;
  _objc_loadWeakRetained();
  lVar15 = lVar139;
  func_0x00010c08f760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar139);
  puVar16 = PTR_PTR_1126c5ae0;
  _objc_alloc();
  lVar139 = param_1 + _DAT_112739ca0;
  _objc_loadWeakRetained();
  lVar136 = param_1 + _DAT_112739cc0;
  _objc_loadWeakRetained();
  lVar17 = lVar136;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112739ce8;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfb8c60();
  _objc_retainAutoreleasedReturnValue();
  lVar140 = param_1 + _DAT_112739ce8;
  _objc_loadWeakRetained();
  lVar20 = lVar140;
  func_0x00010c0d4b40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112739cbc;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0ff720();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112739cd8;
  _objc_loadWeakRetained();
  lVar141 = lVar23;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112739cc0;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112739cbc;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112739cc0;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + _DAT_112739dc0);
  _objc_retain();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112739dc4);
  _objc_retain();
  lVar31 = param_1 + _DAT_112739dc8;
  _objc_loadWeakRetained();
  uVar32 = *(undefined8 *)(param_1 + _DAT_112739dcc);
  _objc_retain();
  uVar33 = *(undefined8 *)(param_1 + _DAT_112739dd4);
  _objc_retain();
  uVar34 = *(undefined8 *)(param_1 + _DAT_112739dd0);
  _objc_retain();
  lVar35 = param_1 + _DAT_112739e3c;
  _objc_loadWeakRetained();
  uVar36 = *(undefined8 *)(param_1 + _DAT_112739dec);
  _objc_retain();
  lVar37 = param_1 + _DAT_112739cc8;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bf66500();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112739ca8;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112739c98;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bef3d60();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_1 + _DAT_112739ddc);
  _objc_retain();
  lVar44 = param_1 + _DAT_112739d04;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + _DAT_112739e10);
  _objc_retain();
  lVar47 = param_1 + _DAT_112739d24;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c22c380();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112739d1c;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_112739d2c;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + _DAT_112739df8);
  _objc_retain();
  lVar54 = param_1 + _DAT_112739dfc;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_112739c9c;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + _DAT_112739d38;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + _DAT_112739e08);
  _objc_retain();
  lVar60 = param_1 + _DAT_112739ccc;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_112739d44;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_112739d48;
  _objc_loadWeakRetained();
  lVar65 = param_1 + _DAT_112739d58;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_112739d58;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112739d18;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_112739d00;
  _objc_loadWeakRetained();
  lVar72 = param_1 + _DAT_112739d20;
  _objc_loadWeakRetained();
  lVar73 = lVar72;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_112739cb4;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_112739c24;
  _objc_loadWeakRetained();
  lVar77 = lVar76;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + _DAT_112739d60;
  _objc_loadWeakRetained();
  lVar78 = lVar137;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1 + _DAT_112739d3c;
  _objc_loadWeakRetained();
  lVar80 = lVar79;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar142 = param_1 + _DAT_112739cec;
  _objc_loadWeakRetained();
  lVar138 = lVar142;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1 + _DAT_112739e34;
  _objc_loadWeakRetained();
  lVar82 = param_1 + _DAT_112739e38;
  _objc_loadWeakRetained();
  lVar83 = param_1 + _DAT_112739cf0;
  _objc_loadWeakRetained();
  lVar84 = lVar83;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dce0();
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar138);
  _objc_release(lVar142);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar137);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(uVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(uVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(uVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(uVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(uVar36);
  _objc_release(lVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(lVar31);
  _objc_release(uVar30);
  _objc_release(uVar143);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar141);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar140);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar136);
  _objc_release(lVar139);
  puVar85 = PTR_PTR_1126c5ae8;
  _objc_alloc();
  lVar139 = param_1 + _DAT_112739c28;
  _objc_loadWeakRetained();
  lVar136 = lVar139;
  func_0x00010c09f5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar136;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026fc0();
  _objc_release(lVar18);
  _objc_release(lVar136);
  _objc_release(lVar139);
  lVar136 = (long)_DAT_112739c2c;
  lVar139 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar18 = lVar139;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar140 = (long)_DAT_112739c30;
  uVar143 = *(undefined8 *)(param_1 + lVar140);
  *(long *)(param_1 + lVar140) = lVar18;
  _objc_release(uVar143);
  _objc_release(lVar139);
  if (*(long *)(param_1 + lVar140) == 0) {
    puVar86 = PTR_PTR_1126c3168;
    _objc_alloc();
    func_0x00010c05a5e0();
    uVar143 = *(undefined8 *)(param_1 + lVar140);
    *(undefined **)(param_1 + lVar140) = puVar86;
    _objc_release(uVar143);
  }
  puVar86 = PTR_PTR_1126c5af0;
  _objc_alloc_init();
  lVar139 = param_1 + _DAT_112739ca8;
  _objc_loadWeakRetained();
  lVar18 = lVar139;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = lVar18;
  func_0x000109021a3c();
  _objc_release(lVar18);
  _objc_release(lVar139);
  lVar139 = param_1 + _DAT_112739ca8;
  _objc_loadWeakRetained();
  lVar18 = lVar139;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar18;
  func_0x0001090219fc();
  _objc_release(lVar18);
  _objc_release(lVar139);
  puVar87 = PTR_PTR_1126c5af8;
  _objc_alloc();
  lVar84 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = param_1 + _DAT_112739ca4;
  _objc_loadWeakRetained();
  lVar68 = lVar139;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = lVar68;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = (long)_DAT_112739c50;
  lVar18 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar73 = lVar18;
  func_0x00010bf1aca0();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar73;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + _DAT_112739dd8);
  _objc_retain();
  lVar21 = param_1 + _DAT_112739cac;
  _objc_loadWeakRetained();
  lVar78 = lVar21;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = lVar78;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112739ce4;
  _objc_loadWeakRetained();
  lVar80 = lVar23;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar88 = lVar80;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112739cf4;
  _objc_loadWeakRetained();
  lVar89 = lVar24;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = lVar89;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112739cb0;
  _objc_loadWeakRetained();
  lVar91 = lVar26;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112739de4);
  _objc_retain();
  lVar28 = param_1 + _DAT_112739de8;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_112739ca8;
  _objc_loadWeakRetained();
  lVar92 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112739c34;
  _objc_loadWeakRetained();
  lVar93 = lVar35;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112739c38;
  _objc_loadWeakRetained();
  lVar94 = lVar37;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112739c3c;
  _objc_loadWeakRetained();
  lVar95 = lVar39;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + _DAT_112739ddc);
  _objc_retain();
  lVar41 = param_1 + _DAT_112739de0;
  _objc_loadWeakRetained();
  lVar96 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar142 = (long)_DAT_112739c4c;
  lVar44 = param_1 + lVar142;
  _objc_loadWeakRetained();
  lVar97 = lVar44;
  func_0x00010c0ba8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + _DAT_112739e10);
  _objc_retain();
  lVar141 = (long)_DAT_112739c54;
  lVar47 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar98 = lVar47;
  func_0x00010c0b8ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = lVar98;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar100 = lVar99;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112739d08;
  _objc_loadWeakRetained();
  lVar101 = lVar49;
  func_0x00010c0b9f40();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_112739d08;
  _objc_loadWeakRetained();
  lVar102 = lVar51;
  func_0x00010c110e20();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112739d0c;
  _objc_loadWeakRetained();
  lVar103 = lVar54;
  func_0x00010c0b9f80();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_112739c40;
  _objc_loadWeakRetained();
  lVar104 = lVar55;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + _DAT_112739e14);
  _objc_retain();
  uVar36 = *(undefined8 *)(param_1 + _DAT_112739e18);
  _objc_retain();
  lVar57 = param_1 + _DAT_112739c44;
  _objc_loadWeakRetained();
  lVar105 = lVar57;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_112739c48;
  _objc_loadWeakRetained();
  lVar106 = lVar60;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_112739d28;
  _objc_loadWeakRetained();
  lVar107 = lVar62;
  func_0x00010c0fdca0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_112739dac;
  _objc_loadWeakRetained();
  uVar43 = *(undefined8 *)(param_1 + _DAT_112739df4);
  _objc_retain();
  lVar65 = param_1 + _DAT_112739db8;
  _objc_loadWeakRetained();
  uVar46 = *(undefined8 *)(param_1 + _DAT_112739e00);
  _objc_retain();
  lVar67 = param_1 + _DAT_112739d30;
  _objc_loadWeakRetained();
  lVar108 = lVar67;
  func_0x00010c0baba0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + _DAT_112739df0);
  _objc_retain();
  lVar69 = param_1 + _DAT_112739db4;
  _objc_loadWeakRetained();
  uVar59 = *(undefined8 *)(param_1 + _DAT_112739e04);
  _objc_retain();
  lVar71 = param_1 + _DAT_112739d74;
  _objc_loadWeakRetained();
  lVar72 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar109 = lVar72;
  func_0x00010bf6ed20();
  _objc_retainAutoreleasedReturnValue();
  uVar110 = *(undefined8 *)(param_1 + _DAT_112739e0c);
  _objc_retain();
  lVar74 = param_1 + lVar142;
  _objc_loadWeakRetained();
  lVar111 = lVar74;
  func_0x00010c269600();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_112739d40;
  _objc_loadWeakRetained();
  lVar112 = lVar76;
  func_0x00010bf1bc40();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + lVar137;
  _objc_loadWeakRetained();
  func_0x00010c28fd40();
  lVar79 = param_1 + _DAT_112739d3c;
  _objc_loadWeakRetained();
  lVar113 = lVar79;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar142 = param_1 + lVar142;
  _objc_loadWeakRetained();
  lVar114 = lVar142;
  func_0x00010c0b9260();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar115 = lVar81;
  func_0x00010c0b8ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = lVar115;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = lVar116;
  func_0x00010c120a00();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1 + _DAT_112739dbc;
  _objc_loadWeakRetained();
  uVar118 = *(undefined8 *)(param_1 + _DAT_112739e20);
  _objc_retain();
  lVar83 = param_1 + _DAT_112739db0;
  _objc_loadWeakRetained();
  lVar17 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar119 = lVar17;
  func_0x00010bfb4420();
  _objc_retainAutoreleasedReturnValue();
  uVar120 = *(undefined8 *)(param_1 + _DAT_112739e24);
  _objc_retain();
  lVar19 = param_1 + _DAT_112739e40;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112739d9c;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_112739d68;
  _objc_loadWeakRetained();
  uVar121 = *(undefined8 *)(param_1 + _DAT_112739e28);
  _objc_retain();
  lVar141 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_112739d64;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112739d70;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_112739da8;
  _objc_loadWeakRetained();
  uVar122 = *(undefined8 *)(param_1 + _DAT_112739e2c);
  _objc_retain();
  lVar52 = param_1 + _DAT_112739e30;
  _objc_loadWeakRetained();
  lVar56 = param_1 + _DAT_112739d78;
  _objc_loadWeakRetained();
  lVar123 = lVar56;
  func_0x00010c278700();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_112739d78;
  _objc_loadWeakRetained();
  lVar124 = lVar58;
  func_0x00010c0dd900();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_112739d7c;
  _objc_loadWeakRetained();
  lVar125 = lVar61;
  func_0x00010c106800();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1 + _DAT_112739d4c;
  _objc_loadWeakRetained();
  lVar126 = lVar63;
  func_0x00010c228280();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + _DAT_112739e34;
  _objc_loadWeakRetained();
  lVar40 = param_1 + _DAT_112739d6c;
  _objc_loadWeakRetained();
  lVar42 = param_1 + _DAT_112739d80;
  _objc_loadWeakRetained();
  lVar45 = param_1 + _DAT_112739d84;
  _objc_loadWeakRetained();
  lVar48 = param_1 + _DAT_112739d88;
  _objc_loadWeakRetained();
  lVar127 = lVar48;
  func_0x00010c0ba300();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112739d5c;
  _objc_loadWeakRetained();
  lVar128 = lVar50;
  func_0x00010bf21480();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = lVar128;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = lVar129;
  func_0x00010c0b6fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (uint)lVar138 ^ 1;
  uVar1 = uVar2 & (uint)lVar38;
  if (uVar1 == 1) {
    lStack_4e8 = param_1 + _DAT_112739d98;
    _objc_loadWeakRetained();
    lVar138 = lStack_4e8;
    func_0x00010bf6ee00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar138 = 0;
  }
  lVar131 = param_1 + _DAT_112739da4;
  _objc_loadWeakRetained();
  func_0x00010c05a960();
  _objc_release(lVar131);
  if (uVar1 != 0) {
    _objc_release(lVar138);
    _objc_release(lStack_4e8);
  }
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar128);
  _objc_release(lVar50);
  _objc_release(lVar127);
  _objc_release(lVar48);
  _objc_release(lVar45);
  _objc_release(lVar42);
  _objc_release(lVar40);
  _objc_release(lVar66);
  _objc_release(lVar126);
  _objc_release(lVar63);
  _objc_release(lVar125);
  _objc_release(lVar61);
  _objc_release(lVar124);
  _objc_release(lVar58);
  _objc_release(lVar123);
  _objc_release(lVar56);
  _objc_release(lVar52);
  _objc_release(uVar122);
  _objc_release(lVar29);
  _objc_release(lVar27);
  _objc_release(lVar25);
  _objc_release(lVar141);
  _objc_release(uVar121);
  _objc_release(lVar22);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar120);
  _objc_release(lVar119);
  _objc_release(lVar17);
  _objc_release(lVar83);
  _objc_release(uVar118);
  _objc_release(lVar82);
  _objc_release(lVar117);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar81);
  _objc_release(lVar114);
  _objc_release(lVar142);
  _objc_release(lVar113);
  _objc_release(lVar79);
  _objc_release(lVar137);
  _objc_release(lVar112);
  _objc_release(lVar76);
  _objc_release(lVar111);
  _objc_release(lVar74);
  _objc_release(uVar110);
  _objc_release(lVar109);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(uVar59);
  _objc_release(lVar69);
  _objc_release(uVar53);
  _objc_release(lVar108);
  _objc_release(lVar67);
  _objc_release(uVar46);
  _objc_release(lVar65);
  _objc_release(uVar43);
  _objc_release(lVar64);
  _objc_release(lVar107);
  _objc_release(lVar62);
  _objc_release(lVar106);
  _objc_release(lVar60);
  _objc_release(lVar105);
  _objc_release(lVar57);
  _objc_release(uVar36);
  _objc_release(uVar34);
  _objc_release(lVar104);
  _objc_release(lVar55);
  _objc_release(lVar103);
  _objc_release(lVar54);
  _objc_release(lVar102);
  _objc_release(lVar51);
  _objc_release(lVar101);
  _objc_release(lVar49);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar47);
  _objc_release(uVar33);
  _objc_release(lVar97);
  _objc_release(lVar44);
  _objc_release(lVar96);
  _objc_release(lVar41);
  _objc_release(uVar32);
  _objc_release(lVar95);
  _objc_release(lVar39);
  _objc_release(lVar94);
  _objc_release(lVar37);
  _objc_release(lVar93);
  _objc_release(lVar35);
  _objc_release(lVar92);
  _objc_release(lVar31);
  _objc_release(lVar28);
  _objc_release(uVar30);
  _objc_release(lVar91);
  _objc_release(lVar26);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar24);
  _objc_release(lVar88);
  _objc_release(lVar80);
  _objc_release(lVar23);
  _objc_release(lVar77);
  _objc_release(lVar78);
  _objc_release(lVar21);
  _objc_release(uVar143);
  _objc_release(lVar75);
  _objc_release(lVar73);
  _objc_release(lVar18);
  _objc_release(lVar70);
  _objc_release(lVar68);
  _objc_release(lVar139);
  _objc_release(lVar84);
  func_0x00010c18b5e0(puVar87);
  lVar139 = param_1 + lVar136;
  _objc_loadWeakRetained(lVar139);
  lVar18 = lVar139;
  func_0x00010c0eb0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3e0(puVar87);
  _objc_release(lVar18);
  _objc_release(lVar139);
  func_0x00010c188840(puVar87);
  lVar139 = (long)_DAT_112739c58;
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar139));
  _objc_retain(puVar87);
  uVar143 = *(undefined8 *)(param_1 + lVar139);
  *(undefined **)(param_1 + lVar139) = puVar87;
  _objc_release(uVar143);
  if (((uVar2 | (uint)lVar38) & 1) == 0) {
    puVar132 = PTR_PTR_1126c5b00;
    _objc_alloc(PTR_PTR_1126c5b00);
    func_0x00010c0616e0();
    lVar139 = param_1 + _DAT_112739d90;
    _objc_loadWeakRetained();
    lVar18 = lVar139;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar18;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar143 = *(undefined8 *)(param_1 + _DAT_112739c5c);
    *(long *)(param_1 + _DAT_112739c5c) = lVar21;
    _objc_release(uVar143);
    _objc_release(lVar18);
    _objc_release(lVar139);
    func_0x00010c1eeac0(puVar87);
    _objc_release(puVar132);
  }
  else {
    lVar139 = param_1 + _DAT_112739ca8;
    _objc_loadWeakRetained();
    lVar18 = lVar139;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar18;
    func_0x0001090222b4();
    _objc_release(lVar18);
    _objc_release(lVar139);
    if ((int)lVar21 != 0) {
      lVar139 = param_1 + _DAT_112739d94;
      _objc_loadWeakRetained();
      lVar18 = lVar139;
      func_0x00010bf51de0();
      _objc_retainAutoreleasedReturnValue();
      uVar143 = *(undefined8 *)(param_1 + _DAT_112739c60);
      *(long *)(param_1 + _DAT_112739c60) = lVar18;
      _objc_release(uVar143);
      _objc_release(lVar139);
      func_0x00010c1acf60(puVar87);
    }
  }
  lVar139 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar18 = lVar139;
  func_0x00010bf66940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar139);
  puVar132 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar18 == 0) {
    lVar139 = param_1 + lVar136;
    _objc_loadWeakRetained(lVar139);
    lVar18 = lVar139;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
  }
  else {
    iVar3 = (int)*(undefined8 *)(param_1 + lVar140);
    func_0x00010c080680();
    if (iVar3 != 0) {
      uVar133 = param_1 + lVar136;
      _objc_loadWeakRetained();
      uVar134 = uVar133;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar135 = uVar134;
      _objc_opt_respondsToSelector();
      _objc_release(uVar134);
      _objc_release(uVar133);
      if ((uVar135 & 1) != 0) {
        _objc_initWeak(auStack_78,param_1);
        lVar139 = param_1 + lVar136;
        _objc_loadWeakRetained(lVar139);
        lVar18 = lVar139;
        func_0x00010bf66940();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar132;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_105ee4690;
        puStack_88 = &UNK_110849200;
        _objc_copyWeak(auStack_80,auStack_78);
        lVar140 = lVar18;
        func_0x00010c10ee80(lVar18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar18);
        _objc_release(lVar139);
        lVar139 = param_1 + lVar136;
        _objc_loadWeakRetained(lVar139);
        lVar18 = lVar139;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ba6a0();
        _objc_release(lVar18);
        _objc_release(lVar139);
        _objc_release(lVar140);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        goto LAB_105ee4320;
      }
    }
    lVar139 = param_1 + lVar136;
    _objc_loadWeakRetained(lVar139);
    lVar18 = lVar139;
    func_0x00010bf66940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ed80();
  }
  _objc_release(lVar18);
  _objc_release(lVar139);
LAB_105ee4320:
  lVar139 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar18 = lVar139;
  func_0x00010bf0eaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_70);
  lVar140 = lVar18;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar143 = *(undefined8 *)(param_1 + _DAT_112739c64);
  *(long *)(param_1 + _DAT_112739c64) = lVar140;
  _objc_release(uVar143);
  _objc_release(lVar18);
  _objc_release(lVar139);
  uVar133 = param_1 + lVar136;
  _objc_loadWeakRetained();
  uVar134 = uVar133;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar135 = uVar134;
  _objc_opt_respondsToSelector();
  _objc_release(uVar134);
  _objc_release(uVar133);
  if ((uVar135 & 1) != 0) {
    lVar136 = param_1 + lVar136;
    _objc_loadWeakRetained(lVar136);
    lVar139 = lVar136;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ffa0(lVar11);
    func_0x00010c0b9b20(lVar139);
    _objc_release(lVar139);
    _objc_release(lVar136);
  }
  *(undefined4 *)(param_1 + _DAT_112739c68) = 0;
  *(undefined1 *)(param_1 + _DAT_112739c6c) = 0;
  param_1 = param_1 + _DAT_112739ca8;
  _objc_loadWeakRetained(param_1);
  lVar139 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar139);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar87);
  _objc_release(puVar86);
  _objc_release(puVar85);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  return;
}



/* Entry: 105ee4600; end: 105ee468f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4600(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112739cb4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ee4690; end: 105ee4767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4690(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar6 = (long)_DAT_112739c2c;
    uVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0ba680(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee4768; end: 105ee47af;  */

void FUN_105ee4768(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee47b0; end: 105ee4997; -[SCFullMapScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee47b0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30838);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112739c70);
  *(undefined **)(param_1 + _DAT_112739c70) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126c5b08;
  _objc_alloc_init();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112739c74);
  *(undefined **)(param_1 + _DAT_112739c74) = puVar3;
  _objc_release(uVar5);
  lVar6 = param_1 + _DAT_112739c2c;
  _objc_loadWeakRetained();
  lVar4 = lVar6;
  func_0x00010c121f80();
  _objc_release(lVar6);
  if ((int)lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ee4998;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000100162d98("APPSTORE",&puStack_70);
  func_0x00010beaf1a0(param_1);
  puVar3 = PTR_PTR_1126c5b10;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112739c78;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (*(undefined ***)(param_1 + _DAT_112739c7c) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + _DAT_112739c7c);
  }
  FUN_105ee6548(*(undefined8 *)(param_1 + lVar6),ppuVar1,1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  return;
}



/* Entry: 105ee4998; end: 105ee49c3;  */

void FUN_105ee4998(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdefd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee49c4; end: 105ee4ab3; -[SCFullMapScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee49c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar4 = &lStack_50;
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_3,&PTR____CFConstantStringClassReference_110e30858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40(*(undefined8 *)(param_2 + _DAT_112739c80));
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (*(undefined ***)(param_2 + _DAT_112739c7c) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + _DAT_112739c7c);
  }
  FUN_105ee6830(param_1,*(undefined8 *)(param_2 + _DAT_112739c78),ppuVar1);
  puStack_48 = PTR_PTR_1126ede48;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105ee4ab4; end: 105ee4bc7; -[SCFullMapScopeEntryPoint onMapboxInternalError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4bb00();
  iVar1 = *(int *)(param_1 + _DAT_112739c68);
  if ((int)uVar2 != 0) {
    iVar1 = iVar1 + 1;
    *(int *)(param_1 + _DAT_112739c68) = iVar1;
  }
  if (4 < iVar1) {
    _objc_initWeak(auStack_28,param_1);
    if ((*(byte *)(param_1 + _DAT_112739c6c) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112739c6c) = 1;
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x105ee4b9c;
      puStack_38 = &UNK_1108434b0;
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x000100162d98("APPSTORE",&puStack_50);
      _objc_destroyWeak(auStack_30);
    }
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ee4bc8; end: 105ee4c3b; -[SCFullMapScopeEntryPoint mapViewControllerWantsDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4bc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112739c2c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b9ae0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ee4c3c; end: 105ee4cef; -[SCFullMapScopeEntryPoint mapToggleScopeShouldEndWithDismissVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4c3c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112739c2c;
  if (param_3 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf66940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84ae0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b9ae0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ee4cf0; end: 105ee500f; -[SCFullMapScopeEntryPoint mapViewControllerWantsToSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee4cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112739c2c;
  uVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + _DAT_112739c30);
    func_0x00010c07ab00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined *)(param_1 + lVar10);
      _objc_loadWeakRetained(puVar4);
      puVar5 = puVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c0b9b60(puVar5);
      goto LAB_105ee4fb4;
    }
  }
  puVar4 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126b5f80;
  _objc_alloc(PTR_PTR_1126b5f80);
  func_0x00010c038f40();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112739e44;
    _objc_loadWeakRetained(lVar11);
  }
  lVar10 = lVar11;
  func_0x00010bf23e80(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x000105ee466c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010c0b9c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(lVar6);
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x000105ee4648();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1f440();
  _objc_release(lVar6);
  _objc_release(lVar11);
  if ((int)lVar7 == 0) {
    _objc_initWeak(auStack_80,param_1);
    _objc_copyWeak(auStack_88,auStack_80);
    puVar8 = puVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112739c84);
    *(undefined **)(param_1 + _DAT_112739c84) = puVar8;
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105ee5010;
    puStack_60 = &UNK_1108f5490;
    puVar8 = puVar4;
    lStack_58 = param_1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112739c84);
    *(undefined **)(param_1 + _DAT_112739c84) = puVar8;
    _objc_release(uVar9);
  }
LAB_105ee4fb4:
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ee5010; end: 105ee501b;  */

void FUN_105ee5010(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMapDestination__112594618,param_2);
  return;
}



/* Entry: 105ee501c; end: 105ee5063;  */

void FUN_105ee501c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb1c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee5064; end: 105ee5073; -[SCFullMapScopeEntryPoint _updateMapDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112739c58),PTR_s_setDestination__112640ac8);
  return;
}



/* Entry: 105ee5074; end: 105ee50bb; -[SCFullMapScopeEntryPoint searchWorkflowDidEnd] */

void FUN_105ee5074(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000105ee466c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b9c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee50bc; end: 105ee510f; -[SCFullMapScopeEntryPoint _onAttributionUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee50bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112739c7c;
  if (*(long *)(param_1 + lVar2) != 0) {
    return;
  }
  func_0x00010bfce000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ee5110; end: 105ee51bb; -[SCFullMapScopeEntryPoint _didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5110(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112739c58;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0834c0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    lVar4 = *(long *)(param_1 + lVar4);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdefd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createMapView_1125598f8);
      return;
    }
  }
  return;
}



/* Entry: 105ee51bc; end: 105ee534b; -[SCFullMapScopeEntryPoint _setupPrimacyObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee51bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112739d50;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010c0dfbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf70de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar6 = lVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112739c80);
  *(long *)(param_1 + _DAT_112739c80) = lVar6;
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105ee534c; end: 105ee543b;  */

void FUN_105ee534c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105ee543c;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0be760(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105ee543c; end: 105ee5493;  */

void FUN_105ee543c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee5494; end: 105ee5ae3; -[SCFullMapScopeEntryPoint _onSwitchToSecondary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5494(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_112739c88;
  lVar26 = param_1;
  if (*(long *)(param_1 + lVar24) == 0) {
    lVar26 = *(long *)(param_1 + _DAT_112739c58);
    _objc_retain(lVar26);
    if (lVar26 != 0) {
      puVar1 = PTR_PTR_1126af108;
      _objc_alloc_init();
      func_0x00010bef7700(lVar26);
      puVar2 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(puVar2);
      lVar3 = lVar26;
      func_0x00010c29bf00(lVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar3);
      _objc_release(puVar2);
      _objc_release(lVar3);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar4 = puVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar26;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      puStack_90 = puVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar26;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      puStack_88 = puVar11;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar26;
      func_0x00010c29bf00(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar1;
      puStack_80 = puVar16;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar26;
      func_0x00010c29bf00(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar18;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar25);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010bf77e80(puVar1);
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x3032000000;
      pcStack_a8 = FUN_105ee5ae4;
      uStack_a0 = 0x105ee5af4;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e308b8;
      lVar25 = (long)_DAT_112739c2c;
      lVar3 = param_1 + lVar25;
      _objc_loadWeakRetained(lVar3);
      lVar9 = lVar3;
      func_0x00010bf0eaa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ff60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar3);
      lVar3 = param_1 + _DAT_112739c4c;
      _objc_loadWeakRetained(lVar3);
      lVar9 = lVar3;
      func_0x00010c0b9440();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ffa0();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar3);
      lVar3 = param_1 + lVar25;
      _objc_loadWeakRetained(lVar3);
      lVar9 = lVar3;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077460();
      _objc_release(lVar9);
      _objc_release(lVar3);
      lVar25 = param_1 + lVar25;
      _objc_loadWeakRetained(lVar25);
      lVar3 = lVar25;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07ab00();
      _objc_release(lVar3);
      _objc_release(lVar25);
      puVar2 = PTR_PTR_1126c5b18;
      _objc_alloc();
      func_0x00010c0026a0();
      lVar3 = param_1 + _DAT_112739da0;
      _objc_loadWeakRetained();
      lVar9 = lVar3;
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar9;
      func_0x00010bf21f80();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_1 + lVar24);
      *(long *)(param_1 + lVar24) = lVar25;
      _objc_release(uVar23);
      _objc_release(lVar9);
      _objc_release(lVar3);
      func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar24));
      lVar24 = (long)_DAT_112739c8c;
      _objc_retain(puVar1);
      uVar23 = *(undefined8 *)(param_1 + lVar24);
      *(undefined **)(param_1 + lVar24) = puVar1;
      _objc_release(uVar23);
      FUN_105f51b7c(*(undefined8 *)(param_1 + _DAT_112739c74),
                    &PTR____CFConstantStringClassReference_110dad378,puStack_b8[5],1);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(ppuStack_98);
      _objc_release(puVar1);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(lVar24 + 0x28);
  *(undefined8 *)(lVar24 + 0x28) = 0;
  return;
}



/* Entry: 105ee5ae4; end: 105ee5afb;  */

void FUN_105ee5ae4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ee5afc; end: 105ee5b3b;  */

void FUN_105ee5afc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfce000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ee5b3c; end: 105ee5cd3; -[SCFullMapScopeEntryPoint _onSwitchToPrimary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = (long)_DAT_112739c88;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar3 = (long)_DAT_112739c8c;
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010c2a6740(*(long *)(param_1 + lVar3),param_2,0);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar3));
      func_0x00010bf6f440(*(undefined8 *)(param_1 + lVar3));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar1);
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x3032000000;
      pcStack_48 = FUN_105ee5ae4;
      uStack_40 = 0x105ee5af4;
      ppuStack_38 = &PTR____CFConstantStringClassReference_110e308b8;
      lVar2 = param_1 + _DAT_112739c2c;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf0eaa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ff60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      FUN_105f51dac(*(undefined8 *)(param_1 + _DAT_112739c74),
                    &PTR____CFConstantStringClassReference_110dbfa38,puStack_58[5],1);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(ppuStack_38);
    }
  }
  return;
}



/* Entry: 105ee5cd4; end: 105ee5d13;  */

void FUN_105ee5cd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfce000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ee5d14; end: 105ee5dab; -[SCFullMapScopeEntryPoint onSecondaryLocationDevicePromptCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5d14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739c88);
  *(undefined8 *)(param_1 + _DAT_112739c88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739c8c);
  *(undefined8 *)(param_1 + _DAT_112739c8c) = 0;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_112739c2c;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b9ae0(lVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ee5dac; end: 105ee64d3; -[SCFullMapScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ee5dac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112739e44);
  _objc_destroyWeak(param_1 + _DAT_112739e40);
  _objc_destroyWeak(param_1 + _DAT_112739e3c);
  _objc_destroyWeak(param_1 + _DAT_112739e38);
  _objc_destroyWeak(param_1 + _DAT_112739e34);
  _objc_destroyWeak(param_1 + _DAT_112739c24);
  _objc_destroyWeak(param_1 + _DAT_112739e30);
  _objc_storeStrong(param_1 + _DAT_112739e2c,0);
  _objc_storeStrong(param_1 + _DAT_112739e28,0);
  _objc_storeStrong(param_1 + _DAT_112739e24,0);
  _objc_storeStrong(param_1 + _DAT_112739e20,0);
  _objc_storeStrong(param_1 + _DAT_112739e1c,0);
  _objc_storeStrong(param_1 + _DAT_112739e18,0);
  _objc_storeStrong(param_1 + _DAT_112739e14,0);
  _objc_storeStrong(param_1 + _DAT_112739e10,0);
  _objc_storeStrong(param_1 + _DAT_112739e0c,0);
  _objc_storeStrong(param_1 + _DAT_112739e08,0);
  _objc_storeStrong(param_1 + _DAT_112739e04,0);
  _objc_storeStrong(param_1 + _DAT_112739e00,0);
  _objc_destroyWeak(param_1 + _DAT_112739dfc);
  _objc_storeStrong(param_1 + _DAT_112739df8,0);
  _objc_storeStrong(param_1 + _DAT_112739df4,0);
  _objc_storeStrong(param_1 + _DAT_112739c20,0);
  _objc_storeStrong(param_1 + _DAT_112739df0,0);
  _objc_storeStrong(param_1 + _DAT_112739dec,0);
  _objc_destroyWeak(param_1 + _DAT_112739de8);
  _objc_storeStrong(param_1 + _DAT_112739de4,0);
  _objc_destroyWeak(param_1 + _DAT_112739de0);
  _objc_storeStrong(param_1 + _DAT_112739ddc,0);
  _objc_storeStrong(param_1 + _DAT_112739dd8,0);
  _objc_storeStrong(param_1 + _DAT_112739c1c,0);
  _objc_storeStrong(param_1 + _DAT_112739dd4,0);
  _objc_storeStrong(param_1 + _DAT_112739dd0,0);
  _objc_storeStrong(param_1 + _DAT_112739dcc,0);
  _objc_destroyWeak(param_1 + _DAT_112739dc8);
  _objc_storeStrong(param_1 + _DAT_112739dc4,0);
  _objc_storeStrong(param_1 + _DAT_112739dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112739dbc);
  _objc_destroyWeak(param_1 + _DAT_112739db8);
  _objc_destroyWeak(param_1 + _DAT_112739db4);
  _objc_destroyWeak(param_1 + _DAT_112739db0);
  _objc_destroyWeak(param_1 + _DAT_112739dac);
  _objc_destroyWeak(param_1 + _DAT_112739da8);
  _objc_destroyWeak(param_1 + _DAT_112739da4);
  _objc_destroyWeak(param_1 + _DAT_112739da0);
  _objc_destroyWeak(param_1 + _DAT_112739d9c);
  _objc_destroyWeak(param_1 + _DAT_112739d98);
  _objc_destroyWeak(param_1 + _DAT_112739d94);
  _objc_destroyWeak(param_1 + _DAT_112739d90);
  _objc_destroyWeak(param_1 + _DAT_112739d8c);
  _objc_destroyWeak(param_1 + _DAT_112739d88);
  _objc_destroyWeak(param_1 + _DAT_112739d84);
  _objc_destroyWeak(param_1 + _DAT_112739d80);
  _objc_destroyWeak(param_1 + _DAT_112739d7c);
  _objc_destroyWeak(param_1 + _DAT_112739d78);
  _objc_destroyWeak(param_1 + _DAT_112739d74);
  _objc_destroyWeak(param_1 + _DAT_112739d70);
  _objc_destroyWeak(param_1 + _DAT_112739d6c);
  _objc_destroyWeak(param_1 + _DAT_112739d68);
  _objc_destroyWeak(param_1 + _DAT_112739d64);
  _objc_destroyWeak(param_1 + _DAT_112739d60);
  _objc_destroyWeak(param_1 + _DAT_112739d5c);
  _objc_destroyWeak(param_1 + _DAT_112739c54);
  _objc_destroyWeak(param_1 + _DAT_112739d58);
  _objc_destroyWeak(param_1 + _DAT_112739d54);
  _objc_destroyWeak(param_1 + _DAT_112739d50);
  _objc_destroyWeak(param_1 + _DAT_112739d4c);
  _objc_destroyWeak(param_1 + _DAT_112739d48);
  _objc_destroyWeak(param_1 + _DAT_112739d44);
  _objc_destroyWeak(param_1 + _DAT_112739d40);
  _objc_destroyWeak(param_1 + _DAT_112739d3c);
  _objc_destroyWeak(param_1 + _DAT_112739d38);
  _objc_destroyWeak(param_1 + _DAT_112739d34);
  _objc_destroyWeak(param_1 + _DAT_112739d30);
  _objc_destroyWeak(param_1 + _DAT_112739d2c);
  _objc_destroyWeak(param_1 + _DAT_112739d28);
  _objc_destroyWeak(param_1 + _DAT_112739d24);
  _objc_destroyWeak(param_1 + _DAT_112739d20);
  _objc_destroyWeak(param_1 + _DAT_112739d1c);
  _objc_destroyWeak(param_1 + _DAT_112739d18);
  _objc_destroyWeak(param_1 + _DAT_112739c40);
  _objc_destroyWeak(param_1 + _DAT_112739d14);
  _objc_destroyWeak(param_1 + _DAT_112739d10);
  _objc_destroyWeak(param_1 + _DAT_112739d0c);
  _objc_destroyWeak(param_1 + _DAT_112739d08);
  _objc_destroyWeak(param_1 + _DAT_112739d04);
  _objc_destroyWeak(param_1 + _DAT_112739c44);
  _objc_destroyWeak(param_1 + _DAT_112739d00);
  _objc_destroyWeak(param_1 + _DAT_112739cfc);
  _objc_destroyWeak(param_1 + _DAT_112739c48);
  _objc_destroyWeak(param_1 + _DAT_112739c4c);
  _objc_destroyWeak(param_1 + _DAT_112739c28);
  _objc_destroyWeak(param_1 + _DAT_112739cf8);
  _objc_destroyWeak(param_1 + _DAT_112739c38);
  _objc_destroyWeak(param_1 + _DAT_112739c34);
  _objc_destroyWeak(param_1 + _DAT_112739c3c);
  _objc_destroyWeak(param_1 + _DAT_112739cf4);
  _objc_destroyWeak(param_1 + _DAT_112739cf0);
  _objc_destroyWeak(param_1 + _DAT_112739cec);
  _objc_destroyWeak(param_1 + _DAT_112739ce8);
  _objc_destroyWeak(param_1 + _DAT_112739ce4);
  _objc_destroyWeak(param_1 + _DAT_112739ce0);
  _objc_destroyWeak(param_1 + _DAT_112739cdc);
  _objc_destroyWeak(param_1 + _DAT_112739cd8);
  _objc_destroyWeak(param_1 + _DAT_112739cd4);
  _objc_destroyWeak(param_1 + _DAT_112739cd0);
  _objc_destroyWeak(param_1 + _DAT_112739ccc);
  _objc_destroyWeak(param_1 + _DAT_112739cc8);
  _objc_destroyWeak(param_1 + _DAT_112739cc4);
  _objc_destroyWeak(param_1 + _DAT_112739cc0);
  _objc_destroyWeak(param_1 + _DAT_112739cbc);
  _objc_destroyWeak(param_1 + _DAT_112739cb8);
  _objc_destroyWeak(param_1 + _DAT_112739cb4);
  _objc_destroyWeak(param_1 + _DAT_112739cb0);
  _objc_destroyWeak(param_1 + _DAT_112739c50);
  _objc_destroyWeak(param_1 + _DAT_112739cac);
  _objc_destroyWeak(param_1 + _DAT_112739ca8);
  _objc_destroyWeak(param_1 + _DAT_112739ca4);
  _objc_destroyWeak(param_1 + _DAT_112739ca0);
  _objc_destroyWeak(param_1 + _DAT_112739c9c);
  _objc_destroyWeak(param_1 + _DAT_112739c98);
  _objc_destroyWeak(param_1 + _DAT_112739c94);
  _objc_destroyWeak(param_1 + _DAT_112739c2c);
  _objc_destroyWeak(param_1 + _DAT_112739c90);
  _objc_storeStrong(param_1 + _DAT_112739c8c,0);
  _objc_storeStrong(param_1 + _DAT_112739c88,0);
  _objc_storeStrong(param_1 + _DAT_112739c60,0);
  _objc_storeStrong(param_1 + _DAT_112739c5c,0);
  _objc_storeStrong(param_1 + _DAT_112739c78,0);
  _objc_storeStrong(param_1 + _DAT_112739c7c,0);
  _objc_storeStrong(param_1 + _DAT_112739c70,0);
  _objc_storeStrong(param_1 + _DAT_112739c30,0);
  _objc_storeStrong(param_1 + _DAT_112739c74,0);
  _objc_storeStrong(param_1 + _DAT_112739c80,0);
  _objc_storeStrong(param_1 + _DAT_112739c84,0);
  _objc_storeStrong(param_1 + _DAT_112739c64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739c58,0);
  return;
}



/* Entry: 105ee64d4; end: 105ee6547; -[SCGrapheneFullMapScopeMetric2 init] */

undefined1 * FUN_105ee64d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105ee6548; end: 105ee66bb;  */

void FUN_105ee6548(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f34c0fd;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f5520;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108f5520,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f34c0fd;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_1108f5570;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108f5570,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_105ee66bc(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ee66bc; end: 105ee682f;  */

void FUN_105ee66bc(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f34c0fd;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f5570;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f5570,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_105ee66bc(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ee6830; end: 105ee689b;  */

void FUN_105ee6830(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105ee66bc(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ee689c; end: 105ee6f23; -[SCMapFriendStoriesPresenter initWithPresentingViewController:userSession:navigationServices:circumstanceEngine:adPluginProvider:snapchattersSynchronousDataFetcher:safetyReportScopeExposer:externalLinkSendingService:contextOperaPluginProvider:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:bloopsReportScopeExposer:temporaryFileWriter:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:remixOperaPluginProvider:musicContentRestrictionServices:networkConnectivityMonitor:userBlizzardLogger:storiesUsageLogger:avatarFactory:pageLauncher:lazyDiscoverFeedEventsController:settingsScopeServices:storyShareScopeServices:myStorySettingsScopeServices:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_105ee689c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  puStack_70 = PTR_PTR_1126ede58;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[4];
    puVar2[4] = param_4;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 5,param_3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[8];
    puVar2[8] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar4 = puVar2[7];
    puVar2[7] = param_7;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c14c0);
    uVar3 = uVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[6];
    puVar2[6] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar3 = puVar2[9];
    puVar2[9] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[10];
    puVar2[10] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_30);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_30;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_32;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[8];
    func_0x00010bf1f440();
    *(undefined1 *)(puVar2 + 0x12) = uVar1;
    _objc_retain(param_17);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_18;
    _objc_release(uVar3);
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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
  return puVar2;
}



/* Entry: 105ee6f24; end: 105ee6f2b;  */

void FUN_105ee6f24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatterFetcher_11266eb30);
  return;
}



/* Entry: 105ee6f2c; end: 105ee74b7; -[SCMapFriendStoriesPresenter presentMyStoryPlaybackSequence:serverIdToViewStates:fromBaseView:mapStoriesInfo:storiesPlaybackDataProvider:playbackManagementDataProvider:storiesMediaCoordinator:myStoriesDataCoordinator:storiesDataCoordinator:snapViewerDataCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:webBrowsingScopeExposer:standardExternalContentShareScopeExposer:debugViewer:operaSessionScopeExposer:applicationLifecycleEvents:] */

void FUN_105ee6f2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_21);
  lVar1 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_105ee71a0:
      _objc_release(lVar1);
      lVar2 = param_3;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x0001071e11a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c25b720();
      func_0x00010c297440();
      uVar5 = param_9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0x50);
      uVar8 = uVar6;
      func_0x000107a0483c();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x000107a30ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001071e1228(uVar14,lVar2,lVar1,param_3,param_10,param_11,param_12,uVar5,uVar6,param_13
                          ,param_14,param_15,param_16,param_17,param_18,0,param_19,param_20,uVar16,0
                         );
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar2);
      uVar5 = param_7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      uVar8 = param_6;
      uVar10 = uVar5;
      uVar9 = uVar6;
      uVar16 = uVar14;
      uVar12 = param_5;
      func_0x00010be7ec60(param_1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(lVar7);
      _objc_release(param_21);
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
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
        ___stack_chk_fail();
        _objc_retain(uVar12);
        _objc_retain(uVar16);
        _objc_retain(uVar9);
        _objc_retain(uVar10);
        _objc_retain(uVar8);
        _objc_retain(lVar2);
        func_0x00010bfddf20();
        puVar11 = PTR_PTR_1126b4d28;
        _objc_alloc(PTR_PTR_1126b4d28);
        lVar7 = lVar2;
        func_0x00010c259cc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        _objc_release(lVar2);
        func_0x00010c04dcc0(puVar11);
        _objc_release(lVar7);
        uVar5 = uVar9;
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar6 = uVar16;
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        func_0x00010be7ec60();
        _objc_release(uVar12);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar11);
        return;
      }
      return;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar1);
      }
      lVar15 = *(long *)(lVar17 * 8);
      lVar3 = lVar15;
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        _objc_release(lVar3);
        goto LAB_105ee71a0;
      }
      func_0x00010c15f2e0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c29ea60();
      _objc_release(uVar5);
      _objc_release(lVar15);
      _objc_release(lVar3);
      if ((int)uVar6 == 0) goto LAB_105ee71a0;
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105ee74b8; end: 105ee7663; -[SCMapFriendStoriesPresenter presentStoryWithSummaryInfo:fromBaseView:mapStoriesInfo:storiesPlaybackDataProvider:storiesMediaCoordinator:debugViewer:externalLinkSendingService:] */

void FUN_105ee74b8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfddf20();
  puVar3 = PTR_PTR_1126b4d28;
  _objc_alloc(PTR_PTR_1126b4d28);
  uVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  if (uVar5 < 7) {
    uVar7 = *(undefined8 *)(&UNK_10ddd14b8 + uVar5 * 8);
  }
  else {
    uVar7 = 1;
  }
  uVar1 = 1;
  if ((int)uVar2 == 0) {
    uVar1 = 2;
  }
  func_0x00010c04dcc0(puVar3,param_2,uVar4,uVar7,0,1);
  _objc_release(uVar4);
  uVar7 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar6 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010be7ec60(param_1,param_2,puVar3,param_5,uVar7,uVar6,0,param_4,uVar1,param_8,0);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ee7664; end: 105ee8207; -[SCMapFriendStoriesPresenter _presentStoryWithPlayableDataModel:mapStoriesInfo:storiesPlaybackDataProvider:storiesMediaCoordinator:storyManagementPlugin:baseView:viewType:debugViewer:isMyStory:externalLinkSendingService:] */

ulong FUN_105ee7664(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                   undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined4 param_13,
                   undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  ulong uVar54;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_15);
  *(undefined1 *)(param_2 + 0x10) = 0;
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_9);
  func_0x00010c26f3c0(puVar16);
  puVar16 = PTR_PTR_1126c5b20;
  uVar49 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar50 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar53 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  cVar15 = *(char *)(param_2 + 0x90);
  uVar52 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar10 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar11 = *(undefined8 *)(param_2 + 0xb0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  uVar12 = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar29 = *(undefined8 *)(param_2 + 0xd0);
  uVar28 = *(undefined8 *)(param_2 + 0xd8);
  uVar13 = *(undefined8 *)(param_2 + 0xe0);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  uVar14 = *(undefined8 *)(param_2 + 0x100);
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar49);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(uVar8);
  _objc_retain(uVar50);
  _objc_retain(param_15);
  _objc_retain(uVar53);
  _objc_retain(uVar1);
  _objc_retain(uVar9);
  _objc_retain(uVar52);
  _objc_retain(uVar2);
  _objc_retain(uVar10);
  _objc_retain(uVar3);
  _objc_retain(uVar11);
  _objc_retain(uVar4);
  _objc_retain(uVar12);
  _objc_retain(uVar5);
  _objc_retain(uVar29);
  _objc_retain(uVar13);
  _objc_retain(uVar28);
  _objc_retain(uVar6);
  _objc_retain(uVar14);
  _objc_alloc();
  func_0x00010c04de40();
  puVar17 = PTR_PTR_1126c5b28;
  _objc_alloc();
  uVar48 = param_5;
  func_0x00010c0b9ce0(param_5);
  uVar18 = param_5;
  func_0x00010c0bac20(param_5);
  uVar19 = param_5;
  func_0x00010c0b9de0(param_5);
  uVar20 = param_5;
  func_0x00010c0ba060();
  _objc_release(param_5);
  uVar54 = 0;
  func_0x00010c04e060(puVar17,param_3,(long)(param_1 * 1000.0),uVar48,uVar18,0,0xffffffffffffffff,
                      uVar19,uVar20,0,0);
  puVar21 = PTR_PTR_1126c5b30;
  _objc_alloc();
  func_0x00010bffe1e0();
  uVar48 = 0;
  if (cVar15 == '\0') {
    uVar48 = uVar13;
  }
  _objc_retain();
  uVar18 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  puVar22 = PTR_PTR_1126c2d68;
  _objc_alloc();
  puVar23 = PTR_PTR_1126c5b38;
  func_0x00010c08f700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x000108f2293c();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x000107d6fa04();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x000107a0483c();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x000107a30e30();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126c0258;
  _objc_opt_class(PTR_PTR_1126c0258);
  uVar19 = uVar29;
  func_0x00010beecc40(uVar29,param_3,puVar30,&PTR___NSConcreteGlobalBlock_1108f5640);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar20;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126c5b40;
  _objc_opt_class(PTR_PTR_1126c5b40);
  uVar32 = uVar31;
  func_0x00010beecc40(uVar31,param_3,puVar30,&PTR___NSConcreteGlobalBlock_1108f5680);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x000107a30ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010723fe7c();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar7;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126bb6e0;
  _objc_opt_class(PTR_PTR_1126bb6e0);
  uVar39 = uVar38;
  func_0x00010beecc40(uVar38,param_3,puVar30,&PTR___NSConcreteGlobalBlock_1108f56c0);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126bcbb8;
  _objc_opt_class(PTR_PTR_1126bcbb8);
  uVar42 = uVar41;
  func_0x00010beecc40(uVar41,param_3,puVar30,&PTR___NSConcreteGlobalBlock_1108f5700);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126bff00;
  _objc_opt_class(PTR_PTR_1126bff00);
  uVar46 = uVar45;
  func_0x00010beecc40(uVar45,param_3,puVar30,&PTR___NSConcreteGlobalBlock_1108f5740);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e880(puVar22,param_3,uVar7,param_6,param_7,0,uVar49,puVar17,puVar16,0,
                      uVar54 & 0xffffffffffffff00,0,puVar23,puVar24,uVar8,uVar6,uVar14,uVar11,uVar4,
                      0,puVar21,&UNK_10796d390,&UNK_10796f9f4,puVar25,0,0,&UNK_10795e4a0,param_12,
                      puVar26,puVar27,uVar48,uVar2,0,0,uVar6,uVar50,uVar12,uVar1,uVar28,uVar18,
                      uVar20,uVar33,uVar34,uVar35,uVar36,uVar5,uVar37,uVar40,uVar53,param_15,uVar44,
                      0,0);
  _objc_release(uVar48);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar52);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(uVar53);
  _objc_release(uVar50);
  _objc_release(uVar8);
  _objc_release(uVar49);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(uVar18);
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(puVar16);
  uVar48 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar48;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar48);
  uVar50 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar50;
  func_0x00010bf57060(uVar50,param_3,puVar16,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(uVar50);
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar22;
  uStack_80 = uVar49;
  uStack_78 = uVar48;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010c0d3c80();
  _objc_release(puVar17);
  if (param_8 != 0) {
    puVar17 = puVar16;
    func_0x00010bf529e0(puVar16);
    func_0x00010c066b00(puVar16,param_3,param_8,puVar17 + -1);
  }
  puVar17 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  puVar21 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar17,param_3,2,0x22,4,0xffffffffffffffff,0,0x15,puVar21,0);
  _objc_release(puVar21);
  puVar21 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar21,param_3,puVar23,param_4);
  _objc_release(puVar23);
  uVar50 = *(undefined8 *)(param_2 + 0x70);
  lVar51 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar51);
  puVar23 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  func_0x00010bf23920(uVar50,param_3,puVar17,lVar51,param_9,puVar21,puVar23,param_2,puVar16,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(puVar23);
  _objc_release(lVar51);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x68),param_3,uVar50);
  _objc_release(uVar50);
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar48);
  _objc_release(uVar49);
  _objc_release(puVar22);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar51 = *(long *)(param_4 + 0x68);
  func_0x00010c150520(lVar51);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(lVar51 != 0);
}



/* Entry: 105ee8208; end: 105ee823f; -[SCMapFriendStoriesPresenter isPresentingStory] */

bool FUN_105ee8208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 105ee8240; end: 105ee8277; -[SCMapFriendStoriesPresenter isStoryOnscreen] */

bool FUN_105ee8240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 105ee8278; end: 105ee82bf; -[SCMapFriendStoriesPresenter dismissStory] */

void FUN_105ee8278(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c07ad00();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x00010bf84cc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bddf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupAfterDismissal_1125556b8);
    return;
  }
  return;
}



/* Entry: 105ee82c0; end: 105ee832f; -[SCMapFriendStoriesPresenter _cleanupAfterDismissal] */

void FUN_105ee82c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8f00();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ee8330; end: 105ee835f; -[SCMapFriendStoriesPresenter operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_105ee8330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ee8360; end: 105ee8397; -[SCMapFriendStoriesPresenter operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_105ee8360(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee8398; end: 105ee839b; -[SCMapFriendStoriesPresenter operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_105ee8398(void)

{
  return;
}



/* Entry: 105ee839c; end: 105ee83d3; -[SCMapFriendStoriesPresenter operaPresenterDidCancelDismissing:] */

void FUN_105ee839c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee83d4; end: 105ee83d7; -[SCMapFriendStoriesPresenter operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_105ee83d4(void)

{
  return;
}



/* Entry: 105ee83d8; end: 105ee83db; -[SCMapFriendStoriesPresenter operaPresenterDidFailToPresent:] */

void FUN_105ee83d8(void)

{
  return;
}


