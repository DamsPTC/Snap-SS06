/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105474fd4; end: 105475027; -[SCAdsRemoteWebpageImpressionTrack initialPageLoadStatusCode] */

undefined8 FUN_105474fd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd7f20();
  if ((int)uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    func_0x00010c063a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 105475028; end: 1054754fb; -[SCAdsTrackRequest validationMetrics:] */

void FUN_105475028(undefined **param_1,undefined **param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1;
  func_0x00010bef60a0();
  iVar1 = (int)ppuVar2;
  ppuVar2 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (iVar1 < 7) {
    if (iVar1 == 3) {
      ppuVar2 = param_1;
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf42b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c29c0c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf9b740();
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      _objc_release(param_1);
      ppuVar2 = ppuVar6;
      func_0x00010c2650a0();
      if (((int)ppuVar2 == 0) ||
         (ppuVar2 = (undefined **)PTR____NSArray0__struct_11034ab48, (int)ppuVar5 != 7)) {
        ppuVar4 = ppuVar6;
        func_0x000105475e0c();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_60 = ppuVar4;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105475434;
      }
    }
    else {
      if (iVar1 != 4) goto LAB_105475440;
LAB_105475098:
      func_0x00010c12a8a0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = &PTR___NSConcreteGlobalBlock_11088b808;
      ppuVar2 = param_1;
      func_0x000100504554();
      ppuVar6 = param_1;
    }
  }
  else {
    if (iVar1 == 0x10) {
      ppuVar2 = param_1;
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x00010c275c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar2);
      func_0x00010c12a8a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x105475a04;
      puStack_70 = &UNK_11088b828;
      ppuStack_68 = ppuVar4;
      _objc_retain(ppuVar4);
      param_2 = &puStack_88;
      ppuVar2 = param_1;
      func_0x000100504554();
      _objc_release(ppuStack_68);
      ppuVar6 = param_1;
    }
    else {
      if (iVar1 != 10) {
        if (iVar1 != 7) goto LAB_105475440;
        goto LAB_105475098;
      }
      ppuVar2 = param_1;
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      ppuVar4 = ppuVar6;
      func_0x00010bf42b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010c29c0c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00010bf9b740();
      _objc_release(ppuVar5);
      _objc_release(ppuVar2);
      _objc_release(param_1);
      ppuVar2 = ppuVar6;
      func_0x00010bf68440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010c296d80();
      if (((int)ppuVar5 < 1) || (ppuVar5 = ppuVar4, func_0x00010c2650a0(), (int)ppuVar5 == 0)) {
        _objc_release(ppuVar2);
      }
      else {
        _objc_release(ppuVar2);
        ppuVar2 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if ((int)ppuVar3 == 7) goto LAB_105475434;
      }
      ppuVar5 = ppuVar4;
      func_0x000105475e0c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar6;
      func_0x00010bf68440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c296d80();
      if ((int)ppuVar3 == 0) {
        ppuVar3 = ppuVar6;
        func_0x00010bf67da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar3;
        func_0x00010c296d80();
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        if (((ulong)ppuVar7 & 1) != 0) goto LAB_105475404;
        puVar8 = PTR_PTR_1126b9460;
        param_2 = ppuVar5;
        FUN_105477ff8();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != (undefined *)0x0) {
          *(undefined8 *)(puVar8 + 0x80) = 1;
          _objc_retain(puVar8);
        }
        _objc_release(puVar8);
        puVar9 = puVar8;
        FUN_1054784b8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar9;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      else {
        _objc_release(ppuVar2);
LAB_105475404:
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_58 = ppuVar5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar5);
    }
LAB_105475434:
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
LAB_105475440:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar2 = (undefined **)PTR_PTR_1126b9458;
    _objc_retain(param_2);
    _objc_alloc();
    ppuVar4 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c274a80();
    ppuVar6 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c274d20();
    ppuVar7 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x00010bf0d4c0();
    ppuVar11 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bf0ce60();
    ppuVar13 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010c0d6bc0();
    ppuVar15 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar15;
    func_0x00010bfb1040();
    ppuVar17 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar17;
    func_0x00010bfbbea0();
    ppuVar19 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010bf0cd60();
    ppuVar21 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010bfb14c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar22;
    func_0x00010c296d80();
    ppuVar24 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar24;
    func_0x00010c275c00();
    ppuVar26 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = ppuVar26;
    func_0x00010bfe4a60();
    ppuVar28 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = ppuVar28;
    func_0x00010bf87cc0();
    ppuVar30 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuVar30;
    func_0x00010bf87c00();
    ppuVar32 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar33 = ppuVar32;
    func_0x00010c0d67a0();
    ppuVar34 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar35 = ppuVar34;
    func_0x00010c2650a0();
    ppuVar36 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar37 = ppuVar36;
    func_0x00010c2654e0();
    ppuVar38 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar39 = ppuVar38;
    func_0x00010bf1fe60();
    ppuVar40 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar41 = ppuVar40;
    func_0x00010c2a4860();
    ppuVar42 = param_2;
    func_0x00010c0640c0();
    ppuVar43 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar44 = ppuVar43;
    func_0x00010bf21860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar45 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar46 = ppuVar45;
    func_0x00010c087e00();
    ppuVar47 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar48 = ppuVar47;
    func_0x00010bfbca00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar49 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd4d00();
    ppuVar50 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd87c0();
    ppuVar51 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd4720();
    ppuVar52 = param_2;
    func_0x00010c2a4780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd9500();
    ppuVar53 = param_2;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar54 = ppuVar53;
    func_0x00010c072600();
    _objc_retainAutoreleasedReturnValue();
    FUN_105477ae0(ppuVar2,ppuVar5,ppuVar3,ppuVar10,ppuVar12,ppuVar14,ppuVar16,ppuVar18,ppuVar20,
                  ppuVar23,ppuVar25,ppuVar27,ppuVar29,ppuVar31,ppuVar33,(char)ppuVar35,(int)ppuVar37
                  ,ppuVar39,(int)ppuVar41,(int)ppuVar42,ppuVar44,(char)ppuVar46);
    _objc_release(ppuVar54);
    _objc_release(ppuVar53);
    _objc_release(ppuVar52);
    _objc_release(ppuVar51);
    _objc_release(ppuVar50);
    _objc_release(ppuVar49);
    _objc_release(ppuVar48);
    _objc_release(ppuVar47);
    _objc_release(ppuVar45);
    _objc_release(ppuVar44);
    _objc_release(ppuVar43);
    _objc_release(ppuVar40);
    _objc_release(ppuVar38);
    _objc_release(ppuVar36);
    _objc_release(ppuVar34);
    _objc_release(ppuVar32);
    _objc_release(ppuVar30);
    _objc_release(ppuVar28);
    _objc_release(ppuVar26);
    _objc_release(ppuVar24);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    _objc_release(ppuVar19);
    _objc_release(ppuVar17);
    _objc_release(ppuVar15);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1054754fc; end: 105475f67;  */

void FUN_1054754fc(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
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
  undefined8 uVar51;
  
  puVar1 = PTR_PTR_1126b9458;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274a80();
  uVar4 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c274d20();
  uVar6 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0d4c0();
  uVar8 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf0ce60();
  uVar10 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0d6bc0();
  uVar12 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfb1040();
  uVar14 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfbbea0();
  uVar16 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf0cd60();
  uVar18 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bfb14c0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c296d80();
  uVar21 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c275c00();
  uVar23 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bfe4a60();
  uVar25 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf87cc0();
  uVar27 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf87c00();
  uVar29 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c0d67a0();
  uVar31 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010c2650a0();
  uVar33 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010c2654e0();
  uVar35 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf1fe60();
  uVar37 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010c2a4860();
  uVar39 = param_2;
  func_0x00010c0640c0();
  uVar40 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x00010bf21860();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x00010c087e00();
  uVar44 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x00010bfbca00();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4d00();
  uVar47 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd87c0();
  uVar48 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4720();
  uVar49 = param_2;
  func_0x00010c2a4780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd9500();
  uVar50 = param_2;
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar51 = uVar50;
  func_0x00010c072600();
  _objc_retainAutoreleasedReturnValue();
  FUN_105477ae0(puVar1,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,uVar17,uVar20,uVar22,uVar24,
                uVar26,uVar28,uVar30,(char)uVar32,(int)uVar34,uVar36,(int)uVar38,(int)uVar39,uVar41,
                (char)uVar43);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar37);
  _objc_release(uVar35);
  _objc_release(uVar33);
  _objc_release(uVar31);
  _objc_release(uVar29);
  _objc_release(uVar27);
  _objc_release(uVar25);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105475f68; end: 105475ff7; -[SCAdsWebViewContext navigationStartTimestamp] */

undefined8 FUN_105475f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfde7a0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2a48e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105475ff8; end: 105476093; -[SCAdsWebViewContext htmlResponseStartTimestamp] */

long FUN_105475ff8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd7cc0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe4a40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    func_0x00010c0d6bc0(param_1);
    param_1 = param_1 + lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 105476094; end: 10547612f; -[SCAdsWebViewContext domDownloadedTimestamp] */

long FUN_105476094(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd66c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf87ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    func_0x00010c0d6bc0(param_1);
    param_1 = param_1 + lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 105476130; end: 1054761cb; -[SCAdsWebViewContext domContentLoadedTimestamp] */

long FUN_105476130(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd66e0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf87d80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    func_0x00010c0d6bc0(param_1);
    param_1 = param_1 + lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 1054761cc; end: 105476267; -[SCAdsWebViewContext firstContentfulPaintTimestamp] */

long FUN_1054761cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd7260();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    func_0x00010c0d6bc0(param_1);
    param_1 = param_1 + lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 105476268; end: 105476303; -[SCAdsWebViewContext fullyLoadedTimestamp] */

long FUN_105476268(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd7540();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbb900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    func_0x00010c0d6bc0(param_1);
    param_1 = param_1 + lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 105476304; end: 105476393; -[SCAdsWebViewContext navigationFinishTimestamp] */

undefined8 FUN_105476304(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfde780();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2a48c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105476394; end: 1054763ef; -[SCAdsWebViewContext hasBrowse] */

undefined8 FUN_105476394(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdce60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1054763f0; end: 10547647f; -[SCAdsWebViewContext webviewLoadProgress] */

undefined8 FUN_1054763f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd8860();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c09bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105476480; end: 10547658f; -[SCAdsWebViewContext hasLinkActivateNavigation] */

byte FUN_105476480(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e700();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c25e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf980c0();
    _objc_release(lVar1);
    _objc_release(param_1);
    bVar3 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  return bVar3 & 1;
}



/* Entry: 105476590; end: 1054765af;  */

void FUN_105476590(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1054765b0; end: 1054766bf; -[SCAdsWebViewContext hasBackForwardNavigation] */

byte FUN_1054765b0(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e700();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c25e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf980c0();
    _objc_release(lVar1);
    _objc_release(param_1);
    bVar3 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  return bVar3 & 1;
}



/* Entry: 1054766c0; end: 1054766df;  */

void FUN_1054766c0(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 3) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1054766e0; end: 10547671f; -[SCAdsWebViewContext hasMultiSubnavigations] */

bool FUN_1054766e0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25e700();
  _objc_release(param_1);
  return 2 < uVar1;
}



/* Entry: 105476720; end: 105476763; -[SCAdsWebViewContext gaHitTypes] */

void FUN_105476720(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfbca20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105476764; end: 10547676b;  */

void FUN_105476764(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_value_112683588);
  return;
}



/* Entry: 10547676c; end: 1054767bf; -[SCAdsWebViewContext firstGALatency] */

undefined8 FUN_10547676c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd7280();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bfb14e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 1054767c0; end: 105476857; -[SCAdsWebViewContext browserUserAgent] */

void FUN_1054767c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c2a40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd4d20();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c2a40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf21860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105476858; end: 10547693f; -[SCWebBrowserDebugViewer initWithAdLifecycleTimestampsTracker:adWatermarkEventsTracker:logViewer:] */

undefined1 *
FUN_105476858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e85c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105476940; end: 10547696b; -[SCWebBrowserDebugViewer begin] */

void FUN_105476940(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  _objc_initWeak(auStack_18,param_1);
  _objc_destroyWeak(auStack_18);
  return;
}



/* Entry: 10547696c; end: 1054769d3; -[SCWebBrowserDebugViewer appendEventLog:parameters:] */

void FUN_10547696c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8cf0;
  func_0x00010c296b80();
  if ((int)puVar1 != 0) {
    func_0x00010bdcd0e0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054769d4; end: 105476c53; -[SCWebBrowserDebugViewer _onNextAdWebviewLifecycleEvent:] */

void FUN_1054769d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105476c54;
  uStack_40 = 0x105476c64;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105476c54;
  uStack_70 = 0x105476c64;
  uStack_68 = 0;
  func_0x00010c0c14e0(param_3);
  func_0x00010bdcd0e0(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105476c54; end: 105476d83;  */

void FUN_105476c54(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105476d84; end: 105476e53;  */

void FUN_105476d84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110de0078;
  _objc_retain(param_4);
  _objc_release(uVar3);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dad058;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_40 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110de0498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105476e54; end: 105476ea7;  */

void FUN_105476e54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110de0498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105476ea8; end: 105477093; -[SCWebBrowserDebugViewer _onNextAdCreationLifecyleEvent:] */

void FUN_105476ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105476c54;
  uStack_40 = 0x105476c64;
  uStack_38 = 0;
  func_0x00010c0c0260(param_3);
  func_0x00010bdcd0c0(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105477094; end: 1054771c7;  */

void FUN_105477094(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110de04f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054771c8; end: 105477263; -[SCWebBrowserDebugViewer _appendEventLog:] */

void FUN_1054771c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_3;
  _objc_retain();
  FUN_105477264();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar5 / uVar3;
  }
  uVar4 = uVar2;
  func_0x00010c0dfd40(uVar2,param_2,uVar5 - uVar1 * uVar3);
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  func_0x00010bf06d60(*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,0x100000000000,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105477264; end: 1054773cf;  */

void FUN_105477264(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar13 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_90 = puVar2;
  func_0x00010bf63160();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar3;
  func_0x00010c0ec920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar4;
  func_0x00010c1248c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar5;
  func_0x00010bf1e540();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_70 = puVar6;
  func_0x00010c2bee40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar7;
  func_0x00010bfce1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 7;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar14);
  puVar10 = (undefined1 *)ppuVar13;
  _objc_retain();
  FUN_105477264();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(ulong *)(puVar2 + 0x28);
  puVar11 = puVar10;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar1 = uVar15 / (ulong)puVar11;
  }
  puVar12 = puVar10;
  func_0x00010c0dfd40(puVar10,param_2,uVar15 - uVar1 * (long)puVar11);
  _objc_retainAutoreleasedReturnValue();
  *(long *)(puVar2 + 0x28) = *(long *)(puVar2 + 0x28) + 1;
  func_0x00010bf06d60(*(undefined8 *)(puVar2 + 0x18),param_2,ppuVar13,uVar14,0x100000000000,puVar12)
  ;
  _objc_release(uVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1054773d0; end: 105477487; -[SCWebBrowserDebugViewer _appendEventLog:parameters:] */

void FUN_1054773d0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_3;
  _objc_retain();
  FUN_105477264();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar5 / uVar3;
  }
  uVar4 = uVar2;
  func_0x00010c0dfd40(uVar2,param_2,uVar5 - uVar1 * uVar3);
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  func_0x00010bf06d60(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,0x100000000000,uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105477488; end: 1054774cf; -[SCWebBrowserDebugViewer .cxx_destruct] */

void FUN_105477488(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054774d0; end: 1054774fb; +[SCGrapheneAdWebviewValidationMetric trackRequestFieldInvalid] */

void FUN_1054774d0(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054774fc; end: 105477527; +[SCGrapheneAdWebviewValidationMetric viewInvariant] */

void FUN_1054774fc(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477528; end: 105477553; +[SCGrapheneAdWebviewValidationMetric playbackBeginInvariant] */

void FUN_105477528(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477554; end: 10547757f; +[SCGrapheneAdWebviewValidationMetric clickInvariant] */

void FUN_105477554(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477580; end: 1054775ab; +[SCGrapheneAdWebviewValidationMetric attachmentPresentedInvariant] */

void FUN_105477580(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054775ac; end: 1054775d7; +[SCGrapheneAdWebviewValidationMetric naviStartInvariant] */

void FUN_1054775ac(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054775d8; end: 105477603; +[SCGrapheneAdWebviewValidationMetric domDownloadInvariant] */

void FUN_1054775d8(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477604; end: 10547762f; +[SCGrapheneAdWebviewValidationMetric domContentLoadInvariant] */

void FUN_105477604(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477630; end: 10547765b; +[SCGrapheneAdWebviewValidationMetric paintStatistic] */

void FUN_105477630(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547765c; end: 105477687; +[SCGrapheneAdWebviewValidationMetric naviFinishStatistic] */

void FUN_10547765c(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477688; end: 1054776b3; +[SCGrapheneAdWebviewValidationMetric dismissInvariant] */

void FUN_105477688(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054776b4; end: 1054776df; +[SCGrapheneAdWebviewValidationMetric exitAdInvariant] */

void FUN_1054776b4(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054776e0; end: 10547770b; +[SCGrapheneAdWebviewValidationMetric swipedInvariant] */

void FUN_1054776e0(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547770c; end: 105477737; +[SCGrapheneAdWebviewValidationMetric botTimeInvariant] */

void FUN_10547770c(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477738; end: 105477763; +[SCGrapheneAdWebviewValidationMetric loadProgressInvariant] */

void FUN_105477738(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477764; end: 10547778f; +[SCGrapheneAdWebviewValidationMetric c2pInvariant] */

void FUN_105477764(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477790; end: 1054777bb; +[SCGrapheneAdWebviewValidationMetric c2dInvariant] */

void FUN_105477790(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054777bc; end: 1054777e7; +[SCGrapheneAdWebviewValidationMetric userAgentInvariant] */

void FUN_1054777bc(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054777e8; end: 105477813; +[SCGrapheneAdWebviewValidationMetric fgaInvariant] */

void FUN_1054777e8(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477814; end: 10547783f; +[SCGrapheneAdWebviewValidationMetric nonBlankUrl] */

void FUN_105477814(void)

{
  _objc_alloc(PTR_PTR_1126b9448);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105477840; end: 1054778df; -[SCGrapheneAdWebviewValidationMetric description] */

void FUN_105477840(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de0658;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de0658,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e85c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1054778e0; end: 105477adf; -[SCGrapheneRegistry adWebviewValidationGraphene] */

void FUN_1054778e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105477968;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbf58 != -1) {
    func_0x00010002a2fc(0x1136bbf58,&puStack_48);
  }
  uVar1 = uRam00000001136bbf50;
  _objc_retain(uRam00000001136bbf50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105477ae0; end: 105477c63;  */

long * FUN_105477ae0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,undefined1 param_16,
                    undefined4 param_17,long param_18,undefined4 param_19,undefined4 param_20,
                    long param_21,undefined1 param_22,undefined4 param_23,long param_24,
                    undefined4 param_25,undefined1 param_26)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_21);
  _objc_retain(param_24);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e85d0;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[4] = param_2;
      plVar1[5] = param_3;
      plVar1[6] = param_4;
      plVar1[7] = param_5;
      plVar1[8] = param_6;
      plVar1[9] = param_7;
      plVar1[10] = param_8;
      plVar1[0xb] = param_9;
      plVar1[0xc] = param_10;
      plVar1[0xd] = param_11;
      plVar1[0xe] = param_12;
      plVar1[0xf] = param_13;
      plVar1[0x10] = param_14;
      plVar1[0x11] = param_15;
      *(undefined1 *)(plVar1 + 1) = param_16;
      plVar1[0x12] = param_18;
      *(undefined4 *)(plVar1 + 2) = param_17;
      *(undefined4 *)((long)plVar1 + 0x14) = param_19;
      *(undefined4 *)(plVar1 + 3) = param_20;
      lVar2 = param_21;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x13];
      plVar1[0x13] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 9) = param_22;
      lVar2 = param_24;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x14];
      plVar1[0x14] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 10) = (undefined1)param_25;
      *(undefined1 *)((long)plVar1 + 0xb) = param_25._1_1_;
      *(undefined1 *)((long)plVar1 + 0xc) = param_25._2_1_;
      *(undefined1 *)((long)plVar1 + 0xd) = param_25._3_1_;
      *(undefined1 *)((long)plVar1 + 0xe) = param_26;
    }
  }
  _objc_release(param_24);
  _objc_release(param_21);
  return plVar1;
}



/* Entry: 105477c64; end: 105477c87; -[SCAdWebviewTrackRequestValidationMetric copyWithZone:] */

undefined8 FUN_105477c64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105477c88; end: 105477d8f; -[SCAdWebviewTrackRequestValidationMetric hash] */

undefined8 * FUN_105477c88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
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
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_100;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = (ulong)*(byte *)(param_1 + 8);
  lStack_88 = (long)*(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lStack_80 = -lVar6;
  if (-1 < lVar6) {
    lStack_80 = lVar6;
  }
  uStack_100 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  lStack_78 = (long)(int)*(undefined8 *)(param_1 + 0x14);
  lStack_70 = (long)(int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 10);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar10 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar8;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_58 = uVar3;
  func_0x000100505190(&uStack_100,0x1b);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105477fa0:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105477fac;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((((*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28))) &&
           (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))))) &&
         (*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48))))) &&
       (((((*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50) &&
           (*(long *)((long)puVar4 + 0x58) == *(long *)(param_3 + 0x58))) &&
          (*(long *)((long)puVar4 + 0x60) == *(long *)(param_3 + 0x60))) &&
         (((((*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68) &&
             (*(long *)((long)puVar4 + 0x70) == *(long *)(param_3 + 0x70))) &&
            (*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78))) &&
           ((*(long *)((long)puVar4 + 0x80) == *(long *)(param_3 + 0x80) &&
            (*(long *)((long)puVar4 + 0x88) == *(long *)(param_3 + 0x88))))) &&
          (((*(char *)((long)puVar4 + 8) == param_3[8] &&
            ((*(int *)((long)puVar4 + 0x10) == *(int *)(param_3 + 0x10) &&
             (*(long *)((long)puVar4 + 0x90) == *(long *)(param_3 + 0x90))))) &&
           (*(int *)((long)puVar4 + 0x14) == *(int *)(param_3 + 0x14))))))) &&
        ((((*(int *)((long)puVar4 + 0x18) == *(int *)(param_3 + 0x18) &&
           (*(char *)((long)puVar4 + 9) == param_3[9])) &&
          (*(char *)((long)puVar4 + 10) == param_3[10])) &&
         (((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar4 + 0xc) == param_3[0xc])) &&
          ((*(char *)((long)puVar4 + 0xd) == param_3[0xd] &&
           (*(char *)((long)puVar4 + 0xe) == param_3[0xe])))))))))) {
      lVar6 = *(long *)((long)puVar4 + 0x98);
      if ((lVar6 == *(long *)(param_3 + 0x98)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0xa0);
        if (puVar7 != *(undefined1 **)(param_3 + 0xa0)) {
          func_0x00010c071ae0();
          goto LAB_105477fac;
        }
        goto LAB_105477fa0;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_105477fac:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 105477d90; end: 105477fc7; -[SCAdWebviewTrackRequestValidationMetric isEqual:] */

long FUN_105477d90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105477fa0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105477fac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) &&
       (((((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
         (((((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
             (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
            (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
           ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
            (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))))) &&
          (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            ((*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10) &&
             (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))) &&
           (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))))) &&
        ((((*(int *)(param_1 + 0x18) == *(int *)(param_3 + 0x18) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
          ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
           (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))))))))) {
      lVar3 = *(long *)(param_1 + 0x98);
      if ((lVar3 == *(long *)(param_3 + 0x98)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0xa0);
        if (lVar3 != *(long *)(param_3 + 0xa0)) {
          func_0x00010c071ae0();
          goto LAB_105477fac;
        }
        goto LAB_105477fa0;
      }
    }
    lVar3 = 0;
  }
LAB_105477fac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105477fc8; end: 105477ff7; -[SCAdWebviewTrackRequestValidationMetric .cxx_destruct] */

void FUN_105477fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x98,0);
  return;
}



/* Entry: 105477ff8; end: 1054784b7;  */

void FUN_105477ff8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  _objc_opt_self(PTR_PTR_1126b9460);
  puVar1 = PTR_PTR_1126b9460;
  _objc_alloc_init();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      puVar6 = (undefined *)0x0;
      uVar5 = 0;
      goto LAB_105478288;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x98);
    _objc_retain(uVar5);
    puVar7 = *(undefined **)(param_2 + 0xa0);
    puVar6 = puVar7;
  }
  else {
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 8) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x18) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x20) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x28) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x30) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x38) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x40) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x48) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x50) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x58) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x60) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x68) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x70) = 0;
      _objc_retain(puVar1);
      puVar1[0x78] = 0;
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x7c) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x80) = 0;
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x88) = 0;
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x8c) = 0;
      _objc_retain(puVar1);
      _objc_retain(0);
      uVar5 = 0;
    }
    else {
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 0x20);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_2 + 0x40);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_2 + 0x48);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(param_2 + 0x50);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(param_2 + 0x58);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(param_2 + 0x60);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x50) = *(undefined8 *)(param_2 + 0x68);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x58) = *(undefined8 *)(param_2 + 0x70);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x60) = *(undefined8 *)(param_2 + 0x78);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x68) = *(undefined8 *)(param_2 + 0x80);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x70) = *(undefined8 *)(param_2 + 0x88);
      _objc_retain(puVar1);
      puVar1[0x78] = *(undefined1 *)(param_2 + 8);
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x10);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0x80) = *(undefined8 *)(param_2 + 0x90);
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x88) = *(undefined4 *)(param_2 + 0x14);
      _objc_retain(puVar1);
      *(undefined4 *)(puVar1 + 0x8c) = *(undefined4 *)(param_2 + 0x18);
      _objc_retain(puVar1);
      uVar5 = *(undefined8 *)(param_2 + 0x98);
      _objc_retain(uVar5);
    }
    uVar4 = uVar5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 0x90);
    *(undefined8 *)(puVar1 + 0x90) = uVar4;
    _objc_release(uVar3);
    _objc_retain(puVar1);
    if (param_2 == 0) {
      puVar1[0x98] = 0;
      _objc_retain(puVar1);
      _objc_retain(0);
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1[0x98] = *(undefined1 *)(param_2 + 9);
      _objc_retain(puVar1);
      puVar6 = *(undefined **)(param_2 + 0xa0);
      _objc_retain(puVar6);
    }
    puVar7 = puVar6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(puVar1 + 0xa0);
    *(undefined **)(puVar1 + 0xa0) = puVar7;
    _objc_release(uVar4);
    _objc_retain(puVar1);
    if (param_2 == 0) {
      puVar1[0xa8] = 0;
      _objc_retain(puVar1);
      puVar1[0xa9] = 0;
      _objc_retain(puVar1);
      puVar1[0xaa] = 0;
      _objc_retain(puVar1);
      puVar1[0xab] = 0;
      _objc_retain(puVar1);
      bVar2 = 0;
    }
    else {
      puVar1[0xa8] = *(undefined1 *)(param_2 + 10);
      _objc_retain(puVar1);
      puVar1[0xa9] = *(undefined1 *)(param_2 + 0xb);
      _objc_retain(puVar1);
      puVar1[0xaa] = *(undefined1 *)(param_2 + 0xc);
      _objc_retain(puVar1);
      puVar1[0xab] = *(undefined1 *)(param_2 + 0xd);
      _objc_retain(puVar1);
      bVar2 = *(byte *)(param_2 + 0xe);
    }
    puVar1[0xac] = bVar2 & 1;
    puVar7 = puVar1;
  }
  _objc_retain(puVar7);
LAB_105478288:
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054784b8; end: 10547855f;  */

void FUN_1054784b8(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126b9458);
    FUN_105477ae0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105478560; end: 10547858f; -[SCAdWebviewTrackRequestValidationMetricBuilder .cxx_destruct] */

void FUN_105478560(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x90,0);
  return;
}



/* Entry: 105478590; end: 105478603; -[SCGrapheneUnifiedAdTrackValidatorMetric2 init] */

undefined1 * FUN_105478590(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e85d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105478604; end: 105478833;  */

void FUN_105478604(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088b8f8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_105478834;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11088b948,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105478834; end: 1054788ab;  */

void FUN_105478834(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11088b948,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054788ac; end: 105478923;  */

void FUN_1054788ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11088b998,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105478924; end: 105478b53;  */

void FUN_105478924(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088b9e8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_105478b54;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11088ba38,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105478b54; end: 105478bcb;  */

void FUN_105478b54(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11088ba38,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105478bcc; end: 105478c43;  */

void FUN_105478bcc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11088ba88,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105478c44; end: 105478ce7; -[SCAdOnDeviceFeatureGatingProvider initWithAdConfigProviderV2:adsPreferencesProvider:] */

undefined1 *
FUN_105478c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e85e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105478ce8; end: 105478d53; -[SCAdOnDeviceFeatureGatingProvider isEligibleForOnDeviceCanOpenURLUploading] */

undefined8 FUN_105478ce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c278ce0();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105478d54; end: 105478d83; -[SCAdOnDeviceFeatureGatingProvider .cxx_destruct] */

void FUN_105478d54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105478d84; end: 1054790c7;  */

undefined *** FUN_105478d84(undefined8 param_1,undefined ***param_2,undefined *param_3)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *apuStack_98 [3];
  long *plStack_80;
  long *plStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    _objc_opt_class(PTR_PTR_1126b9468);
    if (param_2 == (undefined ***)0x0) {
      uStack_b0 = 0;
      param_1 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      ppuStack_e0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_e0,param_2);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    puStack_120 = (undefined8 *)0x0;
    uStack_170 = (undefined **)((ulong)uStack_170._4_4_ << 0x20);
    pppuVar7 = &ppuStack_e0;
    pppuVar5 = &ppuStack_e0;
    pppuVar8 = &ppuStack_130;
    pppuVar9 = (undefined ***)&uStack_170;
    func_0x00010054c81c(pppuVar5,pppuVar8,pppuVar9);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_b8);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b9468);
    if (param_2 == (undefined ***)0x0) {
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_170,param_2);
    }
    puVar3 = &uStack_171;
    FUN_105479330(puVar3);
    _objc_retain(param_3);
    uStack_188 = 0;
    uStack_180 = 0;
    puStack_190 = (undefined *)0x0;
    puVar4 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x0001004c2bb4(&puStack_190,puVar4);
    param_1 = 0;
    ppuStack_128 = (undefined **)0x0;
    ppuStack_130 = (undefined **)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x24 = (undefined *)*puStack_120;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_120 != unaff_x24) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(undefined **)((long)ppuStack_128 + (long)unaff_x25 * 8);
          _objc_retain(unaff_x23);
          puStack_e8 = unaff_x23;
          func_0x0001004c2d3c(&puStack_190,&puStack_e8);
          _objc_release(puStack_e8);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar4 != unaff_x25);
        puVar4 = param_3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    pppuVar7 = (undefined ***)0x0;
    _objc_release(param_3);
    _objc_release(param_3);
    func_0x0001004c2e3c(&ppuStack_e0,0xc,puVar3,&puStack_190);
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    puStack_120 = (undefined8 *)0x0;
    puStack_e8 = (undefined *)((ulong)puStack_e8 & 0xffffffff00000000);
    pppuVar5 = (undefined ***)&uStack_170;
    pppuVar8 = &ppuStack_e0;
    pppuVar9 = &ppuStack_130;
    func_0x0001000e77a0(pppuVar5,pppuVar8,pppuVar9,&puStack_e8);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    plVar1 = plStack_78;
    ppuStack_e0 = &PTR_FUN_110862700;
    plStack_78 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_80;
    plStack_80 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_130 = apuStack_98;
    func_0x000100105004(&ppuStack_130);
    ppuStack_130 = &puStack_190;
    func_0x000100105004(&ppuStack_130);
    func_0x0001000e76e0(&uStack_148);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
  }
  _objc_release(param_3);
  pppuVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
    return pppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pppuVar6);
  func_0x000104bd46a0();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_retain(pppuVar9);
  pppuVar5 = pppuVar8;
  func_0x00010c08fa60();
  if (pppuVar5 != (undefined ***)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar6;
    FUN_105478d84(pppuVar6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar5);
    _objc_release(puVar4);
    unaff_x23 = PTR_PTR_1126b9468;
    _objc_alloc(PTR_PTR_1126b9468);
    func_0x00010c03ae40();
    unaff_x25 = PTR_PTR_1126b9470;
    if (pppuVar7 == (undefined ***)0x0) {
      FUN_1054796d0(PTR_PTR_1126b9470,unaff_x23);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_1054798c0(PTR_PTR_1126b9470,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4de20(unaff_x23);
      if (unaff_x25 != (undefined *)0x0) {
        *(undefined8 *)(unaff_x25 + 0x20) = param_1;
      }
      unaff_x24 = unaff_x23;
      func_0x00010bf4ce40(unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x25 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x25);
      }
      _objc_release(unaff_x24);
    }
    func_0x00010c25ed40(pppuVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(pppuVar7);
  }
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  pppuVar5 = pppuVar6;
  _objc_release(pppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(unaff_x25);
  _objc_release(unaff_x23);
  _objc_release(pppuVar7);
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  _objc_release(pppuVar6);
  __Unwind_Resume(pppuVar5);
  if ((bRam0000000113819818 & 1) == 0) {
    iVar2 = 0x13819818;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130da478,0x100000000);
      ___cxa_guard_release(0x113819818);
    }
  }
  return (undefined ***)&PTR_PTR_1130da478;
}



/* Entry: 1054790c8; end: 10547932f;  */

undefined ** FUN_1054790c8(undefined8 param_1,undefined **param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_2;
    FUN_105478d84(param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = ppuVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    unaff_x23 = PTR_PTR_1126b9468;
    _objc_alloc(PTR_PTR_1126b9468);
    func_0x00010c03ae40();
    unaff_x25 = PTR_PTR_1126b9470;
    if (unaff_x22 == (undefined **)0x0) {
      FUN_1054796d0(PTR_PTR_1126b9470,unaff_x23);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_1054798c0(PTR_PTR_1126b9470,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4de20(unaff_x23);
      if (unaff_x25 != (undefined *)0x0) {
        *(undefined8 *)(unaff_x25 + 0x20) = param_1;
      }
      unaff_x24 = unaff_x23;
      func_0x00010bf4ce40(unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x25 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x25);
      }
      _objc_release(unaff_x24);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(unaff_x25);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar4);
  if ((bRam0000000113819818 & 1) == 0) {
    iVar1 = 0x13819818;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130da478,0x100000000);
      ___cxa_guard_release(0x113819818);
    }
  }
  return &PTR_PTR_1130da478;
}



/* Entry: 105479330; end: 105479393;  */

undefined ** FUN_105479330(void)

{
  int iVar1;
  
  if ((bRam0000000113819818 & 1) == 0) {
    iVar1 = 0x13819818;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130da478,0x100000000);
      ___cxa_guard_release(0x113819818);
    }
  }
  return &PTR_PTR_1130da478;
}



/* Entry: 105479394; end: 10547941b;  */

void FUN_105479394(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547941c; end: 1054794a7;  */

void FUN_10547941c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054794a8; end: 1054794b3; +[SCAdPublicStoryContentViewHistory table] */

undefined * FUN_1054794a8(void)

{
  return &UNK_10f2c2c42;
}



/* Entry: 1054794b4; end: 1054796ab; +[SCAdPublicStoryContentViewHistory immutableObjectParse:bufferSize:] */

void FUN_1054794b4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b9468;
  _objc_alloc(PTR_PTR_1126b9468);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    if (6 < uVar3) {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6));
      if (uVar7 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      if ((uVar3 < 9) || (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6)), uVar7 == 0)) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar7);
        puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2 + 1;
        if (*puVar2 != 0) {
          do {
            puVar11 = puVar10 + 2;
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(*(undefined8 *)puVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5,param_2,puVar9);
            _objc_release(puVar9);
            puVar10 = puVar11;
          } while (puVar11 != puVar2 + 1 + (ulong)*puVar2 * 2);
        }
        puVar9 = puVar5;
        func_0x00010bf51e00(puVar5);
        _objc_release(puVar5);
      }
      goto LAB_105479574;
    }
  }
  puVar9 = (undefined *)0x0;
  uVar12 = 0;
LAB_105479574:
  func_0x00010c03ae40(uVar12,puVar4,param_2,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054796ac; end: 1054796cf; +[SCAdPublicStoryContentViewHistory objectClassFunctionPointer] */

undefined1  [16] FUN_1054796ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1054796c8;
  auVar1._0_8_ = 0x1054796c0;
  return auVar1;
}



/* Entry: 1054796d0; end: 1054797e3;  */

void FUN_1054796d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar3 = PTR_PTR_1126b9470;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c116a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4de20(param_3);
    lVar2 = param_3;
    func_0x00010bf4ce40(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_1054797e4(param_1,puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054797e4; end: 1054798bf;  */

undefined1 *
FUN_1054797e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126e85e8;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1054798c0; end: 105479933;  */

void FUN_1054798c0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105479934();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105479934; end: 105479cb3;  */

void FUN_105479934(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,&UNK_10f2c2c64);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c116a20(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar5,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar5;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar5;
            _sqlite3_column_int64(puVar5,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b9468);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_105479c00;
            puVar5 = PTR_PTR_1126b9470;
            _objc_alloc(PTR_PTR_1126b9470);
            puVar2 = puVar3;
            func_0x00010c116a20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4de20(puVar3);
            puVar4 = puVar3;
            func_0x00010bf4ce40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_1054797e4(param_1,puVar5,puVar1,puVar2,puVar4);
            param_2 = puVar3;
            goto LAB_105479a30;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b9468);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b9470;
        _objc_alloc(PTR_PTR_1126b9470);
        puVar2 = puVar3;
        func_0x00010c116a20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4de20(puVar3);
        puVar4 = puVar3;
        func_0x00010bf4ce40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1054797e4(param_1,puVar5,puVar1,puVar2,puVar4);
        param_2 = puVar3;
LAB_105479a30:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105479c08;
      }
LAB_105479c00:
      param_2 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105479c08:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105479cb4; end: 105479d1b;  */

void FUN_105479cb4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b9468;
    _objc_alloc(PTR_PTR_1126b9468);
    func_0x00010c03ae40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105479d1c; end: 105479d4b; -[SCAdPublicStoryContentViewHistoryChangeRequest .cxx_destruct] */

void FUN_105479d1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105479d4c; end: 105479d57; -[SCAdPublicStoryContentViewHistoryChangeRequest table] */

undefined * FUN_105479d4c(void)

{
  return &UNK_10f2c2c42;
}



/* Entry: 105479d58; end: 105479d9f; -[SCAdPublicStoryContentViewHistoryChangeRequest createTableWithSQLite:] */

void FUN_105479d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddaf27c,0x95,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105479da0; end: 10547a127; -[SCAdPublicStoryContentViewHistoryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105479da0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105479cb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10547a128(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2c2cf3);
    if (lVar6 == 0) goto LAB_10547a0c4;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10547a0c4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b9468);
    func_0x00010c21c9a0(puVar7);
LAB_10547a0ac:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2c2cb6);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b9468);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10547a0d0;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10547a0d0;
    }
    FUN_105479cb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10547a128(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2c2d40);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b9468);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10547a0ac;
      }
    }
LAB_10547a0c4:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10547a0d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10547a128; end: 10547a4bf;  */

/* WARNING: Possible PIC construction at 0x00010547a384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010547a388) */
/* WARNING: Removing unreachable block (ram,0x00010547a3bc) */
/* WARNING: Removing unreachable block (ram,0x00010547a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010547a414) */
/* WARNING: Removing unreachable block (ram,0x00010547a444) */
/* WARNING: Removing unreachable block (ram,0x00010547a458) */
/* WARNING: Removing unreachable block (ram,0x00010547a468) */
/* WARNING: Removing unreachable block (ram,0x00010547a4a8) */
/* WARNING: Removing unreachable block (ram,0x00010547a4b8) */
/* WARNING: Removing unreachable block (ram,0x00010547a4f4) */
/* WARNING: Removing unreachable block (ram,0x00010547a57c) */
/* WARNING: Removing unreachable block (ram,0x00010547a50c) */
/* WARNING: Removing unreachable block (ram,0x00010547a518) */
/* WARNING: Removing unreachable block (ram,0x00010547a528) */
/* WARNING: Removing unreachable block (ram,0x00010547a564) */
/* WARNING: Removing unreachable block (ram,0x00010547a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010547a568) */
/* WARNING: Removing unreachable block (ram,0x00010547a3e4) */

void FUN_10547a128(ulong param_1,char *param_2)

{
  int iVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  pcVar3 = param_2;
  func_0x00010bf4ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  uVar11 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(pcVar3);
  pcVar4 = pcVar3;
  func_0x00010bf52a60();
  if (pcVar4 != (char *)0x0) {
    lVar9 = *plStack_130;
    do {
      pcVar10 = (char *)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(pcVar3);
        }
        func_0x00010bf885a0(*(undefined8 *)(lStack_138 + (long)pcVar10 * 8));
        uStack_148 = uVar11;
        FUN_10547a4c0(&lStack_160,&uStack_148);
        pcVar10 = pcVar10 + 1;
      } while (pcVar4 != pcVar10);
      pcVar4 = pcVar3;
      func_0x00010bf52a60();
    } while (pcVar4 != (char *)0x0);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar3 = param_2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar3 == (char *)0x0) goto LAB_10547a318;
  pcVar4 = pcVar3;
  _CFStringGetCStringPtr(pcVar3,0x8000100);
  if (pcVar4 != (char *)0x0) {
    pcVar10 = pcVar4;
    _strlen(pcVar4);
    func_0x0001001cde08(param_1,pcVar4,pcVar10);
    goto LAB_10547a318;
  }
  pcVar4 = pcVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar4 == (char *)0x0) {
    pcVar4 = pcVar3;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar4 != (char *)0x0) goto LAB_10547a2d4;
  }
  else {
LAB_10547a2d4:
    _objc_retainAutorelease(pcVar4);
    pcVar5 = pcVar4;
    func_0x00010bf25f00();
    pcVar6 = pcVar4;
    func_0x00010c08fa60(pcVar4);
    pcVar10 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar10 = pcVar5;
    }
    func_0x0001001cde08(param_1,pcVar10,pcVar6);
  }
  _objc_release(pcVar4);
LAB_10547a318:
  _objc_release(pcVar3);
  func_0x00010bf4de20(param_2);
  lVar9 = 0x1130da4e8;
  if (lStack_158 - lStack_160 != 0) {
    lVar9 = lStack_160;
  }
  uVar7 = param_1;
  func_0x00010547a5f0(param_1,lVar9,lStack_158 - lStack_160 >> 3);
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001ce11c(uVar11,0,param_1,6);
  if ((int)uVar7 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)uVar7) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar7 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = uVar7 & 0xffffffff | 0x800000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = *(ushort *)(param_1 + 0x44);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  *(ushort *)(param_1 + 0x44) = uVar2;
  return;
}



/* Entry: 10547a4c0; end: 10547a65f;  */

void FUN_10547a4c0(long *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar5 = (ulong *)(param_1 + 2);
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)*puVar5) {
    puVar12 = puVar10 + 1;
    *puVar10 = *param_2;
  }
  else {
    lVar11 = (long)puVar10 - *param_1;
    uVar2 = (lVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1051888e8();
      if (param_3 == 0) {
        return;
      }
      func_0x0001001ce088();
      iVar1 = ((((int)puVar5[4] - (int)puVar5[6]) + (int)puVar5[5]) - param_3) + 4;
      if ((iVar1 == 0) && ((char)puVar5[10] != '\x01')) {
        return;
      }
      puVar4 = puVar5;
      func_0x0001001ce0bc(puVar5,iVar1);
      puVar6 = (ulong *)puVar5[7];
      if (puVar5[6] - (long)puVar6 < 8) {
        func_0x0001001cde7c(puVar5,8);
        puVar6 = (ulong *)puVar5[7];
      }
      *puVar6 = (ulong)puVar4 & 0xffffffff | (long)param_2 << 0x20;
      puVar5[7] = puVar5[7] + 8;
      *(int *)(puVar5 + 8) = (int)puVar5[8] + 1;
      uVar3 = (uint)*(ushort *)((long)puVar5 + 0x44);
      if ((uint)*(ushort *)((long)puVar5 + 0x44) <= (uint)param_2) {
        uVar3 = (uint)param_2;
      }
      *(short *)((long)puVar5 + 0x44) = (short)uVar3;
      return;
    }
    uVar7 = (long)*puVar5 - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    FUN_1051888fc();
    puVar10 = (undefined8 *)((long)puVar5 + lVar11);
    lVar9 = (long)puVar10 - (param_1[1] - *param_1);
    puVar12 = puVar10 + 1;
    *puVar10 = *param_2;
    _memcpy(lVar9);
    lVar11 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)(puVar5 + uVar8);
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return;
}



/* Entry: 10547a660; end: 10547a833; -[SCSKOverlay initWithOverlayBuilder:params:config:overlayLifecycleEvents:configProvider:appImpressionTracker:screen:backgroundWindow:mainQueuePerformer:] */

undefined1 *
FUN_10547a660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e85f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 10547a834; end: 10547a85f; -[SCSKOverlay stateDescription] */

undefined ** FUN_10547a834(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x50) - 1;
  if (uVar1 < 6) {
    return (undefined **)(&PTR_PTR_11088bb48)[uVar1];
  }
  return &PTR____CFConstantStringClassReference_110de0938;
}



/* Entry: 10547a860; end: 10547a8d3; -[SCSKOverlay position] */

ulong FUN_10547a860(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SKOverlayAppConfiguration_1126b9478;
  _objc_opt_class(PTR__OBJC_CLASS___SKOverlayAppConfiguration_1126b9478);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c104260(uVar1);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10547a8d4; end: 10547aa5f; -[SCSKOverlay presentOverlayInWindow:visible:loadedBlock:] */

void FUN_10547a8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x50) == 6 || *(long *)(param_1 + 0x50) == 0) {
    _objc_storeWeak(param_1 + 0x58,param_3);
    *(undefined1 *)(param_1 + 0x60) = param_4;
    *(undefined1 *)(param_1 + 0x78) = 0;
    uVar1 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x50) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c23dbe0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      func_0x00010bde54a0(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010bf05660(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf58980(uVar2);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10547aa60; end: 10547aac7;  */

void FUN_10547aa60(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde54a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547aac8; end: 10547abdb; -[SCSKOverlay _configureOverlayAndPresent:error:] */

void FUN_10547aac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10547ab58;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10547abdc; end: 10547ad3f; -[SCSKOverlay _presentOverlay] */

void FUN_10547abdc(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    func_0x00010c108c20(*(undefined8 *)(param_2 + 0x10));
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c225b00((double)param_1);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf20340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_opt_class(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c14de60();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bf20340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c14db00(uVar4);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c680(uVar2,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf20340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10547ad40;
    puStack_50 = &UNK_110842e18;
    uStack_48 = uVar4;
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar2,param_3,&puStack_68);
    _objc_release(uVar4);
  }
  return;
}


