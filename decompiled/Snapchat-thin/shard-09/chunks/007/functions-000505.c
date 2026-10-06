/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107109e0c; end: 107109e47;  */

void FUN_107109e0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf3ec40(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000107109e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,lVar2 == -0x2709);
  return;
}



/* Entry: 107109e48; end: 107109e4b; -[PreviewViewController _needsTranscode:] */

void FUN_107109e48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldApplyUcoFiltersWithVideoP_11258a3b0);
  return;
}



/* Entry: 107109e4c; end: 107109ee3; -[PreviewViewController _shouldApplyUcoFiltersWithVideoPreviewBlob:] */

uint FUN_107109e4c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010c112180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ea60();
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c112180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27ea00();
    uVar1 = (uint)uVar4;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c083340();
  _objc_release(param_1);
  return uVar1 & (uint)uVar2;
}



/* Entry: 107109ee4; end: 10710a5d3; -[PreviewViewController addCustomVolumeView] */

void FUN_107109ee4(ulong param_1)

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
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf49120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083340();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uVar6 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2a0940();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf08020();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = (uint)(uVar9 != 0);
      _objc_release();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      uVar13 = 1;
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar13 = 1;
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0797e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar13 != (uint)uVar5) {
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c5314();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf62b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c540();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f02e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c13b5e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar13 == 0) {
    if ((int)uVar5 == 0) goto LAB_10710a574;
    func_0x00010c12cf80(uVar4);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar12);
  }
  else {
    if ((int)uVar5 == 0) goto LAB_10710a574;
    func_0x00010c12cf80(uVar4);
    func_0x00010bef9980(uVar4);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar12);
    puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar12);
    uVar1 = uVar4;
    func_0x00010c0797e0();
    if (((uVar1 & 1) == 0) && (FUN_10710a5d4(), (uVar1 & 1) != 0)) {
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf0f000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a5620();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_initWeak(auStack_68,param_1);
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x3032000000;
      pcStack_80 = FUN_10710a7a4;
      uStack_78 = 0x10710a7b4;
      uVar1 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x0001070c5338();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c155460();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf58b20();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = uVar6;
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar10 = puStack_90[5];
      func_0x00010bf38520(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = auStack_a0;
      _objc_copyWeak(puVar11,auStack_68);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar10);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_a0);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(uStack_70);
      _objc_destroyWeak(auStack_68);
      goto LAB_10710a574;
    }
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5620();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
LAB_10710a574:
  _objc_release(uVar4);
  return;
}



/* Entry: 10710a5d4; end: 10710a7a3;  */

undefined * FUN_10710a5d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_retain(puVar2);
  puVar6 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x1;
LAB_10710a754:
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return puVar6;
      }
      ___stack_chk_fail();
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x28) = 0;
      return puVar2;
    }
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      uVar7 = *(undefined8 *)((long)puVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        _objc_release(uVar3);
        if ((int)uVar4 == 0) {
          puVar6 = (undefined *)0x0;
          goto LAB_10710a754;
        }
      }
      else {
        _objc_release(uVar3);
      }
      puVar8 = puVar8 + 1;
    } while (puVar6 != puVar8);
    puVar6 = puVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10710a7a4; end: 10710a7bb;  */

void FUN_10710a7a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10710a7bc; end: 10710a8a7;  */

void FUN_10710a7bc(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b71c8;
  _objc_retain(param_2);
  func_0x00010c13cc00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    lVar3 = lVar7;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0f000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5620();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10710a8a8; end: 10710aa97; -[PreviewViewController removeCustomVolumeView] */

void FUN_10710a8a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf49120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5314();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c13b5e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    func_0x00010c12cf80(uVar4,param_2,param_1);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar6);
    uVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0f000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5620();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c13c540(uVar4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10710aa98; end: 10710ab13; -[PreviewViewController _customVolumeAudioRouteDidChange:] */

void FUN_10710aa98(ulong param_1)

{
  FUN_10710a5d4();
  if ((param_1 & 1) == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10710ab14; end: 10710ab83;  */

void FUN_10710ab14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5620();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10710ab84; end: 10710abf7; -[PreviewViewController customVolumeController:didChangeMuteSwitchOverride:] */

void FUN_10710ab84(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf0f000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5620();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10710abf8; end: 10710b13b; -[PreviewViewController newSendFlowMediaHandler] */

undefined * FUN_10710abf8(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d4c48;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010c297c40();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010c293d00();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar36;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010c28e500();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x0001070c5728();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x00010c0ec340();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = param_1;
  func_0x00010bf30e20();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = param_1;
  func_0x00010c0fd660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001920(puVar1,param_2,uVar2,uVar5,uVar8,uVar13,uVar15,uVar17,uVar20,uVar23,uVar26,
                      uVar29,uVar32,uVar34,uVar37,uVar40,uVar42,param_1,uVar45,uVar46,uVar47);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
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
  return puVar1;
}



/* Entry: 10710b13c; end: 10710b17b; -[PreviewViewController dismissSend] */

void FUN_10710b13c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c15d920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSendVC__11265ccb0,0);
  return;
}



/* Entry: 10710b17c; end: 10710b643; -[PreviewViewController setupSnapSenderConfiguration:] */

void FUN_10710b17c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4468;
  _objc_alloc(PTR_PTR_1126b4468);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ce40(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = param_3;
  func_0x00010c131e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfbabe0(param_3);
  func_0x00010c1a0f00(puVar1,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c075080();
  if ((int)uVar5 != 0) {
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5edc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6600(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar5 = param_3;
  func_0x00010c07e920();
  if ((int)uVar5 == 0) {
    uVar5 = param_3;
    func_0x00010c07ea60();
    if ((int)uVar5 == 0) {
      uVar5 = param_3;
      func_0x00010c0811c0();
      if (((uVar5 & 1) != 0) || (uVar5 = param_3, func_0x00010c070a20(), (int)uVar5 != 0)) {
        uVar5 = param_3;
        func_0x00010c26fea0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf4b980();
        _objc_release(uVar5);
        if ((int)uVar8 != 0) {
          func_0x00010c18c000(puVar1,param_2,1);
        }
      }
    }
    else {
      func_0x00010c1a1020(puVar1,param_2,1);
      uVar5 = param_3;
      func_0x00010bf5aac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185640(puVar1,param_2,uVar5);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010c243400();
      if (uVar5 == 0x19) {
        func_0x00010c1a0e40(puVar1,param_2,1);
      }
    }
  }
  else {
    func_0x00010c1a10a0(puVar1,param_2,1);
    uVar5 = param_3;
    func_0x00010c0792e0(param_3);
    func_0x00010c1b30a0(puVar1,param_2,uVar5);
    uVar5 = param_3;
    func_0x00010c07e900(param_3);
    func_0x00010c1a10c0(puVar1,param_2,uVar5);
    uVar5 = param_3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c073b80();
    _objc_release(uVar5);
    if ((int)uVar8 != 0) {
      func_0x00010c1b27e0(puVar1,param_2,1);
      uVar5 = param_3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010b5f9aa8();
      _objc_release(uVar8);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010c2440e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010b5f7a24();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar6 == 0) {
        func_0x00010c185620(puVar1,param_2,uVar7);
      }
      else {
        func_0x00010c185600();
      }
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar5);
    }
    uVar5 = param_3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c073ea0();
    _objc_release(uVar5);
    if ((int)uVar8 != 0) {
      func_0x00010c1afd20(puVar1,param_2,1);
      uVar5 = param_3;
      func_0x00010c2440e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185600(puVar1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar5);
    }
  }
  uVar5 = param_3;
  func_0x00010c0792a0();
  if ((int)uVar5 != 0) {
    func_0x00010c1b3060(puVar1,param_2,1);
    func_0x00010c1afd20(puVar1,param_2,1);
  }
  uVar5 = param_3;
  func_0x00010c2421a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204ea0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf5aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5e0c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205580(param_1,param_2,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  func_0x00010c2bd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10710b644; end: 10710b76f; -[PreviewViewController preloadLegacySendToScope] */

void FUN_10710b644(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ba00();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_48,param_2);
    func_0x00010c13b540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108faa314();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10710b770;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_70);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10710b770; end: 10710b7af;  */

void FUN_10710b770(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10710b7b0; end: 10710b8cf; -[PreviewViewController allowChangingQuickReplyRecipients] */

ulong FUN_10710b7b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e8a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11ea80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf2d240();
    if ((int)uVar5 == 0) {
      uVar5 = 1;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c243400();
      if (uVar5 == 0x15) {
        uVar5 = 1;
      }
      else {
        uVar4 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c07e9a0();
        if ((uVar5 & 1) == 0) {
          func_0x00010bf46560(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c07b9a0();
          _objc_release(param_1);
        }
        else {
          uVar5 = 1;
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 10710b8d0; end: 10710ba13; -[PreviewViewController postDirectlyToMyStory:withBusinessProfiles:withOurStory:withMobStories:withQuickPostSectionType:] */

void FUN_10710b8d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_68 = param_7;
  func_0x00010bddd920(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10710ba14; end: 10710bd5f;  */

void FUN_10710ba14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10710bd24;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c07e920();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    func_0x00010c2876e0(lVar1);
    lVar3 = lVar1;
    func_0x00010c13b540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeba0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2917c0();
    if (lVar5 != 2) {
      lVar5 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c2917c0();
      if (lVar7 != 1) {
        lVar7 = lVar1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c2917c0();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar9 == 7) goto LAB_10710bc70;
        lVar3 = lVar1;
        func_0x00010c13b540(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x0001070c4598();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0f3940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ae820();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
LAB_10710bc70:
  _objc_copyWeak(auStack_78,param_1 + 0x38);
  uStack_68 = *(undefined1 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar12);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be3d320(lVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
LAB_10710bd24:
  _objc_release(lVar1);
  return;
}



/* Entry: 10710bd60; end: 10710bd67;  */

void FUN_10710bd60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10710bd68; end: 10710bf03;  */

void FUN_10710bd68(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010be76500(puVar1);
    puVar2 = puVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    else {
      puVar5 = puVar1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x0001084236ec();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c3400;
      if (((ulong)puVar8 & 1) != 0) goto LAB_10710bee8;
      puVar3 = puVar1;
      func_0x00010c15e020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf98360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbb9e0(puVar1);
      func_0x00010bf78b00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010be9fce0(puVar1);
    }
    _objc_release(puVar2);
  }
LAB_10710bee8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10710bf04; end: 10710c68b; -[PreviewViewController _shouldNavigateToSpotlight:crossPostEligibility:] */

void FUN_10710bf04(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar15 = param_3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar15);
  puVar15 = puVar3;
  func_0x00010c08fa60();
  if (puVar15 == (undefined *)0x0) {
    puStack_68 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 == (undefined *)0x0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puStack_68 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar15);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar16 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010c23a220();
  puStack_70 = param_3;
  if ((int)uVar4 == 0) {
LAB_10710c294:
    _objc_release(uVar16);
LAB_10710c29c:
    uVar16 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010c23a220();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar16);
    }
    else {
      uVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d6180();
      _objc_release(uVar4);
      _objc_release(uVar16);
      if ((int)uVar5 == 0) goto LAB_10710c648;
    }
    func_0x00010846ba3c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_70;
    func_0x00010bf4b900();
    uVar16 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010c23a220();
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d6180();
      _objc_release(uVar4);
      _objc_release(uVar16);
      if (((uint)uVar5 & (uint)puVar2 & 1) == 0) goto LAB_10710c374;
LAB_10710c3e8:
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar16 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar16;
      func_0x00010bf2a040();
      _objc_release(uVar16);
      uVar16 = param_1;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar16;
      func_0x00010bf98360();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      _objc_release(uVar16);
      if (uVar6 != 0) {
        uVar16 = 0;
        do {
          uVar5 = param_1;
          func_0x00010c15e020(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf98360();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar6;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          uVar5 = uVar11;
          func_0x00010bf3cf60(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,uVar5);
          _objc_release(uVar5);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar5 = uVar11;
          func_0x00010c27dd80(uVar11);
          func_0x00010c0df780(puVar12,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_2,puVar12);
          _objc_release(puVar12);
          _objc_release(uVar11);
          uVar16 = uVar16 + 1;
          uVar5 = param_1;
          func_0x00010c15e020();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf98360();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar6;
          func_0x00010bf529e0();
          _objc_release(uVar6);
          _objc_release(uVar5);
        } while (uVar16 < uVar11);
      }
      puVar12 = param_3;
      func_0x00010c0ee3a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c24b0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010c24b780(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar14 = puVar9;
      func_0x00010bf51e00(puVar9);
      uVar10 = 0x5c;
      if (uVar4 != 0) {
        uVar10 = 9;
      }
      func_0x00010c23a360(uVar16,param_2,uVar10,puVar12,puStack_68,puVar14,puVar13);
      _objc_release(puVar14);
      _objc_release(puVar12);
      goto LAB_10710c610;
    }
    _objc_release(uVar16);
LAB_10710c374:
    uVar16 = param_1;
    func_0x00010c24b780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((uint)puVar2 == 0) {
      bVar1 = false;
    }
    else {
      puVar9 = puStack_70;
      func_0x00010bf529e0(puStack_70);
      bVar1 = puVar9 == (undefined *)0x1;
    }
    uVar10 = param_4;
    func_0x00010c071400(param_4);
    uVar5 = uVar4;
    func_0x00010c231a00(uVar4,param_2,puVar2,bVar1,uVar10);
    _objc_release(uVar4);
    _objc_release(uVar16);
    if ((int)uVar5 != 0) goto LAB_10710c3e8;
  }
  else {
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c078260();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar4);
      goto LAB_10710c294;
    }
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d6180();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar16);
    if ((int)uVar6 == 0) goto LAB_10710c29c;
    func_0x00010846ba3c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_70;
    func_0x00010bf4b900();
    if ((int)puVar2 == 0) goto LAB_10710c640;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar16 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar16;
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    _objc_release(uVar16);
    if (uVar5 != 0) {
      uVar16 = 0;
      do {
        uVar4 = param_1;
        func_0x00010c15e020(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf98360();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar6;
        func_0x00010bf3cf60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar4 = uVar6;
        func_0x00010c27dd80(uVar6);
        func_0x00010c0df780(puVar12,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9,param_2,puVar12);
        _objc_release(puVar12);
        _objc_release(uVar6);
        uVar16 = uVar16 + 1;
        uVar4 = param_1;
        func_0x00010c15e020();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf98360();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
        _objc_release(uVar4);
      } while (uVar16 < uVar6);
    }
    puVar13 = PTR_PTR_1126d4c50;
    _objc_alloc(PTR_PTR_1126d4c50);
    puVar12 = puVar2;
    func_0x00010bf51e00(puVar2);
    puVar14 = puVar9;
    func_0x00010bf51e00(puVar9);
    puVar7 = param_3;
    func_0x00010c0ee3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff140(puVar13,param_2,puVar12,puVar14,puVar8,puStack_68);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar14);
    _objc_release(puVar12);
    func_0x00010c24b780(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252420();
LAB_10710c610:
    _objc_release(uVar16);
    _objc_release(param_1);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
LAB_10710c640:
  _objc_release(puStack_70);
LAB_10710c648:
  _objc_release(puStack_68);
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10710c68c; end: 10710c73b; -[PreviewViewController _spotlightToStoriesCrossPostEligibilityForConfig:] */

void FUN_10710c68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5824();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c24b000(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c071400();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10710c73c; end: 10710ccc3; -[PreviewViewController _postDirectlyToMyStoryWithCrossPostingSpotlightToStories:withBusinessProfiles:withQuickPostSectionType:] */

void FUN_10710c73c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
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
  uVar4 = param_3;
  func_0x00010c0dac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010bf8d5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c105440();
    uVar6 = uVar4;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010846b638();
    uVar9 = uVar4;
    func_0x00010846b6bc();
    uVar10 = uVar4;
    func_0x00010c105440();
    func_0x00010c105460();
    func_0x00010be764e0(param_1,param_2,uVar5 & 0xffffffff,0,1,param_4,uVar6,uVar7,param_5,uVar8,
                        uVar9,(char)uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
    uVar4 = param_3;
    func_0x00010c0dac00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf8d5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11a9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (uVar6 == 0) {
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = uVar5;
      func_0x00010c11a9e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar11,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_4);
    lVar14 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar14 != 0) {
      lVar23 = *plStack_120;
      do {
        lVar25 = 0;
        do {
          if (*plStack_120 != lVar23) {
            _objc_enumerationMutation(param_4);
          }
          uVar24 = *(undefined8 *)(lStack_128 + lVar25 * 8);
          uVar15 = uVar24;
          func_0x00010c116a20(uVar24);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar11;
          func_0x00010bf4b900(puVar11,param_2,uVar15);
          _objc_release(uVar15);
          puVar1 = puVar12;
          if ((int)puVar16 == 0) {
            puVar1 = puVar13;
          }
          func_0x00010befa120(puVar1,param_2,uVar24);
          lVar25 = lVar25 + 1;
        } while (lVar14 != lVar25);
        lVar14 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar14 != 0);
    }
    _objc_release(param_4);
    uVar6 = uVar4;
    func_0x00010c105440();
    uVar7 = uVar4;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010beffdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010846b638();
    uVar10 = uVar4;
    func_0x00010846b6bc();
    uVar17 = uVar4;
    func_0x00010c105440();
    func_0x00010c105460();
    func_0x00010be764e0(param_1,param_2,uVar6 & 0xffffffff,1,0,puVar13,uVar7,uVar8,param_5,uVar9,
                        uVar10,(char)uVar17);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar15 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar15;
    func_0x00010c078080();
    _objc_release(uVar15);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x10710cbcc;
    puStack_160 = &UNK_1108b0960;
    uStack_138 = (undefined1)uVar24;
    uStack_158 = param_1;
    uStack_150 = uVar5;
    puStack_148 = puVar12;
    uStack_140 = param_5;
    _objc_retain(puVar12);
    _objc_retain(uVar5);
    ppuVar18 = &puStack_178;
    _objc_retainBlock();
    func_0x00010c1862a0(param_1,param_2,ppuVar18);
    _objc_release(ppuVar18);
    _objc_release(puStack_148);
    _objc_release(uStack_150);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c105440(uVar19);
  uVar24 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c0ee3a0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010beffdc0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_3 + 0x38);
  uVar21 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010846b638();
  uVar22 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010846b6bc();
  uVar3 = (undefined1)*(undefined8 *)(param_3 + 0x28);
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010be764e0(uVar15,param_2,uVar19,1,1,uVar2,uVar24,uVar20,uVar26,uVar21,uVar22,uVar3);
  _objc_release(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}



/* Entry: 10710ccc4; end: 10710d24b; -[PreviewViewController _postDirectlyToMyStoryWithCrossPosting:withBusinessProfiles:withOurStory:withMobStories:withQuickPostSectionType:] */

void FUN_10710ccc4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  FUN_10710d254(puVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bfa0920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar6 != 0) {
    lVar4 = param_1;
    func_0x00010bfa0920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfa0ac0(PTR_PTR_1126c3320);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfa0920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b5cc0;
  _objc_alloc();
  func_0x00010bf529e0();
  puVar2 = puVar3;
  func_0x00010bf51e00();
  puVar7 = puVar5;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = puVar5;
    func_0x00010bf51e00();
  }
  lVar4 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e0c0();
  func_0x00010c037e40();
  _objc_release(lVar4);
  if (puVar7 != (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar2 = param_4;
  func_0x00010bf529e0(param_4);
  puVar7 = puVar1;
  func_0x000108469fc8(puVar1,puVar2,0,0,lVar8);
  func_0x00010c184760(param_1);
  lVar4 = param_1;
  func_0x00010bebf120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    if (((int)puVar7 == 0) || (lVar6 = param_1, func_0x00010be09000(), (int)lVar6 == 0)) {
      func_0x00010846b638();
      func_0x00010846b6bc();
      func_0x00010c105440();
      func_0x00010c105460();
      func_0x00010be764e0(param_1);
    }
    else {
      puVar2 = puVar1;
      func_0x0001084694d8(puVar1,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c13bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105440();
      puVar9 = puVar12;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar12;
      func_0x00010beffdc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010846b638();
      func_0x00010846b6bc();
      func_0x00010c105440();
      func_0x00010c105460();
      func_0x00010be764e0(param_1);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x10710d42c;
      puStack_90 = &UNK_11091a8c8;
      uStack_70 = SUB81(puVar7,0);
      puStack_88 = puVar2;
      lStack_80 = param_1;
      uStack_78 = param_7;
      _objc_retain(puVar2);
      ppuVar11 = &puStack_a8;
      _objc_retainBlock(ppuVar11);
      func_0x00010c1862a0(param_1);
      _objc_release(ppuVar11);
      _objc_release(puStack_88);
      _objc_release(puVar2);
      _objc_release(puVar12);
    }
  }
  else {
    func_0x00010be76520(param_1);
  }
  func_0x00010beb4860(param_1);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10710d24c; end: 10710d253;  */

void FUN_10710d24c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10710d254; end: 10710d53b;  */

void FUN_10710d254(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf252a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    puVar11 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      lVar1 = param_1;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_1);
          }
          lVar4 = param_2;
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf252a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        lVar1 = param_1;
        func_0x00010bf52a60();
      }
      _objc_release(param_1);
      puVar11 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
    }
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24af80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c105440();
  uVar7 = uVar6;
  func_0x00010c0ee3a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010beffdc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b638();
  func_0x00010846b6bc();
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010be764e0(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10710d53c; end: 10710f29f; -[PreviewViewController _postDirectlyToMyStoryAfterInterceptorCheck:isCrossPostingToSpotlight:isCrossPostingSpotlightToStories:withBusinessProfiles:withOurStory:withMobStories:withQuickPostSectionType:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:skipMediaPreparation:storiesPostingConfigOverride:] */

/* WARNING: Possible PIC construction at 0x00010710edec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010710edf0) */
/* WARNING: Removing unreachable block (ram,0x00010710ee44) */
/* WARNING: Removing unreachable block (ram,0x00010710ed94) */

void FUN_10710d53c(long param_1,undefined8 param_2,byte param_3,undefined1 param_4,int param_5,
                  long param_6,long param_7,long param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 param_12,uint param_13,undefined4 param_14,
                  long param_15)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  undefined1 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  byte bVar35;
  long lVar37;
  undefined *puVar38;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined1 uStack_14f;
  byte bStack_14e;
  byte bStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  ulong uVar30;
  uint uVar36;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_15);
  lVar28 = param_8;
  func_0x00010bf529e0();
  lVar3 = param_6;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bfa0920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar9 != 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar3 = param_7;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    bVar35 = 0;
    uVar31 = 0;
  }
  else {
    uVar36 = 0;
    uVar31 = 0;
    lVar34 = *plStack_130;
    do {
      lVar37 = 0;
      do {
        if (*plStack_130 != lVar34) {
          _objc_enumerationMutation(lVar3);
        }
        uVar30 = *(ulong *)(lStack_138 + lVar37 * 8);
        uVar29 = (uint)uVar30;
        func_0x00010c071ae0();
        if ((uVar30 & 1) == 0) {
          func_0x00010c071ae0();
          uVar36 = uVar29 | uVar36;
        }
        else {
          uVar31 = 1;
        }
        bVar35 = (byte)uVar36;
        lVar37 = lVar37 + 1;
      } while (lVar9 != lVar37);
      lVar9 = lVar3;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar3);
  if ((param_13 & 0x10000) == 0) {
    lVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e100();
    _objc_release(lVar34);
    _objc_release(lVar9);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7fc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 & 1) == 0) && (param_7 == 0)) {
    func_0x00010bf529e0(param_8);
  }
  func_0x00010c2b92a0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd080();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar37;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd040();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar3);
  func_0x00010c287700(param_1);
  puVar5 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b68f2cc();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b68f2fc();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b68f32c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b68f35c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b68f38c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_15;
  func_0x00010c22eb00(param_15);
  puVar32 = puVar5;
  func_0x00010b68f3ec(puVar5,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b68f1bc();
  _objc_retainAutoreleasedReturnValue();
  if ((param_13 & 0x10000) == 0) {
    lVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064a40();
    _objc_release(lVar34);
    _objc_release(lVar9);
    _objc_release(lVar3);
    if ((param_5 != 0) && (param_15 != 0)) {
      lVar3 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x0001070c5824();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar9;
      func_0x00010bf22120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar3);
      if (lVar34 != 0) {
        lVar3 = param_1;
        func_0x00010c15e020();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar3;
        func_0x00010bfb1160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar37 = lVar9;
        func_0x00010010fab4(lVar9,PTR_DAT_1126a50c0);
        lVar3 = lVar9;
        if ((int)lVar37 == 0) {
          lVar3 = 0;
        }
        _objc_retain(lVar3);
        _objc_release(lVar9);
        func_0x00010c186320(lVar3);
        _objc_release(lVar3);
      }
      _objc_release(lVar34);
    }
    lVar3 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar9;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d40();
    _objc_release(lVar34);
    _objc_release(lVar9);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1093a0();
    _objc_release(lVar34);
    _objc_release(lVar9);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c078080();
    if ((int)lVar9 == 0) {
      lVar9 = param_1;
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar9;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      lVar37 = lVar34;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c109ac0(param_1);
      _objc_release(lVar37);
      _objc_release(lVar34);
      _objc_release(lVar9);
    }
    else {
      func_0x00010c109ac0(param_1);
    }
    _objc_release(lVar3);
  }
  uStack_14a = lVar28 != 0;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x10710df88;
  puStack_190 = &UNK_11098efb8;
  lStack_178 = param_15;
  uStack_160 = param_11;
  uStack_158 = param_12;
  uStack_149 = (undefined1)param_13;
  lStack_188 = param_6;
  lStack_180 = param_1;
  lStack_170 = param_7;
  lStack_168 = param_8;
  bStack_150 = param_3;
  uStack_14f = bVar1;
  bStack_14e = param_3;
  bStack_14d = bVar35 & 1;
  uStack_14c = uVar31;
  uStack_14b = param_4;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_15);
  _objc_retain(param_6);
  ppuVar6 = &puStack_1a8;
  _objc_retainBlock();
  func_0x00010be2f120(param_1);
  _objc_release(ppuVar6);
  _objc_release(lStack_168);
  _objc_release(lStack_170);
  _objc_release(lStack_178);
  _objc_release(lStack_188);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(puVar32);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = *(undefined **)(puVar5 + 0x20);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar7;
  func_0x00010c0d3c80();
  if (puVar32 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar32);
    puVar8 = puVar32;
  }
  _objc_release(puVar32);
  _objc_release(puVar7);
  lVar9 = *(long *)(puVar5 + 0x28);
  func_0x00010bf46560(lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar8;
  lVar3 = lVar9;
  FUN_10710d254(puVar8,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar32;
  func_0x00010c0d3c80();
  if (puVar7 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar7);
    puVar10 = puVar7;
  }
  _objc_release(puVar7);
  _objc_release(puVar32);
  _objc_release(lVar9);
  lVar34 = *(long *)(puVar5 + 0x28);
  func_0x00010bfa0920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar34;
  func_0x00010c08fa60();
  _objc_release(lVar34);
  if (lVar9 != 0) {
    uVar11 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bfa0920(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(uVar11);
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfa0ac0(PTR_PTR_1126c3320);
    func_0x00010c0df780(puVar32);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bfa0920(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(uVar11);
    _objc_release(puVar32);
  }
  iVar2 = (int)*(undefined8 *)(puVar5 + 0x28);
  func_0x00010beb3c80();
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c07e920();
    _objc_release(uVar12);
    if ((int)uVar11 != 0) {
      uVar13 = *(undefined8 *)(puVar5 + 0x28);
      func_0x00010c0c9d20(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar5 + 0x28);
      func_0x00010bf46560(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar14;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar12;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07e5c0(uVar11);
      _objc_release(uVar16);
      _objc_release(uVar12);
      _objc_release(uVar14);
      _objc_release(uVar11);
      _objc_release(uVar13);
      uVar14 = *(undefined8 *)(puVar5 + 0x28);
      func_0x00010c13b540(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar14;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar16;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b1820();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar13);
      _objc_release(uVar16);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar14);
    }
    uVar15 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar15;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar27;
    func_0x000107fdc0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar15);
    uVar16 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bf46560(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar16;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    uVar17 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar17;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar12;
    func_0x00010c23f220(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf97060(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar12;
    func_0x00010bf0af00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar12;
    func_0x00010c0c7f00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb07a0(uVar14);
    _objc_release(puVar32);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar15);
    _objc_release(uVar27);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar17);
    _objc_release(uVar12);
  }
  puVar32 = *(undefined **)(puVar5 + 0x30);
  if (puVar32 == (undefined *)0x0) {
    puVar32 = PTR_PTR_1126b5cc0;
    _objc_alloc();
    func_0x00010bf529e0();
    puVar7 = puVar8;
    func_0x00010bf51e00();
    puVar18 = puVar10;
    func_0x00010bf529e0();
    if (puVar18 == (undefined *)0x0) {
      func_0x00010c037e40();
    }
    else {
      puVar18 = puVar10;
      func_0x00010bf51e00();
      func_0x00010c037e40();
      _objc_release(puVar18);
    }
    _objc_release(puVar7);
  }
  else {
    _objc_retain(puVar32);
  }
  func_0x00010bfb3160(*(undefined8 *)(puVar5 + 0x28));
  puVar7 = PTR_PTR_1126cbed8;
  func_0x00010c111ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae820();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a95a0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9aa0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010bf46560(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa1c0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar16);
  func_0x00010c2ba320(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010bf46560(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010bfea5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afb40(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar16);
  puVar18 = puVar32;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf4b900();
  _objc_release(puVar19);
  _objc_release(puVar18);
  puVar18 = puVar32;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c24b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  if (((int)puVar20 != 0) &&
     (puVar20 = puVar19, func_0x00010bf529e0(), puVar18 = PTR_PTR_1126c4538,
     puVar20 != (undefined *)0x0)) {
    uVar14 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bfa3600(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar14);
    uVar21 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar21;
    func_0x00010c293d00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010bfa3600(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar22;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar14;
    func_0x00010bfbb3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010c293d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar22);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar21);
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar12 = uVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar12 = uVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar12 = uVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar20);
    func_0x00010bf529e0(puVar19);
    func_0x00010bf0a0e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar20;
    func_0x00010bf529e0();
    if (puVar33 != (undefined *)0x0) {
      puVar33 = (undefined *)0x0;
      do {
        puVar38 = PTR_PTR_1126d2a60;
        _objc_opt_new(PTR_PTR_1126d2a60);
        func_0x00010befa120(puVar25);
        _objc_release(puVar38);
        puVar33 = puVar33 + 1;
        puVar38 = puVar20;
        func_0x00010bf529e0();
      } while (puVar33 < puVar38);
    }
    _objc_retain(puVar19);
    puVar33 = puVar19;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (puVar33 != (undefined *)0x0) {
      puVar38 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(puVar19);
        }
        uVar16 = *(undefined8 *)((long)puVar38 * 8);
        uVar12 = uVar16;
        func_0x00010c2923e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar20);
        _objc_release(uVar12);
        uVar12 = uVar16;
        func_0x00010c294420(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar23);
        _objc_release(uVar12);
        func_0x00010befa120(puVar24);
        puVar26 = PTR_PTR_1126d2a60;
        _objc_opt_new(PTR_PTR_1126d2a60);
        uVar12 = uVar16;
        func_0x00010c11f2a0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24d960();
        func_0x00010c209380(puVar26);
        _objc_release(uVar12);
        func_0x00010c11f2a0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94880();
        func_0x00010c195f00(puVar26);
        _objc_release(uVar16);
        func_0x00010befa120(puVar25);
        _objc_release(puVar26);
        puVar38 = puVar38 + 1;
      } while (puVar33 != puVar38);
      puVar33 = puVar19;
      func_0x00010bf52a60();
    }
    _objc_release(puVar19);
    uVar12 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c15e020(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6a40();
    _objc_release(uVar12);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar20);
    _objc_release(uVar15);
    _objc_release(puVar18);
  }
  uVar16 = *(undefined8 *)(puVar5 + 0x28);
  uVar12 = uVar16;
  func_0x00010c15e020(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f040(uVar16);
  _objc_release(puVar18);
  _objc_release(uVar12);
  func_0x00010beda520(*(undefined8 *)(puVar5 + 0x28));
  if ((((puVar5[0x58] & 1) == 0) && ((puVar5[0x59] & 1) == 0)) && (*(long *)(puVar5 + 0x38) == 0)) {
    lVar9 = *(long *)(puVar5 + 0x40);
    func_0x00010bf529e0();
    if (lVar9 != 0) goto LAB_10710ec50;
  }
  else {
LAB_10710ec50:
    uVar12 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c111180(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf26c80();
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c111180(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78580();
    _objc_release(uVar12);
  }
  if (puVar5[0x58] == '\x01') {
    uVar14 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c13b540(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c28a5e0(uVar13);
    _objc_release(puVar18);
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar14);
  }
  lVar9 = lVar3;
  if (puVar5[0x59] == '\x01') {
    lVar37 = *(long *)(puVar5 + 0x20);
    _objc_retain(lVar37);
    lVar34 = lVar37;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (lVar34 != 0) {
      func_0x00010c13b540(*(undefined8 *)(puVar5 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001070c5da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11a940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c116a20;
    }
    _objc_release(lVar37);
    lVar9 = lVar3;
  }
  if (((puVar5[0x5a] & 1) != 0) || (puVar5[0x59] == '\x01')) {
    uVar14 = *(undefined8 *)(puVar5 + 0x28);
    func_0x00010c13b540(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar14;
    func_0x0001070c535c();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbda60();
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar14);
  }
  uVar12 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c111180(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126d4c58;
  _objc_alloc(PTR_PTR_1126d4c58);
  puVar20 = puVar32;
  func_0x00010beffdc0(puVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5dc0(puVar18);
  func_0x00010bf11c40(uVar12);
  _objc_release(puVar18);
  _objc_release(puVar20);
  _objc_release(uVar12);
  func_0x00010c256e40(*(undefined8 *)(puVar5 + 0x28));
  uVar27 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c258e20(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c13b540(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0e20(uVar27);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar27);
  uVar12 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c258e20(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad360();
  _objc_release(uVar12);
  uVar27 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c25ac00(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c13b540(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0e20(uVar27);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar27);
  uVar12 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c25ac00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad360();
  _objc_release(uVar12);
  uVar16 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c15df80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(puVar5 + 0x20));
  func_0x00010c0a5140(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c15df80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc20();
  _objc_release(uVar12);
  _objc_release(uVar16);
  uVar14 = *(undefined8 *)(puVar5 + 0x28);
  func_0x00010c13b540(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77600();
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(puVar19);
  _objc_release(puVar7);
  _objc_release(puVar32);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010c116a20:
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar9,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10710f2a0; end: 10710f2a7;  */

void FUN_10710f2a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10710f2a8; end: 10710f3a7; -[PreviewViewController sendWithSendToViewRequired:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_10710f2a8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010c15df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afba0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_4f = param_3;
  func_0x00010bddd920(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10710f3a8; end: 10710f45f;  */

void FUN_10710f3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      func_0x00010bea11e0(lVar1,param_2,*(undefined1 *)(param_1 + 0x31),
                          *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
    }
    else {
      func_0x00010bea1220(lVar1,param_2,0,*(undefined8 *)(param_1 + 0x28),
                          *(undefined1 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10710f460; end: 10710f557; -[PreviewViewController _sendWithSendFlowWithSendActionGuardChecksFromSendConfirmationBar:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_10710f460(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126d4c60;
  func_0x00010c11e820(PTR_PTR_1126d4c60);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_4f = param_5;
  func_0x00010bf38560(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10710f558; end: 10710f5d3;  */

void FUN_10710f558(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010c224580(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e6b60();
  }
  else {
    func_0x00010bea1200(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10710f5d4; end: 10710fbb3; -[PreviewViewController _sendWithSendFlowFromSendConfirmationBar:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_10710f5d4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = param_1;
  func_0x00010be33ba0();
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10ab20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc8fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x000108ee1048(uVar3,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x000108423974(uVar2,uVar6,uVar8,uVar5,0,param_3,uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ae00();
  _objc_release(uVar1);
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    func_0x00010c111a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e6a0();
  }
  else {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f440();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c111a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    if ((int)uVar5 == 0) {
      func_0x00010c07e6a0();
    }
    else {
      func_0x00010c07ade0();
    }
    _objc_release(uVar2);
    puVar9 = PTR_PTR_1126d4c68;
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c242400();
    uVar4 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083340();
    func_0x00010c0a48a0(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf98360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) goto LAB_10710f9ac;
    }
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f2e0();
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c15bd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c159a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2992a0(param_1);
  func_0x00010bfd4160(param_1);
  func_0x00010beb5980(param_1);
  func_0x00010c115400(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10710f9ac:
  uVar1 = param_1;
  func_0x00010c0e1380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar9 = PTR_PTR_1126ae810;
    _objc_opt_new(PTR_PTR_1126ae810);
    func_0x00010c1d0940(param_1);
    _objc_release(puVar9);
    _objc_initWeak(auStack_68,param_1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10710fbb4;
    puStack_78 = &UNK_11098f048;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0e1380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  if ((int)uVar7 == 0) {
    func_0x00010be08220(param_1);
  }
  else {
    func_0x00010c224580(param_1);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_a8,auStack_68);
    uStack_a0 = param_4;
    uStack_98 = param_5;
    func_0x00010bf47420(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 10710fbb4; end: 10710fc6f;  */

void FUN_10710fbb4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd580(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10710fc70; end: 10710fd1f;  */

void FUN_10710fc70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10710fd20; end: 10710fdcf; -[PreviewViewController _shouldSetInfiniteDurationOnChatSendMedia] */

undefined8 FUN_10710fd20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c081200();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c07e920();
    _objc_release(param_1);
  }
  return uVar4;
}



/* Entry: 10710fdd0; end: 10710ff2f; -[PreviewViewController _emitPresentSendToEvent:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_10710fdd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c111c00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3400;
  uVar2 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c15bdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb9e0(param_1);
  func_0x00010bf786e0(puVar6,param_2,uVar3,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18e8e0(param_1,param_2,0);
  func_0x00010c224580(param_1,param_2,0);
  func_0x00010c1e1520(param_1,param_2,1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10710ff30; end: 1071104a3; -[PreviewViewController _preselectedItemsAddingPathwaySpotlight:] */

void FUN_10710ff30(undefined8 ****param_1,undefined8 param_2,undefined8 ****param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  uint uVar19;
  uint uVar20;
  undefined8 ****ppppuVar21;
  undefined8 ***pppuStack_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ***apppuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = (undefined **)param_3;
  _objc_retain(param_3);
  ppppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar3 = ppppuVar2;
  func_0x00010c07f440();
  _objc_release(ppppuVar2);
  ppppuVar2 = param_3;
  if (((ulong)ppppuVar3 & 1) == 0) {
    _objc_retain(param_3);
    goto LAB_10711045c;
  }
  ppppuVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar4 = ppppuVar3;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar21 = ppppuVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar5 = ppppuVar21;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar21);
  _objc_release(ppppuVar4);
  _objc_release(ppppuVar3);
  ppppuVar4 = param_1;
  func_0x00010c275a00();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar21 = ppppuVar4;
  func_0x00010010fab4();
  ppppuVar3 = ppppuVar4;
  if ((int)ppppuVar21 == 0) {
    ppppuVar3 = (undefined8 ****)0x0;
  }
  _objc_retain(ppppuVar3);
  _objc_release(ppppuVar4);
  puVar6 = PTR_PTR_1126bf670;
  func_0x00010bfdd260();
  if (((ulong)puVar6 & 1) == 0) {
    ppppuVar4 = ppppuVar3;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppppuVar4 != (undefined8 ****)0x0) goto LAB_10711005c;
    uVar19 = 0;
  }
  else {
LAB_10711005c:
    ppppuVar4 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = ppppuVar4;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar21;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = ppppuVar7;
    func_0x00010bf1f440();
    uVar19 = 0;
    if ((int)ppppuVar8 != 0) {
      ppppuVar8 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar9 = ppppuVar8;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = ppppuVar9;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar11 = ppppuVar10;
      func_0x00010bf1f440();
      uVar19 = (uint)ppppuVar11;
      _objc_release(ppppuVar10);
      _objc_release(ppppuVar9);
      _objc_release(ppppuVar8);
    }
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar4);
  }
  puVar6 = PTR_PTR_1126bf670;
  ppuVar18 = (undefined **)ppppuVar5;
  func_0x00010bfd42c0();
  if ((int)puVar6 == 0) {
    uVar20 = 0;
  }
  else {
    ppppuVar4 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = ppppuVar4;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar21;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = &PTR____CFConstantStringClassReference_110ea07d8;
    ppppuVar8 = ppppuVar7;
    func_0x00010bf1f440();
    uVar20 = 0;
    if ((int)ppppuVar8 != 0) {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar8 = param_1;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar9 = ppppuVar8;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = &PTR____CFConstantStringClassReference_110ea07f8;
      ppppuVar10 = ppppuVar9;
      func_0x00010bf1f440();
      uVar20 = (uint)ppppuVar10;
      _objc_release(ppppuVar9);
      _objc_release(ppppuVar8);
      _objc_release(param_1);
    }
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar4);
  }
  if (((uVar19 | uVar20) & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    _objc_retain(param_3);
    ppppuVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppppuVar4 != (undefined8 ****)0x0) {
      ppppuVar21 = (undefined8 ****)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(ulong *)((long)ppppuVar21 * 8);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        ppuVar18 = &PTR____CFConstantStringClassReference_110f52df8;
        func_0x00010c071ae0();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        if ((uVar15 & 1) != 0) goto LAB_10711044c;
        ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
      } while (ppppuVar4 != ppppuVar21);
      ppppuVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar6 = PTR_PTR_1126b3558;
    _objc_alloc();
    func_0x00010c03d4e0();
    puVar16 = PTR_PTR_1126b3560;
    _objc_alloc();
    puVar17 = puVar16;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0();
    _objc_release(puVar17);
    ppppuVar4 = (undefined8 ****)PTR_PTR_1126b3568;
    _objc_alloc();
    func_0x00010c03d400();
    if (param_3 == (undefined8 ****)0x0) {
      ppuVar18 = (undefined **)apppuStack_f8;
      ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
      apppuStack_f8[0] = ppppuVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar18 = (undefined **)ppppuVar4;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppppuVar4);
    _objc_release(puVar16);
    _objc_release(puVar6);
  }
LAB_10711044c:
  _objc_release(ppppuVar3);
  _objc_release(ppppuVar5);
LAB_10711045c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar18);
    func_0x00010c28a0e0(param_3);
    func_0x00010c289aa0(param_3);
    ppppuVar2 = param_3;
    func_0x00010bfa3600(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar2;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar21 = ppppuVar4;
    func_0x00010bfc8fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = param_3;
    func_0x00010be1e560(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar21;
    func_0x00010bf09f80(ppppuVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar5);
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar4);
    _objc_release(ppppuVar3);
    _objc_release(ppppuVar2);
    ppppuVar3 = param_3;
    func_0x00010be79c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar7);
    ppppuVar4 = param_3;
    func_0x00010be1ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fdf40();
    ppppuVar2 = (undefined8 ****)PTR_PTR_1126d4c70;
    _objc_alloc();
    ppppuVar21 = param_3;
    func_0x00010c275a00();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = param_3;
    func_0x00010bfd9540();
    if (((ulong)ppppuVar5 & 1) == 0) {
      pppuStack_1f8 = param_3;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      pppuStack_200 = pppuStack_1f8;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2411a0(param_3);
    ppppuVar7 = param_3;
    func_0x00010bfa3600(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = ppppuVar7;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = ppppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081200();
    func_0x00010c07de40(param_3);
    ppppuVar10 = param_3;
    func_0x00010c292da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = param_3;
    func_0x00010bea0e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054680(ppppuVar2);
    _objc_release(ppuVar18);
    _objc_release(param_3);
    _objc_release(ppppuVar11);
    _objc_release(ppppuVar10);
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    if (((ulong)ppppuVar5 & 1) == 0) {
      _objc_release(pppuStack_200);
      _objc_release(pppuStack_1f8);
    }
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar4);
    _objc_release(ppppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar2);
  return;
}



/* Entry: 1071104a4; end: 10711079b; -[PreviewViewController previewSendToParams:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_1071104a4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  _objc_retain(param_3);
  func_0x00010c28a0e0(param_1);
  func_0x00010c289aa0(param_1);
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10ab20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc8fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010be1e560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf09f80(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be79c20(param_1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar3 = param_1;
  func_0x00010be1ae40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0fdf40();
  puVar8 = PTR_PTR_1126d4c70;
  _objc_alloc();
  uVar5 = param_1;
  func_0x00010c275a00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfd9540();
  if ((uVar6 & 1) == 0) {
    uStack_a8 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uStack_a8;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uStack_b0 != 0;
  }
  else {
    bVar1 = true;
  }
  uVar7 = param_1;
  func_0x00010c2411a0(param_1);
  uVar9 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c081200();
  uVar13 = param_1;
  func_0x00010c07de40(param_1);
  uVar14 = param_1;
  func_0x00010c292da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bea0e00(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be20200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054680(puVar8,param_2,uVar5,bVar1,uVar7,uVar12,uVar13,uVar14,param_3,uVar2,uVar15,
                      param_1,uVar3,(char)uVar4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  if ((uVar6 & 1) == 0) {
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10711079c; end: 107110883; -[PreviewViewController planStickerRestrictsDestinations] */

undefined8 FUN_10711079c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfd7f00();
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    FUN_1070c2ed4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c07a200();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 107110884; end: 107110af7; -[PreviewViewController snapDocLazySubjectFeedingFromEditor] */

void FUN_107110884(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = param_1;
  func_0x00010c240280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar2 = puVar3;
    FUN_107110af8(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    _objc_release(puVar2);
    func_0x00010c204040(param_1);
    puVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f440();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if ((int)puVar6 != 0) {
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new(PTR_PTR_1126ae810);
      func_0x00010c204020(param_1);
      _objc_release(puVar2);
      _objc_initWeak(auStack_58,puVar3);
      puVar2 = puVar3;
      func_0x00010bf34f20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      puVar4 = puVar2;
      func_0x00010c25ff60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c240260(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0(puVar4);
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(puVar3);
  }
  else {
    func_0x00010c240280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107110af8; end: 107110b8b;  */

void FUN_107110af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2470;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107123dcc;
  puStack_30 = &UNK_110866f70;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x00010c2adce0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107110b8c; end: 107110bef;  */

void FUN_107110b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    FUN_107110af8(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107110bf0; end: 107110df7; -[PreviewViewController _generateContentConfiguration] */

void FUN_107110bf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d29d8;
  _objc_alloc(PTR_PTR_1126d29d8);
  uVar3 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c15a720();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c2402a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e40(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be617a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47220(puVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107110df8; end: 107110e37;  */

void FUN_107110df8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107110e38; end: 1071112fb; -[PreviewViewController _generateContentData] */

undefined * FUN_107110e38(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010c09e180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar6);
    puVar6 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    dVar17 = 0.0;
    if (puVar6 != (undefined *)0x0) {
LAB_107110f98:
      puVar13 = (undefined *)0x0;
LAB_107110f9c:
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar15 = *(ulong *)((long)puVar13 * 8);
      uVar9 = uVar15;
      func_0x00010c074780();
      if (((uVar9 & 1) != 0) || (uVar9 = uVar15, func_0x00010c278a40(), (int)uVar9 != 1))
      goto LAB_107110fd8;
      func_0x00010c2787a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar15;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (uVar9 == 0) {
        dVar17 = 0.0;
      }
      else {
        dVar17 = 0.0;
        do {
          uVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar15);
            }
            uVar16 = *(ulong *)(uVar14 * 8);
            uVar10 = uVar16;
            func_0x00010bfdda80();
            if ((int)uVar10 != 0) {
              func_0x00010c27c540(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar16;
              func_0x00010bf8b160();
              dVar17 = dVar17 + (double)uVar10 / 1000.0;
              _objc_release(uVar16);
            }
            uVar14 = uVar14 + 1;
          } while (uVar9 != uVar14);
          uVar9 = uVar15;
          func_0x00010bf52a60();
        } while (uVar9 != 0);
      }
      _objc_release(uVar15);
    }
LAB_1071110f4:
    _objc_release(puVar8);
    puVar6 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c27dd80();
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar6);
    puVar13 = PTR_PTR_1126ae558;
    if (((int)puVar8 == 0) || ((int)puVar8 == 1)) {
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x0001070c5e54();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c26dcc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c26db60(0x405e000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
    puVar7 = PTR_PTR_1126d2ac0;
    _objc_alloc();
    func_0x00010c051d80(dVar17);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010bf0b760();
    _objc_release(param_2);
    return (undefined *)(ulong)((int)uVar11 == 5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
LAB_107110fd8:
  puVar13 = puVar13 + 1;
  if (puVar6 == puVar13) goto code_r0x000107110fe4;
  goto LAB_107110f9c;
code_r0x000107110fe4:
  puVar6 = puVar8;
  func_0x00010bf52a60();
  if (puVar6 == (undefined *)0x0) goto LAB_1071110f4;
  goto LAB_107110f98;
}



/* Entry: 1071112fc; end: 10711133f;  */

bool FUN_1071112fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 107111340; end: 107111793; -[PreviewViewController _generateContentConfigurationWithPreviewBlob:] */

void FUN_107111340(undefined *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puVar10;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    unaff_x22 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = unaff_x22;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_a0 == (undefined *)0x0) {
      bVar1 = false;
      puStack_a0 = (undefined *)0x0;
      goto LAB_107111378;
    }
    puStack_a8 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_a8;
    func_0x00010c070a20();
    if ((int)puVar7 == 0) {
      bVar1 = true;
      goto LAB_107111378;
    }
    _objc_release(puStack_a8);
    _objc_release(puStack_a0);
    _objc_release(unaff_x22);
  }
  else {
    bVar1 = false;
LAB_107111378:
    puVar7 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c083340();
    if ((int)puVar3 == 0) {
      _objc_release(puVar7);
      bVar2 = false;
    }
    else {
      puVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c07e880();
      if ((int)puVar10 == 0) {
        _objc_release(puVar3);
        _objc_release(puVar7);
        bVar2 = false;
      }
      else {
        puVar10 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar10;
        func_0x0001070c4790();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c240000();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = puVar6 != (undefined *)0x0;
        _objc_release();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar10);
        _objc_release(puVar3);
        _objc_release(puVar7);
      }
    }
    if (bVar1) {
      _objc_release(puStack_a8);
    }
    if (param_3 == 0) {
      _objc_release(puStack_a0);
      _objc_release(unaff_x22);
    }
    if (!bVar2) {
      _objc_initWeak(auStack_68,param_1);
      puVar7 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      func_0x00010bf11fe0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x0001070c4790();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = param_1;
        func_0x00010c2402a0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d29d8;
      _objc_alloc(PTR_PTR_1126d29d8);
      puVar5 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c15a720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c002e40(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be617a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47220(puVar3);
      _objc_release(param_1);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      param_1 = puVar3;
      goto LAB_107111724;
    }
  }
  func_0x00010be1ae40(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_107111724:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107111794; end: 107111803;  */

void FUN_107111794(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010be1aec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107111804; end: 107111b8b; -[PreviewViewController _generateContentDataWithPreviewBlob:] */

void FUN_107111804(double param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  double dVar12;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf1f440();
  uVar2 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c075080();
  uVar11 = 0;
  if ((int)uVar4 != 0) {
    uVar4 = param_2;
    func_0x00010bfd4160();
    uVar11 = (uint)uVar4 ^ 1;
  }
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d4c78;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (((uVar1 & 1) == 0) || (param_4 == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar6);
  }
  else {
    puVar7 = puVar6;
    if (uVar11 == 0) {
      param_1 = 1.60807493534087e-314;
      _objc_retain(puVar6);
      func_0x00010c29bba0(uVar4);
    }
    else {
      param_1 = 1.60807493534087e-314;
      _objc_retain(puVar6);
      func_0x00010bfe9420(uVar4);
    }
  }
  _objc_release(puVar7);
  func_0x00010c0c4ba0(param_4);
  if (param_1 == 0.0) {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_2);
    dVar12 = 0.0;
    if ((uVar2 != 0) && (uVar1 = uVar2, func_0x00010bfde420(), (int)uVar1 != 0)) {
      func_0x00010c0ff240(uVar2);
      dVar12 = param_1;
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010c0c4ba0(param_4);
    dVar12 = param_1;
  }
  puVar7 = PTR_PTR_1126d2ac0;
  _objc_alloc();
  puVar8 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051d80(dVar12);
  ppuVar10 = &puStack_80;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(ppuVar10);
  if (ppuVar10 == (undefined **)0x0) {
    if (param_3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(*(undefined8 *)(param_4 + 0x20));
      _objc_release(puVar5);
    }
    else {
      func_0x00010bf43d60(*(undefined8 *)(param_4 + 0x20));
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_4 + 0x20));
  }
  _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107111b8c; end: 107111c37;  */

void FUN_107111b8c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar1);
    }
    else {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107111c38; end: 107111e1b;  */

/* WARNING: Removing unreachable block (ram,0x000107111d10) */

void FUN_107111c38(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
      func_0x00010bf0b300(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c169b80();
      puVar2 = puVar1;
      func_0x00010bf51e60(puVar1);
      _objc_retain(0);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar5);
      }
      else {
        func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(puVar4);
      _CGImageRelease(puVar2);
      _objc_release(0);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107111e1c; end: 107111ea3; -[PreviewViewController _musicDidChangeHandler] */

void FUN_107111e1c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107111ea4;
  puStack_38 = &UNK_1108e7b80;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107111ea4; end: 107111fa7;  */

void FUN_107111ea4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c15a4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289c40(lVar3);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c15bd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbea0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107111fa8; end: 107112343; -[PreviewViewController selectedItemsFromSendTo] */

void FUN_107111fa8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  
  puVar1 = PTR_PTR_1126d4c80;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befc200();
  uVar5 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d4bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c294720();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c0ce9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c22c040();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bfcf340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2440(puVar1,param_2,uVar4 & 0xffffffff,0,uVar7,uVar10,uVar13,uVar16,uVar19,uVar22,
                      uVar25,uVar28,uVar30);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(param_1);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar31 = puVar1;
  func_0x000108eea4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 107112344; end: 107112587; -[PreviewViewController _emitPreviewFinishEvent] */

void FUN_107112344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22c040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 != 0) {
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2757e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2757e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    lVar2 = param_1;
    func_0x00010bf00c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar6 = PTR_PTR_1126c3400;
  lVar2 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c159a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb9e0(param_1);
  func_0x00010bf78b00(puVar6,param_2,lVar3,lVar4,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107112588; end: 10711267f; -[PreviewViewController _sendWithSendActionGuardsWithSendToViewRequired:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_107112588(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126d4c60;
  func_0x00010c15cea0(PTR_PTR_1126d4c60);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_4f = param_5;
  func_0x00010bf38560(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107112680; end: 1071126fb;  */

void FUN_107112680(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010c224580(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e6b60();
  }
  else {
    func_0x00010bea1260(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071126fc; end: 107112bdf; -[PreviewViewController _sendWithSendToViewRequired:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_1071126fc(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong unaff_x27;
  
  uVar1 = param_1;
  func_0x00010bea1300();
  if ((int)uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4288;
    _objc_opt_new();
    if (puVar2 != (undefined *)0x0) {
      puVar2[0x12] = 1;
      _objc_retain(puVar2);
    }
    _objc_release(puVar2);
    puVar7 = puVar2;
    func_0x00010b68f1bc(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_retain(puVar7);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064a40();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c073aa0();
    param_3 = (ulong)((uint)uVar4 ^ 1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c230840();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07e960();
    if ((int)uVar4 == 0) {
      uVar4 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = uVar4;
      func_0x00010c2330c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)unaff_x27 == 0) goto LAB_107112844;
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  else {
    _objc_release(uVar1);
LAB_107112844:
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c07e8c0();
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_107112b48;
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c230840();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c07e920();
      if ((int)uVar4 == 0) {
LAB_107112948:
        uVar5 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c243400();
        _objc_release(uVar5);
        if ((int)uVar4 != 0) {
          _objc_release(unaff_x27);
        }
        _objc_release(uVar3);
        _objc_release(uVar1);
        if (uVar6 != 0x29) goto LAB_1071129a0;
      }
      else {
        unaff_x27 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = unaff_x27;
        func_0x00010c243400();
        if (uVar5 == 0x22) goto LAB_107112948;
        _objc_release(unaff_x27);
        _objc_release(uVar3);
        _objc_release(uVar1);
      }
      uVar1 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9ee0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)param_3 == 0) {
        uVar1 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c131e40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c1322e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        func_0x00010be9eb80(param_1,param_2,uVar5 == 0,param_4,param_5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar1);
        goto LAB_107112b48;
      }
    }
    else {
      _objc_release(uVar1);
LAB_1071129a0:
      uVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c07ea60();
      _objc_release(uVar1);
      if ((int)uVar3 == 0) {
        func_0x00010be791e0(param_1);
        uVar1 = param_1;
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x0001070c4598();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0f3940();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 1;
        func_0x00010c2a9ee0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((param_3 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c11e820(param_1);
          uVar8 = (uint)uVar1 ^ 1;
        }
        func_0x00010be9f080(param_1,param_2,uVar8,param_4,param_5 & 0xffffffff);
        goto LAB_107112b48;
      }
    }
    param_3 = 1;
  }
  func_0x00010be9eb80(param_1,param_2,param_3,param_4,param_5);
LAB_107112b48:
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107112be0; end: 107112d67; -[PreviewViewController _presentSendToViewWithPreviewViewModel:previewBlob:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_107112be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010be47ae0();
  uVar1 = param_1;
  func_0x00010c08f5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ebc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5434();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c234220();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 != 0) {
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c5434();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e1880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78100();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c18e8e0(param_1);
  func_0x00010c224580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1e1530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPresentingSendVC__112655f70,1);
  return;
}



/* Entry: 107112d68; end: 107112e23; -[PreviewViewController _presentSendToView:fromCopyLinkButton:] */

void FUN_107112d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010bf47420(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107112e24; end: 107112e93;  */

void FUN_107112e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e640();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107112e94; end: 107112fe3; -[PreviewViewController _prepareSharedMessageMediaToUpload] */

void FUN_107112e94(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c15bd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c159a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2992a0(param_1);
  func_0x00010bfd4160(param_1);
  func_0x00010beb5980(param_1);
  func_0x00010c1090c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c15bd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22b7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126d2a58;
  _objc_opt_class(PTR_PTR_1126d2a58);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010c1ff080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107112fe4; end: 107113037; -[PreviewViewController _sendChatMediaWithShouldPresentSendToView:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_107112fe4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010be791e0();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentSendToView_fromCopyLinkB_11257d328,param_4,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendChatMediaWithoutPresentingS_112585490);
  return;
}



/* Entry: 107113038; end: 107113293; -[PreviewViewController _sendChatMediaWithoutPresentingSendToView] */

void FUN_107113038(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c294720();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x0001084382cc(uVar3,uVar6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c244e80(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar10);
  return;
}



/* Entry: 107113294; end: 107113303;  */

void FUN_107113294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  FUN_107113304(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be9ebc0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107113304; end: 10711345f;  */

void FUN_107113304(undefined *param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar14 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar16 = *plStack_110;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        uVar15 = *(undefined8 *)(lStack_118 + (long)puVar17 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar15);
        puVar17 = puVar17 + 1;
      } while (puVar2 != puVar17);
      puVar2 = param_1;
      puVar14 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar14);
    puVar1 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bfb8920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = (undefined *)puVar14;
    func_0x000108438538(puVar14,puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    FUN_107113cc4(puVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0ce9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x0001070c53a4();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    puVar13 = puVar8;
    func_0x0001084383f4(puVar4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar9;
    func_0x00010bf529e0();
    if ((puVar2 != (undefined *)0x0) ||
       (puVar2 = puVar5, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
      puVar2 = PTR_PTR_1126d4c88;
      puVar3 = param_1;
      func_0x00010c1122a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c15b960();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0ce9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c086e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(puVar5);
      func_0x000108605534(puVar9);
      func_0x00010c2b68e0(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf446e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4060(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b6b08;
      func_0x00010c22b6a0(PTR_PTR_1126b6b08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e20();
      _objc_release(puVar3);
      puVar3 = puVar9;
      func_0x00010bf529e0();
      if (((puVar3 == (undefined *)0x1) &&
          (puVar3 = puVar5, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) ||
         ((puVar3 = puVar9, func_0x00010bf529e0(), puVar3 == (undefined *)0x0 &&
          (puVar3 = puVar5, func_0x00010bf529e0(), puVar3 == (undefined *)0x1)))) {
        puVar3 = param_1;
        func_0x00010bfa3600(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2a2e80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf0d6c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf51e00();
        puVar10 = param_1;
        func_0x00010c22bc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2039e0();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6700();
        puVar4 = param_1;
        func_0x00010c22bc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c56e0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6700();
        puVar4 = param_1;
        func_0x00010c22bc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4860();
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x000108605534();
        func_0x00010bf529e0();
        puVar4 = puVar5;
        func_0x00010bf529e0();
        puVar3 = PTR_PTR_1126b01c0;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = puVar9;
          func_0x00010bfb1920(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bfceb20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcf680();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        else {
          puVar4 = puVar1;
          func_0x000107e327a0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
        puVar6 = param_1;
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x0001070c5944();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf501a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c246920(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        _objc_retain(puVar1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(puVar7);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar1;
      }
      else {
        puVar3 = param_1;
        func_0x00010c2431e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010c22bc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x0001070c4598();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0f3940();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15b840(puVar3);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c224580(param_1);
      _objc_release(puVar2);
    }
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar17);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain();
    func_0x00010c269d40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar13);
    puVar2 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107113460; end: 107113cc3; -[PreviewViewController _sendChatMediaWithoutSendToViewWithSnapchatterMap:] */

void FUN_107113460(undefined *param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x000108438538(param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  FUN_107113cc4(puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0ce9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x0001070c53a4();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  puVar14 = puVar9;
  func_0x0001084383f4(puVar5,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar10;
  func_0x00010bf529e0();
  if ((puVar2 != (undefined *)0x0) ||
     (puVar2 = puVar6, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    puVar2 = PTR_PTR_1126d4c88;
    puVar4 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0ce9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c086e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar6);
    func_0x000108605534(puVar10);
    func_0x00010c2b68e0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf446e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4060(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010bf529e0();
    if (((puVar4 == (undefined *)0x1) &&
        (puVar4 = puVar6, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) ||
       ((puVar4 = puVar10, func_0x00010bf529e0(), puVar4 == (undefined *)0x0 &&
        (puVar4 = puVar6, func_0x00010bf529e0(), puVar4 == (undefined *)0x1)))) {
      puVar4 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2a2e80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0d6c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf51e00();
      puVar11 = param_1;
      func_0x00010c22bc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2039e0();
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6700();
      puVar5 = param_1;
      func_0x00010c22bc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c56e0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6700();
      puVar5 = param_1;
      func_0x00010c22bc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4860();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x000108605534();
      func_0x00010bf529e0();
      puVar5 = puVar6;
      func_0x00010bf529e0();
      puVar4 = PTR_PTR_1126b01c0;
      if (puVar5 == (undefined *)0x0) {
        puVar5 = puVar10;
        func_0x00010bfb1920(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bfceb20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcf680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      else {
        puVar5 = puVar1;
        func_0x000107e327a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      puVar7 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x0001070c5944();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf501a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c246920(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      _objc_retain(puVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar1;
    }
    else {
      puVar4 = param_1;
      func_0x00010c2431e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c22bc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b840(puVar4);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c224580(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  func_0x00010c269d40(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010c0ee9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar14);
  puVar2 = puVar1;
  func_0x00010c0b8600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107113cc4; end: 107113d4f;  */

void FUN_107113cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0ee9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107113d50; end: 107113e6f;  */

void FUN_107113d50(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_3 != 0) goto LAB_107113e54;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x01') {
    uVar5 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) goto LAB_107113df0;
    func_0x00010be9eb20(uVar6);
LAB_107113e3c:
    _objc_release(uVar5);
  }
  else {
    uVar5 = 0;
LAB_107113df0:
    uVar4 = param_2;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010be9eb20(uVar6);
    _objc_release(uVar4);
    if (cVar1 != '\0') goto LAB_107113e3c;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_107113e54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107113e70; end: 1071145a3; -[PreviewViewController _sendChatMediaToConversationIds:groupIds:recipientUserIds:numRecipients:] */

void FUN_107113e70(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar14 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar14;
  func_0x00010c0792e0();
  _objc_release(uVar14);
  if ((int)uVar1 != 0) {
    func_0x00010c2876e0(param_1);
    uVar14 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeba0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010c0c9d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e5c0(uVar1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1820();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000107fdc0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8060();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    uVar14 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x0001070c46b8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c23f220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf97060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bf0af00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c0c7f00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb07a0(uVar4,param_2,uVar5,uVar7,uVar8,uVar9,0,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar14);
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  puStack_78 = PTR_PTR_1126b5be8;
  _objc_alloc();
  lVar11 = param_5;
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    func_0x00010bff40a0(puStack_78,param_2,param_4,0,param_5,0,0,param_6,0,0,0);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff40a0(puStack_78,param_2,param_4,0,param_5,puVar10,0,param_6,0,0,0);
    _objc_release(puVar10);
  }
  uVar14 = param_1;
  func_0x00010c2431e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22bc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  FUN_1071145a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_107114648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c5e0(uVar14,param_2,uVar1,param_3,uVar7,puStack_78,uVar9,uVar12);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar14);
  _objc_release(puStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar10 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  uVar13 = param_3;
  func_0x00010c0792a0();
  if ((uVar13 & 1) == 0) {
    uVar13 = param_3;
    func_0x00010c0792e0();
    if ((uVar13 & 1) == 0) {
      uVar13 = param_3;
      func_0x00010c07e880();
      if ((uVar13 & 1) != 0) goto LAB_1071145d8;
      uVar13 = param_3;
      func_0x00010c07e920();
      if ((int)uVar13 == 0) {
        puVar15 = (undefined *)0x0;
        goto LAB_107114604;
      }
    }
    uVar14 = 2;
  }
  else {
LAB_1071145d8:
    uVar14 = 1;
  }
  func_0x00010c1690c0(puVar10,param_2,uVar14);
  _objc_retain(puVar10);
  puVar15 = puVar10;
LAB_107114604:
  _objc_release(puVar10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1071145a4; end: 107114647;  */

void FUN_1071145a4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  uVar2 = param_1;
  func_0x00010c0792a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0792e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c07e880();
      if ((uVar2 & 1) != 0) goto LAB_1071145d8;
      uVar2 = param_1;
      func_0x00010c07e920();
      if ((int)uVar2 == 0) {
        puVar4 = (undefined *)0x0;
        goto LAB_107114604;
      }
    }
    uVar3 = 2;
  }
  else {
LAB_1071145d8:
    uVar3 = 1;
  }
  func_0x00010c1690c0(puVar1,param_2,uVar3);
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_107114604:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107114648; end: 10711478f;  */

void FUN_107114648(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf313a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = param_2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    else {
      _objc_retain(lVar4);
      lVar6 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar6 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar6 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bcf30;
    _objc_opt_new(PTR_PTR_1126bcf30);
    func_0x00010c26f320(lVar6);
    func_0x00010c1c4200(puVar7,param_3,(long)(param_1 * 1000.0));
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107114790; end: 107115167; -[PreviewViewController newSendToConfigurationWithMentions:] */

undefined * FUN_107114790(undefined *param_1,undefined8 param_2,undefined *param_3)

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
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c15d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) goto LAB_107114f2c;
  puVar1 = PTR_PTR_1126d4c90;
  _objc_alloc(PTR_PTR_1126d4c90);
  puVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e740(puVar1,param_2,puVar4,puVar7);
  func_0x00010c1fc480(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243400();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0792e0();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3080();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233c60();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2a60();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d080();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af740();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075080();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1b80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b5a0();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b39e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c10ab20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfd86c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a62a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if ((int)puVar4 != 0) {
    puVar3 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bfc9000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c10ab20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfba480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  func_0x00010bf529e0();
  if ((puVar1 == (undefined *)0x0) || (puVar1 = param_1, func_0x00010bea0b40(), (int)puVar1 == 0)) {
    puVar1 = param_1;
    func_0x00010c15d080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0a60();
  }
  else {
    puVar1 = param_3;
    func_0x00010bf09f80(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c15d080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0a60();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ae0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0ee480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6c80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  puVar3 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214200();
  _objc_release(puVar3);
  func_0x00010c214240(param_1,param_2,puVar1);
  puVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f160();
  puVar5 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207ac0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010807dfac();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010807df50();
    if (((ulong)puVar5 & 1) != 0) {
LAB_107114e6c:
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_107114e7c;
    }
    puVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010807debc();
    if (((ulong)puVar7 & 1) != 0) {
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_107114e6c;
    }
    puVar7 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0780a0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (((ulong)puVar9 & 1) != 0) goto LAB_107114e7c;
  }
  else {
LAB_107114e7c:
    puVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c15d080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb140();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07e920();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar3 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
LAB_107114f2c:
  func_0x00010c28a0e0(param_1);
  func_0x00010c2411a0(param_1);
  puVar1 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4920();
  _objc_release(puVar1);
  func_0x00010bfd9540(param_1);
  puVar1 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2b00();
  _objc_release(puVar1);
  func_0x00010c0fdf40(param_1);
  puVar1 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3540();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126afdd8;
  puVar2 = param_1;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f4a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c10ab20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfc8fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010be79c20(param_1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfa60();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c15d080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107115168; end: 10711543f; -[PreviewViewController allTopicsFromCaptions] */

void FUN_107115168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lStack_200;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(param_1);
  lStack_200 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lStack_200 != 0) {
    lVar20 = *plStack_1a0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_1a0 != lVar20) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lStack_1a8 + lVar21 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c2759e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar23 = *plStack_1e0;
          do {
            lVar22 = 0;
            do {
              if (*plStack_1e0 != lVar23) {
                _objc_enumerationMutation(lVar4);
              }
              uVar24 = *(undefined8 *)(lStack_1e8 + lVar22 * 8);
              uVar6 = uVar24;
              func_0x00010bfdedc0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c0b5ac0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010bf4b900(puVar2,param_2,uVar7);
              _objc_release(uVar7);
              _objc_release(uVar6);
              if (((ulong)puVar8 & 1) == 0) {
                func_0x00010befa120(puVar1,param_2,uVar24);
                func_0x00010bfdedc0();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar24;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2,param_2,uVar6);
                _objc_release(uVar6);
                _objc_release(uVar24);
              }
              lVar22 = lVar22 + 1;
            } while (lVar5 != lVar22);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lStack_200);
      lStack_200 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_200 != 0);
  }
  _objc_release(lVar3);
  puVar8 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c297c40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c15a420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c275a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfa3600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2980c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf51e00();
  func_0x00010c2887e0(puVar2,param_2,puVar13,puVar9);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c275a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfedf60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf51e00();
  puVar14 = puVar1;
  func_0x00010bfa3600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfedf60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf51e00();
  puVar19 = puVar9;
  func_0x00010c0fd260(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217940(puVar2,param_2,puVar13,puVar18,puVar19);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  func_0x00010bedd100(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107115440; end: 1071156b3; -[PreviewViewController _updateVenueTopics] */

void FUN_107115440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  uVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2980c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  func_0x00010c2887e0(uVar1,param_2,uVar7,uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfedf60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  uVar8 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfedf60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf51e00();
  uVar13 = uVar3;
  func_0x00010c0fd260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217940(uVar1,param_2,uVar7,uVar12,uVar13);
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
  _objc_release(uVar1);
  func_0x00010bedd100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1071156b4; end: 10711581f; -[PreviewViewController _updatePlaceLoyaltyTag] */

void FUN_1071156b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010c0fd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11ea80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107115820;
    uStack_40 = 0x107115830;
    uStack_38 = 0;
    func_0x00010c0bd380(lVar3);
    if (puStack_58[5] != 0) {
      func_0x00010c0fd660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa940();
      _objc_release(param_1);
    }
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 107115820; end: 107115837;  */

void FUN_107115820(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107115838; end: 107115907;  */

void FUN_107115838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c4dc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0367c0();
  puVar2 = PTR_PTR_1126c0e50;
  _objc_alloc();
  func_0x00010c036540();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107115908; end: 1071159d3; -[PreviewViewController updateSelectedTopics] */

uint FUN_107115908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bee3320();
  uVar1 = param_1;
  func_0x00010bf00c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284240();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c275a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c072060();
  _objc_release(uVar2);
  func_0x00010c217b00(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return (uint)uVar4 ^ 1;
}



/* Entry: 1071159d4; end: 107115b57; -[PreviewViewController _spotlightDescriptionFromCaptionTopics] */

void FUN_1071159d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
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
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf00c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010bfdedc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bfdedc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar1);
          _objc_release(lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar5 = puVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c234200();
  _objc_release(puVar5);
  if ((int)puVar6 == 0) {
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)((long)puVar7 + 0x10))(puVar7,0,0);
    }
  }
  else {
    _objc_initWeak(auStack_178,puVar1);
    func_0x00010bfc43e0(puVar1);
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(puVar7);
    func_0x00010bfbf0e0(uVar11,puVar1);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 107115b58; end: 107115c97; -[PreviewViewController configureSendPreviewModelWithCompletion:] */

void FUN_107115b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c234200();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    func_0x00010bfc43e0(param_2);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010bfbf0e0(param_1,param_2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107115c98; end: 107115fd3;  */

void FUN_107115c98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d4c98;
    _objc_alloc();
    lVar26 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar26;
    func_0x0001070c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x0001070c4628();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x0001070c4820();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x0001070c4670();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x0001070c47fc();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    FUN_1070c2ed4();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x0001070c4700();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x0001070c48f8();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c1308e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039760(puVar2);
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
    _objc_release(lVar3);
    _objc_release(lVar26);
    lVar26 = *(long *)(param_1 + 0x20);
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x10))(lVar26,puVar2,param_2);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107115fd4; end: 10711603b; -[PreviewViewController _prepareEphemeralMediaWithShouldPresentSendToView:preselectedShareDestination:fromCopyLinkButton:] */

/* WARNING: Possible PIC construction at 0x000107115ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107116000) */
/* WARNING: Removing unreachable block (ram,0x00010be7e620) */

void FUN_107115fd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x00010be552c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setWaitingToPresentSendVC__112666b88,0);
  return;
}



/* Entry: 10711603c; end: 107116213; -[PreviewViewController _logLegacySendMessageForSendToView] */

void FUN_10711603c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = 0;
  func_0x000108438538(0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ce9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0001070c53a4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x0001084383f4(lVar5,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar1 = lVar8;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = lVar8;
    func_0x000107e3271c(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(lVar1);
  }
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = lVar4;
    func_0x000107e327a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(lVar1);
  }
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107116214; end: 10711641b; -[PreviewViewController _sendEphemeralMediaWithShouldPresentSendToView:preselectedShareDestination:fromCopyLinkButton:] */

void FUN_107116214(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010be782a0();
  if ((param_3 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c11e820();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c15d920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c15d920(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
    }
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c59b0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendSnapWithoutSendToView_112585ae8);
      return;
    }
    lVar1 = param_1;
    func_0x00010c08f5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128720();
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c59b0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf94c40(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1ba660(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10711641c; end: 107116447;  */

void FUN_10711641c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107116448; end: 1071166c3; -[PreviewViewController _sendSnapWithoutSendToView] */

void FUN_107116448(long param_1)

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
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c294720();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x0001084382cc(lVar3,lVar6,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar10;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bea0400(param_1);
  }
  else {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c244e80(lVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar10);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1071166c4; end: 107116733;  */

void FUN_1071166c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  FUN_107113304(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea0400(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107116734; end: 107116c3b; -[PreviewViewController _sendSnapNoSendToViewWithSnapchatterMap:] */

void FUN_107116734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc200();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = param_3;
  func_0x000108438538(param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  FUN_107113cc4(uVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ce9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x0001070c53a4();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x0001084383f4(lVar5,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c22c040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2757e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      lVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c2757e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar11);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bf00c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(lVar1);
    puVar12 = puVar11;
    func_0x00010bf51e00(puVar11);
    puVar14 = puVar12;
    func_0x0001084389bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  puVar11 = PTR_PTR_1126d4c88;
  lVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfcf340();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  func_0x000108438aec(lVar5,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bea03c0(param_1);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(puVar14);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107116c3c; end: 107116dfb; -[PreviewViewController _sendSnapNoSendToViewWithAddToMyStory:recipientUsernames:recipientUserIds:mischiefs:selectedOurStory:selectedCustomStories:businessIds:] */

void FUN_107116c3c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be3d320(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107116dfc; end: 107116e57;  */

void FUN_107116dfc(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bea03e0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107116e58; end: 1071171ab; -[PreviewViewController _sendSnapNoSendToViewWithAddToMyStoryAfterInterceptorCheck:recipientUsernames:recipientUserIds:mischiefs:selectedOurStory:selectedCustomStories:businessIds:] */

void FUN_107116e58(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  undefined7 uVar22;
  undefined1 auStack_248 [8];
  undefined4 uStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  byte bStack_135;
  undefined1 uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  ulong uVar16;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1cc = param_3;
  uStack_1c0 = param_1;
  lStack_198 = param_4;
  _objc_retain(param_4);
  uStack_1b8 = param_5;
  _objc_retain(param_5);
  uStack_1a0 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_1b0 = param_9;
  _objc_retain(param_9);
  lStack_1c8 = param_8;
  func_0x00010bf529e0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_1a8 = param_7;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_7;
  func_0x00010bf52a60();
  if (lVar10 == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    lVar17 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(param_7);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar14 * 8);
        uVar15 = (uint)uVar16;
        func_0x00010c071ae0();
        if ((uVar16 & 1) == 0) {
          func_0x00010c071ae0();
          uVar12 = (ulong)(uVar15 | (uint)uVar12);
        }
        else {
          uVar13 = 1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      lVar10 = param_7;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  uStack_1d0 = (uint)(param_8 != 0);
  _objc_release(param_7);
  uVar4 = uStack_1c0;
  uVar7 = uStack_1c0;
  func_0x00010bfa3600(uStack_1c0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e100();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  lVar10 = lStack_1c8;
  func_0x00010c287700(uVar4);
  lVar14 = lStack_198;
  uVar11 = uStack_1a0;
  lVar17 = lStack_1a8;
  uVar1 = uStack_1b0;
  uVar7 = uStack_1b8;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1071171ac;
  puStack_178 = &UNK_11098f188;
  uStack_138 = (undefined1)uStack_1cc;
  lStack_170 = lStack_198;
  uStack_168 = uStack_1a0;
  uStack_160 = uStack_1b0;
  uStack_158 = uVar4;
  lStack_150 = lStack_1a8;
  lStack_148 = lVar10;
  uStack_140 = uStack_1b8;
  uStack_137 = (undefined1)uStack_1d0;
  uStack_136 = (undefined1)uVar13;
  bStack_135 = (byte)uVar12 & 1;
  uStack_134 = uStack_138;
  _objc_retain(uStack_1b8);
  _objc_retain(lVar10);
  _objc_retain(lVar17);
  _objc_retain(uVar1);
  _objc_retain(uVar11);
  _objc_retain(lVar14);
  ppuVar2 = &puStack_190;
  _objc_retainBlock();
  func_0x00010be2f120(uVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_140);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(lStack_170);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(lVar17);
  _objc_release(uVar1);
  _objc_release(uVar11);
  lVar3 = lVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_230 = uVar7;
  uStack_228 = uVar1;
  lStack_220 = lVar17;
  lStack_218 = lVar10;
  uStack_210 = uVar11;
  uStack_208 = uVar4;
  lStack_1f8 = lVar14;
  pcStack_1d8 = FUN_1071171ac;
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  uVar7 = *(undefined8 *)(lVar3 + 0x38);
  ppuStack_200 = ppuVar2;
  uStack_1f0 = uVar13;
  uStack_1e8 = uVar12;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010bf46560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  FUN_10710d254(uVar4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b5cc0;
  _objc_alloc();
  func_0x00010bf529e0();
  func_0x00010c037e40();
  puVar6 = PTR_PTR_1126cbed8;
  func_0x00010c111ca0(PTR_PTR_1126cbed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b69a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6980(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba320(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9aa0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae820(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010bf46560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa1c0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(lVar3 + 0x38);
  uVar13 = uVar7;
  func_0x00010c15e020(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f040(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar13);
  if (*(char *)(lVar3 + 0x59) == '\x01') {
    func_0x00010beda520(*(undefined8 *)(lVar3 + 0x38));
  }
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000108605534(*(undefined8 *)(lVar3 + 0x28));
  func_0x00010c2b68e0(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(lVar3 + 0x58) & 1) == 0) && (*(long *)(lVar3 + 0x40) == 0)) {
    lVar10 = *(long *)(lVar3 + 0x48);
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      func_0x00010bf529e0(*(undefined8 *)(lVar3 + 0x30));
    }
  }
  func_0x00010c2b92a0(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105440(puVar5);
  func_0x00010c2bcf60(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105460(puVar5);
  func_0x00010c2bd0a0(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b638(puVar5);
  func_0x00010c2bd080(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b6bc(puVar5);
  func_0x00010c2bd040(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar9);
  if (((*(byte *)(lVar3 + 0x58) & 1) == 0) && (*(long *)(lVar3 + 0x40) == 0)) {
    lVar10 = *(long *)(lVar3 + 0x48);
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      lVar10 = *(long *)(lVar3 + 0x30);
      func_0x00010bf529e0();
      if (lVar10 == 0) goto LAB_10711781c;
    }
  }
  uVar13 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c111180(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26c80();
  _objc_release(uVar13);
LAB_10711781c:
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    uVar11 = *(undefined8 *)(lVar3 + 0x38);
    func_0x00010c13b540(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c28a5e0(uVar1);
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar11);
  }
  uVar13 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c111180(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(lVar3 + 0x30));
  func_0x00010c22e160(uVar13);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c111180(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d4c58;
  _objc_alloc(PTR_PTR_1126d4c58);
  func_0x00010bff5dc0();
  func_0x00010bf11c40(uVar13);
  _objc_release(puVar8);
  _objc_release(uVar13);
  _objc_initWeak(auStack_238,*(undefined8 *)(lVar3 + 0x38));
  uVar13 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c2431e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_248,auStack_238);
  uVar21 = *(undefined4 *)(lVar3 + 0x59);
  bVar18 = (byte)((uint)uVar21 >> 8);
  uVar19 = (undefined1)((uint)uVar21 >> 0x10);
  uVar20 = (undefined1)((uint)uVar21 >> 0x18);
  uVar22 = CONCAT16(uVar20,(uint6)CONCAT14(uVar19,(uint)bVar18 << 0x10));
  uVar7 = NEON_rev32(CONCAT17(uVar20,CONCAT16(uVar20,CONCAT15(uVar19,(int5)CONCAT34((int3)((uint7)
                                                  uVar22 >> 0x20),
                                                  CONCAT13(bVar18,(int3)CONCAT52((int5)((uint7)
                                                  uVar22 >> 0x10),
                                                  CONCAT11((char)uVar21,(char)uVar21))))))),2);
  uVar7 = NEON_ext(uVar7,uVar7,6,1);
  uStack_240 = CONCAT13((char)((ulong)uVar7 >> 0x30),
                        CONCAT12((char)((ulong)uVar7 >> 0x20),
                                 CONCAT11((char)((ulong)uVar7 >> 0x10),(char)uVar7)));
  uVar9 = *(undefined8 *)(lVar3 + 0x30);
  _objc_retain(uVar9);
  _objc_retain(puVar5);
  func_0x00010bfc4b40(uVar13);
  _objc_release(uVar13);
  uVar7 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c15df80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc20();
  _objc_release(uVar13);
  _objc_release(uVar7);
  uVar11 = *(undefined8 *)(lVar3 + 0x38);
  func_0x00010c13b540(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77600();
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_238);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1071171ac; end: 107117b37;  */

void FUN_1071171ac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined7 uVar15;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf46560(uVar9);
  _objc_retainAutoreleasedReturnValue();
  FUN_10710d254(uVar1,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126b5cc0;
  _objc_alloc();
  func_0x00010bf529e0();
  func_0x00010c037e40();
  puVar3 = PTR_PTR_1126cbed8;
  func_0x00010c111ca0(PTR_PTR_1126cbed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b69a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6980(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba320(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9aa0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae820(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf46560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa1c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = uVar4;
  func_0x00010c15e020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f040(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar9);
  if (*(char *)(param_1 + 0x59) == '\x01') {
    func_0x00010beda520(*(undefined8 *)(param_1 + 0x38));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x000108605534(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c2b68e0(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    lVar8 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    }
  }
  func_0x00010c2b92a0(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105440(puVar2);
  func_0x00010c2bcf60(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105460(puVar2);
  func_0x00010c2bd0a0(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b638(puVar2);
  func_0x00010c2bd080(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b6bc(puVar2);
  func_0x00010c2bd040(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    lVar8 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
      if (lVar8 == 0) goto LAB_10711781c;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c111180(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26c80();
  _objc_release(uVar9);
LAB_10711781c:
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c13b540(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c28a5e0(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar10);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c111180(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c22e160(uVar9);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c111180(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d4c58;
  _objc_alloc(PTR_PTR_1126d4c58);
  func_0x00010bff5dc0();
  func_0x00010bf11c40(uVar9);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x38));
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2431e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uVar14 = *(undefined4 *)(param_1 + 0x59);
  bVar11 = (byte)((uint)uVar14 >> 8);
  uVar12 = (undefined1)((uint)uVar14 >> 0x10);
  uVar13 = (undefined1)((uint)uVar14 >> 0x18);
  uVar15 = CONCAT16(uVar13,(uint6)CONCAT14(uVar12,(uint)bVar11 << 0x10));
  uVar4 = NEON_rev32(CONCAT17(uVar13,CONCAT16(uVar13,CONCAT15(uVar12,(int5)CONCAT34((int3)((uint7)
                                                  uVar15 >> 0x20),
                                                  CONCAT13(bVar11,(int3)CONCAT52((int5)((uint7)
                                                  uVar15 >> 0x10),
                                                  CONCAT11((char)uVar14,(char)uVar14))))))),2);
  uVar4 = NEON_ext(uVar4,uVar4,6,1);
  uStack_70 = CONCAT13((char)((ulong)uVar4 >> 0x30),
                       CONCAT12((char)((ulong)uVar4 >> 0x20),
                                CONCAT11((char)((ulong)uVar4 >> 0x10),(char)uVar4)));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  _objc_retain(puVar2);
  func_0x00010bfc4b40(uVar9);
  _objc_release(uVar9);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15df80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc20();
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b540(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77600();
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107117b38; end: 107117c4f;  */

void FUN_107117b38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15df80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010846b638();
  func_0x00010846b6bc();
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010c0a5140(lVar3);
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107117c50; end: 107117e0b; -[PreviewViewController _sendEphemeralMediaList:snapSenderDataModel:mischiefs:showSendToLoadingOverlay:] */

void FUN_107117c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010beb9a40(param_1,param_2,param_6);
  lVar1 = param_1;
  func_0x00010bf52f80(param_1);
  func_0x00010c184760(param_1,param_2,lVar1 + 4);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2431e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c15e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c090020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfdc300();
  func_0x00010c15bc20(lVar1,param_2,lVar2,param_4,lVar5,param_1,param_5,1,(char)lVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107117e0c; end: 107117fab; -[PreviewViewController _updateLastPostMetadataWithCustomStories:] */

void FUN_107117e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11098f1d8);
  uVar2 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,9,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f4015a5;
  _dispatch_queue_create(&UNK_10f4015a5,uVar2);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf62520(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107117fac; end: 107117fb3;  */

void FUN_107117fac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 107117fb4; end: 10711809b;  */

void FUN_107117fb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf00d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287580(lVar4);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


