/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aea3e0; end: 105aea457;  */

void FUN_105aea3e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0de860(uVar1);
  func_0x00010c1cf660(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c29d360(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,uVar2,PTR_s__updateFirstViewedTimestamp_view_112593a30,uVar1);
  return;
}



/* Entry: 105aea458; end: 105aea497;  */

void FUN_105aea458(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0de840(uVar1);
  func_0x00010c1cf640(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateFirstViewedTimestamp_view_112593a30,0x2b);
  return;
}



/* Entry: 105aea498; end: 105aea5c7; -[SCDiscoverFeedViewController _updateFirstViewedTimestamp:viewLocation:] */

void FUN_105aea498(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  if (param_4 == 0x2d) {
    func_0x00010bfb1fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 0x2c) {
    func_0x00010bfb1fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 0x2b) {
      return;
    }
    func_0x00010bfb1fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105aea5c8; end: 105aea7af; -[SCDiscoverFeedViewController recordSectionsRenderedTimestampWithSections:sectionConfigurations:] */

void FUN_105aea5c8(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar8 = param_4;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0deb60();
      if (uVar3 != 0) {
        uVar3 = uVar8;
        func_0x0001079af528(uVar8,param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        if (uVar5 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar6);
        }
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      uVar8 = uVar8 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  uVar7 = param_2;
  func_0x00010bfa40e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105aea7b0;
  puStack_88 = &UNK_110841f80;
  uStack_80 = param_2;
  puStack_78 = puVar1;
  _objc_retain(puVar1);
  func_0x00010007380c(uVar7,&puStack_a0);
  _objc_release(uVar7);
  _objc_release(puStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105aea7b0; end: 105aea7e3;  */

void FUN_105aea7b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010bede7c0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105aea7e4; end: 105aea963; -[SCDiscoverFeedViewController _updateRenderedTimestampBySection:] */

void FUN_105aea7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,long param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 *param_11,undefined *param_12,
                  undefined *param_13)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  long lVar29;
  int iVar30;
  undefined *puVar31;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined1 *puVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  long lStack_540;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar16 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar37 = param_8;
  func_0x00010bf52a60();
  if (puVar37 != (undefined *)0x0) {
    lVar35 = *plStack_120;
    do {
      puVar36 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar35) {
          _objc_enumerationMutation(param_8);
        }
        lVar29 = param_6;
        func_0x00010c1305e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar29;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar29);
        if (lVar2 == 0) {
          puVar3 = param_8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar29 = param_6;
          func_0x00010c1305e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(lVar29);
          _objc_release(puVar3);
        }
        puVar36 = puVar36 + 1;
      } while (puVar37 != puVar36);
      puVar37 = param_8;
      puVar16 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar37 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar37 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar36 = param_8;
  func_0x00010c06d8c0();
  if (((ulong)puVar36 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0de840(param_8);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560(puVar3);
    func_0x00010c1d0640(puVar37);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar36);
    _objc_release(puVar4);
    _objc_release(puVar31);
    puVar36 = param_8;
    func_0x00010bf90020();
    if ((int)puVar36 != 0) {
      puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar37;
      func_0x00010c0e00e0(puVar37);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar3);
      _objc_release(puVar36);
      puVar36 = puVar37;
      func_0x00010c0e00e0(puVar37);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar36);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0de860(param_8);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar3);
  func_0x00010c1d0640(puVar37);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar36);
  _objc_release(puVar4);
  _objc_release(puVar31);
  puVar36 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar36);
  func_0x00010c1d0640(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar4);
  _objc_release(puVar31);
  _objc_release(puVar3);
  puVar36 = param_8;
  func_0x00010c2805e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar36);
  puVar36 = param_8;
  func_0x00010c280600(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar36);
  puVar36 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar36);
  func_0x00010c1d0640(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar4);
  _objc_release(puVar31);
  _objc_release(puVar3);
  puVar36 = param_8;
  func_0x00010bf90020();
  if ((int)puVar36 != 0) {
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar36);
  }
  dVar38 = 0.0;
  puVar36 = param_8;
  func_0x00010c280660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar36;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar36);
  puVar36 = puVar3;
  func_0x00010bf52a60();
  lVar29 = lRam0000000000000000;
  if (puVar36 == (undefined *)0x0) {
    bVar1 = false;
    dVar42 = 0.0;
    dVar46 = 0.0;
    dVar44 = 0.0;
  }
  else {
    dVar42 = 0.0;
    dVar46 = 0.0;
    dVar44 = 0.0;
    lStack_540 = 0;
    do {
      puVar31 = (undefined *)0x0;
      dVar43 = dVar42;
      do {
        if (lRam0000000000000000 != lVar29) {
          _objc_enumerationMutation(puVar3);
        }
        iVar30 = (int)*(undefined8 *)((long)puVar31 * 8);
        func_0x00010c067ec0();
        uVar6 = (ulong)iVar30;
        func_0x0001079af528(uVar6,puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c08fa60();
        dVar42 = dVar43;
        if ((uVar8 != 0) && (uVar8 = uVar7, func_0x000107cb8138(), (int)uVar8 != 0)) {
          puVar4 = param_8;
          func_0x00010c280660();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = param_8;
          func_0x00010c280680();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 != (undefined *)0x0) {
            puVar9 = param_8;
            func_0x00010c280680();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = param_8;
          func_0x00010c152dc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(puVar4);
          puVar4 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            func_0x00010c1d0640(puVar37);
            _objc_release(puVar4);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar37;
          func_0x00010c0e00e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar37;
          func_0x00010c0e00e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar37;
          func_0x00010c0e00e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = param_8;
          func_0x00010c1305e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar37;
          func_0x00010c0e00e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = param_8;
          func_0x00010bfb1b80(param_8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar37;
          func_0x00010c0e00e0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar4);
          puVar4 = param_8;
          func_0x00010bfb1fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar4);
          uVar8 = uVar7;
          func_0x00010c0720c0();
          if ((uVar8 & 1) == 0) {
            puVar4 = param_8;
            func_0x00010c1305e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar4);
            dVar39 = dVar38;
            dVar45 = dVar44;
            if (puVar5 != (undefined *)0x0) {
              puVar4 = param_8;
              func_0x00010c1305e0(param_8);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar39 = dVar38;
              _objc_release(puVar5);
              _objc_release(puVar4);
              dVar45 = dVar38;
              if (dVar38 <= dVar44) {
                dVar45 = dVar44;
              }
            }
            puVar4 = param_8;
            func_0x00010bfb1b80();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar4);
            dVar40 = dVar39;
            dVar38 = dVar46;
            if (puVar5 != (undefined *)0x0) {
              puVar4 = param_8;
              func_0x00010bfb1b80(param_8);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar40 = dVar39;
              _objc_release(puVar5);
              _objc_release(puVar4);
              dVar38 = dVar39;
              if ((dVar46 != 0.0) && (dVar38 = dVar46, dVar39 <= dVar46)) {
                dVar38 = dVar39;
              }
            }
            dVar46 = dVar38;
            lStack_540 = lStack_540 + 1;
            puVar4 = param_8;
            func_0x00010bfb1fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar4);
            dVar38 = dVar40;
            dVar44 = dVar45;
            if (puVar5 != (undefined *)0x0) {
              puVar4 = param_8;
              func_0x00010bfb1fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar38 = dVar40;
              _objc_release(puVar5);
              _objc_release(puVar4);
              dVar42 = dVar40;
              if ((dVar43 != 0.0) && (dVar42 = dVar43, dVar40 <= dVar43)) {
                dVar42 = dVar40;
              }
            }
          }
        }
        _objc_release(uVar7);
        _objc_release(uVar6);
        puVar31 = puVar31 + 1;
        dVar43 = dVar42;
      } while (puVar36 != puVar31);
      puVar36 = puVar3;
      func_0x00010bf52a60();
    } while (puVar36 != (undefined *)0x0);
    bVar1 = 0 < lStack_540;
  }
  _objc_release(puVar3);
  puVar36 = param_8;
  func_0x00010bf90020();
  if ((int)puVar36 != 0) {
    puVar36 = param_8;
    func_0x00010c2a0060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar36;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar36);
    puVar36 = puVar3;
    func_0x00010bf52a60();
    lVar29 = lRam0000000000000000;
    while (puVar36 != (undefined *)0x0) {
      puVar31 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar29) {
          _objc_enumerationMutation(puVar3);
        }
        iVar30 = (int)*(undefined8 *)((long)puVar31 * 8);
        func_0x00010c067ec0();
        ppuVar11 = (undefined **)(long)iVar30;
        func_0x0001079af528(ppuVar11,puVar16);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c08fa60();
        if (ppuVar13 != (undefined **)0x0) {
          puVar4 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar14 = param_8;
          func_0x00010c2a0060(param_8);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          puVar4 = puVar10;
          if (ppuVar12 != &PTR____CFConstantStringClassReference_110f4b1d8) {
            puVar4 = puVar9;
          }
          func_0x00010c067ec0(puVar4);
          func_0x00010c0df760(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar4);
          _objc_release(puVar5);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        puVar31 = puVar31 + 1;
      } while (puVar36 != puVar31);
      puVar36 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    dVar38 = 0.0;
    puVar36 = param_8;
    func_0x00010c249f20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar36;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar36);
    puVar36 = puVar3;
    func_0x00010bf52a60();
    lVar29 = lRam0000000000000000;
    while (puVar36 != (undefined *)0x0) {
      puVar31 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar29) {
          _objc_enumerationMutation(puVar3);
        }
        iVar30 = (int)*(undefined8 *)((long)puVar31 * 8);
        func_0x00010c067ec0();
        ppuVar11 = (undefined **)(long)iVar30;
        func_0x0001079af528(ppuVar11,puVar16);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c08fa60();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (ppuVar13 != (undefined **)0x0) {
          if (ppuVar12 == &PTR____CFConstantStringClassReference_110f4b1d8 ||
              ppuVar12 == &PTR____CFConstantStringClassReference_110eb56f8) {
            puVar4 = puVar37;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar4 = puVar5;
            func_0x00010bf1f3c0();
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)puVar4 == 0) {
              puVar9 = param_8;
              func_0x00010c249f20(param_8);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              func_0x00010c0df6e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar37;
              func_0x00010c0e00e0(puVar37);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              _objc_release(puVar14);
              _objc_release(puVar10);
            }
            else {
              func_0x00010bf1f3c0(puVar5);
              func_0x00010c0df6e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar37;
              func_0x00010c0e00e0(puVar37);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              puVar9 = puVar10;
            }
          }
          else {
            puVar5 = param_8;
            func_0x00010c249f20(param_8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            func_0x00010c0df6e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar37;
            func_0x00010c0e00e0(puVar37);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(puVar10);
          }
          _objc_release(puVar4);
          _objc_release(puVar9);
          _objc_release(puVar5);
          ppuVar13 = ppuVar12;
          func_0x00010c0720c0();
          if (((ulong)ppuVar13 & 1) == 0) {
            puVar4 = puVar37;
            func_0x00010c0e00e0(puVar37);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(puVar4);
          }
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        puVar31 = puVar31 + 1;
      } while (puVar36 != puVar31);
      puVar36 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
  }
  if (bVar1) {
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar44,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar46,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar37;
    func_0x00010c0e00e0(puVar37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    _objc_release(puVar36);
    dVar38 = dVar42;
  }
  func_0x00010c21b860(param_8);
  func_0x00010c21b880(param_8);
  puVar36 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1f7de0(param_8);
  _objc_release(puVar36);
  func_0x00010c1cf640(param_8);
  func_0x00010c1cf660(param_8);
  func_0x00010c223c20(param_8);
  func_0x00010c207ea0(param_8);
  puVar36 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1eaaa0(param_8);
  _objc_release(puVar36);
  puVar36 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c19d560(param_8);
  _objc_release(puVar36);
  puVar36 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar36;
  func_0x00010c19d840(param_8);
  _objc_release(puVar36);
  puVar36 = puVar37;
  func_0x00010bf51e00();
  _objc_release(puVar37);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar37 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar31 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined1 *)puVar16;
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar17;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar32;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar32);
  _objc_release(puVar17);
  uVar41 = 0;
  _objc_retain(puVar18);
  puVar17 = puVar18;
  func_0x00010bf52a60();
  lVar35 = lRam0000000000000000;
  while (puVar17 != (undefined1 *)0x0) {
    puVar32 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar35) {
        _objc_enumerationMutation(puVar18);
      }
      uVar33 = *(undefined8 *)((long)puVar32 * 8);
      puVar19 = (undefined1 *)puVar16;
      func_0x00010bf82420();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010bf4c080();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar19);
      puVar36 = PTR_PTR_1126c20f8;
      _objc_opt_class(PTR_PTR_1126c20f8);
      puVar19 = puVar21;
      _objc_opt_isKindOfClass(puVar21,puVar36);
      puVar36 = PTR_PTR_1126c20f8;
      if (((ulong)puVar19 & 1) == 0) {
        puVar36 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        puVar19 = puVar21;
        _objc_opt_isKindOfClass(puVar21,puVar36);
        if (((ulong)puVar19 & 1) != 0) {
          puVar20 = (undefined1 *)puVar16;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar20;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar25;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar25);
          _objc_release(puVar20);
          puVar20 = (undefined1 *)puVar16;
          func_0x00010bf82420(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar20;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0(puVar19);
          puVar34 = (undefined1 *)puVar16;
          func_0x00010bf82420(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar34;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar26;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(puVar25);
          _objc_release(puVar27);
          _objc_release(puVar26);
          _objc_release(puVar34);
          _objc_release(puVar25);
          _objc_release(puVar20);
          puVar20 = (undefined1 *)puVar16;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar20;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          puVar34 = puVar25;
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar25);
          _objc_release(puVar20);
          puVar25 = puVar34;
          func_0x00010010fab4(puVar34,PTR_DAT_1126a5048);
          puVar20 = puVar34;
          if ((int)puVar25 == 0) {
            puVar20 = (undefined1 *)0x0;
          }
          _objc_retain(puVar20);
          _objc_release(puVar34);
          func_0x00010c0840e0(uVar33);
          puVar25 = (undefined1 *)puVar16;
          param_11 = puVar20;
          param_12 = puVar31;
          param_13 = puVar3;
          param_5 = dVar38;
          func_0x00010bed98c0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          func_0x00010befa120(puVar37);
          goto LAB_105aec730;
        }
      }
      else {
        _objc_retain(puVar21);
        _objc_opt_class(puVar36);
        puVar20 = puVar21;
        _objc_opt_isKindOfClass(puVar21,puVar36);
        puVar19 = puVar21;
        if (((ulong)puVar20 & 1) == 0) {
          puVar19 = (undefined1 *)0x0;
        }
        _objc_retain(puVar19);
        _objc_release(puVar21);
        puVar20 = puVar19;
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar20;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        uVar41 = 0;
        _objc_retain(puVar25);
        puVar20 = puVar25;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar20 != (undefined1 *)0x0) {
          puVar34 = (undefined1 *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar25);
            }
            uVar33 = *(undefined8 *)((long)puVar34 * 8);
            puVar26 = puVar19;
            func_0x00010bf4c080(puVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar26;
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            puVar26 = puVar19;
            func_0x00010bf4c080(puVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(puVar27);
            puVar22 = (undefined1 *)puVar16;
            func_0x00010bf82420(puVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar22;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar23;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(puVar26);
            _objc_release(puVar24);
            _objc_release(puVar23);
            _objc_release(puVar22);
            _objc_release(puVar26);
            puVar26 = puVar19;
            func_0x00010bf4c080(puVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar26;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            puVar26 = puVar19;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar26;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            puVar24 = puVar23;
            func_0x00010010fab4(puVar23,PTR_DAT_1126a5048);
            puVar26 = puVar23;
            if ((int)puVar24 == 0) {
              puVar26 = (undefined1 *)0x0;
            }
            _objc_retain(puVar26);
            _objc_release(puVar23);
            func_0x00010c142240(uVar33);
            puVar23 = (undefined1 *)puVar16;
            param_11 = puVar26;
            param_12 = puVar31;
            param_13 = puVar3;
            param_5 = dVar38;
            func_0x00010bed98c0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            func_0x00010befa120(puVar37);
            _objc_release(puVar23);
            _objc_release(puVar22);
            _objc_release(puVar27);
            puVar34 = puVar34 + 1;
          } while (puVar20 != puVar34);
          puVar20 = puVar25;
          func_0x00010bf52a60();
        }
        _objc_release(puVar25);
LAB_105aec730:
        _objc_release(puVar25);
        _objc_release(puVar19);
      }
      _objc_release(puVar21);
      puVar32 = puVar32 + 1;
    } while (puVar32 != puVar17);
    puVar17 = puVar18;
    func_0x00010bf52a60();
  }
  _objc_release(puVar18);
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined1 *)puVar16;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = 1;
  puVar36 = puVar37;
  puVar32 = puVar17;
  func_0x000107cb4968(puVar37,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar18);
  _objc_release(puVar31);
  _objc_release(puVar37);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar32);
  puVar37 = PTR_DAT_1126a4fe8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(uVar33);
  puVar18 = puVar32;
  func_0x00010010fab4(puVar32,puVar37);
  puVar17 = puVar32;
  if ((int)puVar18 == 0) {
    puVar17 = (undefined1 *)0x0;
  }
  _objc_retain(puVar17);
  puVar37 = puVar3;
  func_0x00010c11d8a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar37;
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar33;
  func_0x0001079af5ac(uVar33,puVar36);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar33);
  _objc_release(puVar36);
  _objc_release(puVar37);
  uVar33 = uVar28;
  func_0x0001079d6288();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar32;
  func_0x0001079b95a8();
  puVar19 = puVar17;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  if ((int)puVar18 == 0) {
    FUN_105afdf24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar18 = puVar17;
    func_0x00010c29d560(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    FUN_105afe014();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = puVar17;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar18;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = puVar17;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar12 = &PTR_PTR_1126c22b8;
    puVar37 = PTR_PTR_1126c22b8;
    _objc_opt_class(PTR_PTR_1126c22b8);
    puVar25 = puVar18;
    _objc_opt_isKindOfClass(puVar18,puVar37);
    if (((ulong)puVar25 & 1) == 0) {
      ppuVar12 = &PTR_PTR_1126c22c0;
      puVar37 = PTR_PTR_1126c22c0;
      _objc_opt_class(PTR_PTR_1126c22c0);
      puVar25 = puVar18;
      _objc_opt_isKindOfClass(puVar18,puVar37);
      if (((ulong)puVar25 & 1) != 0) goto LAB_105aecac4;
    }
    else {
LAB_105aecac4:
      puVar37 = *ppuVar12;
      _objc_retain(puVar18);
      _objc_opt_class(puVar37);
      puVar34 = puVar18;
      _objc_opt_isKindOfClass(puVar18,puVar37);
      puVar25 = puVar18;
      if (((ulong)puVar34 & 1) == 0) {
        puVar25 = (undefined1 *)0x0;
      }
      _objc_retain(puVar25);
      _objc_release(puVar18);
      puVar34 = puVar25;
      func_0x00010c25a160(puVar25);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      func_0x00010c0741a0(puVar34);
      _objc_release(puVar34);
    }
    _objc_release(puVar18);
    _objc_release(puVar18);
  }
  else {
    func_0x0001079b9678();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = puVar20;
    func_0x00010c0844e0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar18;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    func_0x00010c0741a0(puVar20);
  }
  puVar25 = puVar17;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  puVar34 = puVar25;
  _objc_opt_isKindOfClass(puVar25,puVar37);
  puVar18 = puVar25;
  if (((ulong)puVar34 & 1) == 0) {
    puVar18 = (undefined1 *)0x0;
  }
  _objc_retain(puVar18);
  _objc_release(puVar25);
  puVar25 = puVar18;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar25);
  func_0x00010be3dfc0();
  func_0x00010be37da0(uVar41,param_2,param_3,param_4,param_5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(uVar33);
  _objc_release(uVar28);
  _objc_release(puVar17);
  _objc_release(puVar32);
  puVar36 = puVar3;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar36);
  return;
}



/* Entry: 105aea964; end: 105aec093; -[SCDiscoverFeedViewController getFeedPageViewSupplementaryDict:] */

void FUN_105aea964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined *param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10,ulong param_11,undefined *param_12,
                  undefined *param_13)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined *puVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  long lStack_410;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  puVar33 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = param_6;
  func_0x00010c06d8c0();
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0de840(param_6);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560(puVar4);
    func_0x00010c1d0640(puVar33);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar29);
    puVar3 = param_6;
    func_0x00010bf90020();
    if ((int)puVar3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar33;
      func_0x00010c0e00e0(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar33;
      func_0x00010c0e00e0(puVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar3);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0de860(param_6);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar4);
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar29);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar3);
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar29);
  _objc_release(puVar4);
  puVar3 = param_6;
  func_0x00010c2805e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar3);
  puVar3 = param_6;
  func_0x00010c280600(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar3);
  func_0x00010c1d0640(puVar33);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar29);
  _objc_release(puVar4);
  puVar3 = param_6;
  func_0x00010bf90020();
  if ((int)puVar3 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar3);
  }
  dVar34 = 0.0;
  puVar3 = param_6;
  func_0x00010c280660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar27 = lRam0000000000000000;
  if (puVar3 == (undefined *)0x0) {
    bVar1 = false;
    dVar38 = 0.0;
    dVar42 = 0.0;
    dVar40 = 0.0;
  }
  else {
    dVar38 = 0.0;
    dVar42 = 0.0;
    dVar40 = 0.0;
    lStack_410 = 0;
    do {
      puVar29 = (undefined *)0x0;
      dVar39 = dVar38;
      do {
        if (lRam0000000000000000 != lVar27) {
          _objc_enumerationMutation(puVar4);
        }
        iVar28 = (int)*(undefined8 *)((long)puVar29 * 8);
        func_0x00010c067ec0();
        uVar7 = (ulong)iVar28;
        func_0x0001079af528(uVar7,param_8);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar8;
        func_0x00010c08fa60();
        dVar38 = dVar39;
        if ((uVar30 != 0) && (uVar30 = uVar8, func_0x000107cb8138(), (int)uVar30 != 0)) {
          puVar5 = param_6;
          func_0x00010c280660();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c280680();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            puVar9 = param_6;
            func_0x00010c280680();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c152dc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(puVar5);
          puVar5 = puVar33;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            func_0x00010c1d0640(puVar33);
            _objc_release(puVar5);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar33;
          func_0x00010c0e00e0(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar33;
          func_0x00010c0e00e0(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar33;
          func_0x00010c0e00e0(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010c1305e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar33;
          func_0x00010c0e00e0(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010bfb1b80(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar33;
          func_0x00010c0e00e0(puVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = param_6;
          func_0x00010bfb1fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar33;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar5);
          uVar30 = uVar8;
          func_0x00010c0720c0();
          if ((uVar30 & 1) == 0) {
            puVar5 = param_6;
            func_0x00010c1305e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar5);
            dVar35 = dVar34;
            dVar41 = dVar40;
            if (puVar6 != (undefined *)0x0) {
              puVar5 = param_6;
              func_0x00010c1305e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar35 = dVar34;
              _objc_release(puVar6);
              _objc_release(puVar5);
              dVar41 = dVar34;
              if (dVar34 <= dVar40) {
                dVar41 = dVar40;
              }
            }
            puVar5 = param_6;
            func_0x00010bfb1b80();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar5);
            dVar36 = dVar35;
            dVar34 = dVar42;
            if (puVar6 != (undefined *)0x0) {
              puVar5 = param_6;
              func_0x00010bfb1b80(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar36 = dVar35;
              _objc_release(puVar6);
              _objc_release(puVar5);
              dVar34 = dVar35;
              if ((dVar42 != 0.0) && (dVar34 = dVar42, dVar35 <= dVar42)) {
                dVar34 = dVar35;
              }
            }
            dVar42 = dVar34;
            lStack_410 = lStack_410 + 1;
            puVar5 = param_6;
            func_0x00010bfb1fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar5);
            dVar34 = dVar36;
            dVar40 = dVar41;
            if (puVar6 != (undefined *)0x0) {
              puVar5 = param_6;
              func_0x00010bfb1fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar34 = dVar36;
              _objc_release(puVar6);
              _objc_release(puVar5);
              dVar38 = dVar36;
              if ((dVar39 != 0.0) && (dVar38 = dVar39, dVar36 <= dVar39)) {
                dVar38 = dVar36;
              }
            }
          }
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
        puVar29 = puVar29 + 1;
        dVar39 = dVar38;
      } while (puVar3 != puVar29);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
    bVar1 = 0 < lStack_410;
  }
  _objc_release(puVar4);
  puVar3 = param_6;
  func_0x00010bf90020();
  if ((int)puVar3 != 0) {
    puVar3 = param_6;
    func_0x00010c2a0060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar27 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar27) {
          _objc_enumerationMutation(puVar4);
        }
        iVar28 = (int)*(undefined8 *)((long)puVar29 * 8);
        func_0x00010c067ec0();
        ppuVar11 = (undefined **)(long)iVar28;
        func_0x0001079af528(ppuVar11,param_8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c08fa60();
        if (ppuVar13 != (undefined **)0x0) {
          puVar5 = puVar33;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar33;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar14 = param_6;
          func_0x00010c2a0060(param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          puVar5 = puVar10;
          if (ppuVar12 != &PTR____CFConstantStringClassReference_110f4b1d8) {
            puVar5 = puVar9;
          }
          func_0x00010c067ec0(puVar5);
          func_0x00010c0df760(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar33;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(puVar5);
          _objc_release(puVar6);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        puVar29 = puVar29 + 1;
      } while (puVar3 != puVar29);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    dVar34 = 0.0;
    puVar3 = param_6;
    func_0x00010c249f20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar27 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar27) {
          _objc_enumerationMutation(puVar4);
        }
        iVar28 = (int)*(undefined8 *)((long)puVar29 * 8);
        func_0x00010c067ec0();
        ppuVar11 = (undefined **)(long)iVar28;
        func_0x0001079af528(ppuVar11,param_8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c08fa60();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (ppuVar13 != (undefined **)0x0) {
          if (ppuVar12 == &PTR____CFConstantStringClassReference_110f4b1d8 ||
              ppuVar12 == &PTR____CFConstantStringClassReference_110eb56f8) {
            puVar5 = puVar33;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar6;
            func_0x00010bf1f3c0();
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)puVar5 == 0) {
              puVar9 = param_6;
              func_0x00010c249f20(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              func_0x00010c0df6e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar33;
              func_0x00010c0e00e0(puVar33);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              _objc_release(puVar14);
              _objc_release(puVar10);
            }
            else {
              func_0x00010bf1f3c0(puVar6);
              func_0x00010c0df6e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar33;
              func_0x00010c0e00e0(puVar33);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              puVar9 = puVar10;
            }
          }
          else {
            puVar6 = param_6;
            func_0x00010c249f20(param_6);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            func_0x00010c0df6e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar33;
            func_0x00010c0e00e0(puVar33);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(puVar10);
          }
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar6);
          ppuVar13 = ppuVar12;
          func_0x00010c0720c0();
          if (((ulong)ppuVar13 & 1) == 0) {
            puVar5 = puVar33;
            func_0x00010c0e00e0(puVar33);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(puVar5);
          }
        }
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        puVar29 = puVar29 + 1;
      } while (puVar3 != puVar29);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar40,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar42,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar33;
    func_0x00010c0e00e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar4);
    _objc_release(puVar3);
    dVar34 = dVar38;
  }
  func_0x00010c21b860(param_6);
  func_0x00010c21b880(param_6);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1f7de0(param_6);
  _objc_release(puVar3);
  func_0x00010c1cf640(param_6);
  func_0x00010c1cf660(param_6);
  func_0x00010c223c20(param_6);
  func_0x00010c207ea0(param_6);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1eaaa0(param_6);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c19d560(param_6);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = puVar3;
  func_0x00010c19d840(param_6);
  _objc_release(puVar3);
  puVar3 = puVar33;
  func_0x00010bf51e00();
  _objc_release(puVar33);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar33 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar29 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_8;
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar8;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar30;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar30);
  _objc_release(uVar8);
  uVar37 = 0;
  _objc_retain(uVar7);
  uVar8 = uVar7;
  func_0x00010bf52a60();
  lVar26 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar30 = 0;
    do {
      if (lRam0000000000000000 != lVar26) {
        _objc_enumerationMutation(uVar7);
      }
      uVar31 = *(undefined8 *)(uVar30 * 8);
      uVar16 = param_8;
      func_0x00010bf82420();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bf4c080();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(uVar16);
      puVar3 = PTR_PTR_1126c20f8;
      _objc_opt_class(PTR_PTR_1126c20f8);
      uVar16 = uVar18;
      _objc_opt_isKindOfClass(uVar18,puVar3);
      puVar3 = PTR_PTR_1126c20f8;
      if ((uVar16 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar16 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar3);
        if ((uVar16 & 1) != 0) {
          uVar17 = param_8;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar17;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar22;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar22);
          _objc_release(uVar17);
          uVar17 = param_8;
          func_0x00010bf82420(param_8);
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar17;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0(uVar16);
          uVar32 = param_8;
          func_0x00010bf82420(param_8);
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar32;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar23;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(uVar22);
          _objc_release(uVar24);
          _objc_release(uVar23);
          _objc_release(uVar32);
          _objc_release(uVar22);
          _objc_release(uVar17);
          uVar17 = param_8;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar17;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar32 = uVar22;
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar22);
          _objc_release(uVar17);
          uVar22 = uVar32;
          func_0x00010010fab4(uVar32,PTR_DAT_1126a5048);
          uVar17 = uVar32;
          if ((int)uVar22 == 0) {
            uVar17 = 0;
          }
          _objc_retain(uVar17);
          _objc_release(uVar32);
          func_0x00010c0840e0(uVar31);
          uVar22 = param_8;
          param_11 = uVar17;
          param_12 = puVar29;
          param_13 = puVar4;
          param_5 = dVar34;
          func_0x00010bed98c0(param_8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          func_0x00010befa120(puVar33);
          goto LAB_105aec730;
        }
      }
      else {
        _objc_retain(uVar18);
        _objc_opt_class(puVar3);
        uVar17 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar3);
        uVar16 = uVar18;
        if ((uVar17 & 1) == 0) {
          uVar16 = 0;
        }
        _objc_retain(uVar16);
        _objc_release(uVar18);
        uVar17 = uVar16;
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar17;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        uVar37 = 0;
        _objc_retain(uVar22);
        uVar17 = uVar22;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar17 != 0) {
          uVar32 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar22);
            }
            uVar31 = *(undefined8 *)(uVar32 * 8);
            uVar23 = uVar16;
            func_0x00010bf4c080(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar24 = uVar23;
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            uVar23 = uVar16;
            func_0x00010bf4c080(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(uVar24);
            uVar19 = param_8;
            func_0x00010bf82420(param_8);
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar19;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar20;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(uVar23);
            _objc_release(uVar21);
            _objc_release(uVar20);
            _objc_release(uVar19);
            _objc_release(uVar23);
            uVar23 = uVar16;
            func_0x00010bf4c080(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar23;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            uVar23 = uVar16;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar23;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            uVar21 = uVar20;
            func_0x00010010fab4(uVar20,PTR_DAT_1126a5048);
            uVar23 = uVar20;
            if ((int)uVar21 == 0) {
              uVar23 = 0;
            }
            _objc_retain(uVar23);
            _objc_release(uVar20);
            func_0x00010c142240(uVar31);
            uVar20 = param_8;
            param_11 = uVar23;
            param_12 = puVar29;
            param_13 = puVar4;
            param_5 = dVar34;
            func_0x00010bed98c0(param_8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            func_0x00010befa120(puVar33);
            _objc_release(uVar20);
            _objc_release(uVar19);
            _objc_release(uVar24);
            uVar32 = uVar32 + 1;
          } while (uVar17 != uVar32);
          uVar17 = uVar22;
          func_0x00010bf52a60();
        }
        _objc_release(uVar22);
LAB_105aec730:
        _objc_release(uVar22);
        _objc_release(uVar16);
      }
      _objc_release(uVar18);
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar8);
    uVar8 = uVar7;
    func_0x00010bf52a60();
  }
  _objc_release(uVar7);
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_8;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = 1;
  puVar3 = puVar33;
  uVar30 = uVar8;
  func_0x000107cb4968(puVar33,puVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release(puVar29);
  _objc_release(puVar33);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar30);
  puVar33 = PTR_DAT_1126a4fe8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(uVar31);
  uVar7 = uVar30;
  func_0x00010010fab4(uVar30,puVar33);
  uVar8 = uVar30;
  if ((int)uVar7 == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  puVar33 = puVar4;
  func_0x00010c11d8a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar33;
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar31;
  func_0x0001079af5ac(uVar31,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar31);
  _objc_release(puVar3);
  _objc_release(puVar33);
  uVar31 = uVar25;
  func_0x0001079d6288();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar30;
  func_0x0001079b95a8();
  uVar16 = uVar8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  if ((int)uVar7 == 0) {
    FUN_105afdf24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    uVar7 = uVar8;
    func_0x00010c29d560(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    FUN_105afe014();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar7;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar12 = &PTR_PTR_1126c22b8;
    puVar33 = PTR_PTR_1126c22b8;
    _objc_opt_class(PTR_PTR_1126c22b8);
    uVar22 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar33);
    if ((uVar22 & 1) == 0) {
      ppuVar12 = &PTR_PTR_1126c22c0;
      puVar33 = PTR_PTR_1126c22c0;
      _objc_opt_class(PTR_PTR_1126c22c0);
      uVar22 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar33);
      if ((uVar22 & 1) != 0) goto LAB_105aecac4;
    }
    else {
LAB_105aecac4:
      puVar33 = *ppuVar12;
      _objc_retain(uVar7);
      _objc_opt_class(puVar33);
      uVar32 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar33);
      uVar22 = uVar7;
      if ((uVar32 & 1) == 0) {
        uVar22 = 0;
      }
      _objc_retain(uVar22);
      _objc_release(uVar7);
      uVar32 = uVar22;
      func_0x00010c25a160(uVar22);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar22);
      func_0x00010c0741a0(uVar32);
      _objc_release(uVar32);
    }
    _objc_release(uVar7);
    _objc_release(uVar7);
  }
  else {
    func_0x0001079b9678();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    uVar16 = uVar17;
    func_0x00010c0844e0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar7;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010c0741a0(uVar17);
  }
  uVar22 = uVar8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar32 = uVar22;
  _objc_opt_isKindOfClass(uVar22,puVar33);
  uVar7 = uVar22;
  if ((uVar32 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar22);
  uVar22 = uVar7;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar22);
  func_0x00010be3dfc0();
  func_0x00010be37da0(uVar37,param_2,param_3,param_4,param_5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(uVar31);
  _objc_release(uVar25);
  _objc_release(uVar8);
  _objc_release(uVar30);
  puVar3 = puVar4;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105aec094; end: 105aec847; -[SCDiscoverFeedViewController getImpressionItemsLoggingDictWithPageSessionId:pageSessionStartTs:impressionTrigger:] */

void FUN_105aec094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10,ulong param_11,undefined *param_12,
                  undefined *param_13)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(uVar4);
  uVar23 = 0;
  _objc_retain(uVar5);
  uVar4 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      uVar20 = *(undefined8 *)(uVar18 * 8);
      uVar6 = param_6;
      func_0x00010bf82420();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4c080();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar9 = PTR_PTR_1126c20f8;
      _objc_opt_class(PTR_PTR_1126c20f8);
      uVar6 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar9);
      puVar9 = PTR_PTR_1126c20f8;
      if ((uVar6 & 1) == 0) {
        puVar9 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar6 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        if ((uVar6 & 1) != 0) {
          uVar7 = param_6;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar7;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar13;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar7);
          uVar7 = param_6;
          func_0x00010bf82420(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar7;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0(uVar6);
          uVar21 = param_6;
          func_0x00010bf82420(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar21;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(uVar13);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar13);
          _objc_release(uVar7);
          uVar7 = param_6;
          func_0x00010bf82420();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar7;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar13;
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar7);
          uVar13 = uVar21;
          func_0x00010010fab4(uVar21,PTR_DAT_1126a5048);
          uVar7 = uVar21;
          if ((int)uVar13 == 0) {
            uVar7 = 0;
          }
          _objc_retain(uVar7);
          _objc_release(uVar21);
          func_0x00010c0840e0(uVar20);
          uVar13 = param_6;
          param_11 = uVar7;
          param_12 = puVar3;
          param_13 = param_8;
          param_5 = param_1;
          func_0x00010bed98c0(param_6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          func_0x00010befa120(puVar22);
          goto LAB_105aec730;
        }
      }
      else {
        _objc_retain(uVar8);
        _objc_opt_class(puVar9);
        uVar7 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        uVar6 = uVar8;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar8);
        uVar7 = uVar6;
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar7;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar23 = 0;
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar7 != 0) {
          uVar21 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar13);
            }
            uVar20 = *(undefined8 *)(uVar21 * 8);
            uVar14 = uVar6;
            func_0x00010bf4c080(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            uVar14 = uVar6;
            func_0x00010bf4c080(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(uVar15);
            uVar10 = param_6;
            func_0x00010bf82420(param_6);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(uVar14);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar14);
            uVar14 = uVar6;
            func_0x00010bf4c080(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar14;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            uVar14 = uVar6;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar14;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            uVar12 = uVar11;
            func_0x00010010fab4(uVar11,PTR_DAT_1126a5048);
            uVar14 = uVar11;
            if ((int)uVar12 == 0) {
              uVar14 = 0;
            }
            _objc_retain(uVar14);
            _objc_release(uVar11);
            func_0x00010c142240(uVar20);
            uVar11 = param_6;
            param_11 = uVar14;
            param_12 = puVar3;
            param_13 = param_8;
            param_5 = param_1;
            func_0x00010bed98c0(param_6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            func_0x00010befa120(puVar22);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar15);
            uVar21 = uVar21 + 1;
          } while (uVar7 != uVar21);
          uVar7 = uVar13;
          func_0x00010bf52a60();
        }
        _objc_release(uVar13);
LAB_105aec730:
        _objc_release(uVar13);
        _objc_release(uVar6);
      }
      _objc_release(uVar8);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar4);
    uVar4 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  func_0x00010bf82420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = 1;
  puVar9 = puVar22;
  uVar18 = uVar4;
  func_0x000107cb4968(puVar22,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar18);
  puVar22 = PTR_DAT_1126a4fe8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(uVar20);
  uVar5 = uVar18;
  func_0x00010010fab4(uVar18,puVar22);
  uVar4 = uVar18;
  if ((int)uVar5 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  puVar22 = param_8;
  func_0x00010c11d8a0(param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar22;
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar20;
  func_0x0001079af5ac(uVar20,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(puVar3);
  _objc_release(puVar22);
  uVar20 = uVar16;
  func_0x0001079d6288();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x0001079b95a8();
  uVar6 = uVar4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  if ((int)uVar5 == 0) {
    FUN_105afdf24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar5 = uVar4;
    func_0x00010c29d560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_105afe014();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar19 = &PTR_PTR_1126c22b8;
    puVar22 = PTR_PTR_1126c22b8;
    _objc_opt_class(PTR_PTR_1126c22b8);
    uVar13 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar22);
    if ((uVar13 & 1) == 0) {
      ppuVar19 = &PTR_PTR_1126c22c0;
      puVar22 = PTR_PTR_1126c22c0;
      _objc_opt_class(PTR_PTR_1126c22c0);
      uVar13 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar22);
      if ((uVar13 & 1) != 0) goto LAB_105aecac4;
    }
    else {
LAB_105aecac4:
      puVar22 = *ppuVar19;
      _objc_retain(uVar5);
      _objc_opt_class(puVar22);
      uVar21 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar22);
      uVar13 = uVar5;
      if ((uVar21 & 1) == 0) {
        uVar13 = 0;
      }
      _objc_retain(uVar13);
      _objc_release(uVar5);
      uVar21 = uVar13;
      func_0x00010c25a160(uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      func_0x00010c0741a0(uVar21);
      _objc_release(uVar21);
    }
    _objc_release(uVar5);
    _objc_release(uVar5);
  }
  else {
    func_0x0001079b9678();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c0844e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c0741a0(uVar7);
  }
  uVar13 = uVar4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar21 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar22);
  uVar5 = uVar13;
  if ((uVar21 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar13);
  uVar13 = uVar5;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar13);
  func_0x00010be3dfc0();
  func_0x00010be37da0(uVar23,param_2,param_3,param_4,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar20);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar18);
  puVar9 = param_8;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105aec848; end: 105aeccb7; -[SCDiscoverFeedViewController _updateImpressItemForCollectionViewCell:frame:indexPath:itemPos:autoPlayDataSource:date:pageSessionId:pageSessionStartTs:impressionTrigger:] */

void FUN_105aec848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  
  _objc_retain(param_8);
  puVar12 = PTR_DAT_1126a4fe8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  uVar2 = param_8;
  func_0x00010010fab4(param_8,puVar12);
  uVar1 = param_8;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = param_6;
  func_0x00010c11d8a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_9;
  func_0x0001079af5ac(param_9,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x0001079d6288();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x0001079b95a8();
  uVar6 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  if ((int)uVar2 != 0) {
    func_0x0001079b9678();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar2 = uVar7;
    func_0x00010c0844e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x000105afe244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c0741a0(uVar7);
    goto LAB_105aecb44;
  }
  FUN_105afdf24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  FUN_105afe014();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x000105afe244();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar11 = &PTR_PTR_1126c22b8;
  puVar12 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar12);
  if ((uVar9 & 1) == 0) {
    ppuVar11 = &PTR_PTR_1126c22c0;
    puVar12 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar12);
    if ((uVar9 & 1) != 0) goto LAB_105aecac4;
  }
  else {
LAB_105aecac4:
    puVar12 = *ppuVar11;
    _objc_retain(uVar8);
    _objc_opt_class(puVar12);
    uVar10 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar12);
    uVar9 = uVar8;
    if ((uVar10 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar8);
    uVar10 = uVar9;
    func_0x00010c25a160(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010c0741a0(uVar10);
    _objc_release(uVar10);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
LAB_105aecb44:
  uVar9 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar12);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  uVar9 = uVar8;
  func_0x00010c087760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010bf5d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar9);
  func_0x00010be3dfc0();
  func_0x00010be37da0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 105aeccb8; end: 105aecef3; -[SCDiscoverFeedViewController _isAdTileAutoPlayEligible:] */

ulong FUN_105aeccb8(ulong param_1,undefined8 param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2584c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c070b80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar9 != 0) {
    uVar2 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c22b8;
    _objc_opt_class(PTR_PTR_1126c22b8);
    uVar9 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if ((uVar1 == 0) || (uVar9 = uVar2, func_0x00010c25b720(), uVar9 != 5)) {
      uVar9 = 0;
    }
    else {
      func_0x00010bf81740();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c259740(uVar2);
      uVar2 = uVar9;
      func_0x00010c25bac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(param_1);
      if (uVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar2;
        func_0x00010c259560(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010afef744();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar4;
        func_0x00010bef4a60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar9);
        uVar5 = uVar6;
        func_0x00010bef5620(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bf66880();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c118200();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf11a40();
        uVar9 = (ulong)(uVar9 == 1);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar4);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105aecef4; end: 105aed107; -[SCDiscoverFeedViewController _impressionViewItemWithIdentifier:frame:date:itemPos:hasVideoThumbnail:sectionIdentifier:hasReplayOverlay:hasCTA:storyLoggingInfo:pageSessionId:pageSessionStartTs:impressionTrigger:userId:additionalInfo:tileAutoPlayEligible:autoPlayDataSource:] */

void FUN_105aecef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  puVar1 = PTR_PTR_1126c21e8;
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_stack_00000008;
  func_0x000108f522f4(in_stack_00000008,puVar2,in_stack_00000020);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000008);
  func_0x00010c01b6a0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000010);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aed108; end: 105aed253; -[SCDiscoverFeedViewController toolTipForDiscoverFeedManagementWithFeatureSettingsService:userSegmentsProvider:] */

void FUN_105aed108(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078a60();
  _objc_release(uVar1);
  _objc_release(param_4);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000105eacecc(lVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    if (lVar5 < 1) {
      puVar7 = PTR_PTR_1126b6950;
      _objc_alloc(PTR_PTR_1126b6950);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1c8f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c8f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar7);
      _objc_release(ppuVar6);
      goto LAB_105aed1dc;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105aed1dc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105aed254; end: 105aed407; -[SCDiscoverFeedViewController didTapDiscoverFeedManagementButton] */

void FUN_105aed254(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12bf60();
  lVar1 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf81a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be39a40();
  }
  else {
    func_0x00010bf81a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    func_0x00010bfd0140(param_1);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010bf81a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf81a80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar1 = param_1;
      func_0x00010bf81a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setDiscoverFeedManagementTooltip_112641628,0);
      return;
    }
  }
  return;
}



/* Entry: 105aed408; end: 105aed4b3; -[SCDiscoverFeedViewController removeDiscoverFeedManagementTooltip] */

void FUN_105aed408(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf81a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf81a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bf81a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setDiscoverFeedManagementTooltip_112641628,0);
      return;
    }
  }
  return;
}



/* Entry: 105aed4b4; end: 105aeda4f; -[SCDiscoverFeedViewController _initDiscoverFeedManagementActionSheetActionHandlerAndPresent] */

void FUN_105aed4b4(undefined8 param_1)

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
  undefined *puVar25;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126c22c8;
  _objc_alloc(PTR_PTR_1126c22c8);
  uVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf81760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf81740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105aeda50;
  puStack_90 = &UNK_1108d4ab0;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar25;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105aedad0;
  puStack_b8 = &UNK_1108d4ae0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar25;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105aedb34;
  puStack_e0 = &UNK_1108d4ae0;
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_copyWeak(auStack_100,auStack_80);
  uVar7 = param_1;
  func_0x00010c2428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf5b7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf5b7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf5b7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c2446c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010c2446c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c068620();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_1;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010c10bd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d780(puVar1);
  func_0x00010c18efe0(param_1);
  _objc_release(puVar1);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf81a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf81a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf81a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840();
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010bf81a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(param_1);
  _objc_release(puVar25);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105aeda50; end: 105aedc7b;  */

void FUN_105aeda50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7dea0();
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aedc7c; end: 105aedce7; -[SCDiscoverFeedViewController _impalaShowProfileActionHandlerWithPresentingViewController:] */

void FUN_105aedc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010beee560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aedce8; end: 105aedd53; -[SCDiscoverFeedViewController _impalaPublisherProfileActionHandlerWithPresentingViewController:] */

void FUN_105aedce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010beee560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aedd54; end: 105aedecb; -[SCDiscoverFeedViewController _presentPublicUserProfile:snapProProfile:presentingViewController:] */

void FUN_105aedd54(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0f10;
  if (param_4 == 0) {
    _objc_retain(param_5);
    puVar2 = param_1;
    func_0x00010bfea0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfea120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c1aaf60(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bfea0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ece0(param_1,param_2,puVar3);
  }
  else {
    _objc_retain(param_5);
    _objc_alloc(puVar2);
    func_0x00010c033440();
    func_0x00010bfea0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c116a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea000(param_1,param_2,lVar1,0,puVar2,param_5,0,0);
    _objc_release(param_5);
    _objc_release(lVar1);
    puVar3 = param_1;
    param_1 = puVar2;
  }
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aedecc; end: 105aef3db; -[SCDiscoverFeedViewController initWithUserSession:networkRequester:snapTokenProvider:navigationServices:headerButtonServices:storiesDataCoordinator:storiesSyncNetworkRequester:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:friendStoriesDataCoordinator:storyPlaybackOrderDecider:friendStoriesReplayManager:sectionExtensionServices:discoverFeedActionHandler:discoverFeedSectionHeaderActionHandler:discoverFeedPrefetchHandler:discoverFeedQueryCoordinator:imageDownloader:collapseManager:discoverFeedEventsAnnouncer:lazyDiscoverFeedEventsController:optInProvider:currentPageTracker:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:grapheneMetricsEmitter:storiesGrapheneMetricsEmitter:discoverDataServices:interactionHistoryManager:adPrefetchServices:cachedViewStateProvider:discoverFeedCollectionPrefercher:actionHandlerCreator:deeplinkHandler:impalaProfilePresentHandler:snapchattersSynchronousDataFetcher:endpointManager:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:userNotTrackedLogger:adEOVTimerProvider:discoverPerformanceLogging:internalDistributor:circumstanceEngine:featureSettingsService:sectionsCoordinator:userSegmentsProvider:snapProServices:snapchatterServices:creatorSettingsService:notificationScreenAccessor:userPreferences:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:imageSourceProvider:imageFetchingService:spotlightStoriesPrefetcherFactory:applicationLifecycleEvents:storiesRankingCoordinator:pageLoadMetricManager:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:locationProvider:rtusClientCacheManager:unifiedGRPCClientFactory:storiesCachedPropertiesCoordinator:discoverBlizzardLogger:dpaConfigProvider:adRenderDataParser:notificationPool:customAppThemeProvider:collectionViewAutoPlayManager:searchPreTypeNetworkRequester:discoverCrashLogger:creatorSubscriptionsInfoProvider:plusFeatureGating:presentCreatorSubscriptionsBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aedecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined4 param_37,undefined4 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
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
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  puStack_70 = PTR_PTR_1126ebcf0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    lVar8 = (long)_DAT_11272f6d4;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_4;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6d8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_3;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11272f6dc;
    _objc_retain(param_49);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_49;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f6e0,param_6);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f6e4,param_7);
    lVar8 = (long)_DAT_11272f6e8;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_8;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6ec;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6f0;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_10;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6f4;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_11;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6f8;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_12;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f6fc;
    _objc_retain(param_34);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_34;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f700;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_13;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f704;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_14;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f708;
    _objc_retain(param_50);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_50;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f70c;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_15;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f710;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_16;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11272f714;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_17;
    _objc_release(uVar3);
    func_0x00010c1d58e0(*(undefined8 *)((long)puVar2 + lVar10));
    lVar8 = (long)_DAT_11272f718;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_18;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f71c;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_19;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f720;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_20;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f724;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_21;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f728;
    _objc_retain(param_64);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_64;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f72c;
    _objc_retain(param_65);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_65;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f730;
    _objc_retain(param_71);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_71;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f734;
    _objc_retain(param_70);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_70;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f738;
    _objc_retain(in_stack_000001f8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_000001f8;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f73c;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_22;
    _objc_release(uVar3);
    puVar5 = PTR_DAT_1126a5000;
    _objc_retain(param_23);
    uVar4 = param_23;
    func_0x00010010fab4(param_23,puVar5);
    uVar3 = param_23;
    if ((int)uVar4 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_23);
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f740);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f740) = uVar3;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11272f744;
    _objc_retain(param_25);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_25;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c22d0;
    _objc_alloc();
    func_0x00010c0620c0();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f748);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f748) = puVar5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f74c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f750;
    _objc_retain(param_26);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_26;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f754;
    _objc_retain(param_27);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_27;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f758;
    _objc_retain(param_29);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_29;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f75c;
    _objc_retain(param_30);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_30;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f760;
    _objc_retain(param_24);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_24;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f764);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f764) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_31;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11272f768;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_31;
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f76c);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f76c) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f770;
    _objc_retain(param_32);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_32;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f774;
    _objc_retain(param_33);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_33;
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126c22d8;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126c22e0;
    _objc_alloc();
    func_0x00010c00c880();
    lVar8 = (long)_DAT_11272f778;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar5;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar8));
    puVar5 = PTR_PTR_1126c22e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f77c);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f77c) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f780);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f780) = puVar5;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11272f784) = 0;
    func_0x00010c200640(*(undefined8 *)((long)puVar2 + lVar10));
    puVar5 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f788);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f788) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f78c);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f78c) = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar7);
    lVar8 = (long)_DAT_11272f790;
    _objc_retain(param_35);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_35;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f794,param_36);
    lVar8 = (long)_DAT_11272f798;
    _objc_retain(param_39);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_39;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f79c;
    _objc_retain(param_40);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_40;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7a0;
    _objc_retain(param_41);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_41;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7a4;
    _objc_retain(param_42);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_42;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7a8;
    _objc_retain(param_43);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_43;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b7f08;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f7ac);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f7ac) = puVar5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7b0;
    _objc_retain(param_44);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_44;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7b4;
    _objc_retain(param_28);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_28;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7b8;
    _objc_retain(param_46);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_46;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7bc;
    _objc_retain(param_47);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_47;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7c0;
    _objc_retain(param_48);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_48;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7c4;
    _objc_retain(param_51);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_51;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7c8;
    _objc_retain(param_52);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_52;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f7cc,param_53);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f7d0,param_54);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f7d4,param_55);
    lVar8 = (long)_DAT_11272f7d8;
    _objc_retain(param_56);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_56;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7dc;
    _objc_retain(param_57);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_57;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7e0;
    _objc_retain(param_60);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_60;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7e4;
    _objc_retain(param_61);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_61;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7e8;
    _objc_retain(param_62);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_62;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7ec;
    _objc_retain(param_63);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_63;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7f0;
    _objc_retain(param_59);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_59;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7f4;
    _objc_retain(param_58);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_58;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7f8;
    _objc_retain(param_68);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_68;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f7fc;
    _objc_retain(param_69);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_69;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f800;
    _objc_retain(in_stack_000001f0);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_000001f0;
    _objc_release(uVar3);
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f804);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f804) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f808);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f808) = puVar5;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f80c);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f80c) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f810);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f810) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f814);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f814) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f818);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f818) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f81c);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f81c) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f820);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f820) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f824);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f824) = puVar5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f828) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f82c) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f830) = 0;
    uVar3 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &UNK_10f328423;
    _dispatch_queue_create(&UNK_10f328423,uVar3);
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f834);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f834) = puVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f838;
    _objc_retain(param_66);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_66;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + lVar9);
    func_0x000100baf9c4();
    *(undefined1 *)((long)puVar2 + (long)_DAT_11272f83c) = uVar1;
    _objc_storeWeak((long)puVar2 + (long)_DAT_11272f840,param_67);
    puVar5 = PTR_PTR_1126c22f0;
    _objc_alloc();
    func_0x00010c00ce40();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f844);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f844) = puVar5;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + lVar9);
    func_0x000108f54464();
    *(undefined1 *)((long)puVar2 + (long)_DAT_11272f848) = uVar1;
    puVar5 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f84c);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f84c) = puVar5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f850;
    _objc_retain(in_stack_00000200);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000200;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f854;
    _objc_retain(in_stack_00000208);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000208;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f858;
    _objc_retain(in_stack_00000210);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000210;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f85c) = 0;
    lVar8 = (long)_DAT_11272f860;
    _objc_retain(in_stack_00000218);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000218;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f864;
    _objc_retain(in_stack_00000220);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000220;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f868;
    _objc_retain(in_stack_00000230);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000230;
    _objc_release(uVar3);
    uVar4 = param_70;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf90020();
    *(char *)((long)puVar2 + (long)_DAT_11272f86c) = (char)uVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11272f870) = 1;
    lVar8 = (long)_DAT_11272f874;
    _objc_retain(in_stack_00000238);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000238;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f878;
    _objc_retain(in_stack_00000240);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000240;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f87c;
    _objc_retain(in_stack_00000248);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000248;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f880;
    _objc_retain(in_stack_00000250);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000250;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f884;
    _objc_retain(in_stack_00000258);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000258;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11272f888;
    _objc_retain(in_stack_00000260);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000260;
    _objc_release(uVar3);
    uVar3 = in_stack_00000268;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f88c);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11272f88c) = uVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f890);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f890) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11272f894);
    *(undefined **)((long)puVar2 + (long)_DAT_11272f894) = puVar5;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar2 + (long)_DAT_11272f898) = 0;
    _objc_release(puVar6);
  }
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_71);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
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



/* Entry: 105aef3dc; end: 105aef3df; -[SCDiscoverFeedViewController viewDidPartiallyAppear] */

void FUN_105aef3dc(void)

{
  return;
}



/* Entry: 105aef3e0; end: 105aef87f; -[SCDiscoverFeedViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aef3e0(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f760);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250840();
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010c083740();
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f6f0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc40();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f6e8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc40();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f76c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc60();
    _objc_release(uVar2);
  }
  *(undefined1 *)(param_1 + (long)_DAT_11272f89c) = 1;
  if (*(long *)(param_1 + (long)_DAT_11272f8a0) != 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f708);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11272f7dc);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105eacf64(uVar2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_78,param_1);
  ppuVar10 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f78c);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105aef880;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c0f7fc0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f7dc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11272f704);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286e80();
  _objc_release(uVar2);
  if ((*(byte *)(param_1 + (long)_DAT_11272f8a4) & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11272f888);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bfa0b80();
    _objc_release(uVar6);
    if ((int)uVar2 != 0) {
      _objc_initWeak(auStack_a8,param_1);
      puVar5 = PTR_PTR_1126be840;
      puVar4 = PTR_PTR_1126aeec0;
      puVar1 = PTR_PTR_1126ae960;
      puVar7 = PTR_PTR_1126be848;
      func_0x00010bf5bb40(PTR_PTR_1126be848);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c258080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4bc80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae970;
      func_0x00010c292920(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = (undefined *)ppuVar10;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x105aef8bc;
      puStack_b8 = &UNK_110849200;
      _objc_copyWeak(auStack_b0,auStack_a8);
      func_0x00010bf0caa0(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
      ppuVar10 = &puStack_d0;
    }
  }
  _objc_destroyWeak(auStack_80);
  puVar9 = auStack_78;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)ppuVar10 + 0x20));
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(puVar9);
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained(puVar9);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105aef880; end: 105aef8ef;  */

void FUN_105aef880(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aef8f0; end: 105aef99f; -[SCDiscoverFeedViewController viewDidPartiallyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aef8f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105aef9a0; end: 105aef9db;  */

void FUN_105aef9a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aef9dc; end: 105aefb53; -[SCDiscoverFeedViewController viewDidSwipeIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aef9dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010be287a0();
  func_0x00010bde12c0(param_1);
  func_0x00010bde0600(param_1);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105aefb54;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  func_0x00010be771c0(param_1);
  *(undefined1 *)(param_1 + _DAT_11272f784) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010bebfba0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f744);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef0c0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105aefb54; end: 105aefbbf;  */

void FUN_105aefb54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aefbc0; end: 105aefd2f; -[SCDiscoverFeedViewController viewDidSwipeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aefbc0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + _DAT_11272f8ac) = 0;
  func_0x00010be92600();
  func_0x00010bf2eb20(*(undefined8 *)(param_1 + _DAT_11272f714));
  func_0x00010beb1180(param_1);
  func_0x00010be287c0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f858);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ac00();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105aefd30;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fc0(uVar2);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105aefd98;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  func_0x00010be3d800(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105aefd30; end: 105aefd97;  */

void FUN_105aefd30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcbc00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aefd98; end: 105aefe33;  */

void FUN_105aefd98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf31ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15a1c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf31ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1590c0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105aefe34; end: 105aefe7b; -[SCDiscoverFeedViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aefe34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f71c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256640();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeDiscoverFeedManagementTool_1126289f8);
  return;
}



/* Entry: 105aefe7c; end: 105aefec3; -[SCDiscoverFeedViewController _saveStoriesToDiskIfNeededOnAppResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aefe7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f76c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aefec4; end: 105aeffb3; -[SCDiscoverFeedViewController handleUserTriggeredNavigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aefec4(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  if ((param_5 & 0xfffffffffffffffd) == 0) {
    func_0x00010be92600();
    lVar3 = (long)_DAT_11272f8b0;
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bf4c080(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c7c0();
    dVar4 = -param_1;
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_2 != dVar4) {
      uVar1 = *(undefined8 *)(param_3 + lVar3);
      func_0x00010bf4c080(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      func_0x00010bf4c080(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      func_0x00010c182300(0,-param_1,uVar1,param_4,1);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 105aeffb4; end: 105aeffb7; -[SCDiscoverFeedViewController didTapNewTabToDismiss] */

void FUN_105aeffb4(void)

{
  return;
}



/* Entry: 105aeffb8; end: 105aeffcf; -[SCDiscoverFeedViewController pausePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aeffb8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11272f714) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11272f714),PTR_s_pausePlayback_11261b1c0);
    return;
  }
  return;
}



/* Entry: 105aeffd0; end: 105aeffe7; -[SCDiscoverFeedViewController resumePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aeffd0(long param_1)

{
  if (*(long *)(param_1 + _DAT_11272f714) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11272f714),PTR_s_resumePlayback_11262cf90);
    return;
  }
  return;
}



/* Entry: 105aeffe8; end: 105af00f7; -[SCDiscoverFeedViewController applicationWillResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aeffe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105af00f8;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f858);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ac00();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105af00f8; end: 105af0127;  */

void FUN_105af00f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af0128; end: 105af0267; -[SCDiscoverFeedViewController applicationDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0128(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272f734;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22f8;
  func_0x00010bf71760(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11272f8b4) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22f8;
  func_0x00010bf71a20(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11272f8ac) = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f770);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bec0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f70c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be92a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetDiscoverFeedUIIfNecessaryA_112582430);
  return;
}



/* Entry: 105af0268; end: 105af034f; -[SCDiscoverFeedViewController _resetDiscoverFeedUIIfNecessaryAndLogFPV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0268(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bdcbd00();
  lVar4 = (long)_DAT_11272f734;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf04da0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_11272f714);
    func_0x00010c07ab40();
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11272f8b8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07ad00();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf04dc0();
        _objc_release(uVar1);
        if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__setNoReOrderThresholdTimer_112587158);
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + _DAT_11272f8bc) = 1;
  }
  return;
}



/* Entry: 105af0350; end: 105af041f; -[SCDiscoverFeedViewController applicationDidEnterForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0350(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(double *)(param_2 + _DAT_11272f8c0) = param_1 * 1000.0;
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c22f8;
  func_0x00010bf71a20(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    *(undefined1 *)(param_2 + _DAT_11272f8ac) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be287b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__handleDiscoverFeedPageOpenWithE_112567b88,9)
  ;
  return;
}



/* Entry: 105af0420; end: 105af05af; -[SCDiscoverFeedViewController applicationDidBecomeActive:] */

void FUN_105af0420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c2300;
  func_0x00010bf38d20(PTR_PTR_1126c2300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105af05b0; end: 105af05e7;  */

void FUN_105af05b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af05e8; end: 105af0817; -[SCDiscoverFeedViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af05e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c21f0;
  _objc_opt_new(PTR_PTR_1126c21f0);
  puVar2 = PTR_PTR_1126c2308;
  _objc_alloc();
  func_0x00010c009f20();
  lVar7 = (long)_DAT_11272f8b0;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  _objc_release(puVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010bf4c080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_5 + _DAT_11272f724);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(*(undefined8 *)(param_5 + lVar7),param_6,uVar6);
  _objc_release(uVar6);
  func_0x00010c222380(param_5,param_6,*(undefined8 *)(param_5 + lVar7));
  lVar8 = (long)_DAT_11272f734;
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c070b80();
  _objc_release(uVar3);
  if ((int)uVar6 != 0) {
    puVar2 = PTR_PTR_1126b1118;
    _objc_alloc(PTR_PTR_1126b1118);
    func_0x00010c043160();
    puVar4 = PTR_PTR_1126c2310;
    _objc_alloc(PTR_PTR_1126c2310);
    func_0x00010c0434e0();
    puVar5 = PTR_PTR_1126c2318;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010bf4c080(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff880(0x4018000000000000,puVar5,param_6,uVar6,
                        *(undefined8 *)(param_5 + _DAT_11272f878),*(undefined8 *)(param_5 + lVar8),
                        param_5,puVar4);
    uVar3 = *(undefined8 *)(param_5 + _DAT_11272f8c4);
    *(undefined **)(param_5 + _DAT_11272f8c4) = puVar5;
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105af0818; end: 105af09c3; -[SCDiscoverFeedViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0818(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ebcf0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c29cb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11272f780));
  _objc_release(puVar1);
  func_0x00010be2af80(param_1);
  uVar2 = *(ulong *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2320;
  func_0x00010bf71320(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11272f8c0;
  dVar6 = *(double *)(param_1 + lVar5);
  if ((dVar6 == 0.0) || (*(char *)(param_1 + _DAT_11272f8c8) == '\x01')) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)(param_1 + lVar5) = dVar6 * 1000.0;
    _objc_release(puVar1);
  }
  else if ((uVar3 & 1) != 0) goto LAB_105af0958;
  func_0x00010be113c0(param_1);
LAB_105af0958:
  lVar5 = param_1;
  func_0x00010c0e6300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
  func_0x00010bf4c080(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40ac0(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar5);
  return;
}



/* Entry: 105af09c4; end: 105af0e2b; -[SCDiscoverFeedViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af09c4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ebcf0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f720);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  func_0x00010c0f1480(*(undefined8 *)(param_1 + _DAT_11272f7fc));
  func_0x00010c29c980(param_1);
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010bfcbb20(*(undefined8 *)(param_1 + _DAT_11272f750));
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar3);
  }
  lVar5 = param_1;
  func_0x00010be0ed20();
  *(long *)(param_1 + _DAT_11272f8cc) = lVar5;
  func_0x00010c29cc00(param_1);
  func_0x00010c200640(*(undefined8 *)(param_1 + _DAT_11272f714));
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f7d8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8480;
  func_0x00010bf75ec0(PTR_PTR_1126b8480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  lVar5 = param_1;
  func_0x00010c0e6300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40800(lVar5);
  _objc_release(uVar1);
  _objc_release(lVar5);
  lVar5 = (long)_DAT_11272f734;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf714c0(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf71560(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf714a0(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf71520(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf71580(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2328;
  func_0x00010bf71540(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b84c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 105af0e2c; end: 105af0ebf; -[SCDiscoverFeedViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebcf0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  func_0x00010c29cba0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070b80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c255ac0(*(undefined8 *)(param_1 + _DAT_11272f8c4));
  }
  return;
}



/* Entry: 105af0ec0; end: 105af103b; -[SCDiscoverFeedViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af0ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  *(undefined1 *)(param_1 + _DAT_11272f8b4) = 0;
  func_0x00010c0f0fa0(*(undefined8 *)(param_1 + _DAT_11272f7fc),param_2,
                      &PTR____CFConstantStringClassReference_110eb57b8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  func_0x00010c29ca00(param_1);
  lVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06d1a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_105af0f98;
  }
  func_0x00010c29cc20(param_1);
LAB_105af0f98:
  puStack_48 = PTR_PTR_1126ebcf0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48,param_3);
  func_0x00010c200640(*(undefined8 *)(param_1 + _DAT_11272f714));
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272f7d8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8480;
  func_0x00010bf77860(PTR_PTR_1126b8480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar5);
  return;
}



/* Entry: 105af103c; end: 105af1b23; -[SCDiscoverFeedViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af103c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lStack_78;
  undefined *puStack_70;
  
  puStack_70 = PTR_PTR_1126ebcf0;
  lStack_78 = param_1;
  _objc_msgSendSuper2(&lStack_78,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_11272f7fc));
  puVar2 = PTR_PTR_1126c21f8;
  _objc_alloc();
  lVar6 = (long)_DAT_11272f734;
  lVar33 = (long)_DAT_11272f768;
  func_0x00010c04cee0();
  lVar28 = (long)_DAT_11272f8d0;
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar2;
  _objc_release(uVar7);
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11272f788));
  func_0x00010bef9980(param_1);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  lVar36 = (long)_DAT_11272f760;
  uVar7 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar29);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc780();
  _objc_release(uVar7);
  func_0x00010bef9980(param_1);
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
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  lVar31 = (long)_DAT_11272f714;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar31));
  lVar8 = (long)_DAT_11272f8d4;
  lVar28 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar28);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + lVar31));
  _objc_release(lVar28);
  func_0x00010bef9980(param_1);
  func_0x00010bef9980(param_1);
  uVar29 = *(undefined8 *)(param_1 + _DAT_11272f774);
  func_0x00010c293ae0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(param_1);
  _objc_release(uVar7);
  _objc_release(uVar29);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272f7b8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(param_1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126c2210;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272f7bc);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034940();
  uVar29 = *(undefined8 *)(param_1 + _DAT_11272f8d8);
  *(undefined **)(param_1 + _DAT_11272f8d8) = puVar2;
  _objc_release(uVar29);
  _objc_release(uVar7);
  func_0x00010bef9980(param_1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2330;
  _objc_alloc();
  lVar39 = (long)_DAT_11272f6d8;
  uVar22 = *(undefined8 *)(param_1 + lVar39);
  lVar1 = (long)_DAT_11272f71c;
  uVar29 = *(undefined8 *)(param_1 + _DAT_11272f718);
  uVar23 = *(undefined8 *)(param_1 + lVar36);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272f7a0);
  uVar24 = *(undefined8 *)(param_1 + _DAT_11272f6dc);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11272f74c);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11272f6f8);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11272f770);
  uVar13 = *(undefined8 *)(param_1 + lVar33);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11272f76c);
  uVar25 = *(undefined8 *)(param_1 + _DAT_11272f79c);
  uVar15 = *(undefined8 *)(param_1 + _DAT_11272f710);
  uVar26 = *(undefined8 *)(param_1 + lVar1);
  lVar16 = (long)_DAT_11272f754;
  uVar17 = *(undefined8 *)(param_1 + lVar16);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11272f7b4);
  uVar19 = *(undefined8 *)(param_1 + _DAT_11272f7a4);
  uVar20 = *(undefined8 *)(param_1 + _DAT_11272f7a8);
  uVar27 = *(undefined8 *)(param_1 + _DAT_11272f7b0);
  uVar21 = *(undefined8 *)(param_1 + _DAT_11272f7c4);
  uVar32 = *(undefined8 *)(param_1 + _DAT_11272f6d4);
  uVar34 = *(undefined8 *)(param_1 + _DAT_11272f7f4);
  uVar37 = *(undefined8 *)(param_1 + _DAT_11272f7f0);
  uVar35 = *(undefined8 *)(param_1 + _DAT_11272f7e8);
  uVar41 = *(undefined8 *)(param_1 + _DAT_11272f7ec);
  uVar40 = *(undefined8 *)(param_1 + _DAT_11272f7e0);
  lVar36 = (long)_DAT_11272f7e4;
  uVar30 = *(undefined8 *)(param_1 + lVar36);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272f724);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d740(puVar2,*(undefined8 *)(param_1 + _DAT_11272f75c),uVar22,uVar29,uVar23,uVar9,
                      uVar24,uVar10,uVar11,uVar12,uVar13,uVar14,uVar25,uVar15,uVar26,uVar17,uVar18,
                      uVar19,uVar20,uVar27,uVar21,uVar32,uVar34,uVar37,uVar40,uVar30,uVar35,uVar41,
                      uVar7,puVar3,*(undefined8 *)(param_1 + _DAT_11272f728),
                      *(undefined8 *)(param_1 + _DAT_11272f72c),*(undefined8 *)(param_1 + lVar6),
                      *(undefined8 *)(param_1 + _DAT_11272f730),
                      *(undefined8 *)(param_1 + _DAT_11272f800),
                      *(undefined8 *)(param_1 + _DAT_11272f850),
                      *(undefined8 *)(param_1 + _DAT_11272f854),
                      *(undefined8 *)(param_1 + _DAT_11272f864),
                      *(undefined8 *)(param_1 + _DAT_11272f8dc),
                      *(undefined8 *)(param_1 + _DAT_11272f868),
                      *(undefined8 *)(param_1 + _DAT_11272f874),
                      *(undefined8 *)(param_1 + _DAT_11272f75c),
                      *(undefined8 *)(param_1 + _DAT_11272f880),
                      *(undefined8 *)(param_1 + _DAT_11272f738));
  lVar38 = (long)_DAT_11272f8e0;
  uVar29 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar2;
  _objc_release(uVar29);
  _objc_release(uVar7);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar38));
  lVar28 = param_1 + lVar8;
  _objc_loadWeakRetained();
  func_0x00010c1e1580(*(undefined8 *)(param_1 + lVar38));
  _objc_release(lVar28);
  lVar28 = param_1 + _DAT_11272f8e4;
  _objc_loadWeakRetained();
  func_0x00010c188840(*(undefined8 *)(param_1 + lVar38));
  _objc_release(lVar28);
  puVar4 = PTR_PTR_1126c2338;
  _objc_alloc();
  lVar28 = (long)_DAT_11272f8b0;
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff800();
  _objc_release(uVar7);
  uVar11 = *(undefined8 *)(param_1 + lVar36);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar13);
  uVar7 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_retain();
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _objc_retain(uVar11);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2348;
  _objc_alloc();
  uVar29 = *(undefined8 *)(param_1 + _DAT_11272f73c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272f708);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ce80();
  lVar39 = (long)_DAT_11272f8e8;
  uVar10 = *(undefined8 *)(param_1 + lVar39);
  *(undefined **)(param_1 + lVar39) = puVar5;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar29);
  func_0x00010c21a120(*(undefined8 *)(param_1 + lVar39));
  puVar5 = PTR_PTR_1126b1150;
  _objc_alloc();
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf4c080(uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11272f720);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fd60();
  lVar28 = (long)_DAT_11272f8ec;
  uVar10 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar5;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da460(0x3fb999999999999a);
  _objc_release(uVar29);
  func_0x00010c200b20(*(undefined8 *)(param_1 + lVar28));
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar28));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar28));
  uVar9 = *(undefined8 *)(param_1 + lVar28);
  uVar29 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar9);
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e940();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194fc0();
  _objc_release(uVar29);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar29 = *(undefined8 *)(param_1 + _DAT_11272f8b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580();
  _objc_release(uVar29);
  _objc_release(lVar8);
  func_0x00010bdf1000(param_1);
  lVar28 = param_1;
  func_0x00010bf5f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187780(*(undefined8 *)(param_1 + lVar31));
  _objc_release(lVar28);
  uVar29 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c269d40(uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c000();
  _objc_release(uVar29);
  uVar29 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1270;
  func_0x00010bf824a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar29);
  puVar5 = PTR_PTR_1126c2350;
  _objc_alloc();
  uVar29 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0086c0();
  lVar28 = (long)_DAT_11272f8f0;
  uVar9 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar5;
  _objc_release(uVar9);
  _objc_release(uVar29);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar28));
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 105af1b24; end: 105af1b2f;  */

undefined * FUN_105af1b24(void)

{
  return PTR____kCFBooleanFalse_11034ab60;
}



/* Entry: 105af1b30; end: 105af1b67;  */

void FUN_105af1b30(void)

{
  _objc_alloc(PTR_PTR_1126c2340);
  func_0x00010c0496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105af1b68; end: 105af1cdb; -[SCDiscoverFeedViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af1b68(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ebcf0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewWillLayoutSubviews_112526958);
  func_0x00010c08ce20(*(undefined8 *)(param_5 + _DAT_11272f8f4));
  lVar2 = (long)_DAT_11272f8b0;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  dVar5 = param_2;
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  dVar3 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  dVar4 = dVar3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(uVar1);
  if (dVar4 != 0.0) {
    func_0x00010c1795c0(0,*(undefined8 *)(param_5 + lVar2));
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f80(0,param_2,param_3,param_4);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(param_1,dVar5 - (0.0 - dVar3));
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105af1cdc; end: 105af1d43; -[SCDiscoverFeedViewController _isPresentingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105af1cdc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11272f714);
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f8b8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07ad00();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 105af1d44; end: 105af1d7b; -[SCDiscoverFeedViewController preferredStatusBarStyle] */

undefined8 FUN_105af1d44(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be42e60();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (uVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105af1d7c; end: 105af1d83; -[SCDiscoverFeedViewController prefersStatusBarHidden] */

undefined8 FUN_105af1d7c(void)

{
  return 0;
}



/* Entry: 105af1d84; end: 105af1dc7; -[SCDiscoverFeedViewController preferredScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105af1d84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be42e60();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + _DAT_11272f8f8) == '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xf;
  }
  return uVar2;
}



/* Entry: 105af1dc8; end: 105af1dd3; +[SCDiscoverFeedViewController announcerIdentifier] */

undefined ** FUN_105af1dc8(void)

{
  return &PTR____CFConstantStringClassReference_110e1c958;
}



/* Entry: 105af1dd4; end: 105af1e5f; -[SCDiscoverFeedViewController setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af1dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272f8d4;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  _objc_retain();
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11272f714));
  _objc_release(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11272f8e0));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af1e60; end: 105af1e83; -[SCDiscoverFeedViewController shouldPopToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105af1e60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f714);
  func_0x00010c07ab40(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105af1e84; end: 105af1e93; -[SCDiscoverFeedViewController timeBeforeReturningToCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af1e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f714),PTR_s_timeBeforeReturningToCamera_112679670);
  return;
}



/* Entry: 105af1e94; end: 105af1e97; -[SCDiscoverFeedViewController refreshByPullToRefresh] */

void FUN_105af1e94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshByPullToRefresh_11257fa80);
  return;
}



/* Entry: 105af1e98; end: 105af1fb7; -[SCDiscoverFeedViewController _refreshByPullToRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af1e98(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f70c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11272f8fc) = 1;
  func_0x00010be118c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f6f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab520();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105af1fb8; end: 105af1ff3;  */

void FUN_105af1fb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af1ff4; end: 105af2003; -[SCDiscoverFeedViewController isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af1ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f8f4),PTR_s_isLoadingContent_1125fb520);
  return;
}



/* Entry: 105af2004; end: 105af2013; -[SCDiscoverFeedViewController isViewingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f714),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 105af2014; end: 105af212b; -[SCDiscoverFeedViewController navigationBarButtonItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c2358;
  _objc_alloc(PTR_PTR_1126c2358);
  func_0x00010c01cb40();
  func_0x00010c2256c0(0x4045000000000000);
  lVar3 = param_1;
  func_0x00010c273700(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11272f708),
                      *(undefined8 *)(param_1 + _DAT_11272f7c8));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272f8a0;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar3;
  _objc_release(uVar4);
  func_0x00010c217040(puVar2,param_2,*(undefined8 *)(param_1 + lVar6));
  puVar5 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar5);
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105af212c; end: 105af2267; -[SCDiscoverFeedViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af212c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010be2fa80(param_1,param_2,param_3);
  func_0x00010be54be0(param_1,param_2,2);
  if (*(char *)(param_1 + _DAT_11272f8ac) == '\x01') {
    lVar5 = param_1;
    func_0x00010c0e6300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40880();
    _objc_release(lVar5);
  }
  lVar5 = (long)_DAT_11272f734;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c070b80();
  if ((int)uVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1270;
    func_0x00010bf82460(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) goto LAB_105af2250;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272f8c4);
    uVar1 = param_3;
    func_0x00010bfed1a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255aa0(uVar4,param_2,uVar1);
  }
  _objc_release(uVar1);
LAB_105af2250:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af2268; end: 105af25d3; -[SCDiscoverFeedViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2268(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 auStack_c8 [8];
  double dStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  *(double *)(param_3 + (long)_DAT_11272f900) = param_2;
  lVar9 = (long)_DAT_11272f904;
  uVar1 = param_3 + lVar9;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar9 = param_3 + lVar9;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c152ca0();
    _objc_release(lVar9);
  }
  uVar3 = param_5;
  func_0x00010bf4cdc0();
  func_0x000107cb3384();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_3);
  uVar8 = *(undefined8 *)(param_3 + (long)_DAT_11272f78c);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105af25d4;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar3);
  uStack_88 = uVar3;
  func_0x00010c0f7fc0(uVar8);
  uVar1 = param_3;
  func_0x00010bdf7080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  ppuVar10 = &PTR____CFConstantStringClassReference_110eb56f8;
  uVar2 = uVar1;
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110eb3678;
    uVar2 = uVar1;
    func_0x00010bf4b900();
    if ((int)uVar2 == 0) {
      ppuVar10 = (undefined **)0x0;
      goto LAB_105af2400;
    }
  }
  _objc_retain(ppuVar10);
LAB_105af2400:
  ppuVar5 = ppuVar10;
  func_0x00010c08fa60();
  _objc_initWeak(auStack_b0,param_3);
  _objc_copyWeak(auStack_c8,auStack_b0);
  uStack_b8 = ppuVar5 != (undefined **)0x0;
  _objc_retain(ppuVar10);
  dStack_c0 = param_2 * 1000.0;
  func_0x00010bfcac20(param_3);
  lVar9 = (long)_DAT_11272f734;
  uVar6 = *(ulong *)(param_3 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c070b80();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar6);
  }
  else {
    uVar7 = *(ulong *)(param_3 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1270;
    func_0x00010bf82460(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf1f320();
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((uVar2 & 1) == 0) {
      func_0x00010c255ac0(*(undefined8 *)(param_3 + (long)_DAT_11272f8c4));
    }
  }
  _objc_release(ppuVar10);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar10);
  _objc_release(uVar1);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 105af25d4; end: 105af2613;  */

void FUN_105af25d4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af2614; end: 105af2707;  */

void FUN_105af2614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c28b780(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af2708; end: 105af28c3; -[SCDiscoverFeedViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2708(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11272f904;
  uVar1 = param_3 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = param_3 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c152aa0();
    _objc_release(lVar5);
  }
  func_0x00010be54be0(param_3);
  if ((param_6 & 1) == 0) {
    func_0x00010be771c0(param_3);
    uVar3 = param_5;
    func_0x00010bf4cdc0();
    func_0x000107cb3498(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_3);
    uVar4 = *(undefined8 *)(param_3 + _DAT_11272f78c);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c070b80();
  _objc_release(uVar4);
  if (((param_6 & 1) == 0) && ((int)uVar3 != 0)) {
    func_0x00010c283940(*(undefined8 *)(param_3 + _DAT_11272f8c4));
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105af28c4; end: 105af2903;  */

void FUN_105af28c4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af2904; end: 105af2ab7; -[SCDiscoverFeedViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2904(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  *(undefined8 *)(param_3 + _DAT_11272f900) = 0x10000000000000;
  lVar6 = (long)_DAT_11272f904;
  uVar1 = param_3 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar6 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c152a80();
    _objc_release(lVar6);
  }
  uVar3 = param_5;
  func_0x00010bf4cdc0();
  func_0x000107cb3498(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_3);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11272f78c);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar5);
  func_0x00010be771c0(param_3);
  uVar4 = *(undefined8 *)(param_3 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c070b80();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    func_0x00010c283940(*(undefined8 *)(param_3 + _DAT_11272f8c4));
  }
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 105af2ab8; end: 105af2af7;  */

void FUN_105af2ab8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af2af8; end: 105af2b7f; -[SCDiscoverFeedViewController scrollViewDidEndScrollingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272f904;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ae0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af2b80; end: 105af2bef; -[SCDiscoverFeedViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_105af2b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e6300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40560();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af2bf0; end: 105af2bf3; -[SCDiscoverFeedViewController _updatePreferredScreenEdgesDeferringSystemGestures] */

void FUN_105af2bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105af2bf4; end: 105af2e0b; -[SCDiscoverFeedViewController scrollToEndDetector:scrollViewWillReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_11272f908) == '\x01') {
    uVar2 = *(ulong *)(param_1 + _DAT_11272f734);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07a560();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_105af2de8;
  }
  *(undefined1 *)(param_1 + _DAT_11272f8fc) = 1;
  uVar2 = *(ulong *)(param_1 + _DAT_11272f8ec);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  ppuVar4 = (undefined **)(uVar3 - 1);
  func_0x0001079af528(ppuVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  ppuVar6 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar5);
  ppuVar1 = ppuVar4;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  ppuVar6 = ppuVar1;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  if ((ppuVar6 == &PTR____CFConstantStringClassReference_110f4b1d8) &&
     (uVar3 = uVar2, func_0x00010bf529e0(), 1 < uVar3)) {
    uVar7 = uVar2;
    func_0x00010bf529e0();
    uVar7 = uVar7 - 2;
    func_0x0001079af528(uVar7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2180;
    _objc_opt_class(PTR_PTR_1126c2180);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar3 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar7 = uVar3;
    func_0x00010bfa4340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar9 = *(undefined8 *)(param_1 + _DAT_11272f8f0);
    func_0x00010c067ec0(uVar7);
    func_0x00010bf5f840(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fca0(uVar9);
    _objc_release(param_1);
    _objc_release(uVar7);
  }
  _objc_release(uVar2);
LAB_105af2de8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af2e0c; end: 105af2efb; -[SCDiscoverFeedViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bc0e8;
  if ((param_6 != 0) && (*(char *)(param_1 + _DAT_11272f8ac) == '\x01')) {
    lVar1 = param_6;
    func_0x00010c067ec0(param_6);
    func_0x00010bfa0100(puVar2,param_2,(long)(int)lVar1,param_5);
    func_0x00010c2373e0(PTR_PTR_1126c1228,param_2,puVar2,0,1,&UNK_10f32855b,
                        *(undefined8 *)(param_1 + _DAT_11272f7ac));
  }
  func_0x00010bf94fc0(*(undefined8 *)(param_1 + _DAT_11272f8f0),param_2,param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af2efc; end: 105af2eff; -[SCDiscoverFeedViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:] */

void FUN_105af2efc(void)

{
  return;
}



/* Entry: 105af2f00; end: 105af2f13; -[SCDiscoverFeedViewController discoverQueryCoordinator:didFinishSavingServerResponseToCacheForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f8f0),
             PTR_s_endPaginationIfNeededForQuery__1125c2d98,param_4);
  return;
}



/* Entry: 105af2f14; end: 105af2f77; -[SCDiscoverFeedViewController sectionPaginationDidUpdateInFlight:forFeedType:] */

void FUN_105af2f14(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (param_4 == 2) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_105af2f78;
    puStack_28 = &UNK_110845ce0;
    uStack_20 = param_1;
    uStack_18 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_40);
  }
  return;
}



/* Entry: 105af2f78; end: 105af2f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f8e8),
             PTR_s_setSubscriptionSectionPagination_112661788,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105af2f94; end: 105af3023; -[SCDiscoverFeedViewController searchQueryResultControllerDidDelayReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af2f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1bebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272f8f4),PTR_s_setLoadingContent__11264d510,0);
    return;
  }
  return;
}



/* Entry: 105af3024; end: 105af328f; -[SCDiscoverFeedViewController searchQueryResultControllerDidUpdateQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3024(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11272f8ec;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf5fee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_11272f8ac) == '\x01') {
    func_0x00010c1239c0(param_1);
  }
  func_0x00010bdcc4e0(param_1);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  lVar6 = lVar2;
  func_0x000106fd7380(lVar2,lVar1 + -1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5a820(param_1);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf5fcc0();
  if (lVar1 != 2) {
    func_0x00010bec3780(param_1);
  }
  func_0x00010bdfe220(param_1);
  lVar1 = param_3;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf51e00();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105af3290;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar5);
  lStack_68 = lVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  lVar1 = lVar6;
  func_0x00010bf529e0();
  *(bool *)(param_1 + _DAT_11272f90c) = lVar1 != 0;
  _objc_release(lStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105af3290; end: 105af32c3;  */

void FUN_105af3290(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be939c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af32c4; end: 105af334f; -[SCDiscoverFeedViewController searchQueryResultControllerDidSuspendQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af32c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + _DAT_11272f8ac) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_11272f90c) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f8ec);
    uVar1 = 0;
    func_0x0001079b7dd0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128620(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af3350; end: 105af335f; -[SCDiscoverFeedViewController searchQueryResultControllerShouldReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105af3350(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272f8ac);
}



/* Entry: 105af3360; end: 105af3373; -[SCDiscoverFeedViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f8f4),PTR_s_setLoadingContent__11264d510,0);
  return;
}



/* Entry: 105af3374; end: 105af3377; -[SCDiscoverFeedViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_105af3374(void)

{
  return;
}



/* Entry: 105af3378; end: 105af337b; -[SCDiscoverFeedViewController searchQueryResultControllerDidSkipUpdateQueryResult:] */

void FUN_105af3378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFinishLoading_11255d228);
  return;
}



/* Entry: 105af337c; end: 105af337f; -[SCDiscoverFeedViewController firstSectionHeightChangedBy:] */

void FUN_105af337c(void)

{
  return;
}



/* Entry: 105af3380; end: 105af3397; -[SCDiscoverFeedViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3380(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272f788),PTR_s_addListener__11259c008);
    return;
  }
  return;
}



/* Entry: 105af3398; end: 105af33a7; -[SCDiscoverFeedViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f788),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105af33a8; end: 105af33ab; -[SCDiscoverFeedViewController didUpdateWithAnnouncerIdentifier:] */

void FUN_105af33a8(void)

{
  return;
}



/* Entry: 105af33ac; end: 105af3883; -[SCDiscoverFeedViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af33ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar7 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar7 != 0) {
    func_0x00010be77700(param_2);
    goto LAB_105af3634;
  }
  uVar7 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar7 != 0) {
    if (*(char *)(param_2 + _DAT_11272f908) == '\x01') {
      uVar1 = *(ulong *)(param_2 + _DAT_11272f734);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07a560();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_105af3634;
    }
    lVar5 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001079d6398();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      func_0x00010c067ec0(lVar6);
    }
    uVar7 = *(undefined8 *)(param_2 + _DAT_11272f8f0);
    func_0x00010bf5f840(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fca0(uVar7);
    _objc_release(param_2);
    _objc_release(lVar6);
    goto LAB_105af3634;
  }
  uVar7 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar7 == 0) {
    uVar7 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      puVar4 = PTR_PTR_1126c2330;
      func_0x00010bf04780(PTR_PTR_1126c2330);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if ((int)uVar7 == 0) {
        puVar4 = PTR_PTR_1126c22c8;
        func_0x00010bf04780(PTR_PTR_1126c22c8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_5;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if ((int)uVar7 == 0) {
          lVar5 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c067fc0();
          _objc_release(lVar5);
          func_0x00010bf7dbc0(*(undefined8 *)(param_2 + _DAT_11272f788));
          if (lVar6 != 0x14) goto LAB_105af3634;
        }
        else {
          func_0x00010bf7dbc0(*(undefined8 *)(param_2 + _DAT_11272f788));
          uVar7 = param_4;
          func_0x00010c0720c0();
          if ((int)uVar7 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            *(double *)(param_2 + _DAT_11272f830) = param_1 * 1000.0;
            _objc_release(puVar4);
            goto LAB_105af3780;
          }
        }
        uVar7 = param_4;
        func_0x00010c0720c0();
        if ((int)uVar7 == 0) goto LAB_105af3634;
        uVar7 = 5;
      }
      else {
        uVar7 = param_4;
        func_0x00010c0720c0();
        if ((int)uVar7 != 0) {
LAB_105af3780:
          func_0x00010be287c0(param_2);
          goto LAB_105af3634;
        }
        uVar7 = param_4;
        func_0x00010c0720c0();
        if ((int)uVar7 == 0) goto LAB_105af3634;
        uVar7 = 6;
      }
      *(undefined8 *)(param_2 + _DAT_11272f8cc) = uVar7;
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_2 + _DAT_11272f8c0) = param_1 * 1000.0;
      _objc_release(puVar4);
      func_0x00010be287a0(param_2);
      goto LAB_105af3634;
    }
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    _objc_initWeak(auStack_68,param_2);
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(param_6);
    dStack_98 = param_1 * 1000.0;
    func_0x00010bfcac20(param_2);
    _objc_release(param_6);
    puVar3 = auStack_a0;
  }
  else {
    _objc_initWeak(auStack_68,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105af3884;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    puVar3 = auStack_70;
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_68);
LAB_105af3634:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105af3884; end: 105af38b3;  */

void FUN_105af3884(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af38b4; end: 105af39d7;  */

void FUN_105af38b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b780(*(undefined8 *)(param_1 + 0x30),lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af39d8; end: 105af3a9b; -[SCDiscoverFeedViewController currentPageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af39d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22f8;
  func_0x00010bf82320(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f910);
    _objc_retain(uVar3);
  }
  else {
    lVar4 = (long)_DAT_11272f898;
    _os_unfair_lock_lock(param_1 + lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f910);
    _objc_retain(uVar3);
    _os_unfair_lock_unlock(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105af3a9c; end: 105af3b77; -[SCDiscoverFeedViewController setCurrentPageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22f8;
  func_0x00010bf82320(PTR_PTR_1126c22f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar4 = (long)_DAT_11272f898;
    _os_unfair_lock_lock(param_1 + lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f910);
    *(undefined8 *)(param_1 + _DAT_11272f910) = param_3;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar4);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f910);
  *(undefined8 *)(param_1 + _DAT_11272f910) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


