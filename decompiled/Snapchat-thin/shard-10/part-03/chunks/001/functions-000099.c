/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107edb9f0; end: 107edbf33;  */

undefined * FUN_107edb9f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar3);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  iVar11 = (int)param_2;
  if (lVar2 != 0) {
    uVar14 = 0;
    do {
      puVar4 = PTR_PTR_1126bc7f8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = puVar4;
      func_0x00010c0fd8c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar10);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126bf8e8;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar6 = puVar5;
      func_0x00010c0fd8e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar4);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126bf8f0;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar7 = puVar6;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar14 = uVar14 + 1;
      uVar8 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
      iVar11 = (int)param_2;
    } while (uVar14 < uVar8);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar5 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7c00();
    puVar6 = puVar10;
    func_0x00010bf51e00();
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x58));
    func_0x00010bfed320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  func_0x00010bddefa0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be85f20(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)(*(long *)(puVar10 + 0x20) + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(*(undefined8 *)(puVar10 + 0x28));
  func_0x00010bf529e0(*(undefined8 *)(puVar10 + 0x30));
  func_0x00010c0a1680(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar9);
  func_0x00010bddd720(*(undefined8 *)(puVar10 + 0x20));
  lVar2 = 0x30;
  if (iVar11 == 0) {
    lVar2 = 0x38;
  }
  lVar13 = *(long *)(puVar10 + lVar2);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      uVar15 = *(undefined8 *)(lVar16 * 8);
      uVar9 = *(undefined8 *)(*(long *)(puVar10 + 0x20) + 8);
      func_0x00010bf3e200(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080194b4(uVar15,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(*(long *)(puVar10 + 0x20) + 0x40);
      func_0x00010c279ee0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12bce0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(uVar9);
      lVar16 = lVar16 + 1;
    } while (lVar2 != lVar16);
    lVar2 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  func_0x00010bf3e4e0(*(undefined8 *)(*(long *)(puVar10 + 0x20) + 0xd0));
  puVar10 = *(undefined **)(puVar10 + 0x20);
  func_0x00010becf300(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126bc7e0;
  puVar5 = puVar10;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar10 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52cc0(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  return (undefined *)(ulong)(puVar4 != (undefined *)0x0);
}



/* Entry: 107edbf34; end: 107edbfb3; -[SCCloudSync _hasPendingOperations] */

bool FUN_107edbf34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126bc7e0;
  lVar1 = param_1;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52cc0(puVar3,param_2,lVar1,0,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 107edbfb4; end: 107edc07f; -[SCCloudSync _uploadNotNeededForOperation:tacomaEnabled:pendingOperationSnapshot:] */

ulong FUN_107edbfb4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x58);
  func_0x00010c1356e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_107f16538(uVar3,param_4,param_5);
  _objc_release(param_5);
  uVar2 = 0;
  if ((param_3 != 0) && ((uVar3 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bf879c0();
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1ef00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf00480(param_3);
      _objc_release(uVar1);
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107edc080; end: 107edc0db; -[SCCloudSync _checkToUploadWithServiceTerm:] */

void FUN_107edc080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be343c0();
  if ((int)uVar1 == 0) {
    uVar1 = 7;
  }
  else {
    func_0x00010bddd500(param_1);
    uVar1 = 3;
  }
  func_0x00010becf300(0,param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107edc0dc; end: 107edc17f; -[SCCloudSync _checkIfSyncRequiredBeforeTransition:] */

void FUN_107edc0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb5660();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c252d60();
    if (lVar1 == 7) {
      puVar2 = PTR_PTR_1126d8218;
      func_0x00010bf69ba0(PTR_PTR_1126d8218);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95760(param_3,param_2,puVar2);
      _objc_release(puVar2);
      goto LAB_107edc140;
    }
    if (lVar1 != 3) goto LAB_107edc140;
    uVar3 = 4;
  }
  else {
    uVar3 = 6;
  }
  func_0x00010becf300(0,param_1,param_2,uVar3,param_3);
LAB_107edc140:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107edc180; end: 107edc31b; -[SCCloudSync _checkBackgroundMediaUploadStatus] */

void FUN_107edc180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010bf00300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107edc31c;
    puStack_80 = &UNK_110848ba8;
    lStack_78 = lVar3;
    lStack_70 = param_1;
    _objc_retain(lVar2);
    uVar8 = *(undefined8 *)(param_1 + 8);
    lStack_68 = lVar2;
    _objc_retain(lVar3);
    func_0x00010c0f98a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107edc548;
    puStack_a8 = &UNK_110858d00;
    uStack_a0 = uVar7;
    _objc_retain(uVar7);
    func_0x00010c0f8520(uVar4,param_2,&puStack_98,uVar6,&puStack_c0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uStack_a0);
    _objc_release(lStack_68);
    _objc_release(lStack_78);
    _objc_release(uVar7);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107edc31c; end: 107edc547;  */

void FUN_107edc31c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar4 = PTR_PTR_1126bc810;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar8 = (int)param_2;
  while (puVar5 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar3 = *(undefined8 *)((long)puVar11 * 8);
      puVar6 = PTR_PTR_1126bc818;
      func_0x00010bf35140(PTR_PTR_1126bc818);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf19aa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      _objc_release(uVar10);
      _objc_release(uVar3);
      func_0x00010c16ffa0(puVar6);
      puVar2 = PTR_PTR_1126b24e0;
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
      func_0x00010c0b3760(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010bfcdfa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb0460(puVar2);
      _objc_release(uVar10);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      puVar11 = puVar11 + 1;
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    iVar8 = (int)param_2;
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar4 + 0x20),PTR_s_clearTaskResults_1125aca78);
    return;
  }
  return;
}



/* Entry: 107edc548; end: 107edc557;  */

void FUN_107edc548(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_clearTaskResults_1125aca78);
    return;
  }
  return;
}



/* Entry: 107edc558; end: 107edd14f; -[SCCloudSync _uploadWithServiceTerm:] */

void FUN_107edc558(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puStack_258;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  uVar18 = param_1;
  func_0x00010be41400();
  if ((uVar18 & 1) != 0) goto LAB_107edd100;
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined *)0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0809e0();
  func_0x00010be1ef40(param_1);
  puVar3 = puStack_80;
  _objc_retain(puStack_80);
  puVar16 = puStack_88;
  _objc_retain(puStack_88);
  _objc_release(uVar12);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bc7e0;
  if ((puVar3 == (undefined *)0x0) || (puVar16 == (undefined *)0x0)) {
    uVar18 = param_1;
    func_0x00010be1f660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar12);
    _objc_release(uVar18);
    puVar19 = PTR_PTR_1126c3198;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0f6420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c1356e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar16 = puVar19;
      puVar3 = puVar2;
      if (puVar19 != (undefined *)0x0) goto LAB_107edc6e8;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107edd150;
      puStack_a0 = &UNK_110841f80;
      uVar11 = *(undefined8 *)(param_1 + 8);
      uStack_98 = param_1;
      puStack_90 = puVar2;
      _objc_retain(puVar2);
      func_0x00010c0f98a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar12;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = puVar16;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_107edd1d8;
      puStack_d0 = &UNK_1108bbd78;
      uStack_c8 = param_1;
      _objc_retain(param_3);
      uStack_c0 = param_3;
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(uStack_c0);
      puVar16 = puStack_90;
      goto LAB_107edd0f4;
    }
    func_0x00010becf300(0,param_1);
  }
  else {
LAB_107edc6e8:
    puVar2 = puVar3;
    puVar3 = puVar16;
    func_0x00010c1356e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0c8940(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar12;
    func_0x00010c0809e0();
    _objc_release(uVar12);
    _objc_release(uVar5);
    uVar18 = *(ulong *)(param_1 + 0x58);
    puVar19 = puVar2;
    func_0x00010c1356e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_107f16538(uVar18,uVar1,puVar19);
    _objc_release(puVar19);
    if (((uVar18 & 1) == 0) &&
       (puVar19 = puVar16, func_0x00010c27dd80(), puVar19 == (undefined *)0x2)) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf3e200();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b3760(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0f98a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar16;
      func_0x00010c114520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(uVar9);
      _objc_release(uVar1);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar12);
      _objc_release(uVar6);
      puVar19 = puVar4;
      func_0x00010bf529e0();
      if (puVar19 == (undefined *)0x2) {
        puVar19 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puStack_258 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar19;
        func_0x00010bf529e0();
        if (puVar10 != (undefined *)0x0) {
          puVar10 = puVar16;
          func_0x00010bf97260(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bebc740(param_1);
          _objc_release(puVar10);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_108 = 0xc2000000;
          pcStack_100 = FUN_107edd1ec;
          puStack_f8 = &UNK_110842e18;
          _objc_retain(puVar4);
          uVar11 = *(undefined8 *)(param_1 + 8);
          puStack_f0 = puVar4;
          func_0x00010c0f98a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar12;
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f8520(uVar5);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar5);
          _objc_release(puStack_f0);
        }
      }
      else {
        puStack_258 = (undefined *)0x0;
        puVar19 = (undefined *)0x0;
      }
      _objc_release(puVar4);
    }
    else {
      puStack_258 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010c079420();
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar1);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar16;
      func_0x00010c27dd80();
      if (puVar4 < (undefined *)0xd) {
        if ((1L << ((ulong)puVar4 & 0x3f) & 0x1ca5U) == 0) {
          lVar15 = *(long *)(param_1 + 0xc0);
          func_0x00010c13f560();
          if (2 < lVar15) {
            puVar4 = puVar16;
            func_0x00010c0ac020(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2cd8,
                                &PTR____CFConstantStringClassReference_110ec2cf8,puVar4,
                                *(undefined8 *)(param_1 + 0x78));
            _objc_release(puVar4);
          }
          func_0x00010bfec260(*(undefined8 *)(param_1 + 0xc0));
          func_0x00010becf300(0,param_1);
        }
        else {
          func_0x00010be6a840(param_1);
        }
      }
    }
    else {
      _objc_retain();
      uVar12 = *(undefined8 *)(param_1 + 0xf8);
      *(undefined **)(param_1 + 0xf8) = puVar16;
      _objc_release(uVar12);
      puVar4 = puVar16;
      func_0x00010c137b40();
      if ((((uint)uVar18 | (uint)puVar4 ^ 0xffffffff) & 1) == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0xd0);
        puVar4 = puVar16;
        FUN_107eedfd4(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        FUN_107eee018(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e360(uVar12);
        _objc_release(puVar10);
        _objc_release(puVar4);
      }
      func_0x00010c1238a0(puVar16);
      _objc_initWeak(auStack_118,puVar16);
      _objc_initWeak(auStack_120,param_1);
      puVar4 = puVar16;
      func_0x000107eee0f0();
      if ((int)puVar4 == 0) {
        ppuVar17 = (undefined **)0x0;
      }
      else {
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0xc2000000;
        pcStack_140 = FUN_107edd234;
        puStack_138 = &UNK_110a0c320;
        _objc_copyWeak(auStack_130,auStack_120);
        _objc_copyWeak(auStack_128,auStack_118);
        ppuVar17 = &puStack_150;
        _objc_retainBlock();
        _objc_destroyWeak(auStack_128);
        _objc_destroyWeak(auStack_130);
      }
      if ((uint)uVar18 == 0) {
        func_0x00010c13f560();
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar16);
        _objc_retain(puVar3);
        _objc_retain(puVar2);
        _objc_retain(param_3);
        _objc_retain(puVar16);
        _objc_retain(puVar3);
        _objc_retain(puVar19);
        _objc_retain(puStack_258);
        _objc_retain(puVar2);
        _objc_retain(param_3);
        puVar4 = puVar16;
        func_0x00010c12a4e0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_release(uVar12);
        puVar10 = puVar4;
        func_0x00010c268560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0f98a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c0e0ec0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar16);
        _objc_retain(puVar3);
        _objc_retain(puVar19);
        _objc_retain(puStack_258);
        _objc_retain(puVar2);
        _objc_retain(param_3);
        puVar14 = puVar13;
        func_0x00010c25ff60(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(uVar12);
        _objc_release(uVar1);
        _objc_release(puVar10);
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(puStack_258);
        _objc_release(puVar19);
        _objc_release(puVar3);
        _objc_release(puVar16);
        _objc_release(puVar4);
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(puStack_258);
        _objc_release(puVar19);
        _objc_release(puVar3);
        _objc_release(puVar16);
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(puVar3);
        _objc_release(puVar16);
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0xf8);
        *(undefined8 *)(param_1 + 0xf8) = 0;
        _objc_release(uVar12);
        func_0x00010becf300(0x41224f8000000000,param_1);
      }
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_118);
      _objc_release(ppuVar17);
    }
    _objc_release(puStack_258);
    _objc_release(puVar19);
    _objc_release(puVar3);
LAB_107edd0f4:
    _objc_release(puVar16);
    puVar16 = puVar2;
  }
  _objc_release(puVar16);
LAB_107edd100:
  _objc_release(param_3);
  return;
}



/* Entry: 107edd150; end: 107edd1d7;  */

void FUN_107edd150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(puVar2 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(puVar2 + 0x28));
  return;
}



/* Entry: 107edd1d8; end: 107edd1eb;  */

void FUN_107edd1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107edd1ec; end: 107edd233;  */

void FUN_107edd1ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc838;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b8a0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107edd234; end: 107edd36b;  */

void FUN_107edd234(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained();
    if (param_2 != 0) {
      uVar5 = *(undefined8 *)(uVar1 + 0x100);
      lVar2 = param_2;
      FUN_107eedfd4(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar5,param_3,lVar2);
      _objc_release(lVar2);
      if ((((int)uVar5 != 0) && (uVar3 = uVar1, func_0x00010be41400(), (uVar3 & 1) == 0)) &&
         (lVar2 = param_2, func_0x00010c137b40(), puVar4 = PTR_PTR_1126d82b0, (int)lVar2 != 0)) {
        lVar2 = param_2;
        FUN_107eedfd4(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c283b00(param_1,puVar4,param_3,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010c0d9840(*(undefined8 *)(uVar1 + 0x60),param_3,puVar4);
        uVar5 = *(undefined8 *)(uVar1 + 0xd0);
        lVar2 = param_2;
        FUN_107eedfd4(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e3a0(param_1,uVar5,param_3,uVar1,lVar2);
        _objc_release(lVar2);
        _objc_release(puVar4);
      }
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107edd36c; end: 107edd383;  */

void FUN_107edd36c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleFailureForSyncOperation_e_112567eb8,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 107edd384; end: 107edd3bb;  */

void FUN_107edd384(long param_1,undefined8 param_2)

{
  func_0x00010be31640(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 107edd3bc; end: 107edd54b;  */

void FUN_107edd3bc(long param_1,undefined8 param_2)

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
  undefined1 auVar10 [16];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  auVar10 = *(undefined1 (*) [16])(param_1 + 0x20);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar9);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(auVar10._8_8_);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107edd54c; end: 107edd5bf;  */

void FUN_107edd54c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be31640(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107edd5c0; end: 107edd5d7;  */

void FUN_107edd5c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be30dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleStepFailureForSyncOperati_112569d10,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 107edd5d8; end: 107edd993; -[SCCloudSync _handleSuccessForSyncOperation:requestID:entryUpdateMap:deleteOperationsBeforeSync:deleteOperationsAfterSync:syncOperationSnapshot:serviceTerm:] */

void FUN_107edd5d8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c137b40();
  if ((int)lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    lVar2 = param_3;
    FUN_107eedfd4(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    FUN_107eee018(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e360(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  uVar4 = param_1;
  func_0x00010be41400();
  if ((uVar4 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      lVar2 = param_7;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        lVar2 = param_3;
        func_0x00010bf97260(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bebc740(param_1);
        _objc_release(lVar2);
      }
    }
    else {
      func_0x00010c15e520(param_8);
      func_0x00010bed6c40(param_1);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
    func_0x00010c12c760(*(undefined8 *)(param_1 + 0xc0));
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_107ed6ff8;
    uStack_88 = 0x107ed7008;
    uStack_80 = 0;
    uVar4 = param_1;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c0f8520(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107edd994; end: 107eddac7;  */

void FUN_107edd994(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf428a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_2 + 0x58) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar11;
  _objc_release(uVar9);
  _objc_release(uVar1);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar11);
  _objc_release(puVar2);
  lVar10 = *(long *)(param_2 + 0x40);
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x00010bdfa900(*(undefined8 *)(param_2 + 0x30));
  }
  lVar10 = *(long *)(param_2 + 0x40);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_2 + 0x48);
  func_0x00010bf529e0();
  if (lVar10 + lVar3 != 0) {
    func_0x00010bddefa0(*(undefined8 *)(param_2 + 0x30));
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010be85f20();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(lVar3 + 0x20);
  func_0x00010be41400();
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    uVar11 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 8);
    func_0x00010bf3e200(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a640(uVar11);
    _objc_release(uVar1);
    _objc_release(uVar9);
    func_0x00010bf3e4e0(*(undefined8 *)(*(long *)(lVar3 + 0x20) + 0xd0));
    lVar10 = *(long *)(lVar3 + 0x30);
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(lVar3 + 0x30);
      func_0x00010bf59960(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar2);
      uVar11 = param_1;
      _objc_release(uVar1);
      _objc_release(puVar2);
      lVar10 = *(long *)(lVar3 + 0x28);
      func_0x00010c0ebae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(lVar3 + 0x28);
        func_0x00010c0ebae0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar2);
        _objc_release(uVar1);
        _objc_release(puVar2);
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 8);
      func_0x00010c0b3760(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(*(undefined8 *)(lVar3 + 0x28));
      puVar2 = PTR_PTR_1126bc7e0;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      func_0x00010be1f660(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x28);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52cc0(puVar2);
      uVar7 = *(undefined8 *)(lVar3 + 0x28);
      func_0x00010bf35480(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06cf80(*(undefined8 *)(lVar3 + 0x20));
      func_0x00010c0a6940(param_1,uVar11,uVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(lVar3 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(lVar3 + 0x38));
  return;
}



/* Entry: 107eddac8; end: 107eddd7b;  */

void FUN_107eddac8(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010be41400();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    func_0x00010bf3e200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a640(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010bf3e4e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0xd0));
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf59960(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar4);
      uVar9 = param_1;
      _objc_release(uVar5);
      _objc_release(puVar4);
      lVar3 = *(long *)(param_2 + 0x28);
      func_0x00010c0ebae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        uVar9 = 0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010c0ebae0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar4);
        _objc_release(uVar5);
        _objc_release(puVar4);
      }
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
      func_0x00010c0b3760(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(*(undefined8 *)(param_2 + 0x28));
      puVar4 = PTR_PTR_1126bc7e0;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010be1f660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52cc0(puVar4);
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf35480(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06cf80(*(undefined8 *)(param_2 + 0x20));
      func_0x00010c0a6940(param_1,uVar9,uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_2 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(param_2 + 0x38));
  return;
}



/* Entry: 107eddd7c; end: 107ede217; -[SCCloudSync _handleStepFailureForSyncOperation:cloudSyncStepError:requestID:syncOperationSnapshot:serviceTerm:] */

void FUN_107eddd7c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar1);
  uVar6 = param_1;
  func_0x00010be41400();
  if ((uVar6 & 1) != 0) goto LAB_107ede1d0;
  uVar1 = param_3;
  func_0x00010c137b40();
  if ((int)uVar1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0xd0);
    uVar1 = param_3;
    FUN_107eedfd4(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_107eee018(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e360(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = param_4;
  _objc_release(uVar1);
  puVar3 = param_4;
  func_0x000107f18788();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x000107f186c8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ac020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ac020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1740();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar6 = *(ulong *)(param_1 + 0xc0);
  func_0x00010c13f560();
  puVar7 = param_4;
  FUN_107f18810();
  puVar8 = param_4;
  if ((long)puVar7 < 3) {
    if (puVar7 == (undefined *)0x1) {
      dVar10 = (double)uVar6 + (double)uVar6;
      _exp2();
      dVar11 = (double)NEON_ucvtf((long)(dVar10 * 750.0));
      dVar10 = 86400000.0;
      if (dVar11 <= 86400000.0) {
        dVar10 = dVar11;
      }
      func_0x00010bf027e0();
      func_0x00010be5d2c0(dVar10,param_1);
    }
    else if (puVar7 == (undefined *)0x2) {
      FUN_107f187c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c0d7ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      dVar10 = (double)uVar6 + (double)uVar6;
      _exp2();
      dVar11 = (double)NEON_ucvtf((long)(dVar10 * 750.0));
      dVar10 = 86400000.0;
      if (dVar11 <= 86400000.0) {
        dVar10 = dVar11;
      }
      func_0x00010be2cbe0(dVar10,param_1);
      _objc_release(puVar7);
      goto LAB_107ede144;
    }
  }
  else if (puVar7 == (undefined *)0x3) {
    puVar7 = param_4;
    FUN_107f187c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d7ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    FUN_107ee77c4(*(undefined8 *)(param_1 + 0x80),uVar6);
    func_0x00010be2cbe0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    if (puVar7 == (undefined *)0x4) {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5d2a0(param_1);
    }
    else {
      if (puVar7 != (undefined *)0x5) goto LAB_107ede1b0;
      FUN_107f187c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be29460(param_1);
    }
LAB_107ede144:
    _objc_release(puVar8);
  }
LAB_107ede1b0:
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107ede1d0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ede218; end: 107edeb93; -[SCCloudSync _handleFailureForSyncOperation:error:requestID:syncOperationSnapshot:serviceTerm:loggingRetryCount:] */

/* WARNING: Possible PIC construction at 0x000107edeb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ede924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ede928) */
/* WARNING: Removing unreachable block (ram,0x000107edeb80) */

void FUN_107ede218(ulong param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  double dVar16;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010be41400();
  if ((uVar3 & 1) == 0) {
    puVar4 = param_3;
    func_0x00010c137b40();
    if ((int)puVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      puVar4 = param_3;
      FUN_107eedfd4();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      FUN_107eee018();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e360(uVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined ***)(param_1 + 0xd8) = param_4;
    _objc_release(uVar2);
    ppuVar14 = param_4;
    func_0x00010bf3ec40();
    if (ppuVar14 == (undefined **)0x138b) {
      uVar3 = param_1;
      func_0x00010beb42c0();
      if (((long)param_8 < 3) || ((uVar3 & 1) != 0)) {
        func_0x00010bdc1500();
        func_0x00010bf027e0();
LAB_107ede444:
        func_0x00010be5d2c0(param_1);
      }
      else {
        func_0x00010bdc1500(param_4);
        func_0x00010be5d2a0(param_1);
      }
    }
    else {
      ppuVar6 = param_4;
      func_0x00010bf3ec40();
      ppuVar14 = param_4;
      if (ppuVar6 == (undefined **)0x138a) {
        ppuVar6 = param_4;
        FUN_107eed718();
        ppuVar7 = param_4;
        func_0x00010c15fa80();
        if (ppuVar7 + -500 < (undefined **)0x3e8) {
          ppuVar6 = param_4;
          func_0x00010c0aa2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar6;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          func_0x00010c15fa80(param_4);
LAB_107edea34:
          func_0x00010be5d2a0(param_1);
        }
        else {
          ppuVar7 = param_4;
          func_0x00010c15fa80();
          if ((long)param_8 < 3 || ((ulong)ppuVar6 & 1) != 0) {
            if ((undefined **)0x3e7 < ppuVar7 + -0x271) {
              func_0x00010c15fa80();
              if (ppuVar14 != (undefined **)0x7d1) {
                uVar11 = *(undefined8 *)(param_1 + 8);
                func_0x00010c0b3760(uVar11);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar11;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c15fa80(param_4);
                func_0x00010c0df780(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf027e0(param_3);
                func_0x00010c0a16e0(uVar2);
                _objc_release(puVar4);
                _objc_release(uVar2);
                _objc_release(uVar11);
                func_0x00010bf148c0(param_4);
                uVar2 = 6;
                goto code_r0x00010becf300;
              }
              func_0x00010be2fe60(param_1);
              goto LAB_107edea44;
            }
            puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d8 = 0xc2000000;
            pcStack_d0 = FUN_107edf028;
            puStack_c8 = &UNK_110891e80;
            _objc_retain(param_4);
            ppuStack_c0 = param_4;
            uStack_b8 = param_1;
            uStack_98 = param_8;
            _objc_retain(param_3);
            puStack_b0 = param_3;
            _objc_retain(param_5);
            uStack_a8 = param_5;
            _objc_retain(param_7);
            ppuVar14 = &puStack_e0;
            uStack_a0 = param_7;
            _objc_retainBlock();
            ppuVar6 = param_4;
            func_0x00010c15fa80();
            if (ppuVar6 == (undefined **)0x138b) {
              ppuStack_90 = &PTR____CFConstantStringClassReference_110ec2dd8;
              puVar4 = param_3;
              func_0x00010c0ac020();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0();
                _objc_retainAutoreleasedReturnValue();
              }
              puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_88 = puVar5;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2d98,
                                  &PTR____CFConstantStringClassReference_110ec2db8,puVar15,
                                  *(undefined8 *)(param_1 + 0x78));
              _objc_release(puVar15);
              if (puVar4 == (undefined *)0x0) {
                _objc_release(puVar5);
              }
              _objc_release(puVar4);
              func_0x00010be923e0(param_1);
              uVar11 = *(undefined8 *)(param_1 + 8);
              func_0x00010bf3e200();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar11;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = *(undefined8 *)(param_1 + 0x50);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = param_3;
              func_0x000107eede0c(param_3,uVar2,uVar8,param_8);
              _objc_release(uVar8);
              _objc_release(uVar2);
              _objc_release(uVar11);
              if ((int)puVar4 != 0) {
                func_0x00010c15fa80(param_4);
                func_0x00010be5d2a0(param_1);
              }
            }
            else {
              (*(code *)ppuVar14[2])(ppuVar14);
            }
            _objc_release(ppuVar14);
            _objc_release(uStack_a0);
            _objc_release(uStack_a8);
            _objc_release(puStack_b0);
            ppuVar14 = ppuStack_c0;
          }
          else {
            if (ppuVar7 == (undefined **)0x7d1) {
              FUN_107edeb94();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              ppuVar14 = (undefined **)0x0;
            }
            func_0x00010c15fa80();
            func_0x00010c067fc0(ppuVar14);
            func_0x00010be5d2a0(param_1);
          }
        }
      }
      else {
        ppuVar6 = param_4;
        func_0x00010bf3ec40();
        if (ppuVar6 != (undefined **)0x1389) {
          func_0x00010bf3ec40();
          if (ppuVar14 == (undefined **)0x138c) {
            uVar11 = *(undefined8 *)(param_1 + 8);
            func_0x00010c0b3760();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar11;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf3ec40(param_4);
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf6f680(param_4);
            func_0x00010c0df780(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf027e0(param_3);
            func_0x00010c0a16e0(uVar2);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(uVar2);
            _objc_release(uVar11);
            if ((long)param_8 < 9) {
              dVar16 = (double)param_8 + (double)param_8;
              _exp2();
              NEON_ucvtf((long)(dVar16 * 750.0));
              uVar2 = 6;
              goto code_r0x00010becf300;
            }
            ppuVar6 = param_4;
            func_0x00010c0aa2a0(param_4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = &PTR____CFConstantStringClassReference_110ec2e18;
            func_0x00010c25ce40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            func_0x00010bf3ec40();
          }
          else {
            ppuVar14 = param_4;
            func_0x00010bf3ec40();
            if (ppuVar14 != (undefined **)0x138d) goto LAB_107edea44;
            ppuVar14 = param_4;
            FUN_107f05340();
            if (((long)param_8 < 3) && (((ulong)ppuVar14 & 1) != 0)) {
              dVar16 = (double)param_8 + (double)param_8;
              _exp2();
              NEON_ucvtf((long)(dVar16 * 750.0));
              func_0x00010c240540();
              func_0x00010bf6f680();
              func_0x00010bf027e0();
              goto LAB_107ede444;
            }
            ppuVar6 = param_4;
            func_0x00010c0aa2a0(param_4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = &PTR____CFConstantStringClassReference_110ec2e58;
            func_0x00010c25ce40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            func_0x00010c240540();
          }
          func_0x00010bf6f680(param_4);
          goto LAB_107edea34;
        }
        func_0x00010c0d7ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        dVar16 = (double)param_8 + (double)param_8;
        _exp2();
        NEON_ucvtf((long)(dVar16 * 750.0));
        func_0x00010be2cbe0(param_1);
      }
      _objc_release(ppuVar14);
    }
  }
LAB_107edea44:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar4 = param_3;
  func_0x00010c15fa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c15fa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar13 = *(long *)((long)puVar15 * 8);
        lVar9 = lVar13;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067fc0();
        _objc_release(lVar9);
        if ((lVar10 != 0xfa2) && (0xfffffffffffffc17 < lVar10 - 5000U)) goto LAB_107edefb4;
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  puVar4 = param_3;
  func_0x00010c15fa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c15fa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar13 = *(long *)((long)puVar15 * 8);
        lVar9 = lVar13;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067fc0();
        _objc_release(lVar9);
        if ((lVar10 != 0xfa2) && (0xfffffffffffffc17 < lVar10 - 5000U)) goto LAB_107edefb4;
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  puVar4 = param_3;
  func_0x00010c15fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c15fa40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar13 = *(long *)((long)puVar15 * 8);
        lVar9 = lVar13;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067fc0();
        _objc_release(lVar9);
        if ((lVar10 != 0xfa2) && (0xfffffffffffffc17 < lVar10 - 5000U)) goto LAB_107edefb4;
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  puVar4 = param_3;
  func_0x00010c15faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c15faa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar4 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar13 = *(long *)((long)puVar15 * 8);
        lVar9 = lVar13;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067fc0();
        _objc_release(lVar9);
        if ((lVar10 != 0xfa2) && (0xfffffffffffffc17 < lVar10 - 5000U)) goto LAB_107edefb4;
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar5;
      func_0x00010bf52a60();
    }
    lVar13 = 0;
    goto LAB_107edefc8;
  }
  lVar13 = 0;
  goto LAB_107edefd8;
LAB_107edefb4:
  func_0x00010c252ee0();
  _objc_retainAutoreleasedReturnValue();
LAB_107edefc8:
  _objc_release(puVar5);
  _objc_release(puVar5);
LAB_107edefd8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 8);
  func_0x00010c0b3760(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c15fa80(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf027e0(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c0a16e0(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar11);
  func_0x00010bfec260(*(undefined8 *)(*(long *)(param_3 + 0x28) + 0xc0));
  func_0x00010bf148c0(*(undefined8 *)(param_3 + 0x20));
  dVar16 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x48));
  dVar16 = dVar16 + dVar16;
  _exp2();
  NEON_ucvtf((long)(dVar16 * 750.0));
  param_1 = *(ulong *)(param_3 + 0x28);
  param_7 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = 1;
code_r0x00010becf300:
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__transitionToState_serviceTerm_b_112591668,uVar2,param_7);
  return;
}



/* Entry: 107edeb94; end: 107edf027;  */

void FUN_107edeb94(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c15fa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c15fa60();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar4 = lVar10;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067fc0();
        _objc_release(lVar4);
        if ((lVar5 != 0xfa2) && (0xfffffffffffffc17 < lVar5 - 5000U)) goto LAB_107edefb4;
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  lVar2 = param_2;
  func_0x00010c15fa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c15fa00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar4 = lVar10;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067fc0();
        _objc_release(lVar4);
        if ((lVar5 != 0xfa2) && (0xfffffffffffffc17 < lVar5 - 5000U)) goto LAB_107edefb4;
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  lVar2 = param_2;
  func_0x00010c15fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c15fa40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar4 = lVar10;
        func_0x00010c252ee0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067fc0();
        _objc_release(lVar4);
        if ((lVar5 != 0xfa2) && (0xfffffffffffffc17 < lVar5 - 5000U)) goto LAB_107edefb4;
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  lVar2 = param_2;
  func_0x00010c15faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar10 = 0;
    goto LAB_107edefd8;
  }
  lVar3 = param_2;
  func_0x00010c15faa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = 0.0;
  _objc_retain();
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar10 = *(long *)(lVar11 * 8);
      lVar4 = lVar10;
      func_0x00010c252ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c067fc0();
      _objc_release(lVar4);
      if ((lVar5 != 0xfa2) && (0xfffffffffffffc17 < lVar5 - 5000U)) goto LAB_107edefb4;
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  lVar10 = 0;
LAB_107edefc8:
  _objc_release(lVar3);
  _objc_release(lVar3);
LAB_107edefd8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 8);
  func_0x00010c0b3760(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c15fa80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf027e0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c0a16e0(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010bfec260(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0xc0));
  func_0x00010bf148c0(*(undefined8 *)(param_2 + 0x20));
  dVar12 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x48));
  dVar12 = dVar12 + dVar12;
  _exp2();
  dVar13 = (double)NEON_ucvtf((long)(dVar12 * 750.0));
  dVar12 = 86400000.0;
  if (dVar13 <= 86400000.0) {
    dVar12 = dVar13;
  }
  if (dVar12 <= param_1) {
    dVar12 = param_1;
  }
  dVar13 = 86400000.0;
  if (dVar12 <= 86400000.0) {
    dVar13 = dVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar13,*(undefined8 *)(param_2 + 0x28),PTR_s__transitionToState_serviceTerm_b_112591668
             ,1,*(undefined8 *)(param_2 + 0x40));
  return;
LAB_107edefb4:
  func_0x00010c252ee0();
  _objc_retainAutoreleasedReturnValue();
  goto LAB_107edefc8;
}



/* Entry: 107edf028; end: 107edf15b;  */

void FUN_107edf028(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 8);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c15fa80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf027e0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c0a16e0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfec260(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0xc0));
  func_0x00010bf148c0(*(undefined8 *)(param_2 + 0x20));
  dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x48));
  dVar4 = dVar4 + dVar4;
  _exp2();
  dVar5 = (double)NEON_ucvtf((long)(dVar4 * 750.0));
  dVar4 = 86400000.0;
  if (dVar5 <= 86400000.0) {
    dVar4 = dVar5;
  }
  if (dVar4 <= param_1) {
    dVar4 = param_1;
  }
  dVar5 = 86400000.0;
  if (dVar4 <= 86400000.0) {
    dVar5 = dVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar5,*(undefined8 *)(param_2 + 0x28),PTR_s__transitionToState_serviceTerm_b_112591668,
             1,*(undefined8 *)(param_2 + 0x40));
  return;
}



/* Entry: 107edf15c; end: 107edf837; -[SCCloudSync _handleServletPartialError:requestId:syncOperation:syncOperationSnapshot:retryCount:serviceTerm:] */

void FUN_107edf15c(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uStack_94 = 0;
  uStack_96 = 0;
  FUN_107eed7c8(param_4,(long)&uStack_94 + 2,(long)&uStack_94 + 3,(long)&uStack_94 + 1,&uStack_94,
                (long)&uStack_96 + 1,&uStack_96,0);
  uVar1 = uStack_96;
  if (uStack_94._2_1_ == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c15fa80(param_4);
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c067fc0(0);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf027e0(param_6);
    func_0x00010c0a16e0(uVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
LAB_107edf2dc:
    _objc_release(uVar3);
    func_0x00010bf148c0(param_4);
    func_0x00010becf300(param_2);
    func_0x00010bfec260(*(undefined8 *)(param_2 + 0xc0));
  }
  else {
    if (uStack_94._3_1_ == '\x01') {
      puVar9 = param_4;
      func_0x00010c0aa2a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c15fa80();
      func_0x00010c067fc0(0);
      func_0x00010be5d2a0(param_2);
    }
    else if (uStack_94._1_1_ == '\x01') {
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_107edf838;
      puStack_c0 = &UNK_11084c4a0;
      _objc_retain(param_4);
      puStack_b8 = param_4;
      lStack_b0 = param_2;
      _objc_retain(param_6);
      puStack_a8 = param_6;
      _objc_retain(param_9);
      ppuVar4 = &puStack_d8;
      uStack_a0 = param_9;
      _objc_retainBlock();
      if ((char)uStack_94 == '\x01') {
        ppuStack_90 = &PTR____CFConstantStringClassReference_110ec2dd8;
        puVar8 = param_6;
        func_0x00010c0ac020();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_88 = puVar9;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2d98,
                            &PTR____CFConstantStringClassReference_110ec2db8,puVar5,
                            *(undefined8 *)(param_2 + 0x78));
        _objc_release(puVar5);
        if (puVar8 == (undefined *)0x0) {
          _objc_release(puVar9);
        }
        _objc_release(puVar8);
        func_0x00010be923e0(param_2);
        uVar3 = *(undefined8 *)(param_2 + 8);
        func_0x00010bf3e200(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_2 + 0x50);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_6;
        func_0x000107eede0c(param_6,uVar7,uVar6,param_8);
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar3);
        if ((int)puVar8 != 0) {
          func_0x00010c15fa80(param_4);
          func_0x00010be5d2a0(param_2);
        }
      }
      else {
        (*(code *)ppuVar4[2])(ppuVar4);
      }
      _objc_release(ppuVar4);
      _objc_release(uStack_a0);
      _objc_release(puStack_a8);
      puVar8 = puStack_b8;
    }
    else {
      cVar2 = uStack_96._1_1_;
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c15fa80(param_4);
      func_0x00010c0df780(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c067fc0(0);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf027e0(param_6);
      if ((cVar2 != '\x01') || ((uVar1 & 1) != 0)) {
        func_0x00010c0a16e0(uVar7);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(uVar7);
        goto LAB_107edf2dc;
      }
      func_0x00010c0a16e0(uVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar3);
      func_0x00010c12c760(*(undefined8 *)(param_2 + 0xc0));
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_7);
      uVar10 = *(undefined8 *)(param_2 + 8);
      func_0x00010c0f98a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_9);
      func_0x00010c0f8520(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(param_9);
      _objc_release(param_7);
      puVar8 = param_6;
    }
    _objc_release(puVar8);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_4 + 0x30);
  uVar11 = *(ulong *)(*(long *)(param_4 + 0x28) + 0xc0);
  func_0x00010c1356e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f560();
  _objc_release(uVar7);
  func_0x00010bf148c0(*(undefined8 *)(param_4 + 0x20));
  dVar12 = (double)uVar11 + (double)uVar11;
  _exp2();
  dVar13 = (double)NEON_ucvtf((long)(dVar12 * 750.0));
  dVar12 = 86400000.0;
  if (dVar13 <= 86400000.0) {
    dVar12 = dVar13;
  }
  if (dVar12 <= param_1) {
    dVar12 = param_1;
  }
  dVar13 = 86400000.0;
  if (dVar12 <= 86400000.0) {
    dVar13 = dVar12;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010c1356e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fa80(*(undefined8 *)(param_4 + 0x20));
  func_0x00010bf6f680();
  func_0x00010bf027e0();
  func_0x00010be5d2c0(dVar13,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107edf838; end: 107edf95b;  */

void FUN_107edf838(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(ulong *)(*(long *)(param_2 + 0x28) + 0xc0);
  func_0x00010c1356e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f560(uVar6,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010bf148c0(*(undefined8 *)(param_2 + 0x20));
  dVar8 = (double)uVar6 + (double)uVar6;
  _exp2();
  dVar9 = (double)NEON_ucvtf((long)(dVar8 * 750.0));
  dVar8 = 86400000.0;
  if (dVar9 <= 86400000.0) {
    dVar8 = dVar9;
  }
  if (dVar8 <= param_1) {
    dVar8 = param_1;
  }
  dVar9 = 86400000.0;
  if (dVar8 <= 86400000.0) {
    dVar9 = dVar8;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c1356e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c15fa80(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf6f680();
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf027e0();
  func_0x00010be5d2c0(dVar9,uVar1,param_3,uVar2,uVar7,1,5,uVar6,uVar3,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107edf95c; end: 107edfb1b;  */

void FUN_107edf95c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf97260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      puVar5 = PTR_PTR_1126af4c0;
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126bc830;
      func_0x00010bf35080(PTR_PTR_1126bc830);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7a20();
      func_0x00010c1da4e0(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(puVar5 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(puVar5 + 0x28));
  return;
}



/* Entry: 107edfb1c; end: 107edfb2f;  */

void FUN_107edfb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107edfb30; end: 107edfc63; -[SCCloudSync _handleNetworkErrorForRequestId:syncOperation:syncOperationSnapshot:serviceTerm:retryPolicy:loggingNetworkErrorStatusCode:backOffTimeMillis:loggingRetryCount:] */

void FUN_107edfb30(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  if (86400000.0 <= param_1) {
    func_0x00010be5d2a0(param_2,param_3,param_5,param_6,param_7,0,0,
                        &PTR____CFConstantStringClassReference_110ec2e78,param_10,param_8);
    _objc_release(param_7);
  }
  else {
    dVar2 = (double)param_10 + (double)param_10;
    _exp2();
    dVar3 = (double)NEON_ucvtf((long)(dVar2 * 750.0));
    dVar2 = 86400000.0;
    if (dVar3 <= 86400000.0) {
      dVar2 = dVar3;
    }
    uVar1 = param_5;
    func_0x00010bf027e0();
    _objc_release(param_5);
    func_0x00010be5d2c0(dVar2,param_2,param_3,param_4,param_7,2,param_8,param_10,0,param_9,uVar1);
    param_5 = param_7;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107edfc64; end: 107edfdff; -[SCCloudSync _markCloudSyncFatalForSyncOperation:syncOperationSnapshot:serviceTerm:loggingStatusCode:loggingDetailsStatusCode:loggingErrorMessage:loggingRetryCount:retryPolicy:] */

void FUN_107edfc64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010be6a840(param_1,param_2,param_3,param_4,param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf027e0(param_3);
  func_0x00010c0a16e0(uVar2,param_2,puVar3,puVar4,param_9,param_10,6,uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  uVar1 = param_3;
  func_0x00010c079400(param_3);
  _objc_release(param_3);
  func_0x00010c0a1ae0(uVar2,param_2,uVar5,uVar1,param_8,param_6,param_7);
  _objc_release(param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107edfe00; end: 107edff3b; -[SCCloudSync _markCloudSyncRetryForRequestId:serviceTerm:newTransitionState:backOffTimeMillis:retryPolicy:loggingRetryCount:loggingStatusCode:loggingDetailsStatusCode:analyticsType:] */

void FUN_107edfe00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a16e0(uVar1,param_3,puVar2,puVar3,param_8,param_7,param_6,param_11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010bfec260(*(undefined8 *)(param_2 + 0xc0),param_3,param_4);
  _objc_release(param_4);
  func_0x00010becf300(param_1,param_2,param_3,param_6,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107edff3c; end: 107ee00bb; -[SCCloudSync _resetSeqNumIfNecessary] */

void FUN_107edff3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107edffec;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_retain(lVar1);
  func_0x00010c0f8540(uVar2,param_2,&puStack_60,0);
  _objc_release(uVar2);
  _objc_release(lStack_40);
  _objc_release(lVar1);
  return;
}



/* Entry: 107ee00bc; end: 107ee049b; -[SCCloudSync _resyncWithServiceTerm:forceRebase:] */

void FUN_107ee00bc(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 uStack_4c8;
  code *pcStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined **ppuStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined **ppuStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = param_1;
  func_0x00010c266a00();
  if ((((ulong)puVar15 & 1) == 0) && (*(long *)(param_1 + 0x118) != 0)) {
    func_0x00010c265e80();
  }
  func_0x00010beb5660();
  puVar15 = param_1;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d83b0;
  func_0x00010c2b1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cb00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c2667e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210d80(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  func_0x00010c266a00();
  func_0x00010c1d8680(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2057a0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c47c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c55c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d7700(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010c2667e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500(uVar17);
  _objc_release(puVar12);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar13);
  _objc_release(uVar17);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar17;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ec2e98;
  func_0x00010c25f400(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(puVar13);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar9;
  _objc_retain(ppuVar9);
  uVar5 = *(ulong *)(puVar15 + 0x20);
  func_0x00010be41400();
  if ((uVar5 & 1) == 0) {
    ppuVar6 = (undefined **)PTR_PTR_1126d83b8;
    _objc_alloc();
    func_0x00010c0206e0();
    *(undefined8 *)(*(long *)(puVar15 + 0x20) + 0xe0) = 0;
    if (((ppuVar9 == (undefined **)0x0) || (ppuVar6 == (undefined **)0x0)) ||
       (ppuVar7 = ppuVar6, func_0x00010c15f8c0(), ppuVar7 == (undefined **)0xffffffffffffd8f1)) {
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_retain(ppuVar9);
      _objc_opt_class(puVar10);
      ppuVar8 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar10);
      ppuVar7 = ppuVar9;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      _objc_retain(ppuVar7);
      _objc_release(ppuVar9);
      ppuVar8 = ppuVar9;
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2eb8,
                          &PTR____CFConstantStringClassReference_110e12ed8,puVar10,
                          *(undefined8 *)(*(long *)(puVar15 + 0x20) + 0x78));
      _objc_release(puVar10);
      if (ppuVar7 == (undefined **)0x0) {
        _objc_release(ppuVar8);
      }
      _objc_release(ppuVar7);
    }
    uVar1 = *(undefined8 *)(*(long *)(puVar15 + 0x20) + 8);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e500(uVar17);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar17);
    _objc_release(uVar1);
    ppuVar7 = ppuVar6;
    func_0x00010be82100(*(undefined8 *)(puVar15 + 0x20));
    if (puVar15[0x31] == '\x01') {
      func_0x00010be938e0(*(undefined8 *)(puVar15 + 0x20));
    }
    _objc_release(ppuVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar7);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = 2;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 == (undefined **)0x0) {
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar6);
  _objc_release(puVar15);
  uVar3 = *(undefined8 *)(ppuVar9[4] + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500();
  _objc_release(uVar1);
  _objc_release(uVar3);
  *(long *)(ppuVar9[4] + 0xe0) = *(long *)(ppuVar9[4] + 0xe0) + 1;
  dVar19 = (double)NEON_ucvtf(*(undefined8 *)(ppuVar9[4] + 0xe0));
  dVar19 = dVar19 + dVar19;
  _exp2();
  dVar20 = (double)NEON_ucvtf((long)(dVar19 * 750.0));
  dVar19 = 86400000.0;
  if (dVar20 <= 86400000.0) {
    dVar19 = dVar20;
  }
  dVar20 = 3600000.0;
  if (dVar19 <= 3600000.0) {
    dVar20 = dVar19;
  }
  func_0x00010bf3ec40();
  NEON_fminnm(dVar20,0x40ed4c0000000000);
  iVar16 = (int)ppuVar9[5];
  puVar15 = (undefined *)0x1;
  func_0x00010becf300(ppuVar9[4]);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  _objc_retain(uVar17);
  puVar10 = puVar15;
  func_0x00010c15f8c0();
  if (puVar10 == (undefined *)0x7d0) {
    func_0x00010c266a00(ppuVar7);
    ppuVar9 = ppuVar7;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar15;
    func_0x00010c11eaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar10 != (undefined *)0x0) {
      puVar10 = ppuVar7[5];
      func_0x00010c269d40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_368 = 0xc2000000;
      uStack_360 = 0x107ee14c8;
      puStack_358 = &UNK_110841f80;
      _objc_retain(ppuVar9);
      ppuStack_350 = ppuVar9;
      _objc_retain(puVar15);
      puStack_348 = puVar15;
      func_0x00010c0f8520(puVar10);
      _objc_release(puVar10);
      _objc_release(puStack_348);
      _objc_release(ppuStack_350);
    }
    puVar10 = puVar15;
    func_0x00010bfd9440();
    if (((ulong)puVar10 & 1) == 0) {
      puVar11 = ppuVar7[1];
      func_0x00010c0f98a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_390 = 0xc2000000;
      pcStack_388 = FUN_107ee15c0;
      puStack_380 = &UNK_110842e18;
      ppuStack_378 = ppuVar7;
      func_0x00010c0f88c0();
      _objc_release(puVar10);
      _objc_release(puVar11);
    }
    puVar10 = PTR_PTR_1126d83c0;
    _objc_alloc();
    func_0x00010bfe3080(puVar15);
    func_0x00010c0cdd60(puVar15);
    func_0x00010c089e80(puVar15);
    func_0x00010c266640(puVar15);
    func_0x00010c088d20(puVar15);
    func_0x00010c01a780();
    ppuVar6 = ppuVar9;
    func_0x00010c266620(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c071ae0();
    _objc_release(ppuVar6);
    if ((int)puVar11 == 0) {
      _CACurrentMediaTime();
      puVar13 = ppuVar7[1];
      func_0x00010c0b3760(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500();
      _objc_release(puVar11);
      _objc_release(puVar13);
      puStack_3c0 = &uStack_3c8;
      uStack_3c8 = 0;
      uStack_3b8 = 0x3032000000;
      pcStack_3b0 = FUN_107ed6ff8;
      uStack_3a8 = 0x107ed7008;
      uStack_3a0 = 0;
      puVar14 = ppuVar7[5];
      _objc_retain(puVar14);
      puStack_4a0 = &uStack_4a8;
      uStack_4a8 = 0;
      uStack_498 = 0x3032000000;
      pcStack_490 = FUN_107ed6ff8;
      uStack_488 = 0x107ed7008;
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puStack_4d0 = &uStack_4d8;
      uStack_4d8 = 0;
      uStack_4c8 = 0x3032000000;
      pcStack_4c0 = FUN_107ed6ff8;
      uStack_4b8 = 0x107ed7008;
      puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_480 = puVar11;
      _objc_opt_new();
      puVar11 = puVar14;
      puStack_4b0 = puVar13;
      func_0x00010c269d40(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar9);
      _objc_retain(puVar15);
      puVar12 = ppuVar7[1];
      func_0x00010c0f98a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar15);
      _objc_retain(uVar17);
      _objc_retain(ppuVar9);
      func_0x00010c0f8520(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(ppuVar9);
      _objc_release(uVar17);
      _objc_release(puVar15);
      _objc_release(puVar15);
      _objc_release(ppuVar9);
      __Block_object_dispose(&uStack_4d8,8);
      _objc_release(puStack_4b0);
      __Block_object_dispose(&uStack_4a8,8);
      _objc_release(puStack_480);
      _objc_release(puVar14);
      __Block_object_dispose(&uStack_3c8,8);
      _objc_release(uStack_3a0);
    }
    else {
      puVar12 = ppuVar7[1];
      func_0x00010c0b3760(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_310 = &PTR____CFConstantStringClassReference_110ec2f78;
      puVar13 = puVar15;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      if (puVar13 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_308 = &PTR____CFConstantStringClassReference_110ec2f98;
      ppuVar6 = ppuVar9;
      puStack_300 = puVar2;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar6;
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_2f8 = ppuVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500(puVar11);
      _objc_release(puVar14);
      if (ppuVar6 == (undefined **)0x0) {
        _objc_release(ppuVar8);
      }
      _objc_release(ppuVar6);
      if (puVar13 == (undefined *)0x0) {
        _objc_release(puVar2);
      }
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar12);
      ppuVar6 = ppuVar7;
      func_0x00010c266a00();
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x00010c210e80(ppuVar7);
      }
      if (iVar16 == 0) {
        puVar11 = ppuVar7[5];
        func_0x00010c269d40(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puStack_478 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_470 = 0xc2000000;
        uStack_468 = 0x107ee1750;
        puStack_460 = &UNK_110841f80;
        _objc_retain(ppuVar9);
        ppuStack_458 = ppuVar9;
        _objc_retain(puVar15);
        puStack_450 = puVar15;
        func_0x00010c0f8520(puVar11);
        _objc_release(puVar11);
        puVar13 = ppuVar7[1];
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(puVar11);
        _objc_release(puVar13);
        func_0x00010becf300(0,ppuVar7);
        _objc_release(puStack_450);
        _objc_release(ppuStack_458);
      }
      else {
        puVar13 = ppuVar7[1];
        func_0x00010c0b3760(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(puVar11);
        _objc_release(puVar13);
        uStack_3c8 = 0;
        uStack_3b8 = 0x3032000000;
        pcStack_3b0 = FUN_107ed6ff8;
        uStack_3a8 = 0x107ed7008;
        uStack_3a0 = 0;
        puVar12 = ppuVar7[5];
        puStack_3c0 = &uStack_3c8;
        func_0x00010c269d40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_400 = 0xc2000000;
        pcStack_3f8 = FUN_107ee15f8;
        puStack_3f0 = &UNK_1108501e8;
        ppuStack_3e8 = ppuVar7;
        puStack_3d0 = &uStack_3c8;
        _objc_retain(ppuVar9);
        ppuStack_3e0 = ppuVar9;
        _objc_retain(puVar15);
        puVar14 = ppuVar7[1];
        puStack_3d8 = puVar15;
        func_0x00010c0f98a0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_448 = puVar11;
        uStack_440 = 0xc2000000;
        uStack_438 = 0x107ee16a8;
        puStack_430 = &UNK_110a11ca0;
        puStack_410 = &uStack_3c8;
        ppuStack_428 = ppuVar7;
        _objc_retain(puVar15);
        puStack_420 = puVar15;
        _objc_retain(uVar17);
        uStack_418 = uVar17;
        func_0x00010c0f8520(puVar12);
        _objc_release(puVar2);
        _objc_release(puVar13);
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(uStack_418);
        _objc_release(puStack_420);
        _objc_release(puStack_3d8);
        _objc_release(ppuStack_3e0);
        __Block_object_dispose(&uStack_3c8,8);
        _objc_release(uStack_3a0);
      }
    }
    _objc_release(puVar10);
    _objc_release(ppuVar9);
  }
  else {
    puVar10 = puVar15;
    func_0x00010bf148e0();
    puVar11 = puVar15;
    func_0x00010c15f8c0();
    if (puVar11 == (undefined *)0xfa7) {
      *(undefined1 *)((long)ppuVar7 + 0xc9) = 1;
      dVar19 = 86400000.0;
    }
    else {
      dVar19 = (double)(long)puVar10;
    }
    puVar10 = puVar15;
    func_0x00010c15f8c0();
    if (puVar10 == (undefined *)0xfa1) {
      puVar13 = ppuVar7[1];
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c230300();
      _objc_release(puVar10);
      _objc_release(puVar13);
      if ((int)puVar11 != 0) {
        ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e0a318;
        ppuStack_2e8 = &PTR____CFConstantStringClassReference_110ec2ed8;
        ppuStack_2e0 = &PTR____CFConstantStringClassReference_110ec2e98;
        puVar10 = puVar15;
        func_0x00010c271c60();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        if (puVar10 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_2d8 = puVar11;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2f58,
                            &PTR____CFConstantStringClassReference_110e12ed8,puVar13,ppuVar7[0xf]);
        _objc_release(puVar13);
        if (puVar10 == (undefined *)0x0) {
          _objc_release(puVar11);
        }
        _objc_release(puVar10);
        FUN_107f16930(ppuVar7[0x22],1);
        puVar10 = puVar15;
        func_0x00010c293ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126ce6b0;
        func_0x00010bf54780(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_338 = 0xc2000000;
        pcStack_330 = FUN_107ee1468;
        puStack_328 = &UNK_110841f80;
        ppuStack_320 = ppuVar7;
        puStack_318 = puVar11;
        _objc_retain();
        func_0x0001000d76cc("APPSTORE",&puStack_340);
        _objc_release(puStack_318);
        _objc_release(puVar11);
        _objc_release(puVar10);
      }
    }
    func_0x00010becf300(dVar19,ppuVar7);
  }
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_4a8,8);
  __Block_object_dispose(&uStack_3c8,8);
  __Unwind_Resume();
  uVar1 = *(undefined8 *)(*(long *)(puVar15 + 0x20) + 8);
  func_0x00010c0dc640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee049c; end: 107ee0723;  */

void FUN_107ee049c(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be41400();
  if ((uVar1 & 1) == 0) {
    puVar14 = PTR_PTR_1126d83b8;
    _objc_alloc();
    func_0x00010c0206e0();
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0) = 0;
    if (((param_3 == (undefined *)0x0) || (puVar14 == (undefined *)0x0)) ||
       (puVar2 = puVar14, func_0x00010c15f8c0(), puVar2 == (undefined *)0xffffffffffffd8f1)) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      puVar2 = param_3;
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(param_3);
      puVar3 = param_3;
      if (puVar2 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2eb8,
                          &PTR____CFConstantStringClassReference_110e12ed8,puVar4,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
      _objc_release(puVar4);
      if (puVar2 == (undefined *)0x0) {
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e500(uVar16);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar16);
    _objc_release(uVar5);
    puVar2 = puVar14;
    func_0x00010be82100(*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x31) == '\x01') {
      func_0x00010be938e0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(puVar14);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar16 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500();
  _objc_release(uVar5);
  _objc_release(uVar7);
  *(long *)(*(long *)(param_3 + 0x20) + 0xe0) = *(long *)(*(long *)(param_3 + 0x20) + 0xe0) + 1;
  dVar19 = (double)NEON_ucvtf(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0xe0));
  dVar19 = dVar19 + dVar19;
  _exp2();
  dVar20 = (double)NEON_ucvtf((long)(dVar19 * 750.0));
  dVar19 = 86400000.0;
  if (dVar20 <= 86400000.0) {
    dVar19 = dVar20;
  }
  dVar20 = 3600000.0;
  if (dVar19 <= 3600000.0) {
    dVar20 = dVar19;
  }
  func_0x00010bf3ec40();
  NEON_fminnm(dVar20,0x40ed4c0000000000);
  iVar15 = (int)*(undefined8 *)(param_3 + 0x28);
  puVar14 = (undefined *)0x1;
  func_0x00010becf300(*(undefined8 *)(param_3 + 0x20));
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(uVar16);
  puVar3 = puVar14;
  func_0x00010c15f8c0();
  if (puVar3 == (undefined *)0x7d0) {
    func_0x00010c266a00(puVar2);
    puVar3 = puVar2;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c11eaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(puVar2 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_238 = 0xc2000000;
      uStack_230 = 0x107ee14c8;
      puStack_228 = &UNK_110841f80;
      _objc_retain(puVar3);
      puStack_220 = puVar3;
      _objc_retain(puVar14);
      puStack_218 = puVar14;
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar5);
      _objc_release(puStack_218);
      _objc_release(puStack_220);
    }
    puVar4 = puVar14;
    func_0x00010bfd9440();
    if (((ulong)puVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0f98a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_107ee15c0;
      puStack_250 = &UNK_110842e18;
      puStack_248 = puVar2;
      func_0x00010c0f88c0();
      _objc_release(uVar5);
      _objc_release(uVar7);
    }
    puVar4 = PTR_PTR_1126d83c0;
    _objc_alloc();
    func_0x00010bfe3080(puVar14);
    func_0x00010c0cdd60(puVar14);
    func_0x00010c089e80(puVar14);
    func_0x00010c266640(puVar14);
    func_0x00010c088d20(puVar14);
    func_0x00010c01a780();
    puVar6 = puVar3;
    func_0x00010c266620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c071ae0();
    _objc_release(puVar6);
    if ((int)puVar8 == 0) {
      _CACurrentMediaTime();
      uVar7 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0b3760(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500();
      _objc_release(uVar5);
      _objc_release(uVar7);
      puStack_290 = &uStack_298;
      uStack_298 = 0;
      uStack_288 = 0x3032000000;
      pcStack_280 = FUN_107ed6ff8;
      uStack_278 = 0x107ed7008;
      uStack_270 = 0;
      uVar18 = *(undefined8 *)(puVar2 + 0x28);
      _objc_retain(uVar18);
      puStack_370 = &uStack_378;
      uStack_378 = 0;
      uStack_368 = 0x3032000000;
      pcStack_360 = FUN_107ed6ff8;
      uStack_358 = 0x107ed7008;
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puStack_3a0 = &uStack_3a8;
      uStack_3a8 = 0;
      uStack_398 = 0x3032000000;
      pcStack_390 = FUN_107ed6ff8;
      uStack_388 = 0x107ed7008;
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_350 = puVar6;
      _objc_opt_new();
      uVar5 = uVar18;
      puStack_380 = puVar8;
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(puVar14);
      uVar13 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0f98a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar14);
      _objc_retain(uVar16);
      _objc_retain(puVar3);
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar12);
      _objc_release(uVar7);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(uVar16);
      _objc_release(puVar14);
      _objc_release(puVar14);
      _objc_release(puVar3);
      __Block_object_dispose(&uStack_3a8,8);
      _objc_release(puStack_380);
      __Block_object_dispose(&uStack_378,8);
      _objc_release(puStack_350);
      _objc_release(uVar18);
      __Block_object_dispose(&uStack_298,8);
      _objc_release(uStack_270);
    }
    else {
      uVar7 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0b3760(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110ec2f78;
      puVar6 = puVar14;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110ec2f98;
      puVar9 = puVar3;
      puStack_1d0 = puVar8;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      if (puVar9 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1c8 = puVar10;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500(uVar5);
      _objc_release(puVar11);
      if (puVar9 == (undefined *)0x0) {
        _objc_release(puVar10);
      }
      _objc_release(puVar9);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar7);
      puVar6 = puVar2;
      func_0x00010c266a00();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010c210e80(puVar2);
      }
      if (iVar15 == 0) {
        uVar5 = *(undefined8 *)(puVar2 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_340 = 0xc2000000;
        uStack_338 = 0x107ee1750;
        puStack_330 = &UNK_110841f80;
        _objc_retain(puVar3);
        puStack_328 = puVar3;
        _objc_retain(puVar14);
        puStack_320 = puVar14;
        func_0x00010c0f8520(uVar5);
        _objc_release(uVar5);
        uVar7 = *(undefined8 *)(puVar2 + 8);
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar5);
        _objc_release(uVar7);
        func_0x00010becf300(0,puVar2);
        _objc_release(puStack_320);
        _objc_release(puStack_328);
      }
      else {
        uVar7 = *(undefined8 *)(puVar2 + 8);
        func_0x00010c0b3760(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar5);
        _objc_release(uVar7);
        uStack_298 = 0;
        uStack_288 = 0x3032000000;
        pcStack_280 = FUN_107ed6ff8;
        uStack_278 = 0x107ed7008;
        uStack_270 = 0;
        uVar12 = *(undefined8 *)(puVar2 + 0x28);
        puStack_290 = &uStack_298;
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2d0 = 0xc2000000;
        pcStack_2c8 = FUN_107ee15f8;
        puStack_2c0 = &UNK_1108501e8;
        puStack_2b8 = puVar2;
        puStack_2a0 = &uStack_298;
        _objc_retain(puVar3);
        puStack_2b0 = puVar3;
        _objc_retain(puVar14);
        uVar13 = *(undefined8 *)(puVar2 + 8);
        puStack_2a8 = puVar14;
        func_0x00010c0f98a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_318 = puVar6;
        uStack_310 = 0xc2000000;
        uStack_308 = 0x107ee16a8;
        puStack_300 = &UNK_110a11ca0;
        puStack_2e0 = &uStack_298;
        puStack_2f8 = puVar2;
        _objc_retain(puVar14);
        puStack_2f0 = puVar14;
        _objc_retain(uVar16);
        uStack_2e8 = uVar16;
        func_0x00010c0f8520(uVar12);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uStack_2e8);
        _objc_release(puStack_2f0);
        _objc_release(puStack_2a8);
        _objc_release(puStack_2b0);
        __Block_object_dispose(&uStack_298,8);
        _objc_release(uStack_270);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar14;
    func_0x00010bf148e0();
    puVar4 = puVar14;
    func_0x00010c15f8c0();
    if (puVar4 == (undefined *)0xfa7) {
      puVar2[0xc9] = 1;
      dVar19 = 86400000.0;
    }
    else {
      dVar19 = (double)(long)puVar3;
    }
    puVar3 = puVar14;
    func_0x00010c15f8c0();
    if (puVar3 == (undefined *)0xfa1) {
      uVar12 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c230300();
      _objc_release(uVar5);
      _objc_release(uVar12);
      if ((int)uVar7 != 0) {
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e0a318;
        ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ec2ed8;
        ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ec2e98;
        puVar3 = puVar14;
        func_0x00010c271c60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_1a8 = puVar4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2f58,
                            &PTR____CFConstantStringClassReference_110e12ed8,puVar6,
                            *(undefined8 *)(puVar2 + 0x78));
        _objc_release(puVar6);
        if (puVar3 == (undefined *)0x0) {
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
        FUN_107f16930(*(undefined8 *)(puVar2 + 0x110),1);
        puVar3 = puVar14;
        func_0x00010c293ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126ce6b0;
        func_0x00010bf54780(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_208 = 0xc2000000;
        pcStack_200 = FUN_107ee1468;
        puStack_1f8 = &UNK_110841f80;
        puStack_1f0 = puVar2;
        puStack_1e8 = puVar4;
        _objc_retain();
        func_0x0001000d76cc("APPSTORE",&puStack_210);
        _objc_release(puStack_1e8);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    func_0x00010becf300(dVar19,puVar2);
  }
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_378,8);
  __Block_object_dispose(&uStack_298,8);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(*(long *)(puVar14 + 0x20) + 8);
  func_0x00010c0dc640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107ee0724; end: 107ee091b;  */

void FUN_107ee0724(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = 2;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500();
  _objc_release(uVar5);
  _objc_release(uVar4);
  *(long *)(*(long *)(param_1 + 0x20) + 0xe0) = *(long *)(*(long *)(param_1 + 0x20) + 0xe0) + 1;
  dVar17 = (double)NEON_ucvtf(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0));
  dVar17 = dVar17 + dVar17;
  _exp2();
  dVar18 = (double)NEON_ucvtf((long)(dVar17 * 750.0));
  dVar17 = 86400000.0;
  if (dVar18 <= 86400000.0) {
    dVar17 = dVar18;
  }
  dVar18 = 3600000.0;
  if (dVar17 <= 3600000.0) {
    dVar18 = dVar17;
  }
  func_0x00010bf3ec40();
  NEON_fminnm(dVar18,0x40ed4c0000000000);
  iVar13 = (int)*(undefined8 *)(param_1 + 0x28);
  puVar12 = (undefined *)0x1;
  func_0x00010becf300(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  puVar1 = puVar12;
  func_0x00010c15f8c0();
  if (puVar1 == (undefined *)0x7d0) {
    func_0x00010c266a00(param_3);
    puVar1 = param_3;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c11eaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      uStack_190 = 0x107ee14c8;
      puStack_188 = &UNK_110841f80;
      _objc_retain(puVar1);
      puStack_180 = puVar1;
      _objc_retain(puVar12);
      puStack_178 = puVar12;
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar5);
      _objc_release(puStack_178);
      _objc_release(puStack_180);
    }
    puVar2 = puVar12;
    func_0x00010bfd9440();
    if (((ulong)puVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0f98a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_107ee15c0;
      puStack_1b0 = &UNK_110842e18;
      puStack_1a8 = param_3;
      func_0x00010c0f88c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    puVar2 = PTR_PTR_1126d83c0;
    _objc_alloc();
    func_0x00010bfe3080(puVar12);
    func_0x00010c0cdd60(puVar12);
    func_0x00010c089e80(puVar12);
    func_0x00010c266640(puVar12);
    func_0x00010c088d20(puVar12);
    func_0x00010c01a780();
    puVar3 = puVar1;
    func_0x00010c266620(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    if ((int)puVar6 == 0) {
      _CACurrentMediaTime();
      uVar4 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0b3760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puStack_1f0 = &uStack_1f8;
      uStack_1f8 = 0;
      uStack_1e8 = 0x3032000000;
      pcStack_1e0 = FUN_107ed6ff8;
      uStack_1d8 = 0x107ed7008;
      uStack_1d0 = 0;
      uVar16 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar16);
      puStack_2d0 = &uStack_2d8;
      uStack_2d8 = 0;
      uStack_2c8 = 0x3032000000;
      pcStack_2c0 = FUN_107ed6ff8;
      uStack_2b8 = 0x107ed7008;
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puStack_300 = &uStack_308;
      uStack_308 = 0;
      uStack_2f8 = 0x3032000000;
      pcStack_2f0 = FUN_107ed6ff8;
      uStack_2e8 = 0x107ed7008;
      puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_2b0 = puVar3;
      _objc_opt_new();
      uVar5 = uVar16;
      puStack_2e0 = puVar6;
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(puVar12);
      uVar11 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0f98a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      _objc_retain(uVar14);
      _objc_retain(puVar1);
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(puVar1);
      _objc_release(uVar14);
      _objc_release(puVar12);
      _objc_release(puVar12);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_308,8);
      _objc_release(puStack_2e0);
      __Block_object_dispose(&uStack_2d8,8);
      _objc_release(puStack_2b0);
      _objc_release(uVar16);
      __Block_object_dispose(&uStack_1f8,8);
      _objc_release(uStack_1d0);
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0b3760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = &PTR____CFConstantStringClassReference_110ec2f78;
      puVar3 = puVar12;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_138 = &PTR____CFConstantStringClassReference_110ec2f98;
      puVar7 = puVar1;
      puStack_130 = puVar6;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_128 = puVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500(uVar5);
      _objc_release(puVar9);
      if (puVar7 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar3 = param_3;
      func_0x00010c266a00();
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010c210e80(param_3);
      }
      if (iVar13 == 0) {
        uVar5 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2a0 = 0xc2000000;
        uStack_298 = 0x107ee1750;
        puStack_290 = &UNK_110841f80;
        _objc_retain(puVar1);
        puStack_288 = puVar1;
        _objc_retain(puVar12);
        puStack_280 = puVar12;
        func_0x00010c0f8520(uVar5);
        _objc_release(uVar5);
        uVar4 = *(undefined8 *)(param_3 + 8);
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010becf300(0,param_3);
        _objc_release(puStack_280);
        _objc_release(puStack_288);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 8);
        func_0x00010c0b3760(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uStack_1f8 = 0;
        uStack_1e8 = 0x3032000000;
        pcStack_1e0 = FUN_107ed6ff8;
        uStack_1d8 = 0x107ed7008;
        uStack_1d0 = 0;
        uVar10 = *(undefined8 *)(param_3 + 0x28);
        puStack_1f0 = &uStack_1f8;
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_230 = 0xc2000000;
        pcStack_228 = FUN_107ee15f8;
        puStack_220 = &UNK_1108501e8;
        puStack_218 = param_3;
        puStack_200 = &uStack_1f8;
        _objc_retain(puVar1);
        puStack_210 = puVar1;
        _objc_retain(puVar12);
        uVar11 = *(undefined8 *)(param_3 + 8);
        puStack_208 = puVar12;
        func_0x00010c0f98a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_278 = puVar3;
        uStack_270 = 0xc2000000;
        uStack_268 = 0x107ee16a8;
        puStack_260 = &UNK_110a11ca0;
        puStack_240 = &uStack_1f8;
        puStack_258 = param_3;
        _objc_retain(puVar12);
        puStack_250 = puVar12;
        _objc_retain(uVar14);
        uStack_248 = uVar14;
        func_0x00010c0f8520(uVar10);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uStack_248);
        _objc_release(puStack_250);
        _objc_release(puStack_208);
        _objc_release(puStack_210);
        __Block_object_dispose(&uStack_1f8,8);
        _objc_release(uStack_1d0);
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar1 = puVar12;
    func_0x00010bf148e0();
    puVar2 = puVar12;
    func_0x00010c15f8c0();
    if (puVar2 == (undefined *)0xfa7) {
      param_3[0xc9] = 1;
      dVar17 = 86400000.0;
    }
    else {
      dVar17 = (double)(long)puVar1;
    }
    puVar1 = puVar12;
    func_0x00010c15f8c0();
    if (puVar1 == (undefined *)0xfa1) {
      uVar10 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c230300();
      _objc_release(uVar5);
      _objc_release(uVar10);
      if ((int)uVar4 != 0) {
        ppuStack_120 = &PTR____CFConstantStringClassReference_110e0a318;
        ppuStack_118 = &PTR____CFConstantStringClassReference_110ec2ed8;
        ppuStack_110 = &PTR____CFConstantStringClassReference_110ec2e98;
        puVar1 = puVar12;
        func_0x00010c271c60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_108 = puVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2f58,
                            &PTR____CFConstantStringClassReference_110e12ed8,puVar3,
                            *(undefined8 *)(param_3 + 0x78));
        _objc_release(puVar3);
        if (puVar1 == (undefined *)0x0) {
          _objc_release(puVar2);
        }
        _objc_release(puVar1);
        FUN_107f16930(*(undefined8 *)(param_3 + 0x110),1);
        puVar1 = puVar12;
        func_0x00010c293ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126ce6b0;
        func_0x00010bf54780(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_107ee1468;
        puStack_158 = &UNK_110841f80;
        puStack_150 = param_3;
        puStack_148 = puVar2;
        _objc_retain();
        func_0x0001000d76cc("APPSTORE",&puStack_170);
        _objc_release(puStack_148);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
    }
    func_0x00010becf300(dVar17,param_3);
  }
  _objc_release(uVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2d8,8);
  __Block_object_dispose(&uStack_1f8,8);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(*(long *)(puVar12 + 0x20) + 8);
  func_0x00010c0dc640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107ee091c; end: 107ee1467; -[SCCloudSync _processResyncResponse:forceRebase:serviceTerm:] */

void FUN_107ee091c(undefined *param_1,undefined8 param_2,undefined *param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c15f8c0();
  if (puVar1 == (undefined *)0x7d0) {
    func_0x00010c266a00(param_1);
    puVar1 = param_1;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c11eaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar10 != (undefined *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x107ee14c8;
      puStack_108 = &UNK_110841f80;
      _objc_retain(puVar1);
      puStack_100 = puVar1;
      _objc_retain(param_3);
      puStack_f8 = param_3;
      func_0x00010c0f8520(uVar2);
      _objc_release(uVar2);
      _objc_release(puStack_f8);
      _objc_release(puStack_100);
    }
    puVar10 = param_3;
    func_0x00010bfd9440();
    if (((ulong)puVar10 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0f98a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_107ee15c0;
      puStack_130 = &UNK_110842e18;
      puStack_128 = param_1;
      func_0x00010c0f88c0();
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    puVar10 = PTR_PTR_1126d83c0;
    _objc_alloc();
    func_0x00010bfe3080(param_3);
    func_0x00010c0cdd60(param_3);
    func_0x00010c089e80(param_3);
    func_0x00010c266640(param_3);
    func_0x00010c088d20(param_3);
    func_0x00010c01a780();
    puVar11 = puVar1;
    func_0x00010c266620(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c071ae0();
    _objc_release(puVar11);
    if ((int)puVar4 == 0) {
      _CACurrentMediaTime();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b3760(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500();
      _objc_release(uVar2);
      _objc_release(uVar3);
      puStack_170 = &uStack_178;
      uStack_178 = 0;
      uStack_168 = 0x3032000000;
      pcStack_160 = FUN_107ed6ff8;
      uStack_158 = 0x107ed7008;
      uStack_150 = 0;
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar12);
      puStack_250 = &uStack_258;
      uStack_258 = 0;
      uStack_248 = 0x3032000000;
      pcStack_240 = FUN_107ed6ff8;
      uStack_238 = 0x107ed7008;
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puStack_280 = &uStack_288;
      uStack_288 = 0;
      uStack_278 = 0x3032000000;
      pcStack_270 = FUN_107ed6ff8;
      uStack_268 = 0x107ed7008;
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_230 = puVar11;
      _objc_opt_new();
      uVar2 = uVar12;
      puStack_260 = puVar4;
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(param_3);
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0f98a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(puVar1);
      func_0x00010c0f8520(uVar2);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(puVar1);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_288,8);
      _objc_release(puStack_260);
      __Block_object_dispose(&uStack_258,8);
      _objc_release(puStack_230);
      _objc_release(uVar12);
      __Block_object_dispose(&uStack_178,8);
      _objc_release(uStack_150);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b3760(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110ec2f78;
      puVar11 = param_3;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      if (puVar11 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec2f98;
      puVar5 = puVar1;
      puStack_b0 = puVar4;
      func_0x00010c2667e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a8 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e500(uVar2);
      _objc_release(puVar7);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      if (puVar11 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      _objc_release(puVar11);
      _objc_release(uVar2);
      _objc_release(uVar3);
      puVar11 = param_1;
      func_0x00010c266a00();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x00010c210e80(param_1);
      }
      if (param_4 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_220 = 0xc2000000;
        uStack_218 = 0x107ee1750;
        puStack_210 = &UNK_110841f80;
        _objc_retain(puVar1);
        puStack_208 = puVar1;
        _objc_retain(param_3);
        puStack_200 = param_3;
        func_0x00010c0f8520(uVar2);
        _objc_release(uVar2);
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0b3760();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar2);
        _objc_release(uVar3);
        func_0x00010becf300(0,param_1);
        _objc_release(puStack_200);
        _objc_release(puStack_208);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0b3760(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e500();
        _objc_release(uVar2);
        _objc_release(uVar3);
        uStack_178 = 0;
        uStack_168 = 0x3032000000;
        pcStack_160 = FUN_107ed6ff8;
        uStack_158 = 0x107ed7008;
        uStack_150 = 0;
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        puStack_170 = &uStack_178;
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b0 = 0xc2000000;
        pcStack_1a8 = FUN_107ee15f8;
        puStack_1a0 = &UNK_1108501e8;
        puStack_198 = param_1;
        puStack_180 = &uStack_178;
        _objc_retain(puVar1);
        puStack_190 = puVar1;
        _objc_retain(param_3);
        uVar9 = *(undefined8 *)(param_1 + 8);
        puStack_188 = param_3;
        func_0x00010c0f98a0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_1f8 = puVar11;
        uStack_1f0 = 0xc2000000;
        uStack_1e8 = 0x107ee16a8;
        puStack_1e0 = &UNK_110a11ca0;
        puStack_1c0 = &uStack_178;
        puStack_1d8 = param_1;
        _objc_retain(param_3);
        puStack_1d0 = param_3;
        _objc_retain(param_5);
        uStack_1c8 = param_5;
        func_0x00010c0f8520(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uStack_1c8);
        _objc_release(puStack_1d0);
        _objc_release(puStack_188);
        _objc_release(puStack_190);
        __Block_object_dispose(&uStack_178,8);
        _objc_release(uStack_150);
      }
    }
    _objc_release(puVar10);
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf148e0();
    puVar10 = param_3;
    func_0x00010c15f8c0();
    if (puVar10 == (undefined *)0xfa7) {
      param_1[0xc9] = 1;
      dVar13 = 86400000.0;
    }
    else {
      dVar13 = (double)(long)puVar1;
    }
    puVar1 = param_3;
    func_0x00010c15f8c0();
    if (puVar1 == (undefined *)0xfa1) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c230300();
      _objc_release(uVar2);
      _objc_release(uVar8);
      if ((int)uVar3 != 0) {
        ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0a318;
        ppuStack_98 = &PTR____CFConstantStringClassReference_110ec2ed8;
        ppuStack_90 = &PTR____CFConstantStringClassReference_110ec2e98;
        puVar1 = param_3;
        func_0x00010c271c60();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_88 = puVar10;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2f58,
                            &PTR____CFConstantStringClassReference_110e12ed8,puVar11,
                            *(undefined8 *)(param_1 + 0x78));
        _objc_release(puVar11);
        if (puVar1 == (undefined *)0x0) {
          _objc_release(puVar10);
        }
        _objc_release(puVar1);
        FUN_107f16930(*(undefined8 *)(param_1 + 0x110),1);
        puVar1 = param_3;
        func_0x00010c293ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126ce6b0;
        func_0x00010bf54780(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e8 = 0xc2000000;
        pcStack_e0 = FUN_107ee1468;
        puStack_d8 = &UNK_110841f80;
        puStack_d0 = param_1;
        puStack_c8 = puVar10;
        _objc_retain();
        func_0x0001000d76cc("APPSTORE",&puStack_f0);
        _objc_release(puStack_c8);
        _objc_release(puVar10);
        _objc_release(puVar1);
      }
    }
    func_0x00010becf300(dVar13,param_1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_258,8);
  __Block_object_dispose(&uStack_178,8);
  __Unwind_Resume();
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  func_0x00010c0dc640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107ee1468; end: 107ee15bf;  */

void FUN_107ee1468(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0dc640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee15c0; end: 107ee15f7;  */

void FUN_107ee15c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1501a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee15f8; end: 107ee17e7;  */

void FUN_107ee15f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bddefa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010be85f20(*(undefined8 *)(param_1 + 0x20),param_2,1);
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7da0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2667e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210d80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ee17e8; end: 107ee359f;  */

undefined * FUN_107ee17e8(long param_1,undefined **param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  ulong uVar38;
  ulong uVar39;
  undefined **ppuVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined *puStack_5a0;
  
  lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bddefa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar49 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      lVar42 = *(long *)(lVar49 * 8);
      lVar8 = lVar42;
      func_0x00010bf97200(lVar42);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(lVar8);
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      lVar8 = lVar42;
      func_0x00010c253100();
      if (lVar8 == 0) {
        lVar10 = lVar42;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar10;
        func_0x00010bf52a60();
        lVar48 = lRam0000000000000000;
        while (lVar8 != 0) {
          lVar50 = 0;
          do {
            if (lRam0000000000000000 != lVar48) {
              _objc_enumerationMutation(lVar10);
            }
            uVar46 = *(undefined8 *)(lVar50 * 8);
            uVar12 = uVar46;
            func_0x00010c241220(uVar46);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar12);
            func_0x00010c241220(uVar46);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(uVar46);
            lVar50 = lVar50 + 1;
          } while (lVar8 != lVar50);
          lVar8 = lVar10;
          func_0x00010bf52a60();
        }
        _objc_release(lVar10);
      }
      puVar11 = puVar9;
      func_0x00010bf51e00(puVar9);
      func_0x00010bf97200(lVar42);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(lVar42);
      _objc_release(puVar11);
      _objc_release(puVar9);
      lVar49 = lVar49 + 1;
    } while (lVar49 != lVar7);
    lVar7 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  puVar11 = PTR_PTR_1126af4c0;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  puVar9 = puVar11;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar44 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar11);
      }
      uVar12 = *(undefined8 *)((long)puVar44 * 8);
      func_0x00010bf97200(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13);
      _objc_release(uVar12);
      puVar44 = puVar44 + 1;
    } while (puVar9 != puVar44);
    puVar9 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  puVar44 = PTR_PTR_1126af4d0;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar44);
  puVar9 = puVar44;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar45 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar44);
      }
      uVar12 = *(undefined8 *)((long)puVar45 * 8);
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar14);
      _objc_release(uVar12);
      puVar45 = puVar45 + 1;
    } while (puVar9 != puVar45);
    puVar9 = puVar44;
    func_0x00010bf52a60();
  }
  _objc_release(puVar44);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      _objc_release(lVar6);
      puVar17 = puVar9;
      func_0x00010bf529e0();
      if (puVar17 != (undefined *)0x0) {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9aa0();
        _objc_release(uVar12);
      }
      puVar17 = puVar45;
      func_0x00010bf529e0();
      if (puVar17 != (undefined *)0x0) {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f20();
        _objc_release(uVar12);
      }
      func_0x00010bf6be80(PTR_PTR_1126bc830);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfd9440(*(undefined8 *)(param_1 + 0x30));
      func_0x00010be85f20(uVar12);
      puVar17 = PTR_PTR_1126b2508;
      func_0x00010bf350c0(PTR_PTR_1126b2508);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c2667e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210d80(puVar17);
      _objc_release(uVar12);
      func_0x00010c210d20(puVar17);
      _objc_release(puVar17);
      _objc_release(puVar15);
      _objc_release(puVar45);
      _objc_release(puVar9);
      _objc_release(puVar14);
      _objc_release(puVar44);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar41) {
        ___stack_chk_fail();
        func_0x00010bfdd120(param_2);
        return (undefined *)(ulong)((uint)param_2 ^ 1);
      }
      return puVar3;
    }
    lVar49 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar43 = *(ulong *)(lVar49 * 8);
      uVar16 = uVar43;
      func_0x00010bf97200(uVar43);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      uVar16 = uVar43;
      func_0x00010c253100();
      if (uVar16 == 0) {
        puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSSet_1126ae870;
        uVar16 = uVar43;
        func_0x00010bfe3580(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010be6e020();
        puVar22 = PTR_PTR_1126af4d0;
        puStack_5a0 = puVar20;
        if ((iVar2 != 0) && (puVar17 != (undefined *)0x0)) {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar23 = puVar22;
          func_0x00010bfaea20(puVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar18);
          puVar24 = PTR_PTR_1126af4d0;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7400(puVar24);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar25 = puVar24;
          func_0x00010bfaea20(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar19);
          puVar26 = puVar25;
          func_0x00010c0b8600(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar20;
          func_0x00010c0d3c80();
          func_0x00010befa160();
          puStack_5a0 = puVar27;
          func_0x00010bf51e00();
          _objc_release(puVar20);
          _objc_release(puVar27);
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar22);
        }
        uVar12 = 0;
        uVar28 = uVar43;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar28;
        func_0x00010bf52a60();
        lVar8 = lRam0000000000000000;
        while (uVar16 != 0) {
          uVar47 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(uVar28);
            }
            lVar48 = *(long *)(uVar47 * 8);
            lVar42 = lVar48;
            func_0x00010c241220(lVar48);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar42);
            if (puVar20 == (undefined *)0x0) {
              puVar22 = PTR_PTR_1126bc7f8;
              func_0x00010bf5a9c0();
              _objc_retainAutoreleasedReturnValue();
              uVar46 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
              func_0x00010c269d40(uVar46);
              _objc_retainAutoreleasedReturnValue();
              FUN_107ee904c(puVar22,lVar48,uVar46);
              _objc_release(uVar46);
              func_0x00010c1d7bc0(puVar22);
              puVar24 = puVar22;
              func_0x00010c0ed100();
              if ((int)puVar24 != 3) {
                func_0x00010c0ed100();
              }
              func_0x00010c247520(puVar22);
              func_0x00010bf977a0();
              puVar24 = puVar22;
              func_0x00010c0fd8c0(puVar22);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar18);
              _objc_release(puVar24);
              lVar42 = lVar48;
              func_0x00010c241220(lVar48);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puStack_5a0;
              func_0x00010bf4b900();
              _objc_release(lVar42);
              if ((int)puVar24 != 0) {
                puVar24 = puVar22;
                func_0x00010c0fd8c0(puVar22);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar19);
                _objc_release(puVar24);
              }
            }
            else {
              puVar22 = puVar20;
              func_0x00010c0ed100();
              if ((int)puVar22 != 3) {
                func_0x00010c0ed100();
              }
              puVar22 = PTR_PTR_1126bc7f8;
              func_0x00010bf35100(PTR_PTR_1126bc7f8);
              _objc_retainAutoreleasedReturnValue();
              uVar46 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
              func_0x00010c269d40(uVar46);
              _objc_retainAutoreleasedReturnValue();
              FUN_107ee904c(puVar22,lVar48,uVar46);
              _objc_release(uVar46);
              func_0x00010c247520(puVar22);
              func_0x00010bf977a0();
              func_0x00010befa120(puVar18);
              lVar42 = lVar48;
              func_0x00010c241220(lVar48);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puStack_5a0;
              func_0x00010bf4b900();
              _objc_release(lVar42);
              if ((int)puVar24 != 0) {
                func_0x00010befa120(puVar19);
              }
            }
            lVar42 = lVar48;
            func_0x00010c09ea00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar42 != 0) {
              lVar42 = lVar48;
              func_0x00010c09ea00(lVar48);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar42;
              func_0x00010c08aca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              uVar46 = uVar12;
              _objc_release(lVar10);
              _objc_release(lVar42);
              lVar42 = lVar48;
              func_0x00010c09ea00(lVar48);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar42;
              func_0x00010c0b4fe0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              _objc_release(lVar10);
              _objc_release(lVar42);
              puVar24 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
              _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
              func_0x00010c021a60(uVar12,uVar46);
              lVar42 = lVar48;
              func_0x00010c241220(lVar48);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar9);
              _objc_release(lVar42);
              _objc_release(puVar24);
            }
            lVar42 = lVar48;
            func_0x00010bf93d20();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar42;
            func_0x000108dfcc4c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar42);
            puVar24 = PTR__OBJC_CLASS___NSData_1126ae778;
            if (lVar10 != 0) {
              lVar42 = lVar10;
              func_0x00010bf93ec0(lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf649c0(puVar24);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar42);
              puVar23 = PTR__OBJC_CLASS___NSData_1126ae778;
              lVar42 = lVar10;
              func_0x00010bf93e80(lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf649c0(puVar23);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar42);
              func_0x00010bf93ce0(lVar10);
              puVar25 = PTR_PTR_1126bf908;
              _objc_alloc(PTR_PTR_1126bf908);
              func_0x00010c020a60();
              lVar42 = lVar48;
              func_0x00010c241220(lVar48);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar45);
              _objc_release(lVar42);
              _objc_release(puVar25);
              _objc_release(puVar23);
              _objc_release(puVar24);
            }
            func_0x00010c241220(lVar48);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar21);
            _objc_release(lVar48);
            _objc_release(lVar10);
            _objc_release(puVar22);
            _objc_release(puVar20);
            uVar47 = uVar47 + 1;
          } while (uVar16 != uVar47);
          uVar16 = uVar28;
          func_0x00010bf52a60();
        }
        _objc_release(uVar28);
        puVar20 = PTR_PTR_1126af4d0;
        if (puVar17 == (undefined *)0x0) {
          puVar20 = PTR_PTR_1126bf8c8;
          func_0x00010c2aeac0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar43;
          func_0x00010bf97200(uVar43);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1968c0(puVar20);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar16);
          puVar17 = puVar20;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR_PTR_1126bc830;
          func_0x00010bf5a940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7bc0();
        }
        else {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar24 = PTR_PTR_1126af4d0;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa74e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar22 = PTR_PTR_1126bc830;
          func_0x00010bf35080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12e3a0();
          func_0x00010c12e860(puVar22);
          puVar23 = PTR_PTR_1126af4d0;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar25 = PTR_PTR_1126af4d0;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar26 = puVar23;
          func_0x00010bf529e0();
          if (puVar26 != (undefined *)0x0) {
            func_0x00010c12caa0(puVar22);
          }
          puVar26 = puVar25;
          func_0x00010bf529e0();
          if (puVar26 != (undefined *)0x0) {
            func_0x00010c12e820(puVar22);
          }
          puVar26 = PTR_PTR_1126bc808;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa6fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar27 = PTR_PTR_1126bc808;
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar29 = puVar26;
          func_0x00010bf529e0();
          if (puVar29 != (undefined *)0x0) {
            func_0x00010c12c1a0(puVar22);
          }
          puVar29 = puVar27;
          func_0x00010bf529e0();
          if (puVar29 != (undefined *)0x0) {
            func_0x00010c12e7e0(puVar22);
          }
          puVar29 = puVar20;
          func_0x00010c0ba200();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar43;
          func_0x00010bf97200(uVar43);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          if ((puVar30 != (undefined *)0x0) &&
             (puVar31 = puVar29, func_0x00010c072060(), ((ulong)puVar31 & 1) == 0)) {
            if (puVar29 == (undefined *)0x0) {
              puVar31 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              func_0x00010c1607a0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar31 = puVar29;
              func_0x00010c0d3c80();
            }
            func_0x00010c0ce860();
            puVar32 = puVar30;
            func_0x00010c0d3c80();
            if (puVar29 != (undefined *)0x0) {
              func_0x00010c0ce860(puVar32);
            }
            uVar16 = uVar43;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf529e0(puVar29);
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf529e0(puVar30);
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf529e0(puVar31);
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar36 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf529e0(puVar32);
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3038,
                                &PTR____CFConstantStringClassReference_110ec3058,puVar37,
                                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
            _objc_release(puVar37);
            _objc_release(puVar36);
            _objc_release(puVar35);
            _objc_release(puVar34);
            _objc_release(puVar33);
            _objc_release(uVar16);
            uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
            uVar16 = uVar43;
            func_0x00010bf97200(uVar43);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar12);
            _objc_release(uVar16);
            _objc_release(puVar32);
            _objc_release(puVar31);
          }
          _objc_release(puVar30);
          _objc_release(puVar29);
          _objc_release(puVar27);
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar23);
          _objc_release(puVar24);
        }
        _objc_release(puVar20);
        uVar16 = uVar43;
        func_0x00010bf978a0();
        iVar2 = (int)uVar16;
        if (iVar2 < 3) {
          if (0 < iVar2) {
            if ((iVar2 == 1) || (iVar2 == 2)) goto LAB_107ee2d54;
LAB_107ee2d0c:
            func_0x00010bf978a0(uVar43);
            func_0x00010c1a1e00(puVar22);
            func_0x00010bf529e0();
            goto LAB_107ee2d5c;
          }
          if (iVar2 != -9999) {
            if (iVar2 != 0) goto LAB_107ee2d0c;
LAB_107ee2cdc:
            func_0x00010c1a1e00(puVar22);
            goto LAB_107ee2d5c;
          }
          puVar20 = puVar18;
          func_0x00010bf529e0();
          if (puVar20 == (undefined *)0x1) goto LAB_107ee2cdc;
          puVar20 = puVar18;
          func_0x00010bf529e0();
          if ((undefined *)0x1 < puVar20) goto LAB_107ee2d54;
        }
        else {
          if (iVar2 < 5) {
            if (iVar2 != 3) {
              if (iVar2 != 4) goto LAB_107ee2d0c;
              goto LAB_107ee2cdc;
            }
          }
          else if ((iVar2 != 5) && (iVar2 != 6)) {
            if (iVar2 != 8) goto LAB_107ee2d0c;
            func_0x00010bf978a0(uVar43);
            goto LAB_107ee2cdc;
          }
LAB_107ee2d54:
          func_0x00010c1a1e00(puVar22);
LAB_107ee2d5c:
          func_0x00010c222da0(puVar22);
        }
        uVar16 = uVar43;
        func_0x00010c0883e0();
        if (uVar16 != 0) {
          uVar16 = uVar43;
          func_0x00010c0883e0(uVar43);
          FUN_107ee8778();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16d500(puVar22);
          func_0x00010c210e00(puVar22);
          _objc_release(uVar16);
        }
        uVar16 = uVar43;
        func_0x00010bf59980(uVar43);
        FUN_107ee8778();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185360(puVar22);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010c245680(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189be0(puVar22);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010bf59980(uVar43);
        FUN_107ee8778();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c192cc0(puVar22);
        _objc_release(uVar16);
        func_0x00010c07b2e0(uVar43);
        func_0x00010c1b3960(puVar22);
        func_0x00010c07b2e0(uVar43);
        func_0x00010c210ec0(puVar22);
        uVar16 = uVar43;
        func_0x00010c2711a0(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216240(puVar22);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010c2711a0(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c210f40(puVar22);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010bf9e140(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199560(puVar22);
        _objc_release(uVar16);
        func_0x00010bf977e0(uVar43);
        func_0x00010c196b00(puVar22);
        uVar16 = uVar43;
        func_0x00010c242360();
        _objc_retainAutoreleasedReturnValue();
        if (uVar16 == 0) {
          uVar28 = uVar43;
          func_0x00010c242340(uVar43);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2062e0(puVar22);
          _objc_release(uVar28);
        }
        else {
          func_0x00010c2062e0(puVar22);
        }
        _objc_release(uVar16);
        func_0x00010c15e540(uVar43);
        func_0x00010c1fce60(puVar22);
        puVar20 = puVar21;
        func_0x00010b7043dc(puVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206280(puVar22);
        _objc_release(puVar20);
        func_0x00010c207320(puVar22);
        uVar16 = uVar43;
        func_0x00010c0c7500(uVar43);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c5800(puVar22);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010bfb3860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar16 != 0) {
          uVar16 = uVar43;
          func_0x00010bfb3860(uVar43);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e3a0(puVar22);
          _objc_release(uVar16);
        }
        puVar20 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bf529e0(puVar18);
        func_0x00010bfed320(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066e00(puVar22);
        func_0x00010c0670a0(puVar22);
        puVar24 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bf529e0(puVar19);
        func_0x00010bfed320(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066880(puVar22);
        func_0x00010c067080(puVar22);
        uVar16 = uVar43;
        func_0x00010bf0bae0();
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar16;
        func_0x00010bf529e0();
        _objc_release(uVar16);
        if (uVar28 != 0) {
          uVar28 = uVar43;
          func_0x00010bf0bae0();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar47 = uVar28;
          _objc_opt_isKindOfClass(uVar28,puVar23);
          uVar16 = uVar28;
          if ((uVar47 & 1) == 0) {
            uVar16 = 0;
          }
          _objc_retain(uVar16);
          _objc_release(uVar28);
          puVar23 = puVar22;
          FUN_107ee8274(puVar22,uVar16);
          _objc_release(uVar16);
          if (((ulong)puVar23 & 1) == 0) {
            uVar46 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
            func_0x00010c0b3760(uVar46);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar46;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf97880(uVar43);
            func_0x00010c0af3c0(uVar12);
            _objc_release(uVar12);
            _objc_release(uVar46);
          }
        }
        uVar16 = uVar43;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar16 != 0) {
          uVar16 = uVar43;
          func_0x00010c23fe00(uVar43);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar22;
          FUN_107ee8640(puVar22,uVar16);
          _objc_release(uVar16);
          if (((ulong)puVar23 & 1) == 0) {
            uVar46 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
            func_0x00010c0b3760(uVar46);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar46;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf97880(uVar43);
            func_0x00010c0af3c0(uVar12);
            _objc_release(uVar12);
            _objc_release(uVar46);
          }
        }
        func_0x00010c1da4e0(puVar22);
        uVar16 = uVar43;
        func_0x00010c245680(uVar43);
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar16;
        func_0x00010b5fbcec();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2062c0(puVar22);
        _objc_release(uVar28);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010c245680(uVar43);
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar16;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar47 = uVar28;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        uVar38 = uVar47;
        func_0x00010c14be80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f5ce0(puVar22);
        _objc_release(uVar38);
        _objc_release(uVar47);
        _objc_release(uVar28);
        _objc_release(uVar16);
        uVar16 = uVar43;
        func_0x00010c245680(uVar43);
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar16;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar47 = uVar28;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        uVar38 = uVar47;
        func_0x00010bf5b0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar39 = uVar38;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185e60(puVar22);
        _objc_release(uVar39);
        _objc_release(uVar38);
        _objc_release(uVar47);
        _objc_release(uVar28);
        _objc_release(uVar16);
        func_0x00010c245680(uVar43);
        _objc_retainAutoreleasedReturnValue();
        ppuVar40 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x38);
        func_0x00010c269d40(ppuVar40);
        _objc_retainAutoreleasedReturnValue();
        param_2 = ppuVar40;
        FUN_107eed28c(uVar43,ppuVar40,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar40);
        _objc_release(uVar43);
        _objc_release(puVar24);
        _objc_release(puVar20);
        _objc_release(puVar22);
        _objc_release(puVar21);
        _objc_release(puStack_5a0);
        _objc_release(puVar19);
LAB_107ee33d8:
        _objc_release(puVar18);
      }
      else if ((uVar16 == 1) && (puVar17 != (undefined *)0x0)) {
        puVar18 = puVar17;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfbdda0(puVar17);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0f7a20(puVar17);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR____CFConstantStringClassReference_110ec2fd8;
        func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec2fb8,
                            &PTR____CFConstantStringClassReference_110ec2fd8,puVar19,
                            *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
        _objc_release(puVar19);
        _objc_release(puVar22);
        _objc_release(puVar20);
        _objc_release(puVar18);
        func_0x00010befa120(puVar15);
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        puVar20 = puVar17;
        func_0x00010bf97200(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar12);
        _objc_release(puVar20);
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
        puVar18 = puVar17;
        func_0x00010bf97200(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar12);
        goto LAB_107ee33d8;
      }
      _objc_release(puVar17);
      lVar49 = lVar49 + 1;
    } while (lVar49 != lVar7);
    lVar7 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107ee35a0; end: 107ee35d7;  */

uint FUN_107ee35a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfdd120(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107ee35d8; end: 107ee35e7;  */

void FUN_107ee35d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ee35e8; end: 107ee384b;  */

void FUN_107ee35e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x00010bddd720(*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  func_0x00010c210e80(*(undefined8 *)(param_1 + 0x20),param_2,1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd9440();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  if (iVar2 == 0) {
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c2320e0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107ee384c;
    puStack_90 = &UNK_110a11d80;
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = (char)uVar8;
    _objc_retain(uVar3);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uStack_80 = uVar3;
    func_0x00010c0f98a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_107ee3988;
    puStack_e0 = &UNK_110a11db0;
    uStack_d8 = *(undefined8 *)(param_1 + 0x20);
    auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x48),*(undefined1 (*) [16])(param_1 + 0x48),
                      8,1);
    uStack_b8 = auVar9._8_8_;
    uStack_c0 = auVar9._0_8_;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = (char)uVar8;
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uStack_d0 = uVar7;
    _objc_retain(uVar8);
    uStack_c8 = uVar8;
    func_0x00010c0f8520(uVar4,param_2,&puStack_a8,uVar6,&puStack_f8);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_80);
  }
  else {
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e500();
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010becf300(0,*(undefined8 *)(param_1 + 0x20),param_2,8,*(undefined8 *)(param_1 + 0x30))
    ;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  func_0x00010bfd9440(uVar3);
  func_0x00010bf3e4e0(uVar6,param_2,1,uVar3);
  return;
}



/* Entry: 107ee384c; end: 107ee3987;  */

void FUN_107ee384c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec30f8,
                        &PTR____CFConstantStringClassReference_110ec3118,puVar3,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_1 = *(long *)(param_1 + 0x20);
    func_0x00010bddefa0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bddf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupBackupDependenciesPreser_112555700,
               uVar4,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupBackupDependenciesDeleti_1125556f8,uVar4,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ee3988; end: 107ee39c3;  */

void FUN_107ee3988(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bddf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupBackupDependenciesPreser_112555700,
               uVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cleanupBackupDependenciesDeleti_1125556f8,uVar1,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ee39c4; end: 107ee3c5f; -[SCCloudSync _cleanupBackupDependenciesPreservingSnapshotsForEntryIds:entryIdsDeletedByServer:serviceTerm:profile:] */

void FUN_107ee39c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c0d3c80();
  func_0x00010c0ce860();
  uVar3 = param_4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107ee3c60;
  puStack_98 = &UNK_110a11e10;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(uVar3);
  ppuVar5 = &puStack_b0;
  uStack_90 = uVar3;
  _objc_retainBlock();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107ee3d58;
  puStack_c8 = &UNK_110845c40;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(uVar4);
  ppuVar6 = &puStack_e0;
  uStack_c0 = uVar4;
  _objc_retainBlock();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107ee3e48;
  puStack_110 = &UNK_11086ebe8;
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(ppuVar6);
  ppuStack_f0 = ppuVar6;
  _objc_retain(uVar4);
  uStack_108 = uVar4;
  _objc_retain(param_5);
  uStack_100 = param_5;
  _objc_retain(param_6);
  uStack_f8 = param_6;
  (*(code *)ppuVar5[2])(ppuVar5,&puStack_128);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(ppuStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(ppuVar6);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar5);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ee3c60; end: 107ee3d4b;  */

void FUN_107ee3c60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      func_0x00010bf6b740(uVar3);
      _objc_release(uVar3);
      _objc_release(param_2);
      goto LAB_107ee3d28;
    }
  }
  (**(code **)(param_2 + 0x10))(param_2,PTR____NSArray0__struct_11034ab48);
LAB_107ee3d28:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ee3d4c; end: 107ee3d57;  */

void FUN_107ee3d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ee3d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ee3d58; end: 107ee3e3b;  */

void FUN_107ee3d58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      func_0x00010bf6b740(uVar3);
      _objc_release(uVar3);
      _objc_release(param_2);
      goto LAB_107ee3e18;
    }
  }
  (**(code **)(param_2 + 0x10))(param_2);
LAB_107ee3e18:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ee3e3c; end: 107ee3e47;  */

void FUN_107ee3e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ee3e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ee3e48; end: 107ee3f6f;  */

void FUN_107ee3e48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107ee3f70;
    puStack_70 = &UNK_11085ae98;
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = param_2;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar4;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    (**(code **)(lVar2 + 0x10))(lVar2,&puStack_88);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ee3f70; end: 107ee40f3;  */

void FUN_107ee3f70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107ee40f4;
    puStack_80 = &UNK_110848ba8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = uVar6;
    lStack_70 = lVar2;
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uStack_68 = uVar7;
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_107ee435c;
    puStack_b8 = &UNK_1108a5040;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lStack_b0 = lVar2;
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = uVar8;
    _objc_retain(uVar5);
    uStack_a0 = uVar5;
    func_0x00010c0f8520(uVar3,param_2,&puStack_98,uVar7,&puStack_d0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_68);
    _objc_release(uStack_78);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107ee40f4; end: 107ee435b;  */

void FUN_107ee40f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126bc7e0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5ae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b24e0;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c0b3760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb00e0(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3178,
                        &PTR____CFConstantStringClassReference_110ec3198,puVar9,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bf6b8a0(PTR_PTR_1126bc838);
    _objc_release(puVar3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010be85f20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010beceb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x20),PTR_s__transferStateAfterLastPageSyncD_112591488,
             *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 107ee435c; end: 107ee436b;  */

void FUN_107ee435c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beceb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__transferStateAfterLastPageSyncD_112591488,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ee436c; end: 107ee44c7; -[SCCloudSync _cleanupBackupDependenciesDeletingAllSnapshotsForEntryIds:serviceTerm:profile:] */

void FUN_107ee436c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf6b740(uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ee44c8; end: 107ee4643;  */

void FUN_107ee44c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c0f98a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    func_0x00010c0f8520(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ee4644; end: 107ee486b;  */

void FUN_107ee4644(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126bc7e0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5ae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b24e0;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c0b3760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb00e0(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar3);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3218,
                        &PTR____CFConstantStringClassReference_110ec3238,puVar8,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78));
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bf6b8a0(PTR_PTR_1126bc838);
    _objc_release(puVar3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010be85f20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010beceb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x20),PTR_s__transferStateAfterLastPageSyncD_112591488,
             *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 107ee486c; end: 107ee487b;  */

void FUN_107ee486c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beceb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__transferStateAfterLastPageSyncD_112591488,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ee487c; end: 107ee496b; -[SCCloudSync _transferStateAfterLastPageSyncDBUpdateCompleteWithServiceTerm:profile:] */

void FUN_107ee487c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ee496c;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar2,param_2,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ee496c; end: 107ee4a63;  */

void FUN_107ee496c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010becf300(0,*(undefined8 *)(param_1 + 0x20),param_2,2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107ee4a64;
  puStack_40 = &UNK_110842e18;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010c0f8520(uVar2,param_2,&puStack_58,0,0);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107ee4a64; end: 107ee4acb;  */

void FUN_107ee4a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7da0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ee4acc; end: 107ee565b; -[SCCloudSync _cleanUncommittedChanges:] */

void FUN_107ee4acc(ulong param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010be6e020();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e500();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126af4c0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    puVar8 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        puVar9 = PTR_PTR_1126af4d0;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa74e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar10 = PTR_PTR_1126af4d0;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar11 = PTR_PTR_1126bc830;
        func_0x00010bf35080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1da4e0();
        puVar12 = puVar11;
        func_0x00010c266980(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16d500(puVar11);
        _objc_release(puVar12);
        puVar12 = puVar11;
        func_0x00010c266b20(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216240(puVar11);
        _objc_release(puVar12);
        func_0x00010c266aa0(puVar11);
        func_0x00010c1b3960(puVar11);
        func_0x00010c12e3a0(puVar11);
        puVar12 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bf529e0(puVar9);
        func_0x00010bfed320(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066e00(puVar11);
        _objc_release(puVar12);
        puVar12 = PTR_PTR_1126af4d0;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar13 = PTR_PTR_1126af4d0;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar14 = puVar13;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          func_0x00010c12caa0(puVar11);
        }
        puVar15 = puVar12;
        func_0x00010bf529e0();
        puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        if (puVar15 != (undefined *)0x0) {
          func_0x00010bf529e0(puVar12);
          func_0x00010bfed320(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066880(puVar11);
          _objc_release(puVar14);
        }
        puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        puVar14 = puVar9;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar14 != (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar9);
            }
            uVar5 = *(undefined8 *)((long)puVar23 * 8);
            func_0x00010c241220(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar15);
            _objc_release(uVar5);
            puVar23 = puVar23 + 1;
          } while (puVar14 != puVar23);
          puVar14 = puVar9;
          func_0x00010bf52a60();
        }
        _objc_release(puVar9);
        func_0x00010c189c00(puVar11);
        puVar14 = puVar11;
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar14 == (undefined *)0x0) {
          puVar14 = puVar9;
          func_0x00010c089820(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar14;
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c185360(puVar11);
          _objc_release(puVar23);
          _objc_release(puVar14);
        }
        FUN_107ee8c84(puVar9);
        func_0x00010c207320(puVar11);
        puVar14 = puVar15;
        func_0x00010b7043dc(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206280(puVar11);
        _objc_release(puVar14);
        puVar14 = puVar9;
        func_0x00010bf529e0();
        if (puVar14 == (undefined *)0x0) {
          func_0x00010befa120(puVar7);
        }
        else {
          puVar14 = puVar11;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          if (puVar14 != (undefined *)0x0) {
            puVar14 = puVar11;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (puVar14 != (undefined *)0x1) goto LAB_107ee50a0;
          }
          puVar14 = puVar9;
          func_0x00010bf529e0();
          if (puVar14 == (undefined *)0x1) {
            func_0x00010c1a1e00(puVar11);
            puVar14 = puVar9;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar14;
            func_0x00010c0ed100();
            if ((int)puVar23 != 2) {
              func_0x00010c0ed100(puVar14);
            }
            func_0x00010c222da0(puVar11);
            _objc_release(puVar14);
          }
          else {
            puVar14 = puVar9;
            func_0x00010bf529e0();
            if ((undefined *)0x1 < puVar14) {
              func_0x00010c1a1e00(puVar11);
              func_0x00010c222da0(puVar11);
            }
          }
        }
LAB_107ee50a0:
        puVar23 = PTR_PTR_1126bc800;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa71e0(puVar23);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c203f00(puVar11);
        puVar16 = PTR_PTR_1126bc808;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa6fc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar17 = PTR_PTR_1126bc808;
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7000(puVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c12c1a0(puVar11);
        puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bf529e0(puVar17);
        func_0x00010bfed320(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066780(puVar11);
        _objc_release(puVar14);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar23);
        _objc_release(puVar15);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar8);
      puVar8 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar8 = puVar7;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010bf6be80(PTR_PTR_1126bc830);
    }
    puVar24 = PTR_PTR_1126af4c0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar12 = PTR_PTR_1126b2508;
    func_0x00010bf350c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f40();
    func_0x00010c12be80(puVar12);
    puVar9 = PTR_PTR_1126af4d0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa74a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010befb760(puVar12);
    func_0x00010c12bea0(puVar12);
    puVar10 = PTR_PTR_1126af4d0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126b24e0;
    func_0x00010bf529e0(puVar10);
    func_0x00010bf529e0();
    func_0x00010bf529e0(puVar7);
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb00c0(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar18);
    puVar13 = puVar10;
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar13 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar10);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(puVar6);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(puVar7);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3278,
                          &PTR____CFConstantStringClassReference_110ec3298,puVar14,
                          *(undefined8 *)(param_1 + 0x78));
      _objc_release(puVar14);
      _objc_release(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar8);
    }
    func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
    puVar13 = PTR_PTR_1126bc800;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf6bec0(PTR_PTR_1126bc828);
    puVar11 = PTR_PTR_1126bc808;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar8 = puVar11;
    func_0x00010bf6bea0(PTR_PTR_1126bc820);
    _objc_release(puVar11);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar24);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf3e200(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0b3760(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010bf6f8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar18);
  puVar7 = puVar8;
  if (puVar8 != puVar6) {
    do {
      puVar8 = puVar6;
      _objc_retain(puVar8);
      _objc_release(puVar7);
      uVar18 = *(undefined8 *)(param_3 + 8);
      func_0x00010bf3e200(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar18;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(param_3 + 8);
      func_0x00010c0b3760(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_3 + 0x50);
      func_0x00010c269d40(uVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010bf6f8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar21);
      _objc_release(uVar4);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar5);
      _objc_release(uVar18);
      puVar7 = puVar8;
    } while (puVar8 != puVar6);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ee565c; end: 107ee586f; -[SCCloudSync _detectAndResolveConflictsForOperation:] */

void FUN_107ee565c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3e200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf6f8e0(param_3,param_2,uVar2,uVar3,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar8 = param_3;
  if (param_3 != lVar7) {
    do {
      param_3 = lVar7;
      _objc_retain(param_3);
      _objc_release(lVar8);
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf3e200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b3760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf6f8e0(param_3,param_2,uVar2,uVar3,uVar5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      lVar8 = param_3;
    } while (param_3 != lVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107ee5870; end: 107ee5d77; -[SCCloudSync _reExecuteOptimisticallyWithBackgroundMediaUploadScheduled:] */

void FUN_107ee5870(undefined *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_148;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010be6e020();
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3760(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e500();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bc7e0;
    puVar4 = param_1;
    func_0x00010be1f660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puStack_148 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puStack_148 != (undefined *)0x0) {
      uVar14 = 0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          puVar6 = PTR_PTR_1126c3198;
          uVar3 = *(undefined8 *)((long)puVar15 * 8);
          uVar5 = uVar3;
          func_0x00010c0f6420(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1356e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6e8e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar5);
          puVar7 = param_1;
          func_0x00010bdfb900();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == puVar6) {
            if (puVar6 != (undefined *)0x0) goto LAB_107ee5af8;
          }
          else {
            uVar5 = *(undefined8 *)(param_1 + 0xc0);
            puVar8 = puVar6;
            func_0x00010c1356e0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12c760(uVar5);
            _objc_release(puVar8);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (puVar7 == (undefined *)0x0) {
              func_0x00010c27dd80(puVar6);
              func_0x00010c0df840();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3318,
                                  &PTR____CFConstantStringClassReference_110ec3338,puVar12,
                                  *(undefined8 *)(param_1 + 0x78));
              _objc_release(puVar12);
              _objc_release(puVar8);
              func_0x00010befa120(puVar4);
            }
            else {
              puVar8 = PTR_PTR_1126bc838;
              func_0x00010bf35060(PTR_PTR_1126bc838);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar7;
              func_0x00010c1356e0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ebce0(puVar8);
              _objc_release(puVar12);
              puVar12 = puVar7;
              func_0x00010c15e800(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d9a60(puVar8);
              _objc_release(puVar12);
              _objc_release(puVar8);
LAB_107ee5af8:
              uVar5 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c269d40(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9afa0(puVar7);
              _objc_release(uVar5);
              if (param_3 != 0) {
                uVar3 = *(undefined8 *)(param_1 + 0x70);
                uVar16 = *(undefined8 *)(param_1 + 0x28);
                uVar5 = *(undefined8 *)(param_1 + 8);
                func_0x00010c0c8940(uVar5);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                FUN_107eac73c(puVar7,uVar3,uVar16,uVar5);
                _objc_release(uVar5);
                if ((int)puVar8 != 0 && uVar14 < 0x14) {
                  uVar14 = uVar14 + 1;
                  uVar9 = *(undefined8 *)(param_1 + 0x88);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar9;
                  func_0x00010c14fc20();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = *(undefined8 *)(param_1 + 8);
                  func_0x00010c0f98a0(uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar10;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar16 = uVar5;
                  func_0x00010c0e0ea0(uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar16;
                  func_0x00010c25ff60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf1a3e0();
                  _objc_release(uVar11);
                  _objc_release(uVar16);
                  _objc_release(uVar3);
                  _objc_release(uVar10);
                  _objc_release(uVar5);
                  _objc_release(uVar9);
                }
              }
            }
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar15 = puVar15 + 1;
        } while (puStack_148 != puVar15);
        puStack_148 = puVar2;
        func_0x00010bf52a60();
      } while (puStack_148 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    func_0x00010bdfa900(param_1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107ee5d78; end: 107ee5d7b;  */

void FUN_107ee5d78(void)

{
  return;
}



/* Entry: 107ee5d7c; end: 107ee5e1f; -[SCCloudSync _getAllSnapIdsForBackgroundUploadOperation:] */

void FUN_107ee5d7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c27dd80();
    uVar1 = 0;
    if ((uVar2 < 10) && ((1L << (uVar2 & 0x3f) & 0x35aU) != 0)) {
      uVar1 = param_3;
      func_0x00010c2424c0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = uVar1;
    func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a11e60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ee5e20; end: 107ee5e27;  */

void FUN_107ee5e20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ee5e28; end: 107ee6053; -[SCCloudSync _resetBackgroundMediaUploadedStateForSyncOperation:completionHandler:] */

void FUN_107ee5e28(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5a48);
  if ((param_3 == 0) || ((uVar1 & 1) == 0)) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    uVar1 = param_3;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126bc810;
    if (uVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 8);
      _objc_retain(puVar4);
      func_0x00010c0f98a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010c0f8520(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ee6054; end: 107ee605b;  */

void FUN_107ee6054(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ee605c; end: 107ee6177;  */

void FUN_107ee605c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar3 = PTR_PTR_1126bc818;
      func_0x00010bf35140(PTR_PTR_1126bc818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ffa0();
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107ee6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ee6178; end: 107ee6183;  */

void FUN_107ee6178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ee6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ee6184; end: 107ee625b; -[SCCloudSync _applicationWillEnterForeground] */

void FUN_107ee6184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = 0;
  _dispatch_time(0,6000000000);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ee625c;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010058c530(uVar1,uVar4,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107ee625c; end: 107ee6263;  */

void FUN_107ee625c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkBackgroundMediaUploadStatu_112554ee0);
  return;
}



/* Entry: 107ee6264; end: 107ee6657; -[SCCloudSync _getFastlaneOperationSnapshot:operation:tacomaEnabled:] */

void FUN_107ee6264(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puStack_150;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar2 = PTR_PTR_1126bc7e0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = param_1;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar11);
  puVar4 = &uStack_130;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
    puStack_150 = (undefined8 *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    puStack_150 = (undefined8 *)0x0;
    lVar11 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar6 = PTR_PTR_1126c3198;
        puVar15 = *(undefined8 **)(lStack_128 + (long)puVar13 * 8);
        puVar4 = puVar15;
        func_0x00010c0f6420(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar15;
        func_0x00010c1356e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e8e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        uVar10 = *(ulong *)(param_1 + 0x58);
        puVar5 = puVar15;
        func_0x00010c1356e0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_5;
        puVar4 = puVar5;
        FUN_107f16538(uVar10,param_5);
        _objc_release(puVar5);
        if ((uVar10 & 1) == 0) {
          puVar7 = puVar6;
          func_0x00010c27dd80();
          uVar12 = (uint)param_5;
          if (puVar7 != (undefined *)0x2) {
            uVar12 = 1;
          }
          puVar7 = puVar6;
          func_0x00010c0d7100();
          if ((int)puVar7 != 0) {
            if (uVar12 != 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c269d40(uVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              param_2 = uVar1;
              FUN_107eeeb20(puVar6,uVar1);
              _objc_release(uVar1);
              if (((ulong)puVar7 & 1) == 0) goto LAB_107ee644c;
            }
            _objc_retainAutorelease(puVar6);
            *param_4 = (long)puVar6;
            _objc_retainAutorelease(puVar15);
            *param_3 = (long)puVar15;
            _objc_release(puVar6);
            goto LAB_107ee65b4;
          }
          if ((uVar12 & 1) == 0) {
            if (*param_4 == 0) {
              param_2 = *(undefined8 *)(param_1 + 0x108);
              puVar7 = puVar6;
              FUN_107eee914(puVar6,param_2);
              if ((int)puVar7 != 0) goto LAB_107ee650c;
            }
          }
          else {
LAB_107ee644c:
            if (*param_4 == 0) {
              param_2 = *(undefined8 *)(param_1 + 0x100);
              puVar7 = puVar6;
              FUN_107eeeab0(puVar6,param_2);
              if ((int)puVar7 != 0) {
LAB_107ee650c:
                _objc_retainAutorelease(puVar6);
                *param_4 = (long)puVar6;
                _objc_retainAutorelease(puVar15);
                *param_3 = (long)puVar15;
                goto LAB_107ee6550;
              }
            }
            puVar7 = puVar6;
            func_0x00010bf8d440();
            if ((int)puVar7 != 0) {
              uVar1 = *(undefined8 *)(param_1 + 8);
              func_0x00010bf1ef00(uVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bf00480();
              _objc_release(uVar1);
              if (((int)puVar7 != 0) && (puVar14 == (undefined *)0x0)) {
                uVar8 = *(ulong *)(param_1 + 8);
                func_0x00010c0c8940();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar8;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar10;
                func_0x00010c06eaa0();
                _objc_release(uVar10);
                _objc_release(uVar8);
                if ((uVar9 & 1) == 0) {
                  _objc_retain(puVar6);
                  _objc_retain(puVar15);
                  _objc_release(puStack_150);
                  puVar14 = puVar6;
                  puStack_150 = puVar15;
                }
                else {
                  puVar14 = (undefined *)0x0;
                }
              }
            }
          }
        }
LAB_107ee6550:
        _objc_release(puVar6);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar4 = &uStack_130;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
LAB_107ee65b4:
    _objc_release(puVar2);
    if ((*param_4 == 0) && (puVar14 != (undefined *)0x0)) {
      _objc_retainAutorelease(puVar14);
      *param_4 = (long)puVar14;
      _objc_retainAutorelease(puStack_150);
      *param_3 = (long)puStack_150;
    }
  }
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af4d0;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = puStack_150[5];
    _objc_retain(puVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa73a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
    puVar3 = PTR_PTR_1126bc830;
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be80(puVar3);
    _objc_release(puVar14);
    puVar14 = puVar2;
    func_0x00010c0b8600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc810;
    uVar1 = puStack_150[5];
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf6bf00(PTR_PTR_1126bc818);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
    return;
  }
  return;
}



/* Entry: 107ee6658; end: 107ee67ef; -[SCCloudSync _removeFailedEntry:] */

void FUN_107ee6658(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af4d0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa73a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
    puVar3 = PTR_PTR_1126bc830;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be80(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc810;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf6bf00(PTR_PTR_1126bc818);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ee67f0; end: 107ee67f7;  */

void FUN_107ee67f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ee67f8; end: 107ee686b; -[SCCloudSync _shouldInfiniteRetryGCSError:] */

long FUN_107ee67f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bdc1500();
  if (lVar1 - 500U < 100) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010bdc1500();
    if (lVar1 - 400U < 100) {
      lVar1 = param_3;
      func_0x00010bdc1520(param_3);
    }
    else {
      lVar1 = 0;
    }
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 107ee686c; end: 107ee686f; -[SCCloudSync _checkEntryChanges:] */

void FUN_107ee686c(void)

{
  return;
}



/* Entry: 107ee6870; end: 107ee6c7b; -[SCCloudSync _skipPendingOperations:deleteEntryIds:] */

void FUN_107ee6870(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_150;
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
  puVar17 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puStack_150 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (puStack_150 != (undefined *)0x0) {
      lVar16 = *plStack_120;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = PTR_PTR_1126c3198;
          uVar18 = *(undefined8 *)(lStack_128 + (long)puVar17 * 8);
          uVar3 = uVar18;
          func_0x00010c0f6420(uVar18);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar18;
          func_0x00010c1356e0(uVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6e8e0(puVar2,param_2,uVar3,uVar5,*(undefined8 *)(param_1 + 0x78));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010bf3a2e0(puVar2,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar5 = *(undefined8 *)(param_1 + 8);
          func_0x00010c0b3760(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c0ac020(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010bf35480(puVar2,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_1;
          func_0x00010c06cf80(param_1);
          puVar9 = puVar2;
          func_0x00010c27dd80(puVar2);
          func_0x00010c0afae0(uVar3,param_2,puVar6,puVar7,param_4,lVar8,puVar9);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar3);
          _objc_release(uVar5);
          uVar10 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf3e200(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 8);
          func_0x00010c0b3760();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + 8);
          func_0x00010c0f98a0();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar13;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar15;
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c114520(puVar2,param_2,uVar3,uVar11,uVar5,uVar14,
                              *(undefined8 *)(param_1 + 0x50));
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar14);
          _objc_release(uVar15);
          _objc_release(uVar13);
          _objc_release(uVar5);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar3);
          _objc_release(uVar10);
          func_0x00010c15e520(uVar18);
          func_0x00010bed6c40(param_1,param_2,uVar18);
          puVar6 = puVar2;
          func_0x00010c1356e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar4);
          _objc_release(puVar2);
          puVar17 = puVar17 + 1;
        } while (puStack_150 != puVar17);
        puStack_150 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puStack_150 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bdfa920(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar17);
  uVar15 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0809e0();
  _objc_release(uVar3);
  _objc_release(uVar15);
  if ((int)uVar5 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_107ee6dac;
    puStack_1e0 = &UNK_110842e18;
    _objc_retain(puVar17);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x107ee6db0;
    puStack_208 = &UNK_1108450c8;
    puStack_1d8 = puVar17;
    _objc_retain(puVar17);
    puStack_200 = puVar17;
    func_0x00010bf6b780(uVar3,param_2,puVar17,&puStack_1f8,&puStack_220);
    _objc_release(uVar3);
    _objc_release(puStack_200);
    _objc_release(puStack_1d8);
  }
  _objc_release(puVar17);
  return;
}



/* Entry: 107ee6c7c; end: 107ee6dab; -[SCCloudSync _deleteTacomaRelatedOperationsWithRequestIDs:] */

void FUN_107ee6c7c(long param_1,undefined8 param_2,undefined8 param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0809e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107ee6dac;
    puStack_60 = &UNK_110842e18;
    _objc_retain(param_3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x107ee6db0;
    puStack_88 = &UNK_1108450c8;
    uStack_58 = param_3;
    _objc_retain(param_3);
    uStack_80 = param_3;
    func_0x00010bf6b780(uVar4,param_2,param_3,&puStack_78,&puStack_a0);
    _objc_release(uVar4);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ee6dac; end: 107ee6db3;  */

void FUN_107ee6dac(void)

{
  return;
}



/* Entry: 107ee6db4; end: 107ee6f67; -[SCCloudSync _updateDependentGraphRemovingSeqNum:] */

void FUN_107ee6db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x108);
        func_0x00010c0e00e0(uVar3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(uVar3,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        lVar5 = *(long *)(param_1 + 0x108);
        func_0x00010c0e00e0(lVar5,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf529e0();
        _objc_release(lVar5);
        if (lVar6 == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x108),param_2,uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c252d60();
  func_0x000107eeed88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  lVar1 = lVar2;
  func_0x00010c252d60(lVar2);
  lVar9 = lVar2;
  func_0x00010c06cf80(lVar2);
  func_0x00010bf3e380(uVar3,param_2,lVar2,lVar1,lVar9,*(undefined1 *)(lVar2 + 200),
                      *(undefined1 *)(lVar2 + 0xc9));
  puVar4 = PTR_PTR_1126d83c8;
  _objc_alloc(PTR_PTR_1126d83c8);
  lVar1 = lVar2;
  func_0x00010c252d60(lVar2);
  lVar9 = lVar2;
  func_0x00010c06cf80(lVar2);
  func_0x00010bfff3a0(puVar4,param_2,lVar1,lVar9,*(undefined1 *)(lVar2 + 200),
                      *(undefined1 *)(lVar2 + 0xc9));
  uVar7 = *(undefined8 *)(lVar2 + 8);
  func_0x00010c253480(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c11b400();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad20();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ee6f68; end: 107ee706b; -[SCCloudSync _announcerBackupStatusUpdate] */

void FUN_107ee6f68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c252d60();
  func_0x000107eeed88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  lVar1 = param_1;
  func_0x00010c252d60(param_1);
  lVar2 = param_1;
  func_0x00010c06cf80(param_1);
  func_0x00010bf3e380(uVar6,param_2,param_1,lVar1,lVar2,*(undefined1 *)(param_1 + 200),
                      *(undefined1 *)(param_1 + 0xc9));
  puVar3 = PTR_PTR_1126d83c8;
  _objc_alloc(PTR_PTR_1126d83c8);
  lVar1 = param_1;
  func_0x00010c252d60(param_1);
  lVar2 = param_1;
  func_0x00010c06cf80(param_1);
  func_0x00010bfff3a0(puVar3,param_2,lVar1,lVar2,*(undefined1 *)(param_1 + 200),
                      *(undefined1 *)(param_1 + 0xc9));
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c253480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c11b400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad20();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107ee706c; end: 107ee712f; -[SCCloudSync invalidate] */

void FUN_107ee706c(long param_1)

{
  int iVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xb0));
    func_0x00010c1285e0(*(undefined8 *)(param_1 + 8));
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x107ee70f0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 107ee7130; end: 107ee714f; -[SCCloudSync _isInvalidated] */

bool FUN_107ee7130(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107ee7150; end: 107ee720b;  */

void FUN_107ee7150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf971e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c2411e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d60(param_2);
    func_0x00010c15e520(param_2);
    func_0x00010bee0ae0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ee720c; end: 107ee72ef; -[SCCloudSync kickoffTacomaBackupForAllPendingOpsIfNeeded] */

void FUN_107ee720c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0809e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 != 0) && (lVar3 = param_1, func_0x00010c074180(), (int)lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 107ee72f0; end: 107ee7327;  */

void FUN_107ee72f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee7328; end: 107ee740b; -[SCCloudSync kickoffSnapGenForAllPendingOpsIfNeeded] */

void FUN_107ee7328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0809e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 != 0) && (lVar3 = param_1, func_0x00010c074180(), (int)lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 107ee740c; end: 107ee7443;  */

void FUN_107ee740c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1501a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee7444; end: 107ee7487; -[SCCloudSync forceTriggerSyncStateRefresh] */

void FUN_107ee7444(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1da0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_triggerSyncStateRefresh_11267cae0);
  return;
}



/* Entry: 107ee7488; end: 107ee7507; -[SCCloudSync _deleteTacomaOperationsAndCloudSyncSnapshots:] */

void FUN_107ee7488(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6b8a0(PTR_PTR_1126bc838,param_2,param_3);
    lVar1 = param_3;
    func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a11f10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa920(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ee7508; end: 107ee750f;  */

void FUN_107ee7508(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1356f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_requestID_11262afd8);
  return;
}



/* Entry: 107ee7510; end: 107ee7577; -[SCCloudSync _getGalleryProfile] */

void FUN_107ee7510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c9500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ee7578; end: 107ee75d7; -[SCCloudSync _optimisticRebaseEnabled] */

undefined8 FUN_107ee7578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c230160();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ee75d8; end: 107ee7607; -[SCCloudSync setCloudSyncRetry:] */

void FUN_107ee75d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ee7608; end: 107ee760f; -[SCCloudSync setStatus:] */

void FUN_107ee7608(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 107ee7610; end: 107ee7617; -[SCCloudSync setIsBackingUpNow:] */

void FUN_107ee7610(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 107ee7618; end: 107ee7623; -[SCCloudSync syncedFirstPage] */

byte FUN_107ee7618(long param_1)

{
  return *(byte *)(param_1 + 0x121) & 1;
}


