/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068a7ca4; end: 1068a7cdb;  */

void FUN_1068a7ca4(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068a7cdc; end: 1068a7ecf; -[SCSpotlightToStoriesPostingConstructor _sendEphemeralMediaParams:spotlightSnapDoc:storiesConfig:completion:] */

void FUN_1068a7cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c08ef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar6);
  func_0x00010bed7980(param_1);
  puVar2 = PTR_PTR_1126c4290;
  _objc_alloc(PTR_PTR_1126c4290);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010720(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010c1b13a0(puVar2);
  _objc_retain(param_4);
  func_0x00010be9f760(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0(*(undefined8 *)(lVar1 + 0x20));
  _objc_release(param_2);
  func_0x00010c16b8e0(*(undefined8 *)(lVar1 + 0x20));
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1068a7ed0; end: 1068a7f2f;  */

void FUN_1068a7ed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010c16b8e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068a7f30; end: 1068a8027; -[SCSpotlightToStoriesPostingConstructor _createRepostInfoWithPlaybackMetadata:version:] */

void FUN_1068a7f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cea60;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf5b440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c220e20(puVar1,param_2,param_4);
  func_0x00010c2056c0(puVar1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068a8028; end: 1068a812b; -[SCSpotlightToStoriesPostingConstructor _injectRepostMetadata:snapDoc:] */

void FUN_1068a8028(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_4);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bf4e080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c1eb840(lVar4,param_2,param_3);
    func_0x00010c1863e0(lVar4,param_2,0);
    func_0x00010c212080(lVar4,param_2,0);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a812c; end: 1068a814b;  */

bool FUN_1068a812c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 1068a814c; end: 1068a8727; -[SCSpotlightToStoriesPostingConstructor _updateEphemeralCommonLoggingParameters:storiesPostingConfig:businessIds:] */

void FUN_1068a814c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined1 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010846b750();
  func_0x00010bf529e0();
  func_0x00010c105440();
  lVar4 = param_4;
  func_0x00010c0d4ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(lVar4);
  uVar17 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar4 = param_4;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar9 = auStack_f0;
  uVar10 = 0x10;
  lVar4 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_130);
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar5);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar6 = uVar13;
        func_0x00010c071ae0(uVar13,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c74e0);
        if ((uVar6 & 1) == 0) {
          func_0x00010c071ae0(uVar13,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c74f8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar9 = auStack_f0;
      uVar10 = 0x10;
      lVar4 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130);
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba560();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd000();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bcfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bcfa0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c105440(param_4);
  func_0x00010c2bcf60(lVar4,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c105460(param_4);
  func_0x00010c2bd0a0(lVar4,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd160();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010846b638(param_4);
  func_0x00010c2bd080(lVar4,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010846b6bc(param_4);
  func_0x00010c2bd040(lVar4,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba380();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c0d4ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd020(lVar4,param_2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c0ee3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd060(lVar4,param_2,lVar5 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b68e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010c08fa60();
  func_0x00010c2bcf20(lVar4,param_2,lVar12 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae860();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd0e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c22dd20();
  func_0x00010c2b6ba0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(lVar5);
    _objc_retain(puVar9);
    _objc_retain(uVar10);
    _objc_retain(param_6);
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar7);
    puVar8 = puVar9;
    func_0x00010c105440();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = puVar9;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined1 *)0x0) {
        lVar12 = *(long *)(param_3 + 0x90);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar12;
        func_0x00010c25aac0();
        bVar3 = lVar4 == 0;
        _objc_release(lVar12);
      }
      else {
        bVar3 = true;
      }
      _objc_release(puVar8);
    }
    else {
      bVar3 = true;
    }
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    uVar2 = *(undefined8 *)(param_3 + 0x88);
    uVar14 = *(undefined8 *)(param_3 + 0x30);
    uVar15 = *(undefined8 *)(param_3 + 0x78);
    uVar16 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar16);
    _objc_retain(uVar1);
    _objc_retain(uVar15);
    _objc_retain(uVar14);
    _objc_retain(uVar2);
    lVar4 = lVar5;
    func_0x00010bf98360(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_1068a8950;
    puStack_238 = &UNK_110946c68;
    lStack_230 = param_3;
    puStack_228 = puVar9;
    uStack_220 = uVar2;
    uStack_218 = uVar16;
    uStack_210 = uVar14;
    uStack_208 = uVar15;
    uStack_200 = uVar1;
    uStack_1f8 = param_6;
    uStack_1f0 = uVar10;
    uStack_1e8 = uVar17;
    uStack_1e0 = bVar3;
    _objc_retain(uVar10);
    _objc_retain(puVar9);
    _objc_retain(param_6);
    func_0x00010bf97e80(lVar4,param_2,&puStack_250);
    _objc_release(lVar4);
    _objc_release(uStack_1f0);
    _objc_release(puStack_228);
    _objc_release(uStack_1f8);
    _objc_release(uVar16);
    _objc_release(uVar1);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 1068a8728; end: 1068a894f; -[SCSpotlightToStoriesPostingConstructor _sendMediaWithEphemeralMediaParams:storiesPostingConfig:snapDocModifyBlock:completion:] */

void FUN_1068a8728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  uVar5 = param_5;
  func_0x00010c105440();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_5;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      lVar6 = *(long *)(param_2 + 0x90);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c25aac0();
      bVar3 = lVar7 == 0;
      _objc_release(lVar6);
    }
    else {
      bVar3 = true;
    }
    _objc_release(uVar5);
  }
  else {
    bVar3 = true;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar11);
  _objc_retain(uVar1);
  _objc_retain(uVar10);
  _objc_retain(uVar9);
  _objc_retain(uVar2);
  uVar8 = param_4;
  func_0x00010bf98360(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1068a8950;
  puStack_d8 = &UNK_110946c68;
  lStack_d0 = param_2;
  uStack_c8 = param_5;
  uStack_c0 = uVar2;
  uStack_b8 = uVar11;
  uStack_b0 = uVar9;
  uStack_a8 = uVar10;
  uStack_a0 = uVar1;
  uStack_98 = param_7;
  uStack_90 = param_6;
  uStack_88 = param_1;
  uStack_80 = bVar3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010bf97e80(uVar8,param_3,&puStack_f0);
  _objc_release(uVar8);
  _objc_release(uStack_90);
  _objc_release(uStack_c8);
  _objc_release(uStack_98);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068a8950; end: 1068a8f7b;  */

void FUN_1068a8950(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  double dStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  double dStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [136];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  dVar24 = *(double *)(param_1 + 0x68);
  _objc_initWeak(auStack_110,*(undefined8 *)(param_1 + 0x20));
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1068a8f7c;
  puStack_168 = &UNK_110946bb8;
  _objc_copyWeak(auStack_130,auStack_110);
  dVar24 = dVar24 + (double)param_3 * 0.01;
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar18);
  uStack_140 = uVar18;
  _objc_retain(lVar15);
  lStack_160 = lVar15;
  _objc_retain(lVar2);
  uStack_128 = 0xffffffffffffffff;
  uStack_118 = *(undefined1 *)(param_1 + 0x70);
  lStack_158 = lVar2;
  _objc_retain(param_2);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  lStack_150 = param_2;
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  uStack_148 = uVar18;
  dStack_120 = dVar24;
  _objc_retain(uVar19);
  ppuVar3 = &puStack_180;
  uStack_138 = uVar19;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c105440();
  if (iVar1 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d4ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar19;
      func_0x00010c067fc0();
      _objc_release(uVar19);
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d4bc0(uVar19);
      func_0x00010846a47c(uVar18,uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar18);
    }
    _objc_release(lVar6);
  }
  dVar23 = 0.0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar7 = *(long *)(param_1 + 0x28);
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar21 = *plStack_1b0;
    do {
      lVar22 = 0;
      do {
        if (*plStack_1b0 != lVar21) {
          _objc_enumerationMutation(lVar7);
        }
        uVar20 = *(undefined8 *)(lStack_1b8 + lVar22 * 8);
        uVar18 = uVar20;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62820(uVar20);
        uVar19 = uVar18;
        func_0x00010846a570(uVar18,uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(uVar19);
        _objc_release(uVar18);
        lVar22 = lVar22 + 1;
      } while (lVar6 != lVar22);
      lVar6 = lVar7;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar7);
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = param_2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar7;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010846a70c(lVar6,lVar22,0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar7);
  }
  puVar10 = puVar5;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    lVar7 = 0;
    puVar10 = puVar4;
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    func_0x00010be99f80(*(undefined8 *)(param_1 + 0x20));
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_1068a92f8;
    puStack_220 = &UNK_110946c18;
    uStack_218 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    lStack_210 = param_2;
    dStack_1d0 = dVar24;
    _objc_retain(uVar18);
    uStack_200 = *(undefined8 *)(param_1 + 0x30);
    uStack_208 = uVar18;
    _objc_retain(lVar6);
    uStack_1c8 = *(undefined1 *)(param_1 + 0x70);
    lStack_1f8 = lVar6;
    _objc_retain(puVar4);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x38);
    puStack_1f0 = puVar4;
    _objc_retain(ppuVar3);
    ppuStack_1d8 = ppuVar3;
    _objc_retain(puVar5);
    ppuVar11 = &puStack_238;
    puStack_1e0 = puVar5;
    _objc_retainBlock();
    puVar12 = PTR_PTR_1126c32f0;
    _objc_alloc();
    func_0x00010c0106c0();
    lVar7 = 1;
    (*(code *)ppuVar11[2])(ppuVar11);
    uVar18 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010c066ea0();
    _objc_release(uVar18);
    _objc_release(puVar12);
    _objc_release(ppuVar11);
    _objc_release(puStack_1e0);
    _objc_release(ppuStack_1d8);
    _objc_release(puStack_1f0);
    _objc_release(lStack_1f8);
    _objc_release(uStack_208);
    _objc_release(lStack_210);
  }
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_138);
  _objc_release(uStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_158);
  _objc_release(lStack_160);
  _objc_release(uStack_140);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_110);
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume();
  _objc_retain(lVar7);
  _objc_retain(puVar10);
  lVar2 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_1068a92b8;
  if (((lVar7 == 0) || (lVar6 = lVar7, func_0x00010bf529e0(), lVar6 == 0)) &&
     ((puVar10 == (undefined *)0x0 ||
      (puVar4 = puVar10, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)))) {
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0);
    goto LAB_1068a92b8;
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3300;
  _objc_alloc();
  puVar12 = PTR_PTR_1126b5be8;
  _objc_alloc(PTR_PTR_1126b5be8);
  func_0x00010bff40a0();
  func_0x00010c00bb80();
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c3340;
  _objc_alloc();
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar23 = dVar23 * 1000.0;
  func_0x00010c0066c0();
  _objc_release(puVar13);
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    uVar14 = *(ulong *)(param_2 + 0x30);
    func_0x00010c2311e0();
    if ((uVar14 & 1) != 0) goto LAB_1068a9100;
    lVar6 = *(long *)(param_2 + 0x38);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) goto LAB_1068a9100;
    dVar23 = 0.0;
  }
  else {
LAB_1068a9100:
    uVar19 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c1048c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar19;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar18);
    _objc_release(uVar19);
  }
  uVar19 = *(undefined8 *)(param_2 + 0x60);
  lVar6 = *(long *)(param_2 + 0x30);
  uVar18 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c15a0e0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a05454(uVar19,dVar23,lVar6,puVar12,uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  lVar15 = *(long *)(param_2 + 0x48);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x10))(lVar15,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar15;
  }
  puVar13 = PTR_PTR_1126c3308;
  func_0x00010c241d60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2b9520();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar13);
  uVar18 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0c3fe0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c60a0();
  func_0x00010846b19c();
  _objc_release(uVar18);
  puVar13 = PTR_PTR_1126cea80;
  _objc_alloc(PTR_PTR_1126cea80);
  func_0x00010c047540();
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),puVar13);
  _objc_release(puVar13);
  _objc_release(puVar17);
  _objc_release(lVar6);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_1068a92b8:
  _objc_release(lVar2);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1068a8f7c; end: 1068a92f7;  */

void FUN_1068a8f7c(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1068a92b8;
  if (((param_3 == 0) || (lVar7 = param_3, func_0x00010bf529e0(), lVar7 == 0)) &&
     ((param_4 == 0 || (lVar7 = param_4, func_0x00010bf529e0(), lVar7 == 0)))) {
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0);
    goto LAB_1068a92b8;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3300;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b5be8;
  _objc_alloc(PTR_PTR_1126b5be8);
  func_0x00010bff40a0();
  func_0x00010c00bb80();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c3340;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  param_1 = param_1 * 1000.0;
  func_0x00010c0066c0();
  _objc_release(puVar5);
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    uVar6 = *(ulong *)(param_2 + 0x30);
    func_0x00010c2311e0();
    if ((uVar6 & 1) != 0) goto LAB_1068a9100;
    lVar7 = *(long *)(param_2 + 0x38);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) goto LAB_1068a9100;
    param_1 = 0.0;
  }
  else {
LAB_1068a9100:
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c1048c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar12);
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  lVar7 = *(long *)(param_2 + 0x30);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c15a0e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a05454(uVar8,param_1,lVar7,puVar4,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar9 = *(long *)(param_2 + 0x48);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x10))(lVar9,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar9;
  }
  puVar5 = PTR_PTR_1126c3308;
  func_0x00010c241d60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2b9520();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0c3fe0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c60a0();
  func_0x00010846b19c();
  _objc_release(uVar12);
  puVar5 = PTR_PTR_1126cea80;
  _objc_alloc(PTR_PTR_1126cea80);
  func_0x00010c047540();
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),puVar5);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_1068a92b8:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a92f8; end: 1068a941b;  */

void FUN_1068a92f8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010be3c980(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068a941c;
  puStack_70 = &UNK_110946be8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar2;
  _objc_retain(*(undefined8 *)(param_1 + 0x40));
  uStack_28 = *(undefined1 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  _objc_retain(uVar2);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_30 = uVar2;
  _objc_retain(uVar3);
  ppuVar1 = &puStack_88;
  uStack_38 = uVar3;
  _objc_retainBlock(ppuVar1);
  func_0x00010be4e980(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_30);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1068a941c; end: 1068a9573;  */

void FUN_1068a941c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar1 = param_2;
    func_0x00010c08fa60();
    if (uVar1 < 0x4001) goto LAB_1068a9494;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08fa60(param_2);
    func_0x00010c0b0d00(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  func_0x00010c0ac880(uVar5);
LAB_1068a9494:
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar8 = *(byte *)(param_1 + 0x60);
  }
  else {
    bVar8 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfcd340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c24c6e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107a0667c(uVar6,param_2,bVar8 & 1,uVar2,uVar7,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x58) + 0x10))
            (*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068a9574; end: 1068a9577;  */

void FUN_1068a9574(void)

{
  return;
}



/* Entry: 1068a9578; end: 1068a9c03; -[SCSpotlightToStoriesPostingConstructor _insertStorySnapsIntoStoriesWithEphemeralMedia:creationTimestamp:storiesPostingConfig:] */

void FUN_1068a9578(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3340;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0066c0();
  _objc_release(puVar6);
  lVar7 = param_5;
  func_0x00010c105440();
  if (((int)lVar7 != 0) &&
     (lVar7 = lVar4, func_0x00010c08fa60(), puVar6 = PTR_PTR_1126c2fc8, lVar7 != 0)) {
    _objc_retain(lVar4);
    _objc_alloc(puVar6);
    func_0x00010c0d4bc0(param_5);
    func_0x00010c0559e0(puVar6);
    puVar8 = PTR_PTR_1126c2fd0;
    func_0x00010c293b20(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    func_0x00010c0d4bc0(param_5);
    func_0x00010846b274();
    lVar9 = param_5;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_4;
    func_0x000107a06ccc(param_1,param_4,puVar5,lVar4,uVar3,lVar4,puVar8,lVar7,0,lVar9,
                        *(undefined8 *)(param_2 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar4);
    _objc_release(puVar10);
    _objc_release(lVar17);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar7 = param_5;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = &uStack_160;
  lVar9 = lVar7;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar17 = *plStack_150;
    do {
      lVar18 = 0;
      do {
        if (*plStack_150 != lVar17) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(undefined8 *)(lStack_158 + lVar18 * 8);
        uVar14 = uVar2;
        func_0x00010c11ac00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c3328;
        _objc_alloc(PTR_PTR_1126c3328);
        func_0x00010c27dd80(uVar2);
        func_0x00010bf62820(uVar2);
        func_0x00010c1143e0(uVar2);
        func_0x00010c04dca0(puVar6);
        puVar8 = PTR_PTR_1126c2fd0;
        func_0x00010bf62300(PTR_PTR_1126c2fd0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62820(uVar2);
        func_0x00010846b274();
        lVar11 = param_5;
        func_0x00010c15a0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_4;
        func_0x000107a06ccc(param_1,param_4,puVar5,uVar14,uVar3,lVar4,puVar8,uVar2,0,lVar11,
                            *(undefined8 *)(param_2 + 0x48));
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_110 = lVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar10);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(uVar14);
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
      puVar16 = &uStack_160;
      lVar9 = lVar7;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if ((lVar7 != 0) && (lVar17 == 0)) {
    lVar9 = lVar7;
    func_0x00010c259bc0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar7;
    func_0x00010c0ee300(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f41ba8();
    _objc_release(lVar17);
    lVar17 = lVar7;
    func_0x00010c0ee300(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f41bb4();
    _objc_release(lVar17);
    puVar6 = PTR_PTR_1126c3330;
    _objc_alloc();
    func_0x00010c04d900();
    puVar8 = PTR_PTR_1126c2fd0;
    func_0x00010c0ee380();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uRam000000011325c068;
    lVar17 = param_5;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_4;
    func_0x000107a06ccc(param_1,param_4,puVar5,lVar9,uVar3,lVar4,puVar8,uVar14,0,lVar17,
                        *(undefined8 *)(param_2 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_118 = lVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar13);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(lVar9);
  }
  puVar13 = puVar1;
  func_0x00010bf529e0();
  if (puVar13 != (undefined8 *)0x0) {
    uVar14 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c066ca0();
    _objc_release(uVar14);
  }
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  puVar1 = puVar16;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar13 != (undefined8 *)0x0) {
    uVar14 = *(undefined8 *)(param_4 + 0x38);
    puVar1 = puVar16;
    FUN_1068a9d08(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010c26e020(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbec0(uVar14);
    _objc_release(puVar5);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 1068a9c04; end: 1068a9d07; -[SCSpotlightToStoriesPostingConstructor _saveStoryThumbnailDataToThumbnailCoordinatorIfPossible:] */

void FUN_1068a9c04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_3;
    FUN_1068a9d08(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c26e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbec0(uVar5,param_2,lVar1,lVar3,puVar4,0);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a9d08; end: 1068a9ee3;  */

void FUN_1068a9d08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bfca8;
  _objc_retain(param_1);
  _objc_retain(uVar2);
  _objc_alloc(puVar3);
  uVar1 = param_1;
  func_0x00010bf98340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf98320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar3,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  uVar1 = param_1;
  func_0x00010c27dd80(param_1);
  uVar4 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar7 = uVar4;
  func_0x00010c0efce0(uVar4);
  func_0x00010bffa840(puVar6,param_2,uVar2,0,puVar3,uVar1,uVar7,0,0,0,puVar5,0,0);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068a9ee4; end: 1068a9fb7; -[SCSpotlightToStoriesPostingConstructor _loadStoryThumbnailDataWithMedia:completion:] */

void FUN_1068a9ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_1068a9d08(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1068a9fb8;
  puStack_40 = &UNK_110868038;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c11da60(uVar2,param_2,param_3,uVar1,&puStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1068a9fb8; end: 1068a9fc3;  */

void FUN_1068a9fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a9fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1068a9fc4; end: 1068aa99b; -[SCSpotlightToStoriesPostingConstructor _buildSnapDocFromPlaybackMetadata:mediaData:overlayData:lensId:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:] */

void FUN_1068a9fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf8cb40(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b25e0;
  _objc_opt_new(PTR_PTR_1126b25e0);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3068;
  _objc_opt_new(PTR_PTR_1126b3068);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd220();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126affc0;
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar7);
  func_0x00010c299cc0(puVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar3;
  func_0x00010bef7100(uVar3,param_2,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1068aa344;
  puStack_c8 = &UNK_110946848;
  uStack_88 = param_9;
  uStack_80 = param_10;
  uStack_70 = param_11;
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  puStack_c0 = puVar1;
  uStack_b8 = uVar3;
  lStack_b0 = param_1;
  uStack_a8 = param_5;
  uStack_a0 = uVar7;
  uStack_98 = param_7;
  uStack_90 = param_8;
  uStack_78 = param_6;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(uVar3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar5,param_2,&puStack_e0,uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(uVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068aa99c; end: 1068aaaeb;  */

void FUN_1068aa99c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf5cc00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0();
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126bcd38;
  _objc_opt_new(PTR_PTR_1126bcd38);
  func_0x00010c218fc0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c066480(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar5);
  func_0x00010befae60(*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR_PTR_1126bcf30;
  _objc_opt_new(PTR_PTR_1126bcf30);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c203d40(puVar3);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c23fe00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216040();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23fe00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068aaaec; end: 1068aae77; -[SCSpotlightToStoriesPostingConstructor _setupLayerCompositionForSnapDoc:] */

void FUN_1068aaaec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126becb8;
    _objc_opt_new(PTR_PTR_1126becb8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4660();
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126becc0;
    _objc_opt_new(PTR_PTR_1126becc0);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b98c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bce80;
  _objc_opt_new(PTR_PTR_1126bce80);
  func_0x00010c1b1880();
  func_0x00010c2191c0(puVar3,param_2,1);
  func_0x00010c218fc0(puVar3,param_2,1);
  puVar5 = PTR_PTR_1126bce88;
  _objc_opt_new(PTR_PTR_1126bce88);
  func_0x00010c2190e0();
  puVar6 = puVar5;
  func_0x00010c0ff660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c2787a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar1);
  func_0x00010c218fe0(lVar4,param_2,1);
  func_0x00010c219100(lVar4,param_2,1);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    puVar6 = PTR_PTR_1126bcea8;
    _objc_opt_new(PTR_PTR_1126bcea8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea760();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea720();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068aae78; end: 1068ab17b; -[SCSpotlightToStoriesPostingConstructor _applySpotlightTimelineToSnapDoc:] */

void FUN_1068aae78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) goto LAB_1068ab160;
    lVar2 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar6 != 0) {
        func_0x00010c1dd680(lVar6,param_2,1);
        lVar2 = lVar6;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = lVar6;
          func_0x00010c0c3fe0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c45e0();
          _objc_release(lVar2);
        }
      }
      lVar2 = lVar4;
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126afff0;
        _objc_opt_new(PTR_PTR_1126afff0);
        func_0x00010c21a4e0(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209a20();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2667a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126becc8;
        _objc_opt_new(PTR_PTR_1126becc8);
        func_0x00010c210d60(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c2667a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214ca0();
      _objc_release(lVar2);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_1068ab160:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ab17c; end: 1068ab2a7; -[SCSpotlightToStoriesPostingConstructor .cxx_destruct] */

void FUN_1068ab17c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1068ab2a8; end: 1068ab2ef;  */

void FUN_1068ab2a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e63e38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e63e38,
                      &PTR____CFConstantStringClassReference_110e63e58,0);
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



/* Entry: 1068ab2f0; end: 1068ab32f;  */

void FUN_1068ab2f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068ab330; end: 1068ab53b; -[SCSpotlightDisplayOrderServiceProvider _createSpotlightDisplayOrdererFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ab330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126cea90;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752a00;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112752a04;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112752a08;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112752a0c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112752a10;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112752a14;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c24b680();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112752a18;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0dbd20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752a1c;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe260(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar16);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068ab53c; end: 1068ab5c7; -[SCSpotlightDisplayOrderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068ab53c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752a1c);
  _objc_destroyWeak(param_1 + _DAT_112752a18);
  _objc_destroyWeak(param_1 + _DAT_112752a10);
  _objc_destroyWeak(param_1 + _DAT_112752a14);
  _objc_destroyWeak(param_1 + _DAT_112752a0c);
  _objc_destroyWeak(param_1 + _DAT_112752a04);
  _objc_destroyWeak(param_1 + _DAT_112752a08);
  _objc_destroyWeak(param_1 + _DAT_112752a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752a20);
  return;
}



/* Entry: 1068ab5c8; end: 1068ab6cb; -[SCSpotlightDisplayOrderSortToken initWithDiscoverFeedStory:mediaStatePriority:rankingBoostValue:responseTimestamp:responsePosition:] */

undefined1 *
FUN_1068ab5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f3a90;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ab6cc; end: 1068ab85b; -[SCSpotlightDisplayOrderSortToken compareWithMediaState:rankingBoost:responseTimestamp:other:] */

ulong FUN_1068ab6cc(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                   ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  if (param_3 == 0) {
LAB_1068ab734:
    if (param_4 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x18);
      uVar2 = param_6;
      func_0x00010c11fa00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071f40(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        func_0x00010c11fa00(param_6);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068ab82c;
      }
    }
    if (param_5 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      uVar2 = param_6;
      func_0x00010c13bd00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ce0(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        func_0x00010c13bd00(param_6);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068ab82c;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c13bb80();
    if (uVar2 == uVar1) {
      uVar2 = 0;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x28);
      uVar1 = param_6;
      func_0x00010c13bb80();
      uVar2 = 1;
      if (uVar3 < uVar1) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar2 = param_6;
    func_0x00010c0c69e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071f40(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_1068ab734;
    func_0x00010c0c69e0(param_6);
    _objc_retainAutoreleasedReturnValue();
LAB_1068ab82c:
    uVar2 = uVar1;
    func_0x00010bf433a0();
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  return uVar2;
}



/* Entry: 1068ab85c; end: 1068ab863; -[SCSpotlightDisplayOrderSortToken story] */

undefined8 FUN_1068ab85c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068ab864; end: 1068ab86b; -[SCSpotlightDisplayOrderSortToken mediaStatePriority] */

undefined8 FUN_1068ab864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068ab86c; end: 1068ab873; -[SCSpotlightDisplayOrderSortToken rankingBoostValue] */

undefined8 FUN_1068ab86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068ab874; end: 1068ab87b; -[SCSpotlightDisplayOrderSortToken responseTimestamp] */

undefined8 FUN_1068ab874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068ab87c; end: 1068ab883; -[SCSpotlightDisplayOrderSortToken responsePosition] */

undefined8 FUN_1068ab87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068ab884; end: 1068ab8cb; -[SCSpotlightDisplayOrderSortToken .cxx_destruct] */

void FUN_1068ab884(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068ab8cc; end: 1068ac023; -[SCSpotlightDisplayOrderer initWithCircumstanceEngine:appStartReader:feedType:discoverFeedDataFetcher:discoverFeedSectionsCoordinator:networkConnectivityMonitor:spotlightMediaFetcherFactory:notificationCenter:preferences:] */

undefined8 *
FUN_1068ab8cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_a0 = PTR_PTR_1126f3a98;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[7];
    puVar2[7] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    puVar9 = puVar2 + 8;
    uVar3 = *puVar9;
    *puVar9 = param_4;
    _objc_release(uVar3);
    puVar2[4] = param_5;
    _objc_retain(param_6);
    uVar3 = puVar2[9];
    puVar2[9] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[10];
    puVar2[10] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126cea98;
    _objc_alloc_init();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_11;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1068ac024;
    puStack_c0 = &UNK_110946cc8;
    _objc_retain(param_9);
    uStack_b8 = param_9;
    uStack_b0 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    puVar2[0x13] = 0x109;
    uVar1 = (undefined1)*puVar9;
    func_0x000108f4aa24();
    *(undefined1 *)(puVar2 + 6) = uVar1;
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[2];
    puVar2[2] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = 0;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    puVar9 = puVar2 + 1;
    uVar3 = *puVar9;
    *puVar9 = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar7);
    uVar3 = *puVar9;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_1068ac094;
    puStack_e8 = &UNK_110842e18;
    _objc_retain(puVar2);
    puStack_e0 = puVar2;
    func_0x00010c0f7fc0(uVar3);
    _objc_initWeak(auStack_108,param_4);
    puVar4 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1068ac09c;
    puStack_118 = &UNK_110946cf8;
    _objc_copyWeak(auStack_110,auStack_108);
    puVar5 = puVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar7 = (undefined *)puVar2[0xc];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c25a440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126ae820;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_alloc();
      func_0x00010c060400();
      puVar7 = PTR_PTR_1126ae820;
    }
    PTR_PTR_1126ae820 = puVar7;
    if (puVar6 == (undefined *)0x0) {
      _objc_alloc();
      func_0x00010c060400();
      puVar6 = puVar7;
    }
    puVar7 = PTR_PTR_1126ae6b8;
    uStack_98 = puVar2[0xe];
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    puStack_88 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2 + 0x10;
    uVar3 = *puVar9;
    *puVar9 = puVar7;
    _objc_release(uVar3);
    _objc_release(puVar5);
    uVar3 = *puVar9;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2 + 0x10;
    uVar10 = *puVar9;
    *puVar9 = uVar3;
    _objc_release(uVar10);
    _objc_initWeak(auStack_138,puVar2);
    uVar3 = *puVar9;
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1068ac148;
    puStack_148 = &UNK_110842c58;
    _objc_copyWeak(auStack_140,auStack_138);
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar3 = puVar2[9];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    uVar10 = puVar2[0xf];
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_168,auStack_138);
    uVar3 = uVar10;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    func_0x00010c0d9840(puVar2[0xf]);
    func_0x00010befa240(param_10);
    _objc_destroyWeak(auStack_168);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(puStack_e0);
    _objc_release(uStack_b8);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    __Unwind_Resume();
    puVar8 = *(undefined8 **)(param_3 + 0x20);
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c24b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  return puVar2;
}



/* Entry: 1068ac024; end: 1068ac093;  */

void FUN_1068ac024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068ac094; end: 1068ac09b;  */

void FUN_1068ac094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadTrackedPositionAndTimestamp_1125714a8);
  return;
}



/* Entry: 1068ac09c; end: 1068ac147;  */

void FUN_1068ac09c(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5e480();
  if (param_2 == 2) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x000108f4a9dc();
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068ac148; end: 1068ac29b;  */

void FUN_1068ac148(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar5 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  func_0x00010bee0e00(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ac29c; end: 1068ac2e3;  */

void FUN_1068ac29c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be86740();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ac2e4; end: 1068ac347; -[SCSpotlightDisplayOrderer dealloc] */

void FUN_1068ac2e4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3a98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1068ac348; end: 1068ac36f; -[SCSpotlightDisplayOrderer orderedStories] */

void FUN_1068ac348(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068ac370; end: 1068ac397; -[SCSpotlightDisplayOrderer hasMoreStories] */

void FUN_1068ac370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068ac398; end: 1068ac3e7; -[SCSpotlightDisplayOrderer currentOrderedStories] */

void FUN_1068ac398(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068ac3e8; end: 1068ac477; -[SCSpotlightDisplayOrderer trackIncomingFeedPage:] */

void FUN_1068ac3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068ac478;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ac478; end: 1068ac62f;  */

void FUN_1068ac478(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  uVar9 = 0x10;
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        lVar11 = *(long *)(lStack_128 + lVar14 * 8);
        lVar3 = lVar11;
        func_0x00010c13bd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c13bb80(lVar11);
          lVar3 = lVar11;
          func_0x00010c13bd00(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(lVar3);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
          func_0x00010c259740(lVar11);
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar12);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      uVar9 = 0x10;
      lVar2 = lVar10;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar5);
  uVar1 = uVar9;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  if (*(long *)(lVar10 + 0x20) == *(long *)(lVar10 + 0x98) && uVar1 == 0) {
    puVar7 = (undefined1 *)puVar8;
    func_0x00010c0720c0();
    if (((ulong)puVar7 & 1) == 0) goto LAB_1068ac6fc;
  }
  else if ((uVar1 == 0) || (func_0x00010c067fc0(), uVar9 != *(ulong *)(lVar10 + 0x20)))
  goto LAB_1068ac6fc;
  func_0x00010c0d9840(*(undefined8 *)(lVar10 + 0x78));
LAB_1068ac6fc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1068ac630; end: 1068ac717; -[SCSpotlightDisplayOrderer didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1068ac630(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x98) && uVar1 == 0) {
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) goto LAB_1068ac6fc;
  }
  else if ((uVar1 == 0) || (func_0x00010c067fc0(), param_5 != *(ulong *)(param_1 + 0x20)))
  goto LAB_1068ac6fc;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78));
LAB_1068ac6fc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ac718; end: 1068ac813; -[SCSpotlightDisplayOrderer _readStoriesFromDataFetcher] */

void FUN_1068ac718(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf00a20(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068ac814; end: 1068ac85b;  */

void FUN_1068ac814(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed67c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ac85c; end: 1068ac9b3; -[SCSpotlightDisplayOrderer _readEOFStateFromSectionCoordinator] */

void FUN_1068ac85c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_48;
  _objc_copyWeak(auStack_50);
  func_0x00010bfa9fc0(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  puVar4 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar6);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar6;
    func_0x00010bfb1920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd9420();
    func_0x00010bed90e0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1068ac9b4; end: 1068aca33;  */

void FUN_1068ac9b4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd9420();
    func_0x00010bed90e0(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068aca34; end: 1068acaa3; -[SCSpotlightDisplayOrderer _updateCurrentStories:] */

void FUN_1068aca34(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bd86590(param_3,&PTR___NSConcreteGlobalBlock_110946d78);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068acaa4; end: 1068acae7; -[SCSpotlightDisplayOrderer _updateHasMoreStories:] */

void FUN_1068acaa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068acae8; end: 1068ace43; -[SCSpotlightDisplayOrderer _updateStoriesOrder:storyMediaStates:partialSameAsFull:] */

void FUN_1068acae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2632a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1068ace44;
  uStack_78 = 0x1068ace54;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7528;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1068ace5c;
  puStack_148 = &UNK_110946d98;
  puStack_f0 = &uStack_f8;
  puStack_d0 = &uStack_d8;
  puStack_b0 = &uStack_b8;
  puStack_90 = &uStack_98;
  _objc_retain(param_4);
  uStack_140 = param_4;
  _objc_retain(param_5);
  uStack_138 = param_5;
  uStack_100 = uVar1;
  _objc_retain(uVar3);
  uVar2 = param_3;
  uStack_130 = uVar3;
  lStack_128 = param_1;
  puStack_120 = &uStack_98;
  puStack_118 = &uStack_b8;
  puStack_110 = &uStack_d8;
  puStack_108 = &uStack_f8;
  func_0x000100504554(param_3,&puStack_160);
  uVar4 = uVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100504554();
  uVar6 = uVar5;
  func_0x000100504554();
  uVar7 = *(ulong *)(param_1 + 0x88);
  func_0x00010c071b60();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar11 = (uint)uVar7;
  FUN_1068adb10(*(undefined8 *)(param_1 + 0x28),puVar9,uVar11 ^ 1,1);
  FUN_1068adcf8(*(undefined8 *)(param_1 + 0x28),puVar9,uVar11 ^ 1,puStack_b0[3]);
  FUN_1068adf00(*(undefined8 *)(param_1 + 0x28),puVar9,uVar11 ^ 1,puStack_d0[3]);
  FUN_1068ae108(*(undefined8 *)(param_1 + 0x28),puVar9,uVar11 ^ 1,puStack_f0[3]);
  if ((uVar7 & 1) == 0) {
    _objc_retain(uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    _objc_release(uVar10);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(ppuStack_70);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ace44; end: 1068ace5b;  */

void FUN_1068ace44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068ace5c; end: 1068ad0ab;  */

void FUN_1068ace5c(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7510;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f3c0();
  if ((iVar1 != 0) && (ppuVar3 = ppuVar7, func_0x00010c067fc0(), ppuVar3 == (undefined **)0x1)) {
    _objc_release(ppuVar7);
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7528;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar8 = *(ulong *)(param_1 + 0x30);
    func_0x00010c25b720(param_2);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar4);
    if ((uVar8 & 1) == 0) {
      ppuVar10 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      _objc_retain(ppuVar10);
      ppuVar3 = ppuVar7;
      goto LAB_1068acf98;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(ppuVar7);
  ppuVar3 = *(undefined ***)(lVar9 + 0x28);
  *(undefined ***)(lVar9 + 0x28) = ppuVar7;
  ppuVar10 = ppuVar7;
LAB_1068acf98:
  _objc_release(ppuVar3);
  ppuVar7 = ppuVar10;
  func_0x00010c067fc0();
  if (ppuVar7 < (undefined **)0x3) {
    lVar9 = *(long *)(*(long *)(param_1 + (long)ppuVar7 * 8 + 0x48) + 8);
    *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
  }
  puVar4 = param_2;
  func_0x00010c13bd00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13bb80(param_2);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x38) + 0xa0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c0b4ca0();
  _objc_release(uVar5);
  puVar6 = puVar4;
  if (uVar8 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)(uVar8 & 0xffffffffffff),PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126ceaa0;
  _objc_alloc(PTR_PTR_1126ceaa0);
  func_0x00010c00cfc0();
  _objc_release(puVar6);
  _objc_release(ppuVar10);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068ad0ac; end: 1068ad0cb;  */

void FUN_1068ad0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_compareWithMediaState_rankingBoo_1125ae6e8,1,0,1,param_3);
  return;
}



/* Entry: 1068ad0cc; end: 1068ad0fb;  */

void FUN_1068ad0cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ad0fc; end: 1068ad293; -[SCSpotlightDisplayOrderer _loadTrackedPositionAndTimestamps] */

void FUN_1068ad0fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
  _objc_release(uVar6);
  lVar2 = param_1;
  func_0x00010be76d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(uVar4);
  _objc_opt_class(puVar1);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  func_0x00010bf97ce0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1068ad294; end: 1068ad443; -[SCSpotlightDisplayOrderer _saveTrackedPositionAndTimestamps] */

void FUN_1068ad294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        puVar4 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,uVar6);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa0),param_2,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be76d80(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf51e00(uVar5);
  func_0x00010c1d0560(uVar6,param_2,uVar5,lVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1068ad444;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1068ad49c;
  puStack_140 = &UNK_110842e18;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(puVar1 + 8),param_2,&puStack_158);
  return;
}



/* Entry: 1068ad444; end: 1068ad49b; -[SCSpotlightDisplayOrderer _onResignActive:] */

void FUN_1068ad444(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068ad49c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1068ad49c; end: 1068ad4a3;  */

void FUN_1068ad49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveTrackedPositionAndTimestamp_112584270);
  return;
}



/* Entry: 1068ad4a4; end: 1068ad50f; -[SCSpotlightDisplayOrderer _preferencesKeyForFeedType:] */

void FUN_1068ad4a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e63e98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068ad510; end: 1068ad5f3; -[SCSpotlightDisplayOrderer .cxx_destruct] */

void FUN_1068ad510(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068ad5f4; end: 1068ad7bb; -[SCSpotlightDisplayOrdererFactoryImpl initWithCircumstanceEngine:appStartReader:discoverFeedDataFetcher:discoverFeedSectionsCoordinator:networkConnectivityMonitor:spotlightMediaFetcherFactory:notificationCenter:preferences:] */

undefined1 *
FUN_1068ad5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f3aa0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ad7bc; end: 1068ad893; -[SCSpotlightDisplayOrdererFactoryImpl spotlightDisplayOrderingForFeedType:] */

void FUN_1068ad7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010bded360(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar3,puVar1);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068ad894; end: 1068ad9c7; -[SCSpotlightDisplayOrdererFactoryImpl _createDisplayOrderingForFeedType:] */

void FUN_1068ad894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = PTR_PTR_1126ae720;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1068ad9c8;
  puStack_b0 = &UNK_110946e98;
  uStack_a8 = uVar7;
  uStack_a0 = uVar1;
  uStack_98 = uVar5;
  uStack_90 = uVar4;
  uStack_88 = uVar2;
  uStack_80 = uVar6;
  uStack_78 = uVar3;
  uStack_70 = uVar8;
  uStack_68 = param_3;
  _objc_retain(uVar8);
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  func_0x00010bf11fe0(puVar9,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068ad9c8; end: 1068ada17;  */

void FUN_1068ad9c8(void)

{
  _objc_alloc(PTR_PTR_1126ceaa8);
  func_0x00010bffe280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068ada18; end: 1068ada9b; -[SCSpotlightDisplayOrdererFactoryImpl .cxx_destruct] */

void FUN_1068ada18(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068ada9c; end: 1068adb0f; -[SCGrapheneSpotlightDisplayOrdererMetric2 init] */

undefined1 * FUN_1068ada9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3aa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1068adb10; end: 1068adcf7;  */

undefined8 *****
FUN_1068adb10(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 *****unaff_x23;
  undefined8 ****unaff_x24;
  undefined1 auStack_340 [8];
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [8];
  undefined8 ****ppppuStack_308;
  undefined *puStack_300;
  undefined8 ***pppuStack_280;
  undefined8 **ppuStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined1 auStack_258 [24];
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ****ppppuStack_200;
  undefined8 ****ppppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***apppuStack_1b8 [3];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***apppuStack_118 [3];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **appuStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = param_2;
  ppppuVar9 = param_3;
  ppppuVar12 = param_4;
  _objc_retain(param_2);
  pppuVar17 = (undefined8 ***)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      unaff_x23 = (undefined8 *****)&UNK_10f39ec7b;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (undefined8 ****)appuStack_78;
    func_0x00010002b838(appuStack_78,unaff_x23);
    puVar1 = &UNK_10f39ec7c;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f39ec81;
    }
    func_0x00010002b838(auStack_60,puVar1);
    ppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&ppuStack_98,appuStack_78,&lStack_48,2);
    pppppuVar10 = (undefined8 *****)&UNK_110946ec8;
    param_3 = (undefined8 ****)&ppuStack_98;
    ppppuVar9 = (undefined8 ****)&ppuStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pppuStack_80 = param_3;
    func_0x00010007e5dc(&pppuStack_80);
    lVar15 = 0;
    pppuVar17 = appuStack_78;
    ppppuVar12 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  pppppuVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pppppuVar6 = pppppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_1068adcf8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = pppppuVar10;
  ppppuVar11 = ppppuVar9;
  ppppuVar18 = ppppuVar12;
  pppuStack_e0 = unaff_x24;
  ppppuStack_d8 = unaff_x23;
  pppuStack_d0 = param_3;
  ppuStack_c8 = pppuVar17;
  ppppuStack_c0 = pppppuVar5;
  ppppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar10);
  if (pppppuVar6 != (undefined8 *****)0x0) {
    ppppuVar7 = pppppuVar6[1];
    pppppuVar13 = (undefined8 *****)&UNK_110946f18;
    (*(code *)(*ppppuVar7)[5])();
    if ((int)ppppuVar7 != 0) {
      ppppuVar18 = pppppuVar6[1];
      _objc_retain(pppppuVar10);
      if (pppppuVar10 == (undefined8 *****)0x0) {
        unaff_x23 = (undefined8 *****)&UNK_10f39ec7b;
      }
      else {
        unaff_x23 = pppppuVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar10);
      unaff_x24 = apppuStack_118;
      func_0x00010002b838(apppuStack_118,unaff_x23);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppuVar9 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_100,puVar1);
      ppuStack_138 = (undefined8 ***)0x0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&ppuStack_138,apppuStack_118,&lStack_e8,2);
      pppppuVar13 = (undefined8 *****)&UNK_110946f18;
      ppppuVar9 = (undefined8 ****)&ppuStack_138;
      ppppuVar11 = (undefined8 ****)&ppuStack_138;
      (*(code *)(*ppppuVar18)[3])(ppppuVar18);
      pppuStack_120 = ppppuVar9;
      func_0x00010007e5dc(&pppuStack_120);
      lVar15 = 0;
      pppppuVar6 = (undefined8 *****)apppuStack_118;
      ppppuVar18 = ppppuVar12;
      do {
        if ((&cStack_e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppuVar5 = pppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar10);
  _objc_release(pppppuVar10);
  pppppuVar8 = pppppuVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_1068adf00;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar14 = pppppuVar13;
  ppppuVar12 = ppppuVar11;
  ppppuVar7 = ppppuVar18;
  pppuStack_180 = unaff_x24;
  ppppuStack_178 = unaff_x23;
  pppuStack_170 = ppppuVar9;
  ppppuStack_168 = pppppuVar6;
  ppppuStack_160 = pppppuVar5;
  ppppuStack_158 = pppppuVar10;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pppppuVar13);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar9 = pppppuVar8[1];
    pppppuVar14 = (undefined8 *****)&UNK_110946f68;
    (*(code *)(*ppppuVar9)[5])();
    if ((int)ppppuVar9 != 0) {
      ppppuVar9 = pppppuVar8[1];
      _objc_retain(pppppuVar13);
      if (pppppuVar13 == (undefined8 *****)0x0) {
        unaff_x23 = (undefined8 *****)&UNK_10f39ec7b;
      }
      else {
        unaff_x23 = pppppuVar13;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar13);
      unaff_x24 = apppuStack_1b8;
      func_0x00010002b838(apppuStack_1b8,unaff_x23);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppuVar11 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_1a0,puVar1);
      ppuStack_1d8 = (undefined8 ***)0x0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&ppuStack_1d8,apppuStack_1b8,&lStack_188,2);
      pppppuVar14 = (undefined8 *****)&UNK_110946f68;
      ppppuVar11 = (undefined8 ****)&ppuStack_1d8;
      ppppuVar12 = (undefined8 ****)&ppuStack_1d8;
      (*(code *)(*ppppuVar9)[3])(ppppuVar9);
      pppuStack_1c0 = ppppuVar11;
      func_0x00010007e5dc(&pppuStack_1c0);
      lVar15 = 0;
      pppppuVar8 = (undefined8 *****)apppuStack_1b8;
      ppppuVar7 = ppppuVar18;
      do {
        if ((&cStack_189)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppuVar10 = pppppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pppppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar13);
  _objc_release(pppppuVar13);
  pppppuVar5 = pppppuVar10;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1068ae108;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar9 = ppppuVar12;
  ppppuVar18 = ppppuVar7;
  pppuStack_220 = unaff_x24;
  ppppuStack_218 = unaff_x23;
  pppuStack_210 = ppppuVar11;
  ppppuStack_208 = pppppuVar8;
  ppppuStack_200 = pppppuVar10;
  ppppuStack_1f8 = pppppuVar13;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pppppuVar14);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar11 = pppppuVar5[1];
    (*(code *)(*ppppuVar11)[5])(ppppuVar11,&UNK_110946fb8);
    if ((int)ppppuVar11 != 0) {
      ppppuVar11 = pppppuVar5[1];
      _objc_retain(pppppuVar14);
      if (pppppuVar14 == (undefined8 *****)0x0) {
        pppppuVar10 = (undefined8 *****)&UNK_10f39ec7b;
      }
      else {
        pppppuVar10 = pppppuVar14;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar14);
      func_0x00010002b838(auStack_258,pppppuVar10);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppuVar12 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_240,puVar1);
      ppuStack_278 = (undefined8 ***)0x0;
      pppuStack_270 = (undefined8 ****)0x0;
      pppuStack_268 = (undefined8 ****)0x0;
      func_0x00010007e1e8(&ppuStack_278,auStack_258,&lStack_228,2);
      ppppuVar9 = (undefined8 ****)&ppuStack_278;
      (*(code *)(*ppppuVar11)[3])(ppppuVar11,&UNK_110946fb8);
      pppuStack_260 = &ppuStack_278;
      func_0x00010007e5dc(&pppuStack_260);
      lVar15 = 0;
      ppppuVar18 = ppppuVar7;
      do {
        if ((&cStack_229)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppuVar10 = pppppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pppppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar14);
  _objc_release(pppppuVar14);
  __Unwind_Resume();
  pppuVar4 = pppuStack_260;
  pppuVar3 = pppuStack_268;
  pppuVar17 = pppuStack_270;
  ppuVar2 = ppuStack_278;
  _objc_retain(ppppuVar9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_280);
  _objc_retain(ppuVar2);
  _objc_retain(pppuVar17);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  puStack_300 = PTR_PTR_1126f3ab0;
  pppppuVar5 = &ppppuStack_308;
  ppppuStack_308 = pppppuVar10;
  _objc_msgSendSuper2(pppppuVar5,PTR_s_init_1125d9248);
  if (pppppuVar5 != (undefined8 *****)0x0) {
    pppppuVar5[1] = ppppuVar18;
    ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = pppppuVar5[3];
    pppppuVar5[3] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar11 = pppppuVar5[4];
    pppppuVar5[4] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = pppppuVar5[6];
    pppppuVar5[6] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar11 = pppppuVar5[7];
    pppppuVar5[7] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = pppppuVar5[6];
    ppppuVar11 = pppppuVar5[7];
    func_0x00010bf51e00(ppppuVar12);
    func_0x00010c0d9840(ppppuVar11);
    _objc_release(ppppuVar12);
    _objc_retain(ppppuVar9);
    ppppuVar12 = pppppuVar5[8];
    pppppuVar5[8] = ppppuVar9;
    _objc_release(ppppuVar12);
    _objc_retain(param_5);
    ppppuVar12 = pppppuVar5[0xe];
    pppppuVar5[0xe] = param_5;
    _objc_release(ppppuVar12);
    _objc_retain(param_6);
    ppppuVar12 = pppppuVar5[9];
    pppppuVar5[9] = param_6;
    _objc_release(ppppuVar12);
    _objc_retain(param_7);
    ppppuVar12 = pppppuVar5[10];
    pppppuVar5[10] = param_7;
    _objc_release(ppppuVar12);
    _objc_retain(param_8);
    ppppuVar12 = pppppuVar5[0xb];
    pppppuVar5[0xb] = param_8;
    _objc_release(ppppuVar12);
    _objc_retain(pppuStack_280);
    ppppuVar12 = pppppuVar5[0xc];
    pppppuVar5[0xc] = (undefined8 ****)pppuStack_280;
    _objc_release(ppppuVar12);
    _objc_retain(pppuVar17);
    ppppuVar12 = pppppuVar5[0xd];
    pppppuVar5[0xd] = (undefined8 ****)pppuVar17;
    _objc_release(ppppuVar12);
    _objc_retain(pppuVar3);
    ppppuVar12 = pppppuVar5[0x11];
    pppppuVar5[0x11] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar12);
    _objc_retain(pppuVar4);
    ppppuVar12 = pppppuVar5[0x12];
    pppppuVar5[0x12] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar12);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126c1088;
    _objc_alloc_init();
    ppppuVar11 = pppppuVar5[0xf];
    pppppuVar5[0xf] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126ae790;
    _objc_alloc();
    pppppuVar10 = pppppuVar5;
    func_0x00010be85780(pppppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppppuVar11 = pppppuVar5[2];
    pppppuVar5[2] = ppppuVar12;
    _objc_release(ppppuVar11);
    _objc_release(pppppuVar10);
    func_0x00010befa240();
    _objc_initWeak(auStack_310,pppppuVar5);
    ppppuVar12 = (undefined8 ****)PTR_PTR_1126ae720;
    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_330 = 0xc2000000;
    pcStack_328 = FUN_1068ae788;
    puStack_320 = &UNK_110947088;
    _objc_copyWeak(auStack_318,auStack_310);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = pppppuVar5[5];
    pppppuVar5[5] = ppppuVar12;
    _objc_release(ppppuVar11);
    ppppuVar12 = pppppuVar5[2];
    _objc_copyWeak(auStack_340,auStack_310);
    func_0x00010c0f7fc0(ppppuVar12);
    _objc_destroyWeak(auStack_340);
    _objc_destroyWeak(auStack_318);
    _objc_destroyWeak(auStack_310);
  }
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar17);
  _objc_release(ppuVar2);
  _objc_release(pppuStack_280);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar9);
  return pppppuVar5;
}



/* Entry: 1068adcf8; end: 1068adeff;  */

undefined8 *******
FUN_1068adcf8(undefined8 *****param_1,undefined8 *******param_2,undefined8 ******param_3,
             undefined8 ******param_4,undefined8 ******param_5,undefined8 ******param_6,
             undefined8 ******param_7,undefined8 ******param_8)

{
  undefined *puVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******unaff_x23;
  undefined8 ******unaff_x24;
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined8 ******ppppppuStack_268;
  undefined *puStack_260;
  undefined8 *****pppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined8 *****pppppuStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *****pppppuStack_180;
  undefined8 ******ppppppuStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 ****ppppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 *****apppppuStack_118 [3];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ****appppuStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar11 = param_2;
  ppppppuVar10 = param_3;
  ppppppuVar13 = param_4;
  _objc_retain(param_2);
  if (param_1 != (undefined8 *****)0x0) {
    ppppuVar5 = param_1[1];
    pppppppuVar11 = (undefined8 *******)&UNK_110946f18;
    (*(code *)(*ppppuVar5)[5])();
    if ((int)ppppuVar5 != 0) {
      ppppuVar5 = param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *******)0x0) {
        unaff_x23 = (undefined8 *******)&UNK_10f39ec7b;
      }
      else {
        unaff_x23 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = (undefined8 ******)appppuStack_78;
      func_0x00010002b838(appppuStack_78,unaff_x23);
      puVar1 = &UNK_10f39ec7c;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_60,puVar1);
      ppppuStack_98 = (undefined8 *****)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&ppppuStack_98,appppuStack_78,&lStack_48,2);
      pppppppuVar11 = (undefined8 *******)&UNK_110946f18;
      param_3 = (undefined8 ******)&ppppuStack_98;
      ppppppuVar10 = (undefined8 ******)&ppppuStack_98;
      (*(code *)(*ppppuVar5)[3])(ppppuVar5);
      pppppuStack_80 = param_3;
      func_0x00010007e5dc(&pppppuStack_80);
      lVar15 = 0;
      param_1 = appppuStack_78;
      ppppppuVar13 = param_4;
      do {
        if ((&cStack_49)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppppuVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppppuVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pppppppuVar7 = pppppppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_1068adf00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar12 = pppppppuVar11;
  ppppppuVar14 = ppppppuVar10;
  ppppppuVar16 = ppppppuVar13;
  pppppuStack_e0 = unaff_x24;
  ppppppuStack_d8 = unaff_x23;
  pppppuStack_d0 = param_3;
  ppppuStack_c8 = param_1;
  ppppppuStack_c0 = pppppppuVar6;
  ppppppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppppuVar11);
  if (pppppppuVar7 != (undefined8 *******)0x0) {
    ppppppuVar8 = pppppppuVar7[1];
    pppppppuVar12 = (undefined8 *******)&UNK_110946f68;
    (*(code *)(*ppppppuVar8)[5])();
    if ((int)ppppppuVar8 != 0) {
      ppppppuVar16 = pppppppuVar7[1];
      _objc_retain(pppppppuVar11);
      if (pppppppuVar11 == (undefined8 *******)0x0) {
        unaff_x23 = (undefined8 *******)&UNK_10f39ec7b;
      }
      else {
        unaff_x23 = pppppppuVar11;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppppuVar11);
      unaff_x24 = apppppuStack_118;
      func_0x00010002b838(apppppuStack_118,unaff_x23);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppppuVar10 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_100,puVar1);
      ppppuStack_138 = (undefined8 *****)0x0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&ppppuStack_138,apppppuStack_118,&lStack_e8,2);
      pppppppuVar12 = (undefined8 *******)&UNK_110946f68;
      ppppppuVar10 = (undefined8 ******)&ppppuStack_138;
      ppppppuVar14 = (undefined8 ******)&ppppuStack_138;
      (*(code *)(*ppppppuVar16)[3])(ppppppuVar16);
      pppppuStack_120 = ppppppuVar10;
      func_0x00010007e5dc(&pppppuStack_120);
      lVar15 = 0;
      pppppppuVar7 = (undefined8 *******)apppppuStack_118;
      ppppppuVar16 = ppppppuVar13;
      do {
        if ((&cStack_e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppppuVar6 = pppppppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppppppuVar6;
  }
  ___stack_chk_fail();
  _objc_release(pppppppuVar11);
  _objc_release(pppppppuVar11);
  pppppppuVar9 = pppppppuVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_1068ae108;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar13 = ppppppuVar14;
  ppppppuVar8 = ppppppuVar16;
  pppppuStack_180 = unaff_x24;
  ppppppuStack_178 = unaff_x23;
  pppppuStack_170 = ppppppuVar10;
  ppppppuStack_168 = pppppppuVar7;
  ppppppuStack_160 = pppppppuVar6;
  ppppppuStack_158 = pppppppuVar11;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pppppppuVar12);
  if (pppppppuVar9 != (undefined8 *******)0x0) {
    ppppppuVar10 = pppppppuVar9[1];
    (*(code *)(*ppppppuVar10)[5])(ppppppuVar10,&UNK_110946fb8);
    if ((int)ppppppuVar10 != 0) {
      ppppppuVar10 = pppppppuVar9[1];
      _objc_retain(pppppppuVar12);
      if (pppppppuVar12 == (undefined8 *******)0x0) {
        pppppppuVar11 = (undefined8 *******)&UNK_10f39ec7b;
      }
      else {
        pppppppuVar11 = pppppppuVar12;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppppuVar12);
      func_0x00010002b838(auStack_1b8,pppppppuVar11);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppppuVar14 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_1a0,puVar1);
      ppppuStack_1d8 = (undefined8 *****)0x0;
      pppppuStack_1d0 = (undefined8 ******)0x0;
      pppppuStack_1c8 = (undefined8 ******)0x0;
      func_0x00010007e1e8(&ppppuStack_1d8,auStack_1b8,&lStack_188,2);
      ppppppuVar13 = (undefined8 ******)&ppppuStack_1d8;
      (*(code *)(*ppppppuVar10)[3])(ppppppuVar10,&UNK_110946fb8);
      pppppuStack_1c0 = &ppppuStack_1d8;
      func_0x00010007e5dc(&pppppuStack_1c0);
      lVar15 = 0;
      ppppppuVar8 = ppppppuVar16;
      do {
        if ((&cStack_189)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  pppppppuVar11 = pppppppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pppppppuVar11;
  }
  ___stack_chk_fail();
  _objc_release(pppppppuVar12);
  _objc_release(pppppppuVar12);
  __Unwind_Resume();
  pppppuVar4 = pppppuStack_1c0;
  pppppuVar3 = pppppuStack_1c8;
  pppppuVar2 = pppppuStack_1d0;
  ppppuVar5 = ppppuStack_1d8;
  _objc_retain(ppppppuVar13);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppppuStack_1e0);
  _objc_retain(ppppuVar5);
  _objc_retain(pppppuVar2);
  _objc_retain(pppppuVar3);
  _objc_retain(pppppuVar4);
  puStack_260 = PTR_PTR_1126f3ab0;
  pppppppuVar6 = &ppppppuStack_268;
  ppppppuStack_268 = pppppppuVar11;
  _objc_msgSendSuper2(pppppppuVar6,PTR_s_init_1125d9248);
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    pppppppuVar6[1] = ppppppuVar8;
    ppppppuVar10 = (undefined8 ******)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar14 = pppppppuVar6[3];
    pppppppuVar6[3] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppppuVar14 = pppppppuVar6[4];
    pppppppuVar6[4] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = (undefined8 ******)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar14 = pppppppuVar6[6];
    pppppppuVar6[6] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppppuVar14 = pppppppuVar6[7];
    pppppppuVar6[7] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = pppppppuVar6[6];
    ppppppuVar14 = pppppppuVar6[7];
    func_0x00010bf51e00(ppppppuVar10);
    func_0x00010c0d9840(ppppppuVar14);
    _objc_release(ppppppuVar10);
    _objc_retain(ppppppuVar13);
    ppppppuVar10 = pppppppuVar6[8];
    pppppppuVar6[8] = ppppppuVar13;
    _objc_release(ppppppuVar10);
    _objc_retain(param_5);
    ppppppuVar10 = pppppppuVar6[0xe];
    pppppppuVar6[0xe] = param_5;
    _objc_release(ppppppuVar10);
    _objc_retain(param_6);
    ppppppuVar10 = pppppppuVar6[9];
    pppppppuVar6[9] = param_6;
    _objc_release(ppppppuVar10);
    _objc_retain(param_7);
    ppppppuVar10 = pppppppuVar6[10];
    pppppppuVar6[10] = param_7;
    _objc_release(ppppppuVar10);
    _objc_retain(param_8);
    ppppppuVar10 = pppppppuVar6[0xb];
    pppppppuVar6[0xb] = param_8;
    _objc_release(ppppppuVar10);
    _objc_retain(pppppuStack_1e0);
    ppppppuVar10 = pppppppuVar6[0xc];
    pppppppuVar6[0xc] = (undefined8 ******)pppppuStack_1e0;
    _objc_release(ppppppuVar10);
    _objc_retain(pppppuVar2);
    ppppppuVar10 = pppppppuVar6[0xd];
    pppppppuVar6[0xd] = (undefined8 ******)pppppuVar2;
    _objc_release(ppppppuVar10);
    _objc_retain(pppppuVar3);
    ppppppuVar10 = pppppppuVar6[0x11];
    pppppppuVar6[0x11] = (undefined8 ******)pppppuVar3;
    _objc_release(ppppppuVar10);
    _objc_retain(pppppuVar4);
    ppppppuVar10 = pppppppuVar6[0x12];
    pppppppuVar6[0x12] = (undefined8 ******)pppppuVar4;
    _objc_release(ppppppuVar10);
    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126c1088;
    _objc_alloc_init();
    ppppppuVar14 = pppppppuVar6[0xf];
    pppppppuVar6[0xf] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126ae790;
    _objc_alloc();
    pppppppuVar11 = pppppppuVar6;
    func_0x00010be85780(pppppppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppppppuVar14 = pppppppuVar6[2];
    pppppppuVar6[2] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    _objc_release(pppppppuVar11);
    func_0x00010befa240();
    _objc_initWeak(auStack_270,pppppppuVar6);
    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126ae720;
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_1068ae788;
    puStack_280 = &UNK_110947088;
    _objc_copyWeak(auStack_278,auStack_270);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar14 = pppppppuVar6[5];
    pppppppuVar6[5] = ppppppuVar10;
    _objc_release(ppppppuVar14);
    ppppppuVar10 = pppppppuVar6[2];
    _objc_copyWeak(auStack_2a0,auStack_270);
    func_0x00010c0f7fc0(ppppppuVar10);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_278);
    _objc_destroyWeak(auStack_270);
  }
  _objc_release(pppppuVar4);
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar2);
  _objc_release(ppppuVar5);
  _objc_release(pppppuStack_1e0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppppuVar13);
  return pppppppuVar6;
}



/* Entry: 1068adf00; end: 1068ae107;  */

undefined8 *****
FUN_1068adf00(undefined1 *param_1,undefined8 *****param_2,undefined8 ****param_3,
             undefined8 ****param_4,undefined8 ****param_5,undefined8 ****param_6,
             undefined8 ****param_7,undefined8 ****param_8)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined8 *****unaff_x23;
  undefined1 *unaff_x24;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined8 ****ppppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 ***pppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined1 *puStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = param_2;
  ppppuVar11 = param_3;
  ppppuVar13 = param_4;
  _objc_retain(param_2);
  if (param_1 != (undefined1 *)0x0) {
    plVar6 = *(long **)(param_1 + 8);
    pppppuVar10 = (undefined8 *****)&UNK_110946f68;
    (**(code **)(*plVar6 + 0x28))();
    if ((int)plVar6 != 0) {
      plVar6 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *****)0x0) {
        unaff_x23 = (undefined8 *****)&UNK_10f39ec7b;
      }
      else {
        unaff_x23 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,unaff_x23);
      puVar1 = &UNK_10f39ec7c;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_60,puVar1);
      ppuStack_98 = (undefined8 ***)0x0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&ppuStack_98,auStack_78,&lStack_48,2);
      pppppuVar10 = (undefined8 *****)&UNK_110946f68;
      param_3 = (undefined8 ****)&ppuStack_98;
      ppppuVar11 = (undefined8 ****)&ppuStack_98;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pppuStack_80 = param_3;
      func_0x00010007e5dc(&pppuStack_80);
      lVar14 = 0;
      param_1 = auStack_78;
      ppppuVar13 = param_4;
      do {
        if ((&cStack_49)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  pppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_1068ae108;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar11;
  ppppuVar15 = ppppuVar13;
  puStack_e0 = unaff_x24;
  ppppuStack_d8 = unaff_x23;
  pppuStack_d0 = param_3;
  puStack_c8 = param_1;
  ppppuStack_c0 = pppppuVar7;
  ppppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar10);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar9 = pppppuVar8[1];
    (*(code *)(*ppppuVar9)[5])(ppppuVar9,&UNK_110946fb8);
    if ((int)ppppuVar9 != 0) {
      ppppuVar15 = pppppuVar8[1];
      _objc_retain(pppppuVar10);
      if (pppppuVar10 == (undefined8 *****)0x0) {
        pppppuVar7 = (undefined8 *****)&UNK_10f39ec7b;
      }
      else {
        pppppuVar7 = pppppuVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar10);
      func_0x00010002b838(auStack_118,pppppuVar7);
      puVar1 = &UNK_10f39ec7c;
      if ((int)ppppuVar11 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_100,puVar1);
      ppuStack_138 = (undefined8 ***)0x0;
      pppuStack_130 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      func_0x00010007e1e8(&ppuStack_138,auStack_118,&lStack_e8,2);
      ppppuVar12 = (undefined8 ****)&ppuStack_138;
      (*(code *)(*ppppuVar15)[3])(ppppuVar15,&UNK_110946fb8);
      pppuStack_120 = &ppuStack_138;
      func_0x00010007e5dc(&pppuStack_120);
      lVar14 = 0;
      ppppuVar15 = ppppuVar13;
      do {
        if ((&cStack_e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  pppppuVar7 = pppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar10);
  _objc_release(pppppuVar10);
  __Unwind_Resume();
  pppuVar5 = pppuStack_120;
  pppuVar4 = pppuStack_128;
  pppuVar3 = pppuStack_130;
  ppuVar2 = ppuStack_138;
  _objc_retain(ppppuVar12);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_140);
  _objc_retain(ppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuVar5);
  puStack_1c0 = PTR_PTR_1126f3ab0;
  pppppuVar10 = &ppppuStack_1c8;
  ppppuStack_1c8 = pppppuVar7;
  _objc_msgSendSuper2(pppppuVar10,PTR_s_init_1125d9248);
  if (pppppuVar10 != (undefined8 *****)0x0) {
    pppppuVar10[1] = ppppuVar15;
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar13 = pppppuVar10[3];
    pppppuVar10[3] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar13 = pppppuVar10[4];
    pppppuVar10[4] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar13 = pppppuVar10[6];
    pppppuVar10[6] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar13 = pppppuVar10[7];
    pppppuVar10[7] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = pppppuVar10[6];
    ppppuVar13 = pppppuVar10[7];
    func_0x00010bf51e00(ppppuVar11);
    func_0x00010c0d9840(ppppuVar13);
    _objc_release(ppppuVar11);
    _objc_retain(ppppuVar12);
    ppppuVar11 = pppppuVar10[8];
    pppppuVar10[8] = ppppuVar12;
    _objc_release(ppppuVar11);
    _objc_retain(param_5);
    ppppuVar11 = pppppuVar10[0xe];
    pppppuVar10[0xe] = param_5;
    _objc_release(ppppuVar11);
    _objc_retain(param_6);
    ppppuVar11 = pppppuVar10[9];
    pppppuVar10[9] = param_6;
    _objc_release(ppppuVar11);
    _objc_retain(param_7);
    ppppuVar11 = pppppuVar10[10];
    pppppuVar10[10] = param_7;
    _objc_release(ppppuVar11);
    _objc_retain(param_8);
    ppppuVar11 = pppppuVar10[0xb];
    pppppuVar10[0xb] = param_8;
    _objc_release(ppppuVar11);
    _objc_retain(pppuStack_140);
    ppppuVar11 = pppppuVar10[0xc];
    pppppuVar10[0xc] = (undefined8 ****)pppuStack_140;
    _objc_release(ppppuVar11);
    _objc_retain(pppuVar3);
    ppppuVar11 = pppppuVar10[0xd];
    pppppuVar10[0xd] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar11);
    _objc_retain(pppuVar4);
    ppppuVar11 = pppppuVar10[0x11];
    pppppuVar10[0x11] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar11);
    _objc_retain(pppuVar5);
    ppppuVar11 = pppppuVar10[0x12];
    pppppuVar10[0x12] = (undefined8 ****)pppuVar5;
    _objc_release(ppppuVar11);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126c1088;
    _objc_alloc_init();
    ppppuVar13 = pppppuVar10[0xf];
    pppppuVar10[0xf] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae790;
    _objc_alloc();
    pppppuVar7 = pppppuVar10;
    func_0x00010be85780(pppppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppppuVar13 = pppppuVar10[2];
    pppppuVar10[2] = ppppuVar11;
    _objc_release(ppppuVar13);
    _objc_release(pppppuVar7);
    func_0x00010befa240();
    _objc_initWeak(auStack_1d0,pppppuVar10);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae720;
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_1068ae788;
    puStack_1e0 = &UNK_110947088;
    _objc_copyWeak(auStack_1d8,auStack_1d0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar13 = pppppuVar10[5];
    pppppuVar10[5] = ppppuVar11;
    _objc_release(ppppuVar13);
    ppppuVar11 = pppppuVar10[2];
    _objc_copyWeak(auStack_200,auStack_1d0);
    func_0x00010c0f7fc0(ppppuVar11);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1d8);
    _objc_destroyWeak(auStack_1d0);
  }
  _objc_release(pppuVar5);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(ppuVar2);
  _objc_release(pppuStack_140);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar12);
  return pppppuVar10;
}



/* Entry: 1068ae108; end: 1068ae30f;  */

undefined8 ****
FUN_1068ae108(long param_1,undefined8 ****param_2,undefined8 ***param_3,undefined8 ***param_4,
             undefined8 ***param_5,undefined8 ***param_6,undefined8 ***param_7,undefined8 ***param_8
             )

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined8 ***pppuStack_128;
  undefined *puStack_120;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = param_3;
  pppuVar9 = param_4;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    (**(code **)(*plVar6 + 0x28))(plVar6,&UNK_110946fb8);
    if ((int)plVar6 != 0) {
      plVar6 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 ****)0x0) {
        ppppuVar7 = (undefined8 ****)&UNK_10f39ec7b;
      }
      else {
        ppppuVar7 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_78,ppppuVar7);
      puVar1 = &UNK_10f39ec7c;
      if ((int)param_3 == 0) {
        puVar1 = &UNK_10f39ec81;
      }
      func_0x00010002b838(auStack_60,puVar1);
      puStack_98 = (undefined8 **)0x0;
      ppuStack_90 = (undefined8 ***)0x0;
      ppuStack_88 = (undefined8 ***)0x0;
      func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
      pppuVar10 = (undefined8 ***)&puStack_98;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110946fb8);
      ppuStack_80 = &puStack_98;
      func_0x00010007e5dc(&ppuStack_80);
      lVar12 = 0;
      pppuVar9 = param_4;
      do {
        if ((&cStack_49)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
  }
  ppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar5 = ppuStack_80;
  ppuVar4 = ppuStack_88;
  ppuVar3 = ppuStack_90;
  puVar2 = puStack_98;
  _objc_retain(pppuVar10);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(ppuStack_a0);
  _objc_retain(puVar2);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar5);
  puStack_120 = PTR_PTR_1126f3ab0;
  ppppuVar8 = &pppuStack_128;
  pppuStack_128 = ppppuVar7;
  _objc_msgSendSuper2(ppppuVar8,PTR_s_init_1125d9248);
  if (ppppuVar8 != (undefined8 ****)0x0) {
    ppppuVar8[1] = pppuVar9;
    pppuVar9 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = ppppuVar8[3];
    ppppuVar8[3] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = (undefined8 ***)PTR_PTR_1126ae820;
    _objc_opt_new();
    pppuVar11 = ppppuVar8[4];
    ppppuVar8[4] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = ppppuVar8[6];
    ppppuVar8[6] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = (undefined8 ***)PTR_PTR_1126ae820;
    _objc_opt_new();
    pppuVar11 = ppppuVar8[7];
    ppppuVar8[7] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = ppppuVar8[6];
    pppuVar11 = ppppuVar8[7];
    func_0x00010bf51e00(pppuVar9);
    func_0x00010c0d9840(pppuVar11);
    _objc_release(pppuVar9);
    _objc_retain(pppuVar10);
    pppuVar9 = ppppuVar8[8];
    ppppuVar8[8] = pppuVar10;
    _objc_release(pppuVar9);
    _objc_retain(param_5);
    pppuVar9 = ppppuVar8[0xe];
    ppppuVar8[0xe] = param_5;
    _objc_release(pppuVar9);
    _objc_retain(param_6);
    pppuVar9 = ppppuVar8[9];
    ppppuVar8[9] = param_6;
    _objc_release(pppuVar9);
    _objc_retain(param_7);
    pppuVar9 = ppppuVar8[10];
    ppppuVar8[10] = param_7;
    _objc_release(pppuVar9);
    _objc_retain(param_8);
    pppuVar9 = ppppuVar8[0xb];
    ppppuVar8[0xb] = param_8;
    _objc_release(pppuVar9);
    _objc_retain(ppuStack_a0);
    pppuVar9 = ppppuVar8[0xc];
    ppppuVar8[0xc] = (undefined8 ***)ppuStack_a0;
    _objc_release(pppuVar9);
    _objc_retain(ppuVar3);
    pppuVar9 = ppppuVar8[0xd];
    ppppuVar8[0xd] = (undefined8 ***)ppuVar3;
    _objc_release(pppuVar9);
    _objc_retain(ppuVar4);
    pppuVar9 = ppppuVar8[0x11];
    ppppuVar8[0x11] = (undefined8 ***)ppuVar4;
    _objc_release(pppuVar9);
    _objc_retain(ppuVar5);
    pppuVar9 = ppppuVar8[0x12];
    ppppuVar8[0x12] = (undefined8 ***)ppuVar5;
    _objc_release(pppuVar9);
    pppuVar9 = (undefined8 ***)PTR_PTR_1126c1088;
    _objc_alloc_init();
    pppuVar11 = ppppuVar8[0xf];
    ppppuVar8[0xf] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = (undefined8 ***)PTR_PTR_1126ae790;
    _objc_alloc();
    ppppuVar7 = ppppuVar8;
    func_0x00010be85780(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    pppuVar11 = ppppuVar8[2];
    ppppuVar8[2] = pppuVar9;
    _objc_release(pppuVar11);
    _objc_release(ppppuVar7);
    func_0x00010befa240();
    _objc_initWeak(auStack_130,ppppuVar8);
    pppuVar9 = (undefined8 ***)PTR_PTR_1126ae720;
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1068ae788;
    puStack_140 = &UNK_110947088;
    _objc_copyWeak(auStack_138,auStack_130);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = ppppuVar8[5];
    ppppuVar8[5] = pppuVar9;
    _objc_release(pppuVar11);
    pppuVar9 = ppppuVar8[2];
    _objc_copyWeak(auStack_160,auStack_130);
    func_0x00010c0f7fc0(pppuVar9);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_130);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(pppuVar10);
  return ppppuVar8;
}



/* Entry: 1068ae310; end: 1068ae787; -[SCSpotlightMediaFetcher initWithCircumstanceEngine:feedType:preferences:discoverFeedDataFetcher:storiesMediaCoordinator:playbackMediaPrefetcher:contentObjectResolver:notificationCenter:snapDocConfigurer:readReceiptCoordinator:spotlightUsageTracker:] */

undefined8 *
FUN_1068ae310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_80 = PTR_PTR_1126f3ab0;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_4;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[3];
    puVar2[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[4];
    puVar2[4] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[6];
    puVar2[6] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[7];
    puVar2[7] = puVar3;
    _objc_release(uVar5);
    uVar5 = puVar2[6];
    uVar1 = puVar2[7];
    func_0x00010bf51e00(uVar5);
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar2[8];
    puVar2[8] = param_3;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar2[0xe];
    puVar2[0xe] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar2[9];
    puVar2[9] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar2[10];
    puVar2[10] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar2[0xb];
    puVar2[0xb] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar2[0xc];
    puVar2[0xc] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar2[0xd];
    puVar2[0xd] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar5 = puVar2[0x11];
    puVar2[0x11] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar2[0x12];
    puVar2[0x12] = param_13;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar5 = puVar2[0xf];
    puVar2[0xf] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = puVar2;
    func_0x00010be85780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar2[2];
    puVar2[2] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010befa240();
    _objc_initWeak(auStack_90,puVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1068ae788;
    puStack_a0 = &UNK_110947088;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[5];
    puVar2[5] = puVar3;
    _objc_release(uVar5);
    uVar5 = puVar2[2];
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0f7fc0(uVar5);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
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
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1068ae788; end: 1068ae7f3;  */

void FUN_1068ae788(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be94da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068ae7f4; end: 1068ae81b; -[SCSpotlightMediaFetcher storyMediaStates] */

void FUN_1068ae7f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068ae81c; end: 1068ae843; -[SCSpotlightMediaFetcher storiesBeingFetched] */

void FUN_1068ae81c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068ae844; end: 1068ae857; -[SCSpotlightMediaFetcher _resolveSupportedStoryTypes] */

void FUN_1068ae844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithArray__112667130,
             &PTR__OBJC_CLASS___NSConstantArray_111180c80);
  return;
}



/* Entry: 1068ae858; end: 1068ae85f; -[SCSpotlightMediaFetcher supportedStoryTypes] */

void FUN_1068ae858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 1068ae860; end: 1068aebc7; -[SCSpotlightMediaFetcher fetchMediaForSpotlightStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:] */

void FUN_1068ae860(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_initWeak(auStack_70,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = param_1;
  func_0x00010be0ef00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852d5b4(uVar7,uVar3,&PTR____CFConstantStringClassReference_110dfae38,1);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c2632a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b720(param_3);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf4b900();
  _objc_release(puVar4);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852d5b4(uVar7,param_1,&PTR____CFConstantStringClassReference_110e63f58,1);
    _objc_release(param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068aebc8;
    puStack_98 = &UNK_110849230;
    puVar8 = auStack_80;
    _objc_copyWeak(puVar8,auStack_70);
    puStack_90 = puVar1;
    uStack_78 = param_6;
    _objc_retain(param_10);
    uStack_88 = param_10;
    func_0x00010c0f7fc0(uVar6);
    _objc_release(uStack_88);
  }
  else {
    puVar8 = auStack_c8;
    _objc_copyWeak(puVar8,auStack_70);
    _objc_retain(param_3);
    uStack_b8 = param_4;
    uStack_b7 = param_5;
    uStack_b6 = param_6;
    _objc_retain(param_7);
    _objc_retain(param_8);
    uStack_c0 = param_9;
    _objc_retain(puVar2);
    _objc_retain(param_10);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_10);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_3);
  }
  _objc_destroyWeak(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1068aebc8; end: 1068aec2f;  */

void FUN_1068aebc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedb6e0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068aec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,2,0);
    return;
  }
  return;
}



/* Entry: 1068aec30; end: 1068aed97;  */

void FUN_1068aec30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc8700();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_70,param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_68 = *(undefined1 *)(param_1 + 0x6a);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  func_0x00010be126a0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 1068aed98; end: 1068aeebb;  */

void FUN_1068aed98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = *(undefined1 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1068aeebc; end: 1068af033;  */

void FUN_1068aeebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be8d7e0();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar6);
  func_0x00010be55b20();
  _objc_release(lVar6);
  if (*(long *)(param_1 + 0x50) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000108f4bad8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf28a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfbeba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar6 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar6);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb6e0(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001068af01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x10))(lVar6,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38))
  ;
  return;
}



/* Entry: 1068af034; end: 1068af213; -[SCSpotlightMediaFetcher _initialize] */

void FUN_1068af034(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x80) = param_1;
  lVar1 = param_2;
  func_0x00010be5ec20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_2 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068af214;
  puStack_70 = &UNK_110946e68;
  lStack_68 = param_2;
  func_0x00010bf97ce0(uVar2);
  _objc_initWeak(auStack_90,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010bf00a20(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1068af214; end: 1068af28f;  */

void FUN_1068af214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_3);
  func_0x00010c282800(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068af290; end: 1068af2d7;  */

void FUN_1068af290(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068af2d8; end: 1068af3af; -[SCSpotlightMediaFetcher _continueInitializationWithSavedStories:] */

void FUN_1068af2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be967e0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068af3b0; end: 1068af403;  */

void FUN_1068af3b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068af404; end: 1068af81b; -[SCSpotlightMediaFetcher _continueInitializationWithLoadedDedupeFps:savedStories:] */

void FUN_1068af404(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    func_0x00010c12adc0();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar5);
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852d7e4(uVar5,param_1,&PTR____CFConstantStringClassReference_110e621d8,1);
  }
  else {
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1068af81c;
    puStack_80 = &UNK_110886d58;
    _objc_retain(param_3);
    lVar2 = lVar3;
    lStack_78 = param_3;
    func_0x0001006372a4(lVar3,&puStack_98);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = lVar2;
      func_0x00010bf529e0();
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (lVar3 == lVar4) {
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        lVar3 = param_1;
        func_0x00010be0ef00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010852d7e4(uVar5,lVar3,&PTR____CFConstantStringClassReference_110e63fd8,1);
        _objc_release(lVar3);
      }
    }
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x18));
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      lVar3 = param_1;
      func_0x00010be0ef00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010852d7e4(uVar5,lVar3,&PTR____CFConstantStringClassReference_110e63ff8,1);
      _objc_release(lVar3);
    }
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar6 = 6.81691147847594e-313;
    uStack_a8 = 0x2020000000;
    uStack_a0 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x2020000000;
    uStack_c0 = 0;
    puStack_f0 = &uStack_f8;
    uStack_f8 = 0;
    uStack_e8 = 0x2020000000;
    uStack_e0 = 0;
    func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852e7f4(uVar5,lVar3,&PTR____CFConstantStringClassReference_110de5c78,puStack_b0[3]);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852ea44(uVar5,lVar3,&PTR____CFConstantStringClassReference_110de5c78,puStack_d0[3]);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852ec94(uVar5,lVar3,&PTR____CFConstantStringClassReference_110de5c78,puStack_f0[3]);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010852eee4(uVar5,lVar3,(long)((dVar6 - *(double *)(param_1 + 0x80)) * 1000.0));
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010be0ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852d7e4(uVar5,lVar3,&PTR____CFConstantStringClassReference_110e64018,1);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar5);
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_f8,8);
    __Block_object_dispose(&uStack_d8,8);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(lVar2);
    param_1 = lStack_78;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068af81c; end: 1068af83b;  */

uint FUN_1068af81c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1068af83c; end: 1068af87f;  */

void FUN_1068af83c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010c067fc0();
  if (param_3 < 3) {
    lVar1 = *(long *)(*(long *)(param_1 + param_3 * 8 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 1068af880; end: 1068af8bf; -[SCSpotlightMediaFetcher _addStoryBeingFetched:] */

void FUN_1068af880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068af8c0; end: 1068af8ff; -[SCSpotlightMediaFetcher _removeStoryBeingFetched:] */

void FUN_1068af8c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068af900; end: 1068af963; -[SCSpotlightMediaFetcher _saveStoryMediaStatesDict] */

void FUN_1068af900(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be5ec20(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068af964; end: 1068af9bb; -[SCSpotlightMediaFetcher _onResignActive:] */

void FUN_1068af964(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068af9bc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 1068af9bc; end: 1068af9c3;  */

void FUN_1068af9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveStoryMediaStatesDict_112584158);
  return;
}



/* Entry: 1068af9c4; end: 1068afab7; -[SCSpotlightMediaFetcher _updateMediaStateIfRequired:newSpotlightMediaState:] */

void FUN_1068af9c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (param_4 == 0) goto LAB_1068afa9c;
LAB_1068afa48:
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,param_3);
    _objc_release(puVar4);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c067fc0();
    if ((lVar3 == param_4) || ((lVar3 = lVar2, func_0x00010c067fc0(), param_4 == 1 && (lVar3 == 2)))
       ) goto LAB_1068afa9c;
    if (param_4 != 0) goto LAB_1068afa48;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,0,param_3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar5);
  func_0x00010c0d9840(uVar1,param_2,uVar5);
  _objc_release(uVar5);
LAB_1068afa9c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


