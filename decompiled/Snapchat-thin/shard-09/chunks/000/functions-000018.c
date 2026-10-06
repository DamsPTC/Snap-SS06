/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068186f0; end: 10681887f; -[SCImpalaLocalStoryStore _setupOwnedStoryStateObservationOnQueue] */

void FUN_1068186f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x90));
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  _objc_initWeak(auStack_38,param_1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010be088c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(param_1);
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = lVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar2;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106818880; end: 106818903;  */

void FUN_106818880(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar1;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      func_0x00010bf8dfc0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106818904; end: 106818953; -[SCImpalaLocalStoryStore setupOwnedStoryStateObservationIfNeeded] */

void FUN_106818904(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106818954;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 106818954; end: 10681895b;  */

void FUN_106818954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beae9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupOwnedStoryStateObservation_112589420);
  return;
}



/* Entry: 10681895c; end: 1068189a3; -[SCImpalaLocalStoryStore _setupOwnedStoryStateObservationIfNeededOnQueue] */

void FUN_10681895c(long param_1)

{
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  if ((*(char *)(param_1 + 0xb8) == '\x01') && (*(long *)(param_1 + 0x90) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010beaea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupOwnedStoryStateObservation_112589428)
    ;
    return;
  }
  return;
}



/* Entry: 1068189a4; end: 1068189df; -[SCImpalaLocalStoryStore emitOwnedStoryStateForSequences:] */

void FUN_1068189a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be6e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dfa0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068189e0; end: 106818c23; -[SCImpalaLocalStoryStore emitOwnedStoryStateForOrderedSnaps:] */

void FUN_1068189e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb0) + 1;
  *(long *)(param_1 + 0xb0) = lVar1;
  lVar2 = param_1;
  func_0x00010becbce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be193c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be712a0();
  lVar7 = param_1;
  func_0x00010be33e40();
  lVar8 = lVar5;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08fa60();
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_88,auStack_68);
  lStack_80 = lVar1;
  _objc_retain(lVar4);
  _objc_retain(lVar5);
  _objc_retain(lVar2);
  lStack_78 = lVar6;
  _objc_retain(uVar10);
  uStack_70 = (undefined1)lVar7;
  _objc_retain(lVar8);
  func_0x00010be85540(param_1);
  _objc_release(lVar8);
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar8);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106818c24; end: 106818e47;  */

void FUN_106818c24(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) == *(long *)(param_1 + 0x50))) {
    lVar2 = lVar1;
    func_0x00010bec4a60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(lVar2);
    func_0x00010be08100(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar2 = lVar1;
      func_0x00010be095a0();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar2 == 0) && (*(long *)(param_1 + 0x38) == 0)) {
        if (*(long *)(lVar1 + 0x20) != 0) {
          _objc_copyWeak(auStack_70,param_1 + 0x48);
          uStack_68 = *(undefined8 *)(param_1 + 0x50);
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          _objc_retain(uVar4);
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          _objc_retain(uVar5);
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_retain(uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          _objc_retain(uVar7);
          uStack_60 = *(undefined8 *)(param_1 + 0x58);
          _objc_retain(param_2);
          uStack_56 = *(undefined1 *)(param_1 + 0x60);
          uStack_58 = param_3;
          uStack_57 = (char)uVar3;
          func_0x00010be855c0(lVar1);
          _objc_release(param_2);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_destroyWeak(auStack_70);
        }
      }
      else {
        _objc_release();
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106818e48; end: 106818ef7;  */

void FUN_106818e48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) == *(long *)(param_1 + 0x50))) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if ((param_2 != 0) && (lVar2 != 0)) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0xc0));
    }
    func_0x00010be08100(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106818ef8; end: 106818fa7; -[SCImpalaLocalStoryStore _thumbnailOrderedSnapsFromPlaybackSnaps:] */

void FUN_106818ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_106818fa8();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106819048;
  puStack_40 = &UNK_110941d50;
  uStack_38 = uVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x00010c246ca0(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106818fa8; end: 106819047;  */

void FUN_106818fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  _objc_retain();
  func_0x00010c0ba140(puVar1,param_2,0x200,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10681dbf4;
  puStack_30 = &UNK_110941e80;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106819048; end: 10681905b;  */

ulong FUN_106819048(double param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = *(ulong *)(param_2 + 0x20);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(uVar7);
  uVar1 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  lVar2 = param_4;
  dVar9 = param_1;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar10 = dVar9;
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  lVar2 = param_4;
  if (param_1 == dVar9) {
    uVar8 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar8);
    lVar4 = param_4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    uVar8 = uVar1;
    func_0x00010c08fa60();
    if ((uVar8 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
      uVar8 = uVar1;
      func_0x00010c08fa60();
      if (uVar8 != 0) {
        uVar8 = 0xffffffffffffffff;
        goto LAB_106819128;
      }
      lVar4 = lVar2;
      func_0x00010c08fa60();
      uVar8 = (ulong)(lVar4 != 0);
    }
    else {
      uVar8 = uVar1;
      func_0x00010bf433a0();
    }
    if (uVar8 == 0) {
      uVar3 = uVar7;
      func_0x00010c0dff20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c0dff20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf433a0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
  }
  else {
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar9 = dVar10;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar8 = 0xffffffffffffffff;
    if (dVar10 <= dVar9) {
      uVar8 = 1;
    }
  }
LAB_106819128:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10681905c; end: 1068192af;  */

ulong FUN_10681905c(double param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  lVar2 = param_3;
  dVar8 = param_1;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar9 = dVar8;
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  lVar2 = param_3;
  if (param_1 == dVar8) {
    uVar7 = param_2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar7);
    lVar4 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    uVar7 = uVar1;
    func_0x00010c08fa60();
    if ((uVar7 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
      uVar7 = uVar1;
      func_0x00010c08fa60();
      if (uVar7 != 0) {
        uVar7 = 0xffffffffffffffff;
        goto LAB_106819128;
      }
      lVar4 = lVar2;
      func_0x00010c08fa60();
      uVar7 = (ulong)(lVar4 != 0);
    }
    else {
      uVar7 = uVar1;
      func_0x00010bf433a0();
    }
    if (uVar7 == 0) {
      uVar3 = param_4;
      func_0x00010c0dff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c0dff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf433a0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
  }
  else {
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar8 = dVar9;
    func_0x00010c26f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar7 = 0xffffffffffffffff;
    if (dVar9 <= dVar8) {
      uVar7 = 1;
    }
  }
LAB_106819128:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 1068192b0; end: 106819413; -[SCImpalaLocalStoryStore _friendSnapsFromOrderedSnaps:] */

undefined * FUN_1068192b0(ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = param_1;
        func_0x00010be43080();
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106819414;
  uStack_150 = unaff_x22;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puVar6 = (undefined1 *)puVar7;
  func_0x00010bf0e700(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(puVar6);
  bVar1 = *(byte *)(puStack_168 + 3);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(puVar7);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 106819414; end: 1068194ff; -[SCImpalaLocalStoryStore _isPublicStorySnap:] */

undefined1 FUN_106819414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106819500; end: 106819537;  */

void FUN_106819500(long param_1,long param_2)

{
  func_0x00010c27dd80();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 2;
  return;
}



/* Entry: 106819538; end: 106819727; -[SCImpalaLocalStoryStore _queryStoryUnviewedForSnap:completion:] */

void FUN_106819538(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x21;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined **unaff_x25;
  undefined1 auStack_d8 [8];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    unaff_x21 = param_3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x22 == 0) || (lVar1 = unaff_x21, func_0x00010c08fa60(), lVar1 == 0)) {
      param_2 = (undefined1 *)(ulong)(param_3 != 0);
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      _objc_initWeak(auStack_68,param_1);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_60 = unaff_x21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106819728;
      puStack_88 = &UNK_1108e9d98;
      _objc_retain(uVar4);
      param_2 = auStack_68;
      uStack_80 = uVar4;
      _objc_copyWeak(auStack_70);
      _objc_retain(param_4);
      lStack_78 = param_4;
      func_0x00010c121840(unaff_x22);
      _objc_release(puVar2);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar4);
      unaff_x25 = &puStack_a0;
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x30));
  _objc_destroyWeak(auStack_68);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106819728;
  lStack_d0 = unaff_x22;
  lStack_c8 = unaff_x21;
  lStack_c0 = param_4;
  lStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  _objc_copyWeak(auStack_d8,lVar1 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(param_2);
  return;
}



/* Entry: 106819728; end: 1068197fb;  */

void FUN_106819728(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1068197fc; end: 10681984f;  */

void FUN_1068197fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0(lVar3);
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106819850; end: 1068198d3; -[SCImpalaLocalStoryStore _storyIdentifierForSnap:] */

void FUN_106819850(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068198d4; end: 106819a9b; -[SCImpalaLocalStoryStore _queryStoryUnviewedBySnapForSnaps:completion:] */

void FUN_1068198d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar3 = &puStack_e0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,PTR____NSDictionary0__struct_11034ab58,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106819a9c;
    pcStack_70 = FUN_106819ac4;
    uStack_68 = 0;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106819acc;
    puStack_c8 = &UNK_110941db0;
    puStack_88 = &uStack_90;
    puStack_58 = &uStack_60;
    _objc_retain(param_3);
    lStack_c0 = param_3;
    _objc_retain(param_4);
    lStack_a8 = param_4;
    _objc_retain(puVar2);
    puStack_b8 = puVar2;
    uStack_b0 = param_1;
    puStack_a0 = &uStack_60;
    puStack_98 = &uStack_90;
    _objc_retainBlock();
    uVar4 = puStack_88[5];
    puStack_88[5] = ppuVar3;
    _objc_release(uVar4);
    (**(code **)(puStack_88[5] + 0x10))(puStack_88[5],0);
    _objc_release(puStack_b8);
    _objc_release(lStack_a8);
    _objc_release(lStack_c0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106819a9c; end: 106819ac3;  */

void FUN_106819a9c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 106819ac4; end: 106819acb;  */

void FUN_106819ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106819acc; end: 106819c23;  */

void FUN_106819acc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_2 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    (**(code **)(lVar2 + 0x10))
              (lVar2,uVar3,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18));
    _objc_release(uVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bec4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(uVar5);
  func_0x00010be85560(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 106819c24; end: 106819caf;  */

void FUN_106819c24(long param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar1 + 0x18) = param_2 | *(byte *)(lVar1 + 0x18);
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000106819cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x40) + 1);
  return;
}



/* Entry: 106819cb0; end: 106819f47; -[SCImpalaLocalStoryStore _emitOwnedStoryStateForFriendThumbnailSnap:topOwnedSnap:orderedSnaps:pendingCount:topThumbnailAsset:unviewedBySnapIdentifier:anyStoryUnviewed:friendStoryUnviewed:friendStoryPostingFailed:stackVersion:] */

void FUN_106819cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ce600;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c019c40((double)param_6);
  lVar2 = param_1;
  func_0x00010be095a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0320(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,uVar4);
  uVar7 = param_7;
  if ((int)uVar5 == 0) {
    uVar7 = 0;
  }
  func_0x00010c1a0300(puVar1,param_2,uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_9._2_1_);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a02e0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7ba0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c1d7b80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e60f98);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_5;
  func_0x00010bf529e0(param_5);
  func_0x00010c0df760(puVar6,param_2,lVar2 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7b60(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  uVar7 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a02c0(puVar1,param_2,uVar7);
  _objc_release(uVar7);
  lVar2 = param_1;
  func_0x00010be6eee0(param_1,param_2,param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  func_0x00010c1d7b40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106819f48; end: 10681a067; -[SCImpalaLocalStoryStore _ownedStorySnapModelsFromSnaps:topThumbnailAsset:unviewedBySnapIdentifier:] */

void FUN_106819f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10681a068;
  puStack_68 = &UNK_110941de0;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  _objc_retain();
  puStack_48 = puVar3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_80);
  _objc_release(param_3);
  puVar1 = puStack_48;
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10681a068; end: 10681a35f;  */

void FUN_10681a068(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be40540(uVar7);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126ce608;
  _objc_alloc(PTR_PTR_1126ce608);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07eac0(uVar7);
  func_0x00010c01f400(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd440(puVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010be095a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214160(puVar2);
  _objc_release(uVar7);
  func_0x00010c213e60(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bec4a60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20df40(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be43080(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3a60(puVar2);
  _objc_release(puVar3);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar6 = lVar1;
  if (lVar5 == 0) {
    func_0x00010c28f340(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2144c0(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c0df720(param_1 / 1000.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215dc0(puVar2);
  _objc_release(puVar3);
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x38));
  _objc_release(lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10681a360; end: 10681a50b; -[SCImpalaLocalStoryStore _orderedSnapsFromSequences:] */

undefined * FUN_10681a360(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar5 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar4;
  FUN_106818fa8();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 1.60807493534087e-314;
  _objc_retain();
  lVar6 = 0x10;
  func_0x00010c246c00(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar7 = *(undefined **)(param_3 + 0x20);
  _objc_retain();
  _objc_retain(lVar6);
  _objc_retain(puVar7);
  puVar4 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  lVar1 = lVar6;
  dVar11 = dVar13;
  func_0x00010c26f2a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar12 = dVar11;
  _objc_release(lVar1);
  _objc_release(puVar4);
  puVar4 = param_2;
  lVar1 = lVar6;
  if (dVar13 == dVar11) {
    puVar9 = param_2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar9);
    lVar8 = lVar6;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar8);
    puVar9 = puVar4;
    func_0x00010c08fa60();
    if ((puVar9 == (undefined *)0x0) || (lVar8 = lVar1, func_0x00010c08fa60(), lVar8 == 0)) {
      puVar9 = puVar4;
      func_0x00010c08fa60();
      if (puVar9 != (undefined *)0x0) {
        puVar9 = (undefined *)0xffffffffffffffff;
        goto LAB_106819128;
      }
      lVar8 = lVar1;
      func_0x00010c08fa60();
      puVar9 = (undefined *)(ulong)(lVar8 != 0);
    }
    else {
      puVar9 = puVar4;
      func_0x00010bf433a0();
    }
    if (puVar9 == (undefined *)0x0) {
      puVar2 = puVar7;
      func_0x00010c0dff20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0dff20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bf433a0(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  else {
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar13 = dVar12;
    func_0x00010c26f2a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    puVar9 = (undefined *)0xffffffffffffffff;
    if (dVar12 <= dVar13) {
      puVar9 = (undefined *)0x1;
    }
  }
LAB_106819128:
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(param_2);
  return puVar9;
}



/* Entry: 10681a50c; end: 10681a51f;  */

ulong FUN_10681a50c(double param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = *(ulong *)(param_2 + 0x20);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(uVar7);
  uVar1 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  lVar2 = param_4;
  dVar9 = param_1;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar10 = dVar9;
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  lVar2 = param_4;
  if (param_1 == dVar9) {
    uVar8 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar8);
    lVar4 = param_4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    uVar8 = uVar1;
    func_0x00010c08fa60();
    if ((uVar8 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
      uVar8 = uVar1;
      func_0x00010c08fa60();
      if (uVar8 != 0) {
        uVar8 = 0xffffffffffffffff;
        goto LAB_106819128;
      }
      lVar4 = lVar2;
      func_0x00010c08fa60();
      uVar8 = (ulong)(lVar4 != 0);
    }
    else {
      uVar8 = uVar1;
      func_0x00010bf433a0();
    }
    if (uVar8 == 0) {
      uVar3 = uVar7;
      func_0x00010c0dff20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c0dff20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf433a0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
  }
  else {
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar9 = dVar10;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar8 = 0xffffffffffffffff;
    if (dVar10 <= dVar9) {
      uVar8 = 1;
    }
  }
LAB_106819128:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10681a520; end: 10681a5a3; -[SCImpalaLocalStoryStore _isFailedSnapWithClientId:] */

long FUN_10681a520(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c105a00();
    func_0x00010be40520(param_1,param_2,uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10681a5a4; end: 10681a5f3; -[SCImpalaLocalStoryStore refreshOwnedStoryState] */

void FUN_10681a5a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10681a5f4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be721c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10681a5f4; end: 10681a61f;  */

void FUN_10681a5f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(char *)(lVar1 + 0xa8) == '\x01') && (*(long *)(lVar1 + 0xa0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_emitOwnedStoryStateForOrderedSna_1125c1190);
    return;
  }
  if (*(long *)(lVar1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_emitOwnedStoryStateForSequences__1125c1198);
    return;
  }
  return;
}



/* Entry: 10681a620; end: 10681a733; -[SCImpalaLocalStoryStore consumeJoinedOwnedStoryPlaybackInfos:publicSourceSettledEmpty:] */

void FUN_10681a620(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf51e00();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (((param_4 & 1) != 0) || (puVar2 != (undefined *)0x0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10681a6e8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(puStack_38);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10681a734; end: 10681a7eb; -[SCImpalaLocalStoryStore bindOwnedStoryJoinedStateFrom:] */

void FUN_10681a734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1d7b20(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10681a7ec; end: 10681a84b;  */

void FUN_10681a7ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf499a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10681a84c; end: 10681a903; -[SCImpalaLocalStoryStore _emptyOwnedStoryState] */

void FUN_10681a84c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ce600;
  _objc_alloc(PTR_PTR_1126ce600);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c019c40(0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7ba0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1d7b80(puVar2,param_2,&PTR____CFConstantStringClassReference_110e60f98);
  func_0x00010c1d7b60(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68);
  func_0x00010c1d7b40(puVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10681a904; end: 10681ab1b; -[SCImpalaLocalStoryStore _latestSnapFromSequences:] */

undefined8 * FUN_10681a904(undefined8 param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 unaff_x21;
  long lVar15;
  long unaff_x22;
  long unaff_x23;
  long lVar16;
  undefined8 *unaff_x24;
  long lVar17;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  ulong uVar18;
  long unaff_x28;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [128];
  undefined1 auStack_300 [128];
  long lStack_280;
  long lStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puVar11 = &uStack_1c0;
  puVar12 = auStack_100;
  lVar13 = param_3;
  lStack_210 = param_3;
  func_0x00010bf52a60();
  if (lVar13 == 0) {
    puStack_428 = (undefined8 *)0x0;
  }
  else {
    puStack_428 = (undefined8 *)0x0;
    lStack_208 = *plStack_1b0;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_1b0 != lStack_208) {
          _objc_enumerationMutation(lStack_210);
        }
        unaff_x22 = *(long *)(lStack_1b8 + unaff_x28 * 8);
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = unaff_x22;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          param_3 = *plStack_1f0;
          unaff_x23 = lVar3;
          do {
            unaff_x27 = 0;
            do {
              if (*plStack_1f0 != param_3) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(undefined8 **)(lStack_1f8 + unaff_x27 * 8);
              if (puStack_428 == (undefined8 *)0x0) {
LAB_10681aa5c:
                _objc_retain(unaff_x24);
                _objc_release(puStack_428);
                puStack_428 = unaff_x24;
              }
              else {
                unaff_x25 = unaff_x24;
                func_0x00010c26f2a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2709c0();
                dVar1 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19)))))));
                unaff_x26 = puStack_428;
                func_0x00010c26f2a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2709c0();
                dVar2 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19)))))));
                _objc_release(unaff_x26);
                _objc_release(unaff_x25);
                if (dVar2 <= dVar1) goto LAB_10681aa5c;
              }
              unaff_x27 = unaff_x27 + 1;
            } while (unaff_x23 != unaff_x27);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60(unaff_x22,param_2,&uStack_200,auStack_180,0x10);
          } while (unaff_x23 != 0);
        }
        _objc_release(unaff_x22);
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x28 != lVar13);
      puVar11 = &uStack_1c0;
      puVar12 = auStack_100;
      lVar13 = lStack_210;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
    unaff_x21 = 0;
  }
  _objc_release(lStack_210);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_218 = FUN_10681ab1c;
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_270 = unaff_x28;
    lStack_268 = unaff_x27;
    puStack_260 = unaff_x26;
    puStack_258 = unaff_x25;
    puStack_250 = unaff_x24;
    lStack_248 = unaff_x23;
    lStack_240 = unaff_x22;
    uStack_238 = unaff_x21;
    puStack_230 = puStack_428;
    lStack_228 = param_3;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puVar14 = puVar11;
    func_0x00010c08fa60();
    puStack_428 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar14 == (undefined8 *)0x0) {
      _objc_retain(puVar12);
      puStack_428 = puVar12;
    }
    else {
      puVar14 = puVar12;
      func_0x00010bf529e0(puVar12);
      func_0x00010bf0a0e0(puStack_428,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      lStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      _objc_retain(puVar12);
      puStack_420 = puVar12;
      func_0x00010bf52a60(puVar12,param_2,&uStack_3c0,auStack_300,0x10);
      if (puStack_420 != (undefined8 *)0x0) {
        lVar13 = *plStack_3b0;
        do {
          puVar14 = (undefined8 *)0x0;
          do {
            if (*plStack_3b0 != lVar13) {
              _objc_enumerationMutation(puVar12);
            }
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            lVar15 = *(long *)(lStack_3b8 + (long)puVar14 * 8);
            lVar3 = lVar15;
            func_0x00010c25b340(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf529e0();
            func_0x00010bf0a0e0(puVar5,param_2,lVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            lStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            plStack_3f0 = (long *)0x0;
            lVar3 = lVar15;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf52a60();
            if (lVar4 != 0) {
              lVar17 = *plStack_3f0;
              do {
                lVar16 = 0;
                do {
                  if (*plStack_3f0 != lVar17) {
                    _objc_enumerationMutation(lVar3);
                  }
                  uVar18 = *(ulong *)(lStack_3f8 + lVar16 * 8);
                  uVar6 = uVar18;
                  func_0x00010bf3cf60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x000108ea5f00();
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  func_0x00010c0720c0();
                  if ((int)uVar8 == 0) {
                    uVar8 = uVar18;
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar8;
                    func_0x00010c0720c0();
                    _objc_release(uVar8);
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                    if ((uVar9 & 1) == 0) {
                      func_0x00010befa120(puVar5,param_2,uVar18);
                    }
                  }
                  else {
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar4 != lVar16);
                lVar4 = lVar3;
                func_0x00010bf52a60(lVar3,param_2,&uStack_400,auStack_380,0x10);
              } while (lVar4 != 0);
            }
            _objc_release(lVar3);
            puVar10 = PTR_PTR_1126b1338;
            _objc_alloc(PTR_PTR_1126b1338);
            lVar3 = lVar15;
            func_0x00010c259cc0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar15;
            func_0x00010c25b720(lVar15);
            func_0x00010c297440(lVar15);
            func_0x00010c04dbe0(puVar10,param_2,lVar3,lVar4,puVar5,lVar15);
            func_0x00010befa120(puStack_428,param_2,puVar10);
            _objc_release(puVar10);
            _objc_release(lVar3);
            _objc_release(puVar5);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar14 != puStack_420);
          puStack_420 = puVar12;
          func_0x00010bf52a60(puVar12,param_2,&uStack_3c0,auStack_300,0x10);
        } while (puStack_420 != (undefined8 *)0x0);
      }
      _objc_release(puVar12);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
      ___stack_chk_fail();
      puVar12 = puVar11;
      func_0x00010be6e4a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be712a0(puVar11,param_2,puVar12);
      _objc_release(puVar12);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_428);
  return puStack_428;
}



/* Entry: 10681ab1c; end: 10681ae87; -[SCImpalaLocalStoryStore _sequencesByRemovingSnapWithComponentId:fromSequences:] */

undefined *
FUN_10681ab1c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = param_3;
  func_0x00010c08fa60();
  puStack_218 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(param_4);
    puStack_218 = param_4;
  }
  else {
    puVar10 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010bf0a0e0(puStack_218,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(param_4);
    puStack_210 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_1b0,auStack_f0,0x10);
    if (puStack_210 != (undefined *)0x0) {
      lVar9 = *plStack_1a0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          lVar11 = *(long *)(lStack_1a8 + (long)puVar10 * 8);
          lVar1 = lVar11;
          func_0x00010c25b340(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf529e0();
          func_0x00010bf0a0e0(puVar3,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar1 = lVar11;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar13 = *plStack_1e0;
            do {
              lVar12 = 0;
              do {
                if (*plStack_1e0 != lVar13) {
                  _objc_enumerationMutation(lVar1);
                }
                uVar14 = *(ulong *)(lStack_1e8 + lVar12 * 8);
                uVar4 = uVar14;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010c0720c0();
                if ((int)uVar6 == 0) {
                  uVar6 = uVar14;
                  func_0x00010c15f2e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x00010c0720c0();
                  _objc_release(uVar6);
                  _objc_release(uVar5);
                  _objc_release(uVar4);
                  if ((uVar7 & 1) == 0) {
                    func_0x00010befa120(puVar3,param_2,uVar14);
                  }
                }
                else {
                  _objc_release(uVar5);
                  _objc_release(uVar4);
                }
                lVar12 = lVar12 + 1;
              } while (lVar2 != lVar12);
              lVar2 = lVar1;
              func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar2 != 0);
          }
          _objc_release(lVar1);
          puVar8 = PTR_PTR_1126b1338;
          _objc_alloc(PTR_PTR_1126b1338);
          lVar1 = lVar11;
          func_0x00010c259cc0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar11;
          func_0x00010c25b720(lVar11);
          func_0x00010c297440(lVar11);
          func_0x00010c04dbe0(puVar8,param_2,lVar1,lVar2,puVar3,lVar11);
          func_0x00010befa120(puStack_218,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(lVar1);
          _objc_release(puVar3);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puStack_210);
        puStack_210 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (puStack_210 != (undefined *)0x0);
    }
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_218);
    return puStack_218;
  }
  ___stack_chk_fail();
  puVar10 = param_3;
  func_0x00010be6e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be712a0(param_3,param_2,puVar10);
  _objc_release(puVar10);
  return param_3;
}



/* Entry: 10681ae88; end: 10681aecf; -[SCImpalaLocalStoryStore _pendingSnapCountFromSequences:] */

undefined8 FUN_10681ae88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be6e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be712a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10681aed0; end: 10681b00b; -[SCImpalaLocalStoryStore _pendingSnapCountFromSnaps:] */

undefined * FUN_10681aed0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  long lVar10;
  long unaff_x25;
  undefined1 *puVar11;
  ulong unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar1 = param_3;
  func_0x00010bf52a60();
  if (uVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x26 * 8);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = param_1;
        func_0x00010c07eac0(param_1,param_2,unaff_x23);
        _objc_release(unaff_x23);
        puVar9 = puVar9 + (unaff_x24 & 0xffffffff);
        unaff_x26 = unaff_x26 + 1;
      } while (uVar1 != unaff_x26);
      uVar1 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
    unaff_x22 = 0;
  }
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_250;
  pcStack_138 = FUN_10681b00c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = puVar9;
  uStack_150 = param_1;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar7);
  puVar2 = (undefined1 *)puVar7;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_240;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar10) {
          _objc_enumerationMutation(puVar7);
        }
        puVar3 = *(undefined1 **)(lStack_248 + (long)puVar11 * 8);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        puVar8 = (undefined8 *)puVar3;
        func_0x00010be40540();
        _objc_release(puVar3);
        if ((uVar4 & 1) != 0) {
          puVar9 = (undefined *)0x1;
          goto LAB_10681b104;
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = (undefined1 *)puVar7;
      puVar8 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar9 = (undefined *)0x0;
LAB_10681b104:
  _objc_release(puVar7);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined1 *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10681b418;
  }
  puVar11 = puVar2;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010c08fa60();
  puVar5 = puVar2;
  if (puVar3 == (undefined1 *)0x0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar11);
  puVar11 = puVar5;
  func_0x00010c08fa60();
  if (puVar11 == (undefined1 *)0x0) {
    puVar11 = puVar2;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c08fa60();
    _objc_release(puVar11);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10681b210;
    puVar9 = (undefined *)0x0;
  }
  else {
LAB_10681b210:
    puVar9 = PTR_PTR_1126b63f8;
    _objc_opt_new(PTR_PTR_1126b63f8);
    puVar11 = puVar2;
    func_0x00010c086560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar9,param_2,puVar11);
    _objc_release(puVar11);
    puVar11 = puVar2;
    func_0x00010c085300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puVar9,param_2,puVar11);
    _objc_release(puVar11);
    func_0x00010c21d340(puVar9,param_2,puVar5);
    puVar11 = puVar2;
    func_0x00010c0ed6a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175100(puVar9,param_2,puVar11);
    _objc_release(puVar11);
    puVar11 = puVar2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)puVar8;
      func_0x00010bf3cf60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17cd20(puVar9,param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c17cd20(puVar9,param_2,puVar11);
    }
    _objc_release(puVar11);
    puVar11 = puVar2;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c08fa60();
    _objc_release(puVar11);
    if (puVar3 != (undefined1 *)0x0) {
      puVar6 = PTR_PTR_1126ce610;
      _objc_opt_new(PTR_PTR_1126ce610);
      func_0x00010c1822c0(puVar9,param_2,puVar6);
      _objc_release(puVar6);
      puVar11 = puVar2;
      func_0x00010bf4cd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40();
      _objc_release(puVar6);
      _objc_release(puVar11);
      puVar11 = puVar2;
      func_0x00010bf4cd20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0();
      _objc_release(puVar6);
      _objc_release(puVar11);
      puVar11 = puVar2;
      func_0x00010bf4cce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0();
      _objc_release(puVar6);
      _objc_release(puVar11);
    }
  }
  _objc_release(puVar5);
LAB_10681b418:
  _objc_release(puVar2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10681b00c; end: 10681b14f; -[SCImpalaLocalStoryStore _hasFailedSnapInSnaps:] */

undefined * FUN_10681b00c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = *(undefined1 **)(lStack_118 + lVar11 * 8);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        puVar8 = (undefined8 *)puVar2;
        func_0x00010be40540();
        _objc_release(puVar2);
        if ((uVar3 & 1) != 0) {
          puVar9 = (undefined *)0x1;
          goto LAB_10681b104;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_10681b104:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined1 *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10681b418;
  }
  puVar4 = puVar2;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  puVar6 = puVar2;
  if (puVar5 == (undefined1 *)0x0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c08fa60();
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = puVar2;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar5 != (undefined1 *)0x0) goto LAB_10681b210;
    puVar9 = (undefined *)0x0;
  }
  else {
LAB_10681b210:
    puVar9 = PTR_PTR_1126b63f8;
    _objc_opt_new(PTR_PTR_1126b63f8);
    puVar4 = puVar2;
    func_0x00010c086560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar9,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c085300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puVar9,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c21d340(puVar9,param_2,puVar6);
    puVar4 = puVar2;
    func_0x00010c0ed6a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175100(puVar9,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)puVar8;
      func_0x00010bf3cf60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17cd20(puVar9,param_2,puVar5);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c17cd20(puVar9,param_2,puVar4);
    }
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar5 != (undefined1 *)0x0) {
      puVar7 = PTR_PTR_1126ce610;
      _objc_opt_new(PTR_PTR_1126ce610);
      func_0x00010c1822c0(puVar9,param_2,puVar7);
      _objc_release(puVar7);
      puVar4 = puVar2;
      func_0x00010bf4cd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40();
      _objc_release(puVar7);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf4cd20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0();
      _objc_release(puVar7);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf4cce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010bf4cd00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0();
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar6);
LAB_10681b418:
  _objc_release(puVar2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10681b150; end: 10681b43f; -[SCImpalaLocalStoryStore _encryptedThumbnailForSnap:] */

void FUN_10681b150(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10681b418;
  }
  lVar2 = lVar1;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = lVar1;
  if (lVar3 == 0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) goto LAB_10681b210;
    puVar6 = (undefined *)0x0;
  }
  else {
LAB_10681b210:
    puVar6 = PTR_PTR_1126b63f8;
    _objc_opt_new(PTR_PTR_1126b63f8);
    lVar2 = lVar1;
    func_0x00010c086560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c085300(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c21d340(puVar6,param_2,lVar4);
    lVar2 = lVar1;
    func_0x00010c0ed6a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175100(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17cd20(puVar6,param_2,lVar3);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c17cd20(puVar6,param_2,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar5 = PTR_PTR_1126ce610;
      _objc_opt_new(PTR_PTR_1126ce610);
      func_0x00010c1822c0(puVar6,param_2,puVar5);
      _objc_release(puVar5);
      lVar2 = lVar1;
      func_0x00010bf4cd40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf4cd00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40();
      _objc_release(puVar5);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf4cd20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf4cd00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0();
      _objc_release(puVar5);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf4cce0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf4cd00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0();
      _objc_release(puVar5);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar4);
LAB_10681b418:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10681b440; end: 10681b5af; -[SCImpalaLocalStoryStore _queryThumbnailAssetForSnap:completion:] */

void FUN_10681b440(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar4 = param_1;
    func_0x00010be43080();
    uVar5 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010bdedfa0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdf4b40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_retain(param_4);
    func_0x00010c11da60(uVar1);
    _objc_release(uVar6);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10681b5b0; end: 10681b64f;  */

void FUN_10681b5b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010b971468();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10681b650; end: 10681ba5f; -[SCImpalaLocalStoryStore emitSnapshotForSequences:] */

void FUN_10681b650(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  double dVar17;
  undefined **ppuStack_250;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010be0a340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf9edc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(ppuVar1);
  ppuStack_250 = ppuVar1;
  func_0x00010bf52a60();
  ppuVar13 = ppuVar1;
  if (ppuStack_250 != (undefined **)0x0) {
    lVar11 = *plStack_1b0;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_1b0 != lVar11) {
          _objc_enumerationMutation(ppuVar1);
        }
        ppuVar15 = *(undefined ***)(lStack_1b8 + (long)ppuVar12 * 8);
        dVar17 = 0.0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar15;
        func_0x00010bf52a60();
        if (ppuVar4 != (undefined **)0x0) {
          lVar14 = *plStack_1f0;
          do {
            ppuVar13 = (undefined **)0x0;
            do {
              if (*plStack_1f0 != lVar14) {
                _objc_enumerationMutation(ppuVar15);
              }
              lVar16 = *(long *)(lStack_1f8 + (long)ppuVar13 * 8);
              lVar5 = lVar16;
              func_0x00010c26d760();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c0880c0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c08fa60();
              _objc_release(lVar6);
              _objc_release(lVar5);
              func_0x00010c26d760();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar16;
              if (lVar7 == 0) {
                func_0x00010c28f340();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010c0880c0();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(lVar16);
              if (((lVar5 == 0) || (lVar6 = lVar5, func_0x00010c08fa60(), lVar6 == 0)) &&
                 (ppuVar8 = param_1, func_0x00010beb3bc0(), (int)ppuVar8 != 0)) {
                func_0x00010befa120(puVar3);
              }
              _objc_release(lVar5);
              ppuVar13 = (undefined **)((long)ppuVar13 + 1);
            } while (ppuVar4 != ppuVar13);
            ppuVar4 = ppuVar15;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
        }
        _objc_release(ppuVar15);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar12 != ppuStack_250);
      ppuStack_250 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuStack_250 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  puVar9 = puVar3;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = PTR_PTR_1126ce618;
    _objc_alloc_init(PTR_PTR_1126ce618);
    func_0x00010c1b6420();
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar17 = dVar17 * 1000.0;
    func_0x00010c215dc0(dVar17,puVar9);
    _objc_release(puVar10);
    func_0x00010c0d9840(param_1[10]);
    _objc_release(puVar9);
  }
  else {
    _objc_initWeak(auStack_208,param_1);
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    dVar17 = 1.60807493534087e-314;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_10681ba60;
    puStack_220 = &UNK_110841fb0;
    ppuVar13 = &puStack_238;
    _objc_copyWeak(auStack_210,auStack_208);
    _objc_retain(ppuVar1);
    ppuStack_218 = ppuVar1;
    func_0x00010bf96580(param_1);
    _objc_release(ppuStack_218);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_208);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar13 + 5);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar11 = param_3;
    func_0x00010bf9edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ce618;
    _objc_alloc_init(PTR_PTR_1126ce618);
    func_0x00010c1b6420();
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215dc0(dVar17 * 1000.0,puVar3);
    _objc_release(puVar9);
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x50));
    _objc_release(puVar3);
    _objc_release(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10681ba60; end: 10681bb1b;  */

void FUN_10681ba60(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf9edc0(lVar1,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ce618;
    _objc_alloc_init(PTR_PTR_1126ce618);
    func_0x00010c1b6420();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215dc0(param_1 * 1000.0,puVar3);
    _objc_release(puVar4);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x50),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10681bb1c; end: 10681bbab; -[SCImpalaLocalStoryStore _shouldFetchSnapshotThumbnailForSnap:fromSequence:] */

undefined8 FUN_10681bb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c25b720();
  if (param_4 == 3) {
    uVar1 = param_3;
    func_0x00010bf0e700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07f5e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10681bbac; end: 10681bc57; -[SCImpalaLocalStoryStore emitSpotlightSnapshot] */

void FUN_10681bbac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10681bc58;
  puStack_40 = &UNK_110941e10;
  lStack_38 = param_1;
  func_0x00010c11d5e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e43098,uVar2,
                      &puStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10681bc58; end: 10681bc6b;  */

void FUN_10681bc58(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_emitSnapshotForSequence__1125c11d0,param_2);
    return;
  }
  return;
}



/* Entry: 10681bc6c; end: 10681bcf7; -[SCImpalaLocalStoryStore emitCurrentPlaybackSnapshot] */

void FUN_10681bc6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  func_0x00010befa160();
  puVar1 = puVar2;
  if (*(undefined **)(param_1 + 0x78) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x78);
  }
  func_0x00010befa160(puVar3,param_2,puVar1);
  if (*(undefined **)(param_1 + 0x80) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x80);
  }
  func_0x00010befa160(puVar3,param_2,puVar2);
  func_0x00010bf8e0c0(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10681bcf8; end: 10681c0fb; -[SCImpalaLocalStoryStore emitSnapshotForSequence:] */

void FUN_10681bcf8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined *unaff_x22;
  ulong unaff_x23;
  long lVar20;
  long unaff_x24;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  undefined *unaff_x27;
  long lVar24;
  undefined *unaff_x28;
  double dVar25;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  undefined **ppuStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  code *pcStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined **ppuStack_458;
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined auStack_2a0 [128];
  long lStack_220;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined auStack_f8 [128];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = param_1;
  _objc_retain(param_3);
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = param_3;
  puStack_78 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_190;
  func_0x00010be0a340();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar3;
  _objc_release(puVar22);
  puVar3 = puStack_1a8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puStack_1b0;
  if (puVar3 != (undefined *)0x0) {
    puVar22 = puVar3;
  }
  _objc_retain(puVar22);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_198 = puVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar5 = puVar22;
  puStack_1a0 = puVar4;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_f8;
  ppuVar17 = (undefined **)0x10;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    unaff_x24 = *plStack_130;
    do {
      unaff_x22 = (undefined *)0x0;
      do {
        if (*plStack_130 != unaff_x24) {
          _objc_enumerationMutation(puVar5);
        }
        unaff_x27 = *(undefined **)(lStack_138 + (long)unaff_x22 * 8);
        puVar3 = puVar22;
        func_0x00010c25b720();
        if (puVar3 == (undefined *)0x3) {
          puVar3 = unaff_x27;
          func_0x00010bf0e700();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf0a8c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = puVar6;
          func_0x00010c07f5e0();
          _objc_release(puVar6);
          _objc_release(puVar3);
          if ((int)unaff_x28 != 0) {
            unaff_x28 = puStack_190;
            func_0x00010c0b9d80();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x28 != (undefined *)0x0) {
              func_0x00010befa120(puStack_198);
              puVar3 = unaff_x28;
              func_0x00010c26e4e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                puVar6 = unaff_x28;
                func_0x00010c26e4e0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c08fa60();
                unaff_x23 = (ulong)(puVar7 == (undefined *)0x0);
                _objc_release(puVar6);
                _objc_release(puVar3);
                if (puVar7 != (undefined *)0x0) goto LAB_10681bf14;
              }
              func_0x00010befa120(puStack_1a0);
            }
LAB_10681bf14:
            _objc_release(unaff_x28);
          }
        }
        unaff_x22 = unaff_x22 + 1;
      } while (puVar4 != unaff_x22);
      puVar3 = auStack_f8;
      ppuVar17 = (undefined **)0x10;
      puVar4 = puVar5;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar4 = puStack_1a0;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ce618;
    _objc_alloc_init();
    func_0x00010c1b6420();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215dc0(dVar25 * 1000.0,puVar5);
    _objc_release(ppuVar8);
    puVar4 = puVar5;
    func_0x00010c0d9840(*(undefined8 *)(puStack_190 + 0x50));
    _objc_release(puVar5);
  }
  else {
    _objc_initWeak(auStack_148,puStack_190);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_10681c0fc;
    puStack_170 = &UNK_110850cf8;
    ppuVar8 = &puStack_188;
    _objc_copyWeak(auStack_150,auStack_148);
    puVar4 = puStack_198;
    _objc_retain(puStack_198);
    unaff_x22 = puStack_1a0;
    puStack_168 = puVar4;
    _objc_retain(puStack_1a0);
    puStack_160 = unaff_x22;
    _objc_retain(puVar22);
    ppuVar17 = &puStack_188;
    puVar3 = unaff_x22;
    puStack_158 = puVar22;
    func_0x00010bf96580(puStack_190);
    _objc_release(puStack_158);
    _objc_release(puStack_160);
    _objc_release(puStack_168);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
  }
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puVar22);
  _objc_release(puStack_1a8);
  puVar6 = puStack_1b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 7);
  _objc_destroyWeak(auStack_148);
  puVar9 = puVar6;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10681c0fc;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9 + 0x38;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  uStack_200 = 0;
  puStack_1f8 = puVar5;
  lStack_1f0 = unaff_x24;
  uStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  puStack_1d8 = puVar22;
  ppuStack_1d0 = ppuVar8;
  puStack_1c8 = puVar6;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar7 != (undefined *)0x0) {
    func_0x00010bf529e0(*(undefined8 *)(puVar9 + 0x20));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar25 = 0.0;
    lVar18 = *(long *)(puVar9 + 0x20);
    _objc_retain(lVar18);
    puVar3 = auStack_2a0;
    ppuVar17 = (undefined **)0x10;
    lVar10 = lVar18;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar18);
        }
        uVar21 = *(ulong *)(lVar19 * 8);
        dVar25 = 0.0;
        lVar23 = *(long *)(puVar9 + 0x28);
        _objc_retain(lVar23);
        lVar11 = lVar23;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar23);
            }
            lVar24 = *(long *)(lVar20 * 8);
            uVar12 = uVar21;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar24;
            func_0x00010bf3cf60(lVar24);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar12;
            func_0x00010c0720c0();
            _objc_release(lVar13);
            _objc_release(uVar12);
            if ((uVar14 & 1) != 0) {
              _objc_retain(lVar24);
              _objc_release(lVar23);
              if (lVar24 == 0) goto LAB_10681c310;
              puVar3 = puVar7;
              func_0x00010c0b9d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar22);
              _objc_release(puVar3);
              _objc_release(lVar24);
              goto LAB_10681c320;
            }
            lVar20 = lVar20 + 1;
          } while (lVar11 != lVar20);
          lVar11 = lVar23;
          func_0x00010bf52a60();
        }
        _objc_release(lVar23);
LAB_10681c310:
        func_0x00010befa120(puVar22);
LAB_10681c320:
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar10);
      puVar3 = auStack_2a0;
      ppuVar17 = (undefined **)0x10;
      lVar10 = lVar18;
      func_0x00010bf52a60();
    }
    _objc_release(lVar18);
    puVar5 = PTR_PTR_1126ce618;
    _objc_alloc_init();
    func_0x00010c1b6420();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215dc0(dVar25 * 1000.0,puVar5);
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c0d9840(*(undefined8 *)(puVar7 + 0x50));
    _objc_release(puVar5);
    _objc_release(puVar22);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  ppuVar8 = ppuVar17;
  _objc_retain();
  _dispatch_group_create();
  puVar22 = puVar3;
  func_0x00010bf529e0();
  if (puVar22 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      puVar5 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        _dispatch_group_enter(ppuVar8);
        puVar9 = puVar7;
        func_0x00010bdf4b40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_448,puVar7);
        uVar16 = *(undefined8 *)(puVar7 + 0x20);
        uVar15 = *(undefined8 *)(puVar7 + 0x28);
        func_0x00010c11de00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puStack_480 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_478 = 0xc2000000;
        pcStack_470 = FUN_10681c678;
        puStack_468 = &UNK_11092ece8;
        _objc_copyWeak(auStack_450,auStack_448);
        _objc_retain(puVar6);
        puStack_460 = puVar6;
        _objc_retain(ppuVar8);
        ppuStack_458 = ppuVar8;
        func_0x00010c11da60(uVar16);
        _objc_release(uVar15);
        _objc_release(ppuStack_458);
        _objc_release(puStack_460);
        _objc_destroyWeak(auStack_450);
        _objc_destroyWeak(auStack_448);
        _objc_release(puVar9);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar22 = puVar22 + 1;
      puVar5 = puVar3;
      func_0x00010bf529e0();
    } while (puVar22 < puVar5);
  }
  uVar16 = *(undefined8 *)(puVar7 + 0x28);
  func_0x00010c11de00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puStack_4a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4a0 = 0xc2000000;
  pcStack_498 = FUN_10681c760;
  puStack_490 = &UNK_110849530;
  ppuStack_488 = ppuVar17;
  _objc_retain(ppuVar17);
  func_0x000100bc0718(ppuVar8,uVar16,&puStack_4a8);
  _objc_release(uVar16);
  _objc_release(ppuStack_488);
  _objc_release(ppuVar17);
  _objc_release(ppuVar8);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 10681c0fc; end: 10681c40b;  */

void FUN_10681c0fc(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar3 != 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar24 = 0.0;
    lVar17 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar17);
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar5 = lVar17;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar17);
        }
        uVar20 = *(ulong *)(lVar18 * 8);
        dVar24 = 0.0;
        lVar22 = *(long *)(param_1 + 0x28);
        _objc_retain(lVar22);
        lVar6 = lVar22;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar22);
            }
            lVar23 = *(long *)(lVar19 * 8);
            uVar7 = uVar20;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar23;
            func_0x00010bf3cf60(lVar23);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010c0720c0();
            _objc_release(lVar8);
            _objc_release(uVar7);
            if ((uVar9 & 1) != 0) {
              _objc_retain(lVar23);
              _objc_release(lVar22);
              if (lVar23 == 0) goto LAB_10681c310;
              lVar6 = lVar3;
              func_0x00010c0b9d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(lVar6);
              _objc_release(lVar23);
              goto LAB_10681c320;
            }
            lVar19 = lVar19 + 1;
          } while (lVar6 != lVar19);
          lVar6 = lVar22;
          func_0x00010bf52a60();
        }
        _objc_release(lVar22);
LAB_10681c310:
        func_0x00010befa120(puVar4);
LAB_10681c320:
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar5);
      param_4 = auStack_f0;
      param_5 = 0x10;
      lVar5 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    puVar10 = PTR_PTR_1126ce618;
    _objc_alloc_init();
    func_0x00010c1b6420();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215dc0(dVar24 * 1000.0,puVar10);
    _objc_release(puVar11);
    param_3 = puVar10;
    func_0x00010c0d9840(*(undefined8 *)(lVar3 + 0x50));
    _objc_release(puVar10);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar12 = param_5;
  _objc_retain();
  _dispatch_group_create();
  puVar21 = param_4;
  func_0x00010bf529e0();
  if (puVar21 != (undefined1 *)0x0) {
    puVar21 = (undefined1 *)0x0;
    do {
      puVar13 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar14 != (undefined1 *)0x0) {
        _dispatch_group_enter(uVar12);
        lVar5 = lVar3;
        func_0x00010bdf4b40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_298,lVar3);
        uVar16 = *(undefined8 *)(lVar3 + 0x20);
        uVar15 = *(undefined8 *)(lVar3 + 0x28);
        func_0x00010c11de00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2c8 = 0xc2000000;
        pcStack_2c0 = FUN_10681c678;
        puStack_2b8 = &UNK_11092ece8;
        _objc_copyWeak(auStack_2a0,auStack_298);
        _objc_retain(puVar14);
        puStack_2b0 = puVar14;
        _objc_retain(uVar12);
        uStack_2a8 = uVar12;
        func_0x00010c11da60(uVar16);
        _objc_release(uVar15);
        _objc_release(uStack_2a8);
        _objc_release(puStack_2b0);
        _objc_destroyWeak(auStack_2a0);
        _objc_destroyWeak(auStack_298);
        _objc_release(lVar5);
      }
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar21 = puVar21 + 1;
      puVar13 = param_4;
      func_0x00010bf529e0();
    } while (puVar21 < puVar13);
  }
  uVar16 = *(undefined8 *)(lVar3 + 0x28);
  func_0x00010c11de00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f0 = 0xc2000000;
  pcStack_2e8 = FUN_10681c760;
  puStack_2e0 = &UNK_110849530;
  uStack_2d8 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar12,uVar16,&puStack_2f8);
  _objc_release(uVar16);
  _objc_release(uStack_2d8);
  _objc_release(param_5);
  _objc_release(uVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10681c40c; end: 10681c677; -[SCImpalaLocalStoryStore enrichItemsWithThumbnails:snaps:completion:] */

void FUN_10681c40c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  uVar7 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) {
        _dispatch_group_enter(uVar1);
        lVar4 = param_1;
        func_0x00010bdf4b40(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_78,param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_10681c678;
        puStack_98 = &UNK_11092ece8;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(uVar3);
        uStack_90 = uVar3;
        _objc_retain(uVar1);
        uStack_88 = uVar1;
        func_0x00010c11da60(uVar6);
        _objc_release(uVar5);
        _objc_release(uStack_88);
        _objc_release(uStack_90);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        _objc_release(lVar4);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar7 < uVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10681c760;
  puStack_c0 = &UNK_110849530;
  uStack_b8 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar1,uVar6,&puStack_d8);
  _objc_release(uVar6);
  _objc_release(uStack_b8);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10681c678; end: 10681c75f;  */

void FUN_10681c678(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (puVar1 != (undefined *)0x0 && lVar2 != 0) {
      puVar3 = PTR_PTR_1126b27a8;
      func_0x00010bfe9800(PTR_PTR_1126b27a8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010b971468();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0xc0));
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 200));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10681c760; end: 10681c773;  */

void FUN_10681c760(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010681c76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10681c774; end: 10681c77b; -[SCImpalaLocalStoryStore isSnapPending:] */

void FUN_10681c774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isSnapPending_isSpotlight__1125fd4c8,param_3,0);
  return;
}



/* Entry: 10681c77c; end: 10681c96b; -[SCImpalaLocalStoryStore isSnapPending:isSpotlight:] */

uint FUN_10681c77c(ulong param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined1 *)0x0) goto LAB_10681c814;
  puVar3 = *(undefined1 **)(param_1 + 8);
  func_0x00010c269d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  puVar7 = param_3;
  func_0x00010c105a00();
  _objc_release(puVar3);
  if ((param_4 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x000108f485b4();
    if (iVar1 != 0) {
      uVar4 = param_1;
      puVar7 = puVar2;
      func_0x00010be40520(param_1,param_2,puVar2);
      if ((uVar4 & 1) == 0) {
        if (*(char *)(param_1 + 0xa8) != '\x01') goto LAB_10681c8e8;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        lVar9 = *(long *)(param_1 + 0xa0);
        _objc_retain(lVar9);
        lVar5 = lVar9;
        func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_e8,0x10);
        if (lVar5 != 0) {
          lVar12 = *plStack_120;
          do {
            lVar13 = 0;
            do {
              if (*plStack_120 != lVar12) {
                _objc_enumerationMutation(lVar9);
              }
              uVar11 = *(ulong *)(lStack_128 + lVar13 * 8);
              uVar4 = uVar11;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              puVar7 = param_3;
              func_0x00010c0720c0();
              _objc_release(uVar4);
              if ((uVar6 & 1) != 0) {
                func_0x00010c15f2e0(uVar11);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar11;
                func_0x00010c08fa60();
                uVar10 = (uint)(uVar4 == 0);
                _objc_release(uVar11);
                _objc_release(lVar9);
                goto LAB_10681c8f0;
              }
              lVar13 = lVar13 + 1;
            } while (lVar5 != lVar13);
            lVar5 = lVar9;
            puVar8 = &uStack_130;
            func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_e8,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar9);
        puVar7 = (undefined1 *)puVar8;
      }
LAB_10681c814:
      uVar10 = 0;
      goto LAB_10681c8f0;
    }
  }
LAB_10681c8e8:
  uVar10 = (uint)((long)puVar2 < 1);
LAB_10681c8f0:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar10;
  }
  ___stack_chk_fail();
  return (uint)((undefined1 *)0xfffffffffffffff8 < puVar7) &
         0x45U >> (ulong)((int)puVar7 + 7U & 0x1f);
}



/* Entry: 10681c96c; end: 10681c987; -[SCImpalaLocalStoryStore _isFailedPostingState:] */

uint FUN_10681c96c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(0xfffffffffffffff8 < param_3) & 0x45U >> (ulong)((int)param_3 + 7U & 0x1f);
}



/* Entry: 10681c988; end: 10681cabb; -[SCImpalaLocalStoryStore _uploadErrorForClientId:] */

undefined8 FUN_10681c988(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108f49564();
    if (iVar1 != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c105a00();
      _objc_release(uVar2);
      uVar2 = param_2;
      func_0x00010be40520(param_2,param_3,uVar3);
      lVar4 = *(long *)(param_2 + 0xd0);
      if ((uVar2 & 1) != 0) {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xd0),param_3,puVar5,param_4);
          _objc_release(puVar5);
          func_0x00010be9afc0(param_2,param_3,param_4);
          uVar6 = 0;
        }
        else {
          func_0x00010c26f3a0(lVar4);
          uVar6 = 0;
          if ((param_1 <= -0.5) && (0xfffffffffffffff8 < uVar3)) {
            uVar6 = *(undefined8 *)(&DAT_110941ee8 + uVar3 * 8);
          }
        }
        _objc_release(lVar4);
        goto LAB_10681ca54;
      }
      func_0x00010c12d3e0(lVar4,param_3,param_4);
    }
  }
  uVar6 = 0;
LAB_10681ca54:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 10681cabc; end: 10681cb9b; -[SCImpalaLocalStoryStore _scheduleFailureGraceReemitForClientId:] */

void FUN_10681cabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fe0(0x3fe3333333333333,uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10681cb9c; end: 10681cbff;  */

void FUN_10681cb9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0xd0);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010bec4e80(), (int)lVar2 != 0)) {
      func_0x00010bf8ddc0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10681cc00; end: 10681ce53; -[SCImpalaLocalStoryStore extractItemsFromSequences:] */

undefined * FUN_10681cc00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar11 = *(long *)(lVar13 * 8);
      lVar5 = param_1;
      func_0x00010beb3620();
      if ((int)lVar5 == 0) {
        uVar14 = 0;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            lVar6 = param_1;
            func_0x00010c0b9d80();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) {
              func_0x00010befa120(puVar3);
            }
            _objc_release(lVar6);
            lVar12 = lVar12 + 1;
          } while (lVar5 != lVar12);
          lVar5 = lVar11;
          func_0x00010bf52a60();
        }
      }
      else {
        lVar11 = param_1;
        func_0x00010c0b9ca0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010befa120(puVar3);
        }
      }
      _objc_release(lVar11);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110941e60;
  func_0x00010c246ba0(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010bf5ab40(ppuVar9);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5ab40(param_2);
  _objc_release(param_2);
  func_0x00010c0df720(uVar14,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf433a0(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar3);
  return puVar8;
}



/* Entry: 10681ce54; end: 10681cf03;  */

undefined *
FUN_10681ce54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf5ab40(param_4);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5ab40(param_3);
  _objc_release(param_3);
  func_0x00010c0df720(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10681cf04; end: 10681d0ef; -[SCImpalaLocalStoryStore _shouldEmitJoinedOwnedStorySequenceItem:] */

undefined **
FUN_10681cf04(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar8 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_4;
  _objc_retain(param_4);
  iVar2 = (int)param_2[8];
  func_0x000108f485b4();
  if (iVar2 == 0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    param_2 = param_4;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = param_2;
    func_0x00010bf529e0();
    _objc_release(param_2);
    ppuVar13 = (undefined **)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar13 = param_4;
      func_0x00010c25b720();
      if (ppuVar13 == (undefined **)0x3) {
        param_1 = 0.0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        puStack_130 = (undefined *)0x0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        param_2 = param_4;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_2;
        func_0x00010bf52a60();
        if (ppuVar5 != (undefined **)0x0) {
          lVar10 = *plStack_120;
          do {
            ppuVar13 = (undefined **)0x0;
            do {
              if (*plStack_120 != lVar10) {
                _objc_enumerationMutation(param_2);
              }
              unaff_x22 = *(ulong *)(lStack_128 + (long)ppuVar13 * 8);
              func_0x00010bf0e700();
              _objc_retainAutoreleasedReturnValue();
              unaff_x23 = unaff_x22;
              func_0x00010bf0a8c0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = unaff_x23;
              func_0x00010c07f5e0();
              _objc_release(unaff_x23);
              _objc_release(unaff_x22);
              if ((unaff_x24 & 1) != 0) {
                ppuVar13 = (undefined **)0x0;
                goto LAB_10681d08c;
              }
              ppuVar13 = (undefined **)((long)ppuVar13 + 1);
            } while (ppuVar5 != ppuVar13);
            ppuVar5 = param_2;
            ppuVar8 = &puStack_130;
            func_0x00010bf52a60();
          } while (ppuVar5 != (undefined **)0x0);
        }
        ppuVar13 = (undefined **)0x1;
LAB_10681d08c:
        _objc_release(param_2);
        ppuVar5 = ppuVar8;
      }
      else {
        ppuVar8 = param_4;
        func_0x00010c25b720();
        if ((ppuVar8 == (undefined **)0x1) ||
           (ppuVar8 = param_4, func_0x00010c25b720(), ppuVar8 == (undefined **)0x2)) {
          ppuVar13 = (undefined **)0x1;
        }
        else {
          ppuVar8 = param_4;
          func_0x00010c25b720();
          ppuVar13 = (undefined **)(ulong)(ppuVar8 == (undefined **)0x4);
        }
      }
    }
  }
  ppuVar8 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10681d0f0;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  ppuStack_158 = ppuVar13;
  ppuStack_150 = param_2;
  ppuStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  ppuVar6 = (undefined **)0x1;
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_180 = ppuVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_180);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar8;
  ppuVar4 = ppuVar13;
  func_0x00010be473c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    ppuVar4 = ppuVar14;
    ppuVar6 = ppuVar5;
    func_0x00010c0b9d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar13 = (undefined **)PTR_PTR_1126cc4c8;
      _objc_alloc();
      ppuVar9 = ppuVar5;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048260(ppuVar13,param_3,ppuVar9);
      ppuVar4 = ppuVar13;
      func_0x00010c1cb360(ppuVar8);
      _objc_release(ppuVar13);
      _objc_release(ppuVar9);
      _objc_retain(ppuVar8);
    }
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar6);
  ppuVar8 = (undefined **)PTR_PTR_1126ce620;
  _objc_alloc_init();
  ppuVar13 = ppuVar4;
  func_0x00010bf3cf60(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(ppuVar8,param_3,ppuVar13);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c15f2e0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd440(ppuVar8,param_3,ppuVar13);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar5;
  ppuVar7 = ppuVar4;
  func_0x00010c0b9cc0(ppuVar5,param_3,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ddc0(ppuVar8,param_3,ppuVar13);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar14;
  func_0x00010c08fa60();
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c26d760(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  if (ppuVar9 == (undefined **)0x0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2144a0(ppuVar8,param_3,ppuVar14);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c26d760(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214180(ppuVar8,param_3,ppuVar14);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c26d760(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2141a0(ppuVar8,param_3,ppuVar14);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010bf3cf60(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213ee0(ppuVar8,param_3,ppuVar13);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010c26f2a0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c185740(param_1 * 1000.0,ppuVar8);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar14 = ppuVar8;
    func_0x00010c26e4e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar9 = ppuVar8;
      func_0x00010c26e4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010c08fa60();
      _objc_release(ppuVar9);
      _objc_release(ppuVar14);
      if (ppuVar12 != (undefined **)0x0) {
        func_0x00010c12d3e0(ppuVar5[0x18],param_3,ppuVar13);
        func_0x00010c12d3e0(ppuVar5[0x19],param_3,ppuVar13);
        goto LAB_10681d55c;
      }
    }
    puVar11 = ppuVar5[0x18];
    func_0x00010c0e00e0(puVar11,param_3,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213e60(ppuVar8,param_3,puVar11);
    _objc_release(puVar11);
    puVar11 = ppuVar5[0x19];
    func_0x00010c0e00e0(puVar11,param_3,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ec0(ppuVar8,param_3,puVar11);
    _objc_release(puVar11);
  }
LAB_10681d55c:
  ppuVar14 = ppuVar6;
  func_0x00010c25b720();
  if (ppuVar14 == (undefined **)0x3) {
    ppuVar14 = ppuVar4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar14;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar9;
    func_0x00010c07f5e0();
    _objc_release(ppuVar9);
    _objc_release(ppuVar14);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)ppuVar12 != 0) {
      ppuVar14 = ppuVar4;
      func_0x00010c24b240(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar14;
      func_0x00010c29c5c0();
      func_0x00010c0df7c0(puVar11,param_3,ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222500(ppuVar8,param_3,puVar11);
      _objc_release(puVar11);
      _objc_release(ppuVar14);
    }
  }
  ppuVar14 = ppuVar6;
  func_0x00010c25b720();
  if (ppuVar14 == (undefined **)0x3) {
    ppuVar9 = ppuVar4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar9;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar12;
    func_0x00010c07f5e0();
    _objc_release(ppuVar12);
    _objc_release(ppuVar9);
    if ((int)ppuVar14 == 0) goto LAB_10681d698;
    ppuVar14 = ppuVar4;
    func_0x00010bf3cf60(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar5;
    func_0x00010bee5820(ppuVar5,param_3,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar14 = ppuVar4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar14;
      func_0x00010c08fa60();
      if (ppuVar9 == (undefined **)0x0) {
        bVar1 = false;
      }
      else {
        puVar11 = ppuVar5[0x1a];
        ppuVar9 = ppuVar4;
        func_0x00010bf3cf60(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(puVar11,param_3,ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar11 != (undefined *)0x0;
        _objc_release();
        _objc_release(ppuVar9);
      }
      _objc_release(ppuVar14);
      ppuVar14 = (undefined **)0x0;
      ppuVar9 = (undefined **)0x0;
    }
    else {
      bVar1 = false;
      ppuVar14 = (undefined **)0x1;
    }
    ppuVar12 = (undefined **)0x1;
  }
  else {
    ppuVar14 = (undefined **)0x0;
LAB_10681d698:
    ppuVar12 = (undefined **)0x0;
    ppuVar9 = (undefined **)0x0;
    bVar1 = false;
  }
  func_0x00010c196ee0(ppuVar8,param_3,ppuVar9);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((ulong)ppuVar14 & 1) == 0 && !bVar1) {
    ppuVar3 = ppuVar4;
    func_0x00010bf3cf60(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar12;
    func_0x00010c07eae0(ppuVar5,param_3,ppuVar3);
  }
  else {
    ppuVar5 = (undefined **)(ulong)((uint)ppuVar14 ^ 1);
    ppuVar3 = ppuVar14;
  }
  func_0x00010c0df760(puVar11,param_3,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b33e0(ppuVar8,param_3,puVar11);
  _objc_release(puVar11);
  if (((ulong)ppuVar14 & 1) == 0 && !bVar1) {
    _objc_release(ppuVar3);
  }
  if ((int)ppuVar12 == 0) {
    ppuVar5 = ppuVar8;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar14 != 0) {
      _objc_release(ppuVar5);
      goto LAB_10681d808;
    }
    ppuVar12 = ppuVar8;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110e52f18;
    ppuVar3 = ppuVar12;
    func_0x00010c0720c0();
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    if ((int)ppuVar3 != 0) goto LAB_10681d808;
  }
  else {
LAB_10681d808:
    ppuVar5 = (undefined **)PTR_PTR_1126cc4c8;
    _objc_alloc();
    ppuVar7 = (undefined **)0x1;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_1f0 = ppuVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_1f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048260(ppuVar5,param_3,puVar11);
    ppuVar14 = ppuVar5;
    func_0x00010c1cb360(ppuVar8);
    _objc_release(ppuVar5);
    _objc_release(puVar11);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar13);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(ppuVar7);
  ppuVar5 = ppuVar14;
  func_0x00010c25b720();
  if (ppuVar5 == (undefined **)0x3) {
    ppuVar5 = ppuVar7;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar5;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar8;
    func_0x00010c07f5e0();
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
    if (((ulong)ppuVar13 & 1) != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ddea98;
      goto LAB_10681d978;
    }
  }
  ppuVar5 = ppuVar14;
  func_0x00010c25b720();
  if ((ppuVar5 == (undefined **)0x3) ||
     (ppuVar5 = ppuVar14, func_0x00010c25b720(), ppuVar5 == (undefined **)0x4)) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e297d8;
  }
  else {
    ppuVar8 = ppuVar14;
    func_0x00010c25b720();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e52f18;
    if (ppuVar8 != (undefined **)0x1) {
      ppuVar8 = ppuVar14;
      func_0x00010c25b720();
      if (ppuVar8 != (undefined **)0x2) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
      }
    }
  }
LAB_10681d978:
  _objc_release(ppuVar7);
  _objc_release(ppuVar14);
  return ppuVar5;
}



/* Entry: 10681d0f0; end: 10681d23f; -[SCImpalaLocalStoryStore mapSequenceToJoinedItem:] */

undefined ** FUN_10681d0f0(double param_1,undefined **param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuStack_c0;
  long lStack_b8;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar8 = 1;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_2;
  ppuVar7 = ppuVar2;
  func_0x00010be473c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (ppuVar13 == (undefined **)0x0) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar7 = ppuVar13;
    uVar8 = param_4;
    func_0x00010c0b9d80();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != (undefined **)0x0) {
      ppuVar2 = (undefined **)PTR_PTR_1126cc4c8;
      _objc_alloc();
      uVar10 = param_4;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048260(ppuVar2,param_3,uVar10);
      ppuVar7 = ppuVar2;
      func_0x00010c1cb360(param_2);
      _objc_release(ppuVar2);
      _objc_release(uVar10);
      _objc_retain(param_2);
    }
    _objc_release(param_2);
  }
  _objc_release(ppuVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  param_2 = (undefined **)PTR_PTR_1126ce620;
  _objc_alloc_init();
  ppuVar2 = ppuVar7;
  func_0x00010bf3cf60(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(param_2,param_3,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010c15f2e0(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd440(param_2,param_3,ppuVar2);
  _objc_release(ppuVar2);
  uVar10 = param_4;
  ppuVar9 = ppuVar7;
  func_0x00010c0b9cc0(param_4,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ddc0(param_2,param_3,uVar10);
  _objc_release(uVar10);
  ppuVar2 = ppuVar7;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar13;
  func_0x00010c08fa60();
  _objc_release(ppuVar13);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010c26d760(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  if (ppuVar12 == (undefined **)0x0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2144a0(param_2,param_3,ppuVar13);
  _objc_release(ppuVar13);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010c26d760(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214180(param_2,param_3,ppuVar13);
  _objc_release(ppuVar13);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010c26d760(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2141a0(param_2,param_3,ppuVar13);
  _objc_release(ppuVar13);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010bf3cf60(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213ee0(param_2,param_3,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010c26f2a0(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c185740(param_1 * 1000.0,param_2);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar7;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar13 = param_2;
    func_0x00010c26e4e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar12 = param_2;
      func_0x00010c26e4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar12;
      func_0x00010c08fa60();
      _objc_release(ppuVar12);
      _objc_release(ppuVar13);
      if (ppuVar3 != (undefined **)0x0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_4 + 0xc0),param_3,ppuVar2);
        func_0x00010c12d3e0(*(undefined8 *)(param_4 + 200),param_3,ppuVar2);
        goto LAB_10681d55c;
      }
    }
    uVar4 = *(undefined8 *)(param_4 + 0xc0);
    func_0x00010c0e00e0(uVar4,param_3,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213e60(param_2,param_3,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_4 + 200);
    func_0x00010c0e00e0(uVar4,param_3,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ec0(param_2,param_3,uVar4);
    _objc_release(uVar4);
  }
LAB_10681d55c:
  uVar10 = uVar8;
  func_0x00010c25b720();
  if (uVar10 == 3) {
    ppuVar13 = ppuVar7;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar13;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar12;
    func_0x00010c07f5e0();
    _objc_release(ppuVar12);
    _objc_release(ppuVar13);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)ppuVar3 != 0) {
      ppuVar13 = ppuVar7;
      func_0x00010c24b240(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar13;
      func_0x00010c29c5c0();
      func_0x00010c0df7c0(puVar5,param_3,ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222500(param_2,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(ppuVar13);
    }
  }
  uVar10 = uVar8;
  func_0x00010c25b720();
  if (uVar10 == 3) {
    ppuVar12 = ppuVar7;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar12;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar3;
    func_0x00010c07f5e0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar12);
    if ((int)ppuVar13 == 0) goto LAB_10681d698;
    ppuVar13 = ppuVar7;
    func_0x00010bf3cf60(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010bee5820(param_4,param_3,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    if (uVar10 == 0) {
      ppuVar13 = ppuVar7;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar13;
      func_0x00010c08fa60();
      if (ppuVar12 == (undefined **)0x0) {
        bVar1 = false;
      }
      else {
        lVar11 = *(long *)(param_4 + 0xd0);
        ppuVar12 = ppuVar7;
        func_0x00010bf3cf60(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar11,param_3,ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar11 != 0;
        _objc_release();
        _objc_release(ppuVar12);
      }
      _objc_release(ppuVar13);
      ppuVar13 = (undefined **)0x0;
      uVar10 = 0;
    }
    else {
      bVar1 = false;
      ppuVar13 = (undefined **)0x1;
    }
    ppuVar12 = (undefined **)0x1;
  }
  else {
    ppuVar13 = (undefined **)0x0;
LAB_10681d698:
    ppuVar12 = (undefined **)0x0;
    uVar10 = 0;
    bVar1 = false;
  }
  func_0x00010c196ee0(param_2,param_3,uVar10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((ulong)ppuVar13 & 1) == 0 && !bVar1) {
    ppuVar3 = ppuVar7;
    func_0x00010bf3cf60(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar12;
    func_0x00010c07eae0(param_4,param_3,ppuVar3);
  }
  else {
    param_4 = (ulong)((uint)ppuVar13 ^ 1);
    ppuVar3 = ppuVar13;
  }
  func_0x00010c0df760(puVar5,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b33e0(param_2,param_3,puVar5);
  _objc_release(puVar5);
  if (((ulong)ppuVar13 & 1) == 0 && !bVar1) {
    _objc_release(ppuVar3);
  }
  if ((int)ppuVar12 == 0) {
    ppuVar13 = param_2;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar13;
    func_0x00010c0720c0();
    if ((int)ppuVar12 != 0) {
      _objc_release(ppuVar13);
      goto LAB_10681d808;
    }
    ppuVar3 = param_2;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110e52f18;
    ppuVar6 = ppuVar3;
    func_0x00010c0720c0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar13);
    if ((int)ppuVar6 != 0) goto LAB_10681d808;
  }
  else {
LAB_10681d808:
    ppuVar13 = (undefined **)PTR_PTR_1126cc4c8;
    _objc_alloc();
    ppuVar9 = (undefined **)0x1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_c0 = ppuVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048260(ppuVar13,param_3,puVar5);
    ppuVar12 = ppuVar13;
    func_0x00010c1cb360(param_2);
    _objc_release(ppuVar13);
    _objc_release(puVar5);
  }
  _objc_release(uVar10);
  _objc_release(ppuVar2);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar9);
  ppuVar2 = ppuVar12;
  func_0x00010c25b720();
  if (ppuVar2 == (undefined **)0x3) {
    ppuVar2 = ppuVar9;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar13;
    func_0x00010c07f5e0();
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar7 & 1) != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ddea98;
      goto LAB_10681d978;
    }
  }
  ppuVar2 = ppuVar12;
  func_0x00010c25b720();
  if ((ppuVar2 == (undefined **)0x3) ||
     (ppuVar2 = ppuVar12, func_0x00010c25b720(), ppuVar2 == (undefined **)0x4)) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e297d8;
  }
  else {
    ppuVar13 = ppuVar12;
    func_0x00010c25b720();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e52f18;
    if (ppuVar13 != (undefined **)0x1) {
      ppuVar13 = ppuVar12;
      func_0x00010c25b720();
      if (ppuVar13 != (undefined **)0x2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
      }
    }
  }
LAB_10681d978:
  _objc_release(ppuVar9);
  _objc_release(ppuVar12);
  return ppuVar2;
}



/* Entry: 10681d240; end: 10681d8c7; -[SCImpalaLocalStoryStore mapSnapToItem:fromSequence:] */

undefined **
FUN_10681d240(double param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = (undefined **)PTR_PTR_1126ce620;
  _objc_alloc_init();
  uVar3 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(ppuVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd440(ppuVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_2;
  uVar11 = param_4;
  func_0x00010c0b9cc0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ddc0(ppuVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x00010c08fa60();
  _objc_release(uVar15);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c26d760(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  if (uVar12 == 0) {
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2144a0(ppuVar2,param_3,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c26d760(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214180(ppuVar2,param_3,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c26d760(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2141a0(ppuVar2,param_3,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213ee0(ppuVar2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c185740(param_1 * 1000.0,ppuVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    ppuVar4 = ppuVar2;
    func_0x00010c26e4e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar2;
      func_0x00010c26e4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      if (ppuVar6 != (undefined **)0x0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0xc0),param_3,uVar3);
        func_0x00010c12d3e0(*(undefined8 *)(param_2 + 200),param_3,uVar3);
        goto LAB_10681d55c;
      }
    }
    uVar7 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c0e00e0(uVar7,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213e60(ppuVar2,param_3,uVar7);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 200);
    func_0x00010c0e00e0(uVar7,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ec0(ppuVar2,param_3,uVar7);
    _objc_release(uVar7);
  }
LAB_10681d55c:
  lVar13 = param_5;
  func_0x00010c25b720();
  if (lVar13 == 3) {
    uVar15 = param_4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar15;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c07f5e0();
    _objc_release(uVar12);
    _objc_release(uVar15);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar14 != 0) {
      uVar15 = param_4;
      func_0x00010c24b240(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar15;
      func_0x00010c29c5c0();
      func_0x00010c0df7c0(puVar8,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222500(ppuVar2,param_3,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar15);
    }
  }
  lVar13 = param_5;
  func_0x00010c25b720();
  if (lVar13 == 3) {
    uVar12 = param_4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c07f5e0();
    _objc_release(uVar14);
    _objc_release(uVar12);
    if ((int)uVar15 == 0) goto LAB_10681d698;
    uVar15 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010bee5820(param_2,param_3,uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    if (uVar12 == 0) {
      uVar15 = param_4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar15;
      func_0x00010c08fa60();
      if (uVar12 == 0) {
        bVar1 = false;
      }
      else {
        lVar13 = *(long *)(param_2 + 0xd0);
        uVar12 = param_4;
        func_0x00010bf3cf60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar13,param_3,uVar12);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar13 != 0;
        _objc_release();
        _objc_release(uVar12);
      }
      _objc_release(uVar15);
      uVar15 = 0;
      uVar12 = 0;
    }
    else {
      bVar1 = false;
      uVar15 = 1;
    }
    uVar14 = 1;
  }
  else {
    uVar15 = 0;
LAB_10681d698:
    uVar14 = 0;
    uVar12 = 0;
    bVar1 = false;
  }
  func_0x00010c196ee0(ppuVar2,param_3,uVar12);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar15 & 1) == 0 && !bVar1) {
    uVar9 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar14;
    func_0x00010c07eae0(param_2,param_3,uVar9);
  }
  else {
    param_2 = (ulong)((uint)uVar15 ^ 1);
    uVar9 = uVar15;
  }
  func_0x00010c0df760(puVar8,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b33e0(ppuVar2,param_3,puVar8);
  _objc_release(puVar8);
  if ((uVar15 & 1) == 0 && !bVar1) {
    _objc_release(uVar9);
  }
  if ((int)uVar14 == 0) {
    ppuVar4 = ppuVar2;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0720c0();
    if ((int)ppuVar5 != 0) {
      _objc_release(ppuVar4);
      goto LAB_10681d808;
    }
    ppuVar6 = ppuVar2;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e52f18;
    ppuVar10 = ppuVar6;
    func_0x00010c0720c0();
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    if ((int)ppuVar10 != 0) goto LAB_10681d808;
  }
  else {
LAB_10681d808:
    ppuVar4 = (undefined **)PTR_PTR_1126cc4c8;
    _objc_alloc();
    uVar11 = 1;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048260(ppuVar4,param_3,puVar8);
    ppuVar5 = ppuVar4;
    func_0x00010c1cb360(ppuVar2);
    _objc_release(ppuVar4);
    _objc_release(puVar8);
  }
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(uVar11);
  ppuVar2 = ppuVar5;
  func_0x00010c25b720();
  if (ppuVar2 == (undefined **)0x3) {
    uVar3 = uVar11;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar15;
    func_0x00010c07f5e0();
    _objc_release(uVar15);
    _objc_release(uVar3);
    if ((uVar12 & 1) != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ddea98;
      goto LAB_10681d978;
    }
  }
  ppuVar2 = ppuVar5;
  func_0x00010c25b720();
  if ((ppuVar2 == (undefined **)0x3) ||
     (ppuVar2 = ppuVar5, func_0x00010c25b720(), ppuVar2 == (undefined **)0x4)) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e297d8;
  }
  else {
    ppuVar4 = ppuVar5;
    func_0x00010c25b720();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e52f18;
    if (ppuVar4 != (undefined **)0x1) {
      ppuVar4 = ppuVar5;
      func_0x00010c25b720();
      if (ppuVar4 != (undefined **)0x2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
      }
    }
  }
LAB_10681d978:
  _objc_release(uVar11);
  _objc_release(ppuVar5);
  return ppuVar2;
}



/* Entry: 10681d8c8; end: 10681d9d3; -[SCImpalaLocalStoryStore mapSequenceToStoryType:snap:] */

undefined ** FUN_10681d8c8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 3) {
    uVar2 = param_4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07f5e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ddea98;
      goto LAB_10681d978;
    }
  }
  lVar1 = param_3;
  func_0x00010c25b720();
  if ((lVar1 == 3) || (lVar1 = param_3, func_0x00010c25b720(), lVar1 == 4)) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e297d8;
  }
  else {
    lVar1 = param_3;
    func_0x00010c25b720();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e52f18;
    if (lVar1 != 1) {
      lVar1 = param_3;
      func_0x00010c25b720();
      if (lVar1 != 2) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
      }
    }
  }
LAB_10681d978:
  _objc_release(param_4);
  _objc_release(param_3);
  return ppuVar5;
}



/* Entry: 10681d9d4; end: 10681da0f; -[SCImpalaLocalStoryStore _storySnapshotEnabled] */

undefined8 FUN_10681d9d4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x000108f485a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a9d8,0,0);
  return uVar2;
}



/* Entry: 10681da10; end: 10681da1b; -[SCImpalaLocalStoryStore pushToValdiMarshaller:] */

void FUN_10681da10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8feb4(param_3,param_1);
  func_0x00010af8fe58();
  func_0x00010af8fe50();
  func_0x00010af8fd34();
  func_0x00010af8fd10();
  return;
}



/* Entry: 10681da1c; end: 10681dad3; -[SCImpalaLocalStoryStore emptySnapshotObservable] */

void FUN_10681da1c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  puVar2 = PTR_PTR_1126ce618;
  _objc_alloc_init(PTR_PTR_1126ce618);
  func_0x00010c1b6420();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c215dc0(param_1 * 1000.0,puVar2);
  _objc_release(puVar3);
  func_0x00010c0d9840(puVar1,param_3,puVar2);
  puVar3 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10681dad4; end: 10681dbf3; -[SCImpalaLocalStoryStore .cxx_destruct] */

void FUN_10681dad4(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10681dbf4; end: 10681dc63;  */

void FUN_10681dbf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10681dc64; end: 10681e2cb;  */

void FUN_10681dc64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,long param_10,undefined4 param_11,undefined4 param_12,long param_13,long param_14
                  ,long param_15,long param_16,undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  puVar1 = PTR_PTR_1126ce628;
  _objc_retain(param_17);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c040500(puVar1);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1afc00(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bd80();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c79e0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bda0();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7a00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2760();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5bc0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2680();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e43c0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2900();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c700(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfe28c0(uVar2);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208900(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  lVar5 = param_3;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c206f00(puVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ab40(puVar1);
  _objc_release(puVar4);
  lVar5 = param_8;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c18b220(puVar1);
  }
  lVar5 = param_9;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c18ac80(puVar1);
  }
  if (param_10 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ac00(puVar1);
    _objc_release(puVar4);
  }
  lVar5 = param_13;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c18ab80(puVar1);
  }
  lVar5 = param_14;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c18ace0(puVar1);
  }
  lVar5 = param_15;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c18acc0(puVar1);
  }
  if (param_16 != 0) {
    func_0x00010c18ac60(puVar1);
  }
  uVar2 = param_18;
  func_0x00010c269d40(param_18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc7c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf926c0(uVar3);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca7e0(puVar1);
  _objc_release(puVar4);
  uVar2 = param_17;
  func_0x00010c0d1e40(param_17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_17);
  uVar6 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar6;
  func_0x00010c071500(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b4ab8;
  _objc_alloc(PTR_PTR_1126b4ab8);
  func_0x00010c00d300();
  func_0x00010c1c95c0(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001009703d0(param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208a00(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10681e2cc; end: 10681e463; -[SCImpalaMediaPickerPresenter initWithUiContainer:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:businessProfileId:circumstanceEngine:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:selectedMemberProfile:] */

undefined1 *
FUN_10681e2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126f3608;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
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



/* Entry: 10681e464; end: 10681e62f; -[SCImpalaMediaPickerPresenter presentMediaPickerWithMaxSelectionLimit:callback:] */

void FUN_10681e464(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126aff60;
    _objc_alloc();
    func_0x00010c062a00();
    func_0x00010c1c3740();
    uVar8 = param_4;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar8;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar5 = puVar4;
    FUN_1068285c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010be5f120(param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053560(puVar4,param_3,puVar5,0,1,0,lVar1,1,uVar8,0x1000101);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aff78;
    func_0x00010bf61160(PTR_PTR_1126aff78,param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5c20(param_2,param_3,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10681e630; end: 10681e777; -[SCImpalaMediaPickerPresenter presentPhotoPickerWithCallback:] */

void FUN_10681e630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = param_3;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar5 = puVar4;
    func_0x0001068285d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053560(puVar4,param_2,puVar5,0,0,0,1,1,0,0x1000100);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aff78;
    func_0x00010bf61160(PTR_PTR_1126aff78,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5c20(param_1,param_2,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10681e778; end: 10681e81f; -[SCImpalaMediaPickerPresenter presentSpotlightMediaPicker] */

void FUN_10681e778(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10681e820;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10681e820; end: 10681e8e7;  */

void FUN_10681e820(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf24240(uVar3,param_2,*(undefined8 *)(param_1 + 8),param_1,
                          *(undefined8 *)(param_1 + 0x20),0xe,*(undefined8 *)(param_1 + 0x50),0,0x70
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf9d620();
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10681e8e8; end: 10681e8f3; -[SCImpalaMediaPickerPresenter pushToValdiMarshaller:] */

void FUN_10681e8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8feb4(param_3,param_1);
  func_0x00010af8fe58();
  func_0x00010af8fe50();
  func_0x00010af8fd34();
  func_0x00010af8fd10();
  return;
}



/* Entry: 10681e8f4; end: 10681e957; -[SCImpalaMediaPickerPresenter memoriesPickerV2DidDismiss] */

void FUN_10681e8f4(long param_1)

{
  long lVar1;
  
  func_0x00010be8cde0();
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010681e948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
    return;
  }
  return;
}



/* Entry: 10681e958; end: 10681e95b; -[SCImpalaMediaPickerPresenter onBackPressed] */

void FUN_10681e958(void)

{
  return;
}



/* Entry: 10681e95c; end: 10681e95f; -[SCImpalaMediaPickerPresenter onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_10681e95c(void)

{
  return;
}



/* Entry: 10681e960; end: 10681eafb; -[SCImpalaMediaPickerPresenter onItemClickedWithItem:thumbnailCell:] */

void FUN_10681e960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) goto LAB_10681ead4;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c27dd80();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
LAB_10681ea28:
    uVar3 = 0;
LAB_10681ea2c:
    uVar4 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c27dd80();
    if ((int)uVar2 == 1) {
      uVar3 = param_3;
      func_0x00010c0c54e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      goto LAB_10681ea2c;
    }
    uVar2 = param_3;
    func_0x00010c27dd80();
    if ((int)uVar2 != 2) {
      uVar2 = 0;
      goto LAB_10681ea28;
    }
    uVar4 = param_3;
    func_0x00010c1045c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    uVar3 = 0;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10681eafc;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  lStack_48 = lVar1;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(lVar1);
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_48);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_10681ead4:
  func_0x00010be8cde0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10681eafc; end: 10681eb0f;  */

void FUN_10681eafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681eb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10681eb10; end: 10681ed9f; -[SCImpalaMediaPickerPresenter onItemsSelectedWithItems:] */

void FUN_10681eb10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    if ((*(long *)(param_1 + 0x38) == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0))
    goto LAB_10681ecb0;
    lVar4 = *(long *)(param_1 + 0x38);
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c27dd80();
    lVar6 = 0;
    if ((int)lVar5 == 1) {
      lVar6 = lVar1;
      func_0x00010c0c54e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10681ee2c;
    puStack_a8 = &UNK_11084aaa8;
    lStack_a0 = lVar6;
    lStack_98 = lVar4;
    _objc_retain(lVar6);
    _objc_retain(lVar4);
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(lStack_a0);
    lVar5 = lStack_98;
  }
  else {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
    lVar5 = param_3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar3 = param_3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10681ee18;
    puStack_78 = &UNK_1108465d0;
    lStack_70 = lVar4;
    lStack_68 = lVar6;
    lStack_60 = lVar5;
    lStack_58 = lVar1;
    _objc_retain(lVar5);
    _objc_retain(lVar6);
    _objc_retain(lVar4);
    _objc_retain(lVar1);
    func_0x000100162d98("APPSTORE",&puStack_90);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
    _objc_release(lStack_58);
  }
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar1);
LAB_10681ecb0:
  func_0x00010be8cde0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10681eda0; end: 10681edbf;  */

bool FUN_10681eda0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  return (int)param_2 == 0;
}



/* Entry: 10681edc0; end: 10681edc7;  */

void FUN_10681edc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_memoriesSnap_112610060);
  return;
}



/* Entry: 10681edc8; end: 10681ede7;  */

bool FUN_10681edc8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  return (int)param_2 == 1;
}



/* Entry: 10681ede8; end: 10681edef;  */

void FUN_10681ede8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c54f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaLibraryItem_11260ef50);
  return;
}



/* Entry: 10681edf0; end: 10681ee0f;  */

bool FUN_10681edf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  return (int)param_2 == 2;
}



/* Entry: 10681ee10; end: 10681ee43;  */

void FUN_10681ee10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1045d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_postArchiveSnap_11261eb90);
  return;
}



/* Entry: 10681ee44; end: 10681ee4b; -[SCImpalaMediaPickerPresenter onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

undefined8 FUN_10681ee44(void)

{
  return 0;
}



/* Entry: 10681ee4c; end: 10681ee4f; -[SCImpalaMediaPickerPresenter creatorsSpotlightSubmissionV2DidBegin] */

void FUN_10681ee4c(void)

{
  return;
}



/* Entry: 10681ee50; end: 10681eecb; -[SCImpalaMediaPickerPresenter creatorsSpotlightSubmissionV2DidComplete] */

void FUN_10681ee50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10681eecc; end: 10681efcb; -[SCImpalaMediaPickerPresenter _buildAndExposePickerScopeWithConfig:actionHandling:] */

void FUN_10681eecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10681efcc;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10681efcc; end: 10681f06f;  */

void FUN_10681efcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010bf24140(uVar4,param_2,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf9d620();
      _objc_release(lVar2);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10681f070; end: 10681f0eb; -[SCImpalaMediaPickerPresenter _removePickerScopeIfRequired] */

void FUN_10681f070(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10681f0ec; end: 10681f0f3; -[SCImpalaMediaPickerPresenter _memoriesImportEnabled] */

void FUN_10681f0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a678,0,0);
  return;
}



/* Entry: 10681f0f4; end: 10681f17b; -[SCImpalaMediaPickerPresenter .cxx_destruct] */

void FUN_10681f0f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


