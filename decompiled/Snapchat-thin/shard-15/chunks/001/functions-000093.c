/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b854ee4; end: 10b854eeb; -[SIGHeaderButtonOption presentTooltipWithText:duration:] */

void FUN_10b854ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipWithText_duration__112621470,param_3,0);
  return;
}



/* Entry: 10b854eec; end: 10b854ef7; -[SIGHeaderButtonOption presentTooltipWithText:duration:style:] */

void FUN_10b854eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipWithText_duration__112621478,param_3,param_4,0,0);
  return;
}



/* Entry: 10b854ef8; end: 10b854efb; -[SIGHeaderButtonOption presentTooltipWithText:duration:style:trailingAccessoryView:delegate:] */

void FUN_10b854ef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTooltipWithText_duration_11257d5a8);
  return;
}



/* Entry: 10b854efc; end: 10b854faf; -[SIGHeaderButtonOption _presentTooltipWithText:duration:style:trailingAccessoryView:delegate:] */

void FUN_10b854efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e17a0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c051680(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  func_0x00010c217180(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b854fb0; end: 10b854fc3; -[SIGHeaderButtonOption dismissTooltipIfPresented] */

void FUN_10b854fb0(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c217190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTooltipOption__112663688,0);
    return;
  }
  return;
}



/* Entry: 10b854fc4; end: 10b854fcb; -[SIGHeaderButtonOption tooltipOption] */

undefined8 FUN_10b854fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b854fcc; end: 10b854fe3; -[SIGHeaderButtonOption tooltipDelegate] */

void FUN_10b854fcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b854fe4; end: 10b85507f; -[SIGHeaderButtonOption .cxx_destruct] */

void FUN_10b854fe4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b855080; end: 10b8550c3; -[SIGHeaderButtonOptionView dealloc] */

void FUN_10b855080(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec3480();
  puStack_28 = PTR_PTR_11270b538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b8550c4; end: 10b855123; -[SIGHeaderButtonOptionView pointInside:withEvent:] */

void FUN_10b8550c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c082800();
  if ((int)uVar1 != 0) {
    func_0x00010bf20c00(param_1);
    _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 10b855124; end: 10b855133; -[SIGHeaderButtonOptionView _tapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794b68),PTR_s_trigger_11267c938);
  return;
}



/* Entry: 10b855134; end: 10b85517f; -[SIGHeaderButtonOptionView _effectiveCustomTintColorForOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855134(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb71a0();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112794b1c);
    if (lVar1 != 0) goto LAB_10b855168;
  }
  lVar1 = *(long *)(param_1 + _DAT_112794b18);
LAB_10b855168:
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b855180; end: 10b85518b; -[SIGHeaderButtonOptionView _backgroundNeedsUpdatingFromStyle:toStyle:] */

bool FUN_10b855180(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 != param_4;
}



/* Entry: 10b85518c; end: 10b85520f; -[SIGHeaderButtonOptionView _imageNeedsUpdatingFrom:to:] */

uint FUN_10b85518c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfe5400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfe5400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10b855210; end: 10b855293; -[SIGHeaderButtonOptionView _badgeNeedsUpdatingFrom:to:] */

uint FUN_10b855210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf150c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf150c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010c071bc0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10b855294; end: 10b8553af;  */

/* WARNING: Possible PIC construction at 0x00010b85535c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b85537c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b855360) */
/* WARNING: Removing unreachable block (ram,0x00010b855380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794b38;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bde5ce0(lVar1,param_2,*(undefined8 *)(lVar1 + lVar2),
                      *(undefined8 *)(lVar1 + _DAT_112794b44),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar1 + _DAT_112794b24));
  func_0x00010bde4b40();
  func_0x00010bde4b80();
  func_0x00010bde51e0();
  func_0x00010bde4b20();
  func_0x00010bde5300();
  func_0x00010bed9e00();
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b8553b0; end: 10b855477;  */

void FUN_10b8553b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b855478;
  puStack_58 = &UNK_110868698;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined4 *)(param_1 + 0x38);
  func_0x00010bef95a0(*(undefined8 *)(param_1 + 0x30),*(double *)(param_1 + 0x28) * 0.5,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_70);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b85552c;
  puStack_88 = &UNK_110868698;
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = *(undefined4 *)(param_1 + 0x38);
  func_0x00010bef95a0(*(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x28) * 0.5,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_a0);
  return;
}



/* Entry: 10b855478; end: 10b8555df;  */

/* WARNING: Possible PIC construction at 0x00010b8554a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8554f0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855478(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b44);
  }
  else {
    if (*(char *)(param_1 + 0x29) == '\x01') {
      func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b54));
    }
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b3c);
    }
    else {
      if (*(char *)(param_1 + 0x2b) != '\x01') {
        return;
      }
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b4c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,uVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b8555e0; end: 10b8555e7;  */

void FUN_10b8555e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b8555e8; end: 10b855893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8555e8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 != 0) {
    lVar4 = (long)_DAT_112794b34;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar2);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar8 = (long)_DAT_112794b38;
    uVar3 = *(undefined8 *)(lVar6 + lVar8);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = uVar3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar2;
    _objc_retain(uVar2);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794b3c;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar3);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar8 = (long)_DAT_112794b40;
    uVar5 = *(undefined8 *)(lVar6 + lVar8);
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = uVar5;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar3;
    _objc_retain(uVar3);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794b44;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar8 = (long)_DAT_112794b48;
    uVar7 = *(undefined8 *)(lVar6 + lVar8);
    _objc_retain(uVar7);
    uVar1 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = uVar7;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar5;
    _objc_retain(uVar5);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794b54;
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar7);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar8 = (long)_DAT_112794b58;
    uVar9 = *(undefined8 *)(lVar6 + lVar8);
    _objc_retain(uVar9);
    uVar1 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = uVar9;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar7;
    _objc_retain(uVar7);
    _objc_release(uVar1);
    lVar6 = (long)_DAT_112794b4c;
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
    _objc_retain(uVar9);
    lVar8 = *(long *)(param_1 + 0x20);
    lVar4 = (long)_DAT_112794b50;
    uVar10 = *(undefined8 *)(lVar8 + lVar4);
    _objc_retain(uVar10);
    uVar1 = *(undefined8 *)(lVar8 + lVar6);
    *(undefined8 *)(lVar8 + lVar6) = uVar10;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4) = uVar9;
    _objc_retain(uVar9);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794b2c;
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar10);
    lVar8 = *(long *)(param_1 + 0x20);
    lVar6 = (long)_DAT_112794b24;
    uVar11 = *(undefined8 *)(lVar8 + lVar6);
    _objc_retain(uVar11);
    uVar1 = *(undefined8 *)(lVar8 + lVar4);
    *(undefined8 *)(lVar8 + lVar4) = uVar11;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) = uVar10;
    _objc_retain(uVar10);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794b30;
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
    _objc_retain(uVar11);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar8 = (long)_DAT_112794b28;
    uVar12 = *(undefined8 *)(lVar6 + lVar8);
    _objc_retain(uVar12);
    uVar1 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = uVar12;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8) = uVar11;
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b855894; end: 10b8558c3; -[SIGHeaderButtonOptionView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855894(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112794b0c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bde4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBackgroundView_forOpti_112556c68,
             *(undefined8 *)(param_1 + _DAT_112794b3c),*(undefined8 *)(param_1 + _DAT_112794b68),
             param_3,*(undefined8 *)(param_1 + _DAT_112794b08));
  return;
}



/* Entry: 10b8558c4; end: 10b855983; -[SIGHeaderButtonOptionView _tooltipPosition] */

undefined8
FUN_10b8558c4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_4);
  uVar2 = param_4;
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,uVar1,param_5,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_4);
  uVar1 = 6;
  if (param_1 <= param_3 * 0.5) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 10b855984; end: 10b8559c3; -[SIGHeaderButtonOptionView _tooltipPoint] */

undefined1  [16]
FUN_10b855984(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3 * 0.5;
  return auVar1;
}



/* Entry: 10b8559c4; end: 10b855a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8559c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x20) + (long)_DAT_112794b78;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c10e840(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),param_1,lVar3,
                      param_3,uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10b855a28; end: 10b855a2b; -[SIGHeaderButtonOptionView tooltipDidDismiss:] */

void FUN_10b855a28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTooltip_11255e7b0);
  return;
}



/* Entry: 10b855a2c; end: 10b855aef; -[SIGHeaderButtonOptionView headerButtonOption:didChangeBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855a2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_112794b68;
  func_0x00010bde4b40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b54),
                      *(undefined8 *)(param_1 + lVar1));
  lVar2 = (long)_DAT_112794b08;
  func_0x00010bde5ce0(param_1);
  func_0x00010bde51e0(param_1);
  func_0x00010bde4b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureLoadingIndicatorView_f_112556e60,
             *(undefined8 *)(param_1 + _DAT_112794b4c),*(undefined8 *)(param_1 + lVar1),
             *(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 10b855af0; end: 10b855b1f; -[SIGHeaderButtonOptionView headerButtonOption:didChangeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureTextLabel_relativeToIm_1125570d8,
             *(undefined8 *)(param_1 + _DAT_112794b34),*(undefined8 *)(param_1 + _DAT_112794b44),
             *(undefined8 *)(param_1 + _DAT_112794b68),*(undefined8 *)(param_1 + _DAT_112794b08),0);
  return;
}



/* Entry: 10b855b20; end: 10b855b4f; -[SIGHeaderButtonOptionView headerButtonOption:didChangeTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureTextLabel_relativeToIm_1125570d8,
             *(undefined8 *)(param_1 + _DAT_112794b34),*(undefined8 *)(param_1 + _DAT_112794b44),
             *(undefined8 *)(param_1 + _DAT_112794b68),*(undefined8 *)(param_1 + _DAT_112794b08),0);
  return;
}



/* Entry: 10b855b50; end: 10b855bc7; -[SIGHeaderButtonOptionView headerButtonOption:didChangeTextPositionLeading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855b50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = (long)_DAT_112794b44;
  lVar2 = (long)_DAT_112794b68;
  lVar3 = (long)_DAT_112794b08;
  func_0x00010bde5ce0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b34),
                      *(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + lVar2),
                      *(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + _DAT_112794b2c));
                    /* WARNING: Could not recover jumptable at 0x00010bde51f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureImageView_forOption_th_112556e18,
             *(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + lVar2),
             *(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + _DAT_112794b30));
  return;
}



/* Entry: 10b855bc8; end: 10b855c77; -[SIGHeaderButtonOptionView headerButtonOption:didChangeTooltipOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855bc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = (long)_DAT_112794b64;
  lVar2 = (long)_DAT_112794b68;
  uVar5 = *(ulong *)(param_1 + lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c273f20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((uVar5 & 1) != 0) {
    return;
  }
  func_0x00010be03840(param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c273f20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c10e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipOption__112621458,*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10b855c78; end: 10b855c93; -[SIGHeaderButtonOptionView headerButtonBadge:didChangeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBadgeView_forOption__112556c70,
             *(undefined8 *)(param_1 + _DAT_112794b54),*(undefined8 *)(param_1 + _DAT_112794b68));
  return;
}



/* Entry: 10b855c94; end: 10b855caf; -[SIGHeaderButtonOptionView headerButtonBadge:didChangeStlye:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBadgeView_forOption__112556c70,
             *(undefined8 *)(param_1 + _DAT_112794b54),*(undefined8 *)(param_1 + _DAT_112794b68));
  return;
}



/* Entry: 10b855cb0; end: 10b855ccb; -[SIGHeaderButtonOptionView headerButtonBadge:didChangeAnimationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBadgeView_forOption__112556c70,
             *(undefined8 *)(param_1 + _DAT_112794b54),*(undefined8 *)(param_1 + _DAT_112794b68));
  return;
}



/* Entry: 10b855ccc; end: 10b855d8f; -[SIGHeaderButtonOptionView headerButtonBadge:didChangeIsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855ccc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_112794b68;
  func_0x00010bde4b40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b54),
                      *(undefined8 *)(param_1 + lVar1));
  lVar2 = (long)_DAT_112794b08;
  func_0x00010bde5ce0(param_1);
  func_0x00010bde51e0(param_1);
  func_0x00010bde4b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureLoadingIndicatorView_f_112556e60,
             *(undefined8 *)(param_1 + _DAT_112794b4c),*(undefined8 *)(param_1 + lVar1),
             *(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 10b855d90; end: 10b855d9f; -[SIGHeaderButtonOptionView option] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b855d90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794b68);
}



/* Entry: 10b855da0; end: 10b855daf; -[SIGHeaderButtonOptionView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b855da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794b0c);
}



/* Entry: 10b855db0; end: 10b855dbf; -[SIGHeaderButtonOptionView firstOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b855db0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794b10);
}



/* Entry: 10b855dc0; end: 10b855dcf; -[SIGHeaderButtonOptionView setFirstOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855dc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794b10) = param_3;
  return;
}



/* Entry: 10b855dd0; end: 10b855ddf; -[SIGHeaderButtonOptionView lastOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b855dd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794b14);
}



/* Entry: 10b855de0; end: 10b855def; -[SIGHeaderButtonOptionView setLastOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855de0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794b14) = param_3;
  return;
}



/* Entry: 10b855df0; end: 10b855dff; -[SIGHeaderButtonOptionView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b855df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794b08);
}



/* Entry: 10b855e00; end: 10b855f7b; -[SIGHeaderButtonOptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855e00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794b68,0);
  _objc_storeStrong(param_1 + _DAT_112794b1c,0);
  _objc_storeStrong(param_1 + _DAT_112794b18,0);
  _objc_storeStrong(param_1 + _DAT_112794b6c,0);
  _objc_storeStrong(param_1 + _DAT_112794b64,0);
  _objc_destroyWeak(param_1 + _DAT_112794b78);
  _objc_storeStrong(param_1 + _DAT_112794b60,0);
  _objc_storeStrong(param_1 + _DAT_112794b5c,0);
  _objc_storeStrong(param_1 + _DAT_112794b58,0);
  _objc_storeStrong(param_1 + _DAT_112794b54,0);
  _objc_storeStrong(param_1 + _DAT_112794b50,0);
  _objc_storeStrong(param_1 + _DAT_112794b4c,0);
  _objc_storeStrong(param_1 + _DAT_112794b28,0);
  _objc_storeStrong(param_1 + _DAT_112794b48,0);
  _objc_storeStrong(param_1 + _DAT_112794b30,0);
  _objc_storeStrong(param_1 + _DAT_112794b44,0);
  _objc_storeStrong(param_1 + _DAT_112794b24,0);
  _objc_storeStrong(param_1 + _DAT_112794b38,0);
  _objc_storeStrong(param_1 + _DAT_112794b2c,0);
  _objc_storeStrong(param_1 + _DAT_112794b34,0);
  _objc_storeStrong(param_1 + _DAT_112794b40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794b3c,0);
  return;
}



/* Entry: 10b855f7c; end: 10b855f8b; -[SIGHeaderButtonBackgroundView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b855f7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794b88);
}



/* Entry: 10b855f8c; end: 10b855f9b; -[SIGHeaderButtonBackgroundView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b855f8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794b04);
}



/* Entry: 10b855f9c; end: 10b855fdb; -[SIGHeaderButtonBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b855f9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794b7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794b84,0);
  return;
}



/* Entry: 10b855fdc; end: 10b8560fb; -[SIGHeaderEditingTextField initWithFrame:] */

undefined1 * FUN_10b855fdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 26.0;
    puVar3 = puVar2;
    func_0x00010bfb3e80(0x403a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    func_0x00010c165e20(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bfb3a80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    func_0x00010c1c8240(dVar5 * 0.78,puVar1);
    _objc_release(puVar4);
    func_0x00010c165e00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b8560fc; end: 10b85627f; -[SIGHeaderEditingTextField textInputMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10b8560fc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar5 = &puStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  func_0x00010bf6a820();
  if ((int)puVar1 != 0) {
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
    func_0x00010bef0960();
    _objc_retainAutoreleasedReturnValue();
    param_5 = &puStack_130;
    ppuVar11 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      lVar10 = *plStack_120;
      unaff_x21 = &PTR____CFConstantStringClassReference_110e540b8;
      unaff_x22 = ppuVar11;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(ppuVar2);
          }
          ppuVar9 = *(undefined ***)(lStack_128 + (long)ppuVar11 * 8);
          ppuVar3 = ppuVar9;
          func_0x00010c112f20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          param_5 = unaff_x21;
          func_0x00010c0720c0();
          _objc_release(ppuVar3);
          if (((ulong)ppuVar4 & 1) != 0) {
            _objc_retain(ppuVar9);
            _objc_release();
            goto LAB_10b856240;
          }
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (unaff_x22 != ppuVar11);
        param_5 = &puStack_130;
        unaff_x22 = ppuVar2;
        func_0x00010bf52a60();
      } while (unaff_x22 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
  }
  puStack_138 = PTR_PTR_11270b548;
  puStack_140 = param_3;
  _objc_msgSendSuper2(&puStack_140,PTR_s_textInputMode_112678a88);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar5;
  ppuVar9 = ppuVar5;
LAB_10b856240:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return ppuVar9;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b856280;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_5);
  if (param_5 == (undefined **)0x0) {
    puStack_1d0 = PTR_PTR_11270b548;
    ppuStack_1d8 = ppuVar2;
    _objc_msgSendSuper2(&ppuStack_1d8,PTR_s_setAttributedPlaceholder__1126387c0,0);
  }
  else {
    unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init();
    ppuVar5 = unaff_x21;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar5;
    func_0x00010bf8c780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(unaff_x21);
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    ppuVar5 = unaff_x21;
    func_0x00010bfe6ac0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    ppuVar11 = unaff_x21;
    func_0x00010bfe6ac0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(0,0xc018000000000000,param_1,param_2,unaff_x21);
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    uStack_1c8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = *(undefined8 *)PTR__NSAttachmentAttributeName_1103457b0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1b8 = puVar6;
    ppuStack_1b0 = unaff_x21;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bf069e0(puVar1);
    func_0x00010c16b680(ppuVar2);
    _objc_release(puVar1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  ppuVar5 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  pppuVar8 = &ppuStack_220;
  pcStack_1e8 = FUN_10b8564b8;
  puStack_218 = PTR_PTR_11270b548;
  ppuStack_220 = ppuVar5;
  ppuStack_210 = unaff_x22;
  ppuStack_208 = unaff_x21;
  ppuStack_200 = ppuVar2;
  ppuStack_1f8 = param_5;
  ppuStack_1f0 = &puStack_150;
  _objc_msgSendSuper2(&ppuStack_220,PTR_s_resignFirstResponder_11262c258);
  if ((int)pppuVar8 != 0) {
    lVar10 = (long)ppuVar5 + (long)_DAT_112794b8c;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bdc2700();
    _objc_release(lVar10);
  }
  return (undefined **)pppuVar8;
}



/* Entry: 10b856280; end: 10b8564b7; -[SIGHeaderEditingTextField setPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b856280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  if (param_5 == (undefined1 *)0x0) {
    puStack_90 = PTR_PTR_11270b548;
    uStack_98 = param_3;
    _objc_msgSendSuper2(&uStack_98,PTR_s_setAttributedPlaceholder__1126387c0,0);
  }
  else {
    unaff_x21 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init();
    puVar1 = unaff_x21;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf8c780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(unaff_x21);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = unaff_x21;
    func_0x00010bfe6ac0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar2 = unaff_x21;
    func_0x00010bfe6ac0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(0,0xc018000000000000,param_1,param_2,unaff_x21);
    _objc_release(puVar2);
    _objc_release(puVar1);
    unaff_x22 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    uStack_88 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = *(undefined8 *)PTR__NSAttachmentAttributeName_1103457b0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar2;
    puStack_70 = unaff_x21;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf069e0(puVar1);
    func_0x00010c16b680(param_3);
    _objc_release(puVar1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  puVar4 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_e0;
  pcStack_a8 = FUN_10b8564b8;
  puStack_d8 = PTR_PTR_11270b548;
  puStack_e0 = puVar4;
  puStack_d0 = unaff_x22;
  puStack_c8 = unaff_x21;
  uStack_c0 = param_3;
  puStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_resignFirstResponder_11262c258);
  if ((int)ppuVar5 != 0) {
    puVar4 = puVar4 + _DAT_112794b8c;
    _objc_loadWeakRetained(puVar4);
    func_0x00010bdc2700();
    _objc_release(puVar4);
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 10b8564b8; end: 10b85652f; -[SIGHeaderEditingTextField resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b8564b8(long param_1)

{
  long *plVar1;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_11270b548;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_resignFirstResponder_11262c258);
  if ((int)plVar1 != 0) {
    param_1 = param_1 + _DAT_112794b8c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc2700();
    _objc_release(param_1);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 10b856530; end: 10b85654f; -[SIGHeaderEditingTextField editingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b856530(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794b8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b856550; end: 10b856563; -[SIGHeaderEditingTextField setEditingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b856550(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794b8c,param_3);
  return;
}



/* Entry: 10b856564; end: 10b856573; -[SIGHeaderEditingTextField defaultToEmojiKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b856564(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794b90);
}



/* Entry: 10b856574; end: 10b856583; -[SIGHeaderEditingTextField setDefaultToEmojiKeyboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b856574(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794b90) = param_3;
  return;
}



/* Entry: 10b856584; end: 10b856593; -[SIGHeaderEditingTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b856584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112794b8c);
  return;
}



/* Entry: 10b856594; end: 10b856627; -[SIGHeaderItem headerView] */

void FUN_10b856594(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x00010bf529e0(), lVar1 != 0)) {
    lVar5 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c102e00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126af078;
      _objc_opt_class(PTR_PTR_1126af078);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) != 0) goto LAB_10b856610;
      _objc_release(uVar2);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
  }
  uVar2 = 0;
LAB_10b856610:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b856628; end: 10b85667b; -[SIGHeaderItem setAdjustsContentSizeWhenHidden:] */

void FUN_10b856628(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b85667c;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b85667c; end: 10b8566cb;  */

void FUN_10b85667c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeAdjustsConte_1125d5740);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf600(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8566cc; end: 10b85671f; -[SIGHeaderItem setAlpha:] */

void FUN_10b8566cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_2 + 0x28) = param_1;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856720;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_2;
  func_0x00010bfb47e0(param_2,param_3,&puStack_38);
  return;
}



/* Entry: 10b856720; end: 10b85676f;  */

void FUN_10b856720(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeAlpha__1125d5750);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856770; end: 10b8567c3; -[SIGHeaderItem setHidden:] */

void FUN_10b856770(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x11) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8567c4;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8567c4; end: 10b856863;  */

void FUN_10b8567c4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeHidden__1125d57b0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf7c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856864; end: 10b8568b7; -[SIGHeaderItem setDismissalAction:] */

void FUN_10b856864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8568b8;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8568b8; end: 10b8569a7;  */

void FUN_10b8568b8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeDismissalAct_1125d5790);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf740(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8569a8; end: 10b8569fb; -[SIGHeaderItem setCustomLeadingAccessoryViewHidden:] */

void FUN_10b8569a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x14) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8569fc;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8569fc; end: 10b856aeb;  */

void FUN_10b8569fc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeCustomLeadin_1125d5788);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf720(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856aec; end: 10b856b7f; -[SIGHeaderItem setTitle:] */

void FUN_10b856aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b856b80;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b856b80; end: 10b856bcf;  */

void FUN_10b856b80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitle__1125d5868);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfaa0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856bd0; end: 10b856c23; -[SIGHeaderItem setTitleEditable:] */

void FUN_10b856bd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x16) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856c24;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b856c24; end: 10b856c73;  */

void FUN_10b856c24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleEditabl_1125d5888);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfb20(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856c74; end: 10b856d07; -[SIGHeaderItem setEditableTitlePlaceholderText:] */

void FUN_10b856c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b856d08;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b856d08; end: 10b856d57;  */

void FUN_10b856d08(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeEditableTitl_1125d5798);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf760(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856d58; end: 10b856dab; -[SIGHeaderItem setTitleTextAlignment:] */

void FUN_10b856d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856dac;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b856dac; end: 10b856dfb;  */

void FUN_10b856dac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleTextAli_1125d5890);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfb40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856dfc; end: 10b856e4f; -[SIGHeaderItem setTitleTypeStyle:] */

void FUN_10b856dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856e50;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b856e50; end: 10b856e9f;  */

void FUN_10b856e50(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleTypeSty_1125d5898);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfb60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856ea0; end: 10b856ef3; -[SIGHeaderItem setAllowsFullWidthForTitle:] */

void FUN_10b856ea0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856ef4;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b856ef4; end: 10b856f43;  */

void FUN_10b856ef4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeAllowsFullWi_1125d5748);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf620(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856f44; end: 10b856f97; -[SIGHeaderItem setTitleAlwaysCollapsed:] */

void FUN_10b856f44(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b856f98;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b856f98; end: 10b856fe7;  */

void FUN_10b856f98(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleAlwaysC_1125d5878);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfae0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b856fe8; end: 10b85703b; -[SIGHeaderItem setBottomAccessoryViewFadesWhenScrolled:] */

void FUN_10b856fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b85703c;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b85703c; end: 10b85708b;  */

void FUN_10b85703c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeBottomAccess_1125d5778);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf6e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b85708c; end: 10b8570df; -[SIGHeaderItem setBottomAccessoryViewCollapsesWhenScrolled:] */

void FUN_10b85708c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8570e0;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8570e0; end: 10b85712f;  */

void FUN_10b8570e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeBottomAccess_1125d5770);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf6c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857130; end: 10b857183; -[SIGHeaderItem setScrollViewScrollingToTopOnTappingStatusBar:] */

void FUN_10b857130(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b857184;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b857184; end: 10b8571d3;  */

void FUN_10b857184(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeScrollViewSc_1125d57e8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf8a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8571d4; end: 10b857267; -[SIGHeaderItem setSubtitle:] */

void FUN_10b8571d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b857268;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b857268; end: 10b8572b7;  */

void FUN_10b857268(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSubtitle__1125d5848);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfa20(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8572b8; end: 10b85734b; -[SIGHeaderItem setTitleView:] */

void FUN_10b8572b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b85734c;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b85734c; end: 10b85739b;  */

void FUN_10b85734c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleView__1125d58a0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfb80(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b85739c; end: 10b8573ef; -[SIGHeaderItem setSearchFieldVisible:] */

void FUN_10b85739c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8573f0;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8573f0; end: 10b85743f;  */

void FUN_10b8573f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSearchFieldV_1125d5808);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf920(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857440; end: 10b8574ab; -[SIGHeaderItem setSearchFieldDelegate:] */

void FUN_10b857440(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0xb8,param_3);
  func_0x00010bfb47e0(param_1);
  return;
}



/* Entry: 10b8574ac; end: 10b85751b;  */

void FUN_10b8574ac(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSearchFieldD_1125d57f0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0xb8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf8c0(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b85751c; end: 10b857587; -[SIGHeaderItem setPillsDelegate:] */

void FUN_10b85751c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 200,param_3);
  func_0x00010bfb47e0(param_1);
  return;
}



/* Entry: 10b857588; end: 10b8575f7;  */

void FUN_10b857588(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangePillsDelegat_1125d57d8);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 200;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf860(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8575f8; end: 10b85768b; -[SIGHeaderItem setSearchFieldLeadingView:] */

void FUN_10b8575f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b85768c;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b85768c; end: 10b8576db;  */

void FUN_10b85768c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSearchFieldL_1125d57f8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf8e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8576dc; end: 10b85776f; -[SIGHeaderItem setSearchFieldTrailingView:] */

void FUN_10b8576dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b857770;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b857770; end: 10b8577bf;  */

void FUN_10b857770(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSearchFieldT_1125d5800);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf900(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8577c0; end: 10b857853; -[SIGHeaderItem setTabBarItems:] */

void FUN_10b8577c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b857854;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}


