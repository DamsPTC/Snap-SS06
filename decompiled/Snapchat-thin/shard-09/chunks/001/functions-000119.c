/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a32844; end: 106a32863;  */

void FUN_106a32844(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110954430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a32864; end: 106a32baf;  */

void FUN_106a32864(undefined8 param_1,undefined8 param_2)

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
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c();
  if ((int)uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b28d8;
    _objc_alloc();
    uVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108ef3eb0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c280(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106a32bb0; end: 106a32bfb;  */

uint FUN_106a32bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106a32bfc; end: 106a32ca3; -[SCChatInputTextObserverPlugin _handleActiveChatIdentifier:] */

void FUN_106a32bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(param_3);
  func_0x00010c12ada0(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a32ca4;
  puStack_40 = &UNK_110904f68;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106a32ce0;
  puStack_68 = &UNK_1109544b0;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0bf0a0(param_3,param_2,&puStack_58,&puStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 106a32ca4; end: 106a32cdf;  */

void FUN_106a32ca4(long param_1)

{
  func_0x00010bf83580(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  func_0x00010c256500(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bf83550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),
             PTR_s_dismissChatCommandMenu_1125be6f8);
  return;
}



/* Entry: 106a32ce0; end: 106a32d5f;  */

void FUN_106a32ce0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  _objc_retain(param_2);
  func_0x00010c24faa0(uVar2);
  func_0x00010c10b940(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bddcd20();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_presentChatCommandMenu_112620840);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_dismissChatCommandMenu_1125be6f8);
  return;
}



/* Entry: 106a32d60; end: 106a32e77; -[SCChatInputTextObserverPlugin _handleTextEvent:] */

void FUN_106a32d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = param_3;
    func_0x00010bf99b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106a32e28;
    puStack_48 = &UNK_1109544e0;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0bd4c0(uVar1,param_2,0,0,0,0,0,&puStack_60,0);
    _objc_release(uVar1);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a32e78; end: 106a32fff; -[SCChatInputTextObserverPlugin _handleDidReturnWithText:forEvent:] */

void FUN_106a32e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c26c4a0(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c068ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uVar3 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a33000; end: 106a3312b;  */

void FUN_106a33000(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  func_0x00010bf1f3c0();
  if (param_2 == 0) {
    return;
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfed8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c071840();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x28);
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      if (lVar8 == 0) goto LAB_106a330f8;
    }
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde88c0();
  _objc_release(param_1);
LAB_106a330f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a3312c; end: 106a33343; -[SCChatInputTextObserverPlugin _continueHandleReturn:forEvent:] */

void FUN_106a3312c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfed8e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be44860();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar4 == 0) {
    func_0x00010be9ac60(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = param_4;
    func_0x00010bfed8e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfbe580(lVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a33344; end: 106a33387;  */

void FUN_106a33344(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a33388; end: 106a334bb; -[SCChatInputTextObserverPlugin _scanForPasswordInText:forEvent:teamSnapchatDisclosureAccepted:] */

void FUN_106a33388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c14ebe0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a334bc; end: 106a3351b;  */

void FUN_106a334bc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a3351c; end: 106a33573; -[SCChatInputTextObserverPlugin _handleScanCompletionWithDidContinue:attributedText:event:passwordDetectedRange:teamSnapchatDisclosureAccepted:] */

void FUN_106a3351c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be803d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__proceedWithReturnHandlingWithTe_11257da90,param_4,param_5,param_8);
    return;
  }
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1fb500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a33574; end: 106a343df; -[SCChatInputTextObserverPlugin _proceedWithReturnHandlingWithText:forEvent:teamSnapchatDisclosureAccepted:] */

void FUN_106a33574(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puStack_140;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_4;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bddcd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar7 = param_4;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x000100504554();
  _objc_release(puVar7);
  puVar7 = param_4;
  func_0x00010c112720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c08fa60();
  _objc_release(puVar7);
  _objc_initWeak(&puStack_b8,param_1);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106a34488;
  puStack_d0 = &UNK_1108d50a0;
  ppuVar21 = &puStack_b8;
  _objc_copyWeak(auStack_c8,ppuVar21);
  ppuVar5 = &puStack_e8;
  uStack_c0 = puVar3 != (undefined *)0x0;
  _objc_retainBlock();
  puVar7 = param_4;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfb50e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar3 != (undefined *)0x0) {
    uStack_130 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar6;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_4;
    func_0x00010c112720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    func_0x00010c14e120();
    func_0x00010c25f0a0(uStack_130);
    goto LAB_106a33ad0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = uVar11;
  func_0x00010c0af260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar7 = param_4;
  func_0x00010c1319e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = param_1;
  func_0x00010be74440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c06f6c0();
  puVar8 = puVar6;
  if ((int)puVar7 == 0) {
    puVar7 = puVar6;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar7;
      func_0x00010853c32c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar22;
      func_0x00010c131c00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      puVar20 = puVar6;
      if (puVar8 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b5bd0;
        _objc_alloc();
        puVar8 = puVar6;
        func_0x00010c25a520(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        func_0x00010853bdd8();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b5bd8;
        func_0x00010c24b300(PTR_PTR_1126b5bd8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000c00();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar8);
        puVar8 = *(undefined **)(param_1 + 0xe8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_90 = puVar20;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = param_3;
        func_0x00010c25cd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR___dispatch_main_q_11034be20;
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010c15cbe0(puVar8);
LAB_106a33aa8:
        _objc_release(puVar14);
        goto LAB_106a33ab0;
      }
      if (puVar22 == (undefined *)0x0) {
        puVar7 = param_4;
        func_0x00010c1319e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126b6078;
        if (puVar8 != (undefined *)0x0) {
          puVar7 = PTR_PTR_1126c2810;
          _objc_alloc();
          puVar8 = puVar6;
          func_0x00010c25a520(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar8;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar6;
          func_0x00010c25a520(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c0c5340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          puVar14 = param_3;
          func_0x00010c25cd40(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e240();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar20);
          _objc_release(puVar8);
          puVar8 = puStack_140;
          func_0x000108604d34();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = *(undefined **)(param_1 + 0x18);
          func_0x00010c269d40(puVar20);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = param_4;
          func_0x00010c1319e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bfb50e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_a0 = puVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(PTR___dispatch_main_q_11034be20);
          func_0x00010c15d8c0(puVar20);
          _objc_release(PTR___dispatch_main_q_11034be20);
          goto LAB_106a33aa8;
        }
        func_0x00010bfdbbc0(puVar6);
        func_0x00010c26c6c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = *(undefined **)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25a520(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010bf50280(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15cd40(puVar8);
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR_PTR_1126b5f98;
        func_0x00010bf37840();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c2b3dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c2aa520();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar22;
        func_0x00010c11ecc0(puVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x00010c2b66c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_1 + 0xb8;
        _objc_loadWeakRetained(puVar8);
        func_0x00010c14e120();
        puVar17 = puVar16;
        func_0x00010c2b78c0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010c2b81a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar18;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar8);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        puVar8 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_98 = puVar20;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15b620(puVar8);
      }
      goto LAB_106a33ab8;
    }
    puVar7 = puVar6;
    func_0x00010bf0cb40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010c08fa60();
    if (puVar20 == (undefined *)0x0) {
LAB_106a33e34:
      _objc_release(puVar7);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010bf1f440();
      _objc_release(puVar7);
      if (iVar1 != 0) {
        puVar20 = param_4;
        func_0x00010c1319e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar20;
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar14 = puVar6;
        func_0x00010bf0cb40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar13);
        puVar7 = param_1;
        func_0x00010be74440(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar20);
        uVar11 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar6;
        func_0x00010bf0cb40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_a8 = puVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15d840(uVar11);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar20);
        _objc_release(uVar11);
        goto LAB_106a33e34;
      }
    }
    puVar20 = PTR_PTR_1126b5f98;
    func_0x00010bf37840();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar20;
    func_0x00010c2b3dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2aa520();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010c11eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c11ecc0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010c2b66c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1 + 0xb8;
    _objc_loadWeakRetained(puVar7);
    func_0x00010c14e120();
    puVar17 = puVar16;
    func_0x00010c2b78c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b9c0(puVar6);
    puVar18 = puVar17;
    func_0x00010c2b81a0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2bade0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar19;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar7);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar20);
    puVar7 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b620(puVar7);
  }
  else {
    puVar22 = PTR_PTR_1126b5bd0;
    _objc_alloc(PTR_PTR_1126b5bd0);
    puVar7 = puVar6;
    func_0x00010c25a520(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010853bdd8();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b5bd8;
    func_0x00010c24bd60(PTR_PTR_1126b5bd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c00(puVar22);
    _objc_release(puVar12);
    _objc_release(puVar20);
    _objc_release(puVar7);
    puVar7 = *(undefined **)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_3;
    func_0x00010c25cd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c15cbe0(puVar7);
LAB_106a33ab0:
    _objc_release(puVar13);
LAB_106a33ab8:
    _objc_release(puVar12);
  }
  _objc_release(puVar20);
  _objc_release(puVar8);
LAB_106a33ad0:
  _objc_release(puVar7);
  _objc_release(puVar22);
  _objc_release(puStack_140);
  _objc_release(uStack_130);
  puVar7 = param_1 + 0xb8;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bf3c380();
  _objc_release(puVar7);
  puVar7 = param_1 + 0xb8;
  _objc_loadWeakRetained(puVar7);
  puVar8 = PTR_PTR_1126b6120;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010c26c4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04500(puVar7);
  }
  else {
    func_0x00010c26c4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf044c0(puVar7);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar9 = *(long *)(param_1 + 0xe0);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    if (lVar10 != 0) {
      _objc_initWeak(auStack_f0,param_1);
      uVar11 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_106a3452c;
      puStack_108 = &UNK_110841fb0;
      _objc_copyWeak(auStack_f8,auStack_f0);
      ppuVar21 = &puStack_120;
      puStack_100 = puVar6;
      func_0x00010007380c(uVar11,ppuVar21);
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      _objc_release(uVar11);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
    }
  }
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(&puStack_b8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(&puStack_b8);
  __Unwind_Resume(param_3);
  puVar7 = PTR_PTR_1126cfd68;
  _objc_retain(ppuVar21);
  _objc_alloc(puVar7);
  ppuVar5 = ppuVar21;
  func_0x00010c2923e0(ppuVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(ppuVar21);
  func_0x00010c078d00(ppuVar21);
  _objc_release(ppuVar21);
  func_0x00010c05b9a0(puVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a343e0; end: 106a3452b;  */

void FUN_106a343e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cfd68;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(param_2);
  func_0x00010c078d00(param_2);
  _objc_release(param_2);
  func_0x00010c05b9a0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a3452c; end: 106a345b3;  */

void FUN_106a3452c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257600(uVar2,param_2,uVar3,0,0,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a345b4; end: 106a3467b; -[SCChatInputTextObserverPlugin _handleChatDraftEvent:] */

void FUN_106a345b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a3467c;
  puStack_48 = &UNK_11084a518;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106a34688;
  puStack_70 = &UNK_1108450c8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bf0a0(uVar1,param_2,&puStack_60,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a3467c; end: 106a34693;  */

void FUN_106a3467c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed51b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateChatDraftForEvent__112592e10,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a34694; end: 106a3478f; -[SCChatInputTextObserverPlugin _fetchAndRestoreChatDraftForConversationId:] */

void FUN_106a34694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa5980(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a34790; end: 106a347d7;  */

void FUN_106a34790(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a347d8; end: 106a34af7; -[SCChatInputTextObserverPlugin _restoreChatDraft:] */

undefined * FUN_106a347d8(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = param_3;
  lStack_148 = param_1;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = param_3;
  puStack_140 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar5;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    do {
      param_3 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puStack_138);
        }
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uVar12 = *(undefined8 *)(lStack_128 + (long)param_3 * 8);
        func_0x00010c11f2a0(uVar12);
        func_0x00010c11f2a0(uVar12);
        func_0x00010c297300(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126cfd70;
        _objc_alloc(PTR_PTR_1126cfd70);
        uVar2 = uVar12;
        func_0x00010c2923e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11f2a0(uVar12);
        func_0x00010c11f2a0(uVar12);
        func_0x00010c078d00(uVar12);
        func_0x00010c05b9c0(puVar6);
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        _objc_release(uVar2);
        param_3 = param_3 + 1;
      } while (puVar5 != param_3);
      puVar5 = puStack_138;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puStack_138);
  puVar5 = puStack_140;
  puVar6 = puStack_140;
  func_0x00010c112720();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar7 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf0e540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf51e00(puVar4);
    puVar9 = puVar3;
    func_0x00010bf51e00(puVar3);
    puVar10 = puVar6;
    func_0x00010be95460(lStack_148);
  }
  else {
    puVar6 = (undefined *)(lStack_148 + 0xb8);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar5;
    func_0x00010bf0e540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c112720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf51e00(puVar4);
    puVar10 = puVar7;
    func_0x00010c1938e0(0x3ff0000000000000,puVar6);
    _objc_release(puVar8);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  puStack_168 = puVar5;
  pcStack_158 = FUN_106a34af8;
  puStack_170 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  func_0x00010c0c11e0(puVar10);
  bVar1 = *(byte *)(puStack_188 + 3);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(puVar10);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 106a34af8; end: 106a34bb7; -[SCChatInputTextObserverPlugin _isTeamSnapchatOneOnOneChatIdentifier:] */

undefined1 FUN_106a34af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c11e0(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106a34bb8; end: 106a34bf3;  */

void FUN_106a34bb8(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e12b38);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 106a34bf4; end: 106a34bf7;  */

void FUN_106a34bf4(void)

{
  return;
}



/* Entry: 106a34bf8; end: 106a34cf7; -[SCChatInputTextObserverPlugin _chatCommandsEligibleForChatIdentifier:] */

undefined8 FUN_106a34bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  func_0x00010c0c11e0(param_3);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0784a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106a34cf8; end: 106a34d33;  */

void FUN_106a34cf8(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 106a34d34; end: 106a34d37;  */

void FUN_106a34d34(void)

{
  return;
}



/* Entry: 106a34d38; end: 106a34e5b; -[SCChatInputTextObserverPlugin _chatCommandsForAttributedText:chatIdentifier:] */

void FUN_106a34d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010bddcd20(param_1,param_2,param_4);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (((int)param_1 != 0) &&
     (lVar1 = param_3, func_0x00010c08fa60(), puVar3 = PTR____NSArray0__struct_11034ab48, lVar1 != 0
     )) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cfd78;
    func_0x00010bf41da0(PTR_PTR_1126cfd78);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08fa60(param_3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a34e5c;
    puStack_40 = &UNK_1109545f0;
    puStack_38 = puVar2;
    _objc_retain(puVar2);
    func_0x00010bf97b00(param_3,param_2,puVar3,0,lVar1,0,&puStack_58);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a34e5c; end: 106a34f13;  */

void FUN_106a34e5c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  if ((uVar3 & 1) != 0) {
    uVar3 = param_2;
    func_0x00010c067fc0();
    lVar1 = 2;
    if ((int)uVar3 != 2) {
      lVar1 = 0;
    }
    if ((int)uVar3 == 1) {
      lVar1 = 1;
    }
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126cfd80;
      _objc_alloc(PTR_PTR_1126cfd80);
      func_0x00010bfffda0();
      func_0x00010befa120(uVar4);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a34f14; end: 106a34fa3; -[SCChatInputTextObserverPlugin _restoreAttributedString:mentions:coloredRanges:] */

void FUN_106a34f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13c1e0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c13c1c0(*(undefined8 *)(param_1 + 200),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a34fa4; end: 106a3521b; -[SCChatInputTextObserverPlugin _updateChatDraftForEvent:] */

void FUN_106a34fa4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0xe0);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar5);
    if (lVar1 == 0) {
      lVar5 = *(long *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      goto LAB_106a3512c;
    }
  }
  else {
    _objc_release(lVar5);
  }
  lVar1 = param_3;
  func_0x00010c0ca820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c112720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257600(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126cbbe8;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c112720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f80();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar4;
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_106a3512c:
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a3521c; end: 106a358db; -[SCChatInputTextObserverPlugin _platformAnalyticsForConversationInformation:replyAllGroupId:attributedText:userActionId:] */

void FUN_106a3521c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  puVar3 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0df180();
  puVar5 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010c0df160();
  puVar6 = puVar1;
  func_0x000108606910(puVar1,puVar2,puVar4,puVar19,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ca540(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x0001086066c4(uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar3 = param_3;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108606d64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010bf37160(param_3);
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2aa5a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aa640(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  if (puVar19 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b5f90;
    _objc_alloc(PTR_PTR_1126b5f90);
    puVar19 = param_3;
    func_0x00010bf4f080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004680(puVar5);
    _objc_release(puVar19);
    func_0x00010c2ab020(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = param_3;
  func_0x00010c06f6c0();
  if ((int)puVar5 != 0) {
    puVar5 = param_3;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar5 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar5;
      func_0x00010853bdd8();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar10;
      func_0x00010c08fa60();
      if (puVar19 == (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR_PTR_1126be938;
        _objc_alloc();
        puVar11 = puVar5;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar5;
        func_0x00010c25c580();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        func_0x00010c24b5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c22ab40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04dc60();
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      _objc_release(puVar10);
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
    if (puVar19 != (undefined *)0x0) {
      func_0x00010c2aaec0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar19);
  }
  puVar5 = param_3;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar19 != (undefined *)0x0) {
    lVar16 = *(long *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bfc07e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    if (lVar17 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010c25cd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar18;
      func_0x00010c080da0();
      _objc_release(uVar7);
      _objc_release(uVar18);
      if ((int)uVar8 != 0) {
        puVar5 = PTR_PTR_1126cfd88;
        _objc_alloc(PTR_PTR_1126cfd88);
        func_0x00010c0175c0();
        func_0x00010c2aed40(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a26c0();
      _objc_release(uVar7);
    }
    _objc_release(lVar17);
  }
  puVar5 = param_3;
  func_0x00010bfdb620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2af3e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (param_6 != 0) {
    func_0x00010c2b8220(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a358dc; end: 106a35907; -[SCChatInputTextObserverPlugin mentionBarWillPresent] */

void FUN_106a358dc(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a35908; end: 106a35933; -[SCChatInputTextObserverPlugin mentionBarDidStopPresenting] */

void FUN_106a35908(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a35934; end: 106a3595f; -[SCChatInputTextObserverPlugin chatCommandMenuWillPresent] */

void FUN_106a35934(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a35960; end: 106a3598b; -[SCChatInputTextObserverPlugin chatCommandMenuDidStopPresenting] */

void FUN_106a35960(long param_1)

{
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a3598c; end: 106a35b87; -[SCChatInputTextObserverPlugin .cxx_destruct] */

void FUN_106a3598c(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
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



/* Entry: 106a35b88; end: 106a35fe7; -[SCChatInputTextObserverPluginProvider initWithTextSender:storyReplySender:storyShareSender:groupFetcher:groupTracker:circumstanceEngine:messagingExperimentService:mentionsBarScopeExposer:chatCommandMenuScopeExposer:chatDraftMutator:chatThreatsScanner:snapchatterObservableRepository:blizzardLogger:sendObservabilityLogger:grapheneRegistry:valdiRuntimeProvider:aiStoryReplyLoggingHelper:lifecycleEvent:spotlightShareSender:chatMediaPreviewDataManager:teamSnapchatSendGateWorkflow:] */

undefined8 *
FUN_106a35b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f44a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 106a35fe8; end: 106a35fef; -[SCChatInputTextObserverPluginProvider providerType] */

undefined8 FUN_106a35fe8(void)

{
  return 2;
}



/* Entry: 106a35ff0; end: 106a35ff7; -[SCChatInputTextObserverPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_106a35ff0(void)

{
  return 0;
}



/* Entry: 106a35ff8; end: 106a360b3; -[SCChatInputTextObserverPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_106a35ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd90;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051ae0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a360b4; end: 106a361c7; -[SCChatInputTextObserverPluginProvider .cxx_destruct] */

void FUN_106a360b4(long param_1)

{
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



/* Entry: 106a361c8; end: 106a36a1f;  */

/* WARNING: Removing unreachable block (ram,0x000106a36408) */

void FUN_106a361c8(double param_1,undefined **param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  ppuVar14 = &PTR___NSConcreteGlobalBlock_1109546b0;
  lVar2 = param_3;
  func_0x000100504554(param_3);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_2;
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(ppuVar5);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  func_0x00010bf97b00(param_2);
  _objc_retain(puVar4);
  func_0x00010bf97b00(param_2);
  _objc_release(param_2);
  puVar6 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar5 = param_2;
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(ppuVar5);
  puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(ppuVar5);
  puVar7 = puVar4;
  func_0x00010c25cfa0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  if (lRam00000001136c4840 != -1) {
    ppuVar14 = &PTR___NSConcreteGlobalBlock_110954710;
    func_0x00010002a2fc(0x1136c4840);
  }
  uVar8 = uRam00000001136c4838;
  _objc_retain(uRam00000001136c4838);
  func_0x00010c08fa60(puVar7);
  uVar12 = uVar8;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar12;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar19 = *(undefined8 *)(lVar17 * 8);
      puVar7 = PTR_PTR_1126cfd98;
      _objc_opt_new(PTR_PTR_1126cfd98);
      puVar9 = PTR_PTR_1126c6a90;
      _objc_opt_new(PTR_PTR_1126c6a90);
      func_0x00010c11f2a0(uVar19);
      func_0x00010c1bf6c0(puVar9);
      func_0x00010c11f2a0(uVar19);
      func_0x00010c1ba840(puVar9);
      func_0x00010c1e6f40(puVar7);
      uVar12 = uVar19;
      func_0x00010c078d00();
      func_0x00010c2923e0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar12 == 0) {
        puVar10 = PTR_PTR_1126cfdc0;
        _objc_opt_new(PTR_PTR_1126cfdc0);
        uVar12 = uVar19;
        func_0x000106a36f94(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar10);
        _objc_release(uVar12);
        func_0x00010c1c6880(puVar7);
      }
      else {
        puVar10 = PTR_PTR_1126cfdb8;
        _objc_opt_new(PTR_PTR_1126cfdb8);
        uVar12 = uVar19;
        func_0x000106a36f94(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar10);
        _objc_release(uVar12);
        func_0x00010c1cda00(puVar7);
      }
      _objc_release(puVar10);
      _objc_release(uVar19);
      func_0x00010befa120(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar7);
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(param_3);
  ppuVar5 = param_2;
  func_0x00010c08fa60();
  _objc_retain(param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      ppuVar15 = ppuVar14;
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
        ppuVar15 = ppuVar14;
      }
      ppuVar20 = *(undefined ***)(lVar17 * 8);
      ppuVar11 = ppuVar20;
      func_0x00010c11f2a0();
      ppuVar14 = ppuVar15;
      func_0x00010bf41d80();
      if (((ppuVar15 != (undefined **)0x0 && ppuVar11 <= ppuVar5) &&
          ppuVar15 <= (undefined **)((long)ppuVar5 - (long)ppuVar11)) &&
          ((ulong)ppuVar11 | (ulong)ppuVar15) >> 0x20 == 0) {
        iVar18 = 2;
        if (ppuVar20 != (undefined **)0x2) {
          iVar18 = 0;
        }
        if (ppuVar20 == (undefined **)0x1) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          puVar9 = PTR_PTR_1126cfdc8;
          _objc_opt_new(PTR_PTR_1126cfdc8);
          func_0x00010c17ed20();
          puVar10 = PTR_PTR_1126cfd98;
          _objc_opt_new();
          func_0x000106a36c74(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e6f40(puVar10);
          _objc_release(ppuVar11);
          func_0x00010c17b020(puVar10);
          _objc_release(puVar9);
          ppuVar14 = ppuVar15;
          if (puVar10 != (undefined *)0x0) {
            func_0x00010befa120(puVar4);
            _objc_release(puVar10);
            ppuVar14 = ppuVar15;
          }
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar9 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(param_4);
  puVar4 = puVar6;
  func_0x00010c0d3c80(puVar6);
  ppuVar5 = param_2;
  func_0x00010c08fa60(param_2);
  if ((0.0 < param_1) && (param_1 != 1.0)) {
    puVar10 = PTR_PTR_1126cfd98;
    _objc_opt_new();
    uVar12 = 0;
    func_0x000106a36c74(0,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6f40(puVar10);
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126cfdd0;
    _objc_opt_new(PTR_PTR_1126cfdd0);
    func_0x00010c1f5fe0((double)(long)(param_1 * 100.0 + 0.5) / 100.0);
    func_0x00010c1f6000(puVar10);
    _objc_release(puVar13);
    ppuVar14 = ppuVar5;
    if (puVar10 != (undefined *)0x0) {
      func_0x00010befa120(puVar4);
      _objc_release(puVar10);
      ppuVar14 = ppuVar5;
    }
  }
  func_0x00010befa160(puVar4);
  func_0x00010befa160(puVar4);
  func_0x00010befa160(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    ppuVar5 = ppuVar14;
    func_0x00010c11f2a0(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010c297310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_valueWithRange__1126836e8,ppuVar14,ppuVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a36a20; end: 106a36a53;  */

void FUN_106a36a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar2 = param_2;
  func_0x00010c11f2a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c297310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithRange__1126836e8,param_2,uVar2);
  return;
}



/* Entry: 106a36a54; end: 106a36b63;  */

void FUN_106a36a54(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bfb3ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c265a80();
    _objc_release(uVar2);
    if (((uint)uVar3 >> 1 & 1) != 0) {
      uVar4 = param_3;
      FUN_106a36b64(param_3,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar4);
    }
    if ((uVar3 & 1) != 0) {
      FUN_106a36b64(param_3,param_4,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      _objc_release(param_3);
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a36b64; end: 106a36cc3;  */

void FUN_106a36b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfd98;
  _objc_opt_new(PTR_PTR_1126cfd98);
  func_0x000106a36c74(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6f40(puVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cfda0;
  _objc_opt_new(PTR_PTR_1126cfda0);
  func_0x00010c213400();
  func_0x00010c19ec60(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a36cc4; end: 106a36ebf;  */

void FUN_106a36cc4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c13cde0();
  puVar6 = param_2;
  if (puVar1 == (undefined *)0x10) {
    func_0x00010c11f2a0(param_2);
  }
  else {
    if (puVar1 == (undefined *)0x20) {
      puVar1 = param_2;
      func_0x00010c11f2a0(param_2);
      puVar2 = param_2;
      func_0x00010bdc2b80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cfd98;
      _objc_opt_new(PTR_PTR_1126cfd98);
      func_0x000106a36c74(puVar1,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6f40(puVar6);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126cfdb0;
      _objc_opt_new(PTR_PTR_1126cfdb0);
      puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      func_0x00010bf44780();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f6900(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar1);
      puVar5 = puVar4;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      if (puVar5 != (undefined *)0x0) {
        puVar1 = puVar5;
      }
      _objc_retain(puVar1);
      _objc_release(puVar5);
      puVar5 = puVar1;
      func_0x00010beec820(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c21afe0(puVar3);
      _objc_release(puVar5);
      func_0x00010c21b020(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_106a36e94;
    }
    if (puVar1 != (undefined *)0x800) {
      puVar6 = (undefined *)0x0;
      goto LAB_106a36e94;
    }
    func_0x00010c11f2a0(param_2);
  }
  FUN_106a36efc();
  _objc_retainAutoreleasedReturnValue();
LAB_106a36e94:
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a36ec0; end: 106a36efb;  */

void FUN_106a36ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x00010bf637c0(PTR__OBJC_CLASS___NSDataDetector_1126c36c8,param_2,0x830,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c4838;
  puRam00000001136c4838 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a36efc; end: 106a37027;  */

void FUN_106a36efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfd98;
  _objc_opt_new(PTR_PTR_1126cfd98);
  func_0x000106a36c74(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6f40(puVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cfda8;
  _objc_opt_new(PTR_PTR_1126cfda8);
  func_0x00010c213540();
  func_0x00010c1c4120(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a37028; end: 106a3711b; -[SCChatPasswordScannerWorkflow initWithPasswordScanner:presentingViewController:blizzardLogger:chatGrapheneLogger:] */

undefined1 *
FUN_106a37028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f44a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a3711c; end: 106a371fb; -[SCChatPasswordScannerWorkflow scanForPassword:completionBlock:] */

void FUN_106a3711c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c25cd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf6fa20();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (lVar3 == 0 && param_2 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,1,0,0);
    }
    else {
      func_0x00010bdd3100(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a371fc; end: 106a375ab; -[SCChatPasswordScannerWorkflow _beginAlertWorkflowWithRange:completionBlock:] */

void FUN_106a371fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5;
  _objc_retain();
  func_0x000106a37970();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar2;
  _objc_release(lVar1);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e67dd8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_a8;
  puStack_138 = puVar2;
  _objc_initWeak(puVar3,param_1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000106a37940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106a375ac;
  puStack_d0 = &UNK_110954730;
  _objc_copyWeak(auStack_c0,auStack_a8);
  _objc_retain(param_5);
  lStack_c8 = param_5;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126aed70;
  func_0x000106a37958();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar2;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106a376bc;
  puStack_110 = &UNK_110954730;
  puVar12 = auStack_a8;
  _objc_copyWeak(auStack_100,puVar12);
  _objc_retain(param_5);
  lStack_108 = param_5;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar7 = puVar6;
  func_0x000106a378f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x000106a37910();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000106a37928();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar5;
  puStack_98 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puStack_138;
  uStack_148 = 0;
  func_0x00010c01c460(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar7);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lStack_108);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar4);
  _objc_release(lStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a8);
  lVar11 = param_5;
  __Unwind_Resume();
  pcStack_158 = FUN_106a375ac;
  lStack_180 = param_1;
  puStack_178 = puVar10;
  lStack_170 = lVar1;
  lStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_copyWeak(auStack_198,lVar11 + 0x28);
  uVar13 = *(undefined8 *)(lVar11 + 0x20);
  _objc_retain(uVar13);
  uStack_188 = *(undefined8 *)(lVar11 + 0x38);
  uStack_190 = *(undefined8 *)(lVar11 + 0x30);
  func_0x00010bf84b00(puVar12);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar12);
  return;
}



/* Entry: 106a375ac; end: 106a37673;  */

void FUN_106a375ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106a37674; end: 106a376bb;  */

void FUN_106a37674(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be56e60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106a376b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),1,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106a376bc; end: 106a37783;  */

void FUN_106a376bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106a37784; end: 106a377cb;  */

void FUN_106a37784(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be56e60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106a377c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106a377cc; end: 106a378b3; -[SCChatPasswordScannerWorkflow _logPasswordDetected:] */

void FUN_106a377cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126cfdd8;
  _objc_opt_new(PTR_PTR_1126cfdd8);
  func_0x00010c226ca0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b2950;
  func_0x00010c0f52a0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e67db8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a378b4; end: 106a378f7; -[SCChatPasswordScannerWorkflow .cxx_destruct] */

void FUN_106a378b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a378f8; end: 106a37987;  */

void FUN_106a378f8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e67df8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e67df8,
                      &PTR____CFConstantStringClassReference_110e67e18,0);
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



/* Entry: 106a37988; end: 106a37b53; -[SCChatMentionsBarPresenter initWithScopeExposer:mentionsManager:textInputObservable:textEditingEvents:mentionsPersonDataSource:delegate:valdiRuntimeProvider:container:getNonParticipantObservableCallback:] */

undefined1 *
FUN_106a37988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f44b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 106a37b54; end: 106a37cdb; -[SCChatMentionsBarPresenter presentChatMentionBar] */

void FUN_106a37b54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar4 = &puStack_80;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110954780);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfad7a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106a37cdc;
    puStack_68 = &UNK_11086d9b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retainBlock(&puStack_80);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x00010be7a980(param_1);
    }
    _objc_release(uVar2);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106a37cdc; end: 106a37d23;  */

void FUN_106a37cdc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a37d24; end: 106a37e0b; -[SCChatMentionsBarPresenter _presentChatMentionBarWithMentionsTextObservable:sendMessageObservable:composerRuntime:didScopeBegin:] */

void FUN_106a37d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126c91b8;
  _objc_alloc();
  func_0x00010c0518e0();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a37e0c; end: 106a37e77; -[SCChatMentionsBarPresenter dismissChatMentionBar] */

void FUN_106a37e0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar1);
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106a37e78; end: 106a37f13; -[SCChatMentionsBarPresenter didSelectMentionPerson:replacementRange:] */

void FUN_106a37e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a37f14;
  puStack_58 = &UNK_110844fe0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a37f14; end: 106a37fcf;  */

void FUN_106a37f14(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c294420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2916e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c153c00(uVar5);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c078d00();
  func_0x00010bef9c60(uVar6,param_2,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),uVar5,uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a37fd0; end: 106a37ffb; -[SCChatMentionsBarPresenter willShowMentionBar] */

void FUN_106a37fd0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ca4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a37ffc; end: 106a38027; -[SCChatMentionsBarPresenter didHideMentionBar] */

void FUN_106a37ffc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ca480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a38028; end: 106a3802b; -[SCChatMentionsBarPresenter didDismissMerlinOnboarding] */

void FUN_106a38028(void)

{
  return;
}



/* Entry: 106a3802c; end: 106a38033; -[SCChatMentionsBarPresenter _observeSearchMetrics:] */

void FUN_106a3802c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e1050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_observeSearchMetrics__112615e28);
  return;
}



/* Entry: 106a38034; end: 106a380bf; -[SCChatMentionsBarPresenter .cxx_destruct] */

void FUN_106a38034(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a380c0; end: 106a3819f;  */

void FUN_106a380c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c91c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0e1ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28d600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010befcde0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35460(param_2);
  _objc_release(param_2);
  func_0x00010c0310a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a381a0; end: 106a3826b;  */

undefined1 FUN_106a381a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd4c0(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106a3826c; end: 106a382b7;  */

void FUN_106a3826c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a382b8; end: 106a382c3;  */

undefined * FUN_106a382b8(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 106a382c4; end: 106a383b3; -[SCChatMentionsManager initWithInputViewController:textInputObservable:] */

undefined1 *
FUN_106a382c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f44b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a383b4; end: 106a38403; -[SCChatMentionsManager mentionsStream] */

void FUN_106a383b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2519e0(uVar1,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a38404; end: 106a384cf; -[SCChatMentionsManager startObservingTextInput] */

void FUN_106a38404(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a384d0; end: 106a38517;  */

void FUN_106a384d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be826c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a38518; end: 106a3851f; -[SCChatMentionsManager stopObservingTextInput] */

void FUN_106a38518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106a38520; end: 106a38537; -[SCChatMentionsManager mentions] */

void FUN_106a38520(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a38538; end: 106a38777; -[SCChatMentionsManager addMentionForUserId:username:userColor:replacementRange:searchMode:isNonParticipant:] */

void FUN_106a38538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e460d8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar5;
  func_0x00010bf6d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uStack_88 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uStack_80 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_78 = param_5;
  lStack_70 = lVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,puVar1,puVar4);
  _objc_release(puVar4);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c066660();
  _objc_release(lVar5);
  func_0x00010c08fa60(puVar1);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c13c2e0();
  _objc_release(lVar5);
  func_0x00010c08fa60(param_4);
  _objc_release(param_4);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126cfd70;
  _objc_alloc(PTR_PTR_1126cfd70);
  func_0x00010c05b9c0();
  _objc_release(param_3);
  func_0x00010befa120(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(*(undefined8 *)(puVar1 + 0x10),param_2,lVar5);
    func_0x00010c0d9840(*(undefined8 *)(puVar1 + 0x20),param_2,*(undefined8 *)(puVar1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106a38778; end: 106a387c7; -[SCChatMentionsManager restoreAllMentions:] */

void FUN_106a38778(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a387c8; end: 106a387ff; -[SCChatMentionsManager removeAllMentions] */

void FUN_106a387c8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 106a38800; end: 106a3899f; -[SCChatMentionsManager _deleteMentionsInRange:state:textToAdd:] */

void FUN_106a38800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_6);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c159e80();
  _objc_release(lVar1);
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106a389a0;
  puStack_a0 = &UNK_110954860;
  lStack_98 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_3;
  uStack_78 = param_4;
  puStack_68 = puStack_90;
  func_0x0001006372a4(uVar2,&puStack_b8);
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(char *)(puStack_68 + 3) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c067100();
    _objc_release(lVar1);
    func_0x00010c08fa60(param_6);
    func_0x00010c08fa60();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1fb500();
    _objc_release(lVar1);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_6);
  return;
}



/* Entry: 106a389a0; end: 106a38a7f;  */

byte FUN_106a389a0(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x30) == 2) {
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar2 = param_2;
    func_0x00010c11f2a0();
    bVar1 = uVar2 <= uVar5 && uVar5 - uVar2 < uVar4;
  }
  else {
    bVar1 = false;
  }
  func_0x00010c11f2a0(param_2);
  _NSIntersectionRange();
  bVar1 = (bool)(uVar4 != 0 | bVar1);
  if (bVar1) {
    func_0x00010c11f2a0(param_2);
    _NSUnionRange();
    lVar3 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c13c2e0();
    _objc_release(lVar3);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  _objc_release(param_2);
  return bVar1 ^ 1;
}



/* Entry: 106a38a80; end: 106a38b6b; -[SCChatMentionsManager _offsetMentionsGivenInputEvent:] */

void FUN_106a38a80(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010befcde0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    func_0x00010bf35460(param_3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf35460();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc0000000;
    pcStack_50 = FUN_106a38b6c;
    puStack_48 = &UNK_110954890;
    lStack_40 = lVar1;
    lStack_38 = lVar2 - param_2;
    func_0x000100504554(uVar4,&puStack_60);
    uVar3 = uVar4;
    func_0x00010c0d3c80();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a38b6c; end: 106a38c57;  */

void FUN_106a38b6c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = *(undefined **)(param_1 + 0x20);
  puVar1 = param_2;
  func_0x00010c11f2a0();
  if (puVar1 < puVar2) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    func_0x00010c11f2a0(param_2);
    puVar1 = PTR_PTR_1126cfd70;
    _objc_alloc(PTR_PTR_1126cfd70);
    puVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f2a0(param_2);
    func_0x00010c153c00(param_2);
    func_0x00010c078d00(param_2);
    func_0x00010c05b9c0(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a38c58; end: 106a38d1f; -[SCChatMentionsManager _processTextInputChange:] */

void FUN_106a38c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 - 2U < 2) {
    func_0x00010bf35460(param_3);
    func_0x00010c252440(param_3);
    lVar1 = param_3;
    func_0x00010befcde0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa340(param_1);
    _objc_release(lVar1);
    func_0x00010be67400(param_1);
  }
  else if ((lVar1 == 1) || (lVar1 == 4)) {
    func_0x00010c12ada0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a38d20; end: 106a38dfb; -[SCChatMentionsManager observeSearchMetrics:] */

void FUN_106a38d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a38dfc; end: 106a38e43;  */

void FUN_106a38dfc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a38e44; end: 106a38e73; -[SCChatMentionsManager _updateMentionSearchMetrics:] */

void FUN_106a38e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a38e74; end: 106a38e7b; -[SCChatMentionsManager mentionSearchMetrics] */

undefined8 FUN_106a38e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106a38e7c; end: 106a38ed7; -[SCChatMentionsManager .cxx_destruct] */

void FUN_106a38e7c(long param_1)

{
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



/* Entry: 106a38ed8; end: 106a38fc3; -[SCChatCommandMenuTextInputEvent initWithOldText:updatedText:addedText:changedRange:] */

undefined1 *
FUN_106a38ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f44c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a38fc4; end: 106a38fe7; -[SCChatCommandMenuTextInputEvent copyWithZone:] */

undefined8 FUN_106a38fc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a38fe8; end: 106a3906f; -[SCChatCommandMenuTextInputEvent hash] */

undefined8 * FUN_106a38fe8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106a3912c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106a39138;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      puVar6 = (undefined1 *)0x0;
      if ((*(long *)((long)puVar3 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)((long)puVar3 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_106a39138;
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106a39138;
          }
          goto LAB_106a3912c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106a39138:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106a39070; end: 106a39153; -[SCChatCommandMenuTextInputEvent isEqual:] */

long FUN_106a39070(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a3912c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a39138;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_106a39138;
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106a39138;
          }
          goto LAB_106a3912c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a39138:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a39154; end: 106a3915b; -[SCChatCommandMenuTextInputEvent oldText] */

undefined8 FUN_106a39154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


