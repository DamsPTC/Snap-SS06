/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10704b898; end: 10704b927; -[SCChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112763294;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c12f740(uVar1);
  FUN_10704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276328c),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704b928; end: 10704bc87; -[SCChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b928(double param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f8630;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar6 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar11 = param_1;
  _objc_release(lVar6);
  lVar6 = (long)_DAT_112763294;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar6);
  func_0x00010c12f740();
  iVar2 = (int)*(undefined8 *)(param_2 + lVar6);
  func_0x00010c233840();
  dVar8 = dVar11;
  if (iVar2 != 0) {
    func_0x00010bfb3820(*(undefined8 *)(param_2 + lVar6));
    lVar7 = param_2;
    func_0x00010bfb3840(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 0.0;
    func_0x00010c19f0e0(0,0,param_1,dVar11);
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  if (iVar1 == 0) {
    func_0x00010bf65320(*(undefined8 *)(param_2 + lVar6));
    dVar11 = dVar8;
    func_0x00010bf65360(*(undefined8 *)(param_2 + lVar6));
    dVar11 = dVar8 + dVar11;
    dVar8 = param_1 - dVar11;
  }
  else {
    func_0x00010bf653a0();
    dVar11 = dVar8;
    func_0x00010bf65240(*(undefined8 *)(param_2 + lVar6));
    dVar8 = dVar8 + dVar11;
    func_0x00010bf65280(*(undefined8 *)(param_2 + lVar6));
    dVar8 = dVar8 + dVar11;
  }
  func_0x00010bf652a0(*(undefined8 *)(param_2 + lVar6));
  dVar9 = dVar11;
  func_0x00010bf65260(*(undefined8 *)(param_2 + lVar6));
  dVar11 = dVar11 + dVar9;
  func_0x00010bf65220(*(undefined8 *)(param_2 + lVar6));
  dVar11 = dVar11 + dVar9;
  dVar10 = param_1 * 0.5;
  dVar12 = dVar10 - dVar8 * 0.5;
  func_0x00010bfb3820(*(undefined8 *)(param_2 + lVar6));
  dVar9 = dVar10;
  func_0x00010bf65340(*(undefined8 *)(param_2 + lVar6));
  dVar10 = dVar10 + dVar9;
  func_0x00010bf1ebe0(*(undefined8 *)(param_2 + lVar6));
  lVar7 = (long)_DAT_11276328c;
  func_0x00010c19f0e0(dVar12,dVar10 + dVar9,dVar8,dVar11,*(undefined8 *)(param_2 + lVar7));
  func_0x00010bf65240(*(undefined8 *)(param_2 + lVar6));
  dVar8 = dVar8 - dVar12;
  func_0x00010bf65280(*(undefined8 *)(param_2 + lVar6));
  dVar8 = dVar8 - dVar12;
  func_0x00010bf652a0(*(undefined8 *)(param_2 + lVar6));
  dVar9 = dVar12;
  func_0x00010bf65240(*(undefined8 *)(param_2 + lVar6));
  dVar10 = dVar9;
  func_0x00010bf65260(*(undefined8 *)(param_2 + lVar6));
  func_0x00010c19f0e0(dVar9,dVar10,dVar8,dVar12,*(undefined8 *)(param_2 + _DAT_112763288));
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 0.0;
    func_0x00010c1842e0(0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar11 * 0.5);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 0.5;
    func_0x00010c1733a0(0x3fe0000000000000);
  }
  _objc_release(uVar4);
  func_0x00010bf1ebe0(*(undefined8 *)(param_2 + lVar6));
  dVar8 = dVar11;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar6));
  dVar9 = dVar8;
  func_0x00010bf1ebe0(*(undefined8 *)(param_2 + lVar6));
  func_0x00010c19f0e0(0,dVar11,param_1,dVar8 - dVar9,*(undefined8 *)(param_2 + _DAT_112763290));
  return;
}



/* Entry: 10704bc88; end: 10704bcdb; -[SCChatTableViewCell displayCell] */

void FUN_10704bc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return;
}



/* Entry: 10704bcdc; end: 10704bcdf; -[SCChatTableViewCell willDisplayCell] */

void FUN_10704bcdc(void)

{
  return;
}



/* Entry: 10704bce0; end: 10704bce3; -[SCChatTableViewCell endDisplayingCell] */

void FUN_10704bce0(void)

{
  return;
}



/* Entry: 10704bce4; end: 10704bce7; -[SCChatTableViewCell didChangeVisibility:] */

void FUN_10704bce4(void)

{
  return;
}



/* Entry: 10704bce8; end: 10704bd3f; -[SCChatTableViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_10704bce8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 10704bd40; end: 10704bdd7; -[SCChatTableViewCell gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10704bd40(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_10704bdbc;
    }
  }
  uVar3 = 0;
LAB_10704bdbc:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10704bdd8; end: 10704be33; -[SCChatTableViewCell handleSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704bdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112763280;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf33d60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704be34; end: 10704be43; -[SCChatTableViewCell dateHeaderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10704be34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763288);
}



/* Entry: 10704be44; end: 10704be83; -[SCChatTableViewCell setDateHeaderLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704be44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763288;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704be84; end: 10704be93; -[SCChatTableViewCell dateHeaderBubble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10704be84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276328c);
}



/* Entry: 10704be94; end: 10704bed3; -[SCChatTableViewCell setDateHeaderBubble:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704be94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276328c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704bed4; end: 10704bee3; -[SCChatTableViewCell foldIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10704bed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763298);
}



/* Entry: 10704bee4; end: 10704bf23; -[SCChatTableViewCell setFoldIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704bee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763298;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704bf24; end: 10704bf33; -[SCChatTableViewCell bodyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10704bf24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763290);
}



/* Entry: 10704bf34; end: 10704bf73; -[SCChatTableViewCell setBodyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704bf34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763290;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704bf74; end: 10704bf83; -[SCChatTableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10704bf74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763294);
}



/* Entry: 10704bf84; end: 10704c00f; -[SCChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704bf84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763294,0);
  _objc_storeStrong(param_1 + _DAT_112763290,0);
  _objc_storeStrong(param_1 + _DAT_112763298,0);
  _objc_storeStrong(param_1 + _DAT_11276328c,0);
  _objc_storeStrong(param_1 + _DAT_112763288,0);
  _objc_destroyWeak(param_1 + _DAT_112763280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763284,0);
  return;
}



/* Entry: 10704c010; end: 10704c5c3; -[SCMessageChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10704c010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f8638;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithParameters__1125ea7e0,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_4;
    func_0x00010c1051c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276329c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276329c) = uVar8;
    _objc_release(uVar6);
    uVar8 = param_4;
    func_0x00010c0f3c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127632a0),uVar8);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127632a4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = uVar8;
    _objc_release(uVar6);
    uVar8 = param_4;
    func_0x00010bf44840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632a8) = uVar8;
    _objc_release(uVar6);
    uVar8 = param_4;
    func_0x00010c0e35a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632ac) = uVar8;
    _objc_release(uVar6);
    uVar8 = param_4;
    func_0x00010bf35da0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632b0) = uVar8;
    _objc_release(uVar6);
    uVar8 = param_4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632b4) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c101ca0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127632b8),uVar8);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c0cbd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c074900();
    *(char *)((long)puVar1 + (long)_DAT_1127632bc) = (char)uVar7;
    _objc_release(uVar6);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf1ec20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar8 = param_4;
    func_0x00010bf44f20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ff80(puVar1);
    _objc_release(uVar8);
    func_0x00010bfef160(puVar1);
    func_0x00010bfeed60(puVar1);
    func_0x00010bfeef20(puVar1);
    func_0x00010be3a600(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf652c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_107064924();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar3);
    _objc_release(puVar4);
    func_0x00010708cc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar9 = (long)_DAT_1127632c0;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    func_0x00010c1c3c20(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010bef9040(puVar1);
    uVar8 = param_4;
    func_0x00010c11ed20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632c4) = uVar8;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127632c8) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127632cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127632cc) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d4300;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar9 = (long)_DAT_1127632d0;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf1ec20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127632d4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127632d8) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127632dc) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127632e0) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632e4) = 0x3fd3333333333333;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632e8) = 0x3fb999999999999a;
    uVar8 = param_4;
    func_0x00010c0f3c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127632ec),uVar8);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c0f3c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127632f0),uVar8);
    _objc_release(uVar8);
    func_0x000108ef73a0(*(undefined8 *)((long)puVar1 + lVar10));
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127632f4) = param_1;
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10704c5c4; end: 10704c67b; -[SCMessageChatTableViewCell gestureRecognizer:shouldReceiveTouch:] */

undefined1 * FUN_10704c5c4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c23cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == uVar1) && (uVar1 = param_1, func_0x00010be010a0(), (uVar1 & 1) != 0)) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f8638;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_gestureRecognizer_shouldReceiveT_1125ce058,param_3,param_4)
    ;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10704c67c; end: 10704c8f3; -[SCMessageChatTableViewCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10704c67c(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_5);
  if (param_5 != *(ulong *)(param_3 + (long)_DAT_1127632c0)) {
    uVar7 = 1;
    goto LAB_10704c788;
  }
  uVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2c540();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  if ((int)uVar2 == 0) {
    uVar7 = 0;
    goto LAB_10704c788;
  }
  _objc_retain(param_5);
  _objc_opt_class(puVar3);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  lVar6 = (long)_DAT_1127632f8;
  func_0x00010c09ef00(uVar1);
  if (param_2 < 0.0) {
LAB_10704c774:
    uVar7 = 0;
  }
  else {
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar6));
    _CGRectGetHeight();
    if (param_1 < param_2) goto LAB_10704c774;
    func_0x00010c09ef00(uVar1);
    dVar8 = 50.0;
    if (param_1 < 50.0) goto LAB_10704c774;
    func_0x00010c297a00(uVar1);
    uVar7 = 0;
    if ((ABS(dVar8) < ABS(param_1)) && (0.0 < param_1)) {
      uVar4 = param_3;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c6d00;
      _objc_opt_class(PTR_PTR_1126c6d00);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar2 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar4 == 0) {
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126cb4d0;
        _objc_opt_class(PTR_PTR_1126cb4d0);
        uVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar3);
        uVar2 = param_3;
        if ((uVar4 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(param_3);
        uVar4 = uVar2;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (uVar4 == 0) {
          uVar7 = 1;
          goto LAB_10704c778;
        }
      }
      uVar2 = uVar4;
      func_0x000107d6aa4c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf529e0();
      if ((uVar5 == 0) ||
         (puVar3 = PTR_PTR_1126c6a40, func_0x00010c06b580(), ((ulong)puVar3 & 1) == 0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
  }
LAB_10704c778:
  _objc_release(uVar1);
LAB_10704c788:
  _objc_release(param_5);
  return uVar7;
}



/* Entry: 10704c8f4; end: 10704caff; -[SCMessageChatTableViewCell pan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704c8f4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double adStack_80 [6];
  
  _objc_retain(param_4);
  lVar3 = param_2;
  func_0x00010c29d560(param_2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0;
  FUN_10706a978(0,lVar3);
  _objc_release(lVar3);
  if (iVar1 == 0) goto LAB_10704cab8;
  func_0x00010c09ef00(param_4);
  lVar3 = (long)_DAT_1127632fc;
  dVar4 = param_1 - *(double *)(param_2 + lVar3);
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar4 = (double)NEON_fminnm(dVar4,0x404a800000000000);
  lVar2 = param_4;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        *(double *)(param_2 + lVar3) = param_1;
        func_0x00010be92660(param_2);
        func_0x00010bfd3100(param_2);
        *(undefined1 *)(param_2 + _DAT_1127632d4) = 1;
        *(undefined1 *)(param_2 + _DAT_1127632dc) = 1;
        *(undefined8 *)(param_2 + _DAT_1127632e4) = 0x3fd3333333333333;
        *(undefined8 *)(param_2 + _DAT_1127632e8) = 0x3fb999999999999a;
      }
      else if (lVar2 == 2) {
        if (((dVar4 != 53.0) || (*(long *)(param_2 + _DAT_1127632d0) == 0)) ||
           (func_0x00010c27a460(adStack_80), adStack_80[0] < 1.0)) {
          func_0x00010bf02d20(dVar4,dVar4 / 53.0,param_2);
          *(undefined1 *)(param_2 + _DAT_1127632d8) = 0;
        }
        else {
          lVar3 = (long)_DAT_1127632d8;
          if ((*(byte *)(param_2 + lVar3) & 1) == 0) {
            func_0x00010bddcfe0(param_2);
            *(undefined1 *)(param_2 + lVar3) = 1;
          }
        }
      }
      goto LAB_10704cab8;
    }
LAB_10704ca04:
    func_0x00010bfd3100(param_2);
  }
  else {
    if (lVar2 - 4U < 2) goto LAB_10704ca04;
    if (lVar2 != 3) goto LAB_10704cab8;
    *(undefined1 *)(param_2 + _DAT_1127632dc) = 0;
    func_0x00010bfd3100(param_2);
    if (dVar4 == 53.0) {
      func_0x00010be2a420(param_2);
    }
    if ((*(byte *)(param_2 + _DAT_1127632e0) & 1) != 0) goto LAB_10704cab8;
  }
  func_0x00010bdcb120(param_2);
LAB_10704cab8:
  _objc_release(param_4);
  return;
}



/* Entry: 10704cb00; end: 10704cbaf; -[SCMessageChatTableViewCell initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704cb00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d4308;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6480();
  lVar4 = (long)_DAT_112763300;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c161980(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127632f8),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10704cbb0; end: 10704cc3b; -[SCMessageChatTableViewCell initMetadataViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704cbb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112763304;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127632f8),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10704cc3c; end: 10704cca3; -[SCMessageChatTableViewCell _buildStatusLabelView] */

void FUN_10704cc3c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10704cca4; end: 10704cd0b; -[SCMessageChatTableViewCell _buildPayloadAccessoryView] */

void FUN_10704cca4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10704cd0c; end: 10704cd93; -[SCMessageChatTableViewCell _buildAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704cd0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cb540;
  _objc_alloc(PTR_PTR_1126cb540);
  lVar2 = param_1 + _DAT_1127632b8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c061b40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10704cd94; end: 10704ce1b; -[SCMessageChatTableViewCell _buildStackedAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704cd94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cb550;
  _objc_alloc(PTR_PTR_1126cb550);
  lVar2 = param_1 + _DAT_1127632b8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c061b40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10704ce1c; end: 10704cec3; -[SCMessageChatTableViewCell _buildPostSnapActionsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704ce1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276329c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127632a0;
  _objc_loadWeakRetained(lVar2);
  uVar3 = uVar1;
  func_0x00010bf57d00(uVar1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10704cec4; end: 10704d3ff; -[SCMessageChatTableViewCell initPayloadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704cec4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  puVar1 = PTR_PTR_1126d4310;
  _objc_opt_new();
  lVar5 = (long)_DAT_1127632f8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar6 = (long)_DAT_112763308;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  lVar2 = param_1;
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126d4318;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  lVar7 = (long)_DAT_11276330c;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
  _objc_release(lVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126d4320;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c295440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0078e0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763310);
  *(undefined **)(param_1 + _DAT_112763310) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_initWeak(auStack_88,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10704d400;
  puStack_98 = &UNK_110858d90;
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763314);
  *(undefined **)(param_1 + _DAT_112763314) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae720;
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10704d440;
  puStack_c0 = &UNK_110858d90;
  _objc_copyWeak(auStack_b8,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763318);
  *(undefined **)(param_1 + _DAT_112763318) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae720;
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10704d480;
  puStack_e8 = &UNK_110989688;
  _objc_copyWeak(auStack_e0,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276331c);
  *(undefined **)(param_1 + _DAT_11276331c) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae720;
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x10704d4c0;
  puStack_110 = &UNK_1109896b8;
  _objc_copyWeak(auStack_108,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763320);
  *(undefined **)(param_1 + _DAT_112763320) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae720;
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x10704d500;
  puStack_138 = &UNK_110989688;
  _objc_copyWeak(auStack_130,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763324);
  *(undefined **)(param_1 + _DAT_112763324) = puVar3;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_158,auStack_88);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763328);
  *(undefined **)(param_1 + _DAT_112763328) = puVar1;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 10704d400; end: 10704d57f;  */

void FUN_10704d400(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10704d580; end: 10704d5ff; -[SCMessageChatTableViewCell _initStatusMessageHeaderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704d580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276332c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704d600; end: 10704d62f; -[SCMessageChatTableViewCell payloadContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704d600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127632f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10704d630; end: 10704d85b; -[SCMessageChatTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704d630(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8638;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = param_1;
  func_0x00010bfdff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3ff0000000000000;
  func_0x00010c1677c0();
  _objc_release(lVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276332c));
  lVar2 = (long)_DAT_112763310;
  func_0x00010c1097a0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763314);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763318);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763330;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1097a0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = (long)_DAT_11276331c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763320;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763324;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1097a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763328);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1e7b20(param_1);
  func_0x00010be92660(param_1);
  func_0x000108ef73a0(*(undefined8 *)(param_1 + _DAT_1127632a4));
  *(undefined8 *)(param_1 + _DAT_1127632f4) = uVar3;
  return;
}



/* Entry: 10704d85c; end: 10704d85f; -[SCMessageChatTableViewCell displayCell] */

void FUN_10704d85c(void)

{
  return;
}



/* Entry: 10704d860; end: 10704d8a7; -[SCMessageChatTableViewCell didChangeVisibility:] */

/* WARNING: Possible PIC construction at 0x00010704d888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010704d88c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704d860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763310),PTR_s_didChangeVisibility__1125ba7b8);
  return;
}



/* Entry: 10704d8a8; end: 10704db47; -[SCMessageChatTableViewCell _renderHeaderWithDateHeader:withSenderHeader:] */

void FUN_10704d8a8(ulong param_1,undefined8 param_2,int param_3,uint param_4)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf652c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar3 = uVar1;
    func_0x00010c26bf40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bf652c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b20(0x3ff0000000000000);
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010bf65200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfdff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar4 = uVar1;
    func_0x00010c26bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c26bf60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c15de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf4f800();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bfce7a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c15dd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c24d240();
    uVar12 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c15dd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c24d1a0();
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010c15dd40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c15df20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b6e0(uVar3,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar11 & 0xffffffff,(char)uVar14
                       );
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(param_1);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  func_0x00010c1a7f60(uVar3,param_2,param_4 ^ 1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704db48; end: 10704f37b; -[SCMessageChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704db48(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  bool bVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dStack_160;
  double dStack_148;
  double dStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126f8638;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bec2840(param_5);
  uVar6 = param_5;
  dVar20 = param_1;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dca0();
  dVar23 = dVar20;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c29d560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11eba0();
  dVar32 = dVar23;
  dVar24 = param_2;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65340();
  uVar7 = param_5;
  dVar28 = dVar32;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf652a0();
  dVar32 = dVar32 + dVar28;
  uVar3 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf651e0();
  uVar4 = param_5;
  dVar29 = dVar28;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65260();
  uVar9 = param_5;
  dVar21 = dVar29;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65220();
  dVar26 = dVar21;
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3820();
  dVar30 = dVar26;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dce0();
  uVar7 = param_5;
  dVar12 = dVar30;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dc40();
  dVar30 = dVar30 + dVar12;
  uVar3 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dc20();
  dVar13 = dVar12;
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dce0();
  uVar7 = param_5;
  dVar27 = dVar13;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  dVar14 = dVar27;
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcee0();
  dVar31 = dVar14;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6480();
  uVar7 = param_5;
  dVar15 = dVar31;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6740();
  _objc_release(uVar7);
  _objc_release(uVar6);
  dVar16 = 0.0;
  if (0.0 <= dVar31 + dVar15) {
    dVar16 = dVar31 + dVar15;
  }
  dVar16 = param_2 + dVar16;
  uVar6 = param_5;
  dVar31 = dVar16;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6700();
  uVar7 = param_5;
  dVar15 = dVar31;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  uVar3 = param_5;
  dVar25 = dVar15;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65e0();
  dVar22 = dVar25;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ec40();
  dVar17 = dVar22;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6600();
  dStack_b8 = dVar17;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c12f740();
  _objc_release(uVar6);
  if ((int)uVar7 == 0) {
    dStack_160 = dVar17 + dVar17;
    dStack_148 = dVar22 - dStack_160;
    dStack_b8 = dStack_148;
  }
  else {
    uVar6 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    uVar7 = param_5;
    dVar18 = dVar24;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    dStack_160 = dVar24 + param_4;
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6580();
    dStack_b8 = dStack_160 + dStack_b8;
    dStack_148 = dStack_b8;
    _objc_release(uVar6);
    uVar6 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6780();
    _objc_release(uVar6);
    dVar24 = dVar18;
  }
  dVar30 = dVar30 + dVar12;
  uVar6 = param_5;
  dVar12 = dVar16;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5d040();
  dVar18 = dVar12;
  dVar19 = dVar24;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c12f740();
  uVar3 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar7 & 1) == 0) {
    func_0x00010c0cb360();
  }
  else {
    func_0x00010c0f6580();
  }
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010beb3320();
  dVar2 = dStack_b8;
  if ((int)uVar6 == 0) {
LAB_10704e12c:
    bVar1 = false;
  }
  else {
    uVar7 = param_5;
    func_0x00010bdf64a0();
    if ((uVar7 & 1) == 0) {
      uVar7 = param_5;
      func_0x00010c0cb300(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6540();
      uVar3 = param_5;
      func_0x00010c0cb300(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6540();
      _objc_release(uVar3);
      _objc_release(uVar7);
      if (dVar12 + dVar17 + dVar18 + dVar19 + param_4 <= dVar22) goto LAB_10704e12c;
      uVar7 = param_5;
      func_0x00010c0cb300();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c12f740();
      _objc_release(uVar7);
      bVar1 = false;
      dVar2 = dVar22 - dVar12;
      if ((uVar3 & 1) == 0) {
        dVar2 = dStack_b8;
      }
    }
    else {
      bVar1 = true;
    }
  }
  dStack_b8 = dVar2;
  dVar28 = dVar32 + dVar28 + dVar29 + dVar21;
  uVar7 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar32 = dVar21;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c234460();
  _objc_release(uVar7);
  if ((int)uVar3 != 0) {
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ebe0();
    dVar32 = dVar28 + dVar32;
    dVar29 = dVar26 + dVar32;
    uVar3 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dce0();
    _objc_release(uVar3);
    _objc_release(uVar7);
    lVar11 = (long)_DAT_11276332c;
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar11));
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c26bfe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_5 + lVar11));
    _objc_release(uVar3);
    _objc_release(uVar7);
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar11));
    func_0x00010c19f0e0(dVar20,dVar29 + dVar32,dVar21,param_1,*(undefined8 *)(param_5 + lVar11));
  }
  dVar27 = dVar13 + dVar27;
  func_0x00010c26f460(PTR_PTR_1126cb4d0);
  uVar7 = param_5;
  dVar32 = dVar13;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dc80();
  dVar29 = dVar32;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dd00();
  dVar19 = dVar29;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c12f740();
  _objc_release(uVar7);
  if ((int)uVar3 == 0) {
    dVar19 = ((((dVar21 - dVar13) + -14.0) - dVar20) - dVar32) - dVar29;
  }
  else {
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dd80();
    _objc_release(uVar7);
    dVar29 = (dStack_b8 - dVar13) - dVar20;
    if (dVar29 <= dVar19) {
      dVar19 = dVar29;
    }
  }
  dVar31 = dVar14 + dVar30 + dVar16 + dVar31 * 2.0 + dVar15 + param_3;
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdfca0();
  _objc_release(uVar7);
  dVar29 = param_3;
  if (*(char *)(param_5 + (long)_DAT_1127632bc) == '\0') {
    dVar29 = dVar30;
  }
  func_0x00010c19f0e0(dVar32,dVar27,dVar19,dVar29,*(undefined8 *)(param_5 + (long)_DAT_112763300));
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c12f740();
  _objc_release(uVar7);
  if ((int)uVar3 == 0) {
    dVar29 = ((dVar21 - dVar13) + -14.0) - dVar20;
  }
  else {
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    dVar29 = (dStack_b8 - dVar13) - dVar29;
    _objc_release(uVar7);
  }
  func_0x00010c19f0e0(dVar29,dVar27,dVar13,param_3,*(undefined8 *)(param_5 + (long)_DAT_112763304));
  dVar28 = dVar28 + dVar26;
  param_1 = param_1 + dVar28;
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6560();
  param_1 = param_1 + dVar28;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  dVar20 = dVar28;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  dVar29 = param_1 + dVar20;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar32 = dVar20;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar28,dVar29,dVar20,dVar32 - param_1);
  _objc_release(uVar7);
  dVar20 = dVar31 * 0.5;
  dVar28 = dVar20 + 0.0;
  func_0x00010b816218(dVar20);
  dVar32 = (double)(long)((dVar17 + dStack_b8 * 0.5) * dVar20) / dVar20;
  func_0x00010b816218();
  lVar11 = (long)_DAT_1127632f8;
  func_0x00010c17a6a0(dVar32,(double)(long)(dVar28 * dVar20) / dVar20,
                      *(undefined8 *)(param_5 + lVar11));
  _CGRectIntegral(0,0,dStack_b8,dVar31);
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar11));
  uVar3 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar7 = uVar3;
  if ((int)uVar4 == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar3);
  func_0x00010c2010a0(*(undefined8 *)(param_5 + lVar11));
  uVar10 = *(undefined8 *)(param_5 + lVar11);
  uVar3 = uVar7;
  func_0x00010c0f64e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c1842c0(dStack_b8,dVar31,uVar10);
  _objc_release(uVar3);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c12f740();
  _objc_release(uVar7);
  if ((int)uVar3 != 0) {
    func_0x00010c2010a0(*(undefined8 *)(param_5 + lVar11));
    func_0x00010bdc92e0(dStack_b8,dVar31,param_5);
  }
  dVar30 = dVar30 + dVar14;
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  dVar30 = dVar30 + dVar14;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c12f740();
  dVar20 = 0.0;
  if ((int)uVar3 == 0) {
    dVar20 = dVar30;
  }
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c12f740();
  dVar32 = dVar31;
  if ((uVar3 & 1) == 0) {
    uVar3 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6700();
    dVar32 = dVar16 + dVar14 * 2.0;
    _objc_release(uVar3);
  }
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a50e0();
  _objc_release(uVar7);
  lVar11 = (long)_DAT_11276330c;
  dVar28 = dVar20;
  func_0x00010c19f0e0(0,dVar20,dVar14,dVar32,*(undefined8 *)(param_5 + lVar11));
  uVar7 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234260();
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar11));
  _objc_release(uVar7);
  if ((*(byte *)(param_5 + (long)_DAT_1127632d4) & 1) == 0) {
    uVar7 = param_5;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c12f740();
    _objc_release(uVar7);
    dVar28 = (dVar31 + -32.0) * 0.5;
    if ((int)uVar3 != 0) {
      dVar28 = (dVar31 + -32.0) * 0.5 + dVar20 + 0.0;
    }
    func_0x00010c19f0e0(0xc030000000000000,dVar28,0x4040000000000000,0x4040000000000000,
                        *(undefined8 *)(param_5 + (long)_DAT_1127632d0));
  }
  uVar7 = param_5;
  func_0x00010c29d560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6740();
  dVar32 = dVar28 + 0.0;
  _objc_release(uVar7);
  uVar7 = param_5;
  dVar20 = param_2;
  func_0x00010c29d560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6740();
  dVar20 = param_2 + dVar30 + dVar20;
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010c29d560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6740();
  dVar28 = dStack_b8 - dVar28;
  _objc_release(uVar7);
  if ((int)uVar6 == 0) {
    uVar6 = param_5;
    func_0x00010c0f6720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar32,dVar20,dVar28,dVar25);
    _objc_release(uVar6);
    uVar10 = *(undefined8 *)(param_5 + (long)_DAT_112763324);
    func_0x00010bfe6360(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    uVar6 = param_5;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c12f740();
    _objc_release(uVar6);
    dVar29 = dVar28;
    if (!bVar1 && (uVar7 & 1) == 0) {
      dVar29 = dVar28 - dVar12;
    }
    uVar6 = param_5;
    func_0x00010c0f6720(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar32,dVar20,dVar29,dVar25);
    _objc_release(uVar6);
    dVar21 = -16.0;
    dVar28 = dVar12 + -16.0;
    if (bVar1) {
      func_0x00010bf4c5c0();
      uVar6 = param_5;
      dVar32 = dVar21;
      func_0x00010c0f6720(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinX();
      dVar26 = dVar21;
      _CGRectGetMidX(dVar21,dVar20,dVar29,dVar25);
      dVar32 = dVar17 + dVar32 + dVar26;
      uVar7 = param_5;
      func_0x00010c0f6720(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      _CGRectGetMaxY(dVar21,dVar20,dVar29,dVar25);
      dVar20 = dVar26 + 0.0 + dVar21 + -8.0 + dVar24 * -0.5;
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = param_5;
      func_0x00010bf1ec20(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_112763324;
      uVar10 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar6);
      _objc_release(uVar10);
      _objc_release(uVar6);
    }
    else {
      dVar20 = dVar24;
      func_0x00010be1e360(dVar12,dVar24,dVar17,dStack_b8,dVar18,dStack_160,param_5);
      lVar11 = (long)_DAT_112763324;
      dVar32 = dVar12;
    }
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(0,0,dVar28,dVar24);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0();
    dVar25 = dVar24;
  }
  _objc_release(uVar10);
  uVar6 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c11edc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar6);
  dVar21 = dVar32;
  dVar26 = dVar20;
  dVar29 = dVar28;
  if (uVar7 != 0) {
    uVar6 = param_5;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c11edc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c11ec80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126cb4c0;
    _objc_opt_class(PTR_PTR_1126cb4c0);
    uVar7 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    uVar6 = uVar3;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
    if (uVar6 == 0) {
      dVar32 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar20 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      dVar28 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    }
    else {
      func_0x00010c0bafa0(uVar3);
    }
    dVar21 = dVar20 + 5.0;
    dVar26 = dVar30 + dVar32;
    dVar29 = (dVar23 - dVar20) - dVar25;
    dVar25 = (param_2 - dVar32) - dVar28;
    func_0x00010c19f0e0(dVar21,dVar26,dVar29,dVar25,*(undefined8 *)(param_5 + (long)_DAT_112763330))
    ;
    _objc_release(uVar6);
  }
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120ec0();
  dVar20 = dVar21;
  _objc_release(uVar6);
  lVar11 = (long)_DAT_112763310;
  uVar6 = *(ulong *)(param_5 + lVar11);
  func_0x00010c074c20();
  if ((uVar6 & 1) == 0) {
    dVar20 = dVar17;
    dVar26 = dVar31;
    dVar29 = dStack_148;
    dVar25 = dVar21;
    func_0x00010c19f0e0(dVar17,dVar31,dStack_148,dVar21,*(undefined8 *)(param_5 + lVar11));
  }
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6660();
  dVar23 = dVar20;
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c0cb300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6660();
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c253300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  if (dVar23 <= 0.0) {
    uVar3 = uVar6;
    func_0x00010c06f880();
    _objc_release(uVar6);
    if ((int)uVar3 != 0) {
      func_0x00010c253300(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      goto LAB_10704ed94;
    }
  }
  else {
    uVar3 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    _objc_release(uVar6);
    dVar26 = dVar31 + dVar21;
    dVar29 = dVar22 + dVar17 * -2.0;
    func_0x00010c253300(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar25 = dVar20;
    func_0x00010c19f0e0(dVar17,dVar26,dVar29,dVar20);
LAB_10704ed94:
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  dVar31 = dVar31 + dVar21;
  dVar20 = dVar31 + dVar20;
  uVar6 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf19480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar5);
  uVar6 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar3 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf19480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126cb4c8;
  _objc_opt_class(PTR_PTR_1126cb4c8);
  uVar9 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar9 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar9 = param_5;
  if (uVar3 == 0) {
    if (uVar6 != 0) {
      uVar4 = param_5;
      func_0x00010c0f6460();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar8);
      _objc_release(uVar4);
      lVar11 = (long)_DAT_11276331c;
      uVar10 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_5 + (long)_DAT_112763320);
      func_0x00010bfe6360(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar10);
      func_0x00010c0bafa0(uVar7);
      dVar22 = dVar22 - dVar26;
      dStack_148 = dVar22 - dVar25;
      func_0x00010c0cb300(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6440();
      dVar29 = (dVar22 - dVar31) - dVar29;
      uVar7 = *(ulong *)(param_5 + lVar11);
      dVar23 = dVar26;
      goto LAB_10704f020;
    }
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6440();
    dVar29 = dVar31;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c0f6460(param_5);
    _objc_retainAutoreleasedReturnValue();
    if (dVar31 <= 0.0) {
      uVar4 = uVar7;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      _objc_release(uVar7);
      uVar10 = *(undefined8 *)(param_5 + (long)_DAT_11276331c);
      func_0x00010bfe6360(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar10);
      uVar9 = *(ulong *)(param_5 + (long)_DAT_112763320);
      func_0x00010bfe6360(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      goto LAB_10704f04c;
    }
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_5 + (long)_DAT_11276331c);
    func_0x00010bfe6360(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_5 + (long)_DAT_112763320);
    func_0x00010bfe6360(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar10);
    uVar7 = param_5;
    func_0x00010bf1ec20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar29 = dVar29 - dStack_148;
    dVar23 = dVar29 * 0.5;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6440();
    _objc_release(uVar7);
    func_0x00010c0f6460(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar26 = dVar20;
  }
  else {
    uVar7 = param_5;
    func_0x00010c0f6460();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_5 + (long)_DAT_11276331c);
    func_0x00010bfe6360(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar10);
    lVar11 = (long)_DAT_112763320;
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar10);
    func_0x00010c0bafa0(uVar4);
    dVar22 = dVar22 - dVar26;
    dStack_148 = dVar22 - dVar25;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6440();
    dVar29 = (dVar22 - dVar31) - dVar29;
    uVar7 = *(ulong *)(param_5 + lVar11);
    dVar23 = dVar26;
LAB_10704f020:
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    dVar26 = dVar20 + dVar31;
  }
  func_0x00010c19f0e0(dVar23,dVar26,dStack_148,dVar29);
  _objc_release(uVar7);
LAB_10704f04c:
  _objc_release(uVar9);
  uVar7 = param_5;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c1050e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  lVar11 = (long)_DAT_112763328;
  uVar7 = *(ulong *)(param_5 + lVar11);
  if (uVar4 == 0) {
    func_0x00010bfe6360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar7);
    dVar23 = 4.0;
    uVar7 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6440();
    dVar20 = dVar20 + 4.0 + dVar23;
    uVar4 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105120();
    uVar9 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105120();
    uVar10 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0,dVar20,dVar23,dVar26);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  return;
}



/* Entry: 10704f37c; end: 10704f64b; -[SCMessageChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704f37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f8638;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setViewModel__1126663d8,param_3);
  uVar2 = param_3;
  func_0x00010c233840();
  lVar3 = param_1;
  func_0x00010bfb3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    lVar4 = lVar3;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfb3840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f740(param_3);
    func_0x00010c1ea5c0(lVar4);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f740();
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_1127632f8));
  _objc_release(puVar5);
  lVar3 = param_1;
  func_0x00010c0cb300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2335e0();
  lVar4 = param_1;
  func_0x00010c0cb300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234240();
  func_0x00010be8e220(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bee21a0(param_1);
  func_0x00010bde5660(param_1);
  uVar2 = param_3;
  func_0x00010c11edc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bede440(param_1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5d020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6500(param_1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf19480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2620(param_1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1050e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1050e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd8e0(param_1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_1);
  func_0x00010c12f780(param_1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10704f64c; end: 10704f797; -[SCMessageChatTableViewCell _updateQuotedMessageViewWithRenderableViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704f64c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar6 = (long)_DAT_112763330;
  lVar4 = *(long *)(param_1 + lVar6);
  if (uVar1 == 0) {
    func_0x00010c1a7f60();
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126cb540;
      _objc_alloc();
      lVar4 = param_1 + _DAT_1127632b8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c061b40();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar2;
      _objc_release(uVar5);
      _objc_release(lVar4);
      func_0x00010c066fe0(*(undefined8 *)(param_1 + _DAT_1127632f8));
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar2);
      lVar4 = *(long *)(param_1 + lVar6);
    }
    func_0x00010c1a7f60(lVar4);
    func_0x00010c1835a0(*(undefined8 *)(param_1 + lVar6));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704f798; end: 10704f833; -[SCMessageChatTableViewCell _onTapQuotedMessageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704f798(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11edc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_112763334;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7cfc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10704f834; end: 10704f9fb; -[SCMessageChatTableViewCell _updateAccessoryWithContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704f834(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126cb4c8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  if (uVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112763320);
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11276331c;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    if (uVar1 == 0) {
      func_0x00010bfe6360(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1835a0();
    }
  }
  else {
    lVar6 = (long)_DAT_112763320;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276331c);
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209100();
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10704f9fc; end: 10704faef; -[SCMessageChatTableViewCell _updateCtaAccessoryWithContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704f9fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112763324);
    func_0x00010bfe6360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010beb3320(param_1);
    lVar5 = (long)_DAT_112763324;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835a0();
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10704faf0; end: 10704fc33; -[SCMessageChatTableViewCell _updatePostSnapActions:previousPostSnapActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704faf0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_4 == param_3) {
    _objc_release(param_3);
    uVar3 = param_4;
  }
  else if (param_3 == 0) {
    _objc_release();
    uVar3 = *(ulong *)(param_1 + _DAT_112763328);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    uVar3 = param_4;
    func_0x00010c071ae0(param_4,param_2,param_3);
    _objc_release(param_3);
    _objc_release(param_4);
    if ((uVar3 & 1) != 0) goto LAB_10704fc14;
    uVar1 = param_3;
    FUN_1070bb3f4(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = (long)_DAT_112763328;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47aa0();
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    param_3 = uVar1;
  }
  _objc_release(uVar3);
LAB_10704fc14:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10704fc34; end: 10704fc6b; -[SCMessageChatTableViewCell setIsScrollViewScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704fc34(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112763338) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112763338) = (char)param_3;
  if (*(double *)(param_1 + _DAT_1127632f4) != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateUpdateTimeLabelVisibilit_112550668)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee21b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeLabelVisibility_112596210);
  return;
}



/* Entry: 10704fc6c; end: 10704fc93; -[SCMessageChatTableViewCell _updateTimeLabelVisibility] */

void FUN_10704fc6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb4180();
                    /* WARNING: Could not recover jumptable at 0x00010bee21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeLabelVisibility__112596218,uVar1);
  return;
}



/* Entry: 10704fc94; end: 10704fccb; -[SCMessageChatTableViewCell _updateTimeLabelVisibility:] */

void FUN_10704fc94(undefined8 param_1)

{
  func_0x00010c26f420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704fccc; end: 10704fd23; -[SCMessageChatTableViewCell _shouldHideTimeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10704fccc(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c234240();
  if ((int)lVar2 == 0) {
    bVar3 = 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + _DAT_112763338) ^ 1;
  }
  _objc_release(lVar1);
  return bVar3 & 1;
}



/* Entry: 10704fd24; end: 10704fd83; -[SCMessageChatTableViewCell _animateUpdateTimeLabelVisibility] */

void FUN_10704fd24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb4180();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateHideTimestamps_1125504c8);
    return;
  }
  uVar1 = param_1;
  func_0x00010c26f420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeLabelVisibility__112596218,0);
  return;
}



/* Entry: 10704fd84; end: 10704fe0b; -[SCMessageChatTableViewCell _animateHideTimestamps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704fd84(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10704fe0c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10704fe44;
  puStack_48 = &UNK_110841f20;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010bf03420(*(undefined8 *)(param_1 + _DAT_1127632f4),PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 10704fe0c; end: 10704fe7f;  */

void FUN_10704fe0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26f420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704fe80; end: 107050017; -[SCMessageChatTableViewCell _getCtaCenter:payloadContainerViewX:payloadContainerViewWidth:messageContentWidthForCta:margins:shouldShrinkToFitCta:] */

undefined1  [16]
FUN_10704fe80(double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
             long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar4 = 0.5;
  dVar5 = param_1 * 0.5;
  param_3 = param_3 + dVar5;
  lVar1 = param_6;
  dVar6 = param_4;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c12f740();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar2 = param_6;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = param_6;
      func_0x00010c0cb300(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6540();
      param_5 = param_5 + dVar4;
      _objc_release(lVar2);
    }
    else {
      func_0x00010c26e640(lVar2);
      dVar4 = 9.0;
      param_5 = param_1 + 9.0;
    }
    _objc_release(lVar1);
    lVar1 = param_6;
    func_0x00010c29d560(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6740();
    lVar2 = param_6;
    func_0x00010c29d560(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6740();
    param_1 = dVar4 + dVar6;
    param_4 = param_3 + param_5 + param_1;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    param_4 = param_4 + param_3;
  }
  lVar1 = param_6;
  func_0x00010c0f6720(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348c0();
  dVar6 = param_1;
  _objc_release(lVar1);
  func_0x00010bf4dce0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar6 = dVar6 - dVar5;
  _objc_release(param_6);
  if (dVar6 <= param_4) {
    param_4 = dVar6;
  }
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 107050018; end: 10705001b; -[SCMessageChatTableViewCell messageChatViewModel] */

void FUN_107050018(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 10705001c; end: 10705003f; -[SCMessageChatTableViewCell renderBody] */

void FUN_10705001c(undefined8 param_1)

{
  func_0x00010c12fe40();
                    /* WARNING: Could not recover jumptable at 0x00010c12fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_renderMetadata_112629990);
  return;
}



/* Entry: 107050040; end: 107050043; -[SCMessageChatTableViewCell renderPayload] */

void FUN_107050040(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_renderRoundCorners_112629a08);
  return;
}



/* Entry: 107050044; end: 10705015f; -[SCMessageChatTableViewCell renderRoundCorners] */

void FUN_107050044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010010fab4();
  uVar3 = uVar1;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
  func_0x00010bea12a0(param_2);
  uVar1 = param_2;
  func_0x00010c15de80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184280();
  _objc_release(uVar1);
  func_0x00010bf525e0(uVar3);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c15de80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c0cb300(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c15dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15de80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107050160; end: 1070501a7; -[SCMessageChatTableViewCell _statusMessageLabelVerticalOffset] */

undefined8 FUN_107050160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c234460();
  _objc_release(param_1);
  uVar2 = 0x402e000000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1070501a8; end: 10705021f; -[SCMessageChatTableViewCell _senderLineCornerMask] */

ulong FUN_1070501a8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c234240();
  _objc_release(uVar1);
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf20220();
  _objc_release(param_1);
  uVar1 = uVar2 & 0xffffffff | 4;
  if ((int)uVar3 == 0) {
    uVar1 = uVar2 & 0xffffffff;
  }
  return uVar1;
}



/* Entry: 107050220; end: 107050297; -[SCMessageChatTableViewCell renderMetadata] */

void FUN_107050220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c26f420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107050298; end: 10705051b; -[SCMessageChatTableViewCell _configureReactionsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050298(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c07bba0();
  _objc_release(uVar2);
  lVar15 = (long)_DAT_112763310;
  uVar16 = *(undefined8 *)(param_1 + lVar15);
  if ((int)uVar4 != 0) {
    uVar2 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c120dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c15df40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920();
    uVar10 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f740();
    uVar11 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076100();
    uVar12 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c1209c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071520();
    uVar14 = param_1;
    func_0x00010c1209a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7da0(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar16 = *(undefined8 *)(param_1 + lVar15);
  }
  func_0x00010c1a7f60(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705051c; end: 1070505a3; -[SCMessageChatTableViewCell _didTapOnReactionsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705051c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_2,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112763310));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1070505a4; end: 1070505c3; -[SCMessageChatTableViewCell setContentIsFocused:focusedMessageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070505a4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112763310),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1070505c4; end: 107050693; -[SCMessageChatTableViewCell payloadHeight] */

double FUN_1070505c4(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11eba0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6480();
  uVar2 = param_3;
  dVar3 = param_1;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6740();
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar4 = 0.0;
  dVar5 = 0.0;
  if (0.0 <= param_1 + dVar3) {
    dVar5 = param_1 + dVar3;
  }
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6700();
  _objc_release(param_3);
  return param_2 + dVar5 + dVar4 * 2.0;
}



/* Entry: 107050694; end: 10705069b; -[SCMessageChatTableViewCell thumbnailViewForMediaId:] */

undefined8 FUN_107050694(void)

{
  return 0;
}



/* Entry: 10705069c; end: 1070506ff; -[SCMessageChatTableViewCell contentFrameInPayloadView] */

undefined8 FUN_10705069c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0f6720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107050700; end: 10705077b; -[SCMessageChatTableViewCell shouldHandleDoubleTapGesture:] */

ulong FUN_107050700(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 1;
  }
  else {
    FUN_10704b28c(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10705077c; end: 10705080b; -[SCMessageChatTableViewCell _animateChatReplyInitiated] */

void FUN_10705077c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10705080c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107050814;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fb99999a0000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20006,
                      &puStack_38,&puStack_60);
  return;
}



/* Entry: 10705080c; end: 107050813;  */

void FUN_10705080c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateChatReplyIconEnlarge_112550420);
  return;
}



/* Entry: 107050814; end: 1070508b3;  */

void FUN_107050814(long param_1,int param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1070508b4;
    puStack_20 = &UNK_110842e18;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1070508bc;
    puStack_48 = &UNK_110841f20;
    uStack_18 = uStack_40;
    func_0x00010bf03440(0x3fc99999a0000000,0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,0x20006,&puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 1070508b4; end: 1070508eb;  */

void FUN_1070508b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateChatReplyIconShrink_112550428);
  return;
}



/* Entry: 1070508ec; end: 107050a4b; -[SCMessageChatTableViewCell animateChatReplyTransformWithCurrentOffset:iconScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070508ec(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _CGAffineTransformMakeTranslation(&uStack_70,param_1,0);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  lVar1 = param_3;
  func_0x00010c0f6520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010becec00(param_3);
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_a0,param_2,param_2,&uStack_d0);
  _CGAffineTransformMakeTranslation(&uStack_d0,param_1 * 0.5,0);
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
  uStack_48 = uStack_a8;
  uStack_50 = uStack_b0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  _CGAffineTransformConcat(&uStack_100,&uStack_d0,&uStack_130);
  lVar1 = (long)_DAT_1127632d0;
  uStack_c8 = uStack_f8;
  uStack_d0 = uStack_100;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  func_0x00010c219960(*(undefined8 *)(param_3 + lVar1));
  func_0x00010c1677c0(param_2,*(undefined8 *)(param_3 + lVar1));
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar1));
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar1));
  return;
}



/* Entry: 107050a4c; end: 107050adf; -[SCMessageChatTableViewCell _animateSwipeGestureReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050a4c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107050ae0;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107050ae8;
  puStack_48 = &UNK_110841f20;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010bf03440(*(undefined8 *)(param_1 + _DAT_1127632e4),0,PTR__OBJC_CLASS___UIView_1126aec20
                      ,param_2,0x20006,&puStack_38,&puStack_60);
  return;
}



/* Entry: 107050ae0; end: 107050ae7;  */

void FUN_107050ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf032f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_animateViewCellSlideBack_11259e660);
  return;
}



/* Entry: 107050ae8; end: 107050b17;  */

void FUN_107050ae8(long param_1,int param_2)

{
  if (param_2 != 0) {
    func_0x00010be92680(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bfd1050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_handleEndOfPanAnimation_1125d1db8);
    return;
  }
  return;
}



/* Entry: 107050b18; end: 107050baf; -[SCMessageChatTableViewCell _animateChatReplyIconEnlarge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050b18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = (long)_DAT_1127632d0;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127632cc));
  if (*(long *)(param_1 + lVar1) == 0) {
    uVar2 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  _CGAffineTransformScale(&uStack_50,0x3ff6666660000000,0x3ff6666660000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(uVar2,param_2,&uStack_80);
  return;
}



/* Entry: 107050bb0; end: 107050c37; -[SCMessageChatTableViewCell _animateChatReplyIconShrink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050bb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = (long)_DAT_1127632d0;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  _CGAffineTransformScale(&uStack_50,0x3fe6db6dbd6343ed,0x3fe6db6dbd6343ed,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(uVar1,param_2,&uStack_80);
  return;
}



/* Entry: 107050c38; end: 107050d1b; -[SCMessageChatTableViewCell animateViewCellSlideBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050c38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010c0f6520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  func_0x00010c219960();
  _objc_release(lVar1);
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  func_0x00010becec00(param_1);
  lVar1 = (long)_DAT_1127632d0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
  _CGAffineTransformMakeScale(&uStack_50,0x3f847ae147ae147b,0x3f847ae147ae147b);
  uStack_b0 = uVar2;
  uStack_a8 = uVar4;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  uStack_88 = uVar5;
  _CGAffineTransformConcat(&uStack_80,&uStack_50,&uStack_b0);
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_28 = uStack_58;
  uStack_30 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 107050d1c; end: 107050e13; -[SCMessageChatTableViewCell resetPanAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050d1c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127632d0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0f6520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112763324);
  func_0x00010bfe6360(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107050e14; end: 107050e6f; -[SCMessageChatTableViewCell _chatReplyPopAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050e14(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010bdcaa40(param_1);
  *(undefined1 *)(param_1 + _DAT_1127632e0) = 1;
  return;
}



/* Entry: 107050e70; end: 107050f33; -[SCMessageChatTableViewCell handleEndOfPanAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050e70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_1127632d0),param_2,&uStack_60);
  lVar1 = param_1;
  func_0x00010c0f6520(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960();
  _objc_release(lVar1);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010becec00(param_1,param_2,&uStack_60);
  *(undefined1 *)(param_1 + _DAT_1127632d4) = 0;
  *(undefined1 *)(param_1 + _DAT_1127632d8) = 0;
  return;
}



/* Entry: 107050f34; end: 107050f5f; -[SCMessageChatTableViewCell _resetChatReply] */

void FUN_107050f34(undefined8 param_1)

{
  func_0x00010be92680();
  func_0x00010c139180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfd1050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleEndOfPanAnimation_1125d1db8);
  return;
}



/* Entry: 107050f60; end: 107051093; -[SCMessageChatTableViewCell _handleGetQuotedMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107050f60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      puVar3 = PTR_PTR_1126b5f88;
      _objc_alloc(PTR_PTR_1126b5f88);
      func_0x00010c03c9c0();
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_1127632c4));
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107051094; end: 1070510db; -[SCMessageChatTableViewCell _resetChatReplyIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051094(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127632d0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + _DAT_1127632c8));
  return;
}



/* Entry: 1070510dc; end: 107051183; -[SCMessageChatTableViewCell _transformCta:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070510dc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112763324;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219960();
      _objc_release(uVar4);
    }
  }
  return;
}



/* Entry: 107051184; end: 1070511f7; -[SCMessageChatTableViewCell handleVerticalScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051184(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e99638;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e99658;
  }
  lVar2 = (long)_DAT_1127632ec;
  _objc_retain(ppuVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c289720();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070511f8; end: 107051277; -[SCMessageChatTableViewCell _ctaRendersOverMessage] */

undefined8 FUN_1070511f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf5d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a5470);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c130920(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107051278; end: 10705131f; -[SCMessageChatTableViewCell _shouldDisplayCta] */

uint FUN_107051278(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5d020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010c0cb300(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf5d020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe1300();
    uVar5 = (uint)lVar4 ^ 1;
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar5;
}



/* Entry: 107051320; end: 10705144f; -[SCMessageChatTableViewCell applyTransformToPayloadContent:] */

void FUN_107051320(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    uVar2 = param_1;
    func_0x00010c15de80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar2);
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    uVar2 = param_1;
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar2);
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    func_0x00010c11ed60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    func_0x00010c0f6520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c219960();
  _objc_release(uVar1);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  func_0x00010becec00(param_1,param_2,&uStack_60);
  return;
}



/* Entry: 107051450; end: 1070515c3; -[SCMessageChatTableViewCell removePayloadContentAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051450(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c0f6520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c15de80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c11ed60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf1ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763324);
  func_0x00010bfe6360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1070515c4; end: 10705168f; -[SCMessageChatTableViewCell _getTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070515c4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276333c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
    while (PTR__OBJC_CLASS___UITableView_1126aed40 = puVar3, uVar2 != 0) {
      _objc_opt_class(puVar3);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) != 0) break;
      uVar4 = uVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar4;
      puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
    }
    _objc_storeWeak(param_1 + lVar5,uVar2);
    _objc_retain();
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107051690; end: 1070517d3; -[SCMessageChatTableViewCell _neighboringCellAtOffset:] */

void FUN_107051690(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010be23400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar6 = 0;
    goto LAB_1070517b4;
  }
  uVar1 = param_1;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010c142240(uVar1);
    func_0x00010c1554e0(uVar1);
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c142240();
    if ((long)puVar3 < 0) {
LAB_107051798:
      uVar6 = 0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c142240();
      func_0x00010c1554e0(puVar2);
      uVar6 = param_1;
      func_0x00010c0df2a0();
      if ((long)uVar6 <= (long)puVar3) goto LAB_107051798;
      uVar4 = param_1;
      func_0x00010bf33b80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126cb4b0;
      _objc_opt_class(PTR_PTR_1126cb4b0);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar6 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
LAB_1070517b4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1070517d4; end: 1070518c7; -[SCMessageChatTableViewCell _cornerRadiiFromMask:originalRadii:] */

void FUN_1070517d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_5);
  uVar4 = 0;
  if ((param_4 & 1) != 0) {
    func_0x00010c2745a0(param_5);
    uVar4 = param_1;
  }
  uVar3 = 0;
  if ((param_4 >> 1 & 1) != 0) {
    func_0x00010c274880(param_5);
    uVar3 = param_1;
  }
  uVar6 = 0;
  if ((param_4 >> 2 & 1) != 0) {
    func_0x00010bf20260(param_5);
    uVar6 = param_1;
  }
  uVar5 = 0;
  if ((param_4 >> 3 & 1) != 0) {
    func_0x00010bf20420(param_5);
    uVar5 = param_1;
  }
  puVar1 = PTR_PTR_1126d4328;
  _objc_alloc(PTR_PTR_1126d4328);
  func_0x00010c054260(uVar4,uVar3,uVar6,uVar5);
  puVar2 = PTR_PTR_1126d4330;
  func_0x00010bfb23a0(PTR_PTR_1126d4330,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070518c8; end: 107051a67; -[SCMessageChatTableViewCell _calculateCondensedCorners:previousWidth:nextWidth:] */

ulong FUN_1070518c8(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010010fab4();
  uVar1 = param_4;
  if ((int)uVar8 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar8 = uVar1;
  func_0x00010c0f64e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf880();
  _objc_release(uVar8);
  uVar9 = puStack_68[3];
  bVar5 = true;
  if ((param_2 + -5.0 <= param_1) && (bVar5 = false, !NAN(param_1) && !NAN(param_2))) {
    bVar5 = param_1 == param_2;
  }
  uVar4 = uVar9 & 0xfffffffffffffffc;
  if (!bVar5) {
    uVar4 = uVar9 | 2;
  }
  uVar2 = uVar9;
  if ((uVar9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar9;
  if (0.0 < param_2) {
    uVar4 = uVar2;
  }
  dVar10 = param_1 + 5.0;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (param_3 != param_1) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(param_3) && !NAN(dVar10)) {
      bVar5 = param_3 < dVar10;
      bVar6 = param_3 == dVar10;
      bVar7 = false;
    }
  }
  uVar2 = 0;
  if (bVar6 || bVar5 != bVar7) {
    uVar2 = 8;
  }
  uVar3 = uVar4;
  if ((uVar9 & 4) == 0) {
    uVar3 = uVar4 & 0xfffffffffffffff7 | uVar2;
  }
  if (0.0 < param_3) {
    uVar4 = uVar3;
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107051a68; end: 107051a7b;  */

void FUN_107051a68(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xffffffffffffffff;
  return;
}



/* Entry: 107051a7c; end: 107051aab;  */

void FUN_107051a7c(long param_1,undefined8 param_2)

{
  FUN_107051aac();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107051aac; end: 107051b33;  */

byte FUN_107051aac(double param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  
  _objc_retain();
  func_0x00010c2745a0(param_2);
  dVar3 = param_1;
  func_0x00010c274880(param_2);
  bVar1 = 2;
  if (0.0 < param_1) {
    bVar1 = 3;
  }
  if (dVar3 <= 0.0) {
    bVar1 = 0.0 < param_1;
  }
  func_0x00010bf20260(param_2);
  bVar2 = bVar1 | 4;
  if (dVar3 <= 0.0) {
    bVar2 = bVar1;
  }
  func_0x00010bf20420(param_2);
  _objc_release(param_2);
  bVar1 = bVar2 | 8;
  if (dVar3 <= 0.0) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 107051b34; end: 107051e1b; -[SCMessageChatTableViewCell _adjustCornersBasedOnPhysicalWidths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107051b34(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = param_4;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010010fab4();
  lVar1 = lVar3;
  if ((int)lVar6 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  if (lVar1 == 0) goto LAB_107051db0;
  lVar6 = (long)_DAT_1127632f8;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar6));
  if (param_3 <= 0.0) goto LAB_107051db0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_107051e1c;
  uStack_90 = 0x107051e2c;
  uStack_88 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  dVar7 = param_3;
  func_0x00010c0f64e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf880();
  _objc_release(lVar3);
  uVar4 = (uint)puStack_c8[3];
  if ((~uVar4 & 5) != 0) {
    if ((puStack_c8[3] & 1) == 0) {
      lVar3 = param_4;
      func_0x00010be628c0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar4 >> 2 & 1) != 0) goto LAB_107051cb0;
LAB_107051cc0:
      lVar5 = param_4;
      func_0x00010be628c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = 0;
      if ((uVar4 >> 2 & 1) == 0) goto LAB_107051cc0;
LAB_107051cb0:
      lVar5 = 0;
    }
    dVar8 = dVar7;
    dVar9 = 0.0;
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010c0f6520(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar8 = dVar7;
      _objc_release(lVar2);
      dVar9 = dVar7;
    }
    dVar7 = 0.0;
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x00010c0f6520(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(lVar2);
      dVar7 = dVar8;
    }
    func_0x00010bdd8520(param_3,dVar9,dVar7,param_4);
    lVar2 = param_4;
    func_0x00010bde9d00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842c0(param_1,param_2,*(undefined8 *)(param_4 + lVar6));
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
LAB_107051db0:
  _objc_release(lVar1);
  return;
}



/* Entry: 107051e1c; end: 107051e33;  */

void FUN_107051e1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107051e34; end: 107051ea3;  */

void FUN_107051e34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d4328;
  _objc_alloc();
  func_0x00010c054260(param_2,param_2,param_2,param_2);
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 0xffffffffffffffff;
  return;
}


