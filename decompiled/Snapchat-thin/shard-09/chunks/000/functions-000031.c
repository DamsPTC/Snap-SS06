/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106858804; end: 1068588b3; -[SCSpotlightViewController pullToRefreshControllerCanBeginPulling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106858804(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar3 = lVar1, func_0x00010c07ab40(), (int)lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (((lVar2 == 0) && ((*(byte *)(param_1 + _DAT_112751fcc) & 1) == 0)) &&
       (*(char *)(param_1 + _DAT_112751fa4) == '\x01')) {
      lVar3 = lVar1;
      func_0x00010c06c780(lVar1);
    }
    else {
      lVar3 = 0;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1068588b4; end: 1068588bf; -[SCSpotlightViewController pullToRefreshControllerDidChangeDraggingState:] */

void FUN_1068588b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setNavigationHidden_animated_tri_112650840,param_3,0,4);
  return;
}



/* Entry: 1068588c0; end: 106858917; -[SCSpotlightViewController pullToRefreshControllerDidRequestRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068588c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c07ab40(), (int)lVar2 != 0)) {
    *(undefined8 *)(param_1 + _DAT_112751f30) = 0x17;
    func_0x00010c1255c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106858918; end: 106858a1b; -[SCSpotlightViewController _resetLatencyMetricsAndRecordFirstFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858918(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + _DAT_112751fd0) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751fd4);
  *(undefined8 *)(param_1 + _DAT_112751fd4) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751fd8);
  *(undefined **)(param_1 + _DAT_112751fd8) = puVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e80);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1eb480(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106858a1c; end: 106858a47;  */

void FUN_106858a1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106858a48; end: 106858bcf; -[SCSpotlightViewController _switchToSubfeedIfOperaIsPresented:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858a48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112751fa4) == '\x01') {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x21 = *(long *)(param_1 + _DAT_112751f74);
    _objc_retain(unaff_x21);
    lVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
          }
          puVar6 = *(undefined8 **)(lStack_128 + lVar8 * 8);
          puVar2 = (undefined1 *)puVar6;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bfa3d80();
          puVar4 = param_3;
          func_0x00010bfa3d80();
          _objc_release(puVar2);
          if (puVar3 == puVar4) {
            func_0x00010bec95a0(param_1);
            unaff_x22 = lVar1;
            goto LAB_106858b84;
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = unaff_x21;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x22 = lVar1;
      } while (lVar1 != 0);
    }
LAB_106858b84:
    _objc_release(unaff_x21);
    puVar2 = (undefined1 *)puVar6;
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_106858bd0;
    uVar5 = *(undefined8 *)(puVar3 + _DAT_112751e54);
    lStack_160 = unaff_x22;
    lStack_158 = unaff_x21;
    lStack_150 = param_1;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    func_0x00010c2a6760(uVar5);
    puStack_168 = PTR_PTR_1126f3838;
    puStack_170 = puVar3;
    _objc_msgSendSuper2(&puStack_170,PTR_s_willMoveToParentViewController__1126873f8,puVar2);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 106858bd0; end: 106858c4b; -[SCSpotlightViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e54);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126f3838;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106858c4c; end: 106858cc7; -[SCSpotlightViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e54);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126f3838;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106858cc8; end: 106858e17; -[SCSpotlightViewController _moveBackgroundViewOverOperaWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c24c2c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar4 != 0) {
    lVar2 = param_1;
    func_0x00010c247660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_1;
      func_0x00010bdf6fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 == 0) goto LAB_106858e00;
    }
    lVar5 = (long)_DAT_112751e80;
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar5),param_2,0x12);
    lVar3 = *(long *)(param_1 + lVar5);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == lVar2) {
      func_0x00010bf21300(lVar2);
    }
    else {
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
      func_0x00010befbb60(lVar2,param_2,*(undefined8 *)(param_1 + lVar5));
    }
    func_0x00010bf20c00(lVar2);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c238b00(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
    _objc_release(lVar2);
  }
LAB_106858e00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106858e18; end: 106858ef3; -[SCSpotlightViewController _restoreBackgroundViewFromOperaWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858e18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112751e80;
  func_0x00010bfe2480(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar3 = param_1;
  if (lVar1 == lVar2) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0();
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be48db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutBackgroundView_11256fd08);
  return;
}



/* Entry: 106858ef4; end: 106859107; -[SCSpotlightViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106858ef4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + (long)_DAT_112751e54),param_2,param_1,param_3);
  puVar1 = &UNK_10f39c817;
  func_0x0001000ba800(&UNK_10f39c817);
  puStack_48 = PTR_PTR_1126f3838;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillAppear__1126853f0,param_3);
  uVar2 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07ab40();
  if ((uVar3 & 1) == 0) {
    func_0x00010be930e0(param_1);
    iVar5 = (int)*(undefined8 *)(param_1 + (long)_DAT_112751e5c);
    puVar4 = PTR_PTR_1126c0e00;
    func_0x00010c24c2c0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar4);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + (long)_DAT_112751fe0) = 1;
      func_0x00010c238b00(*(undefined8 *)(param_1 + (long)_DAT_112751e80));
    }
  }
  lVar7 = (long)_DAT_112751fdc;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    iVar5 = (int)*(undefined8 *)(param_1 + (long)_DAT_112751f4c);
    func_0x00010bf49a40();
    if (iVar5 != 0) {
      func_0x00010be5e1a0(param_1);
    }
    if ((*(byte *)(param_1 + (long)_DAT_112751fe4) & 1) == 0) {
      *(undefined1 *)(param_1 + (long)_DAT_112751fe4) = 1;
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112751e5c);
      puVar4 = PTR_PTR_1126c1180;
      func_0x00010c24b540(PTR_PTR_1126c1180);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b84c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d480();
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    func_0x00010bea0560(param_1);
    func_0x00010c24c8e0(*(undefined8 *)(param_1 + (long)_DAT_112751eb4));
  }
  *(undefined1 *)(param_1 + lVar7) = 1;
  *(undefined1 *)(param_1 + (long)_DAT_112751fe8) = 0;
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 106859108; end: 10685931b; -[SCSpotlightViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112751e54),param_2,param_1,param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c18a100(param_1);
  _objc_release(puVar1);
  lVar4 = (long)_DAT_112751e84;
  lVar3 = *(long *)(param_1 + lVar4);
  if ((lVar3 == 0x62) || (lVar3 == 0x49)) {
    func_0x00010c208740(*(undefined8 *)(param_1 + _DAT_112751f4c));
  }
  puVar1 = &UNK_10f39c86a;
  func_0x0001000ba800(&UNK_10f39c86a);
  puStack_38 = PTR_PTR_1126f3838;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x00010bde5620(param_1);
  if ((*(byte *)(param_1 + _DAT_112751fa4) & 1) == 0) {
    lVar3 = param_1;
    func_0x00010beb3a40();
    if ((int)lVar3 == 0) {
      func_0x00010be7cf80(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10685931c;
      puStack_60 = &UNK_11084ceb8;
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = (undefined1)param_3;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112751e5c);
    func_0x000108f4e0a0(uVar2,*(undefined8 *)(param_1 + lVar4));
    if ((int)uVar2 != 0) {
      lVar3 = param_1;
      func_0x00010beb5480();
      if ((int)lVar3 == 0) {
        lVar3 = param_1;
        func_0x00010bdf6ee0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13d560();
        _objc_release(lVar3);
      }
      else {
        func_0x00010be8ee40(param_1);
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751f28);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar2);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10685931c; end: 106859367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685931c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + _DAT_112751fa4) & 1) == 0)) {
    func_0x00010be7cf80(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106859368; end: 106859657; -[SCSpotlightViewController _switchToSubfeedBundle:notification:deepLink:compositeStoryId:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859368(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,int param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_4 == 0) && (lVar3 = param_6, func_0x00010c08fa60(), lVar3 == 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112751fec);
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfa3d80();
    lVar11 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010bfa3d80();
    _objc_release(lVar11);
    _objc_release(lVar1);
    if (lVar3 == lVar2) goto LAB_10685961c;
  }
  if (param_7 == 0) {
    lVar3 = (long)_DAT_112751fec;
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010be70f40(param_1,param_2,*(long *)(param_1 + lVar3),0);
    }
    lVar11 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72aa0(param_1,param_2,lVar11,1);
    _objc_release(lVar11);
    func_0x00010be7d120(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar8);
  }
  else {
    lVar11 = (long)_DAT_112751f74;
    lVar3 = *(long *)(param_1 + lVar11);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = (long)_DAT_112751fec;
      uVar10 = 0x7fffffffffffffff;
      uVar13 = 0x7fffffffffffffff;
    }
    else {
      uVar14 = 0;
      uVar9 = 0x7fffffffffffffff;
      uVar12 = 0x7fffffffffffffff;
      do {
        lVar4 = *(long *)(param_1 + lVar11);
        func_0x00010c0dfd40(lVar4,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010bfa3d80();
        lVar3 = (long)_DAT_112751fec;
        lVar5 = *(long *)(param_1 + lVar3);
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfa3d80();
        _objc_release(lVar5);
        _objc_release(lVar2);
        uVar10 = uVar14;
        if (lVar1 != lVar6) {
          uVar10 = uVar9;
        }
        lVar2 = lVar4;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010bfa3d80();
        lVar6 = param_3;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010bfa3d80();
        _objc_release(lVar6);
        _objc_release(lVar2);
        uVar13 = uVar14;
        if (lVar1 != lVar5) {
          uVar13 = uVar12;
        }
        _objc_release(lVar4);
        uVar14 = uVar14 + 1;
        uVar7 = *(ulong *)(param_1 + lVar11);
        func_0x00010bf529e0();
        uVar9 = uVar10;
        uVar12 = uVar13;
      } while (uVar14 < uVar7);
    }
    uVar8 = 1;
    if ((uVar13 < uVar10 && uVar13 != 0x7fffffffffffffff) && uVar10 != 0x7fffffffffffffff) {
      uVar8 = 2;
    }
    func_0x00010bec1e20(param_1,param_2,*(undefined8 *)(param_1 + lVar3),param_3,uVar8,1);
  }
LAB_10685961c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106859658; end: 1068597fb; -[SCSpotlightViewController _switchToSubfeed:notification:deepLink:compositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751eb4);
  uVar3 = param_3;
  func_0x00010bfa3d80(param_3);
  func_0x00010c24c900(uVar4,param_2,uVar3);
  lVar2 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfa3d80(param_3);
  lVar5 = param_1;
  func_0x00010be41840(param_1,param_2,uVar3);
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_112751ff0;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c2336c0();
    if (iVar1 != 0) {
      func_0x00010be05340(param_1);
      func_0x00010c237320(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c0f5e20(lVar2,param_2,0,0);
      goto LAB_1068597c0;
    }
  }
  lVar5 = (long)_DAT_112751f6c;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar3);
  lVar5 = lVar2;
  func_0x00010c07ab40();
  if ((int)lVar5 == 0) {
    func_0x00010be7d5e0(param_1,param_2,0,lVar2,param_1,param_4,param_5,param_6);
  }
  else {
    uVar3 = param_3;
    func_0x00010c1561c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265860(lVar2,param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c13d560(lVar2,param_2,0);
  }
  if (*(long *)(param_1 + _DAT_112751ff4) != 0) {
    func_0x00010be05340(param_1);
  }
LAB_1068597c0:
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068597fc; end: 1068598a7; -[SCSpotlightViewController attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068597fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf4bb00(&PTR____CFConstantStringClassReference_110e61fd8,param_3,
                      &PTR____CFConstantStringClassReference_110e622d8);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c0b1400(*(undefined8 *)(param_2 + _DAT_112751ee8));
  func_0x00010bdc6f80(param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112751ff4);
  *(undefined8 *)(param_2 + _DAT_112751ff4) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  FUN_1068598a8(param_1,&PTR____CFConstantStringClassReference_110e61fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068598a8; end: 10685991b;  */

void FUN_1068598a8(double param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4bb00(param_2,param_3,&PTR____CFConstantStringClassReference_110e622d8);
  if (0.0 < param_1) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110e4b998);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10685991c; end: 10685995b; -[SCSpotlightViewController _dissmissEmptyStateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685991c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751ff0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07df20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_dismissEmptyState_1125be7b0);
    return;
  }
  return;
}



/* Entry: 10685995c; end: 106859cfb; -[SCSpotlightViewController _addFullscreenChildViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685995c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar21 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar21);
  func_0x00010bef7700(param_2,param_3,param_4);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_3,uVar21);
  _objc_release(uVar21);
  _objc_release(lVar1);
  puVar20 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x00010bf493a0(lVar22,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  lStack_90 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493a0(lVar5,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  lStack_88 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010bf493a0(lVar10,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  lStack_80 = lVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010bf493a0(lVar15,param_3,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar20,param_3,puVar19);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar21);
  _objc_release(lVar22);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf77e80(param_4);
  _objc_release(param_4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  lVar22 = (long)_DAT_112751ff4;
  func_0x00010bf4bb00(&PTR____CFConstantStringClassReference_110e61ff8,param_3,
                      &PTR____CFConstantStringClassReference_110e622d8);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + lVar22) == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(param_2 + _DAT_112751ee8);
    lVar3 = param_2;
    func_0x00010bdf6a00(param_2);
    func_0x00010c0df780(puVar20,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac5a0(uVar21,param_3,puVar20);
    _objc_release(puVar20);
    uVar21 = *(undefined8 *)(param_2 + lVar22);
  }
  func_0x00010bdfb4a0(param_2,param_3,uVar21);
  uVar21 = *(undefined8 *)(param_2 + lVar22);
  *(undefined8 *)(param_2 + lVar22) = 0;
  _objc_release(uVar21);
  FUN_1068598a8(param_1,&PTR____CFConstantStringClassReference_110e61ff8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106859cfc; end: 106859dfb; -[SCSpotlightViewController detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859cfc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112751ff4;
  func_0x00010bf4bb00(&PTR____CFConstantStringClassReference_110e61ff8,param_3,
                      &PTR____CFConstantStringClassReference_110e622d8);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + lVar4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112751ee8);
    lVar1 = param_2;
    func_0x00010bdf6a00(param_2);
    func_0x00010c0df780(puVar2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac5a0(uVar3,param_3,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
  }
  func_0x00010bdfb4a0(param_2,param_3,uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined8 *)(param_2 + lVar4) = 0;
  _objc_release(uVar3);
  FUN_1068598a8(param_1,&PTR____CFConstantStringClassReference_110e61ff8);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106859dfc; end: 106859ecb; -[SCSpotlightViewController _detachChildViewController:] */

void FUN_106859dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106859e80;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106859ecc; end: 106859f33; -[SCSpotlightViewController _currentFeedIdentifier] */

/* WARNING: Possible PIC construction at 0x000106859f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106859f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859ecc(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) != 0) {
    func_0x00010c0cc0c0(*(undefined8 *)(param_1 + _DAT_112751fec));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106859f34; end: 106859f3f; -[SCSpotlightViewController subfeedSwitcher:handleUserTriggeredAction:switchedToFeedType:] */

void FUN_106859f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSubfeedActionWithActionType__112573ee0,param_4,param_5);
  return;
}



/* Entry: 106859f40; end: 106859fbf; -[SCSpotlightViewController subfeedSwitcher:didClearBadgeForFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859f40(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c23c820(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a6450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112751ee8),
               PTR_s_logFeedSwitcherEnterSubsWithBadg_112607320);
    return;
  }
  return;
}



/* Entry: 106859fc0; end: 10685a03f; -[SCSpotlightViewController subfeedSwitcher:didShowBadgeForFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106859fc0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c23c820(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112751ee8),
               PTR_s_logFeedSwitcherSubsBadgeShown_112607328);
    return;
  }
  return;
}



/* Entry: 10685a040; end: 10685a5d3; -[SCSpotlightViewController _presentOrResumeSubfeed:notification:deepLink:compositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685a040(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0ff740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf4b0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd0320(param_1,param_2,lVar1);
  lVar3 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010bfa3d80();
  _objc_release(lVar3);
  if (lVar12 == 3) {
    lVar12 = (long)_DAT_112751f94;
    lVar3 = *(long *)(param_1 + lVar12);
    if (lVar3 != 0) {
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        puVar6 = PTR_PTR_1126ce7e0;
        _objc_alloc(PTR_PTR_1126ce7e0);
        lVar3 = lVar1;
        func_0x00010c269d40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x000106867868();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056c00(puVar6,param_2,lVar3,3,3,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar3);
        func_0x00010c18b5e0(puVar6,param_2,param_1);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar12),param_2,puVar6);
        _objc_release(puVar6);
      }
    }
    lVar3 = (long)_DAT_112751ff8;
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar6 = PTR_PTR_1126ce7e8;
      _objc_alloc();
      lVar4 = param_3;
      func_0x00010bf4b0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1 + _DAT_112751f50;
      _objc_loadWeakRetained();
      lVar7 = lVar12;
      func_0x00010c0f36c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010bf4b0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0340a0(puVar6,param_2,lVar5,lVar7,lVar10,
                          *(undefined8 *)(param_1 + _DAT_112751e5c));
      uVar11 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar6;
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar12);
      _objc_release(lVar5);
      _objc_release(lVar4);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
    }
    else {
      func_0x00010c138c60();
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010bf8edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83820();
    _objc_release(lVar12);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c07ab40();
    if ((int)lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010bf8edc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar12 = param_3;
        func_0x00010bf8edc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c2336c0();
        _objc_release(lVar4);
        _objc_release(lVar12);
        _objc_release(lVar3);
        if ((int)lVar5 != 0) {
          lVar3 = param_3;
          func_0x00010bf8edc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c237320();
          _objc_release(lVar12);
          _objc_release(lVar3);
          lVar3 = (long)_DAT_112751ffc;
          if (*(long *)(param_1 + lVar3) == 0) {
            puVar6 = PTR_PTR_1126ce7e8;
            _objc_alloc();
            lVar4 = param_3;
            func_0x00010bf4b0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = param_1 + _DAT_112751f50;
            _objc_loadWeakRetained();
            lVar7 = lVar12;
            func_0x00010c0f36c0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = param_3;
            func_0x00010bf4b0c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0340a0(puVar6,param_2,lVar5,lVar7,lVar10,
                                *(undefined8 *)(param_1 + _DAT_112751e5c));
            uVar11 = *(undefined8 *)(param_1 + lVar3);
            *(undefined **)(param_1 + lVar3) = puVar6;
            _objc_release(uVar11);
            _objc_release(lVar10);
            _objc_release(lVar9);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar12);
            _objc_release(lVar5);
            _objc_release(lVar4);
            func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
          }
          else {
            func_0x00010c138c60();
          }
          goto LAB_10685a588;
        }
      }
      lVar3 = lVar1;
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7d5e0(param_1,param_2,0,lVar2,lVar3,param_4,param_5,param_6);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c13d5e0(lVar2,param_2,1);
      func_0x00010c138880(lVar2);
    }
  }
LAB_10685a588:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685a5d4; end: 10685a69f; -[SCSpotlightViewController _pauseSubfeed:shouldDetachUI:] */

void FUN_10685a5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ff740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f880();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c0ff740(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_4 != 0) {
      uVar1 = param_3;
      func_0x00010bf4b0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfb4e0(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685a6a0; end: 10685a747; -[SCSpotlightViewController _attachContainerIfNecessary:] */

void FUN_10685a6a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bdc6f80(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10685a748; end: 10685a7af; -[SCSpotlightViewController _detachContainer:] */

void FUN_10685a748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06f880();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfb4a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685a7b0; end: 10685ab33; -[SCSpotlightViewController _createBundleWithFeedIdentifier:displayName:pageType:sectionKeys:panPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685a7b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  lVar5 = *(long *)(param_1 + _DAT_112751e88);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067fc0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  if (lVar4 == lVar6) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    bVar1 = lVar4 == 3;
  }
  puVar7 = PTR_PTR_1126ce7a0;
  _objc_alloc(PTR_PTR_1126ce7a0);
  func_0x00010c012600();
  _objc_initWeak(auStack_80,param_1);
  puVar8 = PTR_PTR_1126ae720;
  uStack_88 = param_3;
  _objc_retain(param_7);
  _objc_copyWeak(auStack_90,auStack_80);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  if (bVar1) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112751eb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112751f70);
    _objc_retain(uVar11);
    puVar12 = PTR_PTR_1126ae720;
    _objc_retain(uVar9);
    _objc_retain(uVar11);
    _objc_retain(param_1);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010bf11fe0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_1);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(param_1);
    _objc_release(uVar9);
  }
  puVar10 = PTR_PTR_1126ce7f8;
  _objc_alloc(PTR_PTR_1126ce7f8);
  func_0x00010c02bac0();
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10685ab34; end: 10685abc3;  */

void FUN_10685ab34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ce7f0;
  _objc_alloc(PTR_PTR_1126ce7f0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0125c0(puVar1,param_2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10685abc4; end: 10685ac23;  */

void FUN_10685abc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf57a80(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  func_0x00010c1f9480(uVar1,param_2,*(undefined8 *)(param_1 + 0x38),0,0x7fffffffffffffff);
  func_0x00010c16ac60(uVar1,param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685ac24; end: 10685ac93; -[SCSpotlightViewController _currentPresentingVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ac24(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) == 0) {
    _objc_retain(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112751fec);
    func_0x00010bf4b0c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10685ac94; end: 10685af37; -[SCSpotlightViewController _presentOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ac94(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be40060();
    _objc_release();
    iVar1 = (int)lVar5;
    if ((int)lVar2 != 0) {
      lVar5 = (long)_DAT_112752000;
      if (*(long *)(param_1 + lVar5) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar3;
        _objc_release(uVar4);
        _objc_initWeak(auStack_48,param_1);
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_10685af38;
        puStack_68 = &UNK_1108488f8;
        _objc_copyWeak(auStack_58,auStack_48);
        _objc_retain(puVar3);
        puStack_60 = puVar3;
        uStack_50 = param_3;
        func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_80);
        _objc_release(puStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
        _objc_release(puVar3);
      }
      return;
    }
  }
  else {
    _objc_release();
    _objc_release();
    iVar1 = (int)lVar5;
  }
  func_0x0001068661a4();
  if ((iVar1 != 0) && (lVar5 = param_1, func_0x00010be42480(), (int)lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__armForegroundOperaPresentationR_112551660)
    ;
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_112752004);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112752008);
  _objc_retain(uVar7);
  func_0x00010be01ec0(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112752000);
  *(undefined8 *)(param_1 + _DAT_112752000) = 0;
  _objc_release(uVar4);
  func_0x00010be7d5c0(param_1);
  lVar5 = (long)_DAT_11275200c;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010be47f60(param_1);
    *(undefined1 *)(param_1 + lVar5) = 0;
  }
  func_0x00010bde4b60(param_1);
  puVar3 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751f88);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8480;
  func_0x00010bf75ec0(PTR_PTR_1126b8480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + _DAT_112751fa4) = 1;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10685af38; end: 10685af9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685af38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112752000);
    func_0x00010c071ce0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if (((int)uVar2 != 0) && ((*(byte *)(lVar1 + _DAT_112751fa4) & 1) == 0)) {
      func_0x00010be7cf80(lVar1,param_2,*(undefined1 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10685af9c; end: 10685b0b7; -[SCSpotlightViewController _armForegroundOperaPresentationRedrive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685af9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_112752010;
  if (*(long *)(param_1 + lVar4) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar2 = puVar1;
    func_0x00010befa280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10685b0b8; end: 10685b14b;  */

void FUN_10685b0b8(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10685b14c;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10685b14c; end: 10685b17f;  */

void FUN_10685b14c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be88020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10685b180; end: 10685b1f3; -[SCSpotlightViewController _disarmForegroundOperaPresentationRedrive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b180(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112752010;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10685b1f4; end: 10685b247; -[SCSpotlightViewController _redriveDeferredOperaPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b1f4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112752010) != 0) {
    func_0x00010be01ec0();
    if ((*(byte *)(param_1 + _DAT_112751fa4) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentOpera__11257cd80,0);
      return;
    }
  }
  return;
}



/* Entry: 10685b248; end: 10685b2e7; -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithClientIds:mediaTypes:userId:displayName:businessProfileId:spotlightDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001084821b4(param_5,param_6,param_7,param_3,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112752014;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_5;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf454e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d560(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10685b2e8; end: 10685b6a3; -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingSpotlightWidgetWithClientIds:thumbnail:mediaTypes:userId:displayName:businessProfileId:spotlightDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b2e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar9 = (long)_DAT_112751f4c;
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  lVar7 = param_1;
  func_0x00010c2a4d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229a80(uVar12);
  _objc_release(lVar7);
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  lVar7 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08be40(uVar12);
  _objc_release(lVar7);
  uVar11 = (uint)*(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c087d60(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  lVar7 = param_3;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    lVar7 = param_5;
    func_0x00010bf529e0();
    lVar10 = param_3;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if ((lVar7 == lVar10 & uVar11) == 1) {
      func_0x00010bf529e0(param_5);
      func_0x00010bf0a0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      lVar7 = param_5;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(param_5);
          }
          func_0x00010c067fc0();
          func_0x00010befa120(puVar1);
          lVar6 = lVar6 + 1;
        } while (lVar7 != lVar6);
        lVar7 = param_5;
        func_0x00010bf52a60();
      }
      _objc_release(param_5);
      puVar2 = puVar1;
      func_0x00010bf51e00(puVar1);
      uVar12 = param_6;
      func_0x0001084821b4(param_6,param_7,param_8,param_3,puVar2,param_9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar12;
      func_0x00010848274c(uVar12,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_112752014;
      uVar4 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar8;
      _objc_release(uVar4);
      _objc_release(lVar7);
      _objc_release(uVar12);
      _objc_release(puVar2);
      if (*(long *)(param_1 + lVar10) != 0) {
        uVar12 = *(undefined8 *)(param_1 + lVar9);
        lVar7 = param_3;
        func_0x00010bfb1920(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c087d80(uVar12);
        _objc_release(lVar7);
        uVar8 = *(undefined8 *)(param_1 + lVar10);
        lVar7 = (long)_DAT_112752018;
        _objc_retain(uVar8);
        uVar12 = *(undefined8 *)(param_1 + lVar7);
        *(undefined8 *)(param_1 + lVar7) = uVar8;
        _objc_release(uVar12);
      }
      _objc_release(puVar1);
    }
  }
  lVar7 = param_1;
  func_0x00010c247980();
  if (lVar7 != 0x5c) {
    func_0x00010c10d560(param_1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  iVar5 = (int)*(undefined8 *)(param_3 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c087d60(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  if ((iVar5 != 0) && (lVar7 = *(long *)(param_3 + _DAT_112752018), lVar7 != 0)) {
    lVar3 = (long)_DAT_112752014;
    _objc_retain(lVar7);
    uVar12 = *(undefined8 *)(param_3 + lVar3);
    *(long *)(param_3 + lVar3) = lVar7;
    _objc_release(uVar12);
    *(undefined1 *)(param_3 + _DAT_11275201c) = 1;
  }
  return;
}



/* Entry: 10685b6a4; end: 10685b743; -[SCSpotlightViewController _maybeReinjectRetainedLocalPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b6a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c087d60(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112752018);
    if (lVar3 != 0) {
      lVar4 = (long)_DAT_112752014;
      _objc_retain(lVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar3;
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + _DAT_11275201c) = 1;
    }
  }
  return;
}



/* Entry: 10685b744; end: 10685b89b; -[SCSpotlightViewController presentOperaAgainIfAlreadyPresentingWithFirstCompositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b744(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be74de0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c07ab40();
  if ((int)lVar5 != 0) {
    uVar2 = *(ulong *)(param_2 + _DAT_112751e5c);
    func_0x000108f4e0a0(uVar2,*(undefined8 *)(param_2 + _DAT_112751e84));
    if ((uVar2 & 1) == 0) {
      func_0x00010bf2e880(lVar1);
      *(undefined1 *)(param_2 + _DAT_112751f90) = 1;
      lVar5 = (long)_DAT_112752020;
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      *(long *)(param_2 + lVar5) = param_4;
      _objc_release(uVar3);
      goto LAB_10685b87c;
    }
  }
  lVar5 = param_4;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    lVar5 = (long)_DAT_112752020;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(long *)(param_2 + lVar5) = param_4;
    _objc_release(uVar3);
  }
  lVar5 = (long)_DAT_112752004;
  if ((*(long *)(param_2 + lVar5) != 0) && (lVar4 = param_2, func_0x00010be424a0(), (int)lVar4 != 0)
     ) {
    uVar6 = *(undefined8 *)(param_2 + lVar5);
    lVar5 = (long)_DAT_112752024;
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined8 *)(param_2 + lVar5) = uVar6;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + _DAT_112752028) = param_1;
    uVar3 = *(undefined8 *)(param_2 + _DAT_112751e5c);
    func_0x000108f4e0a0(uVar3,*(undefined8 *)(param_2 + _DAT_112751e84));
    if ((int)uVar3 != 0) {
      func_0x00010be8ee40(param_2);
    }
  }
LAB_10685b87c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10685b89c; end: 10685ba2f; -[SCSpotlightViewController configureDeeplinkSubfeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685b89c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bec9520(param_1);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112751f68);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10685b9c8;
    puStack_40 = &UNK_1109446c8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfb2040(lVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = (long)_DAT_112751f6c;
      _objc_retain(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar2;
      _objc_release(uVar1);
      func_0x00010be72aa0(param_1,param_2,lVar2,1);
      func_0x00010bdf6ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1561c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c265860(param_1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685ba30; end: 10685ba87; -[SCSpotlightViewController _isNotifResumeRaceFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10685ba30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c2470;
  func_0x00010bf91d60(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10685ba88; end: 10685badf; -[SCSpotlightViewController _isNotifColdPresentLatchFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10685ba88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c2470;
  func_0x00010bf91d00(PTR_PTR_1126c2470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10685bae0; end: 10685bb73; -[SCSpotlightViewController _playbackManagerForOperaRepresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bae0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) == 0) {
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112751f74);
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ff740();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10685bb74; end: 10685bbdf; -[SCSpotlightViewController _freshPendingNotificationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bb74(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112752024;
  if (*(long *)(param_2 + lVar2) != 0) {
    _CACurrentMediaTime();
    if (param_1 - *(double *)(param_2 + _DAT_112752028) <= 30.0) {
      uVar1 = *(undefined8 *)(param_2 + lVar2);
      _objc_retain(uVar1);
      goto LAB_10685bbd0;
    }
    func_0x00010bde0b00(param_2);
  }
  uVar1 = 0;
LAB_10685bbd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685bbe0; end: 10685bc1b; -[SCSpotlightViewController _clearPendingNotificationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bbe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752024);
  *(undefined8 *)(param_1 + _DAT_112752024) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112752028) = 0;
  return;
}



/* Entry: 10685bc1c; end: 10685bc67; -[SCSpotlightViewController _shouldReplayPendingNotificationContext] */

bool FUN_10685bc1c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be424a0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010be191c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 10685bc68; end: 10685bd0b; -[SCSpotlightViewController _replayPendingNotificationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bc68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112752004;
  if (*(long *)(param_1 + lVar3) == 0) {
    lVar1 = param_1;
    func_0x00010be191c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
    _objc_release(uVar2);
  }
  func_0x00010bde0b00(param_1);
  *(undefined1 *)(param_1 + _DAT_112751f90) = 1;
  lVar3 = param_1;
  func_0x00010be74de0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c07ab40();
  if ((int)lVar1 == 0) {
    func_0x00010be7d340(param_1);
  }
  else {
    func_0x00010bf2e880(lVar3,param_2,0,0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10685bd0c; end: 10685bd77; -[SCSpotlightViewController _presentPendingPlaybackOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bd0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112751f90) = 0;
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112751f80) != -1) {
    func_0x00010c19b100(lVar1);
  }
  func_0x00010be7d5c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10685bd78; end: 10685bf6b; -[SCSpotlightViewController _presentPlaybackOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bd78(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010beb5480();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010be74de0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c07ab40();
    _objc_release(lVar2);
    if ((int)lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__replayPendingNotificationContex_112581530);
      return;
    }
  }
  lVar2 = *(long *)(param_1 + _DAT_112752004);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be191c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112752008);
  _objc_retain(uVar3);
  lVar6 = (long)_DAT_112752020;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar1);
  func_0x00010be2da20(param_1);
  if (*(char *)(param_1 + _DAT_112751ea8) == '\x01') {
    if (*(char *)(param_1 + _DAT_112751eac) != '\x01') {
      func_0x00010bec9580(param_1);
      goto LAB_10685bf40;
    }
    lVar5 = (long)_DAT_112751f74;
    lVar6 = *(long *)(param_1 + lVar5);
    func_0x00010bf529e0();
    if (lVar6 == 0) goto LAB_10685bf40;
    lVar6 = *(long *)(param_1 + lVar5);
    func_0x00010bfb1920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec95a0(param_1);
  }
  else {
    lVar6 = param_1;
    func_0x00010bdf6ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdf6fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7d5e0(param_1);
    _objc_release(lVar5);
  }
  _objc_release(lVar6);
LAB_10685bf40:
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10685bf6c; end: 10685bfcf; -[SCSpotlightViewController _handlePageOpenIfNecessaryWhenEnteredAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bf6c(ulong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  func_0x0001068661a4();
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 5;
  }
  uVar2 = 2;
  if (param_3 == 0) {
    uVar2 = 7;
  }
  uVar3 = 5;
  if (*(long *)(param_1 + (long)_DAT_112751e84) != 0x5f) {
    uVar3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handlePageOpen_enterAction__112569020,uVar2,uVar3);
  return;
}



/* Entry: 10685bfd0; end: 10685c257; -[SCSpotlightViewController _presentPlaybackOpera:playbackManager:presentingViewController:notification:deepLink:compositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685bfd0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_8;
  _objc_retain();
  func_0x0001068661a4();
  if ((uVar3 & 1) != 0) goto LAB_10685c214;
  lVar8 = (long)_DAT_112751ee8;
  ppuVar1 = &PTR_PTR_1109448c8;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1109448d0;
  }
  func_0x00010c0b08a0(*(undefined8 *)(param_1 + lVar8),param_2,*ppuVar1);
  lVar6 = param_1;
  func_0x00010bdf6a00(param_1);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a63c0(uVar7,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (0 < *(long *)(param_1 + _DAT_112751ea0)) {
    puVar5 = *(undefined **)(param_1 + _DAT_112751f48);
    func_0x00010c2581c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c24b7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar7 = param_4;
  func_0x00010c07ab40();
  if ((int)uVar7 == 0) {
    func_0x00010bea7d00(param_1,param_2,0,0);
    lVar8 = param_1;
    func_0x00010c247660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      lVar8 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) goto LAB_10685c160;
    }
    else {
LAB_10685c160:
      lVar6 = lVar8;
      func_0x00010bfb68e0();
      iVar2 = (int)lVar6;
      _CGRectIsEmpty();
      if (iVar2 != 0) {
        func_0x00010be8a360(param_1,param_2,lVar8);
      }
    }
    lVar9 = (long)_DAT_11275202c;
    lVar6 = *(long *)(param_1 + lVar9);
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      func_0x00010c1da340(param_4,param_2,*(undefined8 *)(param_1 + lVar9));
    }
    func_0x00010c10d620(param_4,param_2,lVar8,param_5,*(undefined8 *)(param_1 + _DAT_112751fbc),
                        *(undefined8 *)(param_1 + _DAT_112751ee4),
                        *(undefined8 *)(param_1 + _DAT_112751e84),
                        *(undefined8 *)(param_1 + _DAT_112751fb4),param_6,puVar4,param_7,param_8,
                        *(undefined8 *)(param_1 + _DAT_112752014));
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar7);
    func_0x00010bde0b00(param_1);
    _objc_release(lVar8);
  }
  else {
    func_0x00010c13d560(param_4,param_2,0);
  }
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_release(puVar4);
LAB_10685c214:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10685c258; end: 10685c2c3; -[SCSpotlightViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c258(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010be01ec0();
  if (*(long *)(param_1 + _DAT_112751fc8) != 0) {
    func_0x00010c26ac40();
  }
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112751e54));
  puStack_28 = PTR_PTR_1126f3838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10685c2c4; end: 10685c2cb; -[SCSpotlightViewController presentationMode] */

undefined8 FUN_10685c2c4(void)

{
  return 3;
}



/* Entry: 10685c2cc; end: 10685c407; -[SCSpotlightViewController _startNewSessionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10685c2cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112751fb4;
  lVar5 = *(long *)(param_1 + lVar4);
  if (lVar5 == 0) {
    lVar1 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    func_0x00010c24f680(*(undefined8 *)(param_1 + _DAT_112751e6c));
    puVar2 = PTR_PTR_1126ce768;
    _objc_opt_new();
    lVar4 = (long)_DAT_112751e70;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1264c0(*(undefined8 *)(param_1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return lVar5 == 0;
}



/* Entry: 10685c408; end: 10685c47f; -[SCSpotlightViewController _cleanupCurrentSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c408(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  if (*(long *)(param_1 + _DAT_112751ec4) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112751fb4);
    *(undefined8 *)(param_1 + _DAT_112751fb4) = 0;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751f70);
  *(undefined8 *)(param_1 + _DAT_112751f70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10685c480; end: 10685c51f; -[SCSpotlightViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112751e54),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126f3838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be95480(param_1);
    func_0x00010c1cb860(param_1);
  }
  return;
}



/* Entry: 10685c520; end: 10685c95f; -[SCSpotlightViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c520(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uStack_70;
  undefined *puStack_68;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + (long)_DAT_112751e54),param_2,param_1,param_3);
  puVar1 = &UNK_10f39c928;
  func_0x0001000ba800(&UNK_10f39c928);
  puStack_68 = PTR_PTR_1126f3838;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewDidDisappear__112684c48,param_3);
  lVar12 = (long)_DAT_112751f4c;
  func_0x00010bf49a40(*(undefined8 *)(param_1 + lVar12));
  lVar11 = (long)_DAT_112751e84;
  lVar10 = *(long *)(param_1 + lVar11);
  if ((lVar10 == 0x62) || (lVar10 == 0x49)) {
    func_0x00010c208740(*(undefined8 *)(param_1 + lVar12));
  }
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112752000);
  *(undefined8 *)(param_1 + (long)_DAT_112752000) = 0;
  _objc_release(uVar2);
  func_0x00010be01ec0(param_1);
  if ((*(char *)(param_1 + (long)_DAT_112751ea8) == '\x01') &&
     (*(long *)(param_1 + (long)_DAT_112751ff4) != 0)) {
    func_0x00010be02a20(param_1);
  }
  if (*(char *)(param_1 + (long)_DAT_112751eac) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112751fec);
    func_0x00010bf8edc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c07df20();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010be02a20(param_1);
    }
  }
  if (*(char *)(param_1 + (long)_DAT_112751e9c) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + (long)_DAT_112751e94));
  }
  puVar5 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112751f2c);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0fa0(uVar2);
  _objc_release(puVar5);
  func_0x00010c0a9ba0(*(undefined8 *)(param_1 + (long)_DAT_112751ee8));
  uVar6 = param_1;
  func_0x00010bdf6fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 != 0) {
    func_0x00010bf84540(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c12e4c0(uVar8);
    if (*(long *)(param_1 + (long)_DAT_112752014) == 0) goto LAB_10685c7b0;
  }
  uVar9 = uVar8;
  func_0x00010c07ab40();
  if (((uVar9 & 1) != 0) || (*(char *)(param_1 + (long)_DAT_112751fdc) == '\x01')) {
    *(undefined1 *)(param_1 + (long)_DAT_112751fdc) = 0;
    *(undefined1 *)(param_1 + (long)_DAT_112751fa4) = 0;
  }
  if ((uVar7 == 0) || (*(long *)(param_1 + (long)_DAT_112752014) != 0)) {
    func_0x00010be2d920(param_1);
  }
LAB_10685c7b0:
  uVar9 = param_1;
  func_0x00010be3f660();
  if ((uVar9 & 1) == 0) {
    if (((uVar7 == 0) || (*(long *)(param_1 + (long)_DAT_112752014) != 0)) &&
       (uVar9 = uVar8, func_0x00010c07ab40(), (int)uVar9 != 0)) {
      uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112751e5c);
      func_0x000108f4e0a0(uVar2,*(undefined8 *)(param_1 + lVar11));
      if ((int)uVar2 == 0) {
        uVar9 = param_1;
        func_0x00010be191c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bddf640(param_1);
        lVar10 = (long)_DAT_112752030;
        func_0x00010bf2e880(uVar8);
        *(undefined1 *)(param_1 + lVar10) = 0;
        _objc_release(uVar9);
      }
      else {
        func_0x00010c0f5e20(uVar8);
      }
    }
    else {
      func_0x00010c07ab40(uVar8);
    }
  }
  else if (uVar7 == 0) {
    func_0x00010be93ea0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112752014);
  *(undefined8 *)(param_1 + (long)_DAT_112752014) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + (long)_DAT_11275201c) = 0;
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112751f88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8480;
  func_0x00010bf77860(PTR_PTR_1126b8480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar2);
  func_0x00010be03f60(param_1);
  func_0x00010c24c8a0(*(undefined8 *)(param_1 + (long)_DAT_112751eb4));
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10685c960; end: 10685c9d3; -[SCSpotlightViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112751e54),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126f3838;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 10685c9d4; end: 10685ca27; -[SCSpotlightViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685c9d4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112751e54),param_2,param_1);
  puStack_28 = PTR_PTR_1126f3838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 10685ca28; end: 10685cadf; -[SCSpotlightViewController _dispatchSaveStoriesToDiskIfNeeded] */

void FUN_10685ca28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10685cae0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10685cae0; end: 10685cb0b;  */

void FUN_10685cae0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10685cb0c; end: 10685cbdb; -[SCSpotlightViewController launchCreatorsSubmissionActionSheetWithShouldDelayLaunch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cb0c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11275200c) = 1;
    return;
  }
  _objc_initWeak(auStack_28);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10685cbb0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10685cbdc; end: 10685cbeb; -[SCSpotlightViewController updateFeedPageEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112751f80) = param_3;
  return;
}



/* Entry: 10685cbec; end: 10685cc1b; -[SCSpotlightViewController infoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cbec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751eb4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685cc1c; end: 10685cc4b; -[SCSpotlightViewController subFeedDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cc1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751eb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685cc4c; end: 10685cd77; -[SCSpotlightViewController applicationDidBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cc4c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x0001000ba800(&UNK_10f39c947);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112751e5c);
  func_0x000108f4e0a0(uVar2,*(undefined8 *)(param_2 + _DAT_112751e84));
  if ((int)uVar2 != 0) {
    lVar4 = param_2;
    func_0x00010c0834c0();
    if ((int)lVar4 == 0) goto SUB_1000e2a84;
    lVar4 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar3 == 0) goto SUB_1000e2a84;
  }
  func_0x00010c0a9ba0(*(undefined8 *)(param_2 + _DAT_112751ee8));
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_112752034) = param_1;
  lVar4 = (long)_DAT_112751ea8;
  if ((*(char *)(param_2 + lVar4) == '\x01') &&
     ((*(long *)(param_2 + _DAT_112751ff4) == 0 ||
      (func_0x00010be02a20(param_2), *(char *)(param_2 + lVar4) == '\x01')))) {
    if (*(long *)(param_2 + _DAT_112751f78) != 0) {
      func_0x00010bf3c440();
    }
  }
  func_0x00010be2d920(param_2);
SUB_1000e2a84:
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10685cd78; end: 10685cf23; -[SCSpotlightViewController applicationWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cd78(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  func_0x0001000ba800(&UNK_10f39c96e);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  func_0x000108f4e0a0(uVar1,*(undefined8 *)(param_1 + _DAT_112751e84));
  if ((int)uVar1 != 0) {
    lVar4 = param_1;
    func_0x00010c0834c0();
    if ((int)lVar4 == 0) goto SUB_1000e2a84;
    lVar4 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar2 == 0) goto SUB_1000e2a84;
  }
  lVar4 = (long)_DAT_112752034;
  dVar5 = *(double *)(param_1 + lVar4);
  if (0.0 < dVar5) {
    _CACurrentMediaTime();
    *(double *)(param_1 + _DAT_112751fd0) =
         (dVar5 - *(double *)(param_1 + lVar4)) + *(double *)(param_1 + _DAT_112751fd0);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
  lVar4 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c07ab40();
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_1 + _DAT_112752038) = 1;
    func_0x00010be2da00(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751f88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8480;
  func_0x00010bf75ec0(PTR_PTR_1126b8480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(lVar4);
SUB_1000e2a84:
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10685cf24; end: 10685cf87; -[SCSpotlightViewController configureWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cf24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d580();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112752004);
  *(undefined8 *)(param_1 + _DAT_112752004) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10685cf88; end: 10685cfbf; -[SCSpotlightViewController configureWithDeepLinkNotificationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275202c);
  *(undefined8 *)(param_1 + _DAT_11275202c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10685cfc0; end: 10685d033; -[SCSpotlightViewController dismissPresentedSpotlightViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685cfc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  func_0x000108f4e0a0(uVar1,*(undefined8 *)(param_1 + _DAT_112751e84));
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010bf2e880();
  }
  else {
    func_0x00010c0f5e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10685d034; end: 10685d083; -[SCSpotlightViewController _shouldSuppressNotificationWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10685d034(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  
  if ((param_3 < 0x37) && ((1L << (param_3 & 0x3f) & 0x600c8040000106U) != 0)) {
    bVar1 = *(byte *)(param_1 + _DAT_112751e74);
  }
  else {
    bVar1 = param_3 - 0xb3 < 4;
  }
  return bVar1 & 1;
}



/* Entry: 10685d084; end: 10685d08b; -[SCSpotlightViewController shouldDiscardNotification:] */

undefined8 FUN_10685d084(void)

{
  return 0;
}



/* Entry: 10685d08c; end: 10685d0b7; -[SCSpotlightViewController shouldDelayNotificationsWhenSpotlightPresented:] */

void FUN_10685d08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c11c420(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beb6b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__shouldSuppressNotificationWithT_11258b488,param_3);
  return;
}



/* Entry: 10685d0b8; end: 10685d143; -[SCSpotlightViewController _saveStoriesToDiskIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d0b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000ba800(&UNK_10f39c99b);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751edc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b1a0();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10685d144; end: 10685d183; -[SCSpotlightViewController setNavigationHidden:animated:trigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d144(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11275203c) != param_3) {
    *(char *)(param_1 + _DAT_11275203c) = (char)param_3;
    if (*(long *)(param_1 + _DAT_112751fa0) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bea4630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setHeaderViewHidden_animated__112586b30)
      ;
      return;
    }
    if (*(long *)(param_1 + _DAT_112751fa0) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTitleViewHidden_animated__112587bb0);
      return;
    }
  }
  return;
}



/* Entry: 10685d184; end: 10685d2f7; -[SCSpotlightViewController _setHeaderViewHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d184(long param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112752040);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112751f78);
  _objc_retain(uVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10685d2f8;
  puStack_68 = &UNK_110845ce0;
  _objc_retain(uVar4);
  ppuVar2 = &puStack_80;
  uStack_60 = uVar4;
  uStack_58 = param_3;
  _objc_retainBlock();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10685d314;
  puStack_a0 = &UNK_1109446f8;
  uStack_98 = uVar4;
  uStack_90 = uVar5;
  uStack_88 = param_3;
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock();
  if (param_4 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
    (*(code *)ppuVar3[2])(ppuVar3,1);
  }
  else {
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 10685d2f8; end: 10685d313;  */

void FUN_10685d2f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10685d314; end: 10685d357;  */

void FUN_10685d314(long param_1,undefined8 param_2)

{
  func_0x00010c1d94a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf3c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_clearTooltip_1125acab8);
    return;
  }
  return;
}



/* Entry: 10685d358; end: 10685d49b; -[SCSpotlightViewController _setTitleViewHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d358(long param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  ppuVar3 = &puStack_b0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751f78);
  _objc_retain(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10685d49c;
  puStack_68 = &UNK_110845ce0;
  _objc_retain(uVar4);
  ppuVar2 = &puStack_80;
  uStack_60 = uVar4;
  uStack_58 = param_3;
  _objc_retainBlock();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10685d4b8;
  puStack_98 = &UNK_110857498;
  uStack_90 = uVar4;
  uStack_88 = param_3;
  _objc_retain(uVar4);
  _objc_retainBlock();
  if (param_4 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
    (**(code **)((long)ppuVar3 + 0x10))(ppuVar3,1);
  }
  else {
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uVar4);
  return;
}



/* Entry: 10685d49c; end: 10685d4b7;  */

void FUN_10685d49c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10685d4b8; end: 10685d4fb;  */

void FUN_10685d4b8(long param_1,undefined8 param_2)

{
  func_0x00010c1b0740(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf3c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_clearTooltip_1125acab8);
    return;
  }
  return;
}



/* Entry: 10685d4fc; end: 10685d55f; -[SCSpotlightViewController playbackManagerCanAllowPlayback:] */

bool FUN_10685d4fc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 10685d560; end: 10685d633; -[SCSpotlightViewController playbackManagerDidTriggerPagination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d560(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  
  func_0x00010bf5fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + _DAT_112751e5c);
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24c2c0(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320();
    _objc_release(puVar2);
    _objc_release(param_3);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + _DAT_112751fe0) = 1;
      func_0x00010be612a0(param_1);
    }
  }
  else {
    _objc_release(param_3);
  }
  func_0x00010be9fca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0ff950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751eb4),
             PTR_s_playbackManagerDidRequestPaginat_11261d870);
  return;
}



/* Entry: 10685d634; end: 10685d643; -[SCSpotlightViewController playbackManagerDidTriggerBatchRefresh:] */

void FUN_10685d634(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9fcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendQueryWithQuerySource__1125858d0,
             &PTR____CFConstantStringClassReference_110ee10f8);
  return;
}



/* Entry: 10685d644; end: 10685d937; -[SCSpotlightViewController playbackManagerDidTriggerRefresh:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126affa8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c22bc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010c0f1bc0(param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112751fb4;
  puVar7 = *(undefined **)(param_1 + lVar9);
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = *(undefined **)(param_1 + lVar9);
  puVar2 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
  _objc_release(puVar3);
  _objc_release(puVar7);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  iVar6 = (int)*(undefined8 *)(puVar1 + _DAT_112751e5c);
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c24c2c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar2);
  if (iVar6 != 0) {
    puVar1[_DAT_112751fe0] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c238b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar1 + _DAT_112751e80),
               PTR_s_showNoMetadataLoadingViewWithRea_11266bce8,
               &PTR____CFConstantStringClassReference_110e62078);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c251bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_112751e80),PTR_s_startWithReason__112672120,
             &PTR____CFConstantStringClassReference_110e62078);
  return;
}



/* Entry: 10685d938; end: 10685d9e3; -[SCSpotlightViewController playbackManagerIsWaitingOnData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d938(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c24c2c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + _DAT_112751fe0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c238b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112751e80),
               PTR_s_showNoMetadataLoadingViewWithRea_11266bce8,
               &PTR____CFConstantStringClassReference_110e62078);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c251bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751e80),PTR_s_startWithReason__112672120,
             &PTR____CFConstantStringClassReference_110e62078);
  return;
}



/* Entry: 10685d9e4; end: 10685da6b; -[SCSpotlightViewController playbackManagerHasNoLoadedMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685d9e4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c24c2c0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c238b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112751e80),
               PTR_s_showNoMetadataLoadingViewWithRea_11266bce8,
               &PTR____CFConstantStringClassReference_110e62098);
    return;
  }
  return;
}



/* Entry: 10685da6c; end: 10685daaf; -[SCSpotlightViewController playbackManagerDidFinishRefreshingStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685da6c(long param_1)

{
  func_0x00010c139980(*(undefined8 *)(param_1 + _DAT_112751fc8));
  func_0x00010c1cb860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be35c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideRefreshLoadingSpinner_11256b0a0);
  return;
}



/* Entry: 10685dab0; end: 10685db87; -[SCSpotlightViewController playbackManagerDidLoadInitialData:firstStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685dab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + _DAT_112751fe0) & 1) == 0) {
    func_0x00010bfe2480(*(undefined8 *)(param_1 + _DAT_112751e80),param_2,
                        &PTR____CFConstantStringClassReference_110e620b8);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112751e70);
  uVar1 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084c40();
  uVar3 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126860(uVar5,param_2,uVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10685db88; end: 10685dd17; -[SCSpotlightViewController playbackManager:willPresentOperaWithInitialStory:isCachedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685db88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112751ee8);
  _objc_retain(param_4);
  func_0x00010c0ab920(uVar4);
  if ((*(byte *)(param_1 + (long)_DAT_112751fe0) & 1) == 0) {
    func_0x00010bfe2480(*(undefined8 *)(param_1 + (long)_DAT_112751e80),param_2,
                        &PTR____CFConstantStringClassReference_110e620d8);
  }
  uVar1 = param_1;
  func_0x00010beb3a40();
  if ((uVar1 & 1) == 0) {
    func_0x00010bea7d00(param_1,param_2,1,0);
  }
  func_0x00010c256f40(*(undefined8 *)(param_1 + (long)_DAT_112751e80),param_2,
                      &PTR____CFConstantStringClassReference_110e620d8);
  func_0x00010bdcc3a0(param_1,param_2,param_4);
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112751e6c);
  uVar4 = param_4;
  func_0x00010bf454e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109800(uVar5,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112751e70);
  uVar4 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c084c40();
  uVar5 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar5;
  func_0x00010c084ca0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1271a0(uVar6,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + (long)_DAT_112751f08) = param_5;
  return;
}



/* Entry: 10685dd18; end: 10685e237; -[SCSpotlightViewController playbackManager:didStopPlayingStory:willStartPlayingStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685dd18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((*(char *)(param_1 + _DAT_112751e9c) == '\x01') && (param_4 != 0)) &&
     (*(long *)(param_1 + _DAT_112751f6c) != 0)) {
    func_0x00010c259740(param_4);
    func_0x00010c0df880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112751e94;
    uVar2 = *(ulong *)(param_1 + lVar16);
    func_0x00010bf4b900();
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar16));
      func_0x00010bf67780(*(undefined8 *)(param_1 + _DAT_112751f78));
    }
    _objc_release(puVar1);
  }
  else if (*(char *)(param_1 + _DAT_112751e98) == '\x01') {
    func_0x00010bf3aa20(*(undefined8 *)(param_1 + _DAT_112751f78));
  }
  uVar2 = param_5;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c08fa60();
  if (uVar2 == 0) goto LAB_10685e1fc;
  func_0x00010c109800(*(undefined8 *)(param_1 + _DAT_112751e6c));
  lVar16 = (long)_DAT_112751e70;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uVar2 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  uVar7 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1271a0(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  lVar16 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  lVar5 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112751ebc);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb520();
  func_0x00010c127180(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar16);
  lVar16 = (long)_DAT_112751ed0;
  uVar7 = *(ulong *)(param_1 + lVar16);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  _objc_opt_respondsToSelector();
  _objc_release(uVar7);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_5;
    func_0x00010bf454e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar8 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010bf5ff00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb380(uVar8);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  uVar2 = param_5;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = *(ulong *)(param_1 + _DAT_112751e64);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar9);
  uVar2 = uVar7;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112751e90);
  func_0x00010c2923e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0720c0();
  if ((uVar12 & 1) == 0) {
    uVar12 = uVar7;
    func_0x00010bf25140(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    if ((uVar13 & 1) != 0) goto LAB_10685e1d4;
  }
  else {
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
LAB_10685e1d4:
    func_0x00010bf84540(*(undefined8 *)(param_1 + _DAT_112751f4c));
  }
  _objc_release(uVar4);
  _objc_release(uVar7);
LAB_10685e1fc:
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685e238; end: 10685e27f;  */

void FUN_10685e238(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1164a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685e280; end: 10685e803; -[SCSpotlightViewController playbackManager:didBeginPlayingStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685e280(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(char *)(param_2 + _DAT_11275201c) == '\x01') &&
     (lVar8 = (long)_DAT_112752014, *(long *)(param_2 + lVar8) != 0)) {
    *(undefined1 *)(param_2 + _DAT_11275201c) = 0;
    uVar9 = *(undefined8 *)(param_2 + lVar8);
    _objc_retain(uVar9);
    _objc_initWeak(auStack_78,param_2);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10685e804;
    puStack_90 = &UNK_110841fb0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar9);
    uStack_88 = uVar9;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar9);
  }
  lVar11 = (long)_DAT_112751e70;
  uVar9 = *(undefined8 *)(param_2 + lVar11);
  lVar8 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  lVar1 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126500(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf5f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (lVar1 != 0) {
    func_0x00010c1d5700(*(undefined8 *)(param_2 + lVar11));
  }
  uVar10 = *(undefined8 *)(param_2 + _DAT_112751ee8);
  uVar9 = param_4;
  func_0x00010bf5ff00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac5a0(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  if (param_5 == 0) goto LAB_10685e7c8;
  lVar8 = param_5;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar2;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    lVar8 = (long)_DAT_112751e6c;
    func_0x00010bf48000(*(undefined8 *)(param_2 + lVar8));
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar9 = *(undefined8 *)(param_2 + _DAT_112751ecc);
    func_0x00010bf52ec0(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar3);
    uVar9 = *(undefined8 *)(param_2 + lVar11);
    lVar8 = param_5;
    func_0x00010c25a160(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084c40();
    lVar11 = param_5;
    func_0x00010c25a160(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127140(uVar9);
    _objc_release(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_112751f9c;
    if (*(long *)(param_2 + lVar8) != 0) {
      func_0x00010befa120();
      lVar8 = *(long *)(param_2 + lVar8);
      func_0x00010bf529e0();
      if (lVar8 == *(long *)(param_2 + _DAT_112751f98)) {
        lVar8 = (long)_DAT_112751ed0;
        uVar5 = *(ulong *)(param_2 + lVar8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        _objc_opt_respondsToSelector();
        _objc_release(uVar5);
        if ((uVar6 & 1) != 0) {
          uVar9 = *(undefined8 *)(param_2 + lVar8);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_2 + _DAT_112751e88);
          func_0x00010bfa4340(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23bf60(uVar9);
          _objc_release(uVar7);
          _objc_release(uVar9);
        }
      }
    }
  }
  func_0x00010c08ae20(param_2);
  lVar11 = (long)_DAT_112751fd4;
  lVar8 = *(long *)(param_2 + lVar11);
  if (*(char *)(param_2 + _DAT_112752038) == '\x01') {
    if (lVar8 == 0) {
LAB_10685e678:
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + lVar11);
      *(undefined **)(param_2 + lVar11) = puVar3;
      _objc_release(uVar9);
      lVar8 = *(long *)(param_2 + lVar11);
      goto LAB_10685e6a0;
    }
    *(undefined1 *)(param_2 + _DAT_112752038) = 0;
    param_1 = 1.0;
  }
  else {
    if (lVar8 == 0) goto LAB_10685e678;
LAB_10685e6a0:
    func_0x00010bf885a0(lVar8);
    param_1 = param_1 * 1000.0;
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_112751f0c);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a52a0(param_1,*(undefined8 *)(param_2 + _DAT_112752044));
  _objc_release(uVar9);
  func_0x00010be5e320(param_2);
  lVar8 = param_2;
  func_0x00010c0ff100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b180();
  _objc_release(lVar8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_112751eb4);
  lVar8 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf5ff00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  func_0x00010c24c8c0(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar2);
LAB_10685e7c8:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10685e804; end: 10685e837;  */

void FUN_10685e804(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c065100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10685e838; end: 10685e943; -[SCSpotlightViewController playbackManagerWillBeginPresentingOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685e838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + _DAT_112751e5c);
  puVar1 = PTR_PTR_1126c0e00;
  func_0x00010c24c140(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  if ((uVar3 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bdf6fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 == param_1) {
      _objc_storeWeak(param_1 + _DAT_112751fb0,param_3);
      func_0x00010bedc780(param_1);
    }
  }
  if (*(char *)(param_1 + _DAT_112751fe0) == '\x01') {
    func_0x00010be612a0(param_1);
  }
  func_0x00010c127660(*(undefined8 *)(param_1 + _DAT_112751e70));
  lVar2 = param_1;
  func_0x00010beb3a40();
  if ((int)lVar2 != 0) {
    func_0x00010bea7d00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


