/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070b4740; end: 1070b4827;  */

void FUN_1070b4740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == -0x4524111) {
    uVar1 = param_2;
    func_0x00010c252ea0();
    *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (int)uVar1;
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == -0x4524111) {
    uVar1 = param_2;
    func_0x00010bf34f40();
    *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (int)uVar1;
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == -0x4524111) {
    uVar1 = param_2;
    func_0x00010c08e2a0();
    *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (int)uVar1;
  }
  uVar1 = param_2;
  func_0x00010befe640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070b4828; end: 1070b48db; -[SCNMessagingMessage _groupUpdateForGroupInviteLinkStatusMessage:] */

void FUN_1070b4828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c064ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c06a8e0();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126d4b08;
  _objc_alloc(PTR_PTR_1126d4b08);
  func_0x00010c02c7e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070b48dc; end: 1070b4a6f; -[SCNMessagingMessage groupUpdate] */

void FUN_1070b48dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2533e0();
  _objc_release(uVar4);
  uVar4 = 0;
  iVar3 = (int)uVar2;
  uVar2 = uVar1;
  if (iVar3 < 6) {
    if (iVar3 == 3) {
      func_0x00010c253320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0f49e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be24a80(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar3 != 4) goto LAB_1070b4a50;
      func_0x00010c253320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0d5100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be24a60(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar3 == 6) {
    func_0x00010c253320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfce7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24a20(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar3 != 10) goto LAB_1070b4a50;
    func_0x00010c253320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06a8c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24a40(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = param_1;
LAB_1070b4a50:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1070b4a70; end: 1070b4d67; -[SCNMessagingMessage mediaSave] */

undefined * FUN_1070b4a70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
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
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c14b420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126d4b10;
    _objc_alloc();
    lVar2 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar5 = lVar3;
    func_0x00010c0cb5a0(lVar3);
    puVar6 = puVar15;
    func_0x00010c0df880(puVar15,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0c6d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar5);
    lVar9 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar9 != 0) {
      lVar17 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar5);
          }
          uVar16 = *(undefined8 *)(lStack_128 + lVar14 * 8);
          uVar10 = uVar16;
          func_0x00010c0c6c20();
          iVar1 = (int)uVar10;
          if (iVar1 < 1) {
            if (iVar1 == -0x4524111 || iVar1 == 0) {
              ppuVar13 = &PTR_PTR_11098cff0;
              goto LAB_1070b4c24;
            }
          }
          else {
            if (iVar1 == 1) {
              ppuVar13 = &PTR_PTR_11098cfe0;
            }
            else {
              if (iVar1 != 2) goto LAB_1070b4c30;
              ppuVar13 = &PTR_PTR_11098cfe8;
            }
LAB_1070b4c24:
            puVar15 = *ppuVar13;
            _objc_retain(puVar15);
          }
LAB_1070b4c30:
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(uVar16);
          func_0x00010c0df880(puVar11,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8,param_2,puVar11,puVar15);
          _objc_release(puVar11);
          _objc_release(puVar15);
          lVar14 = lVar14 + 1;
        } while (lVar9 != lVar14);
        lVar9 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar9 != 0);
    }
    _objc_release(lVar5);
    puVar15 = puVar8;
    func_0x00010bf51e00(puVar8);
    _objc_release(puVar8);
    _objc_release(lVar5);
    func_0x00010c041620(puVar12,param_2,lVar4,puVar7,puVar15);
    _objc_release(puVar15);
    _objc_release(lVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010c252440();
  if (param_1 - 2U < 4) {
    puVar12 = *(undefined **)(&UNK_10de1fa60 + (param_1 - 2U) * 8);
  }
  else {
    puVar12 = (undefined *)0x1;
  }
  return puVar12;
}



/* Entry: 1070b4d68; end: 1070b4d9b; -[SCNMessagingMessage sendStatus] */

undefined8 FUN_1070b4d68(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c252440();
  if (param_1 - 2U < 4) {
    uVar1 = *(undefined8 *)(&UNK_10de1fa60 + (param_1 - 2U) * 8);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1070b4d9c; end: 1070b4e1b; -[SCNMessagingMessage screenCaptureSource] */

long FUN_1070b4d9c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c150ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf31280();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar2 = (int)uVar5 - 1;
  lVar1 = 0;
  if (uVar2 < 3) {
    lVar1 = (ulong)uVar2 + 1;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1070b4e1c; end: 1070b4e3f; -[SCNMessagingMessage copyWithZone:] */

undefined8 FUN_1070b4e1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b4e40; end: 1070b4f47; -[SCNMessagingMessage _isUnseenByRecipients] */

long FUN_1070b4e40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c157500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c157500();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf529e0();
    if (lVar6 == 1) {
      lVar5 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15de20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000107d6bef0(lVar5,param_1);
      _objc_release(param_1);
      _objc_release(lVar5);
    }
    else {
      lVar6 = 0;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 1070b4f48; end: 1070b4f87; -[SCNMessagingMessage isUnreadByRecipients] */

ulong FUN_1070b4f48(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07ea80();
  if ((int)uVar1 != 0) {
    func_0x00010c079200(param_1);
    return (ulong)((uint)param_1 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be44f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isUnseenByRecipients_11256ed80);
  return param_1;
}



/* Entry: 1070b4f88; end: 1070b504b; -[SCNMessagingMessage isUnseenMessage:] */

ulong FUN_1070b4f88(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x000107d6bef0(param_1,puVar2);
    uVar3 = (ulong)((uint)uVar3 ^ 1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010c0820a0();
    uVar3 = param_1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1070b504c; end: 1070b5273; -[SCNMessagingMessage mentionedUserIds] */

undefined * FUN_1070b504c(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_10f3ff2cd);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar9 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0ca740();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar8 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c0ca740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bffc4a0();
      _objc_release(puVar2);
      _objc_release(puVar8);
      puVar8 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c0ca740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          uVar3 = *(undefined8 *)((long)puVar10 * 8);
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9);
          _objc_release(uVar3);
          puVar10 = puVar10 + 1;
        } while (puVar8 != puVar10);
        puVar8 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      puVar8 = puVar9;
      func_0x00010bf51e00();
      _objc_setAssociatedObject(param_1,&UNK_10f3ff2cd,puVar8,0x301);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = puVar9;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar9;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c0e9d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x1) {
      puVar5 = puVar9;
      func_0x00010c0cc0c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15de20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000107d6c0ac(puVar5,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar5);
      puVar9 = (undefined *)(ulong)((uint)puVar6 ^ 1);
    }
    else {
      puVar9 = (undefined *)0x1;
    }
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  return puVar9;
}



/* Entry: 1070b5274; end: 1070b537f; -[SCNMessagingMessage isOpenedByAtleastOneRecipient] */

uint FUN_1070b5274(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e9d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 == 1) {
      lVar5 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15de20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000107d6c0ac(lVar5,param_1);
      _objc_release(param_1);
      _objc_release(lVar5);
      uVar7 = (uint)lVar6 ^ 1;
    }
    else {
      uVar7 = 1;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar7;
}



/* Entry: 1070b5380; end: 1070b54ef; -[SCNMessagingMessage screenshotState] */

undefined * FUN_1070b5380(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_2b0;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined *puVar8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c151380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar16 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar4 = *(undefined8 *)(lVar17 * 8);
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13);
      _objc_release(uVar4);
      lVar17 = lVar17 + 1;
    } while (lVar16 != lVar17);
    lVar16 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar19 = puVar13;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uVar11 = (uint)&uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar13;
  func_0x00010c151240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = puVar19;
  func_0x00010bf52a60();
  if (puVar13 != (undefined *)0x0) {
    lVar16 = *plStack_230;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_230 != lVar16) {
          _objc_enumerationMutation(puVar19);
        }
        uVar4 = *(undefined8 *)(lStack_238 + (long)puVar18 * 8);
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(uVar4);
        puVar18 = puVar18 + 1;
      } while (puVar13 != puVar18);
      puVar13 = puVar19;
      uVar11 = (uint)&uStack_240;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined *)0x0);
  }
  _objc_release(puVar19);
  puVar19 = puVar5;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar13 = puVar5;
  if (uVar11 == 0) {
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar13;
    func_0x00010bf52a60();
    if (puVar19 != (undefined *)0x0) {
      lVar16 = *plStack_4a0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lVar16) {
            _objc_enumerationMutation(puVar13);
          }
          puVar14 = *(undefined8 **)(lStack_4a8 + (long)puVar18 * 8);
          puVar6 = puVar14;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c071ae0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar14;
            func_0x00010c082120();
            _objc_release(puVar6);
            if (((ulong)puVar7 & 1) != 0) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar6);
          }
          puVar18 = puVar18 + 1;
        } while (puVar19 != puVar18);
        puVar19 = puVar13;
        func_0x00010bf52a60();
      } while (puVar19 != (undefined *)0x0);
    }
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    _objc_retain(puVar5);
    puVar19 = puVar5;
    func_0x00010bf52a60();
    if (puVar19 != (undefined *)0x0) {
      lVar16 = *plStack_460;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_460 != lVar16) {
            _objc_enumerationMutation(puVar5);
          }
          puVar14 = *(undefined8 **)(lStack_468 + (long)puVar18 * 8);
          puVar6 = puVar14;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c071ae0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar14;
            func_0x00010c082120();
            _objc_release(puVar6);
            if ((((ulong)puVar7 & 1) != 0) &&
               (puVar6 = puVar14, func_0x00010c079300(), (int)puVar6 == 0)) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar6);
          }
          puVar18 = puVar18 + 1;
        } while (puVar19 != puVar18);
        puVar19 = puVar5;
        func_0x00010bf52a60();
      } while (puVar19 != (undefined *)0x0);
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_1070b5878:
  _objc_release(puVar13);
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  lStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  plStack_4e0 = (long *)0x0;
  puVar13 = puVar5;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_4f0;
  puVar18 = puVar13;
  func_0x00010bf52a60();
  if (puVar18 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar16 = *plStack_4e0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_4e0 != lVar16) {
          _objc_enumerationMutation(puVar13);
        }
        puVar19 = *(undefined **)(lStack_4e8 + (long)puVar15 * 8);
        if (uVar11 == 0) {
          uVar2 = 0;
        }
        else {
          puVar8 = puVar19;
          func_0x00010c079300();
          uVar2 = (uint)puVar8;
        }
        puVar8 = puVar19;
        puVar6 = param_2;
        func_0x00010c082120();
        uVar2 = (uint)puVar8 ^ 1 | uVar2;
        if (((uVar2 | uVar11 ^ 1) & 1) == 0) {
          puVar8 = puVar19;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          puVar6 = param_2;
          func_0x00010c071ae0();
          _objc_release(puVar8);
          if (((ulong)puVar9 & 1) != 0) goto LAB_1070b5958;
        }
        else if ((uVar2 & 1) != 0) {
LAB_1070b5958:
          if (puVar14 != (undefined8 *)0x0) {
            puVar8 = puVar19;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar14;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            puVar6 = puVar7;
            func_0x00010bf433a0();
            _objc_release(puVar7);
            _objc_release(puVar8);
            if (puVar9 != (undefined *)0xffffffffffffffff) goto LAB_1070b59dc;
          }
          _objc_retain(puVar19);
          goto LAB_1070b5a20;
        }
LAB_1070b59dc:
        puVar15 = puVar15 + 1;
      } while (puVar18 != puVar15);
      puVar6 = &uStack_4f0;
      puVar18 = puVar13;
      func_0x00010bf52a60();
    } while (puVar18 != (undefined *)0x0);
    puVar19 = (undefined *)0x0;
  }
LAB_1070b5a20:
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar10);
    puVar13 = puVar5;
    func_0x00010bf2c580();
    if ((int)puVar13 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = puVar5;
      func_0x00010c07d0e0();
      if (((ulong)puVar13 & 1) == 0) {
        *(undefined1 *)puVar6 = 0;
      }
      puVar13 = puVar5;
      func_0x00010bf490e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar10);
    _objc_release(puVar5);
    return puVar13;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return puVar19;
LAB_1070b5870:
  _objc_retain(puVar14);
  goto LAB_1070b5878;
}



/* Entry: 1070b54f0; end: 1070b565f; -[SCNMessagingMessage screenRecordingState] */

undefined * FUN_1070b54f0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_190;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  undefined *puVar8;
  
  uVar11 = (uint)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c151240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar12;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_110;
    do {
      lVar17 = 0;
      do {
        if (*plStack_110 != lVar16) {
          _objc_enumerationMutation(lVar12);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar17 * 8);
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar4);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = lVar12;
      uVar11 = (uint)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar12);
  puVar18 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar18 = puVar2;
  if (uVar11 == 0) {
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar18;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar12 = *plStack_380;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_380 != lVar12) {
            _objc_enumerationMutation(puVar18);
          }
          puVar14 = *(undefined8 **)(lStack_388 + (long)puVar13 * 8);
          puVar6 = puVar14;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c071ae0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar14;
            func_0x00010c082120();
            _objc_release(puVar6);
            if (((ulong)puVar7 & 1) != 0) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar6);
          }
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        puVar5 = puVar18;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    _objc_retain(puVar2);
    puVar5 = puVar2;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar12 = *plStack_340;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          puVar14 = *(undefined8 **)(lStack_348 + (long)puVar13 * 8);
          puVar6 = puVar14;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c071ae0();
          if (((ulong)puVar7 & 1) == 0) {
            puVar7 = puVar14;
            func_0x00010c082120();
            _objc_release(puVar6);
            if ((((ulong)puVar7 & 1) != 0) &&
               (puVar6 = puVar14, func_0x00010c079300(), (int)puVar6 == 0)) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar6);
          }
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        puVar5 = puVar2;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_1070b5878:
  _objc_release(puVar18);
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  puVar5 = puVar2;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_3d0;
  puVar13 = puVar5;
  func_0x00010bf52a60();
  if (puVar13 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar12 = *plStack_3c0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_3c0 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        puVar18 = *(undefined **)(lStack_3c8 + (long)puVar15 * 8);
        if (uVar11 == 0) {
          uVar1 = 0;
        }
        else {
          puVar8 = puVar18;
          func_0x00010c079300();
          uVar1 = (uint)puVar8;
        }
        puVar8 = puVar18;
        puVar6 = param_2;
        func_0x00010c082120();
        uVar1 = (uint)puVar8 ^ 1 | uVar1;
        if (((uVar1 | uVar11 ^ 1) & 1) == 0) {
          puVar8 = puVar18;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          puVar6 = param_2;
          func_0x00010c071ae0();
          _objc_release(puVar8);
          if (((ulong)puVar9 & 1) != 0) goto LAB_1070b5958;
        }
        else if ((uVar1 & 1) != 0) {
LAB_1070b5958:
          if (puVar14 != (undefined8 *)0x0) {
            puVar8 = puVar18;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar14;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            puVar6 = puVar7;
            func_0x00010bf433a0();
            _objc_release(puVar7);
            _objc_release(puVar8);
            if (puVar9 != (undefined *)0xffffffffffffffff) goto LAB_1070b59dc;
          }
          _objc_retain(puVar18);
          goto LAB_1070b5a20;
        }
LAB_1070b59dc:
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
      puVar6 = &uStack_3d0;
      puVar13 = puVar5;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined *)0x0);
    puVar18 = (undefined *)0x0;
  }
LAB_1070b5a20:
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar10);
    puVar18 = puVar2;
    func_0x00010bf2c580();
    if ((int)puVar18 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = puVar2;
      func_0x00010c07d0e0();
      if (((ulong)puVar18 & 1) == 0) {
        *(undefined1 *)puVar6 = 0;
      }
      puVar18 = puVar2;
      func_0x00010bf490e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar10);
    _objc_release(puVar2);
    return puVar18;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return puVar18;
LAB_1070b5870:
  _objc_retain(puVar14);
  goto LAB_1070b5878;
}



/* Entry: 1070b5660; end: 1070b5a7f;  */

ulong FUN_1070b5660(ulong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  ulong uVar5;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  uVar10 = param_1;
  if (param_3 == 0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar8 = *plStack_260;
      do {
        uVar9 = 0;
        do {
          if (*plStack_260 != lVar8) {
            _objc_enumerationMutation(uVar10);
          }
          puVar11 = *(undefined8 **)(lStack_268 + uVar9 * 8);
          puVar3 = puVar11;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c071ae0();
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = puVar11;
            func_0x00010c082120();
            _objc_release(puVar3);
            if (((ulong)puVar4 & 1) != 0) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar3);
          }
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
        uVar2 = uVar10;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar8 = *plStack_220;
      do {
        uVar9 = 0;
        do {
          if (*plStack_220 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          puVar11 = *(undefined8 **)(lStack_228 + uVar9 * 8);
          puVar3 = puVar11;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c071ae0();
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = puVar11;
            func_0x00010c082120();
            _objc_release(puVar3);
            if ((((ulong)puVar4 & 1) != 0) &&
               (puVar3 = puVar11, func_0x00010c079300(), (int)puVar3 == 0)) goto LAB_1070b5870;
          }
          else {
            _objc_release(puVar3);
          }
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
        uVar2 = param_1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_1070b5878:
  _objc_release(uVar10);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uVar10 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &uStack_2b0;
  uVar2 = uVar10;
  func_0x00010bf52a60();
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = *plStack_2a0;
    do {
      uVar12 = 0;
      do {
        if (*plStack_2a0 != lVar8) {
          _objc_enumerationMutation(uVar10);
        }
        uVar9 = *(ulong *)(lStack_2a8 + uVar12 * 8);
        if (param_3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar5 = uVar9;
          func_0x00010c079300();
          uVar1 = (uint)uVar5;
        }
        uVar5 = uVar9;
        puVar3 = param_2;
        func_0x00010c082120();
        uVar1 = (uint)uVar5 ^ 1 | uVar1;
        if (((uVar1 | param_3 ^ 1) & 1) == 0) {
          uVar5 = uVar9;
          func_0x00010c0cb8c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          puVar3 = param_2;
          func_0x00010c071ae0();
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) goto LAB_1070b5958;
        }
        else if ((uVar1 & 1) != 0) {
LAB_1070b5958:
          if (puVar11 != (undefined8 *)0x0) {
            uVar5 = uVar9;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar11;
            func_0x00010c0cb9a0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            puVar3 = puVar4;
            func_0x00010bf433a0();
            _objc_release(puVar4);
            _objc_release(uVar5);
            if (uVar6 != 0xffffffffffffffff) goto LAB_1070b59dc;
          }
          _objc_retain(uVar9);
          goto LAB_1070b5a20;
        }
LAB_1070b59dc:
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      puVar3 = &uStack_2b0;
      uVar2 = uVar10;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar9 = 0;
  }
LAB_1070b5a20:
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar7);
    uVar10 = param_1;
    func_0x00010bf2c580();
    if ((int)uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = param_1;
      func_0x00010c07d0e0();
      if ((uVar10 & 1) == 0) {
        *(undefined1 *)puVar3 = 0;
      }
      uVar10 = param_1;
      func_0x00010bf490e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(param_1);
    return uVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return uVar9;
LAB_1070b5870:
  _objc_retain(puVar11);
  goto LAB_1070b5878;
}



/* Entry: 1070b5a80; end: 1070b5b07;  */

ulong FUN_1070b5a80(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf2c580();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c07d0e0();
    if ((uVar1 & 1) == 0) {
      *param_3 = 0;
    }
    uVar1 = param_1;
    func_0x00010bf490e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b5b08; end: 1070b5b2f;  */

undefined ** FUN_1070b5b08(long param_1)

{
  if (param_1 + 1U < 0x17) {
    return (undefined **)(&PTR_PTR_11098c770)[param_1 + 1U];
  }
  return &PTR____CFConstantStringClassReference_110db6dd8;
}



/* Entry: 1070b5b30; end: 1070b5ceb;  */

bool FUN_1070b5b30(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  lVar6 = param_1;
  lVar7 = param_1;
  if ((int)lVar3 == 8) {
    lVar3 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f49e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_1070b5bf0;
    func_0x00010bfcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c27dd80();
    if (lVar2 == 3) {
      bVar1 = true;
      goto LAB_1070b5c40;
    }
    func_0x00010bfcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c27dd80();
    if (lVar2 == 1) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010bfcf4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27dd80();
      if (lVar3 == 7) {
        bVar1 = true;
      }
      else {
        lVar3 = param_1;
        func_0x00010bfcf4e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        bVar1 = lVar4 == 4;
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
  }
  else {
    _objc_release(lVar2);
LAB_1070b5bf0:
    func_0x00010bfcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c27dd80();
    if (lVar2 == 2) {
      bVar1 = false;
      goto LAB_1070b5c40;
    }
    func_0x00010bfcf4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c27dd80();
    bVar1 = lVar2 != 10;
  }
  _objc_release(lVar7);
LAB_1070b5c40:
  _objc_release(lVar6);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1070b5cec; end: 1070b5e7f;  */

ulong FUN_1070b5cec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar5 = param_1;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf52a60();
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar7 = *plStack_120;
    do {
      uVar8 = 0;
      uVar4 = uVar3;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(ulong *)(lStack_128 + uVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c07ea80();
        if (((uVar3 & 1) != 0) || (uVar2 = uVar6, FUN_1070b5b30(), uVar3 = uVar4, (int)uVar2 != 0))
        {
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar4);
          uVar3 = uVar6;
          if ((uVar4 != 0) && (uVar2 = uVar6, func_0x00010bf433a0(uVar6,param_2,uVar4), uVar2 != 1))
          {
            uVar3 = uVar4;
          }
          func_0x00010bf51e00();
          _objc_release(uVar4);
          _objc_release(uVar4);
          _objc_release(uVar6);
        }
        uVar8 = uVar8 + 1;
        uVar4 = uVar3;
      } while (uVar1 != uVar8);
      uVar1 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    uVar5 = param_1;
    func_0x00010c07ea80();
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c243480();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c07d3c0();
      if ((uVar5 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010c243480();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c07c480();
        if ((uVar5 & 1) == 0) {
          uVar8 = param_1;
          func_0x00010c243480();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010c07d360();
          if ((uVar5 & 1) == 0) {
            uVar5 = param_1;
            func_0x00010c07d080(param_1);
          }
          else {
            uVar5 = 1;
          }
          _objc_release(uVar8);
        }
        else {
          uVar5 = 1;
        }
        _objc_release(uVar3);
      }
      else {
        uVar5 = 1;
      }
      _objc_release(uVar1);
    }
    _objc_release(param_1);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return uVar3;
}



/* Entry: 1070b5e80; end: 1070b5f5f;  */

ulong FUN_1070b5e80(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c07ea80();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c243480();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c07d3c0();
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c243480();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c07c480();
      if ((uVar4 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010c243480();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07d360();
        if ((uVar4 & 1) == 0) {
          uVar4 = param_1;
          func_0x00010c07d080(param_1);
        }
        else {
          uVar4 = 1;
        }
        _objc_release(uVar3);
      }
      else {
        uVar4 = 1;
      }
      _objc_release(uVar2);
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070b5f60; end: 1070b6027;  */

undefined8 FUN_1070b5f60(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c27dd80();
  if ((long)uVar2 < 0x15) {
    if (1 < uVar2 - 5) {
      if (uVar2 == 3) {
        uVar2 = param_1;
        func_0x00010c075ee0();
        uVar3 = 0;
        if ((int)uVar2 == 0) {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
        if (uVar2 != 7) {
          uVar3 = 0;
        }
      }
      goto LAB_1070b5ff0;
    }
  }
  else {
    if (0x21 < uVar2) {
      uVar3 = 0;
      goto LAB_1070b5ff0;
    }
    if ((1L << (uVar2 & 0x3f) & 0x380400000U) == 0) {
      uVar1 = 4;
      if (uVar2 != 0x15) {
        uVar1 = 0;
      }
      uVar3 = 2;
      if ((1L << (uVar2 & 0x3f) & 0x1800000U) == 0) {
        uVar3 = uVar1;
      }
      goto LAB_1070b5ff0;
    }
  }
  uVar3 = 1;
LAB_1070b5ff0:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070b6028; end: 1070b60d3;  */

uint FUN_1070b6028(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c07d940();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c07ea80(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010c243480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c100380();
    if ((uVar2 == 2) && (uVar2 = param_1, func_0x00010bf2c560(), (uVar2 & 1) == 0)) {
      uVar2 = param_1;
      func_0x00010c07d080(param_1);
      param_3 = param_3 & ((uint)uVar2 ^ 1);
    }
    else {
      param_3 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    param_3 = 0;
  }
  _objc_release(param_1);
  return param_3;
}



/* Entry: 1070b60d4; end: 1070b61db;  */

uint FUN_1070b60d4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_1 == 0) || (uVar1 = param_1, func_0x00010c07ea80(), (int)uVar1 == 0)) ||
     (uVar1 = param_1, func_0x00010c07d940(), (int)uVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0791e0();
    if ((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010bf9fe80(), (uVar2 & 1) == 0)) &&
       (uVar2 = param_3, func_0x000100bf0c60(param_3,0), (uVar2 & 1) == 0)) {
      uVar2 = param_1;
      FUN_1070b61dc(param_1,param_3);
      uVar3 = (uint)uVar2 & (param_5 ^ 1);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070b61dc; end: 1070b626b;  */

bool FUN_1070b61dc(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c073740();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1070b626c; end: 1070b6367;  */

uint FUN_1070b626c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010c07d940(), (int)uVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c07c1e0();
    if ((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010bf9fe80(), (uVar2 & 1) == 0)) &&
       (uVar2 = param_3, func_0x000100bf0c60(param_3,0), (uVar2 & 1) == 0)) {
      uVar2 = param_1;
      FUN_1070b61dc(param_1,param_3);
      uVar3 = (uint)uVar2 & (param_5 ^ 1);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070b6368; end: 1070b63bb;  */

long FUN_1070b6368(int param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c07ea80();
  lVar1 = 0;
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c07d680(param_2);
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1070b63bc; end: 1070b65d7;  */

bool FUN_1070b63bc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c121240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  lVar2 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar3 - 1U <= uVar1;
}



/* Entry: 1070b65d8; end: 1070b68ab;  */

undefined8 FUN_1070b65d8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100380();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c56c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c121240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if ((uVar4 != 0) || (uVar2 == 2)) {
    if ((long)uVar2 < 3) {
      if (uVar2 == 0) {
        uVar1 = param_1;
        func_0x00010c076bc0();
        if ((uVar1 & 1) != 0) {
          uVar5 = 4;
          goto LAB_1070b6758;
        }
        uVar1 = param_1;
        func_0x00010c121240();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4b900();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) goto LAB_1070b66e4;
      }
      else {
        if (uVar2 == 1) {
          uVar5 = 5;
          goto LAB_1070b6758;
        }
        if (uVar2 == 2) {
          uVar1 = param_1;
          func_0x00010c07d080();
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010bf2c560();
            uVar5 = 6;
            if ((int)uVar1 != 0) {
              uVar5 = 7;
            }
          }
          else {
            uVar5 = 8;
          }
          goto LAB_1070b6758;
        }
      }
    }
    else if (uVar2 - 3 < 3) {
LAB_1070b66e4:
      uVar5 = 6;
      goto LAB_1070b6758;
    }
  }
  uVar1 = param_1;
  func_0x00010bfdbd60();
  if ((uVar1 & 1) == 0) {
    if (uVar3 + 1 < 4) {
      uVar5 = *(undefined8 *)(&UNK_10de1fa80 + (uVar3 + 1) * 8);
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 9;
  }
LAB_1070b6758:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1070b68ac; end: 1070b68ef; -[SCSnapState isScreenshotted] */

undefined8 FUN_1070b68ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c151a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf04a00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b68f0; end: 1070b690f;  */

bool FUN_1070b68f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067ec0(param_3);
  return 0 < (int)param_3;
}



/* Entry: 1070b6910; end: 1070b6953; -[SCSnapState isReplayed] */

undefined8 FUN_1070b6910(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1316e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf04a00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b6954; end: 1070b6973;  */

bool FUN_1070b6954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067ec0(param_3);
  return 0 < (int)param_3;
}



/* Entry: 1070b6974; end: 1070b69b7; -[SCSnapState isScreenRecorded] */

undefined8 FUN_1070b6974(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c150fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf04a00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b69b8; end: 1070b69d7;  */

bool FUN_1070b69b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067ec0(param_3);
  return 0 < (int)param_3;
}



/* Entry: 1070b69d8; end: 1070b6a8f;  */

undefined1 FUN_1070b69d8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be1a0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070b6a90; end: 1070b6aa3;  */

void FUN_1070b6a90(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1070b6aa4; end: 1070b6c1f; -[SCChatConversationUpdaterListenerAnnouncer description] */

void FUN_1070b6aa4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_1070b6c20(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070b6c20; end: 1070b6c7f;  */

void FUN_1070b6c20(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1070b6c80; end: 1070b6f2b; -[SCChatConversationUpdaterListenerAnnouncer addListener:] */

undefined8 FUN_1070b6c80(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_11098c898;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_1070b6f2c(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_1070b706c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1070b6e34:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1070b6e54;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_1070b6f2c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_1070b6f2c(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_1070b706c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1070b6e34;
    }
  }
  uVar9 = 1;
LAB_1070b6e54:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1070b6f2c; end: 1070b706b;  */

void FUN_1070b6f2c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1070b7540();
LAB_1070b7068:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1070b7068;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1070b706c; end: 1070b70b3;  */

void FUN_1070b706c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1070b70b4; end: 1070b72e3; -[SCChatConversationUpdaterListenerAnnouncer removeListener:] */

void FUN_1070b70b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_1070b7268;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_1070b711c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1070b706c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_1070b7268;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_1070b711c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_11098c898;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_1070b6f2c(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_1070b706c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_1070b7268;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_1070b7268:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b72e4; end: 1070b73eb; -[SCChatConversationUpdaterListenerAnnouncer didInitialConversationFetchFailForChatIdentifier:] */

void FUN_1070b72e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_1070b6c20(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf77580(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b73ec; end: 1070b74f7; -[SCChatConversationUpdaterListenerAnnouncer didConversationViewModelChange:metricsTracker:] */

void FUN_1070b73ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_1070b6c20(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf74300();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b74f8; end: 1070b751f; -[SCChatConversationUpdaterListenerAnnouncer .cxx_destruct] */

void FUN_1070b74f8(long param_1)

{
  FUN_1070b7554(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1070b7520; end: 1070b753f; -[SCChatConversationUpdaterListenerAnnouncer .cxx_construct] */

void FUN_1070b7520(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1070b7540; end: 1070b7553;  */

undefined * FUN_1070b7540(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 1070b7554; end: 1070b75ab;  */

long FUN_1070b7554(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1070b75ac; end: 1070b75bb;  */

void FUN_1070b75ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11098c898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1070b75bc; end: 1070b75db;  */

void FUN_1070b75bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11098c898;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1070b75dc; end: 1070b7643;  */

void FUN_1070b75dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1070b7644; end: 1070b7647;  */

void FUN_1070b7644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1070b7648; end: 1070b7713; +[SCChatActiveConversationDataRequest resumeActiveConversationWithConversationId:metadata:chatIdentifier:] */

void FUN_1070b7648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cb390;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7714; end: 1070b7837; +[SCChatActiveConversationDataRequest setActiveConversationWithConversationId:metadata:chatIdentifier:configuration:metricsTracker:] */

void FUN_1070b7714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126cb390;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7838; end: 1070b78cf; +[SCChatActiveConversationDataRequest unsetActiveConversationWithConversationId:chatIdentifier:] */

void FUN_1070b7838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb390;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b78d0; end: 1070b78f3; -[SCChatActiveConversationDataRequest copyWithZone:] */

undefined8 FUN_1070b78d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b78f4; end: 1070b7937; -[SCChatActiveConversationDataRequest internalInit] */

void FUN_1070b78f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8940;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b7938; end: 1070b79fb; -[SCChatActiveConversationDataRequest matchSetActiveConversation:resumeActiveConversation:unsetActiveConversation:] */

void FUN_1070b7938(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b79fc; end: 1070b7a8b; -[SCChatActiveConversationDataRequest .cxx_destruct] */

void FUN_1070b79fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1070b7a8c; end: 1070b7ad3; +[SCChatActiveConversationMetadata group] */

void FUN_1070b7a8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7ad4; end: 1070b7b67; +[SCChatActiveConversationMetadata userWithUsername:userId:] */

void FUN_1070b7ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cbba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7b68; end: 1070b7b8b; -[SCChatActiveConversationMetadata copyWithZone:] */

undefined8 FUN_1070b7b68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b7b8c; end: 1070b7c03; -[SCChatActiveConversationMetadata hash] */

void FUN_1070b7b8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f8948;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b7c04; end: 1070b7c47; -[SCChatActiveConversationMetadata internalInit] */

void FUN_1070b7c04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8948;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b7c48; end: 1070b7cff; -[SCChatActiveConversationMetadata isEqual:] */

long FUN_1070b7c48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070b7cd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070b7ce4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1070b7ce4;
        }
        goto LAB_1070b7cd8;
      }
    }
    lVar3 = 0;
  }
LAB_1070b7ce4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070b7d00; end: 1070b7d83; -[SCChatActiveConversationMetadata matchGroup:user:] */

void FUN_1070b7d00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b7d84; end: 1070b7db3; -[SCChatActiveConversationMetadata .cxx_destruct] */

void FUN_1070b7d84(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070b7db4; end: 1070b7e1f; +[SCChatActiveConversationNeedsIDResolvingDataRequest resumeActiveConversationWithChatIdentifier:] */

void FUN_1070b7db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbab0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7e20; end: 1070b7ee3; +[SCChatActiveConversationNeedsIDResolvingDataRequest setActiveConversationWithChatIdentifier:configuration:metricsTracker:] */

void FUN_1070b7e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cbab0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7ee4; end: 1070b7f4f; +[SCChatActiveConversationNeedsIDResolvingDataRequest suspendActiveConversationWithChatIdentifier:] */

void FUN_1070b7ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbab0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7f50; end: 1070b7fbb; +[SCChatActiveConversationNeedsIDResolvingDataRequest unsetActiveConversationWithChatIdentifier:] */

void FUN_1070b7f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbab0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070b7fbc; end: 1070b7fdf; -[SCChatActiveConversationNeedsIDResolvingDataRequest copyWithZone:] */

undefined8 FUN_1070b7fbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b7fe0; end: 1070b8023; -[SCChatActiveConversationNeedsIDResolvingDataRequest internalInit] */

void FUN_1070b7fe0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b8024; end: 1070b811b; -[SCChatActiveConversationNeedsIDResolvingDataRequest matchSetActiveConversation:resumeActiveConversation:suspendActiveConversation:unsetActiveConversation:] */

void FUN_1070b8024(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_1070b80ec;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_1070b80ec;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_1070b80ec;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_1070b80ec;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_1070b80ec:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070b811c; end: 1070b817b; -[SCChatActiveConversationNeedsIDResolvingDataRequest .cxx_destruct] */

void FUN_1070b811c(long param_1)

{
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



/* Entry: 1070b817c; end: 1070b8227; -[SCChatActiveConversationPartialUpdateRequest initWithToken:metricsTracker:] */

undefined1 *
FUN_1070b817c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8958;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070b8228; end: 1070b824b; -[SCChatActiveConversationPartialUpdateRequest copyWithZone:] */

undefined8 FUN_1070b8228(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b824c; end: 1070b82bf; -[SCChatActiveConversationPartialUpdateRequest hash] */

undefined8 * FUN_1070b824c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1070b8340:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070b834c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1070b834c;
        }
        goto LAB_1070b8340;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070b834c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070b82c0; end: 1070b8367; -[SCChatActiveConversationPartialUpdateRequest isEqual:] */

long FUN_1070b82c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070b8340:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070b834c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1070b834c;
        }
        goto LAB_1070b8340;
      }
    }
    lVar3 = 0;
  }
LAB_1070b834c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070b8368; end: 1070b836f; -[SCChatActiveConversationPartialUpdateRequest token] */

undefined8 FUN_1070b8368(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070b8370; end: 1070b8377; -[SCChatActiveConversationPartialUpdateRequest metricsTracker] */

undefined8 FUN_1070b8370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070b8378; end: 1070b83a7; -[SCChatActiveConversationPartialUpdateRequest .cxx_destruct] */

void FUN_1070b8378(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070b83a8; end: 1070b83af; -[SCInternalConversationServices internalConversationManager] */

undefined8 FUN_1070b83a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070b83b0; end: 1070b83b7; -[SCInternalConversationServices internalActionHandler] */

undefined8 FUN_1070b83b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070b83b8; end: 1070b83bf; -[SCInternalConversationServices typingNotificationSender] */

undefined8 FUN_1070b83b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070b83c0; end: 1070b83c7; -[SCInternalConversationServices animationDataCoordinator] */

undefined8 FUN_1070b83c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070b83c8; end: 1070b83cf; -[SCInternalConversationServices mediaStateManager] */

undefined8 FUN_1070b83c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070b83d0; end: 1070b83d7; -[SCInternalConversationServices conversationUpdatePublisher] */

undefined8 FUN_1070b83d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070b83d8; end: 1070b83df; -[SCInternalConversationServices reactionHandler] */

undefined8 FUN_1070b83d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070b83e0; end: 1070b83e7; -[SCInternalConversationServices conversationLifecycleEventPublisher] */

undefined8 FUN_1070b83e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070b83e8; end: 1070b83ef; -[SCInternalConversationServices conversationInteractionEventPublisher] */

undefined8 FUN_1070b83e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1070b83f0; end: 1070b83f7; -[SCInternalConversationServices conversationParticipantProvider] */

undefined8 FUN_1070b83f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1070b83f8; end: 1070b8487; -[SCInternalConversationServices .cxx_destruct] */

void FUN_1070b83f8(long param_1)

{
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



/* Entry: 1070b8488; end: 1070b8583; -[SCChatPageLoadMetricsEmitter initWithGrapheneLoggerV2:perfLogger:performer:circumstanceEngine:] */

undefined1 *
FUN_1070b8488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f8968;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
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



/* Entry: 1070b8584; end: 1070b8647; -[SCChatPageLoadMetricsEmitter trackResult:] */

void FUN_1070b8584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070b8648; end: 1070b86e7;  */

void FUN_1070b8648(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      lVar1 = param_2;
      func_0x00010c27dd80();
      if (lVar1 == 0) {
        func_0x00010be07ca0(param_1);
      }
      else {
        func_0x00010be07ce0(param_1);
      }
      func_0x00010be07cc0(param_1);
      func_0x00010be08160(param_1);
    }
    else {
      func_0x00010be07c80(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070b86e8; end: 1070b86fb; -[SCChatPageLoadMetricsEmitter _emitGraphenePageLoadError] */

/* WARNING: Possible PIC construction at 0x0001084601fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010845fda8) */
/* WARNING: Removing unreachable block (ram,0x000108460158) */

void FUN_1070b86e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar11;
  undefined *puVar12;
  double dVar13;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar7 = &PTR____CFConstantStringClassReference_110daeeb8;
  ppuVar9 = (undefined **)0x1;
  ppuVar4 = &puStack_80;
  puVar11 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar7;
  _objc_retain(&PTR____CFConstantStringClassReference_110daeeb8);
  plVar10 = (long *)0x0;
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110daeeb8);
    ppuVar3 = ppuVar7;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110daeeb8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110daeeb8);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar3);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&puStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_110a49738;
    param_5 = (long *)0x1;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x000107c278ac(&puStack_68);
    ppuVar9 = ppuVar4;
    unaff_x22 = &puStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar9 = ppuVar4;
      unaff_x22 = &puStack_80;
    }
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110daeeb8);
    _objc_release(&PTR____CFConstantStringClassReference_110daeeb8);
    puVar12 = &UNK_10845feb8;
    ppuVar5 = ppuVar4;
    __Unwind_Resume();
    ppuVar1 = &puStack_80;
    while( true ) {
      ppuVar8 = (undefined **)((long)ppuVar1 + -0xc0);
      *(undefined8 *)((long)ppuVar1 + -0x50) = unaff_x26;
      *(long **)((long)ppuVar1 + -0x48) = unaff_x25;
      *(undefined8 **)((long)ppuVar1 + -0x40) = unaff_x24;
      *(undefined8 **)((long)ppuVar1 + -0x38) = unaff_x23;
      *(undefined ***)((long)ppuVar1 + -0x30) = unaff_x22;
      *(long **)((long)ppuVar1 + -0x28) = plVar10;
      *(undefined ***)((long)ppuVar1 + -0x20) = ppuVar4;
      *(undefined ***)((long)ppuVar1 + -0x18) = ppuVar7;
      *(undefined1 **)((long)ppuVar1 + -0x10) = puVar11;
      *(undefined **)((long)ppuVar1 + -8) = puVar12;
      *(undefined8 *)((long)ppuVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar7 = ppuVar3;
      ppuVar4 = ppuVar9;
      plVar10 = param_5;
      _objc_retain(ppuVar3);
      _objc_retain(ppuVar9);
      _objc_retain(param_5);
      dVar13 = param_1;
      if (ppuVar5 != (undefined **)0x0) {
        plVar6 = (long *)ppuVar5[1];
        ppuVar7 = (undefined **)&UNK_110a49788;
        (**(code **)(*plVar6 + 0x28))();
        dVar13 = param_1;
        if ((int)plVar6 != 0) {
          plVar10 = (long *)ppuVar5[1];
          _objc_retain(ppuVar3);
          if (ppuVar3 == (undefined **)0x0) {
            ppuVar7 = (undefined **)&UNK_10f49a75e;
            dVar13 = param_1;
          }
          else {
            ppuVar7 = ppuVar3;
            _objc_retainAutorelease(ppuVar3);
            func_0x00010bdc3520();
            dVar13 = param_1;
          }
          _objc_release(ppuVar3);
          func_0x000107c278b8((undefined1 *)((long)ppuVar1 + -0xa0),ppuVar7);
          _objc_retain(ppuVar9);
          if (ppuVar9 == (undefined **)0x0) {
            ppuVar7 = (undefined **)&UNK_10f49a75e;
          }
          else {
            _objc_retainAutorelease(ppuVar9);
            ppuVar7 = ppuVar9;
            func_0x00010bdc3520(ppuVar9);
          }
          _objc_release(ppuVar9);
          func_0x000107c278b8((undefined1 *)((long)ppuVar1 + -0x88),ppuVar7);
          _objc_retain(param_5);
          if (param_5 == (long *)0x0) {
            unaff_x25 = (long *)&UNK_10f49a75e;
          }
          else {
            _objc_retainAutorelease(param_5);
            unaff_x25 = param_5;
            func_0x00010bdc3520();
          }
          _objc_release(param_5);
          func_0x000107c278b8((undefined1 *)((long)ppuVar1 + -0x70),unaff_x25);
          *(undefined8 *)((long)ppuVar1 + -0xc0) = 0;
          *(undefined8 *)((long)ppuVar1 + -0xb8) = 0;
          *(undefined8 *)((long)ppuVar1 + -0xb0) = 0;
          func_0x000107c27984((undefined1 *)((long)ppuVar1 + -0xc0),
                              (undefined1 *)((long)ppuVar1 + -0xa0),
                              (undefined1 *)((long)ppuVar1 + -0x58),3);
          ppuVar7 = (undefined **)&UNK_110a49788;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          *(undefined1 **)((long)ppuVar1 + -0xa8) = (undefined1 *)((long)ppuVar1 + -0xc0);
          func_0x000107c278ac((undefined1 *)((long)ppuVar1 + -0xa8));
          lVar2 = 0;
          ppuVar4 = ppuVar8;
          plVar10 = param_6;
          do {
            if (*(char *)((long)ppuVar1 + lVar2 + -0x59) < '\0') {
              __ZdlPv(*(undefined8 *)((long)ppuVar1 + lVar2 + -0x70));
            }
            lVar2 = lVar2 + -0x18;
            unaff_x24 = (undefined8 *)((long)ppuVar1 + -0xc0);
          } while (lVar2 != -0x48);
        }
      }
      _objc_release(param_5);
      _objc_release(ppuVar9);
      ppuVar8 = ppuVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar1 + -0x58)) break;
      ___stack_chk_fail();
      _objc_release(param_5);
      unaff_x23 = (undefined8 *)((long)ppuVar1 + -0xa0);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != unaff_x23);
      _objc_release(param_5);
      _objc_release(ppuVar9);
      _objc_release(ppuVar3);
      ppuVar5 = ppuVar8;
      __Unwind_Resume();
      *(undefined8 *)((long)ppuVar1 + -0x100) = unaff_d9;
      *(double *)((long)ppuVar1 + -0xf8) = unaff_d8;
      *(undefined ***)((long)ppuVar1 + -0xf0) = ppuVar8;
      *(long **)((long)ppuVar1 + -0xe8) = param_5;
      *(undefined ***)((long)ppuVar1 + -0xe0) = ppuVar9;
      *(undefined ***)((long)ppuVar1 + -0xd8) = ppuVar3;
      *(undefined1 **)((long)ppuVar1 + -0xd0) = (undefined1 *)((long)ppuVar1 + -0x10);
      *(undefined **)((long)ppuVar1 + -200) = &SUB_108460198;
      puVar11 = (undefined1 *)((long)ppuVar1 + -0xd0);
      _objc_retain(ppuVar7);
      _objc_retain(ppuVar4);
      _objc_retain(plVar10);
      if (ppuVar5 == (undefined **)0x0) {
        _objc_release(plVar10);
        _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
        return;
      }
      param_1 = dVar13 * 1000.0;
      param_6 = (long *)(long)param_1;
      puVar12 = &UNK_108460200;
      ppuVar1 = (undefined **)((long)ppuVar1 + -0x100);
      ppuVar3 = ppuVar7;
      ppuVar9 = ppuVar4;
      param_5 = plVar10;
      unaff_x22 = ppuVar5;
      unaff_d8 = dVar13;
    }
    return;
  }
  return;
}



/* Entry: 1070b86fc; end: 1070b88df; -[SCChatPageLoadMetricsEmitter _emitGraphenePageLoadMetricsForResult:] */

void FUN_1070b86fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf508a0(param_4);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_1070b8f04(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0cfd40(param_4);
  func_0x0001070b8eb4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0f4a40(param_4);
  FUN_1070b9114();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c13ca20(param_4);
  func_0x0001070b8e8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010845f994(uVar6,uVar1,uVar2,uVar3,uVar4,uVar5,1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_4;
  func_0x00010bf508a0(param_4);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_1070b8f04(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0cfd40(param_4);
  func_0x0001070b8eb4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0f4a40(param_4);
  FUN_1070b9114();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c13ca20(param_4);
  func_0x0001070b8e8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf957c0(param_4);
  dVar7 = param_1;
  func_0x00010c251020(param_4);
  _objc_release(param_4);
  func_0x00010845f898(param_1 - dVar7,uVar6,uVar1,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b88e0; end: 1070b8a7b; -[SCChatPageLoadMetricsEmitter _emitGraphenePageReloadMetricsForResult:] */

void FUN_1070b88e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0cfd40(param_4);
  func_0x0001070b8eb4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0f4a40(param_4);
  FUN_1070b9114();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c13ca20(param_4);
  func_0x0001070b8e8c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  FUN_1070b8f94(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846065c(uVar5,uVar1,uVar2,uVar3,uVar4,1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_4;
  func_0x00010c0cfd40(param_4);
  func_0x0001070b8eb4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0f4a40(param_4);
  FUN_1070b9114();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c13ca20(param_4);
  func_0x0001070b8e8c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  FUN_1070b8f94(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf957c0(param_4);
  dVar6 = param_1;
  func_0x00010c251020(param_4);
  _objc_release(param_4);
  func_0x000108460580(param_1 - dVar6,uVar5,uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070b8a7c; end: 1070b8c2b; -[SCChatPageLoadMetricsEmitter _emitGraphenePageLoadStepMetricsForResult:] */

void FUN_1070b8a7c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
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
  dVar18 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_3;
  func_0x00010c270ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_140;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        uVar14 = *(undefined8 *)(lStack_138 + lVar13 * 8);
        uVar15 = *(undefined8 *)(param_1 + 8);
        lVar4 = param_3;
        func_0x00010c0cfd40(param_3);
        func_0x0001070b8eb4();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c0f4a40(param_3);
        FUN_1070b9114();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar14;
        func_0x00010c2536e0(uVar14);
        func_0x0001070b8edc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95860(uVar14);
        dVar17 = dVar18;
        func_0x00010c2511a0(uVar14);
        dVar18 = dVar18 - dVar17;
        func_0x000108460198(uVar15,lVar4,lVar5,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      puVar12 = &uStack_140;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(long *)(param_3 + 0x18) != 0) {
    _objc_retain(puVar12);
    _objc_opt_new(puVar7);
    puVar8 = puVar12;
    func_0x00010c270ce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010050471c();
    func_0x00010bef7f60(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar12;
    func_0x00010c27dd80();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9eb98;
    if (puVar8 != (undefined8 *)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e9ebb8;
    }
    _objc_retain(ppuVar1);
    func_0x00010bf957c0(puVar12);
    dVar17 = dVar18;
    func_0x00010c251020(puVar12);
    _objc_release(puVar12);
    func_0x00010c0df720((dVar18 - dVar17) * 1000.0,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    puVar11 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010c010c80(puVar10);
    _objc_release(ppuVar1);
    _objc_release(puVar11);
    func_0x00010c0aa440(*(undefined8 *)(param_3 + 0x18));
    _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}


