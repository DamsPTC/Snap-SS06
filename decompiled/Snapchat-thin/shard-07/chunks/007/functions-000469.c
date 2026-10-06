/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058cd1f4; end: 1058cf907; -[SCMemoriesCachingMediaHelper _imageProcessCommandsForSnapOverlayWithSnapInfo:sourceImage:contextFilteredImage:mediaOrientation:snapOverlay:outputSize:isSpectaclesMedia:animatedOption:includeOverlay:includeVisualFilters:stickerData:spectaclesSnapCommandProvider:] */

undefined *
FUN_1058cd1f4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8,undefined *param_9,
             undefined1 param_10,long param_11,uint param_12,undefined4 param_13,undefined8 param_14
             ,undefined8 param_15)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined *puVar39;
  ulong uVar40;
  undefined *puVar41;
  long lVar42;
  uint uVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined *puStack_b08;
  undefined *puStack_af0;
  long lStack_ab8;
  double dStack_ab0;
  undefined *puStack_aa8;
  undefined *puStack_a90;
  undefined8 uStack_a88;
  code *pcStack_a80;
  undefined *puStack_a78;
  long lStack_a70;
  undefined *puStack_a68;
  undefined *puStack_a60;
  undefined8 uStack_a58;
  undefined *puStack_a50;
  undefined8 uStack_a48;
  code *pcStack_a40;
  undefined *puStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 *puStack_a10;
  double dStack_a08;
  double dStack_a00;
  undefined1 uStack_9f8;
  undefined8 uStack_9f0;
  long lStack_9e8;
  long *plStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined *puStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined *puStack_990;
  undefined *puStack_988;
  undefined8 *puStack_980;
  undefined *puStack_978;
  undefined8 uStack_970;
  code *pcStack_968;
  undefined *puStack_960;
  undefined *puStack_958;
  undefined8 *puStack_950;
  undefined *puStack_948;
  undefined8 uStack_940;
  code *pcStack_938;
  undefined *puStack_930;
  undefined *puStack_928;
  undefined *puStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  long lStack_908;
  long *plStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined *puStack_8d0;
  undefined8 uStack_8c8;
  code *pcStack_8c0;
  undefined *puStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 *puStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined *puStack_870;
  undefined8 uStack_868;
  code *pcStack_860;
  undefined *puStack_858;
  long lStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long lStack_838;
  long *plStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined *puStack_800;
  undefined8 uStack_7f8;
  code *pcStack_7f0;
  undefined *puStack_7e8;
  undefined8 uStack_7e0;
  undefined *puStack_7d8;
  undefined *puStack_7d0;
  undefined *puStack_7c8;
  undefined *puStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined **ppuStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined *puStack_778;
  undefined8 uStack_770;
  code *pcStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined **ppuStack_710;
  undefined8 *puStack_708;
  undefined8 *puStack_700;
  undefined8 uStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 uStack_6e8;
  code *pcStack_6e0;
  code *pcStack_6d8;
  undefined8 uStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  code *pcStack_6b8;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  undefined1 auStack_6a0 [8];
  undefined8 uStack_698;
  undefined8 *puStack_690;
  undefined8 uStack_688;
  code *pcStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  undefined1 auStack_668 [8];
  undefined *puStack_660;
  undefined8 uStack_658;
  code *pcStack_650;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  code *pcStack_618;
  code *pcStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar50 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_14);
  _objc_retain(param_15);
  uVar28 = param_5;
  FUN_1058d42e8(param_5,param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_9;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  plStack_4f0 = (long *)0x0;
  lStack_4f8 = 0;
  uStack_500 = 0;
  puVar8 = param_9;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar8;
  func_0x00010bf52a60();
  if (puVar32 != (undefined *)0x0) {
    lVar35 = *plStack_4f0;
    do {
      puVar36 = (undefined *)0x0;
      do {
        if (*plStack_4f0 != lVar35) {
          _objc_enumerationMutation(puVar8);
        }
        uVar31 = *(ulong *)(lStack_4f8 + (long)puVar36 * 8);
        uVar9 = uVar31;
        func_0x00010c0816c0();
        if (((uVar9 & 1) != 0) || (func_0x00010c06c0a0(), (uVar31 & 1) != 0)) {
          bVar3 = 1;
          goto LAB_1058cd3bc;
        }
        puVar36 = puVar36 + 1;
      } while (puVar32 != puVar36);
      puVar32 = puVar8;
      func_0x00010bf52a60();
    } while (puVar32 != (undefined *)0x0);
  }
  bVar3 = 0;
LAB_1058cd3bc:
  _objc_release(puVar8);
  puVar8 = param_9;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = param_9;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = param_9;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      puStack_aa8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_138 = puVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      goto LAB_1058cd454;
    }
LAB_1058cd4f8:
    puStack_aa8 = (undefined *)0x0;
    bVar4 = false;
    bVar5 = true;
  }
  else {
    puStack_aa8 = param_9;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
LAB_1058cd454:
    if (puStack_aa8 == (undefined *)0x0) goto LAB_1058cd4f8;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_528 = 0;
    plStack_530 = (long *)0x0;
    lStack_538 = 0;
    uStack_540 = 0;
    _objc_retain(puStack_aa8);
    puVar8 = puStack_aa8;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar35 = *plStack_530;
      do {
        puVar32 = (undefined *)0x0;
        do {
          if (*plStack_530 != lVar35) {
            _objc_enumerationMutation(puStack_aa8);
          }
          uVar9 = *(ulong *)(lStack_538 + (long)puVar32 * 8);
          func_0x00010c0816c0();
          if ((uVar9 & 1) != 0) {
            bVar4 = true;
            goto LAB_1058cd514;
          }
          puVar32 = puVar32 + 1;
        } while (puVar8 != puVar32);
        puVar8 = puStack_aa8;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    bVar4 = false;
LAB_1058cd514:
    _objc_release(puStack_aa8);
    bVar5 = false;
  }
  puVar8 = param_9;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_af0 = puVar8;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puStack_af0;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = param_9;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar8;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (puVar32 != (undefined *)0x0) {
      puVar32 = param_9;
      func_0x00010bfaebe0(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar32;
      func_0x00010bfc1320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_af0);
      _objc_release(puVar36);
      _objc_release(puVar32);
      puStack_af0 = puVar8;
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  lStack_578 = 0;
  uStack_580 = 0;
  puVar32 = param_9;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar32;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar32);
  puVar32 = puVar36;
  func_0x00010bf52a60();
  if (puVar32 != (undefined *)0x0) {
    lVar35 = *plStack_570;
    do {
      puVar39 = (undefined *)0x0;
      do {
        if (*plStack_570 != lVar35) {
          _objc_enumerationMutation(puVar36);
        }
        uVar37 = *(undefined8 *)(lStack_578 + (long)puVar39 * 8);
        func_0x00010bfe5e40(uVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar8);
        _objc_release(uVar37);
        puVar39 = puVar39 + 1;
      } while (puVar32 != puVar39);
      puVar32 = puVar36;
      func_0x00010bf52a60();
    } while (puVar32 != (undefined *)0x0);
  }
  _objc_release(puVar36);
  puVar32 = puStack_af0;
  func_0x00010bf529e0();
  do {
    puVar36 = puVar32;
    puVar32 = puVar36 + -1;
    if ((long)puVar32 < 0) break;
    puVar39 = puStack_af0;
    func_0x00010c0dfd40(puStack_af0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar10;
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar41;
    func_0x00010bf1f3c0();
    _objc_release(puVar41);
    _objc_release(puVar10);
    _objc_release(puVar39);
  } while ((int)puVar11 == 0);
  dVar52 = 0.0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  plStack_5b0 = (long *)0x0;
  lStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar39 = param_9;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar39;
  func_0x00010bf52a60();
  uVar43 = (uint)((ulong)puVar32 >> 0x3f) ^ 1;
  if (puVar10 != (undefined *)0x0) {
    lVar35 = *plStack_5b0;
    do {
      puVar41 = (undefined *)0x0;
      do {
        if (*plStack_5b0 != lVar35) {
          _objc_enumerationMutation(puVar39);
        }
        uVar40 = *(ulong *)(lStack_5b8 + (long)puVar41 * 8);
        uVar9 = uVar40;
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar9;
        func_0x00010bf1f3c0();
        if ((uVar31 & 1) == 0) {
          _objc_release(uVar9);
        }
        else {
          func_0x00010c081660();
          _objc_retainAutoreleasedReturnValue();
          uVar31 = uVar40;
          func_0x00010bf1f3c0();
          _objc_release(uVar40);
          _objc_release(uVar9);
          if ((int)uVar31 == 0) {
            uVar43 = 1;
            goto LAB_1058cd864;
          }
        }
        puVar41 = puVar41 + 1;
      } while (puVar10 != puVar41);
      puVar10 = puVar39;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
LAB_1058cd864:
  _objc_release(puVar39);
  puVar39 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((long)puVar32 < 0) {
    lStack_ab8 = 0;
  }
  else {
    lStack_ab8 = 0;
    puVar32 = (undefined *)0x0;
    do {
      puVar10 = puStack_af0;
      func_0x00010c0dfd40(puStack_af0);
      _objc_retainAutoreleasedReturnValue();
      puVar41 = puVar8;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar41 != (undefined *)0x0) {
        func_0x00010befa120(puVar39);
        puVar10 = puVar41;
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf1f3c0();
        lVar35 = lStack_ab8 + 1;
        if (((ulong)puVar11 & 1) == 0) {
          _objc_release(puVar10);
          lStack_ab8 = lVar35;
        }
        else {
          puVar11 = puVar41;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010b777420();
          _objc_release(puVar11);
          _objc_release(puVar10);
          lStack_ab8 = lStack_ab8 + 2;
          if (puVar12 != (undefined *)0xffffffffa970ec1f) {
            lStack_ab8 = lVar35;
          }
        }
      }
      _objc_release(puVar41);
      puVar32 = puVar32 + 1;
    } while (puVar36 != puVar32);
  }
  lVar35 = param_3;
  func_0x00010bebe8a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar35 != 0) {
    func_0x00010befa120(puVar6);
  }
  puVar32 = puVar6;
  if (param_9 == (undefined *)0x0) {
LAB_1058cf72c:
    puVar7 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf51e00(puVar6);
      _objc_retain();
      _objc_release(puVar32);
      goto LAB_1058cf758;
    }
  }
  else {
    puVar36 = param_9;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar36;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = param_9;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar41 = puVar10;
      func_0x00010bf4e780();
      _objc_retainAutoreleasedReturnValue();
      if (puVar41 != (undefined *)0x0) {
        bVar3 = 1;
      }
      if (((bool)(bVar4 | puVar7 != (undefined *)0x0 | bVar3)) ||
         (puVar11 = puVar39, func_0x00010bf529e0(), puVar11 != (undefined *)0x0)) {
        _objc_release(puVar41);
        goto LAB_1058cda34;
      }
      puVar41 = param_9;
      func_0x00010bf8a220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar10);
      _objc_release(puVar36);
      if (puVar41 == (undefined *)0x0) goto LAB_1058cf72c;
    }
    else {
LAB_1058cda34:
      _objc_release(puVar10);
      _objc_release(puVar36);
    }
    if (param_7 == 0) {
LAB_1058cdb04:
      puVar36 = param_9;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar36;
      func_0x00010c2a0480();
      _objc_retainAutoreleasedReturnValue();
      cVar2 = '\0';
      if (puVar10 != (undefined *)0x0) {
        cVar2 = param_12._1_1_;
      }
      _objc_release();
      _objc_release(puVar36);
      if (cVar2 != '\0') {
        puVar36 = param_9;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar36;
        func_0x00010c2a04a0();
        _objc_release(puVar36);
        puVar41 = *(undefined **)(param_3 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar36 = puVar41;
        func_0x00010bfe71c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar41);
        if ((puVar36 != (undefined *)0x0) && (puVar10 != (undefined *)0x2f872b54 || lVar35 == 0))
        goto LAB_1058cdbbc;
        goto LAB_1058cdbc8;
      }
    }
    else {
      puVar36 = param_9;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar36;
      func_0x00010c2a0480();
      _objc_retainAutoreleasedReturnValue();
      puVar41 = param_9;
      func_0x00010bfaebe0(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar41;
      func_0x00010bf4e780();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf4bb00();
      _objc_release(puVar11);
      _objc_release(puVar41);
      _objc_release(puVar10);
      _objc_release(puVar36);
      puVar36 = PTR_PTR_1126bf488;
      if ((int)puVar12 == 0) goto LAB_1058cdb04;
      _objc_retainAutorelease(param_7);
      func_0x00010bdc1020(param_7);
      dVar52 = param_1;
      dVar50 = param_2;
      func_0x00010bf41dc0(param_1,param_2,puVar36);
      _objc_retainAutoreleasedReturnValue();
LAB_1058cdbbc:
      func_0x00010befa120(puVar6);
LAB_1058cdbc8:
      _objc_release(puVar36);
    }
    if ((param_12 & 1) != 0) {
      puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      if (uVar43 != 0) {
        puVar10 = param_9;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        puVar41 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bfaea40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar36);
        _objc_release(puVar41);
        _objc_release(puVar10);
        puVar36 = puVar11;
      }
      puVar10 = puVar36;
      func_0x00010bf529e0();
      puVar41 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_9;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      if (bVar5) {
        lVar33 = 0;
      }
      else {
        dVar52 = 0.0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5e8 = 0;
        plStack_5f0 = (long *)0x0;
        lStack_5f8 = 0;
        uStack_600 = 0;
        _objc_retain(puStack_aa8);
        puVar12 = puStack_aa8;
        func_0x00010bf52a60();
        lVar33 = 0;
        if (puVar12 != (undefined *)0x0) {
          lVar30 = *plStack_5f0;
          do {
            puVar34 = (undefined *)0x0;
            do {
              if (*plStack_5f0 != lVar30) {
                _objc_enumerationMutation(puStack_aa8);
              }
              lVar25 = *(long *)(lStack_5f8 + (long)puVar34 * 8);
              func_0x00010c081660();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar25 != 0) {
                lVar33 = lVar33 + 1;
              }
              puVar34 = puVar34 + 1;
            } while (puVar12 != puVar34);
            puVar12 = puStack_aa8;
            func_0x00010bf52a60();
          } while (puVar12 != (undefined *)0x0);
        }
        _objc_release(puStack_aa8);
      }
      puVar12 = param_9;
      func_0x00010bf11400();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar12;
      func_0x00010c0fb860();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar34;
      func_0x00010bf529e0();
      _objc_release(puVar34);
      _objc_release(puVar12);
      puVar12 = puVar13;
      func_0x00010bf529e0();
      fVar44 = SUB84(dVar52,0);
      if (0 < (long)(puVar10 + lStack_ab8 + (long)puVar14 + (long)puVar12 + lVar33)) {
        lVar30 = 0;
        do {
          puVar34 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar41);
          _objc_release(puVar34);
          puVar34 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar34);
          fVar44 = SUB84(dVar52,0);
          lVar30 = lVar30 + 1;
        } while (lVar30 < (long)(puVar10 + lStack_ab8 + (long)puVar14 + (long)puVar12 + lVar33));
      }
      puVar10 = puVar36;
      func_0x00010bf51e00(puVar36);
      puVar12 = puVar13;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      uVar37 = *(undefined8 *)(param_3 + 8);
      _objc_retain();
      if (puVar12 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126ae790;
        _objc_alloc();
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c021520();
        _objc_release(puVar34);
        puVar14 = *(undefined **)(param_3 + 0x28);
        _objc_retain();
        puVar34 = puVar12;
        func_0x00010bf529e0();
        if (puVar34 != (undefined *)0x0) {
          puStack_b08 = (undefined *)0x0;
          dVar52 = param_1 / param_2;
          dVar50 = INFINITY;
          if (param_2 != 0.0) {
            dVar50 = dVar52;
          }
          bVar5 = param_1 != 0.0;
          dVar48 = 0.0;
          if (bVar5) {
            dVar48 = dVar50;
          }
          dStack_ab0 = 1.60807493534087e-314;
          dVar50 = dVar48;
          do {
            _objc_autoreleasePoolPush();
            puVar26 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = 0;
            _dispatch_semaphore_create();
            uStack_630 = 0;
            puStack_628 = &uStack_630;
            uStack_620 = 0x3032000000;
            pcStack_618 = FUN_1058cab94;
            pcStack_610 = (code *)0x1058caba4;
            uStack_608 = 0;
            puVar16 = *(undefined **)(param_3 + 0x60);
            func_0x00010c2542a0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = *(undefined8 *)(param_3 + 0x60);
            func_0x00010bf5d860();
            _objc_retainAutoreleasedReturnValue();
            uVar29 = *(undefined8 *)(param_3 + 0x68);
            _objc_retain(uVar29);
            puStack_660 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_658 = 0xc2000000;
            pcStack_650 = FUN_1058cf92c;
            puStack_648 = &UNK_1108bce80;
            _objc_retain(uVar17);
            uStack_640 = uVar17;
            _objc_retain(uVar29);
            ppuVar18 = &puStack_660;
            uStack_638 = uVar29;
            _objc_retainBlock();
            _objc_initWeak(auStack_668,puVar26);
            uStack_698 = 0;
            puStack_690 = &uStack_698;
            uStack_688 = 0x3032000000;
            pcStack_680 = FUN_1058cfbe8;
            pcStack_678 = FUN_1058cfc10;
            puStack_6c8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_6c0 = 0xc2000000;
            pcStack_6b8 = FUN_1058cfc18;
            puStack_6b0 = &UNK_110841fb0;
            _objc_copyWeak(auStack_6a0,auStack_668);
            _objc_retain(param_5);
            uVar19 = 0;
            uStack_6a8 = param_5;
            func_0x0001008553e8(0,&puStack_6c8);
            uStack_6f8 = 0;
            puStack_6f0 = &uStack_6f8;
            uStack_6e8 = 0x3032000000;
            pcStack_6e0 = FUN_1058cfbe8;
            pcStack_6d8 = FUN_1058cfc10;
            puStack_778 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_770 = 0xc2000000;
            pcStack_768 = FUN_1058cfc30;
            puStack_760 = &UNK_1108bcee0;
            puStack_708 = &uStack_698;
            uStack_670 = uVar19;
            _objc_retain(puVar10);
            puStack_700 = &uStack_630;
            puStack_758 = puVar10;
            _objc_retain(uVar15);
            uStack_750 = uVar15;
            _objc_retain(puVar16);
            puStack_748 = puVar16;
            _objc_retain(puVar26);
            puStack_740 = puVar26;
            _objc_retain(param_9);
            puStack_738 = param_9;
            _objc_retain(uVar17);
            uStack_730 = uVar17;
            _objc_retain(ppuVar18);
            ppuStack_710 = ppuVar18;
            _objc_retain(param_14);
            uStack_728 = param_14;
            _objc_retain(param_5);
            uStack_720 = param_5;
            _objc_retain(uVar37);
            uVar19 = 0;
            uStack_718 = uVar37;
            func_0x0001008553e8(0,&puStack_778);
            uVar20 = 0;
            uStack_6d0 = uVar19;
            _dispatch_time(0,3000000000);
            puVar38 = PTR___dispatch_main_q_11034be20;
            _objc_retain(PTR___dispatch_main_q_11034be20);
            func_0x00010058c530(uVar20,puVar38,puStack_6f0[5]);
            _objc_release(puVar38);
            puStack_800 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_7f8 = 0xc2000000;
            pcStack_7f0 = FUN_1058d0174;
            puStack_7e8 = &UNK_1108bcf40;
            dVar46 = dStack_ab0;
            _objc_retain(uVar15);
            puStack_790 = &uStack_6f8;
            uStack_7e0 = uVar15;
            _objc_retain(puVar10);
            puStack_788 = &uStack_630;
            puStack_780 = &uStack_698;
            puStack_7d8 = puVar10;
            _objc_retain(puVar16);
            puStack_7d0 = puVar16;
            _objc_retain(puVar26);
            puStack_7c8 = puVar26;
            _objc_retain(param_9);
            puStack_7c0 = param_9;
            _objc_retain(uVar17);
            uStack_7b8 = uVar17;
            _objc_retain(ppuVar18);
            ppuStack_798 = ppuVar18;
            _objc_retain(param_14);
            uStack_7b0 = param_14;
            _objc_retain(param_5);
            uStack_7a8 = param_5;
            _objc_retain(uVar37);
            uStack_7a0 = uVar37;
            func_0x0001000d76cc("APPSTORE",&puStack_800);
            _dispatch_semaphore_wait(uVar15,0xffffffffffffffff);
            if (puStack_628[5] != 0) {
              puVar38 = puVar16;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar38;
              func_0x00010c06f740();
              _objc_release(puVar38);
              if ((int)puVar21 == 0) {
                puVar38 = puVar26;
                func_0x00010914e1b4(puVar26,0,0);
                _objc_retainAutoreleasedReturnValue();
                dVar56 = dVar46;
                dVar57 = dVar50;
              }
              else {
                puVar21 = puVar16;
                func_0x00010c269d40(puVar16);
                _objc_retainAutoreleasedReturnValue();
                puVar22 = param_9;
                func_0x00010bfaebe0(param_9);
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar22;
                func_0x00010bfedce0();
                _objc_retainAutoreleasedReturnValue();
                puVar38 = puVar21;
                func_0x00010c255020(puVar21);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar23);
                _objc_release(puVar22);
                _objc_release(puVar21);
                dVar56 = dVar46;
                dVar57 = dVar50;
              }
              func_0x00010bf345e0(puVar38);
              dVar55 = dVar56;
              dVar54 = dVar57;
              func_0x00010c1281e0(puVar38);
              dVar45 = dVar55;
              dVar49 = dVar54;
              func_0x00010c0c2640(PTR_PTR_1126bf720);
              uVar19 = param_5;
              dVar46 = dVar45;
              dVar50 = dVar49;
              func_0x00010c249840();
              _objc_retainAutoreleasedReturnValue();
              uVar20 = uVar19;
              func_0x00010c06fa00();
              if ((int)uVar20 == 0) {
                _objc_release(uVar19);
              }
              else {
                dVar46 = 0.0;
                if (dVar45 != 0.0) {
                  if (dVar49 == 0.0) {
                    dVar46 = INFINITY;
                  }
                  else {
                    dVar46 = dVar45 / dVar49;
                  }
                }
                dVar50 = ABS(dVar46 - dVar48);
                dVar46 = ABS(dVar46 + dVar48) * 2.220446049250313e-16;
                if (dVar46 <= 2.2250738585072014e-308) {
                  dVar46 = 2.2250738585072014e-308;
                }
                bVar1 = dVar46 <= dVar50;
                _objc_release(uVar19);
                if (bVar1) {
                  dVar46 = dVar45;
                  if (param_2 != 0.0) {
                    dVar46 = 0.0;
                  }
                  dVar51 = 0.0;
                  if (param_2 != 0.0) {
                    dVar51 = dVar49;
                  }
                  dVar50 = dVar49;
                  dVar47 = 0.0;
                  if (param_1 != 0.0) {
                    dVar50 = dVar51;
                    dVar47 = dVar46;
                  }
                  if (dVar52 != 0.0 && (param_2 != 0.0 && bVar5)) {
                    dVar50 = 0.0;
                    dVar47 = dVar45;
                  }
                  if ((dVar52 != INFINITY && (dVar52 != 0.0 && (param_2 != 0.0 && bVar5))) &&
                     (dVar47 = dVar52 * dVar49, dVar50 = dVar49, dVar45 <= dVar47)) {
                    dVar47 = dVar45;
                    dVar50 = dVar45 / dVar52;
                  }
                  dVar50 = dVar49 / dVar50;
                  dVar55 = dVar55 * (dVar45 / dVar47);
                  dVar54 = dVar54 * dVar50;
                  dVar56 = (dVar45 / dVar47) * (dVar56 + -0.5) + 0.5;
                  dVar46 = dVar57 + -0.5;
                  dVar57 = dVar50 * dVar46 + 0.5;
                }
              }
              puVar21 = puVar26;
              func_0x00010c0816c0();
              if ((int)puVar21 == 0) {
LAB_1058ce610:
                if (param_11 != 2) {
                  puVar21 = PTR_PTR_1126b2700;
                  _objc_alloc(PTR_PTR_1126b2700);
                  func_0x00010c14e120(puVar38);
                  dVar50 = dVar46;
                  func_0x00010c141a80(puVar38);
                  func_0x00010c055500(dVar56,dVar57,dVar46,dVar50,puVar21);
                  puVar22 = param_9;
                  func_0x00010bf2fba0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar22 != (undefined *)0x0) {
                    puVar23 = param_9;
                    func_0x00010bf2fba0(param_9);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0816c0();
                    _objc_release(puVar23);
                  }
                  _objc_release(puVar22);
                  puVar22 = PTR_PTR_1126b2708;
                  _objc_alloc(PTR_PTR_1126b2708);
                  func_0x00010c01ce60(dVar55);
                  func_0x00010c1d04c0(puVar11);
                  _objc_release(puVar22);
                  func_0x00010c1d04c0(puVar41);
                  goto LAB_1058ce6fc;
                }
              }
              else {
                puVar21 = puVar26;
                func_0x00010c2790e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar21 == (undefined *)0x0) goto LAB_1058ce610;
                puVar22 = puVar14;
                func_0x00010c269d40(puVar14);
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar26;
                func_0x000109174740(puVar26);
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar22;
                func_0x00010c0d9160(puVar22);
                _objc_release(puVar23);
                _objc_release(puVar22);
                puVar22 = PTR_PTR_1126b26f8;
                _objc_alloc(PTR_PTR_1126b26f8);
                func_0x00010c01cea0(dVar55);
                func_0x00010c1d04c0(puVar11);
                _objc_release(puVar22);
                func_0x00010c1d04c0(puVar41);
LAB_1058ce6fc:
                _objc_release(puVar21);
                dVar46 = dVar55;
                dVar50 = dVar54;
              }
              _objc_release(puVar38);
            }
            fVar44 = SUB84(dVar46,0);
            _objc_release(uStack_7a0);
            _objc_release(uStack_7a8);
            _objc_release(uStack_7b0);
            _objc_release(ppuStack_798);
            _objc_release(uStack_7b8);
            _objc_release(puStack_7c0);
            _objc_release(puStack_7c8);
            _objc_release(puStack_7d0);
            _objc_release(puStack_7d8);
            _objc_release(uStack_7e0);
            __Block_object_dispose(&uStack_6f8,8);
            _objc_release(uStack_6d0);
            _objc_release(uStack_718);
            _objc_release(uStack_720);
            _objc_release(uStack_728);
            _objc_release(ppuStack_710);
            _objc_release(uStack_730);
            _objc_release(puStack_738);
            _objc_release(puStack_740);
            _objc_release(puStack_748);
            _objc_release(uStack_750);
            _objc_release(puStack_758);
            __Block_object_dispose(&uStack_698,8);
            _objc_release(uStack_670);
            _objc_release(uStack_6a8);
            _objc_destroyWeak(auStack_6a0);
            _objc_destroyWeak(auStack_668);
            _objc_release(ppuVar18);
            _objc_release(uStack_638);
            _objc_release(uStack_640);
            _objc_release(uVar29);
            _objc_release(uVar17);
            _objc_release(puVar16);
            __Block_object_dispose(&uStack_630,8);
            _objc_release(uStack_608);
            _objc_release(uVar15);
            _objc_release(puVar26);
            _objc_autoreleasePoolPop(puVar34);
            puVar34 = puVar12;
            func_0x00010bf529e0();
            puStack_b08 = puStack_b08 + 1;
          } while (puStack_b08 < puVar34);
        }
        _objc_release(puVar14);
        _objc_release(puVar10);
      }
      puVar10 = puVar39;
      func_0x00010bf529e0();
      if ((param_11 != 2) && (puVar10 != (undefined *)0x0)) {
        uVar15 = 0;
        uStack_818 = 0;
        uStack_820 = 0;
        uStack_808 = 0;
        uStack_810 = 0;
        lStack_838 = 0;
        uStack_840 = 0;
        uStack_828 = 0;
        plStack_830 = (long *)0x0;
        _objc_retain(puVar39);
        puVar10 = puVar39;
        func_0x00010bf52a60();
        if (puVar10 != (undefined *)0x0) {
          lVar33 = *plStack_830;
          do {
            puVar34 = (undefined *)0x0;
            puVar14 = puVar10;
            do {
              if (*plStack_830 != lVar33) {
                puVar14 = puVar39;
                _objc_enumerationMutation(puVar39);
              }
              lVar42 = *(long *)(lStack_838 + (long)puVar34 * 8);
              _objc_autoreleasePoolPush();
              lVar30 = lVar42;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              lVar25 = lVar30;
              func_0x00010b777420();
              _objc_release(lVar30);
              uStack_630 = 0;
              puStack_628 = &uStack_630;
              uStack_620 = 0x3032000000;
              pcStack_618 = FUN_1058cab94;
              pcStack_610 = (code *)0x1058caba4;
              uStack_608 = 0;
              uStack_698 = 0;
              puStack_690 = &uStack_698;
              uStack_688 = 0x3032000000;
              pcStack_680 = FUN_1058cab94;
              pcStack_678 = (code *)0x1058caba4;
              uStack_670 = 0;
              uStack_6f8 = 0;
              puStack_6f0 = &uStack_6f8;
              uStack_6e8 = 0x3032000000;
              pcStack_6e0 = FUN_1058cfbe8;
              pcStack_6d8 = FUN_1058cfc10;
              puStack_870 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_868 = 0xc2000000;
              pcStack_860 = FUN_1058d06e8;
              puStack_858 = &UNK_110841f80;
              lStack_850 = lVar42;
              _objc_retain(param_5);
              uVar17 = 0;
              uStack_848 = param_5;
              func_0x0001008553e8(0,&puStack_870);
              uVar19 = 0;
              uStack_6d0 = uVar17;
              _dispatch_time(0,5000000000);
              puVar38 = PTR___dispatch_main_q_11034be20;
              _objc_retain(PTR___dispatch_main_q_11034be20);
              func_0x00010058c530(uVar19,puVar38,puStack_6f0[5]);
              _objc_release(puVar38);
              lVar30 = lVar42;
              func_0x000108d3ee18();
              _objc_retainAutoreleasedReturnValue();
              if (lVar30 == 0) {
                _dispatch_block_cancel(puStack_6f0[5]);
                uVar17 = puStack_6f0[5];
                puStack_6f0[5] = 0;
              }
              else {
                uVar17 = 0;
                _dispatch_semaphore_create();
                puStack_8d0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_8c8 = 0xc2000000;
                pcStack_8c0 = FUN_1058d06ec;
                puStack_8b8 = &UNK_1108bcfa0;
                _objc_retain(lVar30);
                lStack_8b0 = lVar30;
                _objc_retain(uVar37);
                puStack_888 = &uStack_698;
                puStack_880 = &uStack_630;
                uStack_8a8 = uVar37;
                lStack_8a0 = lVar42;
                _objc_retain(param_5);
                puStack_878 = &uStack_6f8;
                uStack_898 = param_5;
                _objc_retain(uVar17);
                uStack_890 = uVar17;
                func_0x000100162d98("APPSTORE",&puStack_8d0);
                _dispatch_semaphore_wait(uVar17,0xffffffffffffffff);
                if (puStack_628[5] != 0) {
                  func_0x00010c1d04c0(puVar41);
                  func_0x00010c2433e0(param_5);
                  uVar19 = uVar15;
                  func_0x00010c2433e0(param_5);
                  dVar52 = dVar50;
                  func_0x00010c23d0a0(puStack_628[5]);
                  lVar24 = lVar42;
                  func_0x000108d3fb68(uVar15,dVar50,uVar19,dVar52,lVar42);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d04c0(puVar11);
                  _objc_release(lVar24);
                  if (lVar25 == -0x568f13e1) {
                    lVar25 = puStack_690[5];
                    func_0x00010bf8ba20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar38 = PTR__OBJC_CLASS___UIImage_1126aea68;
                    if (lVar25 != 0) {
                      uVar19 = puStack_690[5];
                      func_0x00010bf8ba20(uVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c14d040();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar19);
                      if (puVar38 != (undefined *)0x0) {
                        func_0x00010c1d04c0(puVar41);
                        func_0x00010c2433e0(param_5);
                        uVar19 = uVar15;
                        func_0x00010c2433e0(param_5);
                        dVar52 = dVar50;
                        func_0x00010c23d0a0(puVar38);
                        func_0x000108d3fb68(uVar15,dVar50,uVar19,dVar52,lVar42);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d04c0(puVar11);
                        _objc_release(lVar42);
                      }
                      _objc_release(puVar38);
                    }
                  }
                }
                _objc_release(uStack_890);
                _objc_release(uStack_898);
                _objc_release(uStack_8a8);
                _objc_release(lStack_8b0);
              }
              _objc_release(uVar17);
              _objc_release(lVar30);
              __Block_object_dispose(&uStack_6f8,8);
              _objc_release(uStack_6d0);
              _objc_release(uStack_848);
              __Block_object_dispose(&uStack_698,8);
              _objc_release(uStack_670);
              __Block_object_dispose(&uStack_630,8);
              _objc_release(uStack_608);
              _objc_autoreleasePoolPop(puVar14);
              puVar34 = puVar34 + 1;
            } while (puVar10 != puVar34);
            puVar10 = puVar39;
            func_0x00010bf52a60();
          } while (puVar10 != (undefined *)0x0);
        }
        fVar44 = (float)uVar15;
        _objc_release(puVar39);
      }
      if (bVar4) {
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uStack_8e8 = 0;
        uStack_8f0 = 0;
        uStack_8d8 = 0;
        uStack_8e0 = 0;
        lStack_908 = 0;
        uStack_910 = 0;
        uStack_8f8 = 0;
        plStack_900 = (long *)0x0;
        _objc_retain(puStack_aa8);
        puVar14 = puStack_aa8;
        func_0x00010bf52a60();
        if (puVar14 != (undefined *)0x0) {
          lVar33 = *plStack_900;
          do {
            puVar38 = (undefined *)0x0;
            do {
              if (*plStack_900 != lVar33) {
                _objc_enumerationMutation(puStack_aa8);
              }
              lVar25 = *(long *)(lStack_908 + (long)puVar38 * 8);
              lVar30 = lVar25;
              func_0x00010c0816c0();
              if ((int)lVar30 != 0) {
                lVar30 = lVar25;
                func_0x00010bf8b600();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar30 == 0) {
                  lVar30 = lVar25;
                  func_0x00010bf303a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (lVar30 == 0) goto LAB_1058cee90;
                  func_0x00010bf303a0(lVar25);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar10);
                }
                else {
                  func_0x000108e0e67c(lVar25,0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar34);
                }
                _objc_release(lVar25);
              }
LAB_1058cee90:
              puVar38 = puVar38 + 1;
            } while (puVar14 != puVar38);
            puVar14 = puStack_aa8;
            func_0x00010bf52a60();
          } while (puVar14 != (undefined *)0x0);
        }
        _objc_release(puStack_aa8);
        puVar14 = puVar34;
        func_0x00010bf529e0();
        if ((puVar14 != (undefined *)0x0) ||
           (puVar14 = puVar10, func_0x00010bf529e0(), puVar14 != (undefined *)0x0)) {
          puVar26 = (undefined *)0x0;
          _dispatch_semaphore_create();
          puStack_628 = &uStack_630;
          uStack_630 = 0;
          uStack_620 = 0x3032000000;
          pcStack_618 = FUN_1058cfbe8;
          pcStack_610 = FUN_1058cfc10;
          puStack_948 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_940 = 0xc2000000;
          pcStack_938 = FUN_1058d0a84;
          puStack_930 = &UNK_110848ba8;
          _objc_retain(puVar10);
          puStack_928 = puVar10;
          _objc_retain(puVar34);
          puStack_920 = puVar34;
          _objc_retain(param_5);
          uVar15 = 0;
          uStack_918 = param_5;
          func_0x0001008553e8(0,&puStack_948);
          uVar17 = 0;
          uStack_608 = uVar15;
          _dispatch_time(0,5000000000);
          puVar14 = PTR___dispatch_main_q_11034be20;
          _objc_retain(PTR___dispatch_main_q_11034be20);
          func_0x00010058c530(uVar17,puVar14,puStack_628[5]);
          _objc_release(puVar14);
          puVar38 = puVar34;
          func_0x00010bf529e0();
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (puVar38 == (undefined *)0x0) {
            puVar38 = puVar10;
            func_0x00010bf529e0();
            puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (puVar38 != (undefined *)0x0) {
              func_0x00010bf529e0();
              uVar15 = param_5;
              func_0x00010c0c9a40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00(puVar14);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar15);
              puVar14 = puVar10;
              func_0x00010bf51e00(puVar10);
              puVar38 = puVar14;
              func_0x00010c0b8600();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
              uVar15 = *(undefined8 *)(param_3 + 0x50);
              puStack_9a8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_9a0 = 0xc2000000;
              uStack_998 = 0x1058d0acc;
              puStack_990 = &UNK_11084b9d0;
              puStack_980 = &uStack_630;
              _objc_retain(puVar26);
              puStack_988 = puVar26;
              func_0x00010c09b380(uVar15);
              _objc_release(puStack_988);
              goto LAB_1058cf1a8;
            }
          }
          else {
            func_0x00010bf529e0();
            uVar15 = param_5;
            func_0x00010c0c9a40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar15);
            uVar17 = *(undefined8 *)(param_3 + 0x48);
            func_0x00010c269d40(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar17;
            func_0x00010bf2ff00();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar34;
            func_0x00010bf51e00(puVar34);
            puStack_978 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_970 = 0xc2000000;
            pcStack_968 = FUN_1058d0a88;
            puStack_960 = &UNK_11084b9d0;
            puStack_950 = &uStack_630;
            _objc_retain(puVar26);
            puStack_958 = puVar26;
            func_0x00010c09b380(uVar15);
            _objc_release(puVar14);
            _objc_release(uVar15);
            _objc_release(uVar17);
            puVar38 = puStack_958;
LAB_1058cf1a8:
            _objc_release(puVar38);
          }
          _dispatch_semaphore_wait(puVar26,0xffffffffffffffff);
          __Block_object_dispose(&uStack_630,8);
          _objc_release(uStack_608);
          _objc_release(uStack_918);
          _objc_release(puStack_920);
          _objc_release(puStack_928);
          _objc_release(puVar26);
        }
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf529e0();
        uVar15 = param_5;
        func_0x00010c0c9a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar15);
        dVar52 = 0.0;
        uStack_9c8 = 0;
        uStack_9d0 = 0;
        uStack_9b8 = 0;
        uStack_9c0 = 0;
        lStack_9e8 = 0;
        uStack_9f0 = 0;
        uStack_9d8 = 0;
        plStack_9e0 = (long *)0x0;
        _objc_retain(puStack_aa8);
        puVar14 = puStack_aa8;
        func_0x00010bf52a60();
        if (puVar14 != (undefined *)0x0) {
          lVar33 = *plStack_9e0;
          do {
            puVar38 = (undefined *)0x0;
            puVar26 = puVar14;
            do {
              if (*plStack_9e0 != lVar33) {
                puVar26 = puStack_aa8;
                _objc_enumerationMutation(puStack_aa8);
              }
              uVar17 = *(undefined8 *)(lStack_9e8 + (long)puVar38 * 8);
              _objc_autoreleasePoolPush();
              uVar15 = uVar17;
              func_0x00010c0816c0();
              if ((int)uVar15 != 0) {
                uVar15 = 0;
                _dispatch_semaphore_create();
                uStack_630 = 0;
                uStack_620 = 0x3032000000;
                pcStack_618 = FUN_1058cab94;
                pcStack_610 = (code *)0x1058caba4;
                uStack_608 = 0;
                uVar19 = *(undefined8 *)(param_3 + 0x30);
                puStack_628 = &uStack_630;
                func_0x00010c119b40();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = *(undefined8 *)(param_3 + 0x48);
                _objc_retain(uVar20);
                puStack_a50 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a48 = 0xc2000000;
                pcStack_a40 = FUN_1058d0b10;
                puStack_a38 = &UNK_1108bcfd0;
                uStack_a30 = uVar17;
                _objc_retain(uVar19);
                uStack_a28 = uVar19;
                dStack_a08 = param_1;
                dStack_a00 = param_2;
                uStack_9f8 = param_10;
                _objc_retain(uVar20);
                uStack_a20 = uVar20;
                puStack_a10 = &uStack_630;
                _objc_retain(uVar15);
                uStack_a18 = uVar15;
                func_0x000100162d98("APPSTORE",&puStack_a50);
                _dispatch_semaphore_wait(uVar15,0xffffffffffffffff);
                if (puStack_628[5] != 0) {
                  uVar27 = *(undefined8 *)(param_3 + 0x28);
                  func_0x00010c269d40(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000109174614(uVar17);
                  _objc_retainAutoreleasedReturnValue();
                  uVar29 = uVar27;
                  func_0x00010c0d9160(uVar27);
                  _objc_release(uVar17);
                  _objc_release(uVar27);
                  puVar16 = PTR_PTR_1126b26f8;
                  _objc_alloc(PTR_PTR_1126b26f8);
                  func_0x00010c23d0a0(puStack_628[5]);
                  func_0x00010c23d0a0(puStack_628[5]);
                  dVar52 = dVar52 / param_1;
                  dVar50 = dVar50 / param_2;
                  func_0x00010c01cea0(dVar52,dVar50,puVar16);
                  func_0x00010befa120(puVar11);
                  _objc_release(puVar16);
                  func_0x00010befa120(puVar41);
                  _objc_release(uVar29);
                }
                _objc_release(uStack_a18);
                _objc_release(uStack_a20);
                _objc_release(uStack_a28);
                _objc_release(uVar20);
                _objc_release(uVar19);
                __Block_object_dispose(&uStack_630,8);
                _objc_release(uStack_608);
                _objc_release(uVar15);
              }
              _objc_autoreleasePoolPop(puVar26);
              puVar38 = puVar38 + 1;
            } while (puVar14 != puVar38);
            puVar14 = puStack_aa8;
            func_0x00010bf52a60();
          } while (puVar14 != (undefined *)0x0);
        }
        fVar44 = SUB84(dVar52,0);
        _objc_release(puStack_aa8);
        _objc_release(puVar34);
        _objc_release(puVar10);
      }
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar7 != (undefined *)0x0) {
        uVar15 = param_5;
        func_0x00010c0c9a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar15);
        uVar15 = 0;
        _dispatch_semaphore_create();
        puVar7 = param_9;
        func_0x00010bf11400(param_9);
        _objc_retainAutoreleasedReturnValue();
        puStack_a90 = PTR___NSConcreteStackBlock_11034bd00;
        fVar44 = -32.0;
        uStack_a88 = 0xc2000000;
        pcStack_a80 = FUN_1058d0cec;
        puStack_a78 = &UNK_1108bd000;
        lStack_a70 = param_3;
        _objc_retain(puVar11);
        puStack_a68 = puVar11;
        _objc_retain(puVar41);
        puStack_a60 = puVar41;
        _objc_retain(uVar15);
        uStack_a58 = uVar15;
        func_0x00010808ad8c(puVar7,&puStack_a90);
        _objc_release(puVar7);
        _dispatch_semaphore_wait(uVar15,0xffffffffffffffff);
        _objc_release(uStack_a58);
        _objc_release(puStack_a60);
        _objc_release(puStack_a68);
        _objc_release(uVar15);
      }
      puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae5e0(puVar11);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae5e0(puVar41);
      _objc_release(puVar7);
      puVar7 = puVar41;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126bfb98;
        func_0x00010c07cac0();
        puVar10 = PTR_PTR_1126b26f0;
        _objc_alloc(PTR_PTR_1126b26f0);
        func_0x00010c14c240(PTR_PTR_1126b26d0);
        fVar53 = -fVar44;
        if ((int)puVar7 == 0) {
          fVar53 = fVar44;
        }
        uVar15 = uVar28;
        func_0x00010c130740(uVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01d120((double)fVar53,puVar10);
        func_0x00010befa120(puVar6);
        _objc_release(puVar10);
        _objc_release(uVar15);
      }
      _objc_release(uVar37);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar41);
      _objc_release(puVar36);
      goto LAB_1058cf72c;
    }
    puVar7 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf51e00(puVar6);
      goto LAB_1058cf758;
    }
  }
  puVar32 = (undefined *)0x0;
LAB_1058cf758:
  _objc_release(lVar35);
  _objc_release(puVar39);
  _objc_release(puVar8);
  _objc_release(puStack_af0);
  _objc_release(puStack_aa8);
  _objc_release(puVar6);
  _objc_release(uVar28);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    uVar28 = 8;
    __Block_object_dispose(&uStack_630,8);
    __Unwind_Resume(param_5);
    func_0x00010c0816c0(uVar28);
    return (undefined *)(ulong)((uint)uVar28 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return puVar32;
}



/* Entry: 1058cf908; end: 1058cf923;  */

uint FUN_1058cf908(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0816c0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1058cf924; end: 1058cf92b;  */

void FUN_1058cf924(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0816d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTrackingValue_1125fdfc0);
  return;
}



/* Entry: 1058cf92c; end: 1058cfab7;  */

void FUN_1058cf92c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc960;
  _objc_retain(param_2);
  func_0x00010c290480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0e0460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058cfab8; end: 1058cfb73;  */

void FUN_1058cfab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058cfb74; end: 1058cfbd7;  */

void FUN_1058cfb74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058cfbd8; end: 1058cfbe7;  */

void FUN_1058cfbd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058cfbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1058cfbe8; end: 1058cfc0f;  */

void FUN_1058cfbe8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1058cfc10; end: 1058cfc17;  */

void FUN_1058cfc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058cfc18; end: 1058cfc2f;  */

void FUN_1058cfc18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1058cfc30; end: 1058cff2b;  */

void FUN_1058cfc30(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _dispatch_time(0,2000000000);
  func_0x00010058c530();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1058cff2c;
  puStack_98 = &UNK_1108bceb0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar9;
  _objc_retain(uVar10);
  uStack_78 = *(undefined8 *)(param_1 + 0x70);
  ppuVar2 = &puStack_b0;
  uStack_88 = uVar10;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c06f740();
  _objc_release(uVar10);
  if ((int)uVar9 != 0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfaebe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf5cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(ppuVar3);
    if (ppuVar4 != (undefined **)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bf2d360();
      _objc_release(uVar10);
      if ((int)uVar9 != 0) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(*(long *)(param_1 + 0x68),ppuVar4,0,ppuVar2)
        ;
        goto LAB_1058cfee8;
      }
    }
    _objc_release(ppuVar4);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010c27dde0();
  if (lVar5 != 0x3cedc99) {
    func_0x00010c27dde0(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = PTR_PTR_1126b2710;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c23fb20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2437a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0c9a40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfaebe0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  func_0x00010c26de60(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  ppuVar4 = ppuVar2;
LAB_1058cfee8:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  return;
}



/* Entry: 1058cff2c; end: 1058d0053;  */

void FUN_1058cff2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058d0054; end: 1058d005f;  */

void FUN_1058d0054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d005c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058d0060; end: 1058d0173;  */

void FUN_1058d0060(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 1058d0174; end: 1058d0447;  */

void FUN_1058d0174(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1058d0448;
  puStack_a0 = &UNK_1108bcf10;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar9;
  _objc_retain(uVar10);
  uStack_78 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  ppuVar2 = &puStack_b8;
  uStack_90 = uVar10;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c06f740();
  _objc_release(uVar10);
  if ((int)uVar9 != 0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfaebe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf5cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(ppuVar3);
    if (ppuVar4 != (undefined **)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bf2d360();
      _objc_release(uVar10);
      if ((int)uVar9 != 0) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(*(long *)(param_1 + 0x68),ppuVar4,1,ppuVar2)
        ;
        goto LAB_1058d0404;
      }
    }
    _objc_release(ppuVar4);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010c27dde0();
  if (lVar5 != 0x3cedc99) {
    func_0x00010c27dde0(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = PTR_PTR_1126b2710;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c23fb20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2437a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0c9a40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfaebe0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  func_0x00010bfe7ba0(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  ppuVar4 = ppuVar2;
LAB_1058d0404:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  return;
}



/* Entry: 1058d0448; end: 1058d05ab;  */

void FUN_1058d0448(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    _dispatch_block_cancel(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058d05ac; end: 1058d05b7;  */

void FUN_1058d05ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d05b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058d05b8; end: 1058d06e7;  */

void FUN_1058d05b8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 1058d06e8; end: 1058d06eb;  */

void FUN_1058d06e8(void)

{
  return;
}



/* Entry: 1058d06ec; end: 1058d0867;  */

void FUN_1058d06ec(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x38);
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010bfa7640(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar4);
  lVar3 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR_PTR_1126b2720;
    if ((int)uVar4 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    puVar5 = *ppuVar1;
    lVar3 = param_2;
    func_0x00010bfe7300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar8 + 0x40) + 8);
    _objc_retain();
    uVar4 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(uVar6);
  }
  _dispatch_block_cancel(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x48) + 8) + 0x28));
  lVar3 = *(long *)(*(long *)(lVar8 + 0x48) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar4);
  _dispatch_semaphore_signal(*(undefined8 *)(lVar8 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d0868; end: 1058d0997;  */

void FUN_1058d0868(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = param_2;
  _objc_release(uVar2);
  lVar4 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR_PTR_1126b2720;
    if ((int)uVar2 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    puVar5 = *ppuVar1;
    lVar4 = param_2;
    func_0x00010bfe7300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain();
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _dispatch_block_cancel(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d0998; end: 1058d09ab;  */

void FUN_1058d0998(long param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (param_2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058d09ac; end: 1058d0a83;  */

void FUN_1058d09ac(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 1058d0a84; end: 1058d0a87;  */

void FUN_1058d0a84(void)

{
  return;
}



/* Entry: 1058d0a88; end: 1058d0b0f;  */

void FUN_1058d0a88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _dispatch_block_cancel(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058d0b10; end: 1058d0c8f;  */

void FUN_1058d0b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x000108e380fc(uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  func_0x000100841590();
  _objc_release(uVar3);
  uVar1 = *(undefined1 *)(param_5 + 0x58);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000108e23d30(*(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x50),param_1,
                      param_2,param_3,param_4,uVar2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + 0x38);
  uVar3 = uVar4;
  _objc_retain(uVar4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 1058d0c90; end: 1058d0ceb;  */

void FUN_1058d0c90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d0cec; end: 1058d0e93;  */

void FUN_1058d0cec(double param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_4;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30);
      func_0x00010c119b40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0efd80();
      dVar7 = param_1;
      dVar8 = param_2;
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c23d0a0(uVar1);
      param_1 = dVar7 / param_1;
      func_0x00010c23d0a0(uVar1);
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x28);
      param_2 = dVar8 / param_2;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d9160();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_3 + 0x28);
      puVar5 = PTR_PTR_1126b26f8;
      _objc_alloc(PTR_PTR_1126b26f8);
      func_0x00010c01cea0(param_1,param_2);
      func_0x00010befa120(uVar3);
      _objc_release(puVar5);
      func_0x00010befa120(*(undefined8 *)(param_3 + 0x30));
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar6 = uVar6 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
    } while (uVar6 < uVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_3 + 0x38));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058d0e94; end: 1058d0f5b;  */

bool FUN_1058d0e94(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010c0ddbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  return param_2 != puVar1;
}



/* Entry: 1058d0f5c; end: 1058d1053; -[SCMemoriesCachingMediaHelper _specGenerateDistortionCorrectionCommandWithSnapInfo:snapOverlay:spectaclesSnapCommandProvider:] */

void FUN_1058d0f5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar3 = param_3;
    func_0x00010c249840();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c137a80();
    _objc_release(lVar3);
    if ((int)lVar1 != 0) {
      lVar3 = param_3;
      func_0x00010c249840();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c253860();
      _objc_release(lVar3);
      lVar3 = param_5;
      if (lVar1 == 0) {
        func_0x00010bfb2080(param_5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar1 = param_3;
        func_0x00010c249840(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c253860();
        func_0x00010c1245c0(param_5,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
      goto LAB_1058d1018;
    }
  }
  lVar3 = 0;
LAB_1058d1018:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1058d1054; end: 1058d10d3; -[SCMemoriesCachingMediaHelper generateMicroThumbnailDataFromLowResImage:] */

void FUN_1058d1054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c14e6c0(0x4014000000000000,0x4014000000000000,0x3ff0000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar1);
  uVar2 = param_3;
  func_0x00010b69662c(0x42a00000,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058d10d4; end: 1058d1247; -[SCMemoriesCachingMediaHelper generateMiniThumbnailDataFromSnap:snapOverlay:] */

void FUN_1058d10d4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06cde0();
  if ((int)uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010b5fa088();
    if (uVar3 < 0xd) {
      if ((1L << (uVar3 & 0x3f) & 0x1566U) == 0) goto LAB_1058d11c4;
      lVar4 = param_1;
      func_0x00010bfbf340(param_1,param_2,param_3,param_4,uVar2,1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar4;
        func_0x00010b686308();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar4);
      if (lVar5 == 0) goto LAB_1058d1214;
LAB_1058d11f0:
      func_0x00010bfbfb40(param_1,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      goto LAB_1058d1218;
    }
    if (uVar3 == 9999) {
LAB_1058d11c4:
      lVar5 = param_1;
      func_0x00010bfbf380(param_1,param_2,param_3,param_4,uVar2,1,1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) goto LAB_1058d11f0;
    }
  }
LAB_1058d1214:
  param_1 = 0;
LAB_1058d1218:
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058d1248; end: 1058d1303; -[SCMemoriesCachingMediaHelper _loadBackgroundAnimationCommandWithImage:croppingStateType:] */

void FUN_1058d1248(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 == 2)) {
    puVar1 = PTR_PTR_1126bfba0;
    func_0x00010bfcd920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126bfba8;
      _objc_alloc(PTR_PTR_1126bfba8);
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(puVar1 + 0x10);
      _objc_retain(uVar4);
      func_0x00010c0541c0(puVar2,param_2,uVar3,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c2004e0(puVar2,param_2,0);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058d1304; end: 1058d13f7; -[SCMemoriesCachingMediaHelper .cxx_destruct] */

void FUN_1058d1304(long param_1)

{
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



/* Entry: 1058d13f8; end: 1058d173b; -[SCMemoriesCachingMediaHelperServiceProvider _buildCachingMediaHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d13f8(long param_1,undefined8 param_2)

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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_b8;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126bfbb8;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1058d173c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_78 = 0;
    lVar14 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_11272bae0;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_11272bae4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272bae8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar15;
  func_0x00010bf24e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272baec;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar16;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_b8 = 0;
    lVar17 = 0;
  }
  else {
    uStack_b8 = param_1 + _DAT_11272baf0;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_11272bb00;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar17;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272baf4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272baf8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar19;
  func_0x00010bf2fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_1058d173c();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf30560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272bafc;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272bb04;
    _objc_loadWeakRetained();
  }
  func_0x00010c05e780(puVar1,param_2,lVar3,uStack_78,lVar4,lVar5,lVar6,uStack_b8,lVar7,lVar8,lVar9,
                      lVar12,lVar13,param_1);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(uStack_b8);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(uStack_78);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058d173c; end: 1058d175f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d173c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272badc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058d1760; end: 1058d1803; -[SCMemoriesCachingMediaHelperServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d1760(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bb04);
  _objc_destroyWeak(param_1 + _DAT_11272bb00);
  _objc_destroyWeak(param_1 + _DAT_11272bafc);
  _objc_destroyWeak(param_1 + _DAT_11272baf8);
  _objc_destroyWeak(param_1 + _DAT_11272baf4);
  _objc_destroyWeak(param_1 + _DAT_11272baf0);
  _objc_destroyWeak(param_1 + _DAT_11272baec);
  _objc_destroyWeak(param_1 + _DAT_11272bae8);
  _objc_destroyWeak(param_1 + _DAT_11272bae4);
  _objc_destroyWeak(param_1 + _DAT_11272bae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272badc);
  return;
}



/* Entry: 1058d1804; end: 1058d1a37; -[SCMemoriesCachingMediaManager initWithCacheURL:galleryLogger:streamingEntityProviderPlugInScopeExposer:coreConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1058d1804(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  long lStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar8 = param_3;
  _objc_retain();
  func_0x00010b6fb228();
  if (lVar8 == 1) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100088750();
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    puVar4 = puVar2;
    func_0x00010bf0e860(puVar2,param_2,puVar3,&lStack_68);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_68;
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar8 = 0x80;
    if ((puVar4 != (undefined *)0x0) && (lVar1 == 0)) {
      puVar2 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,*(undefined8 *)PTR__NSFileSystemSize_110345468);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c282800();
      _objc_release(puVar2);
      puVar2 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,*(undefined8 *)PTR__NSFileSystemFreeSize_110345458);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c282800();
      _objc_release(puVar2);
      dVar9 = (double)((ulong)puVar3 >> 7);
      if ((double)puVar5 * 0.2 <= (double)((ulong)puVar3 >> 7)) {
        dVar9 = (double)puVar5 * 0.2;
      }
      uVar7 = (ulong)dVar9;
      if (uVar7 < 0x8000001) {
        uVar7 = 0x8000000;
      }
      if (0x3fffffff < uVar7) {
        uVar7 = 0x40000000;
      }
      lVar8 = (long)((double)uVar7 / 1048576.0);
    }
    _objc_release(puVar4);
  }
  else {
    lVar8 = 0xa0;
  }
  uVar6 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bffa9c0(param_1,param_2,param_3,lVar8,&PTR____CFConstantStringClassReference_110e0a778
                      ,uVar6,param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar6);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + _DAT_11272bb08) = 0;
    lVar8 = (long)_DAT_11272bb0c;
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = param_5;
    _objc_release(uVar6);
    func_0x00010be0d440(param_1);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 1058d1a38; end: 1058d1b1b; -[SCMemoriesCachingMediaManager _exposeStreamingEntityProviderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d1a38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  _dispatch_group_create();
  lVar3 = (long)_DAT_11272bb10;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  _dispatch_group_enter(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272bb0c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf9d5c0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1058d1b1c; end: 1058d1b67;  */

void FUN_1058d1b1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bfbc0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058d1b68; end: 1058d1cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d1b68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x23;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    unaff_x23 = (long)_DAT_11272bb08;
    _os_unfair_lock_lock(param_1 + unaff_x23);
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c246cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11272bb14);
    *(undefined8 *)(param_1 + _DAT_11272bb14) = uVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + _DAT_11272bb10));
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + unaff_x23);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + unaff_x23);
  __Unwind_Resume(param_2);
  func_0x00010c134ca0();
  return;
}



/* Entry: 1058d1cbc; end: 1058d1cfb; -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:resultHandler:] */

void FUN_1058d1cbc(void)

{
  func_0x00010c134ca0();
  return;
}



/* Entry: 1058d1cfc; end: 1058d1e2b; -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:resultHandler:] */

void FUN_1058d1cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bfbc8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf586e0(puVar1,param_4,param_9,0,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                      param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1058d1e2c; end: 1058d1f37; -[SCMemoriesCachingMediaManager _requestSnap:cancelableGroup:gallerySnap:handler:queue:requestOptions:snapDetail:targetSize:] */

void FUN_1058d1e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd8360(param_1,param_2,param_5,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134c80(*param_10,param_10[1],param_1,param_2,lVar1,param_8,param_7,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  if (param_1 != 0) {
    func_0x00010bef7460(param_4,param_2,param_1);
  }
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058d1f38; end: 1058d2037; -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:requestOptions:queue:cacheMissHandler:resultHandler:] */

void FUN_1058d1f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_12);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1058d2038;
  puStack_80 = &UNK_1108bd0c0;
  uStack_78 = param_12;
  _objc_retain(param_12);
  func_0x00010be909c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1058d2038; end: 1058d2043;  */

void FUN_1058d2038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d2040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058d2044; end: 1058d215f; -[SCMemoriesCachingMediaManager requestCachingMediaForSnap:targetSize:orientation:scaleMalibu:deliveryMode:shouldCacheMediaInMemory:queue:cacheMissHandler:finalResultHandler:] */

void FUN_1058d2044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bfbc8;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_5);
  func_0x00010bf586e0(puVar1,param_4,param_8,0,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be909c0(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7,puVar1,param_10,
                      param_11,param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1058d2160; end: 1058d24b7; -[SCMemoriesCachingMediaManager _requestCachingMediaForSnap:snapDetail:targetSize:orientation:scaleMalibu:requestOptions:queue:cacheMissHandler:finalResultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2160(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_1;
  uStack_80 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar4 = (long)_DAT_11272bb08;
  _os_unfair_lock_lock(param_3 + lVar4);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1058d24b8;
  puStack_c0 = &UNK_1108bd150;
  uStack_90 = param_7;
  _objc_retain(param_5);
  uStack_98 = uStack_80;
  uStack_a0 = uStack_88;
  uStack_b8 = param_5;
  uStack_8f = param_8;
  _objc_retain(param_10);
  uStack_b0 = param_10;
  _objc_retain(param_12);
  uStack_a8 = param_12;
  ppuVar1 = &puStack_d8;
  _objc_retainBlock();
  lVar6 = (long)_DAT_11272bb14;
  func_0x00010bf529e0(*(undefined8 *)(param_3 + lVar6));
  puVar2 = PTR_PTR_1126bfbd8;
  _objc_alloc_init();
  lVar6 = *(long *)(param_3 + lVar6);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    _objc_initWeak(auStack_e0,param_3);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11272bb10);
    uVar3 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_1058d28cc;
    puStack_138 = &UNK_1108bd180;
    _objc_copyWeak(auStack_f8,auStack_e0);
    _objc_retain(param_11);
    uStack_108 = param_11;
    _objc_retain(puVar2);
    puStack_130 = puVar2;
    _objc_retain(param_5);
    uStack_128 = param_5;
    _objc_retain(ppuVar1);
    ppuStack_100 = ppuVar1;
    _objc_retain(param_10);
    uStack_120 = param_10;
    _objc_retain(param_9);
    uStack_118 = param_9;
    _objc_retain(param_6);
    uStack_e8 = uStack_80;
    uStack_f0 = uStack_88;
    uStack_110 = param_6;
    func_0x000100bc0718(uVar5,uVar3,&puStack_150);
    _objc_release(uVar3);
    uVar3 = uStack_110;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(ppuStack_100);
    _objc_release(uStack_128);
    _objc_release(puStack_130);
    _objc_release(uStack_108);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_e0);
  }
  else {
    func_0x00010be918a0(param_3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _os_unfair_lock_unlock(param_3 + lVar4);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058d24b8; end: 1058d271b;  */

void FUN_1058d24b8(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined1 param_5,
                  undefined1 param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bfbd0;
  _objc_opt_class(PTR_PTR_1126bfbd0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1058d27f4;
    puStack_d8 = &UNK_1108bd120;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uStack_d0 = param_3;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uStack_c8 = uVar5;
    _objc_retain(uVar4);
    uStack_c0 = uVar4;
    uStack_b8 = param_4;
    uStack_b0 = param_5;
    uStack_af = param_6;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_f0);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    uVar3 = uStack_d0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf51e00();
    func_0x00010c200ac0();
    func_0x00010c0ed100();
    func_0x00010c1d7940(uVar3);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x000109023acc();
    if (iVar1 != 0) {
      param_1 = *(double *)(param_2 + 0x38);
    }
    func_0x00010c1f6100(uVar3);
    dVar7 = 1.0;
    if (*(char *)(param_2 + 0x49) == '\x01') {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x000109023c14();
      if (iVar1 != 0) {
        func_0x000109023c78(*(undefined8 *)(param_2 + 0x20));
        dVar7 = 1.0 / param_1;
      }
    }
    func_0x00010bf529e0(uVar3);
    func_0x00010c1f6020(dVar7,uVar3);
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1058d271c;
    puStack_90 = &UNK_1108bd120;
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uStack_88 = uVar3;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uStack_80 = uVar6;
    _objc_retain(uVar5);
    uStack_78 = uVar5;
    uStack_70 = param_4;
    uStack_68 = param_5;
    uStack_67 = param_6;
    _objc_retain(uVar3);
    func_0x00010007380c(uVar4,&puStack_a8);
    _objc_release(uVar4);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1058d271c; end: 1058d27d7;  */

void FUN_1058d271c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6be0(uVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1058d27d8;
  puStack_58 = &UNK_1108bd0f0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined2 *)(param_1 + 0x40);
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 1058d27d8; end: 1058d27f3;  */

void FUN_1058d27d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x39));
  return;
}



/* Entry: 1058d27f4; end: 1058d28af;  */

void FUN_1058d27f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6be0(uVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1058d28b0;
  puStack_58 = &UNK_1108bd0f0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined2 *)(param_1 + 0x40);
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 1058d28b0; end: 1058d28cb;  */

void FUN_1058d28b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d28c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x39));
  return;
}



/* Entry: 1058d28cc; end: 1058d2957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d28cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = (long)_DAT_11272bb08;
    _os_unfair_lock_lock(lVar1 + lVar2);
    func_0x00010be918a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        param_1 + 0x60);
    _os_unfair_lock_unlock(lVar1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058d2958; end: 1058d2a03; -[SCMemoriesCachingMediaManager isLiveRenderSnap:] */

long FUN_1058d2958(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c0d73c0(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1058d2a04; end: 1058d2b5b; -[SCMemoriesCachingMediaManager _cachingMediaGallerySnapForGallerySnap:snapDetail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_140;
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
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11272bb14;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar3));
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        lVar1 = *(long *)(lStack_118 + lVar5 * 8);
        func_0x00010bf277a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) goto LAB_1058d2b08;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar1 = 0;
LAB_1058d2b08:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1058d2b5c;
    puStack_138 = PTR_PTR_1126eabe8;
    uStack_140 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&uStack_140,PTR_s_cleanUpCacheWithQueue_block__1125ac190);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058d2b5c; end: 1058d2b8f; -[SCMemoriesCachingMediaManager cleanUpCacheWithQueue:block:] */

void FUN_1058d2b5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_cleanUpCacheWithQueue_block__1125ac190);
  return;
}



/* Entry: 1058d2b90; end: 1058d2bc3; -[SCMemoriesCachingMediaManager totalSizeOfCacheFilesWithQueue:handler:] */

void FUN_1058d2b90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_totalSizeOfCacheFilesWithQueue_h_11267b508);
  return;
}



/* Entry: 1058d2bc4; end: 1058d2bf7; -[SCMemoriesCachingMediaManager handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_1058d2bc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_handleEmergencyDiskConditionWith_1125d1d88);
  return;
}



/* Entry: 1058d2bf8; end: 1058d2c33; -[SCMemoriesCachingMediaManager kindName] */

void FUN_1058d2bf8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_kindName_1125ff640);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058d2c34; end: 1058d2c67; -[SCMemoriesCachingMediaManager removeAllUserSessionDataAsync] */

void FUN_1058d2c34(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_removeAllUserSessionDataAsync_112628680);
  return;
}



/* Entry: 1058d2c68; end: 1058d2c9b; -[SCMemoriesCachingMediaManager removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_1058d2c68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_removeExpiredContentAsyncForReas_112628ab0);
  return;
}



/* Entry: 1058d2c9c; end: 1058d2cd7; -[SCMemoriesCachingMediaManager reportMetrics] */

void FUN_1058d2c9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eabe8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_reportMetrics_11262a6e8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058d2cd8; end: 1058d2d67; -[SCMemoriesCachingMediaManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2cd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272bb10,0);
  _objc_storeStrong(param_1 + _DAT_11272bb14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272bb0c,0);
  return;
}



/* Entry: 1058d2d68; end: 1058d2de7; +[SCMemoriesCachingMediaServiceProvider _cacheURL] */

void FUN_1058d2d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  puVar2 = puVar1;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee840(puVar1,param_2,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058d2de8; end: 1058d2eef; -[SCMemoriesCachingMediaServiceProvider _cachingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2de8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126bfbe8;
  _objc_alloc(PTR_PTR_1126bfbe8);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bdd7e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272bb18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272bb1c);
  param_1 = param_1 + _DAT_11272bb20;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa9e0(puVar1,param_2,lVar2,lVar4,uVar7,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058d2ef0; end: 1058d2f43; -[SCMemoriesCachingMediaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2ef0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272bb1c,0);
  _objc_destroyWeak(param_1 + _DAT_11272bb20);
  _objc_destroyWeak(param_1 + _DAT_11272bb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bb24);
  return;
}



/* Entry: 1058d2f44; end: 1058d32ab; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d2f44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  
  lVar1 = param_1 + _DAT_11272bb28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfbf0;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11272bb2c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272bb30;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272bb34;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272bb38;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272bb3c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11272bb40;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11272bb44;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272bb48;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272bb4c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272bb50;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272bb54;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11272bb58;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c0c99c0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272bb5c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272bb60;
  _objc_loadWeakRetained();
  func_0x00010c05dd60(puVar3,param_2,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar19,lVar21,
                      lVar23,lVar25,lVar27,lVar29,param_1);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
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
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058d32ac; end: 1058d338b; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d32ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bb60);
  _objc_destroyWeak(param_1 + _DAT_11272bb50);
  _objc_destroyWeak(param_1 + _DAT_11272bb5c);
  _objc_destroyWeak(param_1 + _DAT_11272bb54);
  _objc_destroyWeak(param_1 + _DAT_11272bb40);
  _objc_destroyWeak(param_1 + _DAT_11272bb44);
  _objc_destroyWeak(param_1 + _DAT_11272bb64);
  _objc_destroyWeak(param_1 + _DAT_11272bb3c);
  _objc_destroyWeak(param_1 + _DAT_11272bb38);
  _objc_destroyWeak(param_1 + _DAT_11272bb34);
  _objc_destroyWeak(param_1 + _DAT_11272bb4c);
  _objc_destroyWeak(param_1 + _DAT_11272bb58);
  _objc_destroyWeak(param_1 + _DAT_11272bb48);
  _objc_destroyWeak(param_1 + _DAT_11272bb30);
  _objc_destroyWeak(param_1 + _DAT_11272bb2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bb28);
  return;
}



/* Entry: 1058d338c; end: 1058d36a3; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderPlugin initWithUserSession:memoriesThumbnailLogger:galleryLogger:memoriesCloudFS:dataObjectContext:galleryEncryptedDatabase:keyService:memoriesCachingMediaHelper:circumstanceEngine:memoriesExperimentService:userTrackedLogger:memoriesSnapDocThumbnailGenerator:snapDocDownloadingService:liveRenderingMetricsRecorder:] */

undefined8 *
FUN_1058d338c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126eabf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 1058d36a4; end: 1058d36ab; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderPlugin priority] */

undefined8 FUN_1058d36a4(void)

{
  return 0;
}



/* Entry: 1058d36ac; end: 1058d3773; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderPlugin cachingMediaStreamingEntityForGallerySnap:snapDetail:] */

void FUN_1058d36ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bfbf8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c047080(puVar1,param_2,param_3,param_4,lVar2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058d3774; end: 1058d382f; -[SCMemoriesCachingMediaStreamingDefaultEntityProviderPlugin .cxx_destruct] */

void FUN_1058d3774(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1058d3830; end: 1058d3c37; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d3830(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11272bba0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfc00;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11272bba4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272bba8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar18;
  func_0x00010c0c9ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272bbc0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar19;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272bbc4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar20;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11272bbc8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar21;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11272bbd8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar22;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272bbd0;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar23;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11272bbac;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar24;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
    lVar25 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11272bbb4;
    _objc_loadWeakRetained();
    lVar25 = param_1 + _DAT_11272bbb8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar25;
  func_0x00010c0c9cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11272bbbc;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11272bbd4;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + _DAT_11272bbb0;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010c0c99c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dd80(puVar3,param_2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar28,lVar12
                      ,lVar13,lVar14,lVar16);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar27);
  _objc_release(lVar13);
  _objc_release(lVar26);
  _objc_release(lVar12);
  _objc_release(lVar25);
  _objc_release(lVar28);
  _objc_release(lVar11);
  _objc_release(lVar24);
  _objc_release(lVar10);
  _objc_release(lVar23);
  _objc_release(lVar9);
  _objc_release(lVar22);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058d3c38; end: 1058d3d0b; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d3c38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bbd8);
  _objc_destroyWeak(param_1 + _DAT_11272bbd4);
  _objc_destroyWeak(param_1 + _DAT_11272bbd0);
  _objc_destroyWeak(param_1 + _DAT_11272bbcc);
  _objc_destroyWeak(param_1 + _DAT_11272bbc8);
  _objc_destroyWeak(param_1 + _DAT_11272bbc4);
  _objc_destroyWeak(param_1 + _DAT_11272bbc0);
  _objc_destroyWeak(param_1 + _DAT_11272bbbc);
  _objc_destroyWeak(param_1 + _DAT_11272bbb8);
  _objc_destroyWeak(param_1 + _DAT_11272bbb4);
  _objc_destroyWeak(param_1 + _DAT_11272bbb0);
  _objc_destroyWeak(param_1 + _DAT_11272bbac);
  _objc_destroyWeak(param_1 + _DAT_11272bba8);
  _objc_destroyWeak(param_1 + _DAT_11272bba4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bba0);
  return;
}



/* Entry: 1058d3d0c; end: 1058d3fd3; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderPlugin initWithUserSession:memoriesThumbnailLogger:galleryLogger:memoriesCloudFS:dataObjectContext:galleryEncryptedDatabase:keyService:memoriesCachingMediaHelper:spectaclesAuxiliaryContentServices:spectaclesContentDataSource:circumstanceEngine:userTrackedLogger:memoriesSnapDocThumbnailGenerator:] */

undefined8 *
FUN_1058d3d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126eabf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 1058d3fd4; end: 1058d3fdb; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderPlugin priority] */

undefined8 FUN_1058d3fd4(void)

{
  return 1;
}



/* Entry: 1058d3fdc; end: 1058d40bb; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderPlugin cachingMediaStreamingEntityForGallerySnap:snapDetail:] */

void FUN_1058d3fdc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    puVar2 = PTR_PTR_1126bfc08;
    _objc_alloc(PTR_PTR_1126bfc08);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0470a0(puVar2,param_2,param_3,param_4,lVar1,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68));
    _objc_release(lVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058d40bc; end: 1058d416b; -[SCMemoriesCachingMediaStreamingSpectaclesEntityProviderPlugin .cxx_destruct] */

void FUN_1058d40bc(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1058d416c; end: 1058d42e7;  */

void FUN_1058d416c(undefined *param_1,undefined *param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  if (param_1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else if (param_4 == 0) {
    if (param_2 == (undefined *)0x0 && param_3 == 0) {
      _objc_retain(param_1);
      puVar3 = param_1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      if (param_3 != 0) {
        func_0x00010befa120(puVar2);
      }
      if (param_2 != (undefined *)0x0) {
        func_0x00010befa120(puVar2);
      }
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c23d0a0(param_1);
      func_0x00010bfe6d00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  else {
    func_0x00010c23d0a0(param_1);
    puVar3 = param_2;
    func_0x00010854478c(param_2,param_3,param_1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058d42e8; end: 1058d4463;  */

void FUN_1058d42e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2433e0(param_3);
  uVar9 = param_1;
  uVar11 = param_2;
  func_0x00010bf4d5e0(param_3);
  uVar10 = uVar9;
  uVar12 = uVar11;
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  lVar1 = param_3;
  func_0x00010bf2a8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c249840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07f180();
  lVar4 = param_3;
  func_0x00010c249840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c06fa00();
  lVar6 = param_3;
  func_0x00010c249840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = lVar6;
  func_0x00010c07cce0(lVar6);
  uVar8 = param_4;
  func_0x000107ff985c(param_1,param_2,uVar9,uVar11,uVar10,uVar12,param_4,lVar1 != 0,lVar3,lVar5,
                      lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1058d4464; end: 1058d4507;  */

void FUN_1058d4464(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_2;
  FUN_1058d42e8(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27dd80();
  if (puVar2 + -1 < (undefined *)0x2) {
    param_2 = PTR_PTR_1126bf720;
    func_0x00010bf5c6a0(0x7ff0000000000000,PTR_PTR_1126bf720);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_1);
    param_2 = param_1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1058d4508; end: 1058d461f; -[SCMemoriesSnapDocThumbnailGenerator generateTimelineThumbnailsWithSnapDoc:snapInfo:includeOverlay:performer:completion:] */

void FUN_1058d4508(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010bfd6880();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0d73c0();
    if ((int)uVar1 == 0) {
LAB_1058d45d0:
      func_0x00010be1b440(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      goto LAB_1058d45ec;
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdc300();
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010c0d73c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) goto LAB_1058d45d0;
    }
    else {
      _objc_release(uVar1);
    }
  }
  func_0x00010bf4d5e0(param_4);
  func_0x00010be1c280(param_1,param_2,param_3,param_6,param_7);
LAB_1058d45ec:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058d4620; end: 1058d4df7; -[SCMemoriesSnapDocThumbnailGenerator _generateLegacyTimelineThumbnailsWithSnapDoc:snapInfo:includeOverlay:performer:completion:] */

void FUN_1058d4620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  long lStack_440;
  undefined *puStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined1 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_80 = 0;
  uVar4 = uVar11;
  func_0x00010c0bc460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lStack_80;
  _objc_retain(lStack_80);
  _objc_release(uVar11);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb7e0();
    _objc_release(uVar5);
    uVar5 = uVar11;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0018;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840();
    _objc_release(uVar7);
    lStack_88 = 0;
    puVar8 = puVar6;
    func_0x00010c13e8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_88;
    _objc_retain(lStack_88);
    puVar9 = (undefined *)0x0;
    if ((lVar2 == 0) && (puVar8 != (undefined *)0x0)) {
      puVar9 = PTR_PTR_1126bcdd8;
      _objc_alloc();
      func_0x00010c0206e0();
    }
    puVar10 = puVar9;
    _dispatch_group_create();
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_1058d4df8;
    uStack_98 = 0x1058d4e08;
    uStack_90 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x2020000000;
    uStack_c0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_1058d4df8;
    uStack_e8 = 0x1058d4e08;
    uStack_e0 = 0;
    puStack_130 = &uStack_138;
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_1058d4df8;
    uStack_118 = 0x1058d4e08;
    uStack_110 = 0;
    puStack_160 = &uStack_168;
    uStack_168 = 0;
    uStack_158 = 0x3032000000;
    pcStack_150 = FUN_1058d4df8;
    uStack_148 = 0x1058d4e08;
    uStack_140 = 0;
    uStack_198 = 0;
    uStack_188 = 0x3032000000;
    pcStack_180 = FUN_1058d4df8;
    uStack_178 = 0x1058d4e08;
    uStack_170 = 0;
    uStack_1c8 = 0;
    uStack_1b8 = 0x3032000000;
    pcStack_1b0 = FUN_1058d4df8;
    uStack_1a8 = 0x1058d4e08;
    uStack_1a0 = 0;
    uStack_1f8 = 0;
    uStack_1e8 = 0x3032000000;
    pcStack_1e0 = FUN_1058d4df8;
    uStack_1d8 = 0x1058d4e08;
    uStack_1d0 = 0;
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puStack_1f0 = &uStack_1f8;
    puStack_1c0 = &uStack_1c8;
    puStack_190 = &uStack_198;
    _objc_retain(uVar12);
    _dispatch_group_enter(puVar10);
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_1058d4e10;
    puStack_258 = &UNK_1108bd1e0;
    puStack_238 = &uStack_108;
    _objc_retain(puVar10);
    puStack_228 = &uStack_138;
    puStack_220 = &uStack_b8;
    puStack_218 = &uStack_d8;
    puStack_250 = puVar10;
    lStack_248 = param_1;
    puStack_230 = &uStack_168;
    puStack_210 = &uStack_198;
    _objc_retain(uVar12);
    uStack_240 = uVar12;
    puStack_208 = &uStack_1c8;
    puStack_200 = &uStack_1f8;
    func_0x00010c13e880(puVar6);
    _dispatch_group_enter(puVar10);
    uStack_2a0 = 0;
    uStack_290 = 0x3032000000;
    pcStack_288 = FUN_1058d4df8;
    uStack_280 = 0x1058d4e08;
    uStack_278 = 0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3032000000;
    pcStack_2b8 = FUN_1058d4df8;
    uStack_2b0 = 0x1058d4e08;
    uStack_2a8 = 0;
    puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_310 = 0xc2000000;
    pcStack_308 = FUN_1058d52d0;
    puStack_300 = &UNK_1108bd240;
    puStack_2c8 = &uStack_2d0;
    puStack_298 = &uStack_2a0;
    _objc_retain(param_6);
    uStack_2f8 = param_6;
    puStack_2e0 = &uStack_2d0;
    puStack_2d8 = &uStack_2a0;
    _objc_retain(uVar12);
    uStack_2f0 = uVar12;
    _objc_retain(puVar10);
    puStack_2e8 = puVar10;
    func_0x00010c13e8c0(puVar6);
    _dispatch_group_enter(puVar10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0;
    uStack_338 = 0x3032000000;
    pcStack_330 = FUN_1058d4df8;
    uStack_328 = 0x1058d4e08;
    uStack_320 = 0;
    uStack_378 = 0;
    uStack_368 = 0x3032000000;
    pcStack_360 = FUN_1058d4df8;
    uStack_358 = 0x1058d4e08;
    uStack_350 = 0;
    puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3a8 = 0xc2000000;
    pcStack_3a0 = FUN_1058d54cc;
    puStack_398 = &UNK_1108b8c30;
    puStack_370 = &uStack_378;
    puStack_340 = &uStack_348;
    _objc_retain(puVar10);
    puStack_390 = puVar10;
    puStack_388 = &uStack_348;
    puStack_380 = &uStack_378;
    func_0x00010c13e8a0(puVar6);
    uVar7 = param_6;
    func_0x00010c11de00(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_460 = puVar1;
    uStack_458 = 0xc2000000;
    pcStack_450 = FUN_1058d556c;
    puStack_448 = &UNK_1108bd270;
    puStack_418 = &uStack_108;
    lStack_440 = lVar2;
    puStack_410 = &uStack_2d0;
    puStack_408 = &uStack_378;
    puStack_400 = &uStack_1c8;
    _objc_retain(param_7);
    puStack_3f8 = &uStack_138;
    puStack_3f0 = &uStack_198;
    puStack_3e8 = &uStack_2a0;
    puStack_3e0 = &uStack_348;
    puStack_3d8 = &uStack_1f8;
    puStack_3d0 = &uStack_d8;
    puStack_438 = puVar9;
    lStack_430 = param_1;
    lStack_420 = param_7;
    _objc_retain(param_4);
    puStack_3c8 = &uStack_b8;
    puStack_3c0 = &uStack_168;
    uStack_428 = param_4;
    uStack_3b8 = param_5;
    _objc_retain(puVar9);
    _objc_retain(lVar2);
    func_0x000100bc0718(puVar10,uVar7,&puStack_460);
    _objc_release(uVar7);
    _objc_release(uStack_428);
    _objc_release(puStack_438);
    _objc_release(lStack_420);
    _objc_release(lStack_440);
    _objc_release(puStack_390);
    __Block_object_dispose(&uStack_378,8);
    _objc_release(uStack_350);
    __Block_object_dispose(&uStack_348,8);
    _objc_release(uStack_320);
    _objc_release(puStack_2e8);
    _objc_release(uStack_2f0);
    _objc_release(uStack_2f8);
    __Block_object_dispose(&uStack_2d0,8);
    _objc_release(uStack_2a8);
    __Block_object_dispose(&uStack_2a0,8);
    _objc_release(uStack_278);
    _objc_release(uStack_240);
    _objc_release(puStack_250);
    _objc_release(uVar12);
    __Block_object_dispose(&uStack_1f8,8);
    _objc_release(uStack_1d0);
    __Block_object_dispose(&uStack_1c8,8);
    _objc_release(uStack_1a0);
    __Block_object_dispose(&uStack_198,8);
    _objc_release(uStack_170);
    __Block_object_dispose(&uStack_168,8);
    _objc_release(uStack_140);
    __Block_object_dispose(&uStack_138,8);
    _objc_release(uStack_110);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(puVar10);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar4);
  return;
}



/* Entry: 1058d4df8; end: 1058d4e0f;  */

void FUN_1058d4df8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058d4e10; end: 1058d518b;  */

void FUN_1058d4e10(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar9 = param_2;
    func_0x00010c2464e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if (lVar11 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar9 = param_2;
      func_0x00010c2464e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar7 = *(undefined8 *)(lVar11 + 0x28);
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar7);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = uVar7;
      _objc_release(uVar1);
      _objc_release(lVar9);
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) == 0 &&
          puVar10 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126bcdd8;
        _objc_alloc();
        func_0x00010c0206e0();
        lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 8);
        uVar1 = *(undefined8 *)(lVar9 + 0x28);
        *(undefined **)(lVar9 + 0x28) = puVar2;
        _objc_release(uVar1);
      }
    }
    lVar9 = param_2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar9 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_opt_class(uVar1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined **)(lVar9 + 0x28) = puVar2;
      _objc_release(uVar7);
      _objc_release(puVar3);
    }
    else {
      lVar9 = param_2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      *(long *)(lVar11 + 0x28) = lVar9;
    }
    _objc_release(uVar1);
    lVar9 = param_2;
    func_0x00010c0c6c20();
    *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = (int)lVar9;
    lVar9 = param_2;
    func_0x00010c0ef960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010c0ef960(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      uVar8 = *(undefined8 *)(lVar11 + 0x28);
      uVar1 = uVar7;
      func_0x00010c0ef880();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      uVar4 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = uVar8;
      _objc_release(uVar4);
      lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      uVar4 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = uVar1;
      _objc_release(uVar4);
      _objc_release(lVar9);
      _objc_release(uVar7);
    }
    lVar9 = param_2;
    func_0x00010bfc0e60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    uVar1 = *(undefined8 *)(lVar11 + 0x28);
    *(long *)(lVar11 + 0x28) = lVar9;
    _objc_release(uVar1);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar10);
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar9 + 0x28);
    *(long *)(lVar9 + 0x28) = param_3;
    _objc_release(uVar1);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar5 + 0x20));
  _objc_retain(*(undefined8 *)(lVar5 + 0x28));
  _objc_retain(*(undefined8 *)(lVar5 + 0x30));
  __Block_object_assign(param_2 + 0x38,*(undefined8 *)(lVar5 + 0x38),8);
  __Block_object_assign(param_2 + 0x40,*(undefined8 *)(lVar5 + 0x40),8);
  __Block_object_assign(param_2 + 0x48,*(undefined8 *)(lVar5 + 0x48),8);
  __Block_object_assign(param_2 + 0x50,*(undefined8 *)(lVar5 + 0x50),8);
  __Block_object_assign(param_2 + 0x58,*(undefined8 *)(lVar5 + 0x58),8);
  __Block_object_assign(param_2 + 0x60,*(undefined8 *)(lVar5 + 0x60),8);
  __Block_object_assign(param_2 + 0x68,*(undefined8 *)(lVar5 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_2 + 0x70,*(undefined8 *)(lVar5 + 0x70),8);
  return;
}



/* Entry: 1058d518c; end: 1058d52cf;  */

void FUN_1058d518c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 1058d52d0; end: 1058d54cb;  */

void FUN_1058d52d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1058d53dc;
  puStack_78 = &UNK_1108bd210;
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = param_4;
  uStack_68 = param_2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_90);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_4);
  return;
}



/* Entry: 1058d54cc; end: 1058d556b;  */

void FUN_1058d54cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  if (param_2 != 0 || param_5 != 0) {
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    if ((param_5 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(param_5);
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = param_5;
      _objc_release(uVar1);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1058d556c; end: 1058d5a3b;  */

void FUN_1058d556c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((((*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0) &&
       (*(long *)(param_1 + 0x20) == 0)) &&
      (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28) == 0)) &&
     ((*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) == 0 &&
      (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) == 0)))) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
    func_0x000107ff7f70(lVar2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28);
    if (lVar10 == 0) {
      lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28);
    }
    _objc_retain(lVar10);
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x28);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_90 = 0;
    func_0x000107ff8530(lVar11,uVar3,&lStack_90);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_90;
    _objc_retain(lStack_90);
    _objc_release(uVar3);
    puVar12 = (undefined *)0x0;
    if ((lVar11 != 0) && (lVar1 == 0)) {
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1c60;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_70 = lVar11;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x18) == 2) {
      lVar9 = *(long *)(param_1 + 0x30) + 8;
      _objc_loadWeakRetained(lVar9);
      lVar13 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined **)(param_1 + 0x40);
      _objc_retain(puVar4);
      func_0x00010bfbf320(lVar13);
      _objc_release(lVar13);
      _objc_release(lVar9);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc();
      func_0x00010c0082a0();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar4 == (undefined *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(uVar3);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_80 = &PTR____CFConstantStringClassReference_110e0a7f8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 8);
        uVar8 = *(undefined8 *)(lVar9 + 0x28);
        *(undefined **)(lVar9 + 0x28) = puVar6;
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(uVar3);
      }
      lVar9 = *(long *)(param_1 + 0x30) + 8;
      _objc_loadWeakRetained(lVar9);
      lVar13 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar13;
      func_0x00010bfbf360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar9);
      lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      if ((lVar9 == 0) && (lVar9 = *(long *)(param_1 + 0x20), lVar9 == 0)) {
        lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x28);
        _objc_retain(lVar9);
        lVar13 = lVar9;
        if (lVar9 == 0) {
          lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
          if (lVar13 == 0) {
            lVar9 = 0;
            lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
          }
          else {
            lVar9 = 0;
          }
        }
      }
      else {
        _objc_retain(lVar9);
        lVar13 = lVar9;
      }
      _objc_retain(lVar13);
      _objc_release(lVar9);
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),lVar7,lVar13);
      _objc_release(lVar13);
      _objc_release(lVar7);
    }
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0001058d5628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001058d5a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058d5a3c; end: 1058d5a47;  */

void FUN_1058d5a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058d5a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1058d5a48; end: 1058d5c23;  */

void FUN_1058d5a48(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
  return;
}



/* Entry: 1058d5c24; end: 1058d5db3; -[SCMemoriesSnapDocThumbnailGenerator _generateThumbnailWithSnapEditorSnapDoc:width:performer:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001058d5cc4) */

void FUN_1058d5c24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0bc460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(param_4);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c26db60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c297280(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(0);
    param_4 = uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1058d5db4; end: 1058d5e1b;  */

void FUN_1058d5db4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058d5ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    return;
  }
  _UIImageJPEGRepresentation(0x3fe0000000000000,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d5e1c; end: 1058d5e8f; -[SCMemoriesSnapDocThumbnailGenerator .cxx_destruct] */

void FUN_1058d5e1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1058d5e90; end: 1058d5f03; -[SCMemoriesCachingMediaStreamingEntityProviderScope initWithPlugInRegistry:] */

undefined1 * FUN_1058d5e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eac08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058d5f04; end: 1058d5f0b; -[SCMemoriesCachingMediaStreamingEntityProviderScope plugInRegistry] */

undefined8 FUN_1058d5f04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058d5f0c; end: 1058d5f17; -[SCMemoriesCachingMediaStreamingEntityProviderScope .cxx_destruct] */

void FUN_1058d5f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058d5f18; end: 1058d6023; -[SCMemoriesNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_1058d5f18(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07c5e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c11c420();
    if (uVar1 == 0x5e) {
LAB_1058d5f5c:
      uVar5 = 4;
      goto LAB_1058d5f60;
    }
    uVar1 = param_3;
    func_0x00010c11c420();
    if (uVar1 == 0xbc) {
      uVar1 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        lVar3 = param_1;
        func_0x00010be20d00(param_1,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uVar4 = *(ulong *)(param_1 + 0x30);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar4;
          func_0x00010bf6ade0();
          _objc_release(uVar4);
          _objc_release(uVar2);
          if ((uVar1 & 1) != 0) goto LAB_1058d5f5c;
        }
        else {
          _objc_release();
          _objc_release(uVar2);
        }
      }
    }
  }
  uVar5 = 0;
LAB_1058d5f60:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1058d6024; end: 1058d630b; -[SCMemoriesNotificationProcessor processNotification:] */

void FUN_1058d6024(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  if (uVar1 == 0) goto LAB_1058d625c;
  uVar1 = param_3;
  func_0x00010c11c420();
  if (uVar1 == 0xbc) {
    func_0x00010bed0300(param_1);
    goto LAB_1058d625c;
  }
  uVar1 = param_3;
  func_0x00010c11c420();
  if ((uVar1 == 0x5e) && (uVar1 = param_3, func_0x00010c07c5e0(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
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
    if (uVar2 == 0) {
LAB_1058d61c8:
      func_0x00010be770e0(param_1);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf2d860();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) goto LAB_1058d61c8;
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bfd7040(uVar6);
      _objc_release(uVar6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c26a060();
  if (((uVar1 == 7) || (uVar1 = param_3, func_0x00010c26a060(), uVar1 == 0xe)) ||
     (uVar1 = param_3, func_0x00010c26a060(), uVar1 == 0x10)) {
    uVar1 = param_3;
    func_0x00010c11c420();
    if (uVar1 - 0x77 < 2) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1da0();
    }
    else {
      if ((uVar1 != 0x5e) || (uVar1 = param_3, func_0x00010c07c5e0(), (uVar1 & 1) != 0))
      goto LAB_1058d625c;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf05240(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c172fe0(uVar6);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a40();
      _objc_release(uVar5);
    }
    _objc_release(uVar6);
  }
LAB_1058d625c:
  _objc_release(param_3);
  return;
}


