/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10713aea0; end: 10713aecb; -[PreviewViewController _sendButtonTapped] */

void FUN_10713aea0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be552a0(param_1,param_2,4,1);
                    /* WARNING: Could not recover jumptable at 0x00010be9faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendPressed_112585860);
  return;
}



/* Entry: 10713aecc; end: 10713af9b; -[PreviewViewController _saveButtonTapped] */

void FUN_10713aecc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d080();
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be552a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be99830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__savePressed_112583fa8);
  return;
}



/* Entry: 10713af9c; end: 10713b223; -[PreviewViewController _sendPressed] */

void FUN_10713af9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf952a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be53ea0(param_1,param_2,9);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10713b224;
    puStack_50 = &UNK_11098e348;
    ppuVar5 = &puStack_68;
    uStack_48 = param_1;
    _objc_retainBlock(ppuVar5);
    func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,ppuVar5);
    _objc_release(ppuVar5);
  }
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ce0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad880();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126d4d58;
  func_0x00010bf54200(PTR_PTR_1126d4d58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ad80(param_1,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010bea02c0(param_1);
  return;
}



/* Entry: 10713b224; end: 10713b233;  */

void FUN_10713b224(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,
             *(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10713b234; end: 10713b2ef; -[PreviewViewController _sendSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713b234(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_112764408) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112764408) = 1;
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf37ea0(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10713b2f0; end: 10713b57b;  */

void FUN_10713b2f0(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  
  if (((param_3 & 1) != 0) || (param_2 == 0)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c07e680();
      if ((int)lVar2 == 0) {
        func_0x00010c15da40(lVar1);
      }
      else {
        lVar2 = lVar1;
        func_0x00010c13b540(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x0001070c4790();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c240000();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_58,param_1 + 0x20);
        func_0x00010c24f100(lVar1);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_destroyWeak(auStack_58);
      }
      lVar2 = lVar1;
      func_0x00010c13b540(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x0001070c57dc();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf61e80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27c2c0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c286260(lVar1);
      lVar2 = lVar1;
      func_0x00010c13b540(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x0001070c45bc();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfc12c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6860();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c13b420(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfae100();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3340();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10713b57c; end: 10713b5bb;  */

void FUN_10713b57c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c15da40(param_1,param_2,1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10713b5bc; end: 10713b60b; -[PreviewViewController _sharePressed] */

void FUN_10713b5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10713b60c;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x00010bdde260(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10713b60c; end: 10713b61b;  */

void FUN_10713b60c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec18b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__startSharePressedFlow_11258dfd0);
    return;
  }
  return;
}



/* Entry: 10713b61c; end: 10713b647; -[PreviewViewController _shareButtonTapped] */

void FUN_10713b61c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be552a0(param_1,param_2,2,1);
                    /* WARNING: Could not recover jumptable at 0x00010beb1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sharePressed_11258a110);
  return;
}



/* Entry: 10713b648; end: 10713b8c3; -[PreviewViewController _checkShareActionGuardsWithCompletion:] */

void FUN_10713b648(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10713b8c4;
    puStack_110 = &UNK_11098e2d8;
    _objc_retain(puVar1);
    lVar2 = param_1;
    puStack_108 = puVar1;
    func_0x000100504554(param_1,&puStack_128);
    lVar3 = lVar2;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    puStack_150 = puVar6;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_10713ba20;
    puStack_138 = &UNK_110842508;
    _objc_retain(param_3);
    ppuVar4 = &puStack_150;
    lStack_130 = param_3;
    _objc_retainBlock();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lVar2 = lVar3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar11 = *plStack_180;
      do {
        lVar9 = 0;
        ppuVar10 = ppuVar4;
        do {
          if (*plStack_180 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(undefined8 *)(lStack_188 + lVar9 * 8);
          puStack_1c8 = puVar6;
          uStack_1c0 = 0xc2000000;
          uStack_1b8 = 0x10713ba2c;
          puStack_1b0 = &UNK_1108cbf30;
          _objc_retain(param_3);
          ppuVar4 = &puStack_1c8;
          uStack_1a8 = uVar7;
          lStack_1a0 = param_3;
          ppuStack_198 = ppuVar10;
          _objc_retainBlock();
          _objc_release(ppuStack_198);
          _objc_release(lStack_1a0);
          lVar9 = lVar9 + 1;
          ppuVar10 = ppuVar4;
        } while (lVar5 != lVar9);
        lVar5 = lVar2;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar2);
    param_2 = 1;
    (*(code *)ppuVar4[2])(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(lStack_130);
    _objc_release(lVar3);
    _objc_release(puStack_108);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar8 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_shareActionGuard_112668400);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_2;
    func_0x00010c22a760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar8 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c113c80(uVar8);
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 10713b8c4; end: 10713ba1f;  */

void FUN_10713b8c4(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_shareActionGuard_112668400);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c22a760();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c113c80(uVar2);
      func_0x00010c0df840(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10713ba20; end: 10713ba4f;  */

void FUN_10713ba20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010713ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10713ba50; end: 10713bcb7; -[PreviewViewController _startSharePressedFlow] */

void FUN_10713ba50(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf926c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar5 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10713bcb8;
    puStack_60 = &UNK_11098e348;
    ppuVar6 = &puStack_78;
    uStack_58 = param_1;
    _objc_retainBlock(ppuVar6);
    func_0x00010be462e0(param_1);
    _objc_release(ppuVar6);
  }
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010bfdb9c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c27ed00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_10713bd38;
      puStack_c0 = &UNK_110848ba8;
      uStack_b8 = uVar5;
      uStack_b0 = param_1;
      uStack_a8 = uVar2;
      func_0x000100162d98("APPSTORE",&puStack_d8);
      uVar3 = param_1;
    }
    else {
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf9d440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22ad40();
      uVar2 = param_1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else {
    func_0x00010bfc43e0();
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10713bcc8;
    puStack_88 = &UNK_11098e378;
    uStack_80 = param_1;
    func_0x00010bfbf0e0(param_1);
  }
  return;
}



/* Entry: 10713bcb8; end: 10713bcc7;  */

void FUN_10713bcb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,
             *(undefined8 *)(param_1 + 0x20),3);
  return;
}



/* Entry: 10713bcc8; end: 10713bd37;  */

void FUN_10713bcc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c13b420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22b380();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10713bd38; end: 10713bec3;  */

void FUN_10713bd38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000107172e24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000107172df4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000107172e0c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  func_0x00010c1a6b60(*(undefined8 *)(puVar2 + 0x20));
  uVar7 = *(undefined8 *)(puVar2 + 0x28);
  func_0x00010bf9d440(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10713bec4; end: 10713bf17;  */

void FUN_10713bec4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  func_0x00010c1a6b60(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10713bf18; end: 10713bf67; -[PreviewViewController pvc_mediaAreaInsets] */

/* WARNING: Possible PIC construction at 0x00010713bf40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010713bf44) */
/* WARNING: Removing unreachable block (ram,0x00010c149020) */

void FUN_10713bf18(void)

{
  func_0x00010c072be0();
                    /* WARNING: Could not recover jumptable at 0x00010c11cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIViewController_1126af898,PTR_s_pvc_mediaAreaInsets_112624cd0);
  return;
}



/* Entry: 10713bf68; end: 10713bfa7; -[PreviewViewController _safeAreaInsets] */

void FUN_10713bf68(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  if (((ulong)puVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c148fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9e78,PTR_s_safeAreaInsets_11262fe10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c14d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_sc_safeAreaInsets_112631098);
  return;
}



/* Entry: 10713bfa8; end: 10713c02f; -[PreviewViewController _mediaAreaInsetsMatchingCapture:] */

undefined8 FUN_10713bfa8(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c292ac0();
  puVar3 = PTR_PTR_1126b9aa0;
  func_0x00010c08ebc0();
  iVar1 = (int)puVar3;
  if (lVar2 == 1) {
    iVar1 = 1;
  }
  if (iVar1 == 0) {
    param_1 = 0;
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10713c030; end: 10713c093; -[PreviewViewController _mediaAreaFrameInBounds:] */

double FUN_10713c030(double param_1,undefined8 param_2)

{
  func_0x00010c11cac0();
  func_0x00010be5e420(param_2);
  return param_1 + 0.0;
}



/* Entry: 10713c094; end: 10713c247; -[PreviewViewController _mediaBoxFrameInMediaAreaFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10713c094(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  dVar6 = param_3;
  dVar4 = param_4;
  func_0x00010bf4af80(*(undefined8 *)(param_5 + _DAT_1127644f0));
  lVar1 = param_5;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292ac0();
  func_0x00010c0c4080(*(undefined8 *)(param_5 + _DAT_1127644ac));
  dVar5 = 0.0;
  if (dVar6 != 0.0) {
    if (dVar4 == 0.0) {
      dVar5 = INFINITY;
    }
    else {
      dVar5 = dVar6 / dVar4;
    }
  }
  if ((0x7fffffffffffffff < (ulong)dVar3 || 0x3fe < (long)ABS(dVar3) + 0xfff0000000000000U >> 0x35)
      && 0xffffffffffffe < (long)dVar3 - 1U || lVar2 != 1) {
    dVar3 = dVar5;
  }
  dVar6 = param_1;
  if (-1 < (long)dVar3 && (long)ABS(dVar3) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
      (long)dVar3 - 1U < 0xfffffffffffff) {
    dVar4 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    if (dVar6 / dVar3 <= dVar4) {
      dVar4 = dVar6 / dVar3;
    }
    dVar6 = param_1;
    _CGRectGetMidX(param_1,param_2,param_3,param_4);
    dVar6 = dVar6 + dVar3 * dVar4 * -0.5;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
  }
  _objc_release(lVar1);
  return dVar6;
}



/* Entry: 10713c248; end: 10713c41f; -[PreviewViewController _getVenueId] */

void FUN_10713c248(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c297c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15a420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (lVar2 == 0) {
    lVar6 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c298020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar4 == 0) {
      lVar6 = param_1;
      func_0x00010c2683a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        lVar6 = 0;
        goto LAB_10713c3f4;
      }
      func_0x00010c2683a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c298020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c297b40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
  else {
    lVar6 = lVar2;
    func_0x00010c0fd0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10713c3f4:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10713c420; end: 10713c46f; -[PreviewViewController placeTagsTracker] */

void FUN_10713c420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c275a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10713c470; end: 10713c4b3; -[PreviewViewController taggedPlace] */

void FUN_10713c470(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0fd660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2683a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10713c4b4; end: 10713c5d7; -[PreviewViewController _setPreviewLoggingPropertiesIfNecessary:] */

void FUN_10713c4b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c111700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1f00(param_3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c110580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e19e0(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10713c5d8; end: 10713c7bf; -[PreviewViewController videoProviderWithHandlerBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713c5d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar4 = (long)_DAT_1127644ac;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c25e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = *(long *)(param_1 + lVar4);
    if (lVar1 == 0) {
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        _objc_initWeak(auStack_38,param_1);
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c123d20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_40,auStack_38);
        lVar1 = param_3;
        _objc_retain(param_3);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar3);
        _objc_release(lVar1);
        _objc_release(uVar3);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
        goto LAB_10713c6cc;
      }
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c29ae80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6880(param_1);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c29ae80(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c25e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6880(param_1);
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c25e340(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
    _objc_release(uVar3);
  }
LAB_10713c6cc:
  _objc_release(param_3);
  return;
}



/* Entry: 10713c7c0; end: 10713c9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713c7c0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010c10a100(lVar1);
      func_0x00010bf72ce0(lVar1);
    }
    else {
      func_0x00010c283880(lVar1);
      lVar9 = (long)_DAT_1127644ac;
      lVar2 = *(long *)(lVar1 + lVar9);
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar3 = PTR_PTR_1126ce8a8;
        _objc_alloc(PTR_PTR_1126ce8a8);
        lVar2 = lVar1;
        func_0x00010c13b540(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x0001070c5260();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bef1320();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bef1320();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d720(puVar3);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        func_0x00010c221d20(*(undefined8 *)(lVar1 + lVar9));
        lVar2 = lVar1;
        func_0x00010c13b540(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x0001070c4790();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf6d9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a020();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(puVar3);
      }
      uVar8 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010c29ae80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6880(lVar1);
      _objc_release(uVar8);
      lVar2 = *(long *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010c29ae80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
      _objc_release(uVar8);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10713c9d8; end: 10713cbff; -[PreviewViewController multiSnapStateHandler] */

void FUN_10713c9d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      lVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c06ba20();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        unaff_x22 = 0;
        goto LAB_10713cbe0;
      }
LAB_10713cb84:
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10713cba4;
    }
    if (lVar2 != 1) goto LAB_10713cbe0;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar2;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 2) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fa80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf16ce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar3;
    func_0x00010c0d2420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    if (lVar2 == 3) goto LAB_10713cb84;
    if (lVar2 != 4) goto LAB_10713cbe0;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
LAB_10713cba4:
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar2;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
LAB_10713cbe0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10713cc00; end: 10713cc0f; -[PreviewViewController previewThumbnailsController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713cc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c111f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764538),PTR_s_previewThumbnailsController_1126221f0);
  return;
}



/* Entry: 10713cc10; end: 10713d0db; -[PreviewViewController _spotlightPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713cc10(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar9 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c078260();
  lVar7 = param_1;
  if (iVar1 == 0) {
LAB_10713ccf4:
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010c242400();
    if (lVar2 == 8) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
      func_0x00010c23a220();
      if (iVar1 != 0) {
        lVar2 = param_1;
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f440();
        func_0x00010c200020(*(undefined8 *)(param_1 + lVar9));
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        uVar3 = *(ulong *)(param_1 + lVar9);
        func_0x00010c22e0c0();
        if ((uVar3 & 1) == 0) {
          func_0x00010c1b05c0(*(undefined8 *)(param_1 + lVar9));
        }
        else {
          lVar2 = param_1;
          func_0x00010c13b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f440();
          func_0x00010c1b05c0(*(undefined8 *)(param_1 + lVar9));
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar2);
        }
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar7;
        func_0x0001070c491c();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c27d8a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d61a0();
        goto LAB_10713cf04;
      }
    }
    iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
    func_0x00010c07e920();
    if (iVar1 == 0) goto LAB_10713cf28;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
    func_0x00010c23a220();
    if (iVar1 == 0) goto LAB_10713cf28;
    lVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001070c5794();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e0a0();
    func_0x00010c200020(*(undefined8 *)(param_1 + lVar9));
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x0001070c491c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c27d8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d61e0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
    func_0x00010c23a220();
    if (iVar1 == 0) goto LAB_10713ccf4;
    lVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    func_0x00010c200020(*(undefined8 *)(param_1 + lVar9));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d61c0();
  }
LAB_10713cf04:
  func_0x00010c1cb6a0(*(undefined8 *)(param_1 + lVar9));
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar7);
LAB_10713cf28:
  lVar7 = param_1;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    lVar7 = param_1;
    func_0x00010bdd6860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064a40();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar9);
    lVar9 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010c15dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1093a0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(lVar7);
  }
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be1c300(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_50;
  _objc_copyWeak(puVar8,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10713d0dc; end: 10713d31b;  */

void FUN_10713d0dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_10713d2ec;
  lVar1 = param_2;
  func_0x00010bf529e0();
  if ((param_3 != 0) || (lVar1 == 0)) {
    func_0x00010be0cce0(param_1);
    goto LAB_10713d2ec;
  }
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bfd89e0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar3 == 0) {
    lVar4 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_10713d25c;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c23f6e0();
    _objc_retainAutoreleasedReturnValue();
LAB_10713d25c:
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(lVar4);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(lVar4);
LAB_10713d2ec:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10713d31c; end: 10713d32b;  */

void FUN_10713d31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeCreatePostScopeWithPrevie_112560cd8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10713d32c; end: 10713d357; -[PreviewViewController _spotlightButtonTapped] */

void FUN_10713d32c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be552a0(param_1,param_2,6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bebef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__spotlightPressed_11258d580);
  return;
}



/* Entry: 10713d358; end: 10713d49b; -[PreviewViewController _generateThumbnailsForCurrentPreview] */

void FUN_10713d358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d4d60;
  _objc_opt_new(PTR_PTR_1126d4d60);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10713d49c;
  puStack_60 = &UNK_1108b9668;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c29bba0(uVar2,param_2,puVar3,&puStack_78);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10713d49c; end: 10713d5d3;  */

/* WARNING: Possible PIC construction at 0x00010713d564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010713d568) */
/* WARNING: Removing unreachable block (ram,0x00010713d55c) */

void FUN_10713d49c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_3);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  func_0x00010bf0b300(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169b80();
  puVar3 = puVar2;
  func_0x00010bf51e60(puVar2);
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _CGImageRelease(puVar3);
  _objc_release(0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10713d5d4; end: 10713d72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713d5d4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b27a8;
  ppuVar10 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bfe9800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010b971468();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075080();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c5018;
    _objc_alloc();
    func_0x00010c23d0a0(param_4);
    func_0x00010c23d0a0(param_4);
    _objc_release(param_4);
    func_0x00010bff4300(param_1,param_2);
    param_6 = 1;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release();
    param_3 = puVar3;
    param_5 = (undefined1 *)ppuVar10;
    unaff_d8 = param_1;
    unaff_d9 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uStack_c0 = unaff_d9;
    uStack_b8 = unaff_d8;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_initWeak(auStack_d0,param_3);
    puVar2 = PTR_PTR_1126b5bb8;
    _objc_alloc();
    _objc_copyWeak(auStack_d8,auStack_d0);
    func_0x00010c038ee0(0x3feccccccccccccd);
    uVar4 = *(undefined8 *)(param_3 + _DAT_11276453c);
    *(undefined **)(param_3 + _DAT_11276453c) = puVar2;
    _objc_release(uVar4);
    puVar2 = param_3;
    func_0x00010bdf1b60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x0001070c5794();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf91ce0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar13);
    lVar12 = (long)_DAT_1127644ac;
    iVar1 = (int)*(undefined8 *)(param_3 + lVar12);
    func_0x00010c23a220();
    if (iVar1 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar3 = param_3;
      func_0x00010bfa3600(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c0fbb40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    puVar5 = PTR_PTR_1126c5020;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_3 + lVar12);
    func_0x00010bf311e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a5c0();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c5028;
    _objc_alloc();
    func_0x00010c037de0();
    uVar4 = *(undefined8 *)(param_3 + lVar12);
    func_0x00010bf311e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206f80(puVar6);
    _objc_release(uVar4);
    puVar3 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b2470;
    _objc_retain(puVar9);
    func_0x00010c2adce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c5030;
    _objc_alloc(PTR_PTR_1126c5030);
    func_0x00010c22e0c0();
    func_0x00010c002640(puVar7);
    lVar11 = (long)_DAT_11276449c;
    lVar12 = *(long *)(param_3 + lVar11);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_3 + lVar11));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_3 + lVar11));
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10713d730; end: 10713dbb7; -[PreviewViewController _exposeCreatePostScopeWithPreviewAssets:fromViewController:snapCaptureLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713d730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126b5bb8;
  _objc_alloc();
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c038ee0(0x3feccccccccccccd);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276453c);
  *(undefined **)(param_1 + _DAT_11276453c) = puVar2;
  _objc_release(uVar9);
  lVar3 = param_1;
  func_0x00010bdf1b60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x0001070c5794();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91ce0();
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c23a220();
  if (iVar1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar10 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    func_0x00010c0fbb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
  }
  puVar6 = PTR_PTR_1126c5020;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf311e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5c0();
  _objc_release(uVar9);
  puVar7 = PTR_PTR_1126c5028;
  _objc_alloc();
  func_0x00010c037de0();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf311e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar7);
  _objc_release(uVar9);
  lVar11 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126b2470;
  _objc_retain(lVar5);
  func_0x00010c2adce0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c5030;
  _objc_alloc(PTR_PTR_1126c5030);
  func_0x00010c22e0c0();
  func_0x00010c002640(puVar8);
  lVar10 = (long)_DAT_11276449c;
  lVar11 = *(long *)(param_1 + lVar10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10713dbb8; end: 10713dbe3;  */

void FUN_10713dbb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be028c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10713dbe4; end: 10713dbf7;  */

void FUN_10713dbe4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010713dbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10713dbf8; end: 10713df8b; -[PreviewViewController _createPostConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713dbf8(undefined **param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  
  ppuVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x0001070c5650();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  lVar13 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)((long)param_1 + lVar13);
  func_0x00010c23a220();
  if (iVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c5050;
    _objc_opt_new();
    ppuVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c075080();
    func_0x00010c1b1b80(puVar12,param_2,ppuVar3);
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf0f7a0();
    func_0x00010c16c080(puVar12,param_2,ppuVar3);
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010c2992a0(param_1);
    func_0x00010c16bc20(puVar12,param_2,ppuVar2);
    ppuVar2 = param_1;
    func_0x00010bfd9540(param_1);
    func_0x00010c1b2b00(puVar12,param_2,ppuVar2);
    func_0x00010c1d6860(puVar12,param_2,ppuVar6);
    ppuVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c15a720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if (ppuVar5 != (undefined **)0x0) {
      puVar7 = PTR_PTR_1126c5058;
      func_0x00010c0d2fe0(PTR_PTR_1126c5058,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9e80(puVar12,param_2,puVar7);
      _objc_release(puVar7);
    }
    _objc_release(ppuVar5);
  }
  if (*(char *)((long)param_1 + (long)_DAT_112764540) == '\x01') {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (*(undefined ***)((long)param_1 + (long)_DAT_112764544) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)((long)param_1 + (long)_DAT_112764544);
    }
    _objc_retain(ppuVar2);
  }
  else {
    ppuVar3 = param_1;
    func_0x00010bebecc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x000108f487f0();
      ppuVar2 = ppuVar3;
      if ((int)ppuVar9 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      _objc_retain(ppuVar2);
      _objc_release(ppuVar8);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
    }
    _objc_release(ppuVar3);
  }
  puVar10 = PTR_PTR_1126c5048;
  _objc_alloc(PTR_PTR_1126c5048);
  ppuVar3 = param_1;
  func_0x00010bebc180();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = *(undefined8 *)((long)param_1 + lVar13);
  func_0x00010c22e0c0(uVar11);
  func_0x00010c0df6e0(puVar7,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0705c0();
  func_0x00010c00ba40(puVar10,param_2,ppuVar2,PTR____NSArray0__struct_11034ab48,0,0,
                      PTR____kCFBooleanTrue_11034ab68,1,1);
  _objc_release(puVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar12);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10713df8c; end: 10713e167; -[PreviewViewController _signedInUserMemberRoleProfile] */

void FUN_10713df8c(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c5088;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5650();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x0001070c5650();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c239b40();
  func_0x00010c00d580(puVar1,param_2,uVar6,uVar11,1,0,uVar15,1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10713e168; end: 10713e487; -[PreviewViewController _storyPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713e168(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x00010be53ea0(param_1,param_2,0x13);
  lVar9 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf926c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  if ((int)lVar3 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10713e488;
    puStack_60 = &UNK_11098e348;
    ppuVar4 = &puStack_78;
    lStack_58 = param_1;
    _objc_retainBlock(ppuVar4);
    func_0x00010be462e0(param_1,param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,ppuVar4);
    _objc_release(ppuVar4);
  }
  lVar9 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 1;
  func_0x00010c2ae820();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b58a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad880();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127644ac;
  uVar6 = *(ulong *)(param_1 + lVar9);
  func_0x00010c073e40();
  if ((uVar6 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c07bf40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c07e920(uVar7);
  func_0x00010be79160(param_1,param_2,0,uVar7,lVar8);
  return;
}



/* Entry: 10713e488; end: 10713e497;  */

void FUN_10713e488(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c240770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_snapEditor_willInitiateExportWit_11266dc00,
             *(undefined8 *)(param_1 + 0x20),2);
  return;
}



/* Entry: 10713e498; end: 10713e4c3; -[PreviewViewController _storyButtonTapped] */

void FUN_10713e498(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be552a0(param_1,param_2,3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bec4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storyPressed_11258ecd0);
  return;
}



/* Entry: 10713e4c4; end: 10713e5ab; -[PreviewViewController _storyButtonLongPressed:] */

void FUN_10713e4c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c259260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((lVar2 == param_3) && (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    puVar3 = PTR_PTR_1126d4c60;
    func_0x00010c11e820(PTR_PTR_1126d4c60);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10713e5ac;
    puStack_40 = &UNK_110841f20;
    lStack_38 = param_1;
    func_0x00010bf38560(param_1,param_2,puVar3,&puStack_58);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10713e5ac; end: 10713e5bb;  */

void FUN_10713e5ac(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__startStoryButtonLongPressedFlow_11258e028);
    return;
  }
  return;
}



/* Entry: 10713e5bc; end: 10713e777; -[PreviewViewController _startStoryButtonLongPressedFlow] */

void FUN_10713e5bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x00010be552a0(param_1,param_2,3,2);
  func_0x00010be53ea0(param_1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b58a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar6);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be79170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__prepareSendToStoryWithLongPress_11257bdf8,1,0,0);
  return;
}



/* Entry: 10713e778; end: 10713ef83; -[PreviewViewController _prepareSendToStoryWithLongPressed:fromMemories:fromSnapRecovery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10713e778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
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
  undefined1 *puVar17;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 auStack_90 [16];
  
  if (*(long *)(param_5 + (long)_DAT_112764548) != 0) {
    uVar1 = param_5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c2588a0();
    _objc_release(uVar16);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_5;
      func_0x00010bfa3600(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c273f60();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f9e0();
      _objc_release(uVar16);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x0001084236ec();
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_5;
    func_0x00010c15bd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_5;
    func_0x00010c159a00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2992a0(param_5);
    func_0x00010bfd4160(param_5);
    func_0x00010c115400(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c289aa0(param_5);
    func_0x00010c28a0e0(param_5);
    uVar1 = param_5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3400;
    uVar3 = param_5;
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfede40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c15e020(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf98360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb9e0(param_5);
    func_0x00010bfd9540(param_5);
    func_0x00010bf789e0(param_1,param_2,param_3,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  if ((param_7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddd810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s__checkForConfidentialFeatureWith_112554fa0,0,0,0,0,param_8,param_9);
    return;
  }
  uVar1 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfdc480();
  uVar2 = param_5;
  func_0x00010beb3120();
  uVar16 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2588a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  uVar16 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c13b540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c13b540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x000107fc32cc(uVar8,uVar11,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_initWeak(auStack_90,param_5);
  if (((param_8 & 1) == 0) && ((int)uVar7 != 0)) {
    uVar16 = *(ulong *)(param_5 + (long)_DAT_1127644ac);
    func_0x00010bfdb1e0();
    if ((uVar16 & 1) == 0) {
      uVar1 = param_5;
      func_0x00010c13b540(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar1;
      func_0x0001070c5a40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar16;
      func_0x00010c0d4b00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x0001070c5da0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c11a940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b540(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x0001070c5cc8();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf62060();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_10713ef84;
      puStack_a8 = &UNK_11098fe28;
      puVar17 = auStack_a0;
      _objc_copyWeak(puVar17,auStack_90);
      uStack_98 = (char)param_8;
      uStack_97 = (char)param_9;
      func_0x000108ede32c(uVar5,uVar7,uVar9,uVar10,&puStack_c0);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(param_5);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      goto LAB_10713ef04;
    }
  }
  func_0x00010c13b540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_5;
  func_0x0001070c5a40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10713f074;
  puStack_d8 = &UNK_1109442f8;
  puVar17 = auStack_d0;
  _objc_copyWeak(puVar17,auStack_90);
  uStack_c8 = (char)param_8;
  uStack_c7 = (char)param_9;
  func_0x000107fc31bc(uVar1 & 0xffffffff,uVar15 & 0xffffffff,uVar2 & 0xffffffff,uVar7 & 0xffffffff,
                      uVar5,&puStack_f0);
  uVar1 = param_5;
LAB_10713ef04:
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar1);
  _objc_destroyWeak(puVar17);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar3);
  return;
}



/* Entry: 10713ef84; end: 10713f02b;  */

void FUN_10713ef84(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined2 uStack_45;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10713f02c;
  puStack_58 = &UNK_110912568;
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  uStack_45 = *(undefined2 *)(param_1 + 0x28);
  uStack_48 = param_2;
  uStack_47 = param_3;
  uStack_46 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 10713f02c; end: 10713f073;  */

void FUN_10713f02c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10713f074; end: 10713f103;  */

void FUN_10713f074(long param_1,undefined1 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined2 uStack_37;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10713f104;
  puStack_48 = &UNK_1108afc88;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_37 = *(undefined2 *)(param_1 + 0x28);
  uStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10713f104; end: 10713f14b;  */

void FUN_10713f104(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10713f14c; end: 10713f1b3; -[PreviewViewController _checkForConfidentialFeatureWithTryDirectlyPostToMyStory:recentlyPostedMyStory:recentlyPostedPublicStory:recentlyPostedCustomStory:fromMemories:fromSnapRecovery:] */

void FUN_10713f14c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10713f1b4;
  puStack_28 = &UNK_11098fe88;
  uStack_20 = param_1;
  uStack_18 = param_3;
  uStack_17 = param_4;
  uStack_16 = param_5;
  uStack_15 = param_6;
  uStack_14 = param_7;
  uStack_13 = param_8;
  func_0x00010bf37ea0(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 10713f1b4; end: 10713f6d7;  */

/* WARNING: Possible PIC construction at 0x00010713f454: Changing call to branch */

void FUN_10713f1b4(long param_1,uint param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10713f490;
    puStack_68 = &UNK_11098fe58;
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined4 *)(param_1 + 0x28);
    uStack_54 = *(undefined2 *)(param_1 + 0x2c);
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_80);
    return;
  }
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2588a0();
  if ((int)uVar7 == 0) {
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar5);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x28);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar5);
    if (cVar1 == '\x01') {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x0001070c4748();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x00010beec300();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c11aa60();
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar8);
      bVar2 = *(byte *)(param_1 + 0x29);
      bVar3 = *(byte *)(param_1 + 0x2a);
      bVar4 = *(byte *)(param_1 + 0x2b);
      uVar9 = uVar6;
      func_0x000108f482e0();
      if ((((bVar4 | bVar3) & 1) == 0) && ((bVar2 & 1) != 0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
        if (bVar3 == 0 && bVar2 == 0) {
          uVar10 = bVar4 ^ 1;
        }
        uVar10 = uVar10 & (uint)uVar9;
      }
      bVar2 = *(byte *)(param_1 + 0x29);
      bVar3 = *(byte *)(param_1 + 0x2a);
      bVar4 = *(byte *)(param_1 + 0x2b);
      uVar9 = uVar6;
      func_0x000108f482e0();
      if (((((uVar10 & 1) != 0) ||
           (((((bVar4 | bVar2) & 1 | bVar3 ^ 1) & ((bVar3 | bVar2) & 1 | (uint)bVar4 | (uint)uVar9)
             ^ 1) & (uint)uVar5 & 1) != 0)) && ((*(byte *)(param_1 + 0x2c) & 1) == 0)) &&
         ((*(byte *)(param_1 + 0x2d) & 1) == 0)) {
        func_0x00010bdd0ce0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar6);
        return;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      goto code_r0x00010beba2e0;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdd0cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar9,PTR_s__attemptPostDirectlyToMyStory_tr_112551cd8,1,1,
               *(undefined1 *)(param_1 + 0x2c));
    return;
  }
code_r0x00010beba2e0:
                    /* WARNING: Could not recover jumptable at 0x00010beba2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s__showOptionsForStoryPost_11258c260);
  return;
}



/* Entry: 10713f6d8; end: 10713f8af; -[PreviewViewController _attemptPostDirectlyToMyStory:tryDirectlyPostingToPublicStory:fromMemories:] */

void FUN_10713f6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ce0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be34a00();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be76910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__postStoryDirectlyOnlyToMyStory__11257b3e0,param_4);
    return;
  }
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10713f8b0;
  puStack_80 = &UNK_11086a898;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_6f = (undefined1)param_4;
  uStack_70 = param_5;
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = param_5;
  func_0x00010beba620(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10713f8b0; end: 10713fb57;  */

void FUN_10713f8b0(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x28);
    lVar3 = lVar2;
    func_0x00010c13b540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      lVar5 = lVar3;
      func_0x0001070c56bc();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c172fe0();
    }
    else {
      lVar4 = lVar3;
      func_0x0001070c5530();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c274120();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190760();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar4 = lVar2;
      func_0x00010c13b540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x0001070c4694();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e22a0();
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010be76900(lVar2,param_2,*(undefined1 *)(param_1 + 0x29));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10713fb58; end: 10713fc97; -[PreviewViewController _showPostStoryPopUpDialog:cancelCompletion:] */

void FUN_10713fb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10713fc98;
  puStack_60 = &UNK_1108498b0;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be768c0(param_1,param_2,1,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10713fcac;
  puStack_88 = &UNK_1108498b0;
  uStack_80 = param_4;
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010be768c0(param_1,param_2,0,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108ede660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76920(param_1,param_2,uVar4,uVar2,uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10713fc98; end: 10713fcbf;  */

void FUN_10713fc98(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010713fca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10713fcc0; end: 10713fedf; -[PreviewViewController _showOptionsForStoryPost] */

void FUN_10713fcc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ce0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beb5f20();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be768c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be768c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108ede660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be76920(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPostStorySelection_11257cf40);
  return;
}



/* Entry: 10713fee0; end: 10713ff8b; -[PreviewViewController _postStoryActionControllerWithAddAction:handler:] */

void FUN_10713fee0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    uVar3 = 4;
    func_0x000108ede780();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 3;
    func_0x000108ede618();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126af180;
  func_0x00010beef320(PTR_PTR_1126af180,param_2,uVar1,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c160fc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e2b6f8);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10713ff8c; end: 107140087; -[PreviewViewController _incrementSavedStoryEducationCount] */

void FUN_10713ff8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bb80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5c00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107140088; end: 10714011f; -[PreviewViewController _shouldShowEducationDialog] */

bool FUN_107140088(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14bb80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4 < 1;
}



/* Entry: 107140120; end: 107140137; -[PreviewViewController _hasUserConfirmedPreviouslyToPostDirect:] */

uint FUN_107140120(uint param_1)

{
  func_0x00010beb5f20();
  return param_1 ^ 1;
}



/* Entry: 107140138; end: 107140167; -[PreviewViewController _getEducationDialogTextWithIsStoryPrivacySettingEveryone:] */

void FUN_107140138(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    func_0x000108edef48();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edef30();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107140168; end: 1071402db; -[PreviewViewController _postStoryWarningWithTitle:addAction:cancelAction:] */

void FUN_107140168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107d6fc14();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be1ec00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c235c40(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be38800(param_1);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_2);
  func_0x00010bf6d680(0x402e000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2717c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf6e520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c19e480(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 1071402dc; end: 1071403cf;  */

void FUN_1071402dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_2);
  func_0x00010bf6d680(0x402e000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2717c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf6e520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c19e480(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 1071403d0; end: 10714062b; -[PreviewViewController _postStoryDirectlyOnlyToMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071403d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
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
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined8 uVar58;
  long lVar59;
  long lVar60;
  undefined8 uVar61;
  ulong uVar62;
  undefined8 uVar63;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  
  lVar59 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar62 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar62;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar62);
  uVar62 = uVar2;
  func_0x000108f488a4();
  uVar1 = param_1;
  func_0x00010bdf7180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be76a00();
  if (((int)uVar3 == 0) || (uVar1 == 0)) {
    if ((int)uVar62 != 0) {
      func_0x00010c21fb00(param_1);
      func_0x00010c165620(param_1);
      goto LAB_1071404e0;
    }
    func_0x00010c104800(param_1);
  }
  else if ((int)uVar62 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104800(param_1);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c21fb00(param_1);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174620(param_1);
    _objc_release(puVar7);
LAB_1071404e0:
    uVar62 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar62;
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
    func_0x00010c2b6680();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar62);
    func_0x00010bf78ac0(param_1);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar59) {
    return;
  }
  ___stack_chk_fail();
  uVar62 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar62;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c258e00();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar62);
  if ((uVar4 & 1) != 0) {
    lVar59 = 0;
    goto LAB_1071412ac;
  }
  lVar60 = (long)_DAT_11276454c;
  lVar59 = *(long *)(uVar2 + lVar60);
  if (lVar59 != 0) {
    _objc_retain(lVar59);
    goto LAB_1071412ac;
  }
  func_0x00010c28a0e0(uVar2);
  puVar7 = PTR_PTR_1126b5160;
  _objc_alloc();
  uVar62 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar62;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(uVar2 + (long)_DAT_112764474);
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x0001070c5770();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x0001070c5ca4();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007860();
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
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar62);
  uVar62 = uVar2;
  func_0x00010c11e660();
  puVar22 = PTR_PTR_1126b5168;
  _objc_alloc();
  uVar1 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c106840();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar62 != 0) {
    func_0x00010c07c2a0();
  }
  func_0x00010beb3120();
  uVar62 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar62;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x0001070c5164();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  if (uVar33 != 0) {
    uVar8 = *(undefined8 *)(uVar33 + (long)_DAT_1127641c8);
  }
  uVar58 = uVar8;
  _objc_retain();
  func_0x000107d6fc14();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x0001070c5b84();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x0001070c5bcc();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010c0ee260();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x0001070c5bcc();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x0001070c5c38();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar44;
  func_0x00010c11e720();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (uVar46 == 0) {
    uVar63 = 0;
  }
  else {
    uVar63 = *(undefined8 *)(uVar46 + (long)_DAT_1127641cc);
  }
  _objc_retain(uVar63);
  uVar47 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar47;
  func_0x0001070c5a1c();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar49;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar50;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c242400();
  uVar53 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar53;
  func_0x0001070c59d4();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar54;
  func_0x00010bf62460();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar56;
  func_0x0001070c59f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d5c0();
  uVar61 = *(undefined8 *)(uVar2 + lVar60);
  *(undefined **)(uVar2 + lVar60) = puVar22;
  _objc_release(uVar61);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar63);
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
  _objc_release(uVar58);
  _objc_release(uVar8);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar62);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
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
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar62 = uVar2;
  func_0x00010c275a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ae0(*(undefined8 *)(uVar2 + lVar60));
  _objc_release(uVar62);
  func_0x00010beb31a0(uVar2);
  func_0x00010c1a83c0(*(undefined8 *)(uVar2 + lVar60));
  uVar62 = uVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar62;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2588a0();
  uVar5 = uVar2;
  if ((int)uVar4 == 0) {
    uVar4 = uVar2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c258a80();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar62);
    if ((int)uVar10 != 0) goto LAB_1071410c8;
    uVar62 = *(ulong *)(uVar2 + lVar60);
    uVar58 = *(undefined8 *)(uVar2 + (long)_DAT_1127644ac);
    func_0x00010c131e40(uVar58);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar58;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1588c0();
    _objc_release(uVar8);
    _objc_release(uVar58);
    if ((uVar62 & 1) == 0) {
      func_0x00010c10a980(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105f60(*(undefined8 *)(uVar2 + lVar60));
      goto LAB_107141264;
    }
  }
  else {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar62);
LAB_1071410c8:
    func_0x00010bdf7180();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_e0,uVar2);
    uVar62 = uVar2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar62;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c13b540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x0001070c5da0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c11a940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c13b540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_107141388;
    puStack_f8 = &UNK_11098fed8;
    _objc_copyWeak(auStack_e8,auStack_e0);
    _objc_retain(uVar5);
    uStack_f0 = uVar5;
    func_0x000108ede32c(uVar3,uVar9,uVar12,uVar13,&puStack_110);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar62);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
LAB_107141264:
    _objc_release(uVar5);
  }
  func_0x00010c1e1460(*(undefined8 *)(uVar2 + lVar60));
  func_0x00010c20d820(*(undefined8 *)(uVar2 + lVar60));
  func_0x00010c25abe0(uVar2);
  func_0x00010c19f0e0(*(undefined8 *)(uVar2 + lVar60));
  lVar59 = *(long *)(uVar2 + lVar60);
  _objc_retain(lVar59);
  _objc_release(puVar7);
LAB_1071412ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar59);
  return;
}



/* Entry: 10714062c; end: 107141387; -[PreviewViewController storyQuickPostView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714062c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined8 uVar57;
  long lVar58;
  undefined8 uVar59;
  long lVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  uVar61 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar61;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c258e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar61);
  if ((uVar3 & 1) != 0) {
    lVar60 = 0;
    goto LAB_1071412ac;
  }
  lVar58 = (long)_DAT_11276454c;
  lVar60 = *(long *)(param_1 + lVar58);
  if (lVar60 != 0) {
    _objc_retain(lVar60);
    goto LAB_1071412ac;
  }
  func_0x00010c28a0e0(param_1);
  puVar4 = PTR_PTR_1126b5160;
  _objc_alloc();
  uVar61 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar61;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112764474);
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c5578();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x0001070c5770();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x0001070c5ca4();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007860();
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
  _objc_release(uVar1);
  _objc_release(uVar61);
  uVar61 = param_1;
  func_0x00010c11e660();
  puVar21 = PTR_PTR_1126b5168;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c106840();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar61 != 0) {
    func_0x00010c07c2a0();
  }
  func_0x00010beb3120();
  uVar61 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar61;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x0001070c5164();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x0001070c4694();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  if (uVar32 != 0) {
    uVar5 = *(undefined8 *)(uVar32 + (long)_DAT_1127641c8);
  }
  uVar57 = uVar5;
  _objc_retain();
  func_0x000107d6fc14();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x0001070c5b84();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar36;
  func_0x0001070c5bcc();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010c0ee260();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x0001070c5bcc();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x0001070c5c38();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x00010c11e720();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (uVar45 == 0) {
    uVar62 = 0;
  }
  else {
    uVar62 = *(undefined8 *)(uVar45 + (long)_DAT_1127641cc);
  }
  _objc_retain(uVar62);
  uVar46 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x0001070c5a1c();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar48;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar49;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c242400();
  uVar52 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar52;
  func_0x0001070c59d4();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar53;
  func_0x00010bf62460();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar55;
  func_0x0001070c59f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d5c0();
  uVar59 = *(undefined8 *)(param_1 + lVar58);
  *(undefined **)(param_1 + lVar58) = puVar21;
  _objc_release(uVar59);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar62);
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
  _objc_release(uVar57);
  _objc_release(uVar5);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar61);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar61 = param_1;
  func_0x00010c275a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ae0(*(undefined8 *)(param_1 + lVar58));
  _objc_release(uVar61);
  func_0x00010beb31a0(param_1);
  func_0x00010c1a83c0(*(undefined8 *)(param_1 + lVar58));
  uVar61 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar61;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2588a0();
  uVar6 = param_1;
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c258a80();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar61);
    if ((int)uVar9 != 0) goto LAB_1071410c8;
    uVar61 = *(ulong *)(param_1 + lVar58);
    uVar57 = *(undefined8 *)(param_1 + (long)_DAT_1127644ac);
    func_0x00010c131e40(uVar57);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar57;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1588c0();
    _objc_release(uVar5);
    _objc_release(uVar57);
    if ((uVar61 & 1) == 0) {
      func_0x00010c10a980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105f60(*(undefined8 *)(param_1 + lVar58));
      goto LAB_107141264;
    }
  }
  else {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar61);
LAB_1071410c8:
    func_0x00010bdf7180();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_70,param_1);
    uVar61 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar61;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x0001070c5da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c11a940();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107141388;
    puStack_88 = &UNK_11098fed8;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(uVar6);
    uStack_80 = uVar6;
    func_0x000108ede32c(uVar2,uVar8,uVar11,uVar12,&puStack_a0);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar61);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
LAB_107141264:
    _objc_release(uVar6);
  }
  func_0x00010c1e1460(*(undefined8 *)(param_1 + lVar58));
  func_0x00010c20d820(*(undefined8 *)(param_1 + lVar58));
  func_0x00010c25abe0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar58));
  lVar60 = *(long *)(param_1 + lVar58);
  _objc_retain(lVar60);
  _objc_release(puVar4);
LAB_1071412ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar60);
  return;
}



/* Entry: 107141388; end: 10714143f;  */

void FUN_107141388(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107141440;
  puStack_60 = &UNK_1109486d0;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  uStack_48 = param_2;
  uStack_47 = param_3;
  uStack_46 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 107141440; end: 1071414a7;  */

void FUN_107141440(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79ba0(lVar1,param_2,uVar2,*(undefined1 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x31),*(undefined1 *)(param_1 + 0x32));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071414a8; end: 1071415ab; -[PreviewViewController _preselectStoriesIfNeededWithSnapProProfileId:recentlyPostedMyStory:recentlyPostedPublicStory:recentlyPostedCustomStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071414a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x000108f482e0();
  if ((param_5 != 0) || ((((uint)param_4 | param_6 | (uint)lVar1) & 1) == 0)) {
    func_0x00010c1588c0(*(undefined8 *)(param_1 + _DAT_11276454c),param_2,param_3,param_4);
  }
  if (param_6 != 0) {
    lVar1 = param_1;
    func_0x00010c10a980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105f60(*(undefined8 *)(param_1 + _DAT_11276454c),param_2,lVar1,param_4);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071415ac; end: 1071417b3; -[PreviewViewController preselectedCustomStoriesPublicationIDs] */

void FUN_1071415ac(long param_1)

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
  long lVar11;
  
  lVar11 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x0001070c5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar11);
  if (lVar1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067f00();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar11);
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5a40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0d4b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001070c5da0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c11a940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x000108eddf9c(lVar4,lVar7,lVar9,lVar10,(long)(int)lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 1071417b4; end: 1071417cf; -[PreviewViewController setSnapHasSponsoredContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071417b4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276440c) != param_3) {
    *(char *)(param_1 + _DAT_11276440c) = (char)param_3;
  }
  return;
}



/* Entry: 1071417d0; end: 107141b33; -[PreviewViewController didPressStoriesTraySendWithAddToMyStory:fanPassSelected:fanPassBusinessId:ourStorySelected:customStoriesSelected:businessProfilesSelected:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:sendPressSourceType:exitType:] */

void FUN_1071417d0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c165620(param_1,param_2,param_3);
  func_0x00010c1d6c40(param_1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c188a60(param_1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c174620(param_1,param_2,param_8);
  _objc_release(param_8);
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_5;
    func_0x00010c08fa60();
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = param_5;
    }
  }
  func_0x00010c19a300(param_1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (lVar8 == 0) {
    lVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8260(lVar5,param_2,lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  func_0x00010bebf3a0(param_1,param_2,param_15,param_9,param_10,param_11,param_12,param_13);
  func_0x00010bf78ac0(param_1,param_2,param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107141b34; end: 107141bc3; -[PreviewViewController didDismissStoriesTray] */

void FUN_107141b34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2bd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf752c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107141bc4; end: 107141c7b; -[PreviewViewController emitQuickPostDismissTrayWithoutSendEventWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:] */

void FUN_107141bc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_3 == 2) {
    return;
  }
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf3bc40(param_1);
  func_0x00010be57700(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107141c7c; end: 107141d83; -[PreviewViewController _stagePendingQuickPostTrayPageViewWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:] */

void FUN_107141c7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  func_0x00010c1a6680(param_1);
  func_0x00010c1da3a0(param_1);
  func_0x00010c1da3e0(param_1);
  uVar1 = in_x4;
  func_0x00010bf51e00(in_x4);
  _objc_release(in_x4);
  func_0x00010c1da400(param_1);
  _objc_release(uVar1);
  uVar1 = in_x5;
  func_0x00010bf51e00(in_x5);
  _objc_release(in_x5);
  func_0x00010c1da420(param_1);
  _objc_release(uVar1);
  uVar1 = in_x6;
  func_0x00010bf51e00(in_x6);
  _objc_release(in_x6);
  func_0x00010c1da440(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1da3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setPendingQuickPostTrayFirstStor_112654318,in_x7);
  return;
}



/* Entry: 107141d84; end: 107141deb; -[PreviewViewController clearPendingQuickPostTrayPageView] */

void FUN_107141d84(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1a6680(param_1,param_2,0);
  func_0x00010c1da3a0(param_1);
  func_0x00010c1da3e0(param_1);
  func_0x00010c1da400(param_1);
  func_0x00010c1da420(param_1);
  func_0x00010c1da440(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1da3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPendingQuickPostTrayFirstStor_112654318,0)
  ;
  return;
}



/* Entry: 107141dec; end: 107141df3; -[PreviewViewController flushPendingQuickPostTrayPageViewIfNeeded] */

void FUN_107141dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be182d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__flushPendingQuickPostTrayPageVi_112563a50,1)
  ;
  return;
}



/* Entry: 107141df4; end: 107141dfb; -[PreviewViewController flushPendingQuickPostTrayPageViewWithoutSendHandoffFields] */

void FUN_107141df4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be182d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__flushPendingQuickPostTrayPageVi_112563a50,0)
  ;
  return;
}



/* Entry: 107141dfc; end: 107141f9f; -[PreviewViewController _flushPendingQuickPostTrayPageViewIncludingSendHandoffFields:] */

void FUN_107141dfc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bfda1a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar6;
    func_0x00010c11e6e0();
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c0f7820(param_1);
      lVar2 = param_1;
      func_0x00010c0f7860(param_1);
      lVar3 = param_1;
      func_0x00010c0f7880(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0f78a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0f78c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c0f7840(param_1);
      func_0x00010be57700(param_1,param_2,lVar1,lVar2,lVar3,lVar4,lVar5,lVar7,param_3);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    func_0x00010bf3bc40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 107141fa0; end: 10714213f; -[PreviewViewController _storyTypeCountsFromArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107141fa0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  char cStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_alloc();
  func_0x00010bff4000();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  puVar11 = &uStack_130;
  uVar12 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar15 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c067fc0(*(undefined8 *)(lStack_128 + (long)puVar13 * 8));
        func_0x00010be5cfc0();
        puVar4 = PTR_PTR_1126cc7e0;
        _objc_alloc_init();
        func_0x00010c20ddc0();
        func_0x00010bf52b00(puVar2);
        func_0x00010c1846c0(puVar4);
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar11 = &uStack_130;
      uVar12 = 0x10;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126cc7e8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(uVar12);
  _objc_opt_new(puVar1);
  lVar14 = (long)_DAT_1127644ac;
  lVar5 = *(long *)(param_3 + lVar14);
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar15 != 0) {
    uVar6 = *(undefined8 *)(param_3 + lVar14);
    func_0x00010bf311e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1);
    _objc_release(uVar6);
  }
  func_0x00010c1df760(puVar1);
  if ((puVar11 == (undefined8 *)0x2) && (cStack_140 != '\0')) {
    lVar15 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar5);
    _objc_release(lVar15);
    lVar15 = lVar10;
    func_0x00010c08fa60();
    if (lVar15 != 0) {
      func_0x00010c1fcc00(puVar1);
    }
    lVar15 = param_3;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar7 = lVar14;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf529e0();
    if (lVar8 == 2) {
      lVar8 = lVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar14);
      lVar8 = lVar14;
    }
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar14);
    _objc_release(lVar5);
    _objc_release(lVar15);
    lVar15 = lVar8;
    func_0x00010c08fa60();
    if (lVar15 != 0) {
      func_0x00010c1df360(puVar1);
    }
    _objc_release(lVar8);
    _objc_release(lVar10);
  }
  func_0x00010c198620(puVar1);
  func_0x00010c219ea0(puVar1);
  func_0x00010c19d680(puVar1);
  lVar15 = param_3;
  func_0x00010bec4fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c20de60(puVar1);
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010bec4fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  func_0x00010c20dea0(puVar1);
  _objc_release(lVar15);
  lVar15 = param_3;
  func_0x00010bec4fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c20df00(puVar1);
  _objc_release(lVar15);
  func_0x00010c13b540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar15;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107142140; end: 10714250b; -[PreviewViewController _logQuickPostEventWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:includeSendHandoffFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107142140(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126cc7e8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  lVar9 = (long)_DAT_1127644ac;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf311e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1);
    _objc_release(uVar4);
  }
  func_0x00010c1df760(puVar1);
  if ((param_3 == 2) && (param_9 != '\0')) {
    lVar3 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = lVar8;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c1fcc00(puVar1);
    }
    lVar3 = param_1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar5 = lVar9;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if (lVar6 == 2) {
      lVar6 = lVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar9);
      lVar6 = lVar9;
    }
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = lVar6;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c1df360(puVar1);
    }
    _objc_release(lVar6);
    _objc_release(lVar8);
  }
  func_0x00010c198620(puVar1);
  func_0x00010c219ea0(puVar1);
  func_0x00010c19d680(puVar1);
  lVar3 = param_1;
  func_0x00010bec4fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c20de60(puVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bec4fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c20dea0(puVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bec4fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c20df00(puVar1);
  _objc_release(lVar3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10714250c; end: 10714252b; -[PreviewViewController _mapToSCAStoryTypeSpecific:] */

undefined8 FUN_10714250c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return *(undefined8 *)(&UNK_10de1fbe8 + param_3 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 10714252c; end: 107143527; -[PreviewViewController _presentPostStorySelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714252c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  undefined *puVar19;
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
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  long lVar80;
  long lVar81;
  
  func_0x00010bf3de40();
  func_0x00010c202460(param_1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c258e00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b5160;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar81 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112764474);
    func_0x00010bf620c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x0001070c5770();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x0001070c5ca4();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007860();
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
    _objc_release(uVar6);
    _objc_release(lVar81);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c07b5a0();
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d080();
    _objc_release(lVar1);
    puVar19 = PTR_PTR_1126cc7c8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar81 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar81;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x0001070c55e4();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar18;
    func_0x0001070c55e4();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x0001070c5578();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar25;
    func_0x0001070c55e4();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar26;
    func_0x00010c106840();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar28;
    func_0x0001070c5530();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar29;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar31;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = lVar34;
    func_0x0001070c5164();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar36;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = lVar37;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar39;
    func_0x0001070c5bcc();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar40;
    func_0x00010c0ee260();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = lVar42;
    func_0x0001070c5bcc();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = lVar43;
    func_0x00010c0ee220();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar46 = lVar45;
    func_0x0001070c5218();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar46;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar47;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = param_1;
    func_0x00010bf1c060();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = param_1;
    func_0x00010c10a980();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_1;
    func_0x00010c275a00();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    if (lVar52 != 0) {
      uVar6 = *(undefined8 *)(lVar52 + _DAT_1127641c8);
    }
    uVar53 = uVar6;
    _objc_retain();
    func_0x000107d6fc14();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = lVar54;
    func_0x0001070c5c38();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = lVar55;
    func_0x00010c11e720();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar57 == 0) {
      uVar78 = 0;
    }
    else {
      uVar78 = *(undefined8 *)(lVar57 + _DAT_1127641cc);
    }
    _objc_retain(uVar78);
    lVar58 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar59 = lVar58;
    func_0x0001070c5a1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb31a0();
    lVar60 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar61 = lVar60;
    func_0x0001070c2ef8();
    _objc_retainAutoreleasedReturnValue();
    lVar62 = lVar61;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar63 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar64 = lVar63;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar65 = lVar64;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258aa0();
    lVar66 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar67 = lVar66;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar68 = lVar67;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11e680();
    lVar69 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c242400();
    func_0x00010beb3120();
    lVar70 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar71 = lVar70;
    func_0x0001070c550c();
    _objc_retainAutoreleasedReturnValue();
    lVar72 = lVar71;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    lVar73 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar74 = lVar73;
    func_0x0001070c5824();
    _objc_retainAutoreleasedReturnValue();
    lVar75 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar76 = lVar75;
    func_0x0001070c5f74();
    _objc_retainAutoreleasedReturnValue();
    lVar77 = lVar76;
    func_0x00010bf5b4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e6a0();
    lVar80 = (long)_DAT_112764550;
    uVar79 = *(undefined8 *)(param_1 + lVar80);
    *(undefined **)(param_1 + lVar80) = puVar19;
    _objc_release(uVar79);
    _objc_release(lVar77);
    _objc_release(lVar76);
    _objc_release(lVar75);
    _objc_release(lVar74);
    _objc_release(lVar73);
    _objc_release(lVar72);
    _objc_release(lVar71);
    _objc_release(lVar70);
    _objc_release(lVar69);
    _objc_release(lVar68);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(uVar78);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(uVar53);
    _objc_release(uVar6);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
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
    _objc_release(lVar81);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar80));
    puVar19 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar81 = (long)_DAT_112764554;
    uVar6 = *(undefined8 *)(param_1 + lVar81);
    *(undefined **)(param_1 + lVar81) = puVar19;
    _objc_release(uVar6);
    func_0x00010c219e20(*(undefined8 *)(param_1 + lVar81));
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258aa0();
    func_0x00010c219d60(*(undefined8 *)(param_1 + lVar81));
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar80);
    lVar1 = param_1;
    func_0x00010c27ed00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cfd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ed00(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78740();
    _objc_release(param_1);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  func_0x00010c229580(*(undefined8 *)(param_1 + _DAT_1127644f0));
  func_0x00010c289aa0(param_1);
  func_0x00010c11e660(param_1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5380();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237880();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb31a0(param_1);
  func_0x00010c1a83c0(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc200();
  func_0x00010c165620(param_1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6c40(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf620e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188a60(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174620(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c289bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSendConfirmationView_112680118);
  return;
}



/* Entry: 107143528; end: 1071435c3; -[PreviewViewController updateSendConfirmationView] */

void FUN_107143528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010befc200();
  uVar2 = param_1;
  func_0x00010c0ee420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf620e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf25220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289be0(param_1,param_2,uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071435c4; end: 107143803; -[PreviewViewController updateSendConfirmationViewWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071435c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar10 = param_1;
  func_0x00010c23b200();
  if ((int)lVar10 != 0) {
    uVar1 = param_4;
    func_0x000108438d3c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_110a48c08);
    lVar10 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_110a48bb8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar10);
    puVar6 = PTR_PTR_1126b5178;
    func_0x00010c15d0a0(PTR_PTR_1126b5178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7f20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b8640(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aefa0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a9b00(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127644f0;
    func_0x00010c229580(*(undefined8 *)(param_1 + lVar10));
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c15b960(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bf40(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar7);
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bfdbd20();
    _objc_release(uVar9);
    if ((int)uVar7 != 0) {
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c15b960(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar7);
    }
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107143804; end: 1071439cb; -[PreviewViewController hidePostStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107143804(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c23b200();
  if ((int)lVar1 != 0) {
    func_0x00010c202460(param_1,param_2,0);
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c258e00();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      lVar4 = *(long *)(param_1 + _DAT_1127644ac);
      func_0x00010c131e40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bfba2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010c1122a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010c15b960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(lVar4);
        _objc_release(lVar1);
      }
      func_0x00010be03720(param_1);
    }
    else {
      func_0x00010bf83180(*(undefined8 *)(param_1 + _DAT_112764554),param_2,1);
    }
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5ce0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071439cc; end: 107143ad7; -[PreviewViewController _dismissStoryQuickPostView] */

void FUN_1071439cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001084236ec();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010c25ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
  }
  else {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11e620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c3418;
    func_0x00010bf75060(PTR_PTR_1126c3418);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107143ad8; end: 107143b57; -[PreviewViewController dialogDidDismiss:] */

void FUN_107143ad8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c224580(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ba00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be022b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAbandonAlertWindow_11255e248);
  return;
}



/* Entry: 107143b58; end: 107143b5f; -[PreviewViewController _xPressed] */

void FUN_107143b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beebdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__xPressedWithPreviewActionIntera_112598920,0xffffffffffffffff);
  return;
}



/* Entry: 107143b60; end: 107143b67; -[PreviewViewController _xButtonTapped] */

void FUN_107143b60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beebdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__xPressedWithPreviewActionIntera_112598920,1)
  ;
  return;
}



/* Entry: 107143b68; end: 107143eb7; -[PreviewViewController _xPressedWithPreviewActionInteractionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107143b68(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar2 = param_1;
  func_0x00010c06d1a0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_1127644ac);
  func_0x00010c070a20();
  if (iVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2303c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1598c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (uVar4 != 0) {
        uVar2 = param_1;
        func_0x00010c1122a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c2737a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c1598c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c084c40();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be288b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__handleDismissTapForTool__112567bc8,uVar5);
        return;
      }
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e8a0();
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c071280();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      uVar8 = param_1;
      func_0x00010c254bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0791a0();
      if ((uVar9 & 1) == 0) {
        uVar10 = (uint)*(undefined8 *)(param_1 + (long)_DAT_112764558);
        func_0x00010c0791a0();
        uVar10 = uVar10 ^ 1;
      }
      else {
        uVar10 = 0;
      }
      _objc_release(uVar8);
    }
    else {
      uVar10 = 0;
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    uVar10 = 0;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((param_3 != -1) && (uVar10 != 0)) {
    func_0x00010be552a0(param_1);
  }
  uVar2 = param_1;
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc80();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be03230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewWithExitType__11255e628,1);
  return;
}



/* Entry: 107143eb8; end: 1071448d3; -[PreviewViewController _dismissPreviewWithExitType:] */

/* WARNING: Possible PIC construction at 0x000107144654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107144658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107143eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  lVar13 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010bf5af00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c071280();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  if ((int)lVar5 == 0) {
    lVar13 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar13);
    if (lVar4 != 0) {
      lVar13 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar13;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1598c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c084c40();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010be288b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__handleDismissTapForTool__112567bc8,lVar5);
      return;
    }
    lVar13 = param_1;
    func_0x00010c254bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c0791a0();
    _objc_release(lVar13);
    if ((int)lVar3 == 0) {
      lVar13 = (long)_DAT_112764558;
      iVar2 = (int)*(undefined8 *)(param_1 + lVar13);
      func_0x00010c0791a0();
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + lVar13),PTR_s_close_1125ad020);
        return;
      }
      lVar13 = (long)_DAT_1127644ac;
      iVar2 = (int)*(undefined8 *)(param_1 + lVar13);
      func_0x00010c07e920();
      if (iVar2 == 0) {
        lVar3 = param_1;
        func_0x00010beb5aa0();
        if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__showAbandonWarningWithExitType__11258b748,param_3);
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(param_1 + lVar13);
        func_0x00010c0792e0();
        if ((uVar6 & 1) == 0) {
          lVar3 = param_1;
          func_0x00010c232ea0();
          if ((int)lVar3 == 0) {
            uVar7 = *(ulong *)(param_1 + lVar13);
            func_0x00010c2440e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar7;
            func_0x00010bf97060();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar6;
            func_0x00010b5fac18();
            lVar3 = param_1;
            if ((uVar11 & 1) == 0) {
              _objc_release(uVar6);
              _objc_release(uVar7);
LAB_107144354:
              lVar4 = param_1;
              func_0x00010be43d20();
              if ((int)lVar4 == 0) goto LAB_1071444b8;
              _objc_initWeak(auStack_78,param_1);
              uVar8 = *(undefined8 *)(param_1 + lVar13);
              func_0x00010c2440e0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c073b80();
              _objc_release(uVar8);
              puVar1 = PTR___NSConcreteStackBlock_11034bd00;
              if ((int)uVar9 == 0) {
                uVar8 = *(undefined8 *)(param_1 + lVar13);
                func_0x00010c2440e0();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c073ea0();
                _objc_release(uVar8);
                if ((int)uVar9 != 0) {
                  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_170 = 0xc2000000;
                  pcStack_168 = FUN_107144c8c;
                  puStack_160 = &UNK_1108434b0;
                  _objc_copyWeak(auStack_158,auStack_78);
                  _objc_copyWeak(auStack_188,auStack_78);
                  lVar13 = param_1;
                  uStack_180 = param_3;
                  func_0x00010be99a20(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfa3600(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = param_1;
                  func_0x00010bf71d60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar3;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c237000();
                  _objc_release(lVar4);
                  _objc_release(lVar3);
                  _objc_release(param_1);
                  _objc_destroyWeak(auStack_188);
                  _objc_destroyWeak(auStack_158);
                  _objc_release(lVar13);
                }
                goto LAB_107144844;
              }
              puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_118 = 0xc2000000;
              pcStack_110 = FUN_107144b1c;
              puStack_108 = &UNK_1108434b0;
              ppuVar12 = &puStack_120;
              _objc_copyWeak(auStack_100,auStack_78);
              ppuVar10 = &puStack_120;
              _objc_retainBlock();
              uVar8 = *(undefined8 *)(param_1 + lVar13);
              func_0x00010c2440e0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c2340a0();
              _objc_release(uVar8);
              if ((int)uVar9 != 0) {
                puStack_150 = puVar1;
                uStack_148 = 0xc2000000;
                uStack_140 = 0x107144c50;
                puStack_138 = &UNK_110846540;
                ppuVar14 = &puStack_150;
                _objc_copyWeak(auStack_130,auStack_78);
                uStack_128 = param_3;
                func_0x00010be99a40(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa3600(param_1);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = param_1;
                func_0x00010bf71d60();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar13;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c237000();
                goto LAB_10714448c;
              }
              (*(code *)ppuVar10[2])(ppuVar10);
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + lVar13);
              func_0x00010c2440e0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c232ec0();
              _objc_release(uVar8);
              _objc_release(uVar6);
              _objc_release(uVar7);
              if ((int)uVar9 == 0) goto LAB_107144354;
              _objc_initWeak(auStack_78,param_1);
              puVar1 = PTR___NSConcreteStackBlock_11034bd00;
              puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c0 = 0xc2000000;
              pcStack_b8 = FUN_1071449ac;
              puStack_b0 = &UNK_1108434b0;
              ppuVar12 = &puStack_c8;
              _objc_copyWeak(auStack_a8,auStack_78);
              ppuVar10 = &puStack_c8;
              _objc_retainBlock(ppuVar10);
              puStack_f8 = puVar1;
              uStack_f0 = 0xc2000000;
              uStack_e8 = 0x107144ae0;
              puStack_e0 = &UNK_110846540;
              ppuVar14 = &puStack_f8;
              _objc_copyWeak(auStack_d8,auStack_78);
              uStack_d0 = param_3;
              func_0x00010be99a40(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa3600(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar13 = param_1;
              func_0x00010bf71d60();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar13;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c237000();
LAB_10714448c:
              _objc_release(lVar4);
              _objc_release(lVar13);
              _objc_release(param_1);
              _objc_release(lVar3);
              _objc_destroyWeak(ppuVar14 + 4);
            }
            _objc_release(ppuVar10);
            ppuVar12 = ppuVar12 + 4;
          }
          else {
            _objc_initWeak(auStack_78,param_1);
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0xc2000000;
            pcStack_90 = FUN_1071448d4;
            puStack_88 = &UNK_110850658;
            _objc_copyWeak(&puStack_80,auStack_78);
            func_0x00010c14b0a0(param_1);
            ppuVar12 = &puStack_80;
          }
          _objc_destroyWeak(ppuVar12);
LAB_107144844:
          _objc_destroyWeak(auStack_78);
          return;
        }
      }
LAB_1071444b8:
      iVar2 = (int)*(undefined8 *)(param_1 + lVar13);
      func_0x00010c06d080();
      if (iVar2 == 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + lVar13);
        func_0x00010c0811c0();
        if (iVar2 != 0) {
          uVar6 = *(ulong *)(param_1 + lVar13);
          func_0x00010c07e920();
          if ((uVar6 & 1) == 0) {
            uVar11 = *(ulong *)(param_1 + _DAT_1127644f0);
            func_0x00010c14a120();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            func_0x00010c07d080();
            _objc_release(uVar11);
            if ((uVar6 & 1) == 0) {
              lVar13 = param_1;
              func_0x00010bfa3600(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar13;
              func_0x00010c2647e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9ba00();
              _objc_release(lVar4);
              _objc_release(lVar3);
              _objc_release(lVar13);
              func_0x00010bfa3600(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar13 = param_1;
              func_0x00010c26fe40();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10714458c;
            }
          }
        }
        lVar13 = param_1;
        func_0x00010c1122a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161840();
        _objc_release(lVar13);
code_r0x00010be0c1c0:
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__exitPreviewWithExitType__112560a10,param_3);
        return;
      }
      lVar13 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar13;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c233620();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar13);
      if ((int)lVar5 == 0) goto code_r0x00010be0c1c0;
      lVar13 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar13;
      func_0x00010c2647e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9ba00();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar13);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
LAB_10714458c:
      lVar3 = lVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237060();
      _objc_release(lVar3);
      goto LAB_107143f7c;
    }
    lVar13 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar13);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dfe0();
  }
  else {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf5af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b720();
  }
  _objc_release(lVar3);
LAB_107143f7c:
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071448d4; end: 1071449ab;  */

void FUN_1071448d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (param_2 != 2)) {
    if (param_2 == 1) {
      lVar1 = param_1;
      func_0x00010c15df80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5140();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c244100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112340();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071449ac; end: 107144a8f;  */

void FUN_1071449ac(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c238360(lVar1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107144a90; end: 107144b1b;  */

void FUN_107144a90(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c111180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ae00();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107144b1c; end: 107144bff;  */

void FUN_107144b1c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c238360(lVar1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  return;
}


