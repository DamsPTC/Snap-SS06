/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b86c314; end: 10b86c373; -[SIGSubscreenView initWithScrollView:] */

long FUN_10b86c314(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    func_0x00010c1f7d00(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b86c374; end: 10b86c753; -[SIGSubscreenView setScrollView:] */

/* WARNING: Possible PIC construction at 0x00010b86c5f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b86c5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar6 = (long)_DAT_1127951e0;
  uVar2 = *(ulong *)(param_5 + lVar6);
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined8 *)(param_5 + _DAT_1127951e4);
    func_0x00010bf4c7c0(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x00010c12c960(*(undefined8 *)(param_5 + lVar6));
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c0f36c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e920();
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    *(long *)(param_5 + lVar6) = param_7;
    _objc_release(uVar3);
    func_0x00010c2026e0(param_7);
    func_0x00010c1738c0(param_7);
    func_0x00010c167a20(param_7);
    func_0x00010c1f7d00(*(undefined8 *)(param_5 + _DAT_1127951c0));
    if (param_7 != 0) {
      lVar5 = param_7;
      func_0x00010c0f36c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(lVar5);
      _objc_retain(param_7);
      lVar5 = param_7;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      while (lVar5 != 0) {
        lVar6 = param_7;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        lVar5 = lVar6;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        param_7 = lVar6;
      }
      func_0x00010c219b60(param_7);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_7);
      _objc_release(puVar4);
      func_0x00010c066fe0(param_5);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bf1ff80;
    }
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010bf1ff80:
                    /* WARNING: Could not recover jumptable at 0x00010bf1ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b86c754; end: 10b86c757; -[SIGSubscreenView scrollViewBottomAnchor] */

void FUN_10b86c754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bottomAnchor_1125a5988);
  return;
}



/* Entry: 10b86c758; end: 10b86c84f; -[SIGSubscreenView _scrollViewBeingPanned] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c758(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127951e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c070ea0();
  if (iVar1 != 0) {
    lVar5 = (long)_DAT_1127951d0;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c153980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073040();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c153980(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
      _objc_release(uVar3);
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c070ea0();
  if (iVar1 != 0) {
    lVar4 = (long)_DAT_1127951d0;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c2716e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073040();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c2716e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b86c850; end: 10b86c8c7; -[SIGSubscreenView presentTooltip:atPoint:fromView:forDuration:] */

void FUN_10b86c850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010bf51200(param_1,param_2,param_3,param_4,param_6);
  func_0x00010c10c340(param_5,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b86c8c8; end: 10b86c8cf; -[SIGSubscreenView dismissTooltip:] */

void FUN_10b86c8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b86c8d0; end: 10b86c9b7; -[SIGSubscreenView scrollViewContentOffsetDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c8d0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + _DAT_1127951ec) & 1) == 0) {
    if (*(char *)(param_3 + _DAT_1127951f0) == '\x01') {
      lVar1 = (long)_DAT_1127951d0;
      func_0x00010c0c34a0(*(undefined8 *)(param_3 + lVar1));
      func_0x00010c1f7da0(*(undefined8 *)(param_3 + lVar1),param_4,(long)param_1);
    }
    else {
      lVar1 = (long)_DAT_1127951e0;
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
      func_0x00010befda00(*(undefined8 *)(param_3 + lVar1));
      lVar1 = (long)_DAT_1127951d0;
      func_0x00010c1f7da0(*(undefined8 *)(param_3 + lVar1),param_4,(long)(param_2 + param_1));
      lVar1 = *(long *)(param_3 + lVar1);
      func_0x00010c152c40();
      dVar2 = -(double)lVar1;
      if (lVar1 < 1) {
        dVar2 = -0.0;
      }
      func_0x00010c181140(dVar2,*(undefined8 *)(param_3 + _DAT_1127951d8));
    }
    func_0x00010c289780(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b86c9b8; end: 10b86c9c7; -[SIGSubscreenView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86c9b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951e8);
}



/* Entry: 10b86c9c8; end: 10b86c9d7; -[SIGSubscreenView isScrollBehaviorSupressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b86c9c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127951f0);
}



/* Entry: 10b86c9d8; end: 10b86c9e7; -[SIGSubscreenView setScrollBehaviorSuppressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86c9d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127951f0) = param_3;
  return;
}



/* Entry: 10b86c9e8; end: 10b86c9f7; -[SIGSubscreenView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86c9e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951c8);
}



/* Entry: 10b86c9f8; end: 10b86ca07; -[SIGSubscreenView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86c9f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951e0);
}



/* Entry: 10b86ca08; end: 10b86cab7; -[SIGSubscreenView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ca08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127951dc,0);
  _objc_storeStrong(param_1 + _DAT_1127951d8,0);
  _objc_storeStrong(param_1 + _DAT_1127951cc,0);
  _objc_storeStrong(param_1 + _DAT_1127951d4,0);
  _objc_storeStrong(param_1 + _DAT_1127951c8,0);
  _objc_storeStrong(param_1 + _DAT_1127951c4,0);
  _objc_storeStrong(param_1 + _DAT_1127951c0,0);
  _objc_storeStrong(param_1 + _DAT_1127951e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127951d0,0);
  return;
}



/* Entry: 10b86cab8; end: 10b86cb0b; -[SIGSubscreenViewController initWithNibName:bundle:] */

undefined1 * FUN_10b86cab8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3be20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86cb0c; end: 10b86cb63; -[SIGSubscreenViewController initWithNibName:bundle:transitionType:] */

undefined1 * FUN_10b86cb0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3be20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86cb64; end: 10b86cbb7; -[SIGSubscreenViewController initWithCoder:] */

undefined1 * FUN_10b86cb64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3be20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86cbb8; end: 10b86cd07; -[SIGSubscreenViewController _initializeWithTransitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cbb8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  *(long *)(param_1 + _DAT_1127951f4) = param_3;
  lVar4 = param_1;
  if (param_3 == 1) {
    uVar3 = 2;
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0xffffffffffffffff;
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = (long)_DAT_1127951f8;
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar4;
  _objc_release(uVar1);
  func_0x00010c219b20(param_1,param_2,lVar4);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126af080;
  _objc_alloc_init();
  lVar4 = (long)_DAT_1127951fc;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  *(undefined1 *)(param_1 + _DAT_112795200) = 1;
  func_0x00010c1e1280(param_1,param_2,0);
  func_0x00010c1c8b80(param_1,param_2,4);
  lVar4 = (long)_DAT_112795204;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"title");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa220(param_1,param_2,param_1,puVar2,1,0);
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + lVar4) = 1;
  }
  return;
}



/* Entry: 10b86cd08; end: 10b86cd93; -[SIGSubscreenViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cd08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + _DAT_112795204) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"title");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d580(param_1);
    _objc_release(puVar1);
  }
  puStack_28 = PTR_PTR_11270b688;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b86cd94; end: 10b86cddb; -[SIGSubscreenViewController loadScrollView] */

void FUN_10b86cd94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c181fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b86cddc; end: 10b86ce07; -[SIGSubscreenViewController backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cddc(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bf14810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),PTR_s_backgroundView_1125a2ba8);
  return;
}



/* Entry: 10b86ce08; end: 10b86ce33; -[SIGSubscreenViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ce08(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bf4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),PTR_s_contentView_1125b10e0);
  return;
}



/* Entry: 10b86ce34; end: 10b86ce5f; -[SIGSubscreenViewController header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ce34(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bfdef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),PTR_s_header_1125d5598);
  return;
}



/* Entry: 10b86ce60; end: 10b86ce8b; -[SIGSubscreenViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ce60(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 10b86ce8c; end: 10b86cef3; -[SIGSubscreenViewController setPresentationMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86ce8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + _DAT_11279520c) = param_3;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    if (param_3 != 1) goto LAB_10b86ced4;
    uVar1 = 0x3fe0000000000000;
  }
  func_0x00010c19efc0(uVar1,*(undefined8 *)(param_1 + _DAT_1127951f8));
LAB_10b86ced4:
                    /* WARNING: Could not recover jumptable at 0x00010c1f79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),PTR_s_setScrollBehaviorSuppressed__11265b898,
             param_3 == 1);
  return;
}



/* Entry: 10b86cef4; end: 10b86cf63; -[SIGSubscreenViewController setStyle:] */

/* WARNING: Possible PIC construction at 0x00010b86cf28: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cef4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  *(ulong *)(param_1 + _DAT_112795210) = param_3;
  lVar1 = *(long *)(param_1 + _DAT_112795208);
  if (lVar1 == 0) {
    if (2 < param_3) {
      return;
    }
    param_3 = *(ulong *)(&UNK_10e5f33e0 + param_3 * 8);
    lVar1 = *(long *)(param_1 + _DAT_1127951fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setStyle__1126614d0,param_3);
  return;
}



/* Entry: 10b86cf64; end: 10b86cf73; -[SIGSubscreenViewController setHeaderStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cf64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127951fc),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 10b86cf74; end: 10b86d393; -[SIGSubscreenViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86cf74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_5;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar5);
  _objc_release();
  iVar2 = (int)puVar4;
  uVar6 = param_1;
  uVar8 = param_2;
  uVar11 = param_3;
  uVar14 = param_4;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  iVar3 = 0;
  if (iVar2 != 0) {
    puVar4 = param_5;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar5);
    _objc_release();
    iVar3 = (int)puVar4;
    param_1 = uVar6;
    param_2 = uVar8;
    param_3 = uVar11;
    param_4 = uVar14;
  }
  uVar6 = param_1;
  uVar8 = param_2;
  uVar11 = param_3;
  uVar14 = param_4;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if (iVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar4);
    param_1 = uVar6;
    param_2 = uVar8;
    param_3 = uVar11;
    param_4 = uVar14;
  }
  puVar4 = PTR_PTR_1126e1870;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  lVar12 = (long)_DAT_112795208;
  uVar6 = *(undefined8 *)(param_5 + lVar12);
  *(undefined **)(param_5 + lVar12) = puVar4;
  _objc_release(uVar6);
  _objc_retain(puVar4);
  func_0x00010c222380(param_5);
  func_0x00010c20eaa0(puVar4);
  func_0x000107c30aa0();
  puVar5 = param_5;
  func_0x00010bdd2320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bfdef60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a76e0();
  _objc_release(puVar5);
  lVar13 = (long)_DAT_1127951f8;
  uVar11 = *(undefined8 *)(param_5 + lVar13);
  uVar6 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(param_5 + lVar12);
  uStack_a0 = uVar6;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar12);
  puStack_98 = puVar7;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar11);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  puVar5 = param_5;
  func_0x00010c09c100();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    lVar13 = (long)_DAT_1127951fc;
  }
  else {
    func_0x00010c1f7d00(puVar4);
    uVar6 = *(undefined8 *)(param_5 + lVar13);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(uVar6);
    _objc_release(puVar7);
    lVar13 = (long)_DAT_1127951fc;
    iVar3 = (int)*(undefined8 *)(param_5 + lVar13);
    func_0x00010c23b320();
    if (iVar3 != 0) {
      puVar9 = PTR__OBJC_CLASS___UITableView_1126aed40;
      _objc_opt_class(PTR__OBJC_CLASS___UITableView_1126aed40);
      puVar10 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar9);
      if (((ulong)puVar10 & 1) == 0) {
        puVar9 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionView_1126afd20);
        puVar10 = puVar5;
        _objc_opt_isKindOfClass(puVar5,puVar9);
        if (((ulong)puVar10 & 1) == 0) goto LAB_10b86d308;
      }
      puVar9 = puVar4;
      func_0x00010bfdef60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010bf80f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010befbb60(puVar5);
      puVar9 = puVar4;
      func_0x00010bfdef60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0bd00();
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
  }
LAB_10b86d308:
  uVar11 = *(undefined8 *)(param_5 + lVar13);
  uVar8 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010c187440();
  _objc_release(uVar8);
  func_0x00010c1cbe20(puVar4);
  func_0x00010c08cdc0(puVar4);
  _objc_release(puVar5);
  puVar9 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b86d394;
  bVar1 = puVar9[_DAT_112795200];
  iVar3 = _DAT_1127951fc;
  lStack_f0 = lVar13;
  puStack_e8 = puVar7;
  uStack_e0 = uVar11;
  puStack_d8 = puVar5;
  puStack_d0 = puVar4;
  uStack_c8 = uVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bVar1 & 1) == 0) {
LAB_10b86d40c:
    lVar13 = (long)iVar3;
    lVar12 = *(long *)(puVar9 + iVar3);
    func_0x00010bf84de0();
    if (bVar1 != 0) {
      _objc_release(puVar5);
    }
    if (lVar12 != -1) goto LAB_10b86d43c;
  }
  else {
    puVar5 = puVar9;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    iVar3 = _DAT_1127951fc;
    if (puVar5 == (undefined *)0x0) goto LAB_10b86d40c;
    lVar13 = (long)_DAT_1127951fc;
    lVar12 = *(long *)(puVar9 + lVar13);
    func_0x00010bf84de0();
    if (lVar12 != -1) goto LAB_10b86d40c;
    _objc_release(puVar5);
  }
  func_0x00010c18f820(*(undefined8 *)(puVar9 + lVar13));
LAB_10b86d43c:
  puStack_f8 = PTR_PTR_11270b688;
  puStack_100 = puVar9;
  _objc_msgSendSuper2(&puStack_100,PTR_s_viewWillAppear__1126853f0,uVar6);
  func_0x00010c0d66a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(puVar9);
  return;
}



/* Entry: 10b86d394; end: 10b86d497; -[SIGSubscreenViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d394(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long unaff_x21;
  int iVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  bVar1 = *(byte *)(param_1 + _DAT_112795200);
  iVar3 = _DAT_1127951fc;
  if ((bVar1 & 1) == 0) {
LAB_10b86d40c:
    lVar4 = (long)iVar3;
    lVar2 = *(long *)(param_1 + iVar3);
    func_0x00010bf84de0();
    if (bVar1 != 0) {
      _objc_release(unaff_x21);
    }
    if (lVar2 != -1) goto LAB_10b86d43c;
  }
  else {
    unaff_x21 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    iVar3 = _DAT_1127951fc;
    if (unaff_x21 == 0) goto LAB_10b86d40c;
    lVar4 = (long)_DAT_1127951fc;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bf84de0();
    if (lVar2 != -1) goto LAB_10b86d40c;
    _objc_release(unaff_x21);
  }
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar4));
LAB_10b86d43c:
  puStack_48 = PTR_PTR_11270b688;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0,param_3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(param_1);
  return;
}



/* Entry: 10b86d498; end: 10b86d4db; -[SIGSubscreenViewController _backgroundColorWithThemedBackgroundEnabled:] */

void FUN_10b86d498(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b86d4dc; end: 10b86d4f7; -[SIGSubscreenViewController setUserCanInteractivelyDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d4dc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112795200) != param_3) {
    *(char *)(param_1 + _DAT_112795200) = (char)param_3;
  }
  return;
}



/* Entry: 10b86d4f8; end: 10b86d507; -[SIGSubscreenViewController headerAssociatedBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795208),
             PTR_s_updateContentViewConstraintsRela_11267ec78);
  return;
}



/* Entry: 10b86d508; end: 10b86d617; -[SIGSubscreenViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b86d508(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  
  _objc_retain(param_5);
  if (*(char *)(param_3 + _DAT_112795200) == '\x01') {
    lVar1 = param_3;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar5 = (long)_DAT_112795208;
      lVar1 = *(long *)(param_3 + lVar5);
      func_0x00010c152980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((param_5 == lVar1) && (*(long *)(param_3 + _DAT_1127951f4) != 1)) {
        uVar2 = *(undefined8 *)(param_3 + lVar5);
        func_0x00010c152980(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4cdc0();
        uVar3 = *(undefined8 *)(param_3 + lVar5);
        func_0x00010c152980(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befda00();
        bVar4 = param_2 + param_1 <= 0.0;
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        bVar4 = true;
      }
      goto LAB_10b86d5a4;
    }
  }
  bVar4 = false;
LAB_10b86d5a4:
  _objc_release(param_5);
  return bVar4;
}



/* Entry: 10b86d618; end: 10b86d61b; -[SIGSubscreenViewController cardToExpandTransition] */

void FUN_10b86d618(void)

{
  return;
}



/* Entry: 10b86d61c; end: 10b86d627; -[SIGSubscreenViewController cardTransitionWillBeginWithView:] */

void FUN_10b86d61c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10b86d628; end: 10b86d787; -[SIGSubscreenViewController cardTransitionDidUpdateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d628(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar3 = param_5;
  dVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar4);
  _objc_release();
  iVar1 = (int)lVar3;
  dVar8 = dVar7;
  uVar6 = param_2;
  uVar9 = param_3;
  dVar10 = param_4;
  _CGRectIsEmpty(dVar7,param_2,param_3);
  iVar2 = 0;
  if (iVar1 != 0) {
    lVar3 = param_5;
    func_0x00010c29bf00();
    iVar2 = (int)lVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release();
    param_4 = dVar10;
    dVar7 = dVar8;
    param_2 = uVar6;
    param_3 = uVar9;
  }
  dVar8 = param_4;
  _CGRectIsEmpty(dVar7,param_2,param_3);
  if (iVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar5);
    param_4 = dVar8;
  }
  if (5.0 < param_1 * param_4) {
    uVar6 = *(undefined8 *)(param_5 + _DAT_112795208);
    func_0x00010c152980(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 10b86d788; end: 10b86d803; -[SIGSubscreenViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d788(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112795208);
    func_0x00010c152980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  if (param_4 == 3) {
    *(undefined8 *)(param_1 + _DAT_112795214) = 1;
  }
  else if (param_4 == 2) {
    *(undefined8 *)(param_1 + _DAT_112795214) = 0;
    return;
  }
  return;
}



/* Entry: 10b86d804; end: 10b86d83b; -[SIGSubscreenViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_10b86d804(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b86d83c; end: 10b86d943; -[SIGSubscreenViewController observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d83c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010c071ae0();
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)uVar4 != 0) {
      uVar5 = param_5;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010c216240(*(undefined8 *)(param_1 + _DAT_1127951fc));
      _objc_release(uVar1);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86d944; end: 10b86d953; -[SIGSubscreenViewController style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86d944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795210);
}



/* Entry: 10b86d954; end: 10b86d963; -[SIGSubscreenViewController presentationMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86d954(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279520c);
}



/* Entry: 10b86d964; end: 10b86d973; -[SIGSubscreenViewController isPullToDismissEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b86d964(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795200);
}



/* Entry: 10b86d974; end: 10b86d983; -[SIGSubscreenViewController cardTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86d974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951f8);
}



/* Entry: 10b86d984; end: 10b86d993; -[SIGSubscreenViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86d984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127951fc);
}



/* Entry: 10b86d994; end: 10b86d9a3; -[SIGSubscreenViewController subscreenView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b86d994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795208);
}



/* Entry: 10b86d9a4; end: 10b86d9f3; -[SIGSubscreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86d9a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795208,0);
  _objc_storeStrong(param_1 + _DAT_1127951fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127951f8,0);
  return;
}



/* Entry: 10b86d9f4; end: 10b86da4b; -[SCSafeAreaBaselinePersistence clearBaselineInsets] */

void FUN_10b86d9f4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _objc_opt_class();
  iVar1 = (int)uVar2;
  func_0x00010be40fe0();
  if (iVar1 != 0) {
    func_0x00010c291b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b86da4c; end: 10b86da57; -[SCSafeAreaBaselinePersistence .cxx_destruct] */

void FUN_10b86da4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b86da58; end: 10b86dc83;  */

void FUN_10b86da58(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_538 [1024];
  undefined1 auStack_138 [256];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  _objc_release(puVar2);
  _uname(auStack_538);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,auStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f2b658;
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar3 & 1) == 0) {
    if ((ABS(param_1 + -852.0) <= 2.2250738585072014e-308) ||
       (ABS(param_1 + -932.0) <= 2.2250738585072014e-308)) {
      uRam00000001137fbc98 = 3;
    }
    else if ((ABS(param_1 + -844.0) <= 2.2250738585072014e-308) ||
            (ABS(param_1 + -926.0) <= 2.2250738585072014e-308)) {
      uRam00000001137fbc98 = 1;
    }
    else if ((ABS(param_1 + -812.0) <= 2.2250738585072014e-308) ||
            (ABS(param_1 + -896.0) <= 2.2250738585072014e-308)) {
      uRam00000001137fbc98 = 0;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f5b438;
      puVar3 = puVar2;
      func_0x00010bf4bb00();
      if (((int)puVar3 == 0) ||
         (((2.2250738585072014e-308 < ABS(param_1 + -1180.0) &&
           (2.2250738585072014e-308 < ABS(param_1 + -1194.0))) &&
          (2.2250738585072014e-308 < ABS(param_1 + -1366.0))))) {
        uRam00000001137fbc98 = 0xffffffffffffffff;
      }
      else {
        uRam00000001137fbc98 = 4;
      }
    }
  }
  else {
    uRam00000001137fbc98 = 2;
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  uVar1 = ppuRam00000001137fbcb8;
  ppuRam00000001137fbcb8 = ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b86dc84; end: 10b86dcb3; +[SCSafeAreaInsetsModern setBaselinePersistence:] */

void FUN_10b86dc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001137fbcb8;
  uRam00000001137fbcb8 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b86dcb4; end: 10b86dcbb; +[SCSafeAreaInsetsModern safeAreaInsetsForInterfaceOrientation:] */

void FUN_10b86dcb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c149010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_safeAreaInsetsForWindow__11262fe20,0);
  return;
}



/* Entry: 10b86dcbc; end: 10b86dd93; +[SCSafeAreaInsetsModern safeAreaInsetsForScene:] */

double FUN_10b86dcbc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x00010beca280();
  dVar4 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar6 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar5 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar7 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  bVar1 = false;
  if ((param_2 == dVar6) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
    bVar1 = param_1 == dVar4;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar7))) {
    bVar2 = param_4 == dVar7;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(param_3) && !NAN(dVar5))) {
    bVar1 = param_3 == dVar5;
  }
  if (bVar1) {
    uVar3 = param_5;
    func_0x00010bf164c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf164a0();
    _objc_release(uVar3);
  }
  bVar1 = false;
  if ((param_2 == dVar6) && (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
    bVar1 = param_1 == dVar4;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar7))) {
    bVar2 = param_4 == dVar7;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(param_3) && !NAN(dVar5))) {
    bVar1 = param_3 == dVar5;
  }
  if (bVar1) {
    func_0x00010be528c0(param_5,param_6,&PTR____CFConstantStringClassReference_110f8abd8);
  }
  return param_1;
}



/* Entry: 10b86dd94; end: 10b86ddb7; +[SCSafeAreaInsetsModern safeFooterButtonInset] */

undefined8 FUN_10b86dd94(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined8 uVar1;
  
  func_0x00010c148fc0();
  uVar1 = 0x4035000000000000;
  if (param_3 <= 0.0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b86ddb8; end: 10b86dddf; +[SCSafeAreaInsetsModern safeHeaderButtonInset] */

undefined8 FUN_10b86ddb8(double param_1)

{
  undefined8 uVar1;
  
  func_0x00010c148fc0();
  uVar1 = 0x4042800000000000;
  if (param_1 <= 0.0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b86dde0; end: 10b86ddff; +[SCSafeAreaInsetsModern headerHeight] */

double FUN_10b86dde0(double param_1)

{
  func_0x00010c148fc0();
  return param_1 + 44.0;
}



/* Entry: 10b86de00; end: 10b86de0b; +[SCSafeAreaInsetsModern ngsHeaderHeight] */

undefined8 FUN_10b86de00(void)

{
  return 0x4049000000000000;
}



/* Entry: 10b86de0c; end: 10b86e03b; +[SCSafeAreaInsetsModern _systemSafeAreaInsetsForScene:] */

undefined8
FUN_10b86de0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010be44e20();
  if ((uVar1 & 1) == 0) {
    uVar10 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    if (param_7 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c82f8;
      func_0x00010bef0f40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_7);
      puVar2 = param_7;
    }
    uVar9 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar3 = puVar2;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar7 = *plStack_140;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar7) {
            _objc_enumerationMutation(puVar3);
          }
          puVar6 = *(undefined **)(lStack_148 + (long)puVar8 * 8);
          puVar5 = puVar6;
          func_0x00010c075e80();
          if (((ulong)puVar5 & 1) != 0) {
            _objc_retain(puVar6);
            _objc_release(puVar3);
            if (puVar6 == (undefined *)0x0) goto LAB_10b86df58;
            goto LAB_10b86df74;
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_6,&uStack_150,auStack_108,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
LAB_10b86df58:
    puVar6 = PTR_PTR_1126c82f8;
    func_0x00010bef09e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      uVar10 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
      param_1 = uVar9;
    }
    else {
LAB_10b86df74:
      func_0x00010c148fc0(puVar6);
      func_0x00010bf164c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      param_1 = uVar9;
      func_0x00010c283c40(uVar9,param_2,param_3,param_4);
      _objc_release(param_5);
      _objc_release(puVar6);
      uVar10 = uVar9;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar10;
  }
  ___stack_chk_fail();
  return param_1;
}



/* Entry: 10b86e03c; end: 10b86e03f; +[SCSafeAreaInsetsModern _logEarlyAccessWithContext:] */

void FUN_10b86e03c(void)

{
  return;
}



/* Entry: 10b86e040; end: 10b86e04b; +[SCSafeAreaInsetsRouter safeAreaInsetsForInterfaceOrientation:] */

void FUN_10b86e040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c148ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e1880,PTR_s_safeAreaInsetsForInterfaceOrient_11262fe18);
  return;
}



/* Entry: 10b86e04c; end: 10b86e057; +[SCSafeAreaInsetsRouter safeFooterButtonInset] */

void FUN_10b86e04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1491d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_safeFooterButtonInset_11262fe90);
  return;
}



/* Entry: 10b86e058; end: 10b86e063; +[SCSafeAreaInsetsRouter safeHeaderButtonInset] */

void FUN_10b86e058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1491f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_safeHeaderButtonInset_11262fe98);
  return;
}



/* Entry: 10b86e064; end: 10b86e06f; +[SCSafeAreaInsetsRouter headerHeight] */

void FUN_10b86e064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdf550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_headerHeight_1125d5710);
  return;
}



/* Entry: 10b86e070; end: 10b86e07b; +[SCSafeAreaInsetsRouter ngsHeaderHeight] */

void FUN_10b86e070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0da250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126e1880,PTR_s_ngsHeaderHeight_1126142a8);
  return;
}



/* Entry: 10b86e07c; end: 10b86e2a7; +[SCSafeAreaWindowResolver activeScene] */

undefined * FUN_10b86e07c(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be44e20();
  if ((int)param_1 != 0) {
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar9;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    _objc_retain(param_1);
    puVar9 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar8 = *(undefined **)((long)puVar10 * 8);
        puVar5 = puVar8;
        func_0x00010bef0360();
        if (puVar5 == (undefined *)0x0) {
          param_2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          _objc_opt_class();
          puVar5 = puVar8;
          _objc_opt_isKindOfClass();
          if (((ulong)puVar5 & 1) != 0) goto LAB_10b86e254;
        }
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar10);
      puVar9 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    _objc_retain(param_1);
    puVar9 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar8 = *(undefined **)((long)puVar10 * 8);
        puVar5 = puVar8;
        func_0x00010bef0360();
        if (puVar5 == (undefined *)0x1) {
          param_2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          _objc_opt_class();
          puVar5 = puVar8;
          _objc_opt_isKindOfClass();
          if (((ulong)puVar5 & 1) != 0) goto LAB_10b86e254;
        }
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar10);
      puVar9 = param_1;
      func_0x00010bf52a60();
    }
    puVar8 = (undefined *)0x0;
    goto LAB_10b86e25c;
  }
  puVar8 = (undefined *)0x0;
  goto LAB_10b86e26c;
LAB_10b86e254:
  _objc_retain(puVar8);
LAB_10b86e25c:
  _objc_release(param_1);
  _objc_release();
LAB_10b86e26c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  func_0x00010be44e20();
  if ((int)puVar9 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    puVar5 = puVar9;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(ulong *)((long)puVar12 * 8);
        param_2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        _objc_opt_class();
        uVar6 = uVar11;
        _objc_opt_isKindOfClass();
        if ((uVar6 & 1) != 0) {
          _objc_retain(uVar11);
          puVar8 = param_1;
          func_0x00010becd8a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          if (puVar8 != (undefined *)0x0) goto LAB_10b86e3d0;
        }
        puVar12 = puVar12 + 1;
      } while (puVar10 != puVar12);
      puVar10 = puVar5;
      func_0x00010bf52a60();
    }
    puVar8 = (undefined *)0x0;
LAB_10b86e3d0:
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar10 = param_2;
  func_0x00010c074c20();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x00010bf01b40(param_2);
    bVar3 = false;
    bVar4 = false;
    bVar1 = NAN((double)CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))));
    if (!bVar1) {
      bVar3 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 0.0;
      bVar4 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
    }
    if (!bVar4 && bVar3 == bVar1) {
      puVar10 = param_2;
      func_0x00010c2a72c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)(ulong)(puVar10 == *(undefined **)(puVar9 + 0x20));
      _objc_release();
      goto LAB_10b86e488;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10b86e488:
  _objc_release(param_2);
  return puVar9;
}



/* Entry: 10b86e2a8; end: 10b86e427; +[SCSafeAreaWindowResolver topmostVisibleWindow] */

undefined * FUN_10b86e2a8(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  func_0x00010be44e20();
  if ((int)puVar9 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    puVar5 = puVar9;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(ulong *)((long)puVar12 * 8);
        param_2 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        _objc_opt_class();
        uVar7 = uVar11;
        _objc_opt_isKindOfClass();
        if ((uVar7 & 1) != 0) {
          _objc_retain(uVar11);
          puVar10 = param_1;
          func_0x00010becd8a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          if (puVar10 != (undefined *)0x0) goto LAB_10b86e3d0;
        }
        puVar12 = puVar12 + 1;
      } while (puVar6 != puVar12);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
    puVar10 = (undefined *)0x0;
LAB_10b86e3d0:
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar10 = param_2;
  func_0x00010c074c20();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x00010bf01b40(param_2);
    bVar3 = false;
    bVar4 = false;
    bVar1 = NAN((double)CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))));
    if (!bVar1) {
      bVar3 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 0.0;
      bVar4 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
    }
    if (!bVar4 && bVar3 == bVar1) {
      puVar10 = param_2;
      func_0x00010c2a72c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)(ulong)(puVar10 == *(undefined **)(puVar9 + 0x20));
      _objc_release();
      goto LAB_10b86e488;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10b86e488:
  _objc_release(param_2);
  return puVar9;
}



/* Entry: 10b86e428; end: 10b86e49f;  */

bool FUN_10b86e428(double param_1,long param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c074c20();
  if (((uVar2 & 1) != 0) || (func_0x00010bf01b40(param_3), param_1 <= 0.0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c2a72c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 == *(ulong *)(param_2 + 0x20);
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b86e4a0; end: 10b86e533;  */

ulong FUN_10b86e4a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2a72a0(param_3);
  dVar2 = param_1;
  func_0x00010c2a72a0(param_4);
  if (param_1 <= dVar2) {
    func_0x00010c2a72a0(param_3);
    dVar3 = dVar2;
    func_0x00010c2a72a0(param_4);
    uVar1 = (ulong)(dVar2 < dVar3);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b86e534; end: 10b86e667; -[SCUIActivityViewController initWithActivityItems:applicationActivities:] */

undefined1 * FUN_10b86e534(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithActivityItems_applicatio_1125d9da8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292ac0();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x1) {
      func_0x00010c1c8b80(puVar1);
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf529e0();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = puVar3;
        func_0x00010bfb1920(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = (undefined1 *)puVar1;
        func_0x00010c103ba0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2072a0();
        _objc_release(puVar4);
        puVar4 = (undefined1 *)puVar1;
        func_0x00010c103ba0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dac60();
        _objc_release(puVar4);
        _objc_release(puVar2);
      }
      _objc_release(puVar3);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b86e668; end: 10b86e713;  */

undefined8
FUN_10b86e668(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8)

{
  undefined8 uVar1;
  double in_stack_00000000;
  
  param_1 = param_1 + (param_5 - param_1) * in_stack_00000000;
  if (param_1 <= 2.2250738585072014e-308) {
    param_1 = 2.2250738585072014e-308;
  }
  uVar1 = NEON_fminnm(param_1,0x7fefffffffffffff);
  param_2 = param_2 + (param_6 - param_2) * in_stack_00000000;
  if (param_2 <= 2.2250738585072014e-308) {
    param_2 = 2.2250738585072014e-308;
  }
  NEON_fminnm(param_2,0x7fefffffffffffff);
  param_3 = param_3 + (param_7 - param_3) * in_stack_00000000;
  if (param_3 <= 2.2250738585072014e-308) {
    param_3 = 2.2250738585072014e-308;
  }
  NEON_fminnm(param_3,0x7fefffffffffffff);
  param_4 = param_4 + (param_8 - param_4) * in_stack_00000000;
  if (param_4 <= 2.2250738585072014e-308) {
    param_4 = 2.2250738585072014e-308;
  }
  NEON_fminnm(param_4,0x7fefffffffffffff);
  return uVar1;
}



/* Entry: 10b86e714; end: 10b86e7b7;  */

undefined1  [16]
FUN_10b86e714(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,double param_6,double param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  do {
    uVar2 = param_1;
    dVar3 = param_2;
    func_0x00010b86e6c0(param_1,param_2,param_3,param_4,param_5,param_6,(double)uVar1 / 100.0);
    if (dVar3 <= param_7) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x65);
  if (dVar3 <= param_7) {
    param_6 = dVar3;
    param_5 = uVar2;
  }
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_5;
  return auVar4;
}



/* Entry: 10b86e7b8; end: 10b86e87f;  */

double FUN_10b86e7b8(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1 * 0.5;
  if (param_2 * 0.5 <= param_1 * 0.5) {
    dVar1 = param_2 * 0.5;
  }
  if ((((0.0 < param_5) && (0.0 < param_6)) && (0.0 < param_1)) && (0.0 < param_2)) {
    dVar2 = param_3;
    if (param_3 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar3 = param_4;
    if (param_4 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar4 = dVar2 + dVar3 + SQRT(dVar3 * (dVar2 + dVar2));
    param_3 = (param_1 - param_5) - param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar3 = param_3 + dVar3 + SQRT(dVar3 * (param_3 + param_3));
    param_4 = (param_2 - param_6) - param_4;
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    dVar2 = dVar2 + param_4 + SQRT((dVar2 + dVar2) * param_4);
    param_3 = param_3 + param_4 + SQRT(param_4 * (param_3 + param_3));
    if (dVar4 <= dVar1) {
      dVar1 = dVar4;
    }
    if (dVar3 <= dVar1) {
      dVar1 = dVar3;
    }
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    if (param_3 <= dVar1) {
      dVar1 = param_3;
    }
  }
  return dVar1;
}



/* Entry: 10b86e880; end: 10b86e93f;  */

double FUN_10b86e880(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return (double)(float)(int)(param_1 * dVar2) / dVar2;
}



/* Entry: 10b86e940; end: 10b86e987; -[SIGScrollViewKeyValueObserver dealloc] */

void FUN_10b86e940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c1f7d00(param_1,param_2,0);
  puStack_28 = PTR_PTR_11270b6a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b86e988; end: 10b86ea13; -[SIGScrollViewKeyValueObserver observeValueForKeyPath:ofObject:change:context:] */

void FUN_10b86e988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c071ae0(uVar1,param_2,param_4);
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentOffset");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar1 != 0) {
      func_0x00010bde7f00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86ea14; end: 10b86ea47; -[SIGScrollViewKeyValueObserver _contentOffsetDidChange] */

void FUN_10b86ea14(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b86ea48; end: 10b86ea5f; -[SIGScrollViewKeyValueObserver delegate] */

void FUN_10b86ea48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b86ea60; end: 10b86ea67; -[SIGScrollViewKeyValueObserver scrollView] */

undefined8 FUN_10b86ea60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b86ea68; end: 10b86ea93; -[SIGScrollViewKeyValueObserver .cxx_destruct] */

void FUN_10b86ea68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b86ea94; end: 10b86ec37; -[SIGTargetActionDispatcher removeTarget:action:] */

void FUN_10b86ea94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 8);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar12 = *(undefined8 *)(lVar9 * 8);
      uVar5 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c071ae0();
      if ((int)uVar11 == 0) {
        _objc_release(uVar5);
      }
      else {
        func_0x00010beedca0();
        iVar2 = (int)uVar12;
        _sel_isEqual();
        _objc_release(uVar5);
        if (iVar2 != 0) {
          func_0x00010befa120(puVar3);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar6 = puVar3;
  func_0x00010c12d500(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_3 + 8);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar11 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010c071ae0();
      _objc_release(uVar11);
      if ((int)uVar5 != 0) {
        func_0x00010befa120(puVar3);
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar7 = puVar3;
  func_0x00010c12d500(*(undefined8 *)(param_3 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar6 + 8),PTR_s_makeObjectsPerformSelector_withO_11260b768,
             PTR_s_sendActionWithSender__112548830,puVar7);
  return;
}



/* Entry: 10b86ec38; end: 10b86edaf; -[SIGTargetActionDispatcher removeTarget:] */

void FUN_10b86ec38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      if ((int)uVar4 != 0) {
        func_0x00010befa120(puVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar5 = puVar2;
  func_0x00010c12d500(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_makeObjectsPerformSelector_withO_11260b768,
             PTR_s_sendActionWithSender__112548830,puVar5);
  return;
}



/* Entry: 10b86edb0; end: 10b86edc3; -[SIGTargetActionDispatcher sendActionsWithSender:] */

void FUN_10b86edb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_makeObjectsPerformSelector_withO_11260b768,
             PTR_s_sendActionWithSender__112548830,param_3);
  return;
}



/* Entry: 10b86edc4; end: 10b86edcf; -[SIGTargetActionDispatcher .cxx_destruct] */

void FUN_10b86edc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b86edd0; end: 10b86ee37; -[SIGTargetActionDispatcherEntry sendActionWithSender:] */

void FUN_10b86edd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  _objc_retain(param_3);
  cVar1 = *(char *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  if (cVar1 == '\x01') {
    func_0x00010c0f8f20();
  }
  else {
    func_0x00010c0f8ec0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b86ee38; end: 10b86ee4f; -[SIGTargetActionDispatcherEntry target] */

void FUN_10b86ee38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b86ee50; end: 10b86ee5b; -[SIGTargetActionDispatcherEntry setTarget:] */

void FUN_10b86ee50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10b86ee5c; end: 10b86ee63; -[SIGTargetActionDispatcherEntry action] */

undefined8 FUN_10b86ee5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b86ee64; end: 10b86ee6b; -[SIGTargetActionDispatcherEntry setAction:] */

void FUN_10b86ee64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b86ee6c; end: 10b86ee73; -[SIGTargetActionDispatcherEntry .cxx_destruct] */

void FUN_10b86ee6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10b86ee74; end: 10b86efdb; -[SIGTouchSwallowingGestureRecognizer _allowsTouchesForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b86ee74(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c070780();
  _objc_release(lVar5);
  if ((uVar4 & 1) == 0) {
    lVar5 = (long)_DAT_112795238;
    func_0x00010bf431c0(*(undefined8 *)(param_1 + lVar5));
    lVar3 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    uVar4 = 0;
    if (lVar1 != 0) {
      do {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          if ((*(long *)(lVar6 * 8) != 0) &&
             (uVar4 = param_3, func_0x00010c070780(), (uVar4 & 1) != 0)) {
            uVar4 = 1;
            goto LAB_10b86ef94;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      uVar4 = 0;
    }
LAB_10b86ef94:
    _objc_release(lVar3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return param_3;
  }
  return uVar4;
}



/* Entry: 10b86efdc; end: 10b86efe3; -[SIGTouchSwallowingGestureRecognizer touchesBegan:withEvent:] */

void FUN_10b86efdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,1);
  return;
}



/* Entry: 10b86efe4; end: 10b86efeb; -[SIGTouchSwallowingGestureRecognizer touchesEnded:withEvent:] */

void FUN_10b86efe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,3);
  return;
}



/* Entry: 10b86efec; end: 10b86efef; -[SIGTouchSwallowingGestureRecognizer reset] */

void FUN_10b86efec(void)

{
  return;
}



/* Entry: 10b86eff0; end: 10b86f03b; -[SIGTouchSwallowingGestureRecognizer canBePreventedByGestureRecognizer:] */

undefined8 FUN_10b86eff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca440(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b86f03c; end: 10b86f087; -[SIGTouchSwallowingGestureRecognizer shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10b86f03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca440(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b86f088; end: 10b86f0d3; -[SIGTouchSwallowingGestureRecognizer shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_10b86f088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca440(param_1,param_2,param_3);
  _objc_release(param_3);
  return (uint)param_1 ^ 1;
}



/* Entry: 10b86f0d4; end: 10b86f11f; -[SIGTouchSwallowingGestureRecognizer canPreventGestureRecognizer:] */

uint FUN_10b86f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca440(param_1,param_2,param_3);
  _objc_release(param_3);
  return (uint)param_1 ^ 1;
}



/* Entry: 10b86f120; end: 10b86f16b; -[SIGTouchSwallowingGestureRecognizer gestureRecognizer:shouldReceiveTouch:] */

uint FUN_10b86f120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca440(param_1,param_2,param_4);
  _objc_release(param_4);
  return (uint)param_1 ^ 1;
}



/* Entry: 10b86f16c; end: 10b86f17f; -[SIGTouchSwallowingGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795238,0);
  return;
}



/* Entry: 10b86f180; end: 10b86f1f3; -[SIGTransparentTouchView hitTest:withEvent:] */

void FUN_10b86f180(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270b6c0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b86f1f4; end: 10b86f4bf; -[SIGCollectionViewSectionHeader initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b86f1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_11270b6c8;
  puVar16 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar16,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined *)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b78f0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    func_0x00010c219b60();
    uVar17 = *(undefined8 *)((long)puVar16 + (long)_DAT_11279523c);
    *(undefined **)((long)puVar16 + (long)_DAT_11279523c) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar17);
    func_0x00010befbb60(puVar16);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_a8 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_a0 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010c1408a0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_98 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010bf1ff80(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar16 = *(undefined8 **)(puVar3 + _DAT_11279523c);
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar16,PTR_s_intrinsicContentSize_1125f8080);
  return puVar16;
}



/* Entry: 10b86f4c0; end: 10b86f4cf; -[SIGCollectionViewSectionHeader intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86f4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279523c),PTR_s_intrinsicContentSize_1125f8080);
  return;
}


