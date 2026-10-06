/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a47514; end: 105a475eb; -[SCSpectaclesFirmwareManager updateTagFromTweak:] */

void FUN_105a47514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a475ec; end: 105a47627;  */

void FUN_105a475ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c28abc0(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a47628; end: 105a476cf; -[SCSpectaclesFirmwareManager updateAvailableForDevice:] */

undefined8 FUN_105a47628(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010becaaa0();
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x000106e937b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x40);
    func_0x00010bf705c0(uVar2,param_2,uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf48d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf48920();
      _objc_release(uVar3);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105a476d0; end: 105a47753; -[SCSpectaclesFirmwareManager updateRequiredForDevice:] */

uint FUN_105a476d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c283a00(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf705e0(uVar3,param_2,uVar1);
    uVar4 = (uint)uVar3 ^ 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105a47754; end: 105a47843; -[SCSpectaclesFirmwareManager _attemptStartUpdatingDevice:] */

void FUN_105a47754(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd6b40();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238340();
  }
  else {
    uVar1 = param_3;
    func_0x00010c2735a0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c2735c0();
      if ((int)uVar1 == 0) {
        func_0x000106fd2cec();
        if ((uVar1 & 1) != 0) {
          func_0x00010bec1ec0(param_1,param_2,param_3);
          goto LAB_105a477d0;
        }
        puVar2 = PTR_PTR_1126af178;
        func_0x00010c22b900(PTR_PTR_1126af178);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c238380();
      }
      else {
        puVar2 = PTR_PTR_1126af178;
        func_0x00010c22b900(PTR_PTR_1126af178);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237ba0();
      }
    }
    else {
      puVar2 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2383a0();
    }
  }
  _objc_release(puVar2);
LAB_105a477d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a47844; end: 105a47943; -[SCSpectaclesFirmwareManager showUpdateAlertForDevice:] */

void FUN_105a47844(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becaaa0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0a6ae0(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_38,param_3);
    _objc_initWeak(auStack_40,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105a47944;
    puStack_68 = &UNK_1108cf0b0;
    _objc_copyWeak(auStack_50,auStack_40);
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a47944; end: 105a47cab;  */

void FUN_105a47944(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar3 = PTR_PTR_1126af180;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db32d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db32d8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,param_1 + 0x30);
  _objc_copyWeak(auStack_b8,param_1 + 0x38);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dace78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dace78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2894e0();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e18738;
  if (iVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e18758;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e18778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18778,0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c285d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c235c40(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(ppuVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  puVar10 = &uStack_b0;
  __Block_object_dispose(puVar10,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  __Block_object_dispose(&uStack_b0,8);
  __Unwind_Resume();
  puVar11 = puVar10 + 5;
  _objc_loadWeakRetained();
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar10 + 6;
    _objc_loadWeakRetained();
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined1 *)(*(long *)(puVar10[4] + 8) + 0x18) = 1;
      puVar10 = puVar12;
      func_0x000106e937b0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd0d60(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 105a47cac; end: 105a47d33;  */

void FUN_105a47cac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      lVar3 = lVar2;
      func_0x000106e937b0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd0d60(lVar1,param_2,lVar3);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a47d34; end: 105a47d67;  */

void FUN_105a47d34(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(*(undefined8 *)(param_1 + 0x20),8);
  return;
}



/* Entry: 105a47d68; end: 105a47d83;  */

void FUN_105a47d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_logFirmwareUpdatePromptDismissed_1126074c0,*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
  return;
}



/* Entry: 105a47d84; end: 105a47deb; -[SCSpectaclesFirmwareManager startUpdateForDevice:] */

void FUN_105a47d84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becaaa0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x000106e937b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd0d60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a47dec; end: 105a47eaf; -[SCSpectaclesFirmwareManager tagStoreDidFetchLatestVersion:] */

void FUN_105a47dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a47eb0; end: 105a4809f;  */

void FUN_105a47eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x80) == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar4);
      func_0x00010bf705c0(uVar5,param_2,uVar4);
      func_0x00010becf280(param_1,param_2,0);
      lVar1 = param_1;
      func_0x00010bdc5140(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249240();
      _objc_release(uVar4);
      _objc_release(lVar1);
    }
    func_0x00010bec0f00(param_1);
    lVar1 = param_1;
    func_0x00010bdc5140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2492a0();
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c268480();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          lVar3 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar3);
          uVar4 = uVar5;
          func_0x00010c0ce2e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd3820(uVar5);
          func_0x00010c1c8360(lVar3,param_2,uVar4,uVar5);
          _objc_release(uVar4);
          _objc_release(lVar3);
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105a480a0; end: 105a480a3; -[SCSpectaclesFirmwareManager _showMetadataFetchFailureMessage:] */

void FUN_105a480a0(void)

{
  return;
}



/* Entry: 105a480a4; end: 105a4816f; -[SCSpectaclesFirmwareManager firmwareDownloader:didFailMetadataFetch:] */

void FUN_105a480a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a48170; end: 105a482a7;  */

void FUN_105a48170(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x80) != 4)) goto LAB_105a48298;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 < 3) {
    if (lVar4 != 0) {
      if (lVar4 == 1) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e18798;
      }
      else {
        if (lVar4 != 2) goto LAB_105a48298;
        ppuVar2 = &PTR____CFConstantStringClassReference_110e187b8;
      }
      func_0x00010beb9de0(lVar1,param_2,ppuVar2);
    }
    func_0x00010be0e180(lVar1,param_2,5);
    goto LAB_105a48298;
  }
  if (lVar4 < 5) {
    if (lVar4 != 3) {
      if (lVar4 != 4) goto LAB_105a48298;
      if (1 < *(ulong *)(lVar1 + 0xd0)) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e187d8;
        goto LAB_105a48264;
      }
    }
LAB_105a4826c:
    uVar3 = 2;
  }
  else {
    if (lVar4 == 5) {
      if (1 < *(ulong *)(lVar1 + 0xd0)) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e187f8;
LAB_105a48264:
        func_0x00010beb9de0(lVar1,param_2,ppuVar2);
      }
      goto LAB_105a4826c;
    }
    if (lVar4 != 6) goto LAB_105a48298;
    uVar5 = *(undefined8 *)(lVar1 + 0xc0);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xb8) = uVar5;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c08b340(uVar3,param_2,*(undefined8 *)(lVar1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(lVar1 + 0xa0) = uVar3;
    _objc_release(uVar5);
    uVar3 = 7;
  }
  func_0x00010becf280(lVar1,param_2,uVar3);
LAB_105a48298:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a482a8; end: 105a4841b; -[SCSpectaclesFirmwareManager firmwareDownloader:didFetchTargetDigest:targetVersion:intermediateDigest:intermediateVersion:] */

void FUN_105a482a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4841c; end: 105a48527;  */

void FUN_105a4841c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) == 4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c08b340(uVar2,param_2,*(undefined8 *)(lVar1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072160(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      func_0x00010be0e180(lVar1,param_2,5);
      func_0x00010bfa7e00(*(undefined8 *)(lVar1 + 0x40));
      func_0x00010c268300(lVar1,param_2,*(undefined8 *)(lVar1 + 0x40));
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined8 *)(lVar1 + 0xb8) = uVar3;
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)(lVar1 + 0xa0) = uVar3;
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0xb0);
      *(undefined8 *)(lVar1 + 0xb0) = uVar3;
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + 200);
      *(undefined8 *)(lVar1 + 200) = uVar3;
      _objc_release(uVar2);
      func_0x00010becf280(lVar1,param_2,5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a48528; end: 105a485eb; -[SCSpectaclesFirmwareManager firmwareDownloaderDidFailPatchDownload:] */

void FUN_105a48528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a485ec; end: 105a4862f;  */

void FUN_105a485ec(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x80) == 5)) {
    func_0x00010be0e180(param_1,param_2,6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a48630; end: 105a48707; -[SCSpectaclesFirmwareManager firmwareDownloader:didDownloadPatchToPath:] */

void FUN_105a48630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a48708; end: 105a487a3;  */

void FUN_105a48708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x80) == 5)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1;
    func_0x00010bdca660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6a40(uVar3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010becf280(param_1,param_2,6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a487a4; end: 105a4887b; -[SCSpectaclesFirmwareManager spectaclesDeviceDidPair:] */

void FUN_105a487a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4887c; end: 105a48923;  */

void FUN_105a4887c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be774e0(lVar1);
    func_0x00010bec0f00(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(long *)(lVar1 + 0x78) == lVar2) && (*(long *)(lVar1 + 0x80) == 7)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      func_0x000106e937b0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf705c0(uVar3,param_2,lVar2);
      _objc_release(lVar2);
      if ((int)uVar3 == 0) {
        func_0x00010be0e180(lVar1,param_2,10);
      }
      else {
        func_0x00010bec8ba0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a48924; end: 105a489fb; -[SCSpectaclesFirmwareManager spectaclesDeviceDidUpdateState:] */

void FUN_105a48924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a489fc; end: 105a48ae3;  */

void FUN_105a489fc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (uVar3 == *(ulong *)(lVar2 + 0x78)) {
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf48920();
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar2;
        func_0x00010becaac0();
        _objc_release(uVar3);
        if ((int)lVar5 != 0) {
          func_0x00010be0e180(lVar2,param_2,0xb);
        }
      }
      else {
        _objc_release(uVar3);
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c082060();
      if (iVar1 != 0) {
        func_0x00010be0e180(lVar2,param_2,0xb);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf48920();
    _objc_release(uVar6);
    if ((int)uVar7 == 0) {
      func_0x00010c12d360(*(undefined8 *)(lVar2 + 0xf8),param_2,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010bec0f00(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a48ae4; end: 105a48bb7; -[SCSpectaclesFirmwareManager spectaclesDevice:didUpdateInfo:] */

void FUN_105a48ae4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 & 0x801) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a48bb8; end: 105a48be3;  */

void FUN_105a48bb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec0f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a48be4; end: 105a48ce3; -[SCSpectaclesFirmwareManager spectaclesDevice:didFetchFirmwareUpdateDigest:] */

void FUN_105a48be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a48ce4; end: 105a48e07;  */

void FUN_105a48ce4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) != 6 && *(long *)(lVar1 + 0x80) != 3)) ||
     (*(long *)(param_1 + 0x20) != *(long *)(lVar1 + 0x78))) goto LAB_105a48df0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c28ed80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + 200);
  func_0x00010c28ed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar1 + 0xb8);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    if (*(long *)(lVar1 + 0x80) == 3) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)(lVar1 + 0xc0);
      *(undefined8 *)(lVar1 + 0xc0) = uVar6;
      _objc_release(uVar5);
      uVar5 = 4;
      goto LAB_105a48dd4;
    }
    if (*(long *)(lVar1 + 0x80) == 6) goto LAB_105a48da4;
  }
  else if ((*(long *)(lVar1 + 0xb0) == 0) || (*(long *)(lVar1 + 200) == 0)) {
    uVar5 = 7;
LAB_105a48dd4:
    func_0x00010becf280(lVar1,param_2,uVar5);
  }
  else {
LAB_105a48da4:
    func_0x00010be0e180(lVar1,param_2,8);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105a48df0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a48e08; end: 105a48ef7; -[SCSpectaclesFirmwareManager spectaclesDevice:onFirmwareUpdate:progress:] */

void FUN_105a48e08(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_5;
  uStack_50 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105a48ef8; end: 105a49247;  */

void FUN_105a48ef8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x20) != *(long *)(lVar1 + 0x78))) goto LAB_105a48f30;
  lVar4 = lVar1;
  switch(*(undefined8 *)(param_1 + 0x30)) {
  case 0:
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bebe8e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0692a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0887a0();
    func_0x000109026a90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0180(uVar7,param_2,lVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    goto code_r0x000105a49240;
  case 1:
    if (*(long *)(lVar1 + 0x80) != 2) break;
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bdca660(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6960(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = 3;
    goto code_r0x000105a49170;
  case 2:
    if (*(long *)(lVar1 + 0x80) != 2) break;
    uVar5 = 3;
    goto code_r0x000105a491d0;
  case 3:
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bebe8e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b01e0(uVar5,param_2,lVar4);
    goto code_r0x000105a49240;
  case 4:
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bebe8e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0240(uVar5,param_2,lVar4);
    goto code_r0x000105a49240;
  case 5:
    if (*(long *)(lVar1 + 0x80) == 6) {
      func_0x00010bdc5140(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249260((float)*(ulong *)(lVar1 + 0x88));
      _objc_release(lVar4);
      fVar8 = *(float *)(param_1 + 0x38);
      if (1.0 <= fVar8) {
        uVar5 = *(undefined8 *)(lVar1 + 0x20);
        lVar4 = lVar1;
        func_0x00010bdca660(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a6a80(uVar5,param_2,lVar4);
        _objc_release(lVar4);
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(lVar1 + 0xf0);
        *(undefined **)(lVar1 + 0xf0) = puVar3;
        _objc_release(uVar5);
        fVar8 = *(float *)(param_1 + 0x38);
      }
      uVar6 = (ulong)(fVar8 * 100.0);
      if (99 < uVar6) {
        uVar6 = 100;
      }
      *(ulong *)(lVar1 + 0x88) = uVar6;
    }
    break;
  case 6:
    if (*(long *)(lVar1 + 0x80) == 6) {
      func_0x00010bec1de0(lVar1);
    }
    break;
  case 7:
    uVar5 = 7;
    goto code_r0x000105a491d0;
  case 8:
    if (*(float *)(param_1 + 0x38) == 0.0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010bdca660(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6a20(uVar5,param_2,lVar4);
    }
    else {
      if (*(float *)(param_1 + 0x38) < 1.0) break;
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010bdca660(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6a00(uVar5,param_2,lVar4);
    }
code_r0x000105a49240:
    _objc_release(lVar4);
    break;
  case 9:
    uVar5 = 8;
    goto code_r0x000105a491d0;
  case 0xb:
    uVar5 = 9;
    goto code_r0x000105a491d0;
  case 0xc:
    uVar5 = 10;
code_r0x000105a491d0:
    func_0x00010be0e180(lVar1,param_2,uVar5);
    break;
  case 0xd:
    func_0x00010bec8ba0(lVar1);
    break;
  case 0xe:
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bdca660(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6b00(uVar5,param_2,lVar4);
    _objc_release(lVar4);
  case 0xf:
    uVar5 = 0;
code_r0x000105a49170:
    func_0x00010becf280(lVar1,param_2,uVar5);
  }
LAB_105a48f30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49248; end: 105a492ef; -[SCSpectaclesFirmwareManager spectaclesDevice:didCompletedScheduledUpdateWithUserInfo:error:] */

void FUN_105a49248(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1880;
  _objc_opt_class(PTR_PTR_1126c1880);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    if (param_5 == 0) {
      func_0x00010be53800(param_1);
    }
    else {
      lVar3 = param_5;
      func_0x00010c09e4e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be537c0(param_1);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a492f0; end: 105a49307; -[SCSpectaclesFirmwareManager spectaclesTransferSession:onTransferUpdate:] */

void FUN_105a492f0(long param_1)

{
  if (*(long *)(param_1 + 0x80) == 6) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}



/* Entry: 105a49308; end: 105a49313; -[SCSpectaclesFirmwareManager _updateWindowDuration] */

undefined8 FUN_105a49308(void)

{
  return 0x40bc200000000000;
}



/* Entry: 105a49314; end: 105a49343; -[SCSpectaclesFirmwareManager _updateWindowStart] */

void FUN_105a49314(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0d99a0(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,3,0,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a49344; end: 105a49487; -[SCSpectaclesFirmwareManager _failCurrentUpdate:] */

void FUN_105a49344(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_1 + 0xd9) = 0;
    lVar1 = param_1;
    func_0x00010bdc5140();
    _objc_retainAutoreleasedReturnValue();
    if (((param_3 == 2) || (param_3 == 1)) || (param_3 == 0)) {
      func_0x00010c249240(lVar1);
    }
    else {
      func_0x00010bee09e0(param_1);
      func_0x00010c249280(lVar1);
    }
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x80) != 1) {
      lVar1 = param_1;
      _objc_opt_class(param_1);
      func_0x00010be0b180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be537e0(param_1);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bdca660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be537c0(param_1);
      _objc_release(lVar1);
    }
    func_0x00010becf280(param_1);
    if (param_3 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPassiveUpdates_11258dd68);
      return;
    }
  }
  return;
}



/* Entry: 105a49488; end: 105a49497; -[SCSpectaclesFirmwareManager _succeedIntermediateUpdate] */

void FUN_105a49488(long param_1)

{
  *(undefined1 *)(param_1 + 0xd9) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,1);
  return;
}



/* Entry: 105a49498; end: 105a49543; -[SCSpectaclesFirmwareManager _succeedCurrentUpdate] */

void FUN_105a49498(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xd9) = 0;
  func_0x00010be537e0(param_1,param_2,1,0);
  lVar1 = param_1;
  func_0x00010bdca660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53800(param_1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285ce0();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bdc5140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249240();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
  return;
}



/* Entry: 105a49544; end: 105a497bb; -[SCSpectaclesFirmwareManager _transitionToState:] */

void FUN_105a49544(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x80) != param_3) {
    *(long *)(param_1 + 0x80) = param_3;
    if (param_3 < 4) {
      if (param_3 == 0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        lVar1 = param_1;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x98);
        *(long *)(param_1 + 0x98) = lVar1;
        _objc_release(uVar2);
        func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar1);
        func_0x00010bf2e420();
        _objc_release(lVar1);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_105a497bc;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_58);
        uVar2 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xc0) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xa8) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0xe0) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0xf0) = 0;
        _objc_release(uVar2);
        *(undefined1 *)(param_1 + 0xd8) = 1;
      }
      else if (param_3 == 1) {
        func_0x00010bfa7e00(*(undefined8 *)(param_1 + 0x40));
        func_0x00010c268300(param_1);
      }
      else if (param_3 == 2) {
        func_0x00010be97320(param_1);
      }
    }
    else if (param_3 < 6) {
      if (param_3 == 4) {
        lVar1 = *(long *)(param_1 + 0xc0);
        func_0x00010c08fa60();
        if (lVar1 == 0) {
          func_0x00010becf280(param_1);
        }
        else {
          func_0x00010bebfae0(param_1);
        }
      }
      else if (param_3 == 5) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar1 = param_1;
        func_0x00010bdca660(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a6a60(uVar2);
        _objc_release(lVar1);
        func_0x00010bebfd80(param_1);
      }
    }
    else if (param_3 == 6) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_1;
      func_0x00010bdca660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6aa0(uVar2);
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0x90) = 0;
      func_0x00010bec1f40(param_1);
    }
    else if (param_3 == 7) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      func_0x00010bec1320(param_1);
      func_0x00010bebff80(param_1);
      func_0x00010bdd0be0(param_1);
    }
    lVar1 = param_1;
    func_0x00010bdc5140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee09e0(param_1);
    func_0x00010c249260((float)*(ulong *)(param_1 + 0x88),lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 105a497bc; end: 105a497c7;  */

void FUN_105a497bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_unfreezeActiveDeviceForFirmwareU_11267d8f8);
  return;
}



/* Entry: 105a497c8; end: 105a498a7; -[SCSpectaclesFirmwareManager _startProgressTimer] */

void FUN_105a497c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fe0(0x3fee50d79435e50d,uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a498a8; end: 105a49937;  */

void FUN_105a498a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(ulong *)(lVar1 + 0x88) < 0x5f)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x98));
    if ((int)uVar2 != 0) {
      *(long *)(lVar1 + 0x88) = *(long *)(lVar1 + 0x88) + 1;
      lVar3 = lVar1;
      func_0x00010bdc5140(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249260((float)*(ulong *)(lVar1 + 0x88));
      _objc_release(lVar3);
      func_0x00010bec1320(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49938; end: 105a49a17; -[SCSpectaclesFirmwareManager _startFlashUpdateFailureTimer] */

void FUN_105a49938(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fe0(0x4062c00000000000,uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a49a18; end: 105a49a6f;  */

void FUN_105a49a18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) == 7)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x98));
    if ((int)uVar2 != 0) {
      func_0x00010be0e180(lVar1,param_2,9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49a70; end: 105a49b53; -[SCSpectaclesFirmwareManager _startTransferUpdateFailureTimer] */

void FUN_105a49a70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(uVar1);
  uStack_40 = uVar3;
  func_0x00010c0f7fe0(0x403e000000000000,uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a49b54; end: 105a49bdf;  */

void FUN_105a49b54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) == 6)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x98));
    if (((int)uVar2 != 0) && (*(long *)(lVar1 + 0x88) == *(long *)(param_1 + 0x30))) {
      if (((*(byte *)(lVar1 + 0xd8) & 1) == 0) && (*(char *)(lVar1 + 0x90) == '\x01')) {
        *(undefined1 *)(lVar1 + 0x90) = 0;
        func_0x00010bec1de0(lVar1);
      }
      else {
        func_0x00010be0e180(lVar1,param_2,7);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49be0; end: 105a49cbf; -[SCSpectaclesFirmwareManager _startPrepareUpdateFailureTimer] */

void FUN_105a49be0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fe0(0x4054000000000000,uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a49cc0; end: 105a49d17;  */

void FUN_105a49cc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(ulong *)(lVar1 + 0x80) < 5)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(lVar1 + 0x98));
    if ((int)uVar2 != 0) {
      func_0x00010be0e180(lVar1,param_2,3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49d18; end: 105a49dfb; -[SCSpectaclesFirmwareManager _revertFirmwareBinary] */

void FUN_105a49d18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(ulong *)(param_1 + 0xd0) < 2) {
    *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) + 1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1;
    func_0x00010bdca660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6980(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = (undefined *)(param_1 + 0x10);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c140280();
  }
  else {
    func_0x00010be0e180(param_1,param_2,4);
    puVar3 = PTR_PTR_1126b3e90;
    _objc_opt_new(PTR_PTR_1126b3e90);
    func_0x00010c207640();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    puVar1 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar4,param_2,puVar3,0,&PTR____CFConstantStringClassReference_110e18818,
                        puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105a49dfc; end: 105a49e6b; -[SCSpectaclesFirmwareManager _startCheckingForUpdate] */

void FUN_105a49dfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfb0a80(uVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c24e4a0(*(undefined8 *)(param_1 + 0x38),param_2,uVar2,*(undefined8 *)(param_1 + 0xc0))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a49e6c; end: 105a49e73; -[SCSpectaclesFirmwareManager _startDownloadingPatch] */

void FUN_105a49e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_startDownloadingUpdate_1126714c0);
  return;
}



/* Entry: 105a49e74; end: 105a49edf; -[SCSpectaclesFirmwareManager _startUpdatingPatch] */

void FUN_105a49e74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  func_0x00010bec1de0();
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfacf40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf084e0(lVar1,param_2,uVar3,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a49ee0; end: 105a4a0af; -[SCSpectaclesFirmwareManager _attemptFlashUpdate] */

void FUN_105a49ee0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 0xd8) != '\x01') {
    lVar2 = param_2 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_2;
    func_0x00010bee44a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee4460(param_2);
    lVar4 = param_2;
    func_0x00010bdca660(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1354c0(param_1,lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0xf8),PTR_s_addObject__11259c1f0,
               *(undefined8 *)(param_2 + 0x78));
    return;
  }
  lVar2 = param_2;
  func_0x00010be44800();
  if ((int)lVar2 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x78);
    func_0x00010c2735a0();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x78);
      func_0x00010c2735c0();
      if (iVar1 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        lVar2 = param_2;
        func_0x00010bdca660(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a69e0(uVar5);
        _objc_release(lVar2);
        if (((*(long *)(param_2 + 0xb0) == 0) || (*(long *)(param_2 + 200) == 0)) ||
           ((*(byte *)(param_2 + 0xd9) & 1) != 0)) {
          param_2 = param_2 + 0x10;
          _objc_loadWeakRetained(param_2);
        }
        else {
          param_2 = param_2 + 0x10;
          _objc_loadWeakRetained(param_2);
        }
        func_0x00010c1354a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_2);
        return;
      }
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__failCurrentUpdate__112561200,uVar5);
  return;
}



/* Entry: 105a4a0b0; end: 105a4a1fb; -[SCSpectaclesFirmwareManager _isTargetDeviceBatteryLevelLowForFirmwareUpdate] */

bool FUN_105a4a0b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  bool bVar9;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf175c0();
  _objc_release(lVar1);
  if (lVar4 == 2) {
    return true;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078aa0();
  if ((int)uVar3 == 0) {
LAB_105a4a158:
    uVar5 = *(ulong *)(param_1 + 0x78);
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c078aa0();
    if ((uVar6 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x78);
      func_0x00010c0692a0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010c067fc0();
      bVar9 = lVar8 < 0x32;
      _objc_release(lVar1);
      _objc_release(lVar7);
    }
    else {
      bVar9 = false;
    }
    _objc_release(uVar5);
    if ((int)uVar3 == 0) goto LAB_105a4a1d8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x78);
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar4;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x22;
    func_0x00010c067fc0();
    if (0x27 < lVar1) goto LAB_105a4a158;
    bVar9 = true;
  }
  _objc_release(unaff_x22);
  _objc_release(lVar4);
LAB_105a4a1d8:
  _objc_release(uVar2);
  return bVar9;
}



/* Entry: 105a4a1fc; end: 105a4a22f; -[SCSpectaclesFirmwareManager _hasValidUpdateParameters] */

void FUN_105a4a1fc(void)

{
  func_0x00010c08fa60();
  return;
}



/* Entry: 105a4a230; end: 105a4a253; -[SCSpectaclesFirmwareManager _targetDeviceActivelyUpdating] */

byte FUN_105a4a230(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x80) - 1U < 7) {
    bVar1 = *(byte *)(param_1 + 0xd8);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 105a4a254; end: 105a4a267; -[SCSpectaclesFirmwareManager _targetDeviceCheckingDownloadingOrTransferring] */

bool FUN_105a4a254(long param_1)

{
  return *(long *)(param_1 + 0x80) - 1U < 6;
}



/* Entry: 105a4a268; end: 105a4a28b; -[SCSpectaclesFirmwareManager _updateStateForManagerState:] */

undefined8 FUN_105a4a268(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return *(undefined8 *)(&UNK_10ddc9fc8 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105a4a28c; end: 105a4a41b; -[SCSpectaclesFirmwareManager _analyticsUserInfo] */

void FUN_105a4a28c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c1880;
  _objc_alloc_init(PTR_PTR_1126c1880);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c15e740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bfd38e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c19cd80(puVar1,param_3,*(undefined8 *)(param_2 + 0xa8));
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bf40c40(uVar2);
  func_0x00010c18c800(puVar1,param_3,uVar2);
  func_0x00010c1fda20(puVar1,param_3,*(undefined8 *)(param_2 + 0x98));
  func_0x00010c1fdce0(puVar1,param_3,*(undefined8 *)(param_2 + 0xe0));
  func_0x00010c212360(puVar1,param_3,*(undefined8 *)(param_2 + 0xa0));
  func_0x00010c21c5e0(puVar1,param_3,*(undefined1 *)(param_2 + 0xd8));
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  if (*(long *)(param_2 + 0xe8) != 0) {
    func_0x00010c26f380(*(long *)(param_2 + 0xe8),param_3,uVar3);
    param_1 = param_1 * 1000.0;
    func_0x00010c191220(puVar1,param_3,(long)param_1);
    uVar2 = *(undefined8 *)(param_2 + 0xe8);
    _objc_retain(uVar2);
    _objc_release(uVar3);
  }
  uVar3 = uVar2;
  if (*(long *)(param_2 + 0xf0) != 0) {
    func_0x00010c26f380(*(long *)(param_2 + 0xf0),param_3,uVar2);
    param_1 = param_1 * 1000.0;
    func_0x00010c219820(puVar1,param_3,(long)param_1);
    uVar3 = *(undefined8 *)(param_2 + 0xf0);
    _objc_retain(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c26f3a0(uVar3);
  func_0x00010c21c500(puVar1,param_3,(long)(param_1 * -1000.0));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a4a41c; end: 105a4a747; -[SCSpectaclesFirmwareManager _specsConnectionInfo] */

void FUN_105a4a41c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar15;
  undefined8 uVar16;
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
  
  puVar1 = PTR_PTR_1126c1888;
  uVar26 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar26);
  _objc_alloc();
  uVar25 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c24cc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar26;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2a52c0(uVar3,param_2,uVar5);
  uVar7 = uVar26;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar26;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar26;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar26;
  func_0x00010bf40c40();
  uVar13 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c06e420();
  uVar15 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar17 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c257160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar19 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246060();
  uVar20 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db2a0();
  uVar21 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52980();
  uVar22 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5660();
  uVar23 = uVar26;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c08a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98540();
  func_0x00010c045300(puVar1,param_2,uVar25,0,uVar6,uVar7,uVar9,uVar11,uVar12,(char)uVar14);
  _objc_release(uVar26);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a4a748; end: 105a4a74f; -[SCSpectaclesFirmwareManager _logFirmwareUpdateSuccessWithUserInfo:] */

void FUN_105a4a748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a6b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logFirmwareUpdateSucceeded__1126074e0);
  return;
}



/* Entry: 105a4a750; end: 105a4a777; +[SCSpectaclesFirmwareManager _errorStringForFailureReason:] */

undefined ** FUN_105a4a750(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_1108cf110)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e18838;
}



/* Entry: 105a4a778; end: 105a4a7f3; -[SCSpectaclesFirmwareManager _logFirmwareUpdateFailureWithUserInfo:reason:errorString:] */

void FUN_105a4a778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (param_5 == 0) {
    param_5 = param_1;
    _objc_opt_class(param_1);
    func_0x00010be0b180();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0a69c0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a4a7f4; end: 105a4a8a7; -[SCSpectaclesFirmwareManager _logFirmwareUpdateFinished:error:] */

void FUN_105a4a7f4(long param_1,undefined8 param_2,uint param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c1890;
  _objc_alloc_init(PTR_PTR_1126c1890);
  func_0x00010c1d7e80();
  uVar4 = 0x11;
  if (param_3 == 0) {
    uVar4 = 0x12;
  }
  func_0x00010c1d84e0(puVar2,param_2,uVar4);
  if ((param_3 & 1) == 0) {
    ppuVar3 = param_4;
    func_0x00010c08fa60();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    func_0x00010c165a20(puVar2,param_2,ppuVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a4a8a8; end: 105a4a8af; -[SCSpectaclesFirmwareManager eventAnnouncer] */

undefined8 FUN_105a4a8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 105a4a8b0; end: 105a4a8df; -[SCSpectaclesFirmwareManager setEventAnnouncer:] */

void FUN_105a4a8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a4a8e0; end: 105a4aa37; -[SCSpectaclesFirmwareManager .cxx_destruct] */

void FUN_105a4a8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a4aa38; end: 105a4ac47; -[SCSpectaclesFirmwareTagStore fetchLatestFirmwareVersion] */

void FUN_105a4aa38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211960(param_1);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c1898;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  func_0x00010c00c560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a4ac48; end: 105a4ac93;  */

void FUN_105a4ac48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1898;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c00c560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a4ac94; end: 105a4acc7; -[SCSpectaclesFirmwareTagStore hasLatestFirmwareVersion] */

bool FUN_105a4ac94(long param_1)

{
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105a4acc8; end: 105a4ad73; -[SCSpectaclesFirmwareTagStore updateTagFromTweak:] */

void FUN_105a4acc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c268480(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    func_0x00010c066b00(lVar2,param_2,param_3,0);
    lVar1 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010c211960(param_1,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4ad74; end: 105a4aed7; -[SCSpectaclesFirmwareTagStore firmwareTagForDevice:] */

void FUN_105a4ad74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c268480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar2 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0b6e60();
        lVar4 = lVar5;
        func_0x00010bfd3820();
        _objc_release(lVar2);
        if (lVar3 == lVar4) {
          _objc_retain(lVar5);
          goto LAB_105a4ae88;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  lVar5 = 0;
LAB_105a4ae88:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bfb0a80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c08b320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105a4aed8; end: 105a4af1b; -[SCSpectaclesFirmwareTagStore latestVersionForDevice:] */

void FUN_105a4aed8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08b320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a4af1c; end: 105a4af5f; -[SCSpectaclesFirmwareTagStore minimumRequiredVersionForDevice:] */

void FUN_105a4af1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ce2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a4af60; end: 105a4aff3; -[SCSpectaclesFirmwareTagStore deviceHasLatestFirmware:] */

bool FUN_105a4af60(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c08b340(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb0d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf433a0();
    bVar1 = lVar3 != -1;
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a4aff4; end: 105a4b0a7; -[SCSpectaclesFirmwareTagStore deviceHasMinimumRequiredFirmware:] */

bool FUN_105a4aff4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0ce580(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb0d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce580(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf433a0(lVar2,param_2,param_1);
    bVar1 = lVar3 != -1;
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a4b0a8; end: 105a4b0af; -[SCSpectaclesFirmwareTagStore tags] */

undefined8 FUN_105a4b0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a4b0b0; end: 105a4b0df; -[SCSpectaclesFirmwareTagStore setTags:] */

void FUN_105a4b0b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a4b0e0; end: 105a4b0eb; -[SCSpectaclesFirmwareTagStore .cxx_destruct] */

void FUN_105a4b0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a4b0ec; end: 105a4b297; -[SCSpectaclesFirmwareUpdateEventListenerAnnouncer spectaclesOnFirmwareUpdateForDevice:changedState:progress:] */

void FUN_105a4b0ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec0;
  while (PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec0 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec0;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec0,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 105a4b298; end: 105a4b2ab;  */

void FUN_105a4b298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a4b2ac; end: 105a4b44f; -[SCSpectaclesFirmwareUpdateEventListenerAnnouncer spectaclesOnFirmwareUpdateForDevice:failedFromState:] */

void FUN_105a4b2ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec8;
  while (PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec8;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec8,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 105a4b450; end: 105a4b45f;  */

void FUN_105a4b450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnFirmwareUpdateForDev_11266fec8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105a4b460; end: 105a4b607; -[SCSpectaclesFirmwareUpdateEventListenerAnnouncer spectaclesOnFirmwareUpdateEvent:device:] */

void FUN_105a4b460(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnFirmwareUpdateEvent__11266feb8;
  while (PTR_s_spectaclesOnFirmwareUpdateEvent__11266feb8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnFirmwareUpdateEvent__11266feb8;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_spectaclesOnFirmwareUpdateEvent__11266feb8,
             *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x28));
  return;
}



/* Entry: 105a4b608; end: 105a4b617;  */

void FUN_105a4b608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnFirmwareUpdateEvent__11266feb8,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a4b618; end: 105a4b783; -[SCSpectaclesFirmwareUpdateEventListenerAnnouncer spectaclesOnNewFirmwareVersionFetched] */

void FUN_105a4b618(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnNewFirmwareVersionFe_11266fed0;
  while (PTR_s_spectaclesOnNewFirmwareVersionFe_11266fed0 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fc0();
        _objc_release(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnNewFirmwareVersionFe_11266fed0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2492b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnNewFirmwareVersionFe_11266fed0);
  return;
}



/* Entry: 105a4b784; end: 105a4b78b;  */

void FUN_105a4b784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2492b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnNewFirmwareVersionFe_11266fed0);
  return;
}



/* Entry: 105a4b78c; end: 105a4b81b; -[SCVersionResourceDownloader checkUpdateWithParameters:] */

void FUN_105a4b78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a4b81c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105a4b81c; end: 105a4ba2f;  */

void FUN_105a4b81c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0d3c80();
  puVar2 = puVar1;
  func_0x00010c1d0640();
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_retain();
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110dfa5f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfa5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(ppuVar5);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010bf51e00();
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar6);
  func_0x00010bfaafa0(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a4ba30; end: 105a4bb73;  */

void FUN_105a4ba30(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_105a4bb4c;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c0720c0();
  if (iVar1 == 0) goto LAB_105a4bb4c;
  if (param_2 == 0) {
    lVar2 = param_3;
    func_0x00010c252ee0();
    if (lVar2 == 200) {
      if (param_4 == 0) goto LAB_105a4bb4c;
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = param_4;
      _objc_release(uVar5);
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
    }
    else {
      if (lVar2 != 0xcc) goto LAB_105a4bad0;
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
    }
    func_0x00010c298cc0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    if (iVar1 == 0) goto LAB_105a4bb4c;
LAB_105a4bad0:
    uVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) goto LAB_105a4bb4c;
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf761c0();
  }
  _objc_release(lVar2);
LAB_105a4bb4c:
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a4bb74; end: 105a4bbcb; -[SCVersionResourceDownloader downloadUpdate] */

void FUN_105a4bb74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a4bbcc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 105a4bbcc; end: 105a4bdef;  */

void FUN_105a4bbcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*plVar11 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e186b8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e18c38;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e18c18;
  uVar2 = *(undefined8 *)(*plVar11 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*plVar11 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,*plVar11);
  uVar4 = *(undefined8 *)(*plVar11 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_70;
  _objc_copyWeak(auStack_78);
  _objc_retain(uVar2);
  puVar10 = puVar3;
  func_0x00010bfaafc0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar3 = puVar3 + 0x28;
  _objc_loadWeakRetained();
  if (puVar3 == (undefined *)0x0) goto LAB_105a4bf94;
  if ((puVar9 == (undefined1 *)0x0) && (puVar10 != (undefined *)0x0)) {
    _objc_retain(puVar10);
    puVar7 = puVar3 + 0x38;
    _objc_loadWeakRetained(puVar7);
    func_0x00010c298ce0();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c1860;
    func_0x00010be093c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0720c0();
    if ((int)puVar8 == 0) {
      puVar8 = puVar3 + 0x38;
      _objc_loadWeakRetained();
      puVar6 = puVar8;
      _objc_opt_respondsToSelector();
      _objc_release(puVar8);
      if (((ulong)puVar6 & 1) != 0) {
        puVar8 = puVar3 + 0x38;
        _objc_loadWeakRetained(puVar8);
        func_0x00010bf76480();
        goto LAB_105a4bf80;
      }
    }
    else {
      puVar6 = *(undefined **)(puVar3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c2bda80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar3 + 0x38;
      _objc_loadWeakRetained(puVar6);
      if (puVar8 == (undefined *)0x0) {
        func_0x00010bf76480();
        puVar8 = puVar6;
      }
      else {
        func_0x00010c298d00();
        _objc_release(puVar6);
      }
LAB_105a4bf80:
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    puVar7 = puVar10;
  }
  else {
    puVar7 = puVar3 + 0x38;
    _objc_loadWeakRetained();
    puVar8 = puVar7;
    _objc_opt_respondsToSelector();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) == 0) goto LAB_105a4bf94;
    puVar7 = puVar3 + 0x38;
    _objc_loadWeakRetained(puVar7);
    func_0x00010bf761e0();
  }
  _objc_release(puVar7);
LAB_105a4bf94:
  _objc_release(puVar3);
  _objc_release(puVar10);
  return;
}



/* Entry: 105a4bdf0; end: 105a4bfbb;  */

void FUN_105a4bdf0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_105a4bf94;
  if ((param_2 == 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c298ce0();
    _objc_release(lVar6);
    puVar1 = PTR_PTR_1126c1860;
    func_0x00010be093c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar2 == 0) {
      uVar4 = param_1 + 0x38;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        lVar6 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar6);
        func_0x00010bf76480();
        goto LAB_105a4bf80;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c2bda80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar3);
      if (lVar6 == 0) {
        func_0x00010bf76480();
        lVar6 = lVar3;
      }
      else {
        func_0x00010c298d00();
        _objc_release(lVar3);
      }
LAB_105a4bf80:
      _objc_release(lVar6);
    }
    _objc_release(puVar1);
    lVar6 = param_4;
  }
  else {
    uVar4 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_105a4bf94;
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf761e0();
  }
  _objc_release(lVar6);
LAB_105a4bf94:
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 105a4bfbc; end: 105a4c0a3; +[SCVersionResourceDownloader _encodeWithSHA1:] */

void FUN_105a4bfbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_5c [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  lVar2 = param_3;
  func_0x00010c08fa60(param_3);
  _CC_SHA1(lVar3,lVar2,auStack_5c);
  lVar3 = 0;
  do {
    func_0x00010bf06ba0(puVar1);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x14);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a4c0a4; end: 105a4c0bb; -[SCVersionResourceDownloader delegate] */

void FUN_105a4c0a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a4c0bc; end: 105a4c123; -[SCVersionResourceDownloader .cxx_destruct] */

void FUN_105a4c0bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105a4c124; end: 105a4c2fb; +[SIGAlertDialog lowBatteryAlertForDevice:] */

void FUN_105a4c124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x0001090255d0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c0692a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf17500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e18418;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18418,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c1375c0(uVar1);
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a4c2fc; end: 105a4c387; +[SIGAlertDialog lowTemperatureAlert] */

void FUN_105a4c2fc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18438,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e18458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18458,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a4c388; end: 105a4c413; +[SIGAlertDialog highTemperatureAlert] */

void FUN_105a4c388(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18438,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e18478;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e18478,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


