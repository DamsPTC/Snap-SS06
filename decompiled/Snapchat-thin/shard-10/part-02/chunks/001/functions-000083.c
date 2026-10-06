/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b42554; end: 107b42563; -[SCOperaVideoLayerViewController overridePauseStateToResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42554(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276abe8) = 0;
  return;
}



/* Entry: 107b42564; end: 107b4256f; -[SCOperaVideoLayerViewController resume] */

void FUN_107b42564(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resumeInternal__1125830e0,
             &PTR____CFConstantStringClassReference_110eaeab8);
  return;
}



/* Entry: 107b42570; end: 107b4273f; -[SCOperaVideoLayerViewController _resumeInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c720();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c079ba0();
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    func_0x00010be74560(param_1);
    *(undefined1 *)(param_1 + _DAT_11276ac24) = 1;
    func_0x00010bdfff60(param_1);
    if (*(char *)(param_1 + _DAT_11276ac0c) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_11276ac0c) = 0;
      _objc_opt_class(param_1);
      lVar1 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_107b42740;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    }
  }
  else {
    _objc_opt_class();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b42740; end: 107b42747;  */

void FUN_107b42740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c100b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playerItemDidReachEnd_11261dcf0);
  return;
}



/* Entry: 107b42748; end: 107b428f7; -[SCOperaVideoLayerViewController overridePlaybackToLastPositionForResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42748(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  _objc_opt_class();
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_11276abb8) == '\x01') {
    _objc_opt_class();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = param_1;
  func_0x00010be74ea0();
  if (lVar1 == 5) {
    lVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_48,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uStack_40 & 0x100000000) == 0) {
      _objc_opt_class(param_1);
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    else {
      func_0x00010be74f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1572c0();
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107b428f8; end: 107b42987; -[SCOperaVideoLayerViewController _initializePlayerViewIfNeededWithDebugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b428f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + _DAT_11276aba8) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276aba8) = 1;
    *(undefined1 *)(param_1 + _DAT_11276abb8) = 0;
    *(undefined1 *)(param_1 + _DAT_11276abbc) = 1;
    _objc_retain(param_3);
    func_0x00010bdf19e0(param_1);
    func_0x00010bea82a0(param_1,param_2,0);
    func_0x00010be4e400(param_1,param_2,param_3);
    _objc_release(param_3);
    *(undefined1 *)(param_1 + _DAT_11276ac14) = 1;
  }
  return;
}



/* Entry: 107b42988; end: 107b42aef; -[SCOperaVideoLayerViewController _play:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b42988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126c98e0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaead8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    func_0x00010be25d60(param_1,param_2,param_3);
    func_0x00010bdd0760(param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276abc4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e58a0();
    _objc_release(uVar5);
    lVar3 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec0000(param_1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(lVar3);
    func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaeaf8);
  }
  _objc_release(param_3);
  return lVar2 != 0;
}



/* Entry: 107b42af0; end: 107b4304b; -[SCOperaVideoLayerViewController _handleAssetMismatchIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b42af0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be74ea0();
  uVar2 = *(ulong *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar4 != 0) {
    lVar14 = (long)_DAT_11276abcc;
    lVar5 = *(long *)(param_1 + lVar14);
    if (lVar5 != 0) {
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c14d1a0(uVar4,param_2,lVar5);
      _objc_release(lVar5);
      if ((uVar3 & 1) == 0) {
        puVar7 = PTR_PTR_1126b9f00;
        func_0x00010c297660(PTR_PTR_1126b9f00,param_2,*(undefined8 *)(param_1 + lVar14));
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x000107de8c68();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(param_1 + lVar14);
        func_0x00010c0d5720();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x000107de8c68();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if ((lVar5 == 0) || (uVar3 == 0)) {
          _objc_opt_class(param_1);
          puVar1 = param_1;
          func_0x00010c0f0be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar1);
        }
        _objc_opt_class(param_1);
        uVar6 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0d5720(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        func_0x00010c0eaa40(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_1;
        func_0x00010c0f0be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar9);
        _objc_release(puVar1);
        _objc_release(uVar6);
        puVar1 = param_1;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c06b7e0();
        if (((int)puVar9 == 0) || (puVar7 == (undefined *)0x0)) {
          _objc_release(puVar1);
LAB_107b42f18:
          func_0x00010be953c0(param_1,param_2,0);
          puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b2348;
          func_0x00010c2348a0(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanFalse_11034ab60,puVar9);
          _objc_release(puVar9);
          if (puVar7 != (undefined *)0x0) {
            puVar9 = PTR_PTR_1126b2348;
            func_0x00010bfe6a20(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,puVar7,puVar9);
            _objc_release(puVar9);
          }
          puVar9 = PTR_PTR_1126b2348;
          func_0x00010bf9c400(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,lVar5,puVar9);
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126b2348;
          func_0x00010bef1aa0(PTR_PTR_1126b2348);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,uVar3,puVar9);
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126b2338;
          func_0x00010c0c4140(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04440(param_1,param_2,puVar9,puVar1);
          _objc_release(puVar9);
        }
        else {
          uVar2 = *(ulong *)(param_1 + _DAT_11276ab7c);
          func_0x00010bf4b900(uVar2,param_2,puVar7);
          _objc_release(puVar1);
          if ((uVar2 & 1) != 0) goto LAB_107b42f18;
          func_0x00010bec3640(param_1);
          puVar1 = PTR_PTR_1126b2338;
          func_0x00010c0c4140();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b2348;
          func_0x00010bfe6a20();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126b2348;
          puStack_a8 = puVar9;
          puStack_88 = puVar7;
          func_0x00010c2348a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = PTR____kCFBooleanTrue_11034ab68;
          puVar11 = PTR_PTR_1126b2348;
          puStack_a0 = puVar10;
          func_0x00010bf9c400();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126b2348;
          puStack_98 = puVar11;
          lStack_78 = lVar5;
          func_0x00010bef1aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_90 = puVar12;
          uStack_70 = uVar3;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,
                              &puStack_a8,4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04440(param_1,param_2,puVar1,puVar13);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(puVar1);
        _objc_release(lVar5);
        _objc_release(uVar3);
        goto LAB_107b42c7c;
      }
    }
  }
  _objc_opt_class(param_1);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c25c720();
  func_0x00010c0df6e0(puVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb06e1c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276abcc);
  func_0x00010c0d5720(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar9);
LAB_107b42c7c:
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126c98e0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = param_3;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110eaeb18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar5);
  func_0x00010bf73680(*(undefined8 *)(param_3 + _DAT_11276ac10),param_2,0);
  func_0x00010bf7bf20(*(undefined8 *)(param_3 + _DAT_11276abd4));
  uVar6 = *(undefined8 *)(param_3 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar6);
  _objc_opt_class(param_3);
  lVar5 = param_3;
  func_0x00010bdf8620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107b4304c; end: 107b4316b; -[SCOperaVideoLayerViewController _didRequestToPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4304c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c98e0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110eaeb18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10),param_2,0);
  func_0x00010bf7bf20(*(undefined8 *)(param_1 + _DAT_11276abd4));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  _objc_opt_class(param_1);
  lVar2 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b4316c; end: 107b43257; -[SCOperaVideoLayerViewController mediaIsBeingPreparedForDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b4316c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be5e860();
  _objc_opt_class(param_1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c720();
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a3c0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 107b43258; end: 107b434c3; -[SCOperaVideoLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b43258(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9f70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_teardown_112678538);
  func_0x00010be94400(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276ab64));
  *(undefined1 *)(param_1 + _DAT_11276ac2c) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abb8) = 0;
  *(undefined8 *)(param_1 + _DAT_11276ab30) = 0;
  *(undefined8 *)(param_1 + _DAT_11276ab34) = 0;
  *(undefined1 *)(param_1 + _DAT_11276ab1c) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ab38);
  *(undefined **)(param_1 + _DAT_11276ab38) = puVar1;
  _objc_release(uVar2);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276ab08));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276ab70));
  func_0x00010be8da80(param_1);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + _DAT_11276abd4));
  *(undefined8 *)(param_1 + _DAT_11276ab10) = 1;
  *(undefined8 *)(param_1 + _DAT_11276ab20) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + _DAT_11276ab24) = 0xbff0000000000000;
  lVar3 = param_1;
  func_0x00010c2a0fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dda40();
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_11276abf8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abf4) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abe4) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abb4) = 0;
  *(undefined1 *)(param_1 + _DAT_11276ac24) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abbc) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abd8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276abdc) = 0;
  func_0x00010bf2eb80(PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(param_1 + _DAT_11276abec) = 0;
  *(undefined8 *)(param_1 + _DAT_11276abf0) = 0;
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar3);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276abb0));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276abe0));
  func_0x00010bde0c60(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abac);
  *(undefined8 *)(param_1 + _DAT_11276abac) = 0;
  _objc_release(uVar2);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10));
  lVar3 = (long)_DAT_11276ac08;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3e60();
  _objc_release(uVar2);
  return;
}



/* Entry: 107b434c4; end: 107b435ef; -[SCOperaVideoLayerViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b434c4(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_opt_class();
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0efa0();
  uVar2 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(double *)(param_2 + (long)_DAT_11276ab24) = param_1;
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010c2a0fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2241a0((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    *(double *)(param_2 + (long)_DAT_11276ab20) = param_1;
  }
  return;
}



/* Entry: 107b435f0; end: 107b436fb; -[SCOperaVideoLayerViewController setMuted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b435f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0efa0();
  lVar3 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c2a0fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2b40();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276abc4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107b436fc; end: 107b4382f; -[SCOperaVideoLayerViewController fadeVolumeIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b436fc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_opt_class();
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0efa0();
  uVar2 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = (long)_DAT_11276ab24;
    *(undefined8 *)(param_2 + lVar4) = 0x3ff0000000000000;
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010c2a0fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    *(undefined8 *)(param_2 + (long)_DAT_11276ab20) = *(undefined8 *)(param_2 + lVar4);
  }
  return;
}



/* Entry: 107b43830; end: 107b4395f; -[SCOperaVideoLayerViewController fadeVolumeOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b43830(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_opt_class();
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0efa0();
  uVar2 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = (long)_DAT_11276ab24;
    *(undefined8 *)(param_2 + lVar4) = 0;
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010c2a0fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f9a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    *(undefined8 *)(param_2 + (long)_DAT_11276ab20) = *(undefined8 *)(param_2 + lVar4);
  }
  return;
}



/* Entry: 107b43960; end: 107b43967; -[SCOperaVideoLayerViewController supportsShareableMediaSnapshot] */

undefined8 FUN_107b43960(void)

{
  return 1;
}



/* Entry: 107b43968; end: 107b43b47; -[SCOperaVideoLayerViewController shareableMediaSnapshotWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b43968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined8 *)PTR__kCMTimeZero_110348670;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(param_1 + _DAT_11276ab28);
  }
  uStack_48 = puVar4[1];
  uStack_50 = *puVar4;
  uStack_40 = puVar4[2];
  _objc_release();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x107b43ab8;
  puStack_80 = &UNK_1108714c0;
  uStack_60 = uStack_48;
  uStack_68 = uStack_50;
  uStack_58 = uStack_40;
  lStack_78 = lVar1;
  puStack_70 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(param_3,param_2,&puStack_98);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_70);
  _objc_release(lStack_78);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b43b48; end: 107b43cff; -[SCOperaVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b43b48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if ((param_3 == 4) && ((*(byte *)(param_1 + _DAT_11276ac2c) & 1) != 0)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110eaeb58;
LAB_107b43bcc:
    func_0x00010befa560(param_1,param_2,ppuVar4);
  }
  else {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf80960();
    _objc_release(lVar1);
    if ((param_3 == 3) && ((int)lVar2 != 0)) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110eaeb78;
      goto LAB_107b43bcc;
    }
    if (1 < param_3 - 5U) {
LAB_107b43cf8:
      uVar5 = 0;
      goto LAB_107b43bd8;
    }
    lVar1 = param_1;
    func_0x00010be9d280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      if (((*(char *)(param_1 + _DAT_11276ab74) == '\x01') &&
          (lVar1 = param_1, func_0x00010beb6840(), (int)lVar1 != 0)) &&
         (*(long *)(param_1 + _DAT_11276ac04) == 0)) {
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010bf50060();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c22e260();
        _objc_release(lVar1);
        _objc_release(param_1);
        if ((int)lVar2 == 0) goto LAB_107b43bd4;
      }
      goto LAB_107b43cf8;
    }
    puVar3 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110eaeb98,
                        &PTR____CFConstantStringClassReference_110eaebb8);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
LAB_107b43bd4:
  uVar5 = 1;
LAB_107b43bd8:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 107b43d00; end: 107b43ea3; -[SCOperaVideoLayerViewController didTryPagingWhenPagingDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b43d00(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = param_1;
  if (((*(char *)(param_1 + (long)_DAT_11276ab74) == '\x01') &&
      (func_0x00010beb6840(), (int)uVar2 != 0)) && (*(long *)(param_1 + (long)_DAT_11276ac04) == 0))
  {
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf50060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22e260();
    _objc_release(uVar3);
    _objc_release();
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2727b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + (long)_DAT_11276abd4),
                 PTR_s_toggleControlsVisibilityAnimated_11267a410,1);
      return;
    }
  }
  iVar1 = (int)uVar2;
  func_0x0001007f8afc();
  if (iVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23e0c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if ((*(byte *)(param_1 + (long)_DAT_11276ab1c) & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4ffc0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar7 = (long)_DAT_11276abd4;
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0ff060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf01ae0();
      _objc_release(uVar5);
      if ((param_3 - 5U < 2) && ((int)uVar6 != 0)) {
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0ff060(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 107b43ea4; end: 107b4488b; -[SCOperaVideoLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b43ea4(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  _objc_retain(param_4);
  _objc_opt_class(param_2);
  lVar11 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar11);
  lVar11 = (long)_DAT_11276ab64;
  func_0x00010c28cbe0(*(undefined8 *)(param_2 + lVar11));
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010bf9f6a0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (uVar2 != 0) {
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010bf9f6a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(puVar5);
    func_0x00010bf9f980(param_2);
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010bf9f820(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (uVar2 != 0) {
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010bf9f820(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(puVar5);
    func_0x00010bf9f9a0(param_2);
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c0c5840(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (uVar2 != 0) {
    uVar2 = *(ulong *)(param_2 + lVar11);
    func_0x00010c077280();
    if ((uVar2 & 1) == 0) {
      func_0x00010bedea40(param_2);
    }
    else {
      func_0x00010be74ca0(param_2);
      pdVar1 = (double *)(param_2 + _DAT_11276ab28);
      dStack_88 = pdVar1[1];
      dVar14 = *pdVar1;
      dStack_80 = pdVar1[2];
      dStack_90 = dVar14;
      _CMTimeGetSeconds(&dStack_90);
      param_1 = param_1 - dVar14;
      if (param_1 < 0.1) {
        func_0x00010be6da60(param_2);
      }
    }
  }
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    uVar12 = *(undefined8 *)(param_2 + _DAT_11276abd4);
    func_0x00010bfb2c80(uVar3);
    param_1 = (double)SUB84(param_1,0);
    func_0x00010c2897e0(uVar12);
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010bf92040(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (uVar3 != 0) {
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010bf92040(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    *(byte *)(param_2 + _DAT_11276ac2c) = (byte)uVar4 ^ 1;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c29a540(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
LAB_107b442a0:
    _objc_release(puVar5);
  }
  else {
    lVar11 = param_2;
    func_0x00010beb6840();
    _objc_release(uVar3);
    _objc_release(puVar5);
    if ((int)lVar11 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010c29a540(PTR_PTR_1126c9410);
      fVar13 = SUB84(param_1,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      param_1 = (double)fVar13;
      _objc_release(uVar3);
      _objc_release(puVar5);
      puVar5 = *(undefined **)(param_2 + _DAT_11276abd4);
      func_0x00010c0ff060(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c285640();
      goto LAB_107b442a0;
    }
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    _objc_release(puVar5);
  }
  else {
    lVar11 = param_2;
    func_0x00010beb6840();
    _objc_release(uVar3);
    _objc_release(puVar5);
    if ((int)lVar11 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010beeec40(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      lVar11 = param_2;
      func_0x00010bf46560(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee8c0();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_107b4488c;
      puStack_a8 = &UNK_110845ce0;
      uStack_98 = (undefined1)uVar4;
      lStack_a0 = param_2;
      func_0x00010bf03400(puVar5);
      _objc_release(lVar11);
      if ((int)uVar4 == 0) {
        if (*(char *)(param_2 + _DAT_11276ac38) == '\x01') {
          _objc_opt_class(param_2);
          lVar11 = param_2;
          func_0x00010c0f0be0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          func_0x00010bea6320(param_2);
          func_0x00010be6da60(param_2);
        }
      }
      else {
        lVar11 = param_2;
        func_0x00010c29a520();
        *(char *)(param_2 + _DAT_11276ac38) = (char)lVar11;
        if ((int)lVar11 != 0) {
          _objc_opt_class(param_2);
          lVar11 = param_2;
          func_0x00010c0f0be0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          func_0x00010bea6320(param_2);
          _objc_opt_class(param_2);
          lVar11 = param_2;
          func_0x00010c0f0be0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          func_0x00010c0694c0(param_2);
        }
      }
    }
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010bfe9fa0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (uVar3 == 0) goto LAB_107b444dc;
  }
  else {
    _objc_release();
    _objc_release(puVar5);
  }
  func_0x00010bea82a0(param_2);
LAB_107b444dc:
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c157340(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 != 0) {
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c157380(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar7 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    if (uVar7 != 0) {
      func_0x00010c067ec0(uVar8);
    }
    func_0x00010bf885a0(uVar4);
    _CMTimeMake(&dStack_90,(long)param_1,1000);
    dStack_d8 = dStack_88;
    dStack_e0 = dStack_90;
    dStack_d0 = dStack_80;
    param_1 = dStack_90;
    _CMTimeGetSeconds(&dStack_e0);
    func_0x00010be9d340(param_2);
    _objc_release(uVar7);
  }
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c1406c0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf1f3c0();
  if ((uVar7 & 1) == 0) {
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
    lVar11 = param_2;
    func_0x00010be9d280();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    _objc_release(uVar4);
    _objc_release(puVar5);
    if (lVar10 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010c1406e0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        pdVar1 = (double *)(param_2 + _DAT_11276ab28);
        dStack_88 = pdVar1[1];
        param_1 = *pdVar1;
        dStack_80 = pdVar1[2];
        dStack_90 = param_1;
        _CMTimeGetSeconds(&dStack_90);
      }
      else {
        puVar6 = PTR_PTR_1126c9410;
        func_0x00010c1406e0(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar7);
        _objc_release(puVar6);
      }
      _objc_release(uVar4);
      _objc_release(puVar5);
      dVar15 = -10.0;
      param_1 = param_1 + -10.0;
      dVar14 = 0.0;
      if ((0.0 <= param_1) && (func_0x00010be74ca0(param_2), dVar14 = param_1, dVar15 < param_1)) {
        func_0x00010be74ca0(param_2);
        dVar14 = dVar15;
      }
      _objc_opt_class(param_2);
      lVar11 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar11);
      _CMTimeMakeWithSeconds(&dStack_90,0x3fb999999999999a,600);
      dStack_d8 = dStack_88;
      dStack_e0 = dStack_90;
      dStack_d0 = dStack_80;
      func_0x00010c1572e0(dVar14,param_2);
      func_0x00010be8f580(param_2);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 107b4488c; end: 107b448e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4488c(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276abd4);
  func_0x00010c0ff060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0((double)(bVar1 ^ 1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b448e4; end: 107b44a03; -[SCOperaVideoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_107b448e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(&uStack_a0,uVar3,uVar3);
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010c064380(&uStack_d0,lVar1);
  }
  _CGAffineTransformConcat(&uStack_70,&uStack_a0,&uStack_d0);
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06b7e0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010bf7a4c0(param_1,param_2);
  }
  return;
}



/* Entry: 107b44a04; end: 107b44a87; -[SCOperaVideoLayerViewController updateViewWithVerticalPageOffset:relativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b44a04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + _DAT_11276ab88) == '\x01') {
    lVar1 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06b7e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,PTR_s_didScrollHorizontallyWithOffset__1125bc2d8);
      return;
    }
  }
  return;
}



/* Entry: 107b44a88; end: 107b44c77; -[SCOperaVideoLayerViewController didScrollHorizontallyWithOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b44a88(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  
  lVar1 = param_2;
  dVar6 = param_1;
  func_0x00010be74f60();
  fVar5 = SUB84(dVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) &&
     ((*(char *)(param_2 + _DAT_11276ab9c) != '\x01' ||
      (*(char *)(param_2 + _DAT_11276abb4) == '\x01')))) {
    lVar1 = param_2;
    func_0x00010be74f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fdc0();
    _objc_release(lVar1);
    if (param_1 == 0.0) {
      if (fVar5 == 0.0) {
        if (*(char *)(param_2 + _DAT_11276ab98) == '\x01') {
          lVar4 = (long)_DAT_11276ab70;
          lVar1 = *(long *)(param_2 + lVar4);
          func_0x00010bfc8960();
          if (lVar1 == 1) {
            _objc_opt_class(param_2);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bfc8960(*(undefined8 *)(param_2 + lVar4));
            func_0x00010c0df780(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f0be0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(param_2);
            _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_release_11034d2d0)(puVar2);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010be6da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s__operaDidRequestToResume__112579038,
                   &PTR____CFConstantStringClassReference_110eaec18);
        return;
      }
    }
    else if (fVar5 == 1.0) {
      _objc_opt_class(param_2);
      lVar1 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      func_0x00010bf75fa0(*(undefined8 *)(param_2 + _DAT_11276abac));
                    /* WARNING: Could not recover jumptable at 0x00010c0694d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_internalPauseWithType__1125f7f40,3);
      return;
    }
  }
  return;
}



/* Entry: 107b44c78; end: 107b44da3; -[SCOperaVideoLayerViewController _updateResumeTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107b44c78(double param_1,long param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be74ca0();
  pdVar1 = (double *)(param_2 + _DAT_11276ab28);
  dStack_68 = pdVar1[1];
  dVar5 = *pdVar1;
  dStack_60 = pdVar1[2];
  dStack_70 = dVar5;
  _CMTimeGetSeconds(&dStack_70);
  puVar4 = PTR_PTR_1126c9410;
  func_0x00010c2708c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar4;
  func_0x00010c0df720(param_1 - dVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bcba8;
    if (puVar2 == (undefined *)0x0) {
      if (*(long *)(puVar3 + _DAT_11276abcc) == 0) {
        puVar4 = (undefined *)0x3;
      }
      else {
        func_0x00010c25c800(PTR_PTR_1126bcba8);
      }
    }
    else {
      func_0x00010c25c820(PTR_PTR_1126bcba8,param_3,puVar2);
    }
    _objc_release(puVar2);
    return puVar4;
  }
  return puVar3;
}



/* Entry: 107b44da4; end: 107b44e3b; -[SCOperaVideoLayerViewController _playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107b44da4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bcba8;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + _DAT_11276abcc) == 0) {
      puVar3 = (undefined *)0x3;
    }
    else {
      func_0x00010c25c800(PTR_PTR_1126bcba8);
    }
  }
  else {
    func_0x00010c25c820(PTR_PTR_1126bcba8,param_2,lVar2);
  }
  _objc_release(lVar2);
  return puVar3;
}



/* Entry: 107b44e3c; end: 107b4543b; -[SCOperaVideoLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b44e3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  double *pdStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = PTR_PTR_1126b2348;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = *(double *)(param_1 + _DAT_11276ab30) * 1000.0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_150 = puVar14;
  puStack_120 = puVar14;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2348;
  puStack_158 = puVar1;
  puStack_d0 = puVar1;
  func_0x00010bfbbde0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar14;
  puStack_118 = puVar14;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2348;
  puStack_168 = puVar1;
  puStack_c8 = puVar1;
  func_0x00010c0c4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar2;
  puStack_110 = puVar2;
  func_0x00010beed820(*(undefined8 *)(param_1 + _DAT_11276ab08));
  func_0x00010c0df720(dVar16 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2348;
  puStack_178 = puVar14;
  puStack_c0 = puVar14;
  func_0x00010c068800();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar13 = (long)_DAT_11276ab70;
  puStack_180 = puVar1;
  puStack_108 = puVar1;
  func_0x00010bfc6720(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2348;
  puStack_188 = puVar14;
  puStack_b8 = puVar14;
  func_0x00010bf9b9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = puVar1;
  puStack_100 = puVar1;
  func_0x00010bfc5460(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2348;
  puStack_198 = puVar14;
  puStack_b0 = puVar14;
  func_0x00010c29ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = puVar1;
  puStack_f8 = puVar1;
  func_0x00010c0df720(*(double *)(param_1 + _DAT_11276abec) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2348;
  puStack_1a8 = puVar14;
  puStack_a8 = puVar14;
  func_0x00010c29b4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b0 = puVar1;
  puStack_f0 = puVar1;
  func_0x00010c0df720(*(double *)(param_1 + _DAT_11276abf0) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2348;
  puStack_a0 = puVar2;
  func_0x00010bf5fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pdStack_148 = (double *)(param_1 + _DAT_11276ab28);
  dStack_138 = pdStack_148[1];
  dVar16 = *pdStack_148;
  dStack_130 = pdStack_148[2];
  dStack_140 = dVar16;
  puStack_e8 = puVar1;
  _CMTimeGetSeconds(&dStack_140);
  dVar16 = dVar16 * 1000.0;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2348;
  puStack_98 = puVar14;
  func_0x00010c0d8d60();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = puVar12;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a20;
  puStack_90 = puVar3;
  func_0x00010c0f1940();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar4;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar15;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  _objc_release(puVar15);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  lVar13 = *(long *)(param_1 + _DAT_11276abac);
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    func_0x00010bef7f60(puVar6);
  }
  lVar7 = *(long *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (lVar9 != 0) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c29a980(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c120300(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  lVar8 = param_1;
  func_0x00010c117a40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    dVar16 = 0.0;
  }
  else {
    lVar7 = lVar8;
    func_0x00010bf60240(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fc00();
    _objc_release(lVar7);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c29b0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  dStack_138 = pdStack_148[1];
  dStack_140 = *pdStack_148;
  dStack_130 = pdStack_148[2];
  func_0x00010be9d260();
  if (param_1 != 0x7fffffffffffffff) {
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c156fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar12);
  }
  puVar12 = puVar6;
  func_0x00010bf51e00();
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar13);
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_208 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_200 = &PTR_PTR_1126b2000;
  pcStack_1b8 = FUN_107b4543c;
  puVar4 = puVar3;
  puStack_210 = puVar14;
  puStack_1f8 = puVar2;
  puStack_1f0 = puVar1;
  lStack_1e8 = lVar8;
  lStack_1e0 = lVar9;
  puStack_1d8 = puVar6;
  lStack_1d0 = lVar13;
  puStack_1c8 = puVar12;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar4);
  puVar14 = PTR_PTR_1126ba150;
  func_0x00010bf66c00();
  puVar2 = PTR_PTR_1126ba150;
  func_0x00010bf12420();
  if (((int)puVar14 == 0) || (((ulong)puVar2 & 1) == 0)) {
    puVar2 = puVar3;
    func_0x00010bf60b00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) {
      puVar12 = puVar3;
      func_0x00010c2991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar2);
      if (puVar14 != (undefined *)0x0) goto LAB_107b45538;
      puVar14 = puVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar14;
      func_0x00010c22b660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar14);
      puVar14 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      if (puVar2 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar3;
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar2;
        func_0x00010c22b660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar2);
        if (puVar14 != (undefined *)0x0) goto LAB_107b45538;
      }
LAB_107b45600:
      _objc_release(puVar14);
      goto LAB_107b45608;
    }
    _objc_release(puVar2);
LAB_107b45538:
    puVar2 = PTR_PTR_1126ba150;
    func_0x00010c22e440();
    if ((int)puVar2 == 0) goto LAB_107b45600;
    func_0x00010c10ae00(PTR_PTR_1126d2ad8);
    _objc_release(puVar14);
    puVar12 = (undefined *)0x0;
  }
  else {
LAB_107b45608:
    puVar14 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010c22b660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar14);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010bf60b00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar14;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar14);
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar12 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar14);
      puVar14 = puVar4;
      if (((ulong)puVar12 & 1) == 0) {
        puVar14 = (undefined *)0x0;
      }
      _objc_retain(puVar14);
      _objc_release(puVar4);
      puVar12 = puVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010c0c4220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      func_0x00010c0c5440();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar15 == (undefined *)0x0) || (puVar3[_DAT_11276ab84] != '\x01')) {
        _objc_release(puVar15);
        _objc_release(puVar12);
LAB_107b45930:
        puVar12 = PTR_PTR_1126c90a8;
        _objc_alloc(PTR_PTR_1126c90a8);
        if (puVar2 == (undefined *)0x0) {
          func_0x00010c2991a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar3;
          func_0x00010c0d5720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c060b40(puVar12);
          _objc_release(puVar15);
        }
        else {
          puVar3 = puVar2;
          func_0x00010c0d5720(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c060b40(puVar12);
        }
        _objc_release(puVar3);
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar5 = puVar14;
        func_0x00010c071f40();
        _objc_release(puVar15);
        _objc_release(puVar12);
        if ((int)puVar5 == 0) goto LAB_107b45930;
        puStack_238 = &uStack_240;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_107b45a5c;
        uStack_220 = 0x107b45a6c;
        uStack_218 = 0;
        puVar12 = puVar4;
        func_0x00010c0c3fe0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar12;
        func_0x00010c0c5440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1120();
        _objc_release(puVar15);
        _objc_release(puVar12);
        lVar13 = puStack_238[5];
        if (lVar13 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar4;
          func_0x00010bf0e960();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c46a0(puVar12);
          puVar5 = puVar4;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf92c80(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          func_0x00010c0c3fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf92c60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar2;
          func_0x00010bf887a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar12);
        }
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
        if (lVar13 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          if (puVar15 == (undefined *)0x0) goto LAB_107b45930;
          puVar12 = PTR_PTR_1126c90a8;
          _objc_alloc(PTR_PTR_1126c90a8);
          func_0x00010c0613c0();
        }
      }
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    else {
      puVar12 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c22b660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061300(puVar12);
      _objc_release(puVar14);
      puVar2 = puVar3;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107b4543c; end: 107b45a5b; -[SCOperaVideoLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4543c(undefined *param_1)

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
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126ba150;
  func_0x00010bf66c00();
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010bf12420();
  if (((int)puVar9 == 0) || (((ulong)puVar1 & 1) == 0)) {
    puVar1 = param_1;
    func_0x00010bf60b00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puVar3 = param_1;
      func_0x00010c2991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if (puVar9 != (undefined *)0x0) goto LAB_107b45538;
      puVar9 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010c22b660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      if (puVar1 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar1 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c22b660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar1);
        if (puVar9 != (undefined *)0x0) goto LAB_107b45538;
      }
    }
    else {
      _objc_release(puVar1);
LAB_107b45538:
      puVar1 = PTR_PTR_1126ba150;
      func_0x00010c22e440();
      if ((int)puVar1 != 0) {
        func_0x00010c10ae00(PTR_PTR_1126d2ad8);
        _objc_release(puVar9);
        puVar9 = (undefined *)0x0;
        goto LAB_107b459d4;
      }
    }
    _objc_release(puVar9);
  }
  puVar9 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010c22b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar9);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bf60b00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar11 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar9);
    puVar1 = puVar4;
    if (((ulong)puVar11 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    puVar9 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010c0c4220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c0c5440();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar11 == (undefined *)0x0) || (param_1[_DAT_11276ab84] != '\x01')) {
      _objc_release(puVar11);
      _objc_release(puVar9);
LAB_107b45930:
      puVar9 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      if (puVar3 == (undefined *)0x0) {
        func_0x00010c2991a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = param_1;
        func_0x00010c0d5720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060b40(puVar9);
        _objc_release(puVar11);
      }
      else {
        param_1 = puVar3;
        func_0x00010c0d5720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060b40(puVar9);
      }
      _objc_release(param_1);
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar1;
      func_0x00010c071f40();
      _objc_release(puVar11);
      _objc_release(puVar9);
      if ((int)puVar5 == 0) goto LAB_107b45930;
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_107b45a5c;
      uStack_70 = 0x107b45a6c;
      uStack_68 = 0;
      puVar9 = puVar4;
      func_0x00010c0c3fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c0c5440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1120();
      _objc_release(puVar11);
      _objc_release(puVar9);
      lVar10 = puStack_88[5];
      if (lVar10 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar9 = puVar4;
        func_0x00010bf0e960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c46a0(puVar9);
        puVar5 = puVar4;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf92c80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c0c3fe0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf92c60();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bf887a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar9);
      }
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
      if (lVar10 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        if (puVar11 == (undefined *)0x0) goto LAB_107b45930;
        puVar9 = PTR_PTR_1126c90a8;
        _objc_alloc(PTR_PTR_1126c90a8);
        func_0x00010c0613c0();
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar11);
  }
  else {
    puVar9 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c22b660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061300(puVar9);
    _objc_release(puVar1);
    puVar3 = param_1;
  }
  _objc_release(puVar3);
LAB_107b459d4:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107b45a5c; end: 107b45a77;  */

void FUN_107b45a5c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b45a78; end: 107b45aaf;  */

void FUN_107b45a78(long param_1,undefined8 param_2)

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



/* Entry: 107b45ab0; end: 107b45ab3; -[SCOperaVideoLayerViewController layerProgressTrackable] */

void FUN_107b45ab0(void)

{
  return;
}



/* Entry: 107b45ab4; end: 107b45aef; -[SCOperaVideoLayerViewController videoIsPlaying] */

undefined8 FUN_107b45ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14d400();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107b45af0; end: 107b45dd3; -[SCOperaVideoLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b45af0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126d6ac0;
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar6 = (long)_DAT_11276abb0;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110e87818);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c100fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d2b40;
  _objc_alloc();
  uVar3 = uVar11;
  uVar8 = uVar12;
  uVar9 = uVar13;
  uVar10 = uVar14;
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar5 = (long)_DAT_11276abe0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126d6ac8;
  _objc_opt_new();
  lVar7 = (long)_DAT_11276abd4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  _objc_opt_class(param_1);
  lVar6 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar8,uVar9,uVar10);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar6);
  func_0x00010bdce320(param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b45dd4; end: 107b45fa7; -[SCOperaVideoLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b45dd4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  undefined *puStack_68;
  
  lVar5 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25c720();
  _objc_release(lVar5);
  dVar7 = param_1;
  if ((int)lVar6 != 0) {
    lVar5 = param_5;
    func_0x00010c08cb20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c25dfa0();
    dVar7 = param_1;
    if (lVar6 == 1) {
      func_0x00010c0c5140(param_5);
      dVar7 = param_1;
      func_0x00010bf0aca0(lVar5);
      puVar1 = PTR_PTR_1126b2640;
      if (param_1 != dVar7) {
        func_0x00010bf87840(lVar5);
        func_0x00010c08cb40(param_1,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08d120(param_5);
        _objc_release(puVar1);
        dVar7 = param_1;
      }
    }
    _objc_release(lVar5);
  }
  puStack_68 = PTR_PTR_1126f9f70;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010befd3a0(param_5);
  func_0x00010c165b00(*(undefined8 *)(param_5 + _DAT_11276abd4));
  lVar5 = (long)_DAT_11276abb0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  lVar6 = (long)_DAT_11276abe0;
  uVar2 = *(ulong *)(param_5 + lVar6);
  dVar8 = dVar7;
  uVar4 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf20c00();
  _CGRectEqualToRect(dVar7,param_2,param_3,param_4,dVar8,uVar4,uVar9,uVar10);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bf4dce0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
    _objc_release(uVar4);
  }
  func_0x00010bed6220(param_5);
  return;
}



/* Entry: 107b45fa8; end: 107b460ff; -[SCOperaVideoLayerViewController _applyLayerCornerRadiusIfNeeded] */

void FUN_107b45fa8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_2;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8fc40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c08c520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdb4e0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf13aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        uVar1 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6a1a0();
        func_0x00010c29bf00(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_2;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(param_1);
        _objc_release(uVar2);
        _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 107b46100; end: 107b461fb; -[SCOperaVideoLayerViewController _updateCornerOverlayIfNeeded] */

void FUN_107b46100(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8fc40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c08c520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdb4e0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf13aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        func_0x00010bdc66c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__updateCornerOverlayViewIfNeeded_112593238);
        return;
      }
    }
  }
  return;
}



/* Entry: 107b461fc; end: 107b4627b; -[SCOperaVideoLayerViewController _addCornerOverlayViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b461fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276ac18;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c9d98;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b4627c; end: 107b46557; -[SCOperaVideoLayerViewController _updateCornerOverlayViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4627c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = (long)_DAT_11276ac18;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar6);
  func_0x00010bf52560();
  _CGRectEqualToRect();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11276abe0));
    _CGRectIntersection();
    uVar3 = *(ulong *)(param_5 + lVar6);
    func_0x00010bf52520();
    _CGRectEqualToRect();
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11276abb0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  iVar1 = (int)*(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00();
  _CGRectEqualToRect();
  if ((iVar1 != 0) && ((uVar3 & 1) != 0)) {
    return;
  }
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  lVar4 = param_5;
  uVar7 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11276abe0));
  _CGRectIntersection();
  func_0x00010bf46560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a1a0();
  func_0x00010c285f80(param_1,param_2,param_3,param_4,uVar7,uVar8,uVar9,uVar10,uVar5);
  _objc_release(param_5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107b46558; end: 107b46abf; -[SCOperaVideoLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b46558(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar13 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 == 0) goto LAB_107b46a8c;
  lVar13 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c117ac0();
  _objc_release(lVar13);
  lVar13 = (long)_DAT_11276abb0;
  func_0x00010bf92400(*(undefined8 *)(param_2 + lVar13),param_3,lVar2);
  if ((int)lVar2 == 0) {
    uVar3 = param_4;
    func_0x00010c117ac0();
    if ((int)uVar3 != 0) {
      lVar13 = param_2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar13;
      func_0x00010c0da1c0();
      _objc_release(lVar13);
      if (lVar2 != 0) {
        param_1 = 0;
        func_0x00010bedc920(0,param_2);
      }
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + lVar13);
    lVar13 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e48e0(uVar14,param_3,lVar13);
    _objc_release(lVar13);
  }
  lVar2 = param_2;
  func_0x00010be74ea0();
  uVar14 = *(undefined8 *)(param_2 + _DAT_11276abd4);
  lVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4ffc0();
  lVar6 = param_2;
  func_0x00010beb6840(param_2);
  lVar7 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf50060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2 + _DAT_11276ac00;
  _objc_loadWeakRetained();
  if (lVar2 == 3) {
    lVar2 = param_2;
    func_0x00010be457c0();
    uVar1 = (undefined1)lVar2;
  }
  else {
    uVar1 = 1;
  }
  func_0x00010bf8fc20(uVar14,param_3,lVar5,lVar6,lVar8,param_2,param_2,param_2,lVar13,uVar1);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  lVar13 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010bf50060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf50000();
  _objc_release(lVar2);
  _objc_release(lVar13);
  func_0x00010bedade0(param_2,param_3,2,&PTR____CFConstantStringClassReference_110eaec38);
  *(long *)(param_2 + _DAT_11276ac04) = lVar4;
  lVar13 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    param_1 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c064380(&uStack_a0,lVar13);
  }
  func_0x00010be97800(param_2,param_3,&uStack_a0,0);
  _objc_release(lVar13);
  lVar13 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    param_1 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c064380(&uStack_a0,lVar13);
  }
  uVar3 = 0;
  _CGAffineTransformIsIdentity();
  _objc_release(lVar13);
  puVar9 = PTR_PTR_1126b2640;
  if ((uVar3 & 1) == 0) {
    func_0x00010bde8060(param_2);
    func_0x00010c1cb5c0(*(undefined8 *)(param_2 + _DAT_11276abe0));
    puVar9 = PTR_PTR_1126b2640;
    func_0x00010c08cb00(PTR_PTR_1126b2640);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c5140(param_2);
    lVar13 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010bf87840();
    func_0x00010c08cb40(param_1,puVar9,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
  }
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11276abe0;
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar13),param_3,puVar10);
  _objc_release(puVar10);
  func_0x00010c08d120(param_2,param_3,*(undefined8 *)(param_2 + lVar13),puVar9,1);
  uVar3 = param_4;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar11);
  if (uVar3 == uVar11) {
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar11);
LAB_107b469cc:
    _objc_release(uVar3);
  }
  else {
    if (uVar11 == 0) {
      _objc_release();
      _objc_release(uVar3);
LAB_107b469a0:
      uVar3 = param_5;
      func_0x00010c2612c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf926c0();
      func_0x00010be09080(param_2,param_3,uVar11,&PTR____CFConstantStringClassReference_110eaec58);
      goto LAB_107b469cc;
    }
    uVar12 = uVar3;
    func_0x00010c071ae0(uVar3,param_3,uVar11);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar3);
    if ((uVar12 & 1) == 0) goto LAB_107b469a0;
  }
  uVar3 = param_5;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf125a0();
  _objc_release(uVar3);
  if ((int)uVar11 != 0) {
    uVar3 = param_4;
    func_0x00010bf0b380(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010bf0b380(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee33c0(param_2,param_3,uVar3,uVar11);
    _objc_release(uVar11);
    _objc_release(uVar3);
  }
  uVar3 = param_4;
  func_0x00010bfdb420();
  if (((int)uVar3 != 0) && (uVar3 = param_5, func_0x00010bfdb420(), (uVar3 & 1) == 0)) {
    func_0x00010be4e400(param_2,param_3,&PTR____CFConstantStringClassReference_110eaec78);
    func_0x00010be95d00(param_2,param_3,&PTR____CFConstantStringClassReference_110eaec98);
  }
  func_0x00010be88540(param_2);
  _objc_release(puVar9);
LAB_107b46a8c:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b46ac0; end: 107b46af7; -[SCOperaVideoLayerViewController _isVideoLandscape] */

bool FUN_107b46ac0(double param_1,double param_2)

{
  func_0x00010bde8060();
  return param_2 < param_1 &&
         (param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8) ||
         param_1 != *(double *)PTR__CGSizeZero_110347620);
}



/* Entry: 107b46af8; end: 107b46e9f; -[SCOperaVideoLayerViewController _contentSize] */

undefined1  [16]
FUN_107b46af8(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  dVar9 = *(double *)PTR__CGSizeZero_110347620;
  dVar10 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  if (uVar3 == 0) {
    uVar3 = uVar2;
    func_0x00010c25c720();
    _objc_release(uVar2);
    dStack_a0 = dVar9;
    dVar8 = dVar10;
    if ((uVar3 & 1) != 0) goto LAB_107b46d80;
    uVar2 = param_5;
    dVar5 = dVar9;
    func_0x00010c2991a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bee8fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_5);
    if (uVar4 == 0) {
      uVar2 = param_5;
      func_0x00010c0f0be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      uVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar5 = param_3;
      dVar7 = param_4;
      _objc_release(uVar2);
      dStack_a0 = param_3;
    }
    else {
      func_0x00010c071800(uVar4);
      func_0x00010c07a2c0(uVar4);
      uVar2 = param_5;
      func_0x00010c0f0be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      func_0x00010c0d5d20(uVar4);
      func_0x00010c106f40(&dStack_90,uVar4);
      dStack_a0 = dStack_80 * param_2 + dStack_90 * dVar5;
      param_4 = dStack_78 * param_2 + dStack_88 * dVar5;
      dVar7 = param_2;
    }
    _objc_opt_class(param_5);
    dVar6 = param_4;
    _NSStringFromCGSize(dStack_a0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0f0be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    dVar8 = param_4;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c29b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    dVar5 = param_3;
    dVar7 = param_4;
    if (lRam00000001137275c0 != -1) {
      func_0x00010002a2fc(0x1137275c0,&PTR___NSConcreteGlobalBlock_1109fdee8);
      dVar5 = param_3;
      dVar7 = param_4;
    }
    uVar3 = param_5;
    _objc_opt_class(param_5);
    dVar6 = param_2;
    _NSStringFromCGSize(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = param_2;
    dStack_a0 = param_1;
  }
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  param_2 = dVar6;
  param_3 = dVar5;
  param_4 = dVar7;
LAB_107b46d80:
  bVar1 = false;
  if ((dStack_a0 == dVar9) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar10))) {
    bVar1 = dVar8 == dVar10;
  }
  dVar9 = dStack_a0;
  if (bVar1) {
    _objc_opt_class(param_5);
    uVar2 = param_5;
    func_0x00010bdf8620(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0f0be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c08c520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb1c0();
    dVar9 = param_3;
    dVar10 = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar9 = (dVar9 - param_2) - param_4;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar8 = (dVar10 - dStack_a0) - param_3;
    _objc_release(param_5);
    _objc_release(uVar2);
  }
  auVar11._8_8_ = dVar8;
  auVar11._0_8_ = dVar9;
  return auVar11;
}



/* Entry: 107b46ea0; end: 107b47107; -[SCOperaVideoLayerViewController _attachTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b46ea0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11276ac40;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar4 = param_1 + _DAT_11276ac44;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0 && lVar4 == lVar1) {
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
    _objc_opt_class(param_1);
    lVar2 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    func_0x00010be8da80(param_1);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_opt_class(param_1);
  lVar4 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar1 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276ac44;
  _objc_storeWeak(param_1 + lVar4,lVar1);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  _CMTimeMakeWithSeconds(auStack_60,*(undefined8 *)(param_1 + _DAT_11276ab58),10000);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_68,auStack_48);
  lVar1 = lVar4;
  func_0x00010befa7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b47108; end: 107b471df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b47108(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11276ac44;
    _objc_loadWeakRetained();
    if (lVar2 != 0 && lVar2 == lVar1) {
      lVar3 = lVar1;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_48,lVar3);
      }
      _objc_release(lVar3);
      uStack_58 = uStack_40;
      uStack_60 = uStack_48;
      uStack_50 = uStack_38;
      func_0x00010bdfca20(param_1,param_2,&uStack_60);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107b471e0; end: 107b472af; -[SCOperaVideoLayerViewController _removeTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b471e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276ac40;
  if (*(long *)(param_1 + lVar4) != 0) {
    _objc_opt_class();
    lVar1 = param_1;
    func_0x00010bdf8620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12eb40();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ac44,0);
    return;
  }
  return;
}



/* Entry: 107b472b0; end: 107b473cb; -[SCOperaVideoLayerViewController _removeMediaServicesObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_107b472b0(long param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double *pdVar6;
  undefined *puVar7;
  undefined *puVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  long lVar18;
  long lVar19;
  double *unaff_x24;
  uint uVar20;
  long lVar21;
  double *pdVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double unaff_d9;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e0;
  double *pdStack_3d0;
  double *pdStack_3c8;
  double *pdStack_3c0;
  double *pdStack_3b8;
  undefined8 uStack_3b0;
  double *pdStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 auStack_308 [16];
  long lStack_288;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  double *pdStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_130;
  code *pcStack_128;
  double adStack_120 [2];
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double adStack_d8 [16];
  long lStack_58;
  
  pdVar17 = adStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_120[1] = 0.0;
  adStack_120[0] = 0.0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar18 = (long)_DAT_11276ac48;
  lVar16 = *(long *)(param_1 + lVar18);
  _objc_retain(lVar16);
  pdVar6 = adStack_d8;
  uVar14 = 0x10;
  lVar15 = lVar16;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar19 = *plStack_110;
    unaff_x24 = (double *)&DAT_11276a000;
    do {
      lVar21 = 0;
      do {
        if (*plStack_110 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        func_0x00010c12d560(*(undefined8 *)(param_1 + _DAT_11276ab0c));
        lVar21 = lVar21 + 1;
      } while (lVar15 != lVar21);
      pdVar6 = adStack_d8;
      uVar14 = 0x10;
      lVar15 = lVar16;
      pdVar17 = adStack_120;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar16);
  pdVar2 = *(double **)(param_1 + lVar18);
  *(undefined8 *)(param_1 + lVar18) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pdVar2;
  }
  ___stack_chk_fail();
  puStack_130 = &stack0xfffffffffffffff0;
  pcStack_128 = FUN_107b473cc;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar9 = pdVar2;
  pdVar11 = pdVar17;
  if ((*(byte *)((long)pdVar2 + (long)_DAT_11276ab1c) & 1) == 0) {
    dStack_1f8 = pdVar17[1];
    dStack_200 = *pdVar17;
    dStack_1f0 = pdVar17[2];
    pdVar11 = &dStack_200;
    func_0x00010be07320(&dStack_1e0);
    dStack_1f8 = dStack_1d8;
    dStack_200 = dStack_1e0;
    dStack_1f0 = dStack_1d0;
    dVar23 = dStack_1e0;
    _CMTimeGetSeconds(&dStack_200);
    unaff_x24 = (double *)((long)pdVar2 + (long)_DAT_11276ab28);
    unaff_x24[1] = dStack_1d8;
    *unaff_x24 = dStack_1e0;
    unaff_x24[2] = dStack_1d0;
    pdVar3 = pdVar2;
    func_0x00010beb6ca0(dVar23);
    if ((int)pdVar3 == 0) {
      uVar4 = *(undefined8 *)((long)pdVar2 + (long)_DAT_11276abc4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      dStack_1f8 = unaff_x24[1];
      dStack_200 = *unaff_x24;
      dStack_1f0 = unaff_x24[2];
      func_0x00010c287940();
      _objc_release(uVar4);
      puVar5 = (undefined *)((long)pdVar2 + (long)_DAT_11276ab00);
      _objc_loadWeakRetained();
      pdVar3 = pdVar2;
      func_0x00010be74f80();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_11276abb0;
      pdVar22 = *(double **)((long)pdVar2 + lVar15);
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      pdVar11 = pdVar3;
      pdVar6 = pdVar22;
      func_0x00010c2888e0(puVar5);
      _objc_release(pdVar22);
      _objc_release(pdVar3);
      _objc_release(puVar5);
      func_0x00010c288880(dVar23,*(undefined8 *)((long)pdVar2 + (long)_DAT_11276ab6c));
      func_0x00010c29a520();
      if ((int)pdVar9 != 0) {
        func_0x00010bea1120(pdVar2);
        pdVar6 = (double *)((long)pdVar2 + (long)_DAT_11276ab2c);
        dStack_1f8 = pdVar6[1];
        dStack_200 = *pdVar6;
        dStack_1f0 = pdVar6[2];
        dStack_218 = dStack_1d8;
        dStack_220 = dStack_1e0;
        dStack_210 = dStack_1d0;
        func_0x00010be17a80(pdVar2);
        pdVar6[1] = dStack_1d8;
        *pdVar6 = dStack_1e0;
        pdVar6[2] = dStack_1d0;
        dStack_1f8 = unaff_x24[1];
        dVar24 = *unaff_x24;
        dStack_1f0 = unaff_x24[2];
        dStack_200 = dVar24;
        _CMTimeGetSeconds(&dStack_200);
        dVar25 = dVar24;
        func_0x00010bee8f60(pdVar2);
        dVar24 = dVar24 - dVar25;
        if (((*(double *)((long)pdVar2 + (long)_DAT_11276ab58) <= dVar24) &&
            (dVar24 <= *(double *)((long)pdVar2 + (long)_DAT_11276ab5c))) ||
           (*(char *)((long)pdVar2 + (long)_DAT_11276ac4c) == '\x01')) {
          func_0x00010bedade0(pdVar2);
        }
        lVar16 = (long)_DAT_11276abd4;
        uVar4 = *(undefined8 *)((long)pdVar2 + lVar16);
        func_0x00010c0ff060();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar4;
        func_0x00010bf500a0();
        _objc_release(uVar4);
        if ((int)uVar14 != 0) {
          pdVar6 = pdVar2;
          func_0x00010c239c40();
          if ((int)pdVar6 == 0) {
            pdVar6 = pdVar2;
            func_0x00010c236400();
            if ((int)pdVar6 != 0) {
              lVar19 = *(long *)((long)pdVar2 + lVar15);
              func_0x00010c100fe0();
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lVar19;
              func_0x00010c100ae0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar18 == 0) {
                _objc_release();
                goto LAB_107b47770;
              }
              func_0x00010bf21e80(&dStack_200);
              dVar25 = dStack_1f8;
              _objc_release(lVar18);
              _objc_release(lVar19);
              if (((ulong)dVar25 & 0x100000000) != 0) {
                lVar19 = *(long *)((long)pdVar2 + lVar15);
                func_0x00010c100fe0();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar19;
                func_0x00010c100ae0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar18 == 0) goto LAB_107b47730;
                func_0x00010bf21e80(&dStack_200,lVar18);
                goto LAB_107b47738;
              }
            }
          }
          else {
            lVar19 = *(long *)((long)pdVar2 + lVar15);
            func_0x00010c100fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar19;
            func_0x00010c100ae0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar18 == 0) {
LAB_107b47730:
              dStack_200 = 0.0;
              dStack_1f8 = 0.0;
              dStack_1f0 = 0.0;
            }
            else {
              func_0x00010c1573c0(&dStack_200,lVar18);
            }
LAB_107b47738:
            _CMTimeGetSeconds(&dStack_200);
            _objc_release(lVar18);
            _objc_release(lVar19);
            lVar19 = *(long *)((long)pdVar2 + lVar16);
            func_0x00010c0ff060(lVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a50a0(dVar24);
LAB_107b47770:
            _objc_release(lVar19);
          }
        }
        dVar25 = *pdVar17;
        dStack_1f8 = pdVar17[1];
        dStack_200 = dVar25;
        dStack_1f0 = pdVar17[2];
        _CMTimeGetSeconds(&dStack_200);
        uVar14 = *(undefined8 *)((long)pdVar2 + lVar16);
        func_0x00010c0ff060(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befd900(dVar25);
        _objc_release(uVar14);
        pdVar17 = (double *)PTR_PTR_1126b2338;
        func_0x00010c29aaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2348;
        func_0x00010bf8b340();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = (long)_DAT_11276ab30;
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_1c8 = puVar5;
        func_0x00010c0df720(*(double *)((long)pdVar2 + lVar16) * 1000.0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b2348;
        puStack_1b8 = puVar7;
        func_0x00010bf5fb40();
        _objc_retainAutoreleasedReturnValue();
        unaff_d9 = dVar23 * 1000.0;
        unaff_x24 = (double *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_1c0 = puVar8;
        func_0x00010c0df720(unaff_d9);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = 2;
        pdVar9 = (double *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        pdStack_1b0 = unaff_x24;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        pdVar11 = pdVar17;
        pdVar6 = pdVar9;
        func_0x00010bf04440(pdVar2);
        _objc_release(pdVar9);
        _objc_release(unaff_x24);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(pdVar17);
        pdVar17 = pdVar2;
        func_0x00010bf9a180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (pdVar17 != (double *)0x0) {
          puVar5 = PTR_PTR_1126ca3d0;
          _objc_alloc(PTR_PTR_1126ca3d0);
          func_0x00010c00eb40(*(double *)((long)pdVar2 + lVar16) * 1000.0,unaff_d9);
          pdVar17 = (double *)PTR_PTR_1126d6878;
          func_0x00010c0fff00();
          _objc_retainAutoreleasedReturnValue();
          pdVar9 = pdVar2;
          func_0x00010bf9a180();
          _objc_retainAutoreleasedReturnValue();
          pdVar3 = pdVar9;
          func_0x00010c0ea760();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = pdVar2;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          pdVar11 = pdVar17;
          pdVar6 = unaff_x24;
          func_0x00010c11ad60(pdVar3);
          _objc_release(unaff_x24);
          _objc_release(pdVar3);
          _objc_release(pdVar9);
          _objc_release(pdVar17);
          _objc_release(puVar5);
        }
        pdVar9 = *(double **)((long)pdVar2 + lVar15);
        func_0x00010c29ae60();
        _objc_retainAutoreleasedReturnValue();
        pdVar17 = pdVar9;
        func_0x00010c074c20();
        _objc_release();
        if (((ulong)pdVar17 & 1) == 0) {
          pdVar9 = *(double **)((long)pdVar2 + lVar15);
          func_0x00010c29ae60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4940(dVar23,*(undefined8 *)((long)pdVar2 + lVar16));
          _objc_release();
        }
      }
    }
    else {
      func_0x00010becfac0();
      pdVar9 = pdVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pdVar9;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_107b47a20;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  pdVar17 = pdVar9;
  ppuStack_230 = &puStack_130;
  func_0x00010be65900();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_350;
  puVar13 = auStack_308;
  lVar15 = 0x10;
  pdVar2 = pdVar17;
  func_0x00010bf52a60();
  pdVar3 = pdVar17;
  if (pdVar2 == (double *)0x0) {
    _objc_release();
  }
  else {
    uVar20 = 0;
    lVar16 = *plStack_340;
    do {
      pdVar22 = (double *)0x0;
      do {
        if (*plStack_340 != lVar16) {
          _objc_enumerationMutation(pdVar17);
        }
        dStack_368 = pdVar11[1];
        dStack_370 = *pdVar11;
        dStack_360 = pdVar11[2];
        dStack_388 = pdVar6[1];
        dStack_390 = *pdVar6;
        dStack_380 = pdVar6[2];
        pdVar10 = pdVar9;
        func_0x00010be17a60();
        uVar20 = (uint)pdVar10 | uVar20;
        pdVar22 = (double *)((long)pdVar22 + 1);
      } while (pdVar2 != pdVar22);
      puVar12 = &uStack_350;
      puVar13 = auStack_308;
      lVar15 = 0x10;
      pdVar2 = pdVar17;
      func_0x00010bf52a60();
    } while (pdVar2 != (double *)0x0);
    _objc_release();
    unaff_x24 = (double *)0x0;
    if ((uVar20 & 1) != 0) {
      puVar1 = (undefined8 *)((long)pdVar9 + (long)_DAT_11276ab40);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pdVar3;
  }
  ___stack_chk_fail();
  pcStack_398 = FUN_107b47b8c;
  dStack_3e0 = unaff_d9;
  pdStack_3d0 = unaff_x24;
  pdStack_3c8 = pdVar17;
  pdStack_3c0 = pdVar11;
  pdStack_3b8 = pdVar6;
  uStack_3b0 = uVar14;
  pdStack_3a8 = pdVar9;
  pppuStack_3a0 = &ppuStack_230;
  _objc_retain(lVar15);
  lVar16 = lVar15;
  func_0x00010bf99c40();
  lVar18 = lVar15;
  if (lVar16 == 1) {
    uStack_3f8 = puVar12[1];
    uVar14 = *puVar12;
    uStack_3f0 = puVar12[2];
    uStack_400 = uVar14;
    _CMTimeGetSeconds(&uStack_400);
    uStack_3f8 = puVar13[1];
    uVar4 = *puVar13;
    uStack_3f0 = puVar13[2];
    uStack_400 = uVar4;
    _CMTimeGetSeconds(&uStack_400);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar18;
    FUN_107b3c13c(uVar14,uVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_107b47ca0:
    _objc_release(lVar18);
    if (lVar16 != 0) {
      lVar18 = lVar15;
      func_0x00010bf9a340(lVar15);
      _objc_retainAutoreleasedReturnValue();
      uStack_3f8 = puVar12[1];
      uStack_400 = *puVar12;
      uStack_3f0 = puVar12[2];
      pdVar6 = pdVar3;
      func_0x00010be0b580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      if (pdVar6 == (double *)0x0) {
LAB_107b47d38:
        pdVar17 = (double *)0x0;
      }
      else {
        if ((*(byte *)((long)pdVar3 + (long)_DAT_11276abc8) & 1) != 0) {
          func_0x00010befa120(*(undefined8 *)((long)pdVar3 + (long)_DAT_11276ab38));
          goto LAB_107b47d38;
        }
        func_0x00010be17a40(pdVar3);
        pdVar17 = (double *)0x1;
      }
      _objc_release(pdVar6);
      _objc_release(lVar16);
      goto LAB_107b47d68;
    }
  }
  else if (lVar16 == 0) {
    uStack_3f8 = puVar12[1];
    uVar14 = *puVar12;
    uStack_3f0 = puVar12[2];
    uStack_400 = uVar14;
    _CMTimeGetSeconds(&uStack_400);
    uStack_3f8 = puVar13[1];
    uVar4 = *puVar13;
    uStack_3f0 = puVar13[2];
    uStack_400 = uVar4;
    _CMTimeGetSeconds(&uStack_400);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar18;
    FUN_107b3c390(uVar14,uVar4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107b47ca0;
  }
  pdVar17 = (double *)0x0;
LAB_107b47d68:
  _objc_release(lVar15);
  return pdVar17;
}



/* Entry: 107b473cc; end: 107b47a1f; -[SCOperaVideoLayerViewController _didChangePlaybackTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_107b473cc(double *param_1,undefined8 param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  double *pdVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  double *pdVar17;
  double *unaff_x24;
  uint uVar18;
  long lVar19;
  double *pdVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double unaff_d9;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  double dStack_2c0;
  double *pdStack_2b0;
  double *pdStack_2a8;
  double *pdStack_2a0;
  double *pdStack_298;
  undefined8 uStack_290;
  double *pdStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 auStack_1e8 [16];
  long lStack_168;
  undefined1 *puStack_110;
  code *pcStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  double *pdStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar17 = param_1;
  pdVar7 = param_3;
  if ((*(byte *)((long)param_1 + (long)_DAT_11276ab1c) & 1) == 0) {
    dStack_d8 = param_3[1];
    dStack_e0 = *param_3;
    dStack_d0 = param_3[2];
    pdVar7 = &dStack_e0;
    func_0x00010be07320(&dStack_c0);
    dStack_d8 = dStack_b8;
    dStack_e0 = dStack_c0;
    dStack_d0 = dStack_b0;
    dVar21 = dStack_c0;
    _CMTimeGetSeconds(&dStack_e0);
    unaff_x24 = (double *)((long)param_1 + (long)_DAT_11276ab28);
    unaff_x24[1] = dStack_b8;
    *unaff_x24 = dStack_c0;
    unaff_x24[2] = dStack_b0;
    pdVar2 = param_1;
    func_0x00010beb6ca0(dVar21);
    if ((int)pdVar2 == 0) {
      uVar3 = *(undefined8 *)((long)param_1 + (long)_DAT_11276abc4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      dStack_d8 = unaff_x24[1];
      dStack_e0 = *unaff_x24;
      dStack_d0 = unaff_x24[2];
      func_0x00010c287940();
      _objc_release(uVar3);
      puVar4 = (undefined *)((long)param_1 + (long)_DAT_11276ab00);
      _objc_loadWeakRetained();
      pdVar2 = param_1;
      func_0x00010be74f80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)_DAT_11276abb0;
      pdVar5 = *(double **)((long)param_1 + lVar16);
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      pdVar7 = pdVar2;
      param_4 = pdVar5;
      func_0x00010c2888e0(puVar4);
      _objc_release(pdVar5);
      _objc_release(pdVar2);
      _objc_release(puVar4);
      func_0x00010c288880(dVar21,*(undefined8 *)((long)param_1 + (long)_DAT_11276ab6c));
      func_0x00010c29a520();
      if ((int)pdVar17 != 0) {
        func_0x00010bea1120(param_1);
        pdVar7 = (double *)((long)param_1 + (long)_DAT_11276ab2c);
        dStack_d8 = pdVar7[1];
        dStack_e0 = *pdVar7;
        dStack_d0 = pdVar7[2];
        dStack_f8 = dStack_b8;
        dStack_100 = dStack_c0;
        dStack_f0 = dStack_b0;
        func_0x00010be17a80(param_1);
        pdVar7[1] = dStack_b8;
        *pdVar7 = dStack_c0;
        pdVar7[2] = dStack_b0;
        dStack_d8 = unaff_x24[1];
        dVar22 = *unaff_x24;
        dStack_d0 = unaff_x24[2];
        dStack_e0 = dVar22;
        _CMTimeGetSeconds(&dStack_e0);
        dVar23 = dVar22;
        func_0x00010bee8f60(param_1);
        dVar22 = dVar22 - dVar23;
        if (((*(double *)((long)param_1 + (long)_DAT_11276ab58) <= dVar22) &&
            (dVar22 <= *(double *)((long)param_1 + (long)_DAT_11276ab5c))) ||
           (*(char *)((long)param_1 + (long)_DAT_11276ac4c) == '\x01')) {
          func_0x00010bedade0(param_1);
        }
        lVar19 = (long)_DAT_11276abd4;
        uVar6 = *(undefined8 *)((long)param_1 + lVar19);
        func_0x00010c0ff060();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bf500a0();
        _objc_release(uVar6);
        if ((int)uVar3 != 0) {
          pdVar7 = param_1;
          func_0x00010c239c40();
          if ((int)pdVar7 == 0) {
            pdVar7 = param_1;
            func_0x00010c236400();
            if ((int)pdVar7 != 0) {
              lVar8 = *(long *)((long)param_1 + lVar16);
              func_0x00010c100fe0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010c100ae0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar9 == 0) {
                _objc_release();
                goto LAB_107b47770;
              }
              func_0x00010bf21e80(&dStack_e0);
              dVar23 = dStack_d8;
              _objc_release(lVar9);
              _objc_release(lVar8);
              if (((ulong)dVar23 & 0x100000000) != 0) {
                lVar8 = *(long *)((long)param_1 + lVar16);
                func_0x00010c100fe0();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c100ae0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 == 0) goto LAB_107b47730;
                func_0x00010bf21e80(&dStack_e0,lVar9);
                goto LAB_107b47738;
              }
            }
          }
          else {
            lVar8 = *(long *)((long)param_1 + lVar16);
            func_0x00010c100fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c100ae0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
LAB_107b47730:
              dStack_e0 = 0.0;
              dStack_d8 = 0.0;
              dStack_d0 = 0.0;
            }
            else {
              func_0x00010c1573c0(&dStack_e0,lVar9);
            }
LAB_107b47738:
            _CMTimeGetSeconds(&dStack_e0);
            _objc_release(lVar9);
            _objc_release(lVar8);
            lVar8 = *(long *)((long)param_1 + lVar19);
            func_0x00010c0ff060(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a50a0(dVar22);
LAB_107b47770:
            _objc_release(lVar8);
          }
        }
        dStack_d8 = param_3[1];
        dVar23 = *param_3;
        dStack_d0 = param_3[2];
        dStack_e0 = dVar23;
        _CMTimeGetSeconds(&dStack_e0);
        uVar3 = *(undefined8 *)((long)param_1 + lVar19);
        func_0x00010c0ff060(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befd900(dVar23);
        _objc_release(uVar3);
        pdVar17 = (double *)PTR_PTR_1126b2338;
        func_0x00010c29aaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2348;
        func_0x00010bf8b340();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = (long)_DAT_11276ab30;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_a8 = puVar4;
        func_0x00010c0df720(*(double *)((long)param_1 + lVar19) * 1000.0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126b2348;
        puStack_98 = puVar10;
        func_0x00010bf5fb40();
        _objc_retainAutoreleasedReturnValue();
        unaff_d9 = dVar21 * 1000.0;
        unaff_x24 = (double *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_a0 = puVar11;
        func_0x00010c0df720(unaff_d9);
        _objc_retainAutoreleasedReturnValue();
        param_5 = 2;
        pdVar2 = (double *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        pdStack_90 = unaff_x24;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        pdVar7 = pdVar17;
        param_4 = pdVar2;
        func_0x00010bf04440(param_1);
        _objc_release(pdVar2);
        _objc_release(unaff_x24);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar4);
        _objc_release(pdVar17);
        pdVar17 = param_1;
        func_0x00010bf9a180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (pdVar17 != (double *)0x0) {
          puVar4 = PTR_PTR_1126ca3d0;
          _objc_alloc(PTR_PTR_1126ca3d0);
          func_0x00010c00eb40(*(double *)((long)param_1 + lVar19) * 1000.0,unaff_d9);
          pdVar17 = (double *)PTR_PTR_1126d6878;
          func_0x00010c0fff00();
          _objc_retainAutoreleasedReturnValue();
          pdVar2 = param_1;
          func_0x00010bf9a180();
          _objc_retainAutoreleasedReturnValue();
          pdVar5 = pdVar2;
          func_0x00010c0ea760();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = param_1;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          pdVar7 = pdVar17;
          param_4 = unaff_x24;
          func_0x00010c11ad60(pdVar5);
          _objc_release(unaff_x24);
          _objc_release(pdVar5);
          _objc_release(pdVar2);
          _objc_release(pdVar17);
          _objc_release(puVar4);
        }
        pdVar17 = *(double **)((long)param_1 + lVar16);
        func_0x00010c29ae60();
        _objc_retainAutoreleasedReturnValue();
        pdVar2 = pdVar17;
        func_0x00010c074c20();
        _objc_release();
        if (((ulong)pdVar2 & 1) == 0) {
          pdVar17 = *(double **)((long)param_1 + lVar16);
          func_0x00010c29ae60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4940(dVar21,*(undefined8 *)((long)param_1 + lVar19));
          _objc_release();
        }
      }
    }
    else {
      func_0x00010becfac0();
      pdVar17 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pdVar17;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_107b47a20;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  pdVar2 = pdVar17;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010be65900();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = &uStack_230;
  puVar15 = auStack_1e8;
  lVar16 = 0x10;
  pdVar5 = pdVar2;
  func_0x00010bf52a60();
  pdVar13 = pdVar2;
  if (pdVar5 == (double *)0x0) {
    _objc_release();
  }
  else {
    uVar18 = 0;
    lVar19 = *plStack_220;
    do {
      pdVar20 = (double *)0x0;
      do {
        if (*plStack_220 != lVar19) {
          _objc_enumerationMutation(pdVar2);
        }
        dStack_248 = pdVar7[1];
        dStack_250 = *pdVar7;
        dStack_240 = pdVar7[2];
        dStack_268 = param_4[1];
        dStack_270 = *param_4;
        dStack_260 = param_4[2];
        pdVar12 = pdVar17;
        func_0x00010be17a60();
        uVar18 = (uint)pdVar12 | uVar18;
        pdVar20 = (double *)((long)pdVar20 + 1);
      } while (pdVar5 != pdVar20);
      puVar14 = &uStack_230;
      puVar15 = auStack_1e8;
      lVar16 = 0x10;
      pdVar5 = pdVar2;
      func_0x00010bf52a60();
    } while (pdVar5 != (double *)0x0);
    _objc_release();
    unaff_x24 = (double *)0x0;
    if ((uVar18 & 1) != 0) {
      puVar1 = (undefined8 *)((long)pdVar17 + (long)_DAT_11276ab40);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pdVar13;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_107b47b8c;
  dStack_2c0 = unaff_d9;
  pdStack_2b0 = unaff_x24;
  pdStack_2a8 = pdVar2;
  pdStack_2a0 = pdVar7;
  pdStack_298 = param_4;
  uStack_290 = param_5;
  pdStack_288 = pdVar17;
  ppuStack_280 = &puStack_110;
  _objc_retain(lVar16);
  lVar19 = lVar16;
  func_0x00010bf99c40();
  lVar9 = lVar16;
  if (lVar19 == 1) {
    uStack_2d8 = puVar14[1];
    uVar3 = *puVar14;
    uStack_2d0 = puVar14[2];
    uStack_2e0 = uVar3;
    _CMTimeGetSeconds(&uStack_2e0);
    uStack_2d8 = puVar15[1];
    uVar6 = *puVar15;
    uStack_2d0 = puVar15[2];
    uStack_2e0 = uVar6;
    _CMTimeGetSeconds(&uStack_2e0);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar9;
    FUN_107b3c13c(uVar3,uVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_107b47ca0:
    _objc_release(lVar9);
    if (lVar19 != 0) {
      lVar9 = lVar16;
      func_0x00010bf9a340(lVar16);
      _objc_retainAutoreleasedReturnValue();
      uStack_2d8 = puVar14[1];
      uStack_2e0 = *puVar14;
      uStack_2d0 = puVar14[2];
      pdVar7 = pdVar13;
      func_0x00010be0b580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (pdVar7 == (double *)0x0) {
LAB_107b47d38:
        pdVar17 = (double *)0x0;
      }
      else {
        if ((*(byte *)((long)pdVar13 + (long)_DAT_11276abc8) & 1) != 0) {
          func_0x00010befa120(*(undefined8 *)((long)pdVar13 + (long)_DAT_11276ab38));
          goto LAB_107b47d38;
        }
        func_0x00010be17a40(pdVar13);
        pdVar17 = (double *)0x1;
      }
      _objc_release(pdVar7);
      _objc_release(lVar19);
      goto LAB_107b47d68;
    }
  }
  else if (lVar19 == 0) {
    uStack_2d8 = puVar14[1];
    uVar3 = *puVar14;
    uStack_2d0 = puVar14[2];
    uStack_2e0 = uVar3;
    _CMTimeGetSeconds(&uStack_2e0);
    uStack_2d8 = puVar15[1];
    uVar6 = *puVar15;
    uStack_2d0 = puVar15[2];
    uStack_2e0 = uVar6;
    _CMTimeGetSeconds(&uStack_2e0);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar9;
    FUN_107b3c390(uVar3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107b47ca0;
  }
  pdVar17 = (double *)0x0;
LAB_107b47d68:
  _objc_release(lVar16);
  return pdVar17;
}



/* Entry: 107b47a20; end: 107b47b8b; -[SCOperaVideoLayerViewController _firePlaybackEventsIfNecessaryForStartTime:endTime:checkLastEventOnForward:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b47a20(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_e8 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = param_1;
  func_0x00010be65900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_130;
  puVar5 = auStack_e8;
  lVar6 = 0x10;
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    _objc_release();
  }
  else {
    uVar8 = 0;
    lVar9 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        lVar3 = param_1;
        func_0x00010be17a60();
        uVar8 = (uint)lVar3 | uVar8;
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      puVar4 = &uStack_130;
      puVar5 = auStack_e8;
      lVar6 = 0x10;
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    _objc_release();
    if ((uVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(param_1 + _DAT_11276ab40);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar7;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf99c40();
  lVar9 = lVar6;
  if (lVar2 == 1) {
    uStack_1d8 = puVar4[1];
    uVar10 = *puVar4;
    uStack_1d0 = puVar4[2];
    uStack_1e0 = uVar10;
    _CMTimeGetSeconds(&uStack_1e0);
    uStack_1d8 = puVar5[1];
    uVar11 = *puVar5;
    uStack_1d0 = puVar5[2];
    uStack_1e0 = uVar11;
    _CMTimeGetSeconds(&uStack_1e0);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    FUN_107b3c13c(uVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
LAB_107b47ca0:
    _objc_release(lVar9);
    if (lVar2 != 0) {
      lVar9 = lVar6;
      func_0x00010bf9a340(lVar6);
      _objc_retainAutoreleasedReturnValue();
      uStack_1d8 = puVar4[1];
      uStack_1e0 = *puVar4;
      uStack_1d0 = puVar4[2];
      lVar3 = lVar7;
      func_0x00010be0b580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (lVar3 == 0) {
LAB_107b47d38:
        lVar7 = 0;
      }
      else {
        if ((*(byte *)(lVar7 + _DAT_11276abc8) & 1) != 0) {
          func_0x00010befa120(*(undefined8 *)(lVar7 + _DAT_11276ab38));
          goto LAB_107b47d38;
        }
        func_0x00010be17a40(lVar7);
        lVar7 = 1;
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_107b47d68;
    }
  }
  else if (lVar2 == 0) {
    uStack_1d8 = puVar4[1];
    uVar10 = *puVar4;
    uStack_1d0 = puVar4[2];
    uStack_1e0 = uVar10;
    _CMTimeGetSeconds(&uStack_1e0);
    uStack_1d8 = puVar5[1];
    uVar11 = *puVar5;
    uStack_1d0 = puVar5[2];
    uStack_1e0 = uVar11;
    _CMTimeGetSeconds(&uStack_1e0);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    FUN_107b3c390(uVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107b47ca0;
  }
  lVar7 = 0;
LAB_107b47d68:
  _objc_release(lVar6);
  return lVar7;
}



/* Entry: 107b47b8c; end: 107b47d8f; -[SCOperaVideoLayerViewController _firePlaybackEventIfNecessaryForStartTime:endTime:eventsGroup:checkLastEventOnForward:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107b47b8c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf99c40();
  lVar2 = param_5;
  if (lVar1 == 1) {
    uStack_68 = param_3[1];
    uVar4 = *param_3;
    uStack_60 = param_3[2];
    uStack_70 = uVar4;
    _CMTimeGetSeconds(&uStack_70);
    uStack_68 = param_4[1];
    uVar5 = *param_4;
    uStack_60 = param_4[2];
    uStack_70 = uVar5;
    _CMTimeGetSeconds(&uStack_70);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_107b3c13c(uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_107b47ca0:
    _objc_release(lVar2);
    if (lVar1 != 0) {
      lVar2 = param_5;
      func_0x00010bf9a340(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = param_3[1];
      uStack_70 = *param_3;
      uStack_60 = param_3[2];
      lVar3 = param_1;
      func_0x00010be0b580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
LAB_107b47d38:
        uVar4 = 0;
      }
      else {
        if ((*(byte *)(param_1 + _DAT_11276abc8) & 1) != 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11276ab38));
          goto LAB_107b47d38;
        }
        func_0x00010be17a40(param_1);
        uVar4 = 1;
      }
      _objc_release(lVar3);
      _objc_release(lVar1);
      goto LAB_107b47d68;
    }
  }
  else if (lVar1 == 0) {
    uStack_68 = param_3[1];
    uVar4 = *param_3;
    uStack_60 = param_3[2];
    uStack_70 = uVar4;
    _CMTimeGetSeconds(&uStack_70);
    uStack_68 = param_4[1];
    uVar5 = *param_4;
    uStack_60 = param_4[2];
    uStack_70 = uVar5;
    _CMTimeGetSeconds(&uStack_70);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_107b3c390(uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107b47ca0;
  }
  uVar4 = 0;
LAB_107b47d68:
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 107b47d90; end: 107b47df7; -[SCOperaVideoLayerViewController _firePlaybackEventForParams:] */

void FUN_107b47d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9cf0;
  _objc_retain(param_3);
  func_0x00010c0ff280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b47df8; end: 107b47f1f; -[SCOperaVideoLayerViewController _seekPointIndexForTime:] */

ulong FUN_107b47df8(long param_1,undefined8 param_2,double *param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  func_0x00010be9d280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar5 = 0x7fffffffffffffff;
  }
  else {
    dStack_68 = param_3[1];
    dVar6 = *param_3;
    dStack_60 = param_3[2];
    dStack_70 = dVar6;
    _CMTimeGetSeconds(&dStack_70);
    lVar3 = param_1;
    dVar7 = dVar6;
    func_0x00010bf529e0();
    if (lVar3 != 1) {
      uVar5 = 0;
      do {
        uVar1 = uVar5 + 1;
        lVar3 = param_1;
        func_0x00010c0dfd40(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        if (dVar6 <= dVar7) {
          lVar4 = param_1;
          func_0x00010c0dfd40(param_1,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar8 = dVar7;
          _objc_release(lVar4);
          _objc_release(lVar3);
          bVar2 = dVar7 <= dVar6;
          dVar7 = dVar8;
          if (bVar2) goto LAB_107b47ef8;
        }
        else {
          _objc_release(lVar3);
        }
        lVar3 = param_1;
        func_0x00010bf529e0();
        uVar5 = uVar1;
      } while (uVar1 < lVar3 - 1U);
    }
    lVar3 = param_1;
    func_0x00010bf529e0(param_1);
    uVar5 = lVar3 - 1;
  }
LAB_107b47ef8:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107b47f20; end: 107b47f67; -[SCOperaVideoLayerViewController _currentSeekPointIndexOnSeek:endSeekPointIndex:isForwardSeek:] */

long FUN_107b47f20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = param_3 + 1 != param_4;
  if (param_5 == 0) {
    lVar1 = 0x7fffffffffffffff;
    if (!bVar2 || param_3 == param_4) {
      lVar1 = param_4 + 1;
    }
    return lVar1;
  }
  if ((bVar2) && ((param_3 == 0 || (param_3 != param_4)))) {
    if (param_4 != 0 || param_3 == 0) {
      param_3 = 0x7fffffffffffffff;
    }
    return param_3;
  }
  return param_3;
}



/* Entry: 107b47f68; end: 107b485fb; -[SCOperaVideoLayerViewController _eventParamsForPlaybackEvent:eventTag:startTime:endTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b47f68(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                    undefined *param_5,double *param_6,double *param_7)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined1 uVar27;
  double dVar28;
  double dVar29;
  undefined *puStack_130;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((*(byte *)((long)param_6 + 0xc) & 1) == 0) || ((*(byte *)((long)param_7 + 0xc) & 1) == 0)) {
    puVar25 = (undefined *)0x0;
  }
  else {
    dStack_118 = param_7[1];
    dVar28 = *param_7;
    dStack_110 = param_7[2];
    dStack_120 = dVar28;
    _CMTimeGetSeconds(&dStack_120);
    _objc_opt_class(param_2);
    puVar25 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar25);
    plVar1 = (long *)(param_2 + _DAT_11276ab40);
    lVar26 = *plVar1;
    dStack_118 = param_6[1];
    dVar29 = *param_6;
    dStack_110 = param_6[2];
    dStack_120 = dVar29;
    _CMTimeGetSeconds(&dStack_120);
    uVar27 = 0.0 < dVar29;
    dStack_118 = param_6[1];
    dStack_120 = *param_6;
    dStack_110 = param_6[2];
    puVar25 = param_2;
    func_0x00010be9d260(param_2,param_3,&dStack_120);
    dStack_118 = param_7[1];
    dStack_120 = *param_7;
    dStack_110 = param_7[2];
    puVar6 = param_2;
    func_0x00010be9d260(param_2,param_3,&dStack_120);
    lVar24 = *plVar1;
    if (lVar24 < 3) {
      puStack_130 = param_2;
      if (lVar24 == 0) {
        bVar3 = true;
        func_0x00010bdf70a0(param_2,param_3,puVar25,puVar6,1);
      }
      else if (lVar24 == 1) {
        bVar3 = true;
        func_0x00010bdf70a0(param_2,param_3,puVar25,puVar6,1);
        uVar27 = 5;
      }
      else if (lVar24 == 2) {
        func_0x00010bdf70a0(param_2,param_3,puVar25,puVar6,0);
        bVar3 = false;
        uVar27 = 4;
      }
      else {
        puStack_130 = (undefined *)0x7fffffffffffffff;
        bVar3 = false;
      }
    }
    else {
      uVar4 = 0xf;
      if (2 < lVar24 - 3U) {
        uVar4 = uVar27;
      }
      uVar27 = uVar4;
      puStack_130 = (undefined *)0x7fffffffffffffff;
      bVar3 = false;
    }
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_100 = puVar6;
    func_0x00010c0df720(dVar28 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b2348;
    puStack_c0 = puVar7;
    func_0x00010c2a2680();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f8 = puVar8;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar26 != 0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2348;
    puStack_b8 = puVar9;
    func_0x00010c250760();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f0 = puVar10;
    func_0x00010c0df720((double)plVar1[1] * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b2348;
    puStack_b0 = puVar11;
    func_0x00010bf95320();
    _objc_retainAutoreleasedReturnValue();
    param_1 = (double)plVar1[2] * 1000.0;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e8 = puVar12;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b2348;
    puStack_a8 = puVar13;
    func_0x00010c0c4a80();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e0 = puVar14;
    func_0x00010beed820(*(undefined8 *)(param_2 + _DAT_11276ab08));
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c9cf8;
    puStack_a0 = puVar25;
    func_0x00010c27c520();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = puVar15;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c9cf8;
    puStack_98 = puVar16;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_4;
    puStack_d0 = puVar17;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    if (puVar18 == (undefined *)0x0) {
      puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar20 = PTR_PTR_1126c9cf8;
    puStack_90 = puVar19;
    func_0x00010bf9a340();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_5;
    puStack_c8 = puVar20;
    if (param_5 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar21;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_c0,&puStack_100,8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c0d3c80();
    _objc_release(puVar22);
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar21);
    }
    _objc_release(puVar20);
    if (puVar18 == (undefined *)0x0) {
      _objc_release(puVar19);
    }
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar25);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*plVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010bf50080(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar23,param_3,puVar25,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar25);
    if (puStack_130 != (undefined *)0x7fffffffffffffff) {
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puStack_130);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2348;
      func_0x00010c156fa0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar23,param_3,puVar25,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar25);
    }
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (bVar3) {
      puVar6 = param_2;
      func_0x00010be9d280();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) {
        bVar2 = false;
        bVar5 = false;
      }
      else {
        func_0x00010be9d280(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_2;
        func_0x00010bf529e0();
        bVar5 = puStack_130 == puVar7 + -1;
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
      bVar5 = false;
    }
    func_0x00010c0df760(puVar25,param_3,bVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2348;
    func_0x00010c1570c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar23,param_3,puVar25,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar25);
    if (bVar2) {
      _objc_release(param_2);
    }
    if (bVar3) {
      _objc_release(puVar6);
    }
    puVar25 = puVar23;
    func_0x00010bf51e00();
    _objc_release(puVar23);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_4);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return param_1;
}



/* Entry: 107b485fc; end: 107b4865f; -[SCOperaVideoLayerViewController mediaViewFrame] */

undefined8 FUN_107b485fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107b48660; end: 107b4868f; -[SCOperaVideoLayerViewController mediaViewContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b48660(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abe0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b48690; end: 107b4871f; -[SCOperaVideoLayerViewController _originalHeightToWidthAspectRatio] */

double FUN_107b48690(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010bde8060();
  dVar3 = ABS(param_1);
  dVar2 = 0.0;
  dVar4 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
    bVar1 = dVar3 < dVar4;
  }
  if (!bVar1) {
    dVar3 = ABS(param_2);
    dVar4 = ABS(param_2 + 0.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar4))) {
      bVar1 = dVar3 < dVar4;
    }
    if (!bVar1) {
      dVar2 = -param_2;
      if (0.0 <= param_2) {
        dVar2 = param_2;
      }
      dVar3 = -param_1;
      if (0.0 <= param_1) {
        dVar3 = param_1;
      }
      dVar2 = dVar2 / dVar3;
    }
  }
  return dVar2;
}



/* Entry: 107b48720; end: 107b4875f; -[SCOperaVideoLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b48720(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010be6e640();
  dVar1 = 1.0 / param_1;
  if (1 < *(long *)(param_2 + _DAT_11276ab10) - 3U) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 107b48760; end: 107b48767; -[SCOperaVideoLayerViewController isOverlay] */

undefined8 FUN_107b48760(void)

{
  return 0;
}



/* Entry: 107b48768; end: 107b48c63; -[SCOperaVideoLayerViewController playerItemDidReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b48768(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_opt_class();
  uVar3 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010befa560(param_1);
  *(undefined1 *)(param_1 + (long)_DAT_11276abb8) = 1;
  func_0x00010bf78e40(*(undefined8 *)(param_1 + (long)_DAT_11276abac));
  lVar10 = (long)_DAT_11276abb0;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c29ae60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c29ae60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4680(0x3ff0000000000000);
    _objc_release(uVar6);
    func_0x00010bf92400(*(undefined8 *)(param_1 + lVar10));
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0da1c0();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      func_0x00010bedc920(0,param_1);
    }
  }
  if (((*(byte *)(param_1 + (long)_DAT_11276ac24) & 1) == 0) &&
     (*(char *)(param_1 + (long)_DAT_11276abc8) == '\x01')) {
    _objc_opt_class(param_1);
    uVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + (long)_DAT_11276ac0c) = 1;
  }
  else {
    _objc_opt_class(param_1);
    uVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    func_0x00010c0694c0(param_1);
    lVar5 = (long)_DAT_11276ab64;
    func_0x00010bfec4c0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = param_1;
    func_0x00010beb46e0();
    if ((int)uVar3 == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
      func_0x00010c06cb40();
      if ((iVar2 != 0) && (uVar3 = param_1, func_0x00010be3e4a0(), (uVar3 & 1) == 0)) {
        _objc_opt_class(param_1);
        uVar3 = param_1;
        func_0x00010c0f0be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010c0ea360();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c069200();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf8e240();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((int)uVar8 != 0) {
          puVar9 = PTR_PTR_1126b2638;
          func_0x00010c2a6840(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04420(param_1);
          _objc_release(puVar9);
        }
        puVar9 = PTR_PTR_1126b2638;
        func_0x00010bf112e0(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04420(param_1);
        _objc_release(puVar9);
      }
    }
    else {
      *(undefined1 *)(param_1 + (long)_DAT_11276abbc) = 1;
      uVar3 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c117ac0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        puVar9 = PTR_PTR_1126b2338;
        func_0x00010c29b4c0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04420(param_1);
        _objc_release(puVar9);
      }
      _objc_opt_class(param_1);
      uVar3 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      _objc_initWeak(auStack_48,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107b48c64;
      puStack_58 = &UNK_110849200;
      _objc_copyWeak(auStack_50,auStack_48);
      ppuVar7 = &puStack_70;
      _objc_retainBlock(ppuVar7);
      uVar3 = param_1;
      func_0x00010be3e4a0();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010be74f60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c157300();
        _objc_release(uVar3);
      }
      else {
        func_0x00010c1572e0(0,param_1);
      }
      puVar1 = (undefined8 *)(param_1 + (long)_DAT_11276ab40);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      func_0x00010befa560(param_1);
      _objc_release(ppuVar7);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    puVar9 = PTR_PTR_1126b2338;
    func_0x00010c299d40(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1);
    _objc_release(puVar9);
    func_0x00010befa560(param_1);
  }
  return;
}



/* Entry: 107b48c64; end: 107b48d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b48c64(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_opt_class(param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11276abbc;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bddc900(0,param_1);
    if (*(char *)(param_1 + lVar4) == '\x01') {
      if (param_2 == 0) {
        func_0x00010be953c0(param_1);
      }
      else {
        func_0x00010bedea40();
        func_0x00010be6da60(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b48d64; end: 107b48dc3; -[SCOperaVideoLayerViewController _isAutoLoopEnabled] */

bool FUN_107b48d64(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf11880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0.0 < param_1;
}



/* Entry: 107b48dc4; end: 107b48e77; -[SCOperaVideoLayerViewController _shouldTriggerAutoLoop:] */

undefined4 FUN_107b48dc4(double param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = param_2;
  dVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf11880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf11880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010be3e4a0(param_2);
    uVar1 = 0;
    if (dVar4 <= param_1) {
      uVar1 = (undefined4)param_2;
    }
  }
  return uVar1;
}



/* Entry: 107b48e78; end: 107b48f07; -[SCOperaVideoLayerViewController _triggerAutoLoop] */

void FUN_107b48e78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf11880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_opt_class(param_1);
  uVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c100b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_playerItemDidReachEnd_11261dcf0);
  return;
}



/* Entry: 107b48f08; end: 107b48fc3; -[SCOperaVideoLayerViewController _shouldLoopWhenReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b48f08(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = param_1;
  func_0x00010be3e4a0();
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + (long)_DAT_11276ab64);
    func_0x00010bf2ce00();
    if (iVar2 == 0) {
      return false;
    }
    uVar3 = param_1;
    func_0x00010beb6840();
    if ((int)uVar3 != 0) {
      uVar3 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf50060();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c22e260();
      if ((uVar5 & 1) == 0) {
        bVar1 = *(long *)(param_1 + (long)_DAT_11276ac04) - 2U < 3;
      }
      else {
        bVar1 = true;
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      return bVar1;
    }
  }
  return true;
}



/* Entry: 107b48fc4; end: 107b49033; -[SCOperaVideoLayerViewController _elapsedTimeWithPlayerCurrentTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b48fc4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_2 + _DAT_11276ab64);
  func_0x00010be5e700();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x00010bf8d160(param_1,lVar1,param_3,&uStack_50);
  }
  return;
}



/* Entry: 107b49034; end: 107b4909f; -[SCOperaVideoLayerViewController _changeCurrentProgressTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49034(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276ab64);
  uVar2 = param_1;
  func_0x00010be5e700();
  func_0x00010bf5fc20(param_1,uVar2,uVar1);
  func_0x00010c117a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34e20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b490a0; end: 107b492b3; -[SCOperaVideoLayerViewController _observeMediaServicesLostSharedResourceVariable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b490a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276ac48;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,param_1);
  lVar4 = (long)_DAT_11276ab0c;
  lVar3 = *(long *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107b492b4;
  puStack_88 = &UNK_110944698;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar5));
  }
  lVar4 = *(long *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (lVar4 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar4);
  return;
}



/* Entry: 107b492b4; end: 107b4931b;  */

void FUN_107b492b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdff620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b4931c; end: 107b49447; -[SCOperaVideoLayerViewController _didReceiveMediaServicesWereLostNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4931c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_opt_class();
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0b380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + _DAT_11276ac50) = 3;
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar6 = PTR_PTR_1126ba158;
  func_0x00010bf87dc0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar7,param_2,puVar6,100,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276ac3c);
  *(undefined **)(param_1 + _DAT_11276ac3c) = puVar7;
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107b49448; end: 107b49633; -[SCOperaVideoLayerViewController _didReceiveMediaServicesWereResetNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49448(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_opt_class();
  lVar7 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf0b380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = (long)_DAT_11276ac3c;
  if (*(long *)(param_1 + lVar7) == 0) {
    return;
  }
  _objc_opt_class(param_1);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0b380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + _DAT_11276ac50) = 0;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar6);
  if (*(char *)(param_1 + _DAT_11276abbc) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be953d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartPlayer__112582e90,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be94410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resetVideoAsset_debugReason__112582aa0,1,
             &PTR____CFConstantStringClassReference_110eaed78);
  return;
}



/* Entry: 107b49634; end: 107b49737; -[SCOperaVideoLayerViewController _setupLoadingIndicatorConfigsWithOperaDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf461c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf1f440();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d6ad0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276ab04);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276ab0c);
  uVar1 = param_3;
  func_0x00010bfcdfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c021320(puVar3,param_2,uVar4,uVar5,param_1,uVar1,uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abd0);
  *(undefined **)(param_1 + _DAT_11276abd0) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b49738; end: 107b4973f; -[SCOperaVideoLayerViewController videoAssetWithoutLoadValues] */

void FUN_107b49738(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee89d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoAssetWithLoadValues__112597c18,0);
  return;
}



/* Entry: 107b49740; end: 107b49747; -[SCOperaVideoLayerViewController videoAsset] */

void FUN_107b49740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee89d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoAssetWithLoadValues__112597c18,1);
  return;
}



/* Entry: 107b49748; end: 107b49777; -[SCOperaVideoLayerViewController currentVideoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49748(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abcc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b49778; end: 107b49adf; -[SCOperaVideoLayerViewController _videoAssetWithLoadValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49778(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **unaff_x22;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11276abcc;
  ppuVar1 = param_3;
  if (*(long *)((long)param_1 + lVar9) == 0) {
    ppuVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar1);
    unaff_x22 = param_1;
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = param_1;
      func_0x00010c299240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      ppuVar1 = ppuVar4;
      func_0x00010c2991c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)param_1 + lVar9);
      *(undefined ***)((long)param_1 + lVar9) = ppuVar5;
      _objc_release(uVar8);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar6);
      _objc_opt_class(param_1);
      ppuVar6 = *(undefined ***)((long)param_1 + lVar9);
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126bcb80;
      _objc_alloc();
      ppuVar6 = (undefined **)((long)param_1 + (long)_DAT_11276ab00);
      _objc_loadWeakRetained();
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = unaff_x22;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar6;
      func_0x00010bf0ba00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010bfefc40();
      *(undefined **)((long)param_1 + lVar9) = puVar2;
    }
    _objc_release();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(unaff_x22);
    _objc_release(ppuVar6);
    lVar7 = *(long *)((long)param_1 + lVar9);
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      _objc_release();
    }
    if ((int)param_3 != 0) {
      _objc_initWeak(auStack_80,param_1);
      uVar8 = *(undefined8 *)((long)param_1 + lVar9);
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e3c5d8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110dd00b8;
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107b49ae0;
      puStack_90 = &UNK_1109fddc8;
      unaff_x22 = &puStack_a8;
      _objc_copyWeak(auStack_88,auStack_80);
      ppuVar1 = ppuVar6;
      func_0x00010c09c660(uVar8);
      _objc_release(ppuVar6);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
  }
  lVar7 = *(long *)((long)param_1 + lVar9);
  lVar9 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(ppuVar1);
  lVar9 = lVar9 + 0x20;
  _objc_loadWeakRetained();
  if ((ppuVar1 != (undefined **)0x0) && (lVar9 != 0)) {
    _objc_opt_class(lVar9);
    lVar7 = lVar9;
    func_0x00010c0f0be0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    ppuVar6 = ppuVar1;
    func_0x000107ddcbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa560(lVar9);
    _objc_release(ppuVar6);
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107b49ae0; end: 107b49b9b;  */

void FUN_107b49ae0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 != 0) && (param_1 != 0)) {
    _objc_opt_class(param_1);
    lVar1 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x000107ddcbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaedb8);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b49b9c; end: 107b49c33; -[SCOperaVideoLayerViewController _videoTrack] */

void FUN_107b49b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c279200(lVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b49c34; end: 107b49d6b; -[SCOperaVideoLayerViewController _resetVideoAsset:debugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49c34(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  lVar4 = (long)_DAT_11276abcc;
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c299240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139c60(lVar1,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 107b49d6c; end: 107b49dd3; -[SCOperaVideoLayerViewController handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49d6c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11276ac08)) {
    func_0x00010beccfa0(param_1);
  }
  else if (param_3 == *(long *)(param_1 + _DAT_11276abfc)) {
    func_0x00010beccfc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b49dd4; end: 107b49ebb; -[SCOperaVideoLayerViewController _toggleVideoControlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49dd4(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276abd4;
  if (*(long *)(param_2 + _DAT_11276ac04) == 0) {
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c0ff060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    _objc_release(uVar3);
    if (param_1 == 0.0) {
LAB_107b49e78:
      func_0x00010bf9f5e0(*(undefined8 *)(param_2 + lVar5));
      puVar4 = PTR_PTR_1126c9400;
      func_0x00010c269700(PTR_PTR_1126c9400);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04420(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  else if (*(long *)(param_2 + _DAT_11276ac04) == 1) {
    uVar1 = *(ulong *)(param_2 + lVar5);
    func_0x00010c0ff060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf500a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_107b49e78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar5),PTR_s_fadeOutControls_1125c5790);
  return;
}



/* Entry: 107b49ebc; end: 107b49edb; -[SCOperaVideoLayerViewController pageDidChangeResizingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49ebc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276abd4);
  if (lVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_fadeOutControls_1125c5790);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_fadeInControls_1125c5720);
  return;
}



/* Entry: 107b49edc; end: 107b4a09f; -[SCOperaVideoLayerViewController _toggleVideoProgressView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b49edc(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c117ac0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276abb0);
    func_0x00010bf9bfc0();
    lVar2 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2338;
    func_0x00010c282960(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf60c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    if (iVar1 == 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276ac54));
    }
    else {
      func_0x00010bedc920(0x4034000000000000,param_1);
    }
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c150360(0x3ff8000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11276ac54);
    *(undefined **)(param_1 + _DAT_11276ac54) = puVar4;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107b4a0a0; end: 107b4a0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a0a0(long param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276abb0);
    func_0x00010bf3fb20();
    if (iVar1 != 0) {
      func_0x00010bedc920(0,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b4a0ec; end: 107b4a1e7; -[SCOperaVideoLayerViewController _updateOverlappedLayersYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a0ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_58;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_class();
  lVar4 = param_2;
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  func_0x00010c2241a0((double)((uint)ppuVar5 ^ 1),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf7da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11276abd4),PTR_s_didToggleVolume__1125bd030,ppuVar5);
  return;
}



/* Entry: 107b4a1e8; end: 107b4a25f; -[SCOperaVideoLayerViewController videoControlsView:didToggleVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a1e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_opt_class();
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  func_0x00010c2241a0((double)((uint)param_4 ^ 1),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf7da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276abd4),PTR_s_didToggleVolume__1125bd030,param_4);
  return;
}



/* Entry: 107b4a260; end: 107b4a263; -[SCOperaVideoLayerViewController videoControlsView:didToggleCaption:] */

void FUN_107b4a260(void)

{
  return;
}



/* Entry: 107b4a264; end: 107b4a28f; -[SCOperaVideoLayerViewController videoControlsView:didToggleRotateLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a264(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_4 != 0) {
    uVar1 = 4;
  }
  if (1 < *(long *)(param_1 + _DAT_11276ab10) - 1U) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setTargetOrientation_andRotateV_112587ab8,uVar1,1);
  return;
}



/* Entry: 107b4a290; end: 107b4a3e3; -[SCOperaVideoLayerViewController videoControlsView:didToggleControlsVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11276ac04) == 1) {
    func_0x00010bea82a0(param_1,param_2,0);
    puVar1 = PTR_PTR_1126c9400;
    func_0x00010c272d80(PTR_PTR_1126c9400);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9408;
    func_0x00010c29fbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_68 = puVar2;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9408;
    puStack_58 = puVar3;
    func_0x00010bf03ba0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185030;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&puStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar1,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b4a3e4; end: 107b4a3e7; -[SCOperaVideoLayerViewController videoControlsViewDidPressShowActionMenuButton:] */

void FUN_107b4a3e4(void)

{
  return;
}



/* Entry: 107b4a3e8; end: 107b4a453; -[SCOperaVideoLayerViewController videoControlsViewDidPressSendButton:] */

void FUN_107b4a3e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9400;
  func_0x00010c15b3c0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b4a454; end: 107b4a57b; -[SCOperaVideoLayerViewController _setTargetOrientation:andRotateView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4a454(long param_1,undefined8 param_2,long param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  lVar4 = (long)_DAT_11276ab10;
  if (*(long *)(param_1 + lVar4) != param_3) {
    if (param_3 - 3U < 2) {
      if (param_3 == 4) {
        _CGAffineTransformMakeRotation(&uStack_60,0xbff921fb54442d18);
        bVar1 = false;
        *(undefined8 *)(param_1 + lVar4) = 4;
      }
      else {
        _CGAffineTransformMakeRotation(&uStack_60,0x3ff921fb54442d18);
        *(long *)(param_1 + lVar4) = param_3;
        bVar1 = true;
      }
    }
    else {
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      *(long *)(param_1 + lVar4) = param_3;
      if (param_3 == 1) {
        puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
        func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0ed100();
        bVar1 = puVar3 == (undefined *)0x4;
        _objc_release(puVar2);
      }
      else {
        bVar1 = false;
      }
    }
    func_0x00010c272b40(*(undefined8 *)(param_1 + _DAT_11276abd4),param_2,bVar1);
    if (param_4 != 0) {
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      uStack_80 = uStack_50;
      uStack_68 = uStack_38;
      uStack_70 = uStack_40;
      func_0x00010be97800(param_1,param_2,&uStack_90,1);
    }
  }
  return;
}



/* Entry: 107b4a57c; end: 107b4aa4b; -[SCOperaVideoLayerViewController _rotateVideoWithTransform:animated:] */

void FUN_107b4a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 *param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  
  ppuVar8 = &puStack_160;
  lVar4 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    dStack_a0 = 0.0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_c0,lVar4);
  }
  uStack_e8 = param_7[1];
  uStack_f0 = *param_7;
  uStack_d8 = param_7[3];
  uVar14 = param_7[2];
  uStack_c8 = param_7[5];
  dVar11 = (double)param_7[4];
  puVar5 = &uStack_c0;
  uStack_e0 = uVar14;
  dStack_d0 = dVar11;
  _CGAffineTransformEqualToTransform(puVar5,&uStack_f0);
  _objc_release(lVar4);
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar12 = dVar11;
  _objc_release(lVar4);
  func_0x00010be6e640(param_5);
  dVar15 = dVar11;
  _CGRectGetWidth(dVar11,uVar14,param_3,param_4);
  dVar16 = dVar11;
  _CGRectGetHeight(dVar11,uVar14,param_3,param_4);
  if (dVar16 <= dVar15) {
    dVar16 = dVar15;
  }
  if (NAN(dVar16)) {
    dVar16 = 0.0;
  }
  dVar15 = dVar11;
  _CGRectGetWidth(dVar11,uVar14,param_3,param_4);
  _CGRectGetHeight(dVar11,uVar14,param_3,param_4);
  if (dVar11 <= dVar15) {
    dVar15 = dVar11;
  }
  if (NAN(dVar15)) {
    dVar15 = 0.0;
  }
  fVar13 = ABS((float)dVar16);
  fVar10 = ABS((float)dVar16 + 0.0) * 1.1920929e-07;
  bVar1 = true;
  if ((1.1754944e-38 <= fVar13) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar10))) {
    bVar1 = fVar13 < fVar10;
  }
  fVar13 = ABS((float)dVar15);
  fVar10 = ABS((float)dVar15 + 0.0) * 1.1920929e-07;
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(fVar13))) {
    bVar2 = fVar13 < 1.1754944e-38;
  }
  bVar1 = true;
  if ((!bVar2) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar10))) {
    bVar1 = fVar13 < fVar10;
  }
  fVar13 = ABS((float)dVar12);
  fVar10 = ABS((float)dVar12 + 0.0) * 1.1920929e-07;
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(fVar13))) {
    bVar2 = fVar13 < 1.1754944e-38;
  }
  bVar1 = true;
  if ((!bVar2) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar10))) {
    bVar1 = fVar13 < fVar10;
  }
  if (bVar1) {
    return;
  }
  uStack_b8 = param_7[1];
  uStack_c0 = *param_7;
  uStack_a8 = param_7[3];
  uStack_b0 = param_7[2];
  uStack_98 = param_7[5];
  dStack_a0 = (double)param_7[4];
  iVar3 = (int)&uStack_c0;
  _CGAffineTransformIsIdentity();
  if (iVar3 == 0) {
    dVar11 = dVar16;
    dVar17 = dVar15;
    if (dVar12 <= 1.0) {
      dVar11 = dVar16 / dVar12;
      dVar17 = dVar16;
    }
  }
  else {
    lVar4 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      dStack_a0 = 0.0;
      uStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_c0,lVar4);
    }
    _CGAffineTransformMakeRotation(&uStack_f0,0xbff921fb54442d18);
    puVar5 = &uStack_c0;
    _CGAffineTransformEqualToTransform(puVar5,&uStack_f0);
    if ((int)puVar5 == 0) {
      lVar6 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        dStack_a0 = 0.0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_c0,lVar6);
      }
      _CGAffineTransformMakeRotation(&uStack_f0,0x3ff921fb54442d18);
      puVar5 = &uStack_c0;
      _CGAffineTransformEqualToTransform(puVar5,&uStack_f0);
      _objc_release(lVar6);
      _objc_release(lVar4);
      if ((int)puVar5 == 0) {
        return;
      }
    }
    else {
      _objc_release(lVar4);
    }
    dVar11 = dVar15;
    dVar17 = dVar16;
    if (dVar12 <= 1.0) {
      dVar17 = dVar12 * dVar15;
    }
  }
  uStack_b8 = param_7[1];
  uStack_c0 = *param_7;
  uStack_a8 = param_7[3];
  uStack_b0 = param_7[2];
  uStack_98 = param_7[5];
  dVar12 = (double)param_7[4];
  uVar7 = 0;
  dStack_a0 = dVar12;
  _CGAffineTransformIsIdentity();
  if ((uVar7 & 1) == 0) {
    _CGAffineTransformMakeRotation(&uStack_c0,0x400921fb54442d18);
    uStack_e8 = param_7[1];
    uStack_f0 = *param_7;
    uStack_d8 = param_7[3];
    uStack_e0 = param_7[2];
    uStack_c8 = param_7[5];
    dVar12 = (double)param_7[4];
    puVar5 = &uStack_f0;
    dStack_d0 = dVar12;
    _CGAffineTransformEqualToTransform(puVar5,&uStack_c0);
    if ((int)puVar5 == 0) {
      _CGAffineTransformMakeRotation(&uStack_c0,0xbff921fb54442d18);
      uStack_e8 = param_7[1];
      uStack_f0 = *param_7;
      uStack_d8 = param_7[3];
      uStack_e0 = param_7[2];
      uStack_c8 = param_7[5];
      dStack_d0 = (double)param_7[4];
      puVar5 = &uStack_f0;
      _CGAffineTransformEqualToTransform(puVar5,&uStack_c0);
      if (((ulong)puVar5 & 1) == 0) {
        _CGAffineTransformMakeRotation(&uStack_c0,0x3ff921fb54442d18);
        uStack_e8 = param_7[1];
        uStack_f0 = *param_7;
        uStack_d8 = param_7[3];
        uStack_e0 = param_7[2];
        uStack_c8 = param_7[5];
        dStack_d0 = (double)param_7[4];
        puVar5 = &uStack_f0;
        _CGAffineTransformEqualToTransform(puVar5,&uStack_c0);
        if ((int)puVar5 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_107b4a920;
        }
      }
      puVar9 = PTR_PTR_1126b2640;
      func_0x00010c08cb00();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107b4a920;
    }
  }
  puVar9 = PTR_PTR_1126b2640;
  func_0x00010c0c5140(param_5);
  lVar4 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87840();
  func_0x00010c08cb40(dVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
LAB_107b4a920:
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107b4aa4c;
  puStack_148 = &UNK_1109fddf8;
  uStack_128 = param_7[1];
  uStack_130 = *param_7;
  uStack_118 = param_7[3];
  uStack_120 = param_7[2];
  uStack_108 = param_7[5];
  uStack_110 = param_7[4];
  lStack_140 = param_5;
  dStack_100 = dVar11;
  dStack_f8 = dVar17;
  _objc_retain(puVar9);
  puStack_138 = puVar9;
  _objc_retainBlock();
  if (param_8 == 0) {
    (**(code **)((long)ppuVar8 + 0x10))(ppuVar8);
  }
  else {
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar8);
  _objc_release(puStack_138);
  _objc_release(puVar9);
  return;
}



/* Entry: 107b4aa4c; end: 107b4ac73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4aa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c0f3ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1cbe20(uVar1);
  func_0x00010c08cdc0(uVar1);
  uVar8 = *(undefined8 *)(param_5 + 0x40);
  uVar7 = *(undefined8 *)(param_5 + 0x50);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bc85160();
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(uVar7,uVar8,param_3,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  uVar8 = uVar7;
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar7,uVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c08d120(*(long *)(param_5 + 0x20),param_6,
                      *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11276abe0),
                      *(undefined8 *)(param_5 + 0x28),0);
  _objc_release(uVar1);
  return;
}



/* Entry: 107b4ac74; end: 107b4af5f; -[SCOperaVideoLayerViewController videoControlsView:didTogglePlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4ac74(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x26;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_opt_class(param_1);
    lVar4 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    func_0x00010c0694c0(param_1);
    func_0x00010bf782c0(*(undefined8 *)(param_1 + _DAT_11276abd4));
  }
  else {
    _objc_initWeak(auStack_90,param_1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107b4af60;
    puStack_a0 = &UNK_1108434b0;
    unaff_x26 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    ppuVar1 = &puStack_b8;
    _objc_retainBlock();
    lVar4 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be75100();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if ((int)lVar3 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_11276abbc) = 1;
      _objc_copyWeak(auStack_c0,auStack_90);
      _objc_retain(ppuVar1);
      func_0x00010c1571c0(param_1);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_c0);
    }
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  puVar5 = PTR_PTR_1126c9400;
  func_0x00010c272ac0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9408;
  func_0x00010c0fe400();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar6;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar6 + 0x28);
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 != 0) && (func_0x00010be6da60(param_3), *(long *)(param_3 + _DAT_11276ac04) == 0)) {
    func_0x00010bf9f7a0(*(undefined8 *)(param_3 + _DAT_11276abd4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4af60; end: 107b4afbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4af60(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (func_0x00010be6da60(param_1,param_2,&PTR____CFConstantStringClassReference_110eaedd8),
     *(long *)(param_1 + _DAT_11276ac04) == 0)) {
    func_0x00010bf9f7a0(*(undefined8 *)(param_1 + _DAT_11276abd4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b4afbc; end: 107b4b01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4afbc(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (lVar1 != 0)) && (*(char *)(lVar1 + _DAT_11276abbc) == '\x01')) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b4b01c; end: 107b4b0fb; -[SCOperaVideoLayerViewController videoControlsViewDidBeginSeeking:pauseOnSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4b01c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11276ab28);
  uStack_48 = puVar1[1];
  uVar4 = *puVar1;
  uStack_40 = puVar1[2];
  uStack_50 = uVar4;
  _CMTimeGetSeconds(&uStack_50);
  *(undefined8 *)(param_1 + _DAT_11276ab40 + 8) = uVar4;
  func_0x00010bf72a00(*(undefined8 *)(param_1 + _DAT_11276abd4));
  if (param_4 != 0) {
    _objc_opt_class(param_1);
    lVar2 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    func_0x00010c0694c0(param_1,param_2,0);
  }
  puVar3 = PTR_PTR_1126c9400;
  func_0x00010c2999c0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar3);
  _objc_release(puVar3);
  return;
}



/* Entry: 107b4b0fc; end: 107b4b217; -[SCOperaVideoLayerViewController videoControlsSeekingProgressDidUpdate:seekingTargetTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4b0fc(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c2999e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9408;
  func_0x00010c157360();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar3;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&puStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puVar6 = puVar5;
  func_0x00010bf04440(param_2);
  iVar10 = (int)puVar6;
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107b4b218;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  iVar1 = _DAT_11276ab40;
  dVar13 = *(double *)(puVar2 + (long)_DAT_11276ab40 + 8);
  dVar12 = *(double *)(puVar2 + (long)_DAT_11276ab40 + 0x10);
  lVar11 = (long)_DAT_11276ac04;
  if ((iVar10 != 0) && (*(long *)(puVar2 + lVar11) == 0)) {
    func_0x00010be6da60(puVar2,param_3,&PTR____CFConstantStringClassReference_110eaedf8);
    *(undefined8 *)(puVar2 + (long)iVar1 + 8) = 0;
  }
  if (((*(long *)(puVar2 + lVar11) == 1) &&
      (func_0x00010bfe1d40(*(undefined8 *)(puVar2 + _DAT_11276abd4)), iVar10 != 0)) &&
     ((puVar2[_DAT_11276ab1c] & 1) == 0)) {
    func_0x00010be6da60(puVar2,param_3,&PTR____CFConstantStringClassReference_110eaee18);
  }
  puVar3 = PTR_PTR_1126c9400;
  func_0x00010c2999a0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9408;
  func_0x00010c1570e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar4;
  func_0x00010c0df720(dVar13 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9408;
  puStack_f8 = puVar5;
  func_0x00010c157360();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar6;
  func_0x00010c0df720(dVar12 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_f8,&puStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(puVar2,param_3,puVar3,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107b4b414;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107b4b474;
  puStack_130 = &UNK_110842e18;
  puStack_128 = puVar9;
  ppuStack_120 = &puStack_80;
  func_0x00010bf9f7c0(*(undefined8 *)(puVar9 + _DAT_11276abd4),param_3,&puStack_148);
  return;
}



/* Entry: 107b4b218; end: 107b4b413; -[SCOperaVideoLayerViewController videoControlsView:didEndSeekingWithPlayButtonToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4b218(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11276ab40;
  dVar10 = *(double *)(lVar1 + 8);
  dVar9 = *(double *)(lVar1 + 0x10);
  lVar8 = (long)_DAT_11276ac04;
  if ((param_4 != 0) && (*(long *)(param_1 + lVar8) == 0)) {
    func_0x00010be6da60(param_1,param_2,&PTR____CFConstantStringClassReference_110eaedf8);
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if (((*(long *)(param_1 + lVar8) == 1) &&
      (func_0x00010bfe1d40(*(undefined8 *)(param_1 + _DAT_11276abd4)), param_4 != 0)) &&
     ((*(byte *)(param_1 + _DAT_11276ab1c) & 1) == 0)) {
    func_0x00010be6da60(param_1,param_2,&PTR____CFConstantStringClassReference_110eaee18);
  }
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c2999a0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9408;
  func_0x00010c1570e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar3;
  func_0x00010c0df720(dVar10 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9408;
  puStack_88 = puVar4;
  func_0x00010c157360();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar5;
  func_0x00010c0df720(dVar9 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&puStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_107b4b414;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107b4b474;
  puStack_c0 = &UNK_110842e18;
  lStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf9f7c0(*(undefined8 *)(param_3 + _DAT_11276abd4),param_2,&puStack_d8);
  return;
}



/* Entry: 107b4b414; end: 107b4b473; -[SCOperaVideoLayerViewController videoControlsViewDidPressExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4b414(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b4b474;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf9f7c0(*(undefined8 *)(param_1 + _DAT_11276abd4),param_2,&puStack_38);
  return;
}



/* Entry: 107b4b474; end: 107b4b4b7;  */

void FUN_107b4b474(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


