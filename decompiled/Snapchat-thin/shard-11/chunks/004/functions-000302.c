/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085c2228; end: 1085c2243; -[SCTDirectChatPresenceController _createPillView] */

void FUN_1085c2228(void)

{
  _objc_opt_new(PTR_PTR_1126da4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c2244; end: 1085c28eb; -[SCTDirectChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c2244(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  double dStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  ulong uStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    bVar1 = false;
    uStack_188 = 0;
    plVar12 = (long *)(param_5 + _DAT_112776f5c);
    lVar4 = *plVar12;
LAB_1085c23e8:
    if ((lVar4 == 0) || (bVar1)) goto LAB_1085c242c;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar4);
    bVar1 = false;
    lVar4 = *plVar12;
    *plVar12 = 0;
  }
  else {
    uStack_188 = param_7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    plVar12 = (long *)(param_5 + _DAT_112776f5c);
    lVar4 = *plVar12;
    bVar1 = uStack_188 != 0;
    if (lVar4 != 0 || uStack_188 == 0) goto LAB_1085c23e8;
    lVar4 = param_5;
    func_0x00010bdf10a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *plVar12;
    *plVar12 = lVar4;
    _objc_release(lVar11);
    lVar4 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *plVar12;
    func_0x00010c0fbcc0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4);
    _objc_release(lVar11);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bea4b00();
    if ((int)lVar4 != 0) {
      func_0x00010be9b8a0(param_5);
    }
    lVar4 = *plVar12;
    func_0x00010c0fbcc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010c0b6f80(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar11);
    bVar1 = true;
  }
  _objc_release(lVar4);
LAB_1085c242c:
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  lVar11 = param_5;
  dVar14 = param_1;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar15 = dVar14;
  _objc_release(lVar11);
  _objc_release(lVar4);
  if (param_1 != dVar14) {
    lVar4 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar11 = param_5;
    dVar14 = dVar15;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    func_0x00010bc85050(dVar15,param_2,param_3,param_4,dVar14);
    lVar5 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar15,param_2,param_3,param_4);
    _objc_release(lVar5);
    _objc_release(lVar11);
    _objc_release(lVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_5 + _DAT_112776f60) != 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar15 = 1.60807493534087e-314;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085c28ec;
    puStack_a0 = &UNK_1109101a8;
    lStack_98 = param_5;
    _objc_retain(uVar2);
    ppuVar7 = &puStack_b8;
    uStack_90 = uVar2;
    _objc_retainBlock(ppuVar7);
    func_0x00010befa120(puVar6);
    _objc_release(ppuVar7);
    _objc_release(uStack_90);
  }
  puVar8 = PTR_PTR_1126da4d8;
  func_0x00010c0fe180(uVar2);
  lVar4 = (long)_DAT_112776f58;
  func_0x00010c159240(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c27e300(uVar2);
  func_0x00010c082a20(uVar2);
  func_0x00010c083620(uVar2);
  func_0x00010c075460(uVar2);
  func_0x00010c252900();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  uVar9 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c0fbcc0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe07e0();
  dVar14 = dVar15;
  _objc_release(uVar9);
  puStack_e8 = puVar13;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1085c2948;
  puStack_d0 = &UNK_1109101a8;
  lStack_c8 = param_5;
  _objc_retain(puVar8);
  ppuVar7 = &puStack_e8;
  puStack_c0 = puVar8;
  _objc_retainBlock(ppuVar7);
  func_0x00010befa120(puVar6);
  _objc_release(ppuVar7);
  puVar10 = PTR_PTR_1126da4d8;
  dVar16 = dVar15;
  if (bVar1) {
    func_0x00010c0fe180();
    func_0x00010c159240(*plVar12);
    func_0x00010c27e300(uStack_188);
    func_0x00010c082a20(uStack_188);
    func_0x00010c083620(uStack_188);
    func_0x00010c075460(uStack_188);
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    func_0x00010c252900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *plVar12;
    func_0x00010c0fbcc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe07e0();
    _objc_release(lVar4);
    dVar16 = dVar14;
    if (dVar14 <= dVar15) {
      dVar16 = dVar15;
    }
    puStack_118 = puVar13;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1085c2964;
    puStack_100 = &UNK_1109101a8;
    lStack_f8 = param_5;
    puStack_f0 = puVar10;
    _objc_retain(puVar10);
    ppuVar7 = &puStack_118;
    _objc_retainBlock(ppuVar7);
    func_0x00010befa120(puVar6);
    _objc_release(ppuVar7);
    _objc_release(puStack_f0);
    _objc_release(puVar10);
  }
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1085c2980;
  puStack_130 = &UNK_1109101a8;
  puStack_148 = puVar13;
  lStack_128 = param_5;
  puStack_120 = puVar8;
  _objc_retain(puVar8);
  ppuVar7 = &puStack_148;
  _objc_retainBlock(ppuVar7);
  func_0x00010befa120(puVar6);
  _objc_release(ppuVar7);
  uStack_170 = 0xc2000000;
  uStack_168 = 0x1085c2aa4;
  puStack_160 = &UNK_110a59b60;
  ppuVar7 = &puStack_178;
  puStack_178 = puVar13;
  lStack_158 = param_5;
  dStack_150 = dVar16;
  _objc_retainBlock(ppuVar7);
  func_0x00010befa120(puVar6);
  _objc_release(ppuVar7);
  FUN_108617acc(puVar6,PTR___dispatch_main_q_11034be20,param_8);
  _objc_release(param_8);
  _objc_release(puStack_120);
  _objc_release(puStack_c0);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uStack_188);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 1085c28ec; end: 1085c2947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c28ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c079cc0(uVar2);
  func_0x00010bdcaf40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c2948; end: 1085c297f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c2948(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__animateParticipant_toPillState__112550558,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776f58),
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085c2980; end: 1085c2a5b;  */

void FUN_1085c2980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c07aac0(PTR_PTR_1126da4c0);
  func_0x00010bed9b40(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  func_0x00010c152fc0(0x3fb99999a0000000,puVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1085c2a5c; end: 1085c2a8f;  */

void FUN_1085c2a5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c2a90; end: 1085c2ab7;  */

void FUN_1085c2a90(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c2a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c2ab8; end: 1085c2c47; -[SCTDirectChatPresenceController _animatePeekingParticipant:toPeekingState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c2ab8(long param_1,undefined8 param_2,ulong param_3,int param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
LAB_1085c2b24:
    uVar1 = param_3;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c079cc0();
    _objc_release(uVar1);
    if (param_4 != (int)uVar2) {
      uVar1 = param_3;
      func_0x00010c0fbcc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03020();
      _objc_release(uVar1);
      if (param_4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112776f54);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a8c80(uVar3,param_2,2,0x22,0x17,uVar1,0,0,0,0);
        _objc_release(uVar1);
        _objc_release(uVar3);
      }
      uVar1 = param_3;
      func_0x00010c0fbcc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b33c0();
      _objc_release(uVar1);
      goto LAB_1085c2c24;
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) goto LAB_1085c2b24;
    uVar2 = param_3;
    func_0x00010bfd4a60();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_1085c2b24;
    func_0x00010be0ff40(param_1,param_2,param_3);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
LAB_1085c2c24:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c2c48; end: 1085c2f1f; -[SCTDirectChatPresenceController _animateParticipant:toPillState:completion:] */

void FUN_1085c2c48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c06d480();
  if ((int)puVar1 != 0) {
    func_0x00010be0ff40(param_1);
  }
  lVar2 = param_3;
  func_0x00010c0fbcc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d7280();
  if (((int)lVar3 == 0) || (puVar1 = PTR_PTR_1126da4c0, func_0x00010bfdb5a0(), (int)puVar1 == 0)) {
    puVar1 = PTR_PTR_1126da4c0;
    func_0x00010c06d480();
    if (((int)puVar1 == 0) || (lVar3 = param_3, func_0x00010c072da0(), (int)lVar3 == 0)) {
      lVar3 = lVar2;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c071ae0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        func_0x00010c288bc0(param_3);
        lVar3 = lVar2;
        func_0x00010c252440(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd5400();
        _objc_release(lVar3);
        lVar3 = param_3;
        func_0x00010bf1b660();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126da4c0;
        if (lVar3 == 0) {
          lVar4 = lVar2;
          func_0x00010c252440(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07aac0();
          if (((ulong)puVar1 & 1) == 0) {
            func_0x00010c06b5e0();
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        _objc_retain(param_5);
        func_0x00010bf03200(lVar2);
        _objc_release(param_5);
        goto LAB_1085c2ec4;
      }
    }
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    func_0x00010bf02c60(lVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
LAB_1085c2ec4:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c2f20; end: 1085c30a3;  */

void FUN_1085c2f20(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1085c2fac;
  puStack_30 = &UNK_110842e18;
  lStack_28 = lVar1;
  func_0x000108615acc(0x3ff8000000000000,PTR___dispatch_main_q_11034be20,&puStack_48);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085c30a4; end: 1085c3173; -[SCTDirectChatPresenceController _pillForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c30a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  _objc_retain(param_3);
  puVar3 = (ulong *)(param_1 + _DAT_112776f5c);
  uVar1 = *puVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = (ulong *)(param_1 + _DAT_112776f58);
    uVar1 = *puVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1085c3154;
    }
  }
  uVar2 = *puVar3;
  func_0x00010c0fbcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_1085c3154:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085c3174; end: 1085c31b3; -[SCTDirectChatPresenceController _orderedParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3174(long param_1,undefined8 param_2)

{
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                      *(undefined8 *)(param_1 + _DAT_112776f58));
  return;
}



/* Entry: 1085c31b4; end: 1085c32f3; -[SCTDirectChatPresenceController presenceBar:pointInside:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c31b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_5 + _DAT_112776f58);
  uVar3 = param_1;
  uVar5 = param_2;
  _objc_retain(param_7);
  func_0x00010c0fbcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar4 = uVar3;
  uVar6 = uVar5;
  uVar7 = param_3;
  uVar8 = param_4;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_5 + _DAT_112776f5c);
  if (lVar1 != 0) {
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectUnion(uVar3,uVar5,param_3,param_4,uVar4,uVar6,uVar7,uVar8);
    _objc_release(lVar1);
  }
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)(uVar3,uVar5,param_3,param_4,param_1,param_2);
  return;
}



/* Entry: 1085c32f4; end: 1085c3367; -[SCTDirectChatPresenceController _createDragContextWithPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c32f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_3 + _DAT_112776f58);
  func_0x00010bfd4a60();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112776f5c);
    func_0x00010bfd4a60();
    if (iVar1 == 0) goto LAB_1085c3358;
  }
  _objc_alloc(PTR_PTR_1126da4f8);
  func_0x00010c04baa0(param_1,param_2);
LAB_1085c3358:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c3368; end: 1085c3407; -[SCTDirectChatPresenceController _processDragMove] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3368(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010bf89680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112776f58);
  func_0x00010c0fbcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a91e0(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112776f5c);
  func_0x00010c0fbcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a91e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085c3408; end: 1085c359f; -[SCTDirectChatPresenceController _processDragEndWithCompletion:] */

void FUN_1085c3408(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bf89680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db6a0();
  _objc_release(param_2);
  if (param_1 == 0.0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    dVar2 = -param_1;
    if (0.0 <= param_1) {
      dVar2 = param_1;
    }
    func_0x00010bef72c0(0x3fb47ae140000000,dVar2 * 0.30000001192092896,param_1,0);
    func_0x00010bf42780(puVar1,param_3,param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1085c35a0; end: 1085c363b; -[SCTDirectChatPresenceController _createParticipantWithState:] */

void FUN_1085c35a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2805c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdf10c0(param_1,param_2,param_3,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126da4c0;
  func_0x00010c06d480(PTR_PTR_1126da4c0,param_2,param_3);
  _objc_release(param_3);
  if ((int)puVar3 != 0) {
    func_0x00010be0ff40(param_1,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085c363c; end: 1085c3793; -[SCTDirectChatPresenceController _setInitialStateForParticipant:] */

undefined8 FUN_1085c363c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da4c0;
  func_0x00010c06e760(PTR_PTR_1126da4c0,param_2,param_3);
  if ((int)puVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c072da0();
    if ((int)lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c27e300();
      if ((lVar2 == 3) || (lVar2 == 0)) {
        func_0x00010c1dcf40(param_3,param_2,0);
        uVar8 = 1;
        goto LAB_1085c36cc;
      }
    }
    else {
      func_0x00010c1dcf40(param_3,param_2,0);
      func_0x00010c21ae00(param_3,param_2,0);
    }
  }
  uVar8 = 0;
LAB_1085c36cc:
  lVar2 = param_3;
  func_0x00010c0fbcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126da4d8;
  lVar3 = param_3;
  func_0x00010c0fe180(param_3);
  lVar4 = param_3;
  func_0x00010c27e300(param_3);
  lVar5 = param_3;
  func_0x00010c082a20(param_3);
  lVar6 = param_3;
  func_0x00010c083620(param_3);
  lVar7 = param_3;
  func_0x00010c075460(param_3);
  func_0x00010c252900(puVar1,param_2,lVar3,0,lVar4,lVar5,lVar6,lVar7,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b2a0(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1085c3794; end: 1085c3873; -[SCTDirectChatPresenceController _updateInjectedBotLeftConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3794(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776f5c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0678c0(0x401c000000000000,uVar1,param_2,param_1);
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_112776f58);
    func_0x00010c0fbcc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0bc000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0678c0(0x4018000000000000,uVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c3874; end: 1085c38d3; -[SCTDirectChatPresenceController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3874(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776f54,0);
  _objc_storeStrong(param_1 + _DAT_112776f60,0);
  _objc_storeStrong(param_1 + _DAT_112776f5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f58,0);
  return;
}



/* Entry: 1085c38d4; end: 1085c39db; -[SCTDirectChatPresencePill needsAvatarUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1085c38d4(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined *puStack_28;
  
  puVar6 = &uStack_70;
  uVar4 = param_1;
  func_0x00010bed0a40();
  if ((uVar4 & 1) == 0) {
    puStack_28 = PTR_PTR_1126fcf60;
    puVar5 = &uStack_30;
    uStack_30 = param_1;
    _objc_msgSendSuper2(puVar5,PTR_s_needsAvatarUpdate_1126136b8);
    if (((ulong)puVar5 & 1) != 0) {
      return (undefined1 *)0x1;
    }
    func_0x00010c26f360(param_1);
    bVar2 = false;
    bVar3 = false;
    bVar1 = NAN((double)CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))));
    if (!bVar1) {
      bVar2 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 1.5;
      bVar3 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 1.5;
    }
    if ((!bVar3 && bVar2 == bVar1) && (uVar4 = param_1, func_0x00010be3edc0(), (int)uVar4 != 0)) {
      uVar4 = param_1;
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        func_0x00010bf1c640();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == 0) {
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          func_0x00010c252440(&uStack_70,param_1);
        }
        func_0x0001085d21a8(&uStack_70,&UNK_10df35ec8);
        _objc_release(param_1);
        return (undefined1 *)puVar6;
      }
      return (undefined1 *)(ulong)(*(long *)(param_1 + (long)_DAT_112776f64) != 0);
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 1085c39dc; end: 1085c39df; -[SCTDirectChatPresencePill updateLabelText] */

void FUN_1085c39dc(void)

{
  return;
}



/* Entry: 1085c39e0; end: 1085c3a5b; -[SCTDirectChatPresencePill animateAvatarUpdateWithCompletion:] */

void FUN_1085c39e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3edc0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02ca0(param_1,param_2,uVar1,param_3);
    _objc_release(uVar1);
  }
  else {
    func_0x00010bdcaa80(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c3a5c; end: 1085c3e83; -[SCTDirectChatPresencePill _animateChatVisibleAvatarUpdateWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3a5c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar4 = param_1;
  func_0x00010beb4500();
  if ((int)puVar4 == 0) {
    puVar1 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    puVar4 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0fe180();
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be73d60(param_1);
    func_0x00010befb4e0(puVar1);
    _objc_release(puVar4);
    puVar3 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126da4c0;
    if (puVar3 == (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2339a0();
      _objc_release(puVar2);
      uVar6 = 0x4022000000000000;
      if ((int)puVar4 != 0) {
        puVar4 = param_1;
        func_0x00010c252440(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed95c0(param_1);
        _objc_release(puVar4);
        lVar5 = (long)_DAT_112776f68;
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
        uVar6 = 0x4032000000000000;
      }
      puVar4 = *(undefined **)(param_1 + _DAT_112776f64);
      func_0x00010c0bbfe0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      FUN_1086152d4(0x4034000000000000,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bef8540(0x3fd3333340000000,0,0x3ff0000000000000,puVar1);
      _objc_release(puVar4);
    }
    else {
      if (puVar2 == (undefined *)0x2) {
        uStack_d8 = 0x3fbeb851eb851eb8;
        uStack_e0 = 0x3feccccccccccccd;
        uStack_c0 = 0x3ff0000000000000;
        uStack_a8 = 0x4024000000000000;
      }
      else {
        uStack_d8 = 0x3fd999999999999a;
        uStack_e0 = 0x3fe8b4395810624e;
        uStack_c0 = 0;
        uStack_a8 = 0;
      }
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b0 = 0x3fe3333333333333;
      uStack_b8 = 0x3ff0000000000000;
      puVar4 = param_1;
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == (undefined *)0x0) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
      }
      else {
        func_0x00010c252440(&uStack_120,param_1);
      }
      func_0x00010bef71c0(0,0x3fcdd2f1a0000000,puVar1);
      _objc_release(param_1);
    }
    _objc_release(puVar4);
    func_0x00010bf42780(puVar1);
  }
  else {
    puVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126da4d8;
    func_0x00010c159240();
    func_0x00010c252900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(&uStack_e0,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1085c3e84;
    puStack_80 = &UNK_110848378;
    _objc_copyWeak(auStack_68,&uStack_e0);
    _objc_retain(puVar1);
    puStack_78 = puVar1;
    _objc_retain(param_3);
    uStack_70 = param_3;
    func_0x00010bf03200(param_1);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(&uStack_e0);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c3e84; end: 1085c3ec7;  */

void FUN_1085c3e84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be4cac0();
  func_0x00010bee2a80(lVar1);
  func_0x00010bf03200(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c3ec8; end: 1085c3f4f;  */

void FUN_1085c3ec8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c3f50; end: 1085c403b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c3f50(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c141e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085c403c;
  puStack_58 = &UNK_11084fc28;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  dStack_48 = param_1;
  func_0x00010c0bc060(uVar1,param_3,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1677c0(1.0 - param_1,
                      *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f64));
  if (*(char *)(param_2 + 0x30) == '\0') {
    param_1 = 0.0;
  }
  func_0x00010c1677c0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_50);
  return;
}



/* Entry: 1085c403c; end: 1085c4483;  */

void FUN_1085c403c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  pcVar3 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c4484; end: 1085c448f;  */

void FUN_1085c4484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSmileyEmojiView__112595990,0);
  return;
}



/* Entry: 1085c4490; end: 1085c4767; -[SCTDirectChatPresencePill _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c4490(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x22;
  double dVar7;
  undefined1 auStack_f8 [64];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  puVar2 = PTR_PTR_1126da4c0;
  uVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2339a0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085c4768;
  puStack_70 = &UNK_1108471b0;
  uStack_68 = param_1;
  func_0x00010c0bc060(param_1,param_2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  if (uVar1 == 0) {
    unaff_x22 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x22;
    func_0x00010c081ba0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010bed0a40(param_1);
      dVar7 = (double)((uint)uVar3 ^ 1);
    }
  }
  uVar3 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(dVar7);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    _objc_release(unaff_x22);
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1085c48f0;
  puStack_a0 = &UNK_11086b060;
  uStack_90 = SUB81(puVar2,0);
  uStack_98 = param_1;
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bedffa0(param_1,param_2,0);
  if ((int)puVar2 == 0) {
    lVar6 = *(long *)(param_1 + (long)_DAT_112776f68);
    if (lVar6 == 0) goto LAB_1085c466c;
    uVar5 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed95c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    lVar6 = (long)_DAT_112776f68;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar6));
    lVar6 = *(long *)(param_1 + lVar6);
    uVar5 = 0;
  }
  func_0x00010c1a7f60(lVar6,param_2,uVar5);
LAB_1085c466c:
  uVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126da4c0;
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d480(puVar4,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar4 == 0) {
      func_0x00010c1677c0(0,uVar1);
    }
    else {
      uVar3 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd4aa0(auStack_f8,param_1,param_2,uVar3);
      func_0x00010c28b2a0(uVar1,param_2,auStack_f8);
      _objc_release(uVar3);
      _objc_release(uVar1);
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      uVar1 = param_1;
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1085c4768; end: 1085c48ef;  */

void FUN_1085c4768(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar6;
  func_0x00010c252440(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73de0(uVar6);
  pcVar5 = "d";
  pcVar4 = pcVar5;
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar6;
  func_0x00010c252440(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73cc0(uVar6);
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c48f0; end: 1085c4a83;  */

void FUN_1085c48f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x401e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c4a84; end: 1085c4be3; -[SCTDirectChatPresencePill _updateSmileyEmojiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c4a84(long param_1,undefined8 param_2,long param_3)

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
  lVar3 = (long)_DAT_112776f64;
  if (*(long *)(param_1 + lVar3) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + lVar3) != 0) {
      lVar2 = param_1;
      func_0x00010c141e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar2);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x1085c4b5c;
      puStack_40 = &UNK_1108471b0;
      lStack_38 = param_1;
      func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c4be4; end: 1085c50f3; -[SCTDirectChatPresencePill _animateToState:completion:] */

void FUN_1085c4be4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_1;
  func_0x00010bed0a40();
  if ((int)ppuVar2 != 0) {
    func_0x00010bdca980(param_1);
    goto LAB_1085c5028;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  ppuVar2 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c27e300();
  ppuVar5 = param_3;
  func_0x00010c27e300();
  _objc_release(ppuVar2);
  if (ppuVar4 == ppuVar5) {
LAB_1085c4c88:
    bVar1 = false;
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c081ba0();
    if (((ulong)ppuVar4 & 1) == 0) {
      _objc_release(ppuVar2);
    }
    else {
      ppuVar4 = param_3;
      func_0x00010c081ba0();
      _objc_release(ppuVar2);
      if (((ulong)ppuVar4 & 1) == 0) {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_1085c50f4;
        puStack_78 = &UNK_1109101a8;
        ppuStack_70 = param_1;
        _objc_retain(param_3);
        ppuVar2 = &puStack_90;
        ppuStack_68 = param_3;
        _objc_retainBlock(ppuVar2);
        func_0x00010befa120(puVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuStack_68);
        goto LAB_1085c4c88;
      }
    }
    bVar1 = true;
  }
  puVar6 = PTR_PTR_1126da4c0;
  func_0x00010c07aac0();
  puVar7 = PTR_PTR_1126da4c0;
  ppuVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar6 == 0) {
    func_0x00010c07aac0();
    _objc_release(ppuVar2);
    if ((int)puVar7 != 0) {
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x1085c5120;
      puStack_f8 = &UNK_110841f50;
      ppuVar2 = &puStack_110;
      ppuStack_f0 = param_1;
      goto LAB_1085c4e54;
    }
  }
  else {
    func_0x00010bfd53e0();
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010c078ca0();
    puVar6 = PTR_PTR_1126da4c0;
    if ((int)ppuVar2 == 0) {
      uVar8 = 0;
    }
    else {
      ppuVar2 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07aac0();
      uVar8 = (uint)puVar6 ^ 1;
      _objc_release(ppuVar2);
    }
    puVar6 = PTR_PTR_1126da4c0;
    if ((((uint)puVar7 | uVar8) & 1) == 0) {
      ppuVar2 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdb5e0();
      _objc_release(ppuVar2);
      if (((ulong)puVar6 & 1) != 0) goto LAB_1085c4e70;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x1085c5110;
      puStack_d0 = &UNK_1109101a8;
      ppuStack_c8 = param_1;
      _objc_retain(param_3);
      ppuVar2 = &puStack_e8;
      ppuStack_c0 = param_3;
      _objc_retainBlock(ppuVar2);
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar2);
      ppuVar2 = ppuStack_c0;
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x1085c5104;
      puStack_a0 = &UNK_110841f50;
      ppuVar2 = &puStack_b8;
      ppuStack_98 = param_1;
LAB_1085c4e54:
      _objc_retainBlock(ppuVar2);
      func_0x00010befa120(puVar3);
    }
    _objc_release(ppuVar2);
  }
LAB_1085c4e70:
  puVar7 = PTR_PTR_1126da4c0;
  ppuVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd7d00();
  _objc_release(ppuVar2);
  if ((int)puVar7 != 0) {
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x1085c512c;
    puStack_128 = &UNK_1109101a8;
    ppuStack_120 = param_1;
    _objc_retain(param_3);
    ppuVar2 = &puStack_140;
    ppuStack_118 = param_3;
    _objc_retainBlock(ppuVar2);
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_118);
  }
  if (bVar1) {
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x1085c513c;
    puStack_158 = &UNK_1109101a8;
    ppuStack_150 = param_1;
    _objc_retain(param_3);
    ppuVar2 = &puStack_170;
    ppuStack_148 = param_3;
    _objc_retainBlock(ppuVar2);
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_148);
  }
  ppuVar2 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c159240();
  ppuVar5 = param_3;
  func_0x00010c159240();
  if ((int)ppuVar4 == (int)ppuVar5) {
LAB_1085c5010:
    _objc_release(ppuVar2);
  }
  else {
    puVar7 = PTR_PTR_1126da4c0;
    func_0x00010c06e760();
    _objc_release(ppuVar2);
    if ((int)puVar7 != 0) {
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      uStack_188 = 0x1085c514c;
      puStack_180 = &UNK_110841f50;
      ppuVar2 = &puStack_198;
      ppuStack_178 = param_1;
      _objc_retainBlock(ppuVar2);
      func_0x00010befa120(puVar3);
      goto LAB_1085c5010;
    }
  }
  FUN_1086179c0(puVar3,param_4);
  _objc_release(puVar3);
LAB_1085c5028:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c50f4; end: 1085c5157;  */

void FUN_1085c50f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateToTypingState_completion_112550630,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085c5158; end: 1085c5357; -[SCTDirectChatPresencePill _animateBotToState:completion:] */

void FUN_1085c5158(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  byte bStack_68;
  byte bStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27e300();
  lVar5 = param_3;
  func_0x00010c27e300();
  _objc_release(lVar3);
  if (lVar4 == lVar5) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    func_0x00010bdf5160(param_1);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar3 = param_3;
    func_0x00010c081ba0();
    lVar4 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c081ba0();
    uVar2 = (uint)lVar5 ^ 1;
    _objc_release(lVar4);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uVar1 = uVar2;
    if ((int)lVar3 == 0) {
      uVar1 = (uint)lVar5;
    }
    if (uVar1 == 1) {
      bStack_68 = (byte)lVar3 & (byte)uVar2;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1085c5358;
      puStack_80 = &UNK_110a59bc0;
      lStack_78 = param_1;
      _objc_retain(param_3);
      ppuVar7 = &puStack_98;
      lStack_70 = param_3;
      bStack_67 = ((byte)lVar3 ^ 1) & (byte)lVar5;
      _objc_retainBlock(ppuVar7);
      func_0x00010befa120(puVar6);
      _objc_release(ppuVar7);
      _objc_release(lStack_70);
    }
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1085c5538;
    puStack_b0 = &UNK_1109101a8;
    lStack_a8 = param_1;
    _objc_retain(param_3);
    ppuVar7 = &puStack_c8;
    lStack_a0 = param_3;
    _objc_retainBlock(ppuVar7);
    func_0x00010befa120(puVar6);
    _objc_release(ppuVar7);
    FUN_108617acc(puVar6,PTR___dispatch_main_q_11034be20,param_4);
    _objc_release(lStack_a0);
    _objc_release(puVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c5358; end: 1085c54e3;  */

void FUN_1085c5358(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cfd08;
  _objc_opt_new(PTR_PTR_1126cfd08);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    param_1 = 0x3fd3333340000000;
    param_2 = 0;
    func_0x00010bef8520(0x3fd3333340000000,0,0x3ff0000000000000,puVar1);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = uVar4;
  func_0x00010c252440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27e300(*(undefined8 *)(param_3 + 0x28));
  uVar3 = uVar2;
  func_0x00010c2524e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73d60(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befb4e0(param_1,param_2,puVar1);
  _objc_retain(param_4);
  func_0x00010bf42780(puVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1085c54e4; end: 1085c54eb;  */

void FUN_1085c54e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTypingIndicatorConstraint_112596438);
  return;
}



/* Entry: 1085c54ec; end: 1085c5537;  */

void FUN_1085c54ec(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bee2a40(0,*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c5528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c5538; end: 1085c558f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c5538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776f6c);
  _objc_retain(param_2);
  func_0x00010c27e300(uVar1);
  func_0x00010bf03220(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c5590; end: 1085c586b; -[SCTDirectChatPresencePill _animateChatVisibleEmergenceWithCompletion:] */

void FUN_1085c5590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
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
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010beb4500();
  if ((int)lVar2 != 0) {
    func_0x00010be4cac0(param_1);
    func_0x00010bee2a80(param_1);
  }
  puVar3 = PTR_PTR_1126cfd08;
  _objc_opt_new(PTR_PTR_1126cfd08);
  lVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c141e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_1085c586c;
    puStack_110 = &UNK_1108471b0;
    lStack_108 = param_1;
    func_0x00010c0bbfe0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010be4e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedffa0(param_1,param_2,lVar2);
    _objc_release(lVar2);
    uVar5 = 0x4041800000000000;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172d80();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = 0x3ff0000000000000;
    uStack_c0 = 0x3ff0000000000000;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0x3ff0000000000000;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x00010c28b2a0();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c252440(&uStack_c0,lVar4);
    }
    uStack_f8 = 0x3fc851eb851eb852;
    uStack_100 = 0x3ff0000000000000;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0x3ff199999999999a;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0x3fe6666666666666;
    uVar5 = 0;
    func_0x00010bef71a0(0x3fc74538e0000000,0,0x3fd99999a0000000,puVar3,param_2,lVar2,&uStack_c0,
                        &uStack_100);
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = 0x3fc851eb851eb852;
    uStack_c0 = 0x3ff0000000000000;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0x3ff199999999999a;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0x3fe6666666666666;
    func_0x00010c23d360();
    _objc_release(lVar2);
  }
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1085c59f0;
  puStack_138 = &UNK_110846710;
  lStack_130 = param_1;
  func_0x00010bef72c0(0x3fc74538e0000000,0x3fd99999a0000000,0,uVar5,puVar3,param_2,&puStack_150);
  func_0x00010bf42780(puVar3,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  return;
}



/* Entry: 1085c586c; end: 1085c59ef;  */

void FUN_1085c586c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x401e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c59f0; end: 1085c5a4b;  */

void FUN_1085c59f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1085c5a4c;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1085c5a4c; end: 1085c5ae7;  */

void FUN_1085c5a4c(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c5ae8; end: 1085c5b73; -[SCTDirectChatPresencePill _animateAbsentWithCompletion:] */

void FUN_1085c5ae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126da4c0;
  uVar1 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07aac0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar2 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bdcaa60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c5b74; end: 1085c5e77; -[SCTDirectChatPresencePill _animateChatVisibleAbsentWithCompletion:] */

void FUN_1085c5b74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 uStack_f8;
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
  
  puVar2 = PTR_PTR_1126cfd08;
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  lVar3 = param_3;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = param_3;
  if (lVar3 == 0) {
    func_0x00010c141e00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0xc2000000;
    func_0x00010c0bbfe0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fe180();
    _objc_release(lVar3);
    if (lVar4 == 2) {
      uStack_a8 = 0x3fd999999999999a;
      uStack_b0 = 0x3fe8b4395810624e;
      uStack_80 = 0x3fe3333333333333;
    }
    else {
      uStack_a8 = 0x3ff0000000000000;
      uStack_b0 = 0x3ff0000000000000;
      uStack_80 = 0;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_78 = 0;
    uStack_88 = 0x3ff0000000000000;
    uStack_90 = 0;
    lVar3 = param_3;
    func_0x00010bf1c640(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c252440(&uStack_f0,lVar6);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1085c5e78;
    puStack_108 = &UNK_110845ce0;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uVar8 = 0x3fd3333340000000;
    uVar7 = 0;
    param_2 = uVar8;
    lStack_100 = param_3;
    uStack_f8 = lVar4 == 2;
    func_0x00010bef71e0(0,0x3fd3333340000000,puVar2,param_4,lVar3,0,&uStack_f0,&uStack_160,
                        &puStack_120);
    _objc_release(lVar6);
    _objc_release(lVar3);
    if (lVar4 != 2) goto LAB_1085c5dd8;
    func_0x00010bf1c640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar1;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1085c5ec0;
    puStack_170 = &UNK_110842e18;
    uStack_e8 = 0x3fd999999999999a;
    uStack_f0 = 0x3fe8b4395810624e;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0x3fe3333333333333;
    uStack_158 = 0x3ff0000000000000;
    uStack_160 = 0x3ff0000000000000;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0x3ff0000000000000;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    param_2 = 0x3fe3333340000000;
    lStack_168 = param_3;
    func_0x00010bef71e0(0x3fd3333340000000,0x3fe3333340000000,puVar2,param_4,lVar5,0,&uStack_f0,
                        &uStack_160,&puStack_188);
  }
  _objc_release(lVar5);
  uVar7 = uVar8;
LAB_1085c5dd8:
  lVar3 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c252480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73d60(param_3,param_4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010befb4e0(uVar7,param_2,puVar2,param_4,param_3);
  func_0x00010bf42780(puVar2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 1085c5e78; end: 1085c5ebf;  */

void FUN_1085c5e78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c5ec0; end: 1085c5ef7;  */

void FUN_1085c5ec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c5ef8; end: 1085c609b;  */

void FUN_1085c5ef8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  pcVar6 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c609c; end: 1085c635f; -[SCTDirectChatPresencePill _animateIconChangeToState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c609c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
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
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cfd08;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126da4c0;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2339a0(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126da4c0;
    func_0x00010c2339a0(PTR_PTR_1126da4c0,param_2,param_3);
    func_0x00010be73d60(param_1,param_2,param_3);
    puVar4 = puVar1;
    func_0x00010befb4e0(puVar1,param_2,param_1);
    uVar7 = 0x4032000000000000;
    if ((int)puVar3 == 0) {
      uVar7 = 0x4022000000000000;
    }
    uVar8 = 0x4032000000000000;
    if ((int)puVar2 == 0) {
      uVar8 = 0x4022000000000000;
    }
    FUN_1086152d4(uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_1086152d4((double)((ulong)puVar3 & 0xffffffff),(double)((ulong)puVar2 & 0xffffffff));
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar2 != 0) {
      func_0x00010bed95c0(param_1,param_2,param_3);
      lVar6 = (long)_DAT_112776f68;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,0);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
      }
    }
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1085c6360;
    puStack_140 = &UNK_110a59bf0;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1085c6508;
    puStack_170 = &UNK_110845ce0;
    uStack_160 = SUB81(puVar2,0);
    puStack_168 = param_1;
    puStack_138 = param_1;
    puStack_130 = puVar4;
    puStack_128 = puVar5;
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    func_0x00010bef8540(0x3fd3333340000000,0,0x3ff0000000000000,puVar1,param_2,0,&puStack_158,
                        &puStack_188);
    _objc_release(puStack_128);
    _objc_release(puStack_130);
  }
  else {
    func_0x00010bdd4aa0(&uStack_a0,param_1,param_2,param_3);
    puVar4 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c252440(&uStack_e0,param_1);
    }
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    func_0x00010bef71c0(0,0x3fd3333340000000,puVar1,param_2,puVar4,0,&uStack_e0,&uStack_120);
    puVar5 = param_1;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf42780(puVar1,param_2,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c6360; end: 1085c6447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c6360(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c141e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085c6448;
  puStack_58 = &UNK_11084fc28;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar3);
  uStack_50 = uVar3;
  uStack_48 = param_1;
  func_0x00010c0bc060(uVar1,param_3,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0x30);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(param_1);
  func_0x00010c1677c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112776f68));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_50);
  return;
}



/* Entry: 1085c6448; end: 1085c6507;  */

void FUN_1085c6448(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  pcVar3 = "d";
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c6508; end: 1085c652b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c6508(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776f68),
             PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1085c652c; end: 1085c6607; -[SCTDirectChatPresencePill _updateTypingIndicatorConstraintsWithProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c652c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  double dStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  puVar2 = PTR_PTR_1126da4c0;
  lVar1 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2339a0(puVar2,param_3,lVar1);
  dStack_48 = 18.0;
  if ((int)puVar2 == 0) {
    dStack_48 = 9.0;
  }
  _objc_release(lVar1);
  dStack_58 = (26.0 - dStack_48) * 0.5;
  dStack_48 = dStack_48 * 0.5;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1085c6608;
  puStack_68 = &UNK_110a59c20;
  lStack_60 = param_2;
  uStack_50 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + _DAT_112776f6c),param_3,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1085c6608; end: 1085c67af;  */

void FUN_1085c6608(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(double *)(param_1 + 0x28) * *(double *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bbee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c67b0; end: 1085c6ab7; -[SCTDirectChatPresencePill _animateToTypingState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c67b0(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  
  ppuVar7 = &puStack_100;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010c27e300();
  ppuVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c27e300();
  _objc_release(ppuVar3);
  if (ppuVar4 == ppuVar2) {
LAB_1085c6824:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    goto LAB_1085c6a88;
  }
  ppuVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c081ba0();
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar4 = param_3;
    func_0x00010c081ba0();
    _objc_release(ppuVar3);
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_1085c6824;
  }
  else {
    _objc_release(ppuVar3);
  }
  func_0x00010bdf5160(param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  ppuVar3 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (ppuVar3 == (undefined **)0x0) {
    uVar9 = (long)ppuVar2 - 1;
    ppuVar3 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c081ba0();
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126da4c0;
    if (uVar9 < 2) {
      if (((ulong)ppuVar4 & 1) == 0) {
LAB_1085c69cc:
        uStack_9f = 1 < uVar9;
        uStack_a0 = uVar9 < 2;
        puStack_d0 = puVar1;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1085c6ac8;
        puStack_b8 = &UNK_110a59c50;
        ppuVar3 = &puStack_d0;
        ppuStack_b0 = param_1;
        ppuStack_a8 = ppuVar2;
        _objc_retainBlock(ppuVar3);
        func_0x00010befa120(puVar5);
        goto LAB_1085c6a24;
      }
    }
    else if ((int)ppuVar4 != 0) {
      ppuVar3 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2339a0();
      _objc_release(ppuVar3);
      if ((int)puVar6 != 0) {
        ppuVar3 = param_1;
        func_0x00010c252440(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed95c0(param_1);
        _objc_release(ppuVar3);
        lVar8 = (long)_DAT_112776f68;
        func_0x00010c1a7f60(*(undefined8 *)((long)param_1 + lVar8));
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)param_1 + lVar8));
      }
      goto LAB_1085c69cc;
    }
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1085c6ab8;
    puStack_80 = &UNK_1109101a8;
    ppuStack_78 = param_1;
    _objc_retain(param_3);
    ppuVar3 = &puStack_98;
    ppuStack_70 = param_3;
    _objc_retainBlock(ppuVar3);
    func_0x00010befa120(puVar5);
    _objc_release(ppuVar3);
    ppuVar3 = ppuStack_70;
LAB_1085c6a24:
    _objc_release(ppuVar3);
  }
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1085c6d2c;
  puStack_e8 = &UNK_110a59b60;
  ppuStack_e0 = param_1;
  ppuStack_d8 = ppuVar2;
  _objc_retainBlock(&puStack_100);
  func_0x00010befa120(puVar5);
  _objc_release(ppuVar7);
  FUN_108617acc(puVar5,PTR___dispatch_main_q_11034be20,param_4);
  _objc_release(puVar5);
LAB_1085c6a88:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c6ab8; end: 1085c6ac7;  */

void FUN_1085c6ab8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateBitmojiToTypingState_com_1125503f8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085c6ac8; end: 1085c6c93;  */

void FUN_1085c6ac8(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cfd08;
  _objc_opt_new(PTR_PTR_1126cfd08);
  bVar1 = *(char *)(param_1 + 0x30) == '\0';
  uVar5 = 0x3ff0000000000000;
  if (bVar1) {
    uVar5 = 0;
  }
  uVar6 = 0;
  if (bVar1) {
    uVar6 = 0x3ff0000000000000;
  }
  uVar7 = 0x3fd3333340000000;
  uVar4 = uVar7;
  func_0x00010bef8520(0x3fd3333340000000,uVar5,uVar6);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = 0;
    func_0x00010bef8520(0x3fd3333340000000,0,0x3ff0000000000000,puVar2);
    uVar4 = uVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = uVar3;
  func_0x00010c252440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2524e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73d60(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010befb4e0(uVar4,uVar5,puVar2);
  _objc_retain(param_2);
  func_0x00010bf42780(puVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  return;
}



/* Entry: 1085c6c94; end: 1085c6cd7;  */

void FUN_1085c6c94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c141e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c6cd8; end: 1085c6cdf;  */

void FUN_1085c6cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTypingIndicatorConstraint_112596438);
  return;
}



/* Entry: 1085c6ce0; end: 1085c6d2b;  */

void FUN_1085c6ce0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bee2a40(0,*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c6d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c6d2c; end: 1085c6d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c6d2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776f6c),
             PTR_s_animateToTypingState_completion__11259e630,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 1085c6d44; end: 1085c6eef; -[SCTDirectChatPresencePill _animateSelectionWithCompletion:] */

void FUN_1085c6d44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c159240();
    lVar4 = lVar1;
    func_0x00010c2524c0(lVar1,param_2,(uint)lVar3 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126cfd08;
    _objc_opt_new(PTR_PTR_1126cfd08);
    func_0x00010be73d60(param_1,param_2,lVar4);
    func_0x00010befb500(puVar5,param_2,param_1);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010c252440(&uStack_90,lVar2);
    }
    func_0x00010bdd4aa0(auStack_d0,param_1,param_2,lVar4);
    func_0x00010bef71c0(0,0x3fc99999a0000000,puVar5,param_2,lVar1,0,&uStack_90,auStack_d0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf42780(puVar5,param_2,param_3);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085c6ef0; end: 1085c70cb; -[SCTDirectChatPresencePill _didLoadAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c6ef0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfe0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_112776f6c) != 0) {
      lVar1 = param_1;
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c5a0();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    func_0x00010bf1c640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b2a0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1085c70cc; end: 1085c7257; -[SCTDirectChatPresencePill _bitmojiStateForState:] */

void FUN_1085c70cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0fe180();
  lVar2 = param_4;
  func_0x00010c082a20();
  if ((int)lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c083620();
    if ((int)lVar2 == 0) {
      lVar2 = param_4;
      func_0x00010c075460();
      if ((int)lVar2 == 0) {
        lVar2 = param_4;
        func_0x00010c27e300();
        if (lVar2 == 1) {
          if (lVar1 == 2) {
            param_1[1] = 0x3fbeb851eb851eb8;
            *param_1 = 0x3ff0000000000000;
            param_1[3] = 0x3fe999999999999a;
            param_1[2] = 0;
            uVar4 = 0x3ff0000000000000;
            uVar3 = 0x3ff0000000000000;
            uVar6 = 0x4024000000000000;
            uVar5 = 0x3fe3333333333333;
          }
          else {
            param_1[1] = 0x3fc999999999999a;
            *param_1 = 0x3ff0000000000000;
            param_1[3] = 0x3fe147ae147ae148;
            param_1[2] = 0;
            uVar4 = 0x3ff0000000000000;
            uVar3 = 0;
            uVar6 = 0;
            uVar5 = 0x3fe3333333333333;
          }
        }
        else {
          lVar2 = param_4;
          func_0x00010c27e300();
          if (lVar2 == 2) {
            if (lVar1 == 2) {
              param_1[1] = 0x3fbeb851eb851eb8;
              *param_1 = 0x3feccccccccccccd;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar4 = 0x3ff0000000000000;
              uVar3 = 0x3ff0000000000000;
              uVar6 = 0x4024000000000000;
              uVar5 = 0x3fe3333333333333;
            }
            else {
              param_1[1] = 0x3fc999999999999a;
              *param_1 = 0x3feccccccccccccd;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar4 = 0x3ff0000000000000;
              uVar3 = 0;
              uVar6 = 0;
              uVar5 = 0x3fe3333333333333;
            }
          }
          else {
            lVar2 = param_4;
            func_0x00010c159240();
            if ((int)lVar2 == 0) {
              if (lVar1 != 2) {
                param_1[1] = 0x3fd999999999999a;
                *param_1 = 0x3fe8b4395810624e;
                param_1[3] = 0;
                param_1[2] = 0;
                uVar4 = 0x3ff0000000000000;
                uVar3 = 0;
                uVar6 = 0;
                uVar5 = 0x3fe3333333333333;
              }
              else {
                param_1[1] = 0x3fbeb851eb851eb8;
                *param_1 = 0x3feccccccccccccd;
                param_1[3] = 0;
                param_1[2] = 0;
                uVar4 = 0x3ff0000000000000;
                uVar3 = 0x3ff0000000000000;
                uVar6 = 0x4024000000000000;
                uVar5 = 0x3fe3333333333333;
              }
            }
            else if (lVar1 != 2) {
              param_1[1] = 0x3fc851eb851eb852;
              *param_1 = 0x3ff0000000000000;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar4 = 0x3ff199999999999a;
              uVar3 = 0;
              uVar6 = 0;
              uVar5 = 0x3fe6666666666666;
            }
            else {
              param_1[1] = 0x3faeb851eb851eb8;
              *param_1 = 0x3ff0000000000000;
              param_1[3] = 0;
              param_1[2] = 0;
              uVar4 = 0x3ff199999999999a;
              uVar3 = 0x3ff0000000000000;
              uVar6 = 0x4024000000000000;
              uVar5 = 0x3fe6666666666666;
            }
          }
        }
      }
      else {
        param_1[1] = 0x3fc851eb851eb852;
        *param_1 = 0x3ff0000000000000;
        param_1[3] = 0;
        param_1[2] = 0;
        uVar4 = 0x3ff199999999999a;
        uVar3 = 0;
        uVar6 = 0;
        uVar5 = 0x3fe6666666666666;
      }
    }
    else {
      param_1[1] = 0x3fc851eb851eb852;
      *param_1 = 0x3ff0000000000000;
      param_1[3] = 0;
      param_1[2] = 0;
      uVar4 = 0x3ff199999999999a;
      uVar3 = 0;
      uVar6 = 0;
      uVar5 = 0x3fe6666666666666;
    }
  }
  else {
    param_1[1] = 0x3fc851eb851eb852;
    *param_1 = 0x3ff0000000000000;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar4 = 0x3ff199999999999a;
    uVar3 = 0;
    uVar6 = 0;
    uVar5 = 0x3fe6666666666666;
  }
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085c7258; end: 1085c72e3; -[SCTDirectChatPresencePill _isChatVisible] */

undefined8 FUN_1085c7258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126da4c0;
  uVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06e760(puVar2,param_2,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078ca0(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
  else {
    param_1 = 1;
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1085c72e4; end: 1085c7327; -[SCTDirectChatPresencePill _typingBubbleOnly] */

undefined8 FUN_1085c72e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27e280();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1085c7328; end: 1085c7463; -[SCTDirectChatPresencePill _createTypingBubbleViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c7328(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  lVar5 = (long)_DAT_112776f6c;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126da500;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      func_0x00010bf1c640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1085c7464;
    puStack_40 = &UNK_1108471b0;
    uStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081ba0();
    func_0x00010bee2a40((double)(uVar3 & 0xffffffff),param_1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1085c7464; end: 1085c767b;  */

void FUN_1085c7464(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0bbee0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = "d";
  pcVar5 = pcVar6;
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085c40fc("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c767c; end: 1085c7833; -[SCTDirectChatPresencePill _createIconImageViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c767c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_112776f68;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe6666660000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar3 = param_1;
    func_0x00010c141e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1085c77ac;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1085c7834; end: 1085c7947; -[SCTDirectChatPresencePill _updateIconImageForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c7834(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  puVar3 = auStack_90;
  _objc_retain(param_3);
  func_0x00010bdee900(param_1);
  lVar5 = param_3;
  func_0x00010c075460();
  if ((int)lVar5 == 0) {
    lVar5 = param_3;
    func_0x00010c0fe180();
    if (lVar5 != 2) goto LAB_1085c792c;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ee4fb8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = (code *)0x1085c79d0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0x11e,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = FUN_1085c7948;
    puVar3 = auStack_68;
  }
  lVar5 = (long)_DAT_112776f68;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puVar3[1] = 0xc2000000;
  puVar3[2] = pcVar4;
  puVar3[3] = &UNK_1108471b0;
  puVar3[4] = param_1;
  func_0x00010c0bbfe0(uVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_1085c792c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c7948; end: 1085c7b6b;  */

void FUN_1085c7948(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c141e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085c7b6c; end: 1085c7bc7; -[SCTDirectChatPresencePill _loadSmileyEmojiView] */

void FUN_1085c7b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ee4fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085c7bc8; end: 1085c7cab; -[SCTDirectChatPresencePill _updateColors] */

void FUN_1085c7bc8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bde1f40(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c141e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c141e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  func_0x00010c141e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085c7cac; end: 1085c7d2b; -[SCTDirectChatPresencePill _updateTypingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c7cac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27e300();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bdf5160(param_1);
  }
  lVar1 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27e300();
  func_0x00010c21ae00(*(undefined8 *)(param_1 + _DAT_112776f6c),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085c7d2c; end: 1085c7e2f; -[SCTDirectChatPresencePill _pillWidthForState:] */

double FUN_1085c7d2c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  undefined1 auStack_80 [64];
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf1c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c27e300();
    param_1 = 26.0;
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126da4c0;
      func_0x00010c2339a0(PTR_PTR_1126da4c0,param_3,param_4);
      param_1 = 18.0;
      if ((int)puVar2 == 0) {
        param_1 = 9.0;
      }
    }
  }
  else {
    lVar1 = param_2;
    func_0x00010bf1c640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4aa0(auStack_80,param_2,param_3,param_4);
    func_0x00010c23d360(lVar1,param_3,auStack_80);
    dVar3 = param_1;
    _objc_release(lVar1);
    func_0x00010bf1c640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf13180();
    _objc_release(param_2);
    if (param_1 <= dVar3) {
      param_1 = dVar3;
    }
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1085c7e30; end: 1085c7f5f; -[SCTDirectChatPresencePill _pillHeightForState:] */

double FUN_1085c7e30(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_80 [64];
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bed0a40();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126da4c0;
    func_0x00010c07aac0(PTR_PTR_1126da4c0,param_4,param_5);
    dVar4 = 0.0;
    if ((int)puVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf1c640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar2 = PTR_PTR_1126da4c0;
        func_0x00010c2339a0(PTR_PTR_1126da4c0,param_4,param_5);
        dVar4 = 33.0;
        if ((int)puVar2 == 0) {
          dVar4 = 24.0;
        }
      }
      else {
        uVar3 = param_5;
        func_0x00010c2524e0(param_5,param_4,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_5);
        lVar1 = param_3;
        func_0x00010bf1c640(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd4aa0(auStack_80,param_3,param_4,uVar3);
        func_0x00010c23d360(lVar1,param_4,auStack_80);
        dVar4 = param_2 + 7.5;
        _objc_release(lVar1);
        param_5 = uVar3;
      }
    }
  }
  else {
    uVar3 = param_5;
    func_0x00010c081ba0();
    dVar4 = 24.0;
    if ((int)uVar3 == 0) {
      dVar4 = 0.0;
    }
  }
  _objc_release(param_5);
  return dVar4;
}



/* Entry: 1085c7f60; end: 1085c7faf; -[SCTDirectChatPresencePill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c7f60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776f68,0);
  _objc_storeStrong(param_1 + _DAT_112776f6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776f64,0);
  return;
}



/* Entry: 1085c7fb0; end: 1085c825f; -[SCTGroupChatPresenceController initWithParticipants:avatarServices:chatServices:talkUIController:plusFeatureLogger:peekAPeekEnabled:presenceRenderGrapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085c7fb0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fcf68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithAvatarServices_chatServi_11253bf28,param_4,param_5,
                      param_6,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar14 = (long)_DAT_112776f70;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar11 = (long)_DAT_112776f74;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776f78);
    *(undefined **)((long)puVar1 + (long)_DAT_112776f78) = puVar2;
    _objc_release(uVar10);
    lVar13 = (long)_DAT_112776f7c;
    _objc_retain(param_7);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_7;
    _objc_release(uVar10);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112776f80) = param_8;
    uVar12 = param_3;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2805c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a900();
        puVar7 = puVar1;
        func_0x00010bdf10c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c288bc0(puVar7);
        _objc_release(uVar3);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar14));
        uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
        puVar8 = puVar7;
        func_0x00010c0fbcc0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c2923e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar2 = PTR_PTR_1126da4c0;
        func_0x00010c06d480();
        if ((int)puVar2 != 0) {
          func_0x00010be0ff40(puVar1);
        }
        _objc_release(puVar7);
        uVar12 = uVar12 + 1;
        uVar3 = param_3;
        func_0x00010bf529e0();
      } while (uVar12 < uVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085c8260; end: 1085c8577; -[SCTGroupChatPresenceController _initView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c8260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_130;
  undefined *puStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126fcf68;
  lStack_130 = param_5;
  _objc_msgSendSuper2(&lStack_130,PTR_s__initView_11256c418);
  dVar9 = 0.0;
  lVar6 = *(long *)(param_5 + _DAT_112776f70);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar1 == 0) {
    dVar10 = 7.5;
  }
  else {
    dVar10 = 0.0;
    do {
      lVar7 = 0;
      dVar11 = dVar10;
      do {
        dVar10 = dVar9;
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar6);
          dVar10 = dVar9;
        }
        uVar8 = *(undefined8 *)(lVar7 * 8);
        lVar2 = param_5;
        func_0x00010bf4dce0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010c0fbcc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar2);
        _objc_release(uVar3);
        _objc_release(lVar2);
        puVar4 = PTR_PTR_1126da4d8;
        func_0x00010c0fe180(uVar8);
        func_0x00010c159240(uVar8);
        func_0x00010c27e300(uVar8);
        func_0x00010c082a20(uVar8);
        func_0x00010c083620(uVar8);
        func_0x00010c075460(uVar8);
        func_0x00010bf1a900();
        func_0x00010c252900(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010c0fbcc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28b2a0();
        _objc_release(uVar3);
        func_0x00010c0fbcc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe07e0();
        dVar9 = dVar10;
        _objc_release(uVar8);
        if (dVar10 <= dVar11) {
          dVar10 = dVar11;
        }
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
        dVar11 = dVar10;
      } while (lVar1 != lVar7);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    dVar9 = 7.5;
    dVar10 = dVar10 + 7.5;
  }
  _objc_release(lVar6);
  func_0x00010bed4400(param_5);
  func_0x00010beda960(param_5);
  func_0x00010bedf000(param_5);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc850d8();
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar9,param_2,param_3,param_4);
  _objc_release(lVar1);
  _objc_release(lVar5);
  func_0x00010bee2420(dVar10,param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_new(PTR_PTR_1126da508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c8578; end: 1085c8593; -[SCTGroupChatPresenceController _createPillView] */

void FUN_1085c8578(void)

{
  _objc_opt_new(PTR_PTR_1126da508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c8594; end: 1085c903f; -[SCTGroupChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c8594(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_530;
  ulong uStack_508;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  code *pcStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  long lStack_4a8;
  double dStack_4a0;
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  _objc_retain(param_3);
  uVar24 = param_3;
  func_0x00010bf52a60();
  if (uVar24 != 0) {
    lVar18 = *plStack_2d0;
    do {
      uVar20 = 0;
      do {
        if (*plStack_2d0 != lVar18) {
          _objc_enumerationMutation(param_3);
        }
        uVar21 = *(undefined8 *)(lStack_2d8 + uVar20 * 8);
        func_0x00010c2923e0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar21);
        uVar20 = uVar20 + 1;
      } while (uVar24 != uVar20);
      uVar24 = param_3;
      func_0x00010bf52a60();
    } while (uVar24 != 0);
  }
  _objc_release(param_3);
  func_0x00010bedcc00(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar14 = (long)_DAT_112776f70;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lVar16 = *(long *)(param_1 + lVar14);
  _objc_retain(lVar16);
  lVar18 = lVar16;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar15 = *plStack_310;
    do {
      lVar19 = 0;
      do {
        if (*plStack_310 != lVar15) {
          _objc_enumerationMutation(lVar16);
        }
        uVar21 = *(undefined8 *)(lStack_318 + lVar19 * 8);
        func_0x00010c2923e0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar21);
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
      lVar18 = lVar16;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar16);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf529e0();
  if (uVar24 == 0) {
    uStack_508 = 0;
    uVar17 = 0;
    bVar13 = false;
    puStack_530 = (undefined *)0x0;
  }
  else {
    puStack_530 = (undefined *)0x0;
    bVar13 = false;
    uVar17 = 0;
    uStack_508 = 0;
    uVar24 = 0;
    do {
      uVar20 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar20;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010befa120(puVar3);
      if ((uVar17 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar20;
        func_0x00010c2923e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar21;
        func_0x00010c0720c0();
        uVar17 = (uint)uVar7 ^ 1;
        _objc_release(uVar4);
        _objc_release(uVar21);
        _objc_release(uVar6);
      }
      else {
        uVar17 = 1;
      }
      if (*(char *)(param_1 + _DAT_112776f80) == '\x01' && uStack_508 == 0) {
        uVar4 = uVar20;
        func_0x00010c079cc0();
        if ((int)uVar4 == 0) {
          uStack_508 = 0;
        }
        else {
          _objc_retain(uVar20);
          uStack_508 = uVar20;
        }
      }
      puVar8 = PTR_PTR_1126da4c0;
      func_0x00010c06d480();
      if ((int)puVar8 != 0) {
        func_0x00010be0ff40(param_1);
      }
      puVar8 = PTR_PTR_1126da4c0;
      func_0x00010bfdb5a0();
      if ((int)puVar8 != 0) {
        puVar8 = puVar5;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0d7280();
        _objc_release(puVar8);
        if ((int)puVar9 != 0) {
          if (puStack_530 == (undefined *)0x0) {
            puStack_530 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
          }
          func_0x00010befa120();
        }
      }
      puVar8 = PTR_PTR_1126da4c0;
      func_0x00010bf09b20();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010c288bc0(puVar5);
        bVar13 = true;
      }
      _objc_release(puVar5);
      _objc_release(uVar20);
      uVar24 = uVar24 + 1;
      uVar20 = param_3;
      func_0x00010bf529e0();
    } while (uVar24 < uVar20);
  }
  uVar21 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf51e00();
  func_0x00010c16a300(*(undefined8 *)(param_1 + lVar14));
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if ((*(byte *)(param_1 + _DAT_112776f80) & 1) != 0) {
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_1085c9040;
    puStack_338 = &UNK_1109101a8;
    lStack_330 = param_1;
    _objc_retain(uStack_508);
    uStack_328 = uStack_508;
    ppuVar10 = &puStack_350;
    _objc_retainBlock(ppuVar10);
    func_0x00010befa120(puVar5);
    _objc_release(ppuVar10);
    _objc_release(uStack_328);
  }
  puVar8 = puStack_530;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    uStack_370 = 0x1085c9050;
    puStack_368 = &UNK_1109101a8;
    lStack_360 = param_1;
    _objc_retain(puStack_530);
    puStack_358 = puStack_530;
    ppuVar10 = &puStack_380;
    _objc_retainBlock(ppuVar10);
    func_0x00010befa120(puVar5);
    _objc_release(ppuVar10);
    _objc_release(puStack_358);
  }
  if ((uVar17 & 1) != 0 || bVar13) {
    puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3b0 = 0xc2000000;
    uStack_3a8 = 0x1085c9060;
    puStack_3a0 = &UNK_110a59c80;
    uStack_388 = (undefined1)uVar17;
    lStack_398 = param_1;
    _objc_retain(uVar21);
    ppuVar10 = &puStack_3b8;
    uStack_390 = uVar21;
    _objc_retainBlock(ppuVar10);
    func_0x00010befa120(puVar5);
    _objc_release(ppuVar10);
    _objc_release(uStack_390);
  }
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  lVar16 = *(long *)(param_1 + lVar14);
  _objc_retain(lVar16);
  lVar18 = lVar16;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar15 = *plStack_3f0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_3f0 != lVar15) {
          _objc_enumerationMutation(lVar16);
        }
        uVar23 = *(undefined8 *)(lStack_3f8 + lVar19 * 8);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uVar7 = uVar23;
        func_0x00010c159240();
        uVar6 = uVar23;
        func_0x00010c0fbcc0();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar6;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar22;
        func_0x00010c159240();
        _objc_release(uVar22);
        _objc_release(uVar6);
        if ((int)uVar7 != (int)uVar11) {
          puStack_428 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_420 = 0xc2000000;
          pcStack_418 = FUN_1085c9074;
          puStack_410 = &UNK_110841f50;
          ppuVar10 = &puStack_428;
          uStack_408 = uVar23;
          _objc_retainBlock(ppuVar10);
          func_0x00010befa120(puVar8);
          _objc_release(ppuVar10);
        }
        puVar9 = puVar8;
        func_0x00010bf529e0();
        if (puVar9 != (undefined *)0x0) {
          puVar9 = puVar8;
          FUN_108617a10(puVar8,PTR___dispatch_main_q_11034be20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(puVar9);
        }
        _objc_release(puVar8);
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
      lVar18 = lVar16;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar16);
  dVar25 = 0.0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  lVar14 = *(long *)(param_1 + lVar14);
  _objc_retain(lVar14);
  lVar18 = lVar14;
  func_0x00010bf52a60();
  if (lVar18 == 0) {
    dVar26 = 0.0;
  }
  else {
    lVar16 = *plStack_460;
    dVar26 = 0.0;
    do {
      lVar15 = 0;
      dVar27 = dVar26;
      do {
        dVar26 = dVar25;
        if (*plStack_460 != lVar16) {
          _objc_enumerationMutation(lVar14);
          dVar26 = dVar25;
        }
        puVar8 = PTR_PTR_1126da4c0;
        uVar22 = *(undefined8 *)(lStack_468 + lVar15 * 8);
        uVar7 = uVar22;
        func_0x00010c0fbcc0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdb5e0();
        _objc_release(uVar6);
        _objc_release(uVar7);
        uVar7 = uVar22;
        func_0x00010c0fbcc0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar8 == 0) {
          uVar6 = uVar7;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar6;
          func_0x00010c2524a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar7);
          func_0x00010c0fbcc0(uVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe07e0();
          dVar25 = dVar26;
          _objc_release(uVar22);
        }
        else {
          func_0x00010bfb68e0();
          _CGRectGetHeight();
          uVar11 = uVar7;
          dVar25 = dVar26;
        }
        _objc_release(uVar11);
        if (dVar26 <= dVar27) {
          dVar26 = dVar27;
        }
        lVar15 = lVar15 + 1;
        dVar27 = dVar26;
      } while (lVar18 != lVar15);
      lVar18 = lVar14;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar14);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_498 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_490 = 0xc2000000;
  pcStack_488 = FUN_1085c913c;
  puStack_480 = &UNK_110841f50;
  puStack_478 = puVar5;
  _objc_retain(puVar5);
  ppuVar10 = &puStack_498;
  _objc_retainBlock();
  puStack_4c8 = puVar8;
  uStack_4c0 = 0xc2000000;
  pcStack_4b8 = FUN_1085c9144;
  puStack_4b0 = &UNK_110a59b60;
  ppuVar12 = &puStack_4c8;
  lStack_4a8 = param_1;
  dStack_4a0 = dVar26;
  ppuStack_298 = ppuVar10;
  _objc_retainBlock();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_290 = ppuVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_4f8 = puVar8;
  uStack_4f0 = 0xc2000000;
  pcStack_4e8 = FUN_1085c91a0;
  puStack_4e0 = &UNK_11084aaa8;
  lStack_4d8 = param_1;
  uStack_4d0 = param_4;
  _objc_retain(param_4);
  puVar8 = PTR___dispatch_main_q_11034be20;
  FUN_108617acc(puVar9,PTR___dispatch_main_q_11034be20,&puStack_4f8);
  _objc_release(puVar9);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  _objc_release(uStack_4d0);
  _objc_release(puStack_478);
  _objc_release(puVar5);
  _objc_release(uVar21);
  _objc_release(uStack_508);
  _objc_release(puStack_530);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__animatePeekingUpdate_completion_112550578,
             *(undefined8 *)(param_3 + 0x28),puVar8);
  return;
}



/* Entry: 1085c9040; end: 1085c9073;  */

void FUN_1085c9040(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animatePeekingUpdate_completion_112550578,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1085c9074; end: 1085c913b;  */

void FUN_1085c9074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fbcc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c159240(*(undefined8 *)(param_1 + 0x20));
  uVar3 = uVar2;
  func_0x00010c2524c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03200(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1085c913c; end: 1085c9143;  */

void FUN_1085c913c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086178d0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c9144; end: 1085c919f;  */

void FUN_1085c9144(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010be21700(uVar1);
  func_0x00010bdcb1e0(param_1 + *(double *)(param_2 + 0x28) + 7.5,*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c91a0; end: 1085c91db;  */

void FUN_1085c91a0(long param_1)

{
  func_0x00010bedf000(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085c91cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085c91dc; end: 1085c9267; -[SCTGroupChatPresenceController _getPeekingPillHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085c91dc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_2 + _DAT_112776f80) == '\x01') {
    if (*(long *)(param_2 + _DAT_112776f84) != 0) {
      func_0x00010be216e0();
      _objc_retainAutoreleasedReturnValue();
      if (param_2 != 0) {
        lVar1 = param_2;
        func_0x00010c0fbcc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe0640();
        _objc_release(lVar1);
        uVar2 = param_1;
      }
      _objc_release(param_2);
    }
  }
  return uVar2;
}



/* Entry: 1085c9268; end: 1085c92db; -[SCTGroupChatPresenceController _getPeekingParticipant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c9268(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776f78);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fbcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079cc0();
  uVar1 = uVar2;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085c92dc; end: 1085c9723; -[SCTGroupChatPresenceController _getOrCreatePeekingParticipant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c92dc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar16 = (long)_DAT_112776f78;
  puVar15 = *(undefined **)(param_1 + lVar16);
  puVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar15 == (undefined *)0x0) {
    puVar17 = PTR_PTR_1126da4e0;
    _objc_alloc();
    puVar1 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c10ac40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c0fa800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06bb80();
    puVar7 = PTR_PTR_1126da4e8;
    _objc_opt_new();
    func_0x00010c05f740();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010c0fbcc0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010c0fbcc0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar1);
    lVar8 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar17;
    func_0x00010c0fbcc0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar8);
    _objc_release(puVar1);
    _objc_release(lVar8);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar17;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010bf493c0(0xc046800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar17;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493c0(0xc000000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar12);
    _objc_release(puVar2);
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    puVar1 = puVar17;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar17;
    param_4 = puVar1;
    func_0x00010c1d0640(uVar14);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar15);
    puVar17 = puVar15;
  }
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar13 = (long)_DAT_112776f84;
  if (*(long *)(param_3 + lVar13) == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = param_3;
    func_0x00010be216e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar17 = puVar2;
  func_0x00010c079cc0();
  if ((int)puVar17 != 0) {
    puVar17 = puVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar17 != (undefined *)0x0) {
      if (puVar15 != (undefined *)0x0) {
        puVar12 = puVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 == puVar17) {
          puVar12 = puVar15;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == puVar17) {
            puVar3 = puVar15;
            func_0x00010c0fbcc0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0d7280();
            _objc_release(puVar3);
            _objc_release(puVar12);
            if ((int)puVar4 != 0) {
              func_0x00010bec0f80(param_3);
            }
          }
          else {
            _objc_release(puVar12);
          }
          goto LAB_1085c982c;
        }
        func_0x00010bec3620(param_3);
      }
      func_0x00010bec0f80(param_3);
      func_0x00010be56ee0(param_3);
      goto LAB_1085c982c;
    }
  }
  if (puVar15 != (undefined *)0x0) {
    func_0x00010bec3620(param_3);
  }
  puVar17 = (undefined *)0x0;
LAB_1085c982c:
  puVar12 = puVar2;
  func_0x00010c079cc0();
  if ((int)puVar12 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = puVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = *(undefined8 *)(param_3 + lVar13);
  *(undefined **)(param_3 + lVar13) = puVar12;
  _objc_release(uVar14);
  FUN_1086179c0(puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085c9724; end: 1085c9917; -[SCTGroupChatPresenceController _animatePeekingUpdate:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c9724(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar8 = (long)_DAT_112776f84;
  if (*(long *)(param_1 + lVar8) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1;
    func_0x00010be216e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = param_3;
  func_0x00010c079cc0();
  if ((int)lVar7 != 0) {
    lVar7 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      if (lVar6 != 0) {
        lVar2 = lVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == lVar7) {
          lVar2 = lVar6;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == lVar7) {
            lVar3 = lVar6;
            func_0x00010c0fbcc0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c0d7280();
            _objc_release(lVar3);
            _objc_release(lVar2);
            if ((int)lVar4 != 0) {
              func_0x00010bec0f80(param_1);
            }
          }
          else {
            _objc_release(lVar2);
          }
          goto LAB_1085c982c;
        }
        func_0x00010bec3620(param_1);
      }
      func_0x00010bec0f80(param_1);
      func_0x00010be56ee0(param_1);
      goto LAB_1085c982c;
    }
  }
  if (lVar6 != 0) {
    func_0x00010bec3620(param_1);
  }
  lVar7 = 0;
LAB_1085c982c:
  lVar2 = param_3;
  func_0x00010c079cc0();
  if ((int)lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar2;
  _objc_release(uVar5);
  FUN_1086179c0(puVar1,param_4);
  _objc_release(param_4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085c9918; end: 1085c99b7; -[SCTGroupChatPresenceController _logPeekingEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c9918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776f7c);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0a8c80(uVar2,param_2,2,0x22,0x17,uVar1,0,0,0,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085c99b8; end: 1085c9b13; -[SCTGroupChatPresenceController _startPeeking:tasks:] */

void FUN_1085c99b8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be21180(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010bfd4a60();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010be0ff40(param_1,param_2,uVar1);
      goto LAB_1085c9ab4;
    }
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085c9b14;
  puStack_58 = &UNK_1109101a8;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retainBlock(&puStack_70);
  func_0x00010befa120(param_4,param_2,ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
LAB_1085c9ab4:
  func_0x00010c079cc0(param_3);
  uVar2 = uVar1;
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b33c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c9b14; end: 1085c9b7f;  */

void FUN_1085c9b14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079cc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf03020(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c9b80; end: 1085c9c53; -[SCTGroupChatPresenceController _stopPeekingForParticipant:tasks:] */

void FUN_1085c9b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085c9c54;
  puStack_40 = &UNK_110841f50;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  func_0x00010befa120(param_4,param_2,ppuVar1);
  _objc_release(param_4);
  _objc_release(ppuVar1);
  uVar2 = param_3;
  func_0x00010c0fbcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b33c0();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085c9c54; end: 1085c9ca7;  */

void FUN_1085c9c54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0fbcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085c9ca8; end: 1085c9cb7; -[SCTGroupChatPresenceController _pillForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c9ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776f74),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1085c9cb8; end: 1085c9cd7; -[SCTGroupChatPresenceController _orderedParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085c9cb8(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_112776f70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085c9cd8; end: 1085c9f73; -[SCTGroupChatPresenceController presenceBar:pointInside:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1085c9cd8(double param_1,double param_2,long param_3,undefined8 param_4,undefined1 *param_5,
             undefined1 *param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1e0;
  double dStack_1d0;
  double dStack_1c8;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  puVar9 = &uStack_160;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_5;
  _objc_retain(param_5);
  lVar14 = (long)_DAT_112776f70;
  lVar1 = *(long *)(param_3 + lVar14);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar11 = (undefined1 *)0x0;
    dVar16 = param_2;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_5;
    func_0x00010bf51200();
    dVar16 = param_1;
    _objc_release(lVar1);
    uVar2 = *(ulong *)(param_3 + lVar14);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    lVar1 = param_3;
    dVar17 = dVar16;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar18 = dVar17 + -35.0;
    uVar4 = *(undefined8 *)(param_3 + lVar14);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxX();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release();
    _CGRectContainsPoint(dVar16,dVar18,dVar17,0x4041800000000000,param_1,param_2);
    dVar16 = param_1;
    param_1 = param_2;
    if ((uVar2 & 1) == 0) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      lVar14 = *(long *)(param_3 + lVar14);
      _objc_retain(lVar14);
      param_6 = auStack_118;
      lVar1 = lVar14;
      func_0x00010bf52a60();
      puVar11 = (undefined1 *)0x0;
      if (lVar1 != 0) {
        lVar12 = *plStack_150;
        do {
          lVar13 = 0;
          do {
            if (*plStack_150 != lVar12) {
              _objc_enumerationMutation(lVar14);
            }
            uVar2 = *(ulong *)(lStack_158 + lVar13 * 8);
            func_0x00010c0fbcc0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bfb68e0();
            _CGRectContainsPoint();
            _objc_release(uVar2);
            if ((uVar3 & 1) != 0) {
              puVar11 = (undefined1 *)0x1;
              goto LAB_1085c9f18;
            }
            lVar13 = lVar13 + 1;
          } while (lVar1 != lVar13);
          param_6 = auStack_118;
          lVar1 = lVar14;
          puVar9 = &uStack_160;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
        puVar11 = (undefined1 *)0x0;
      }
LAB_1085c9f18:
      _objc_release(lVar14);
      puVar10 = (undefined1 *)puVar9;
    }
    else {
      puVar11 = (undefined1 *)0x1;
    }
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar11;
  }
  ___stack_chk_fail();
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_1d0 = param_1;
  dStack_1c8 = dVar16;
  _objc_retain(puVar10);
  _objc_retain(param_6);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  _objc_retain(puVar10);
  puVar11 = puVar10;
  func_0x00010bf52a60();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar11 != (undefined1 *)0x0) {
    lVar1 = *plStack_290;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_290 != lVar1) {
          _objc_enumerationMutation(puVar10);
        }
        uStack_2a8 = *(undefined8 *)(lStack_298 + (long)puVar15 * 8);
        puStack_2c8 = puVar8;
        uStack_2c0 = 0xc2000000;
        pcStack_2b8 = FUN_1085ca118;
        puStack_2b0 = &UNK_110841f50;
        ppuVar7 = &puStack_2c8;
        _objc_retainBlock(ppuVar7);
        func_0x00010befa120(puVar6);
        _objc_release(ppuVar7);
        puVar15 = puVar15 + 1;
      } while (puVar11 != puVar15);
      puVar11 = puVar10;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar8 = PTR___dispatch_main_q_11034be20;
  FUN_108617acc(puVar6,PTR___dispatch_main_q_11034be20,param_6);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar10 = *(undefined1 **)(puVar10 + 0x20);
  _objc_retain(puVar8);
  func_0x00010c0fbcc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02c60();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return puVar10;
}



/* Entry: 1085c9f74; end: 1085ca117; -[SCTGroupChatPresenceController _animateAvatarUpdateForParticipants:completion:] */

void FUN_1085c9f74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uStack_148 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        puStack_168 = puVar4;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_1085ca118;
        puStack_150 = &UNK_110841f50;
        ppuVar3 = &puStack_168;
        _objc_retainBlock(ppuVar3);
        func_0x00010befa120(puVar1);
        _objc_release(ppuVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR___dispatch_main_q_11034be20;
  FUN_108617acc(puVar1,PTR___dispatch_main_q_11034be20,param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(puVar4);
  func_0x00010c0fbcc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02c60();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}


