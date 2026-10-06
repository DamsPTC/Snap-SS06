/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ef72d4; end: 108ef739f;  */

void FUN_108ef72d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1195e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f03d78,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126dc758;
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar5,param_2,uVar4,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_38;
  _objc_retain(lStack_38);
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_retain(puVar5);
    puVar1 = puRam000000011372ee68;
    puRam000000011372ee68 = puVar5;
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 108ef73a0; end: 108ef74a3;  */

double FUN_108ef73a0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0af8;
  func_0x00010c067fc0();
  dVar5 = 0.0;
  if (ppuVar3 == (undefined **)0x0) {
    _objc_retain(param_1);
    lVar2 = lRam000000011372ee70;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108ef72d4;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_1;
    _objc_retain(param_1);
    uVar4 = param_1;
    if (lVar2 != -1) {
      func_0x000107c27d9c(0x11372ee70,&puStack_68);
      uVar4 = uStack_48;
    }
    uVar1 = uRam000000011372ee68;
    _objc_retain(uRam000000011372ee68);
    _objc_release(uVar4);
    _objc_release(param_1);
    uVar4 = uVar1;
    func_0x00010bf9f520(uVar1);
    dVar5 = (double)(int)uVar4 / 1000.0;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return dVar5;
}



/* Entry: 108ef74a4; end: 108ef74af;  */

void FUN_108ef74a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b10,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 108ef74b0; end: 108ef7517; +[ChatReplyTimeStampConfig descriptor] */

void FUN_108ef74b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ee78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcbe60,
                        &PTR____CFConstantStringClassReference_110f03d98,&PTR_DAT_11329d038,
                        &PTR_DAT_11329d050,1,8,0x1c);
    puRam000000011372ee78 = puVar1;
  }
  return;
}



/* Entry: 108ef7518; end: 108ef757f; +[LargeGroupsSettings descriptor] */

void FUN_108ef7518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ee80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcbf00,
                        &PTR____CFConstantStringClassReference_110f03db8,&PTR_DAT_11329d070,
                        &PTR_DAT_11329d088,1,0x10,0x1c);
    puRam000000011372ee80 = puVar1;
  }
  return;
}



/* Entry: 108ef7580; end: 108ef75ff;  */

void FUN_108ef7580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bfceb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c03d4e0(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f52c98);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef7600; end: 108ef78a3;  */

undefined1 * FUN_108ef7600(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar11 = PTR_PTR_1126b3560;
  _objc_alloc();
  lVar1 = param_1;
  FUN_108ef7580(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010c01bce0();
  puStack_140 = puVar2;
  _objc_release(lVar13);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_138 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    puVar11 = (undefined *)*puStack_120;
    do {
      lVar13 = 0;
      do {
        if ((undefined *)*puStack_120 != puVar11) {
          _objc_enumerationMutation(param_1);
        }
        lVar12 = *(long *)(lStack_128 + lVar13 * 8);
        puVar3 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        lVar4 = lVar12;
        func_0x00010c2923e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar3);
        _objc_release(lVar4);
        lVar4 = lVar12;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        if (lVar5 == 0) {
          func_0x00010c294420(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar4);
        puVar6 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        func_0x00010c01bce0();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(lVar12);
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b3568;
  _objc_alloc();
  puVar3 = puStack_140;
  puVar9 = puStack_140;
  puVar10 = puVar2;
  func_0x00010c03d400();
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar1 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_180;
  puStack_158 = puVar3;
  pcStack_148 = FUN_108ef78a4;
  puStack_170 = puVar6;
  puStack_168 = puVar2;
  puStack_160 = puVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puStack_178 = PTR_PTR_1126ff280;
  lStack_180 = lVar1;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)((long)plVar7 + 8);
    *(undefined **)((long)plVar7 + 8) = puVar9;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x10);
    *(undefined **)((long)plVar7 + 0x10) = puVar10;
    _objc_release(uVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 *)plVar7;
}



/* Entry: 108ef78a4; end: 108ef7947; -[SCSelectionGroupServices initWithSelectionGroupObservableRepository:selectionGroupDataFetcher:] */

undefined1 *
FUN_108ef78a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff280;
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



/* Entry: 108ef7948; end: 108ef794f; -[SCSelectionGroupServices selectionGroupObservableRepository] */

undefined8 FUN_108ef7948(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef7950; end: 108ef7957; -[SCSelectionGroupServices selectionGroupDataFetcher] */

undefined8 FUN_108ef7950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef7958; end: 108ef7987; -[SCSelectionGroupServices .cxx_destruct] */

void FUN_108ef7958(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ef7988; end: 108ef7b67; -[SCSelectionGroup initWithGroupId:groupName:title:subtitle:lastSenderUserIds:orderedParticipants:lastInteractionTimestamp:creationTimestamp:notificationStatus:isRecentlyActive:] */

undefined8 *
FUN_108ef7988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126ff288;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
  }
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



/* Entry: 108ef7b68; end: 108ef7b8b; -[SCSelectionGroup copyWithZone:] */

undefined8 FUN_108ef7b68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef7b8c; end: 108ef7c53; -[SCSelectionGroup hash] */

undefined8 * FUN_108ef7b8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_78;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ef7d84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ef7d90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[9];
                    if (puVar6 != (undefined8 *)param_3[9]) {
                      func_0x00010c071ae0();
                      goto LAB_108ef7d90;
                    }
                    goto LAB_108ef7d84;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108ef7d90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ef7c54; end: 108ef7dab; -[SCSelectionGroup isEqual:] */

long FUN_108ef7c54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ef7d84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ef7d90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_108ef7d90;
                    }
                    goto LAB_108ef7d84;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ef7d90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ef7dac; end: 108ef7db3; -[SCSelectionGroup groupId] */

undefined8 FUN_108ef7dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef7db4; end: 108ef7dbb; -[SCSelectionGroup groupName] */

undefined8 FUN_108ef7db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ef7dbc; end: 108ef7dc3; -[SCSelectionGroup title] */

undefined8 FUN_108ef7dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ef7dc4; end: 108ef7dcb; -[SCSelectionGroup subtitle] */

undefined8 FUN_108ef7dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ef7dcc; end: 108ef7dd3; -[SCSelectionGroup lastSenderUserIds] */

undefined8 FUN_108ef7dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ef7dd4; end: 108ef7ddb; -[SCSelectionGroup orderedParticipants] */

undefined8 FUN_108ef7dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ef7ddc; end: 108ef7de3; -[SCSelectionGroup lastInteractionTimestamp] */

undefined8 FUN_108ef7ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ef7de4; end: 108ef7deb; -[SCSelectionGroup creationTimestamp] */

undefined8 FUN_108ef7de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108ef7dec; end: 108ef7df3; -[SCSelectionGroup notificationStatus] */

undefined1 FUN_108ef7dec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ef7df4; end: 108ef7dfb; -[SCSelectionGroup isRecentlyActive] */

undefined1 FUN_108ef7df4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ef7dfc; end: 108ef7e73; -[SCSelectionGroup .cxx_destruct] */

void FUN_108ef7dfc(long param_1)

{
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



/* Entry: 108ef7e74; end: 108ef7fdf; -[SCSelectionGroupParticipant initWithUserId:username:displayName:color:bitmojiAvatarId:bitmojiSelfieId:] */

undefined1 *
FUN_108ef7e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ff290;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ef7fe0; end: 108ef8003; -[SCSelectionGroupParticipant copyWithZone:] */

undefined8 FUN_108ef7fe0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef8004; end: 108ef80a7; -[SCSelectionGroupParticipant hash] */

undefined8 * FUN_108ef8004(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ef8188:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ef8194;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_108ef8194;
                }
                goto LAB_108ef8188;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108ef8194:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ef80a8; end: 108ef81af; -[SCSelectionGroupParticipant isEqual:] */

long FUN_108ef80a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ef8188:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ef8194;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_108ef8194;
                }
                goto LAB_108ef8188;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ef8194:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ef81b0; end: 108ef81b7; -[SCSelectionGroupParticipant userId] */

undefined8 FUN_108ef81b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef81b8; end: 108ef81bf; -[SCSelectionGroupParticipant username] */

undefined8 FUN_108ef81b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef81c0; end: 108ef81c7; -[SCSelectionGroupParticipant displayName] */

undefined8 FUN_108ef81c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ef81c8; end: 108ef81cf; -[SCSelectionGroupParticipant color] */

undefined8 FUN_108ef81c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ef81d0; end: 108ef81d7; -[SCSelectionGroupParticipant bitmojiAvatarId] */

undefined8 FUN_108ef81d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ef81d8; end: 108ef81df; -[SCSelectionGroupParticipant bitmojiSelfieId] */

undefined8 FUN_108ef81d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ef81e0; end: 108ef823f; -[SCSelectionGroupParticipant .cxx_destruct] */

void FUN_108ef81e0(long param_1)

{
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



/* Entry: 108ef8240; end: 108ef82bf;  */

void FUN_108ef8240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c03d4e0(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f52c78);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef82c0; end: 108ef83a3;  */

void FUN_108ef82c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3560;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_108ef8240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10901d7c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01bce0(puVar1,param_2,uVar2,uVar3,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ef83a4; end: 108ef8467;  */

void FUN_108ef83a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c03d4e0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  func_0x00010c01bce0();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ef8468; end: 108ef84db; -[SCSelectionStoriesLastPostTimeRepositoryServices initWithSelectionStoriesLastPostTimeRepository:] */

undefined1 * FUN_108ef8468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff298;
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



/* Entry: 108ef84dc; end: 108ef84e3; -[SCSelectionStoriesLastPostTimeRepositoryServices selectionStoriesLastPostTimeRepository] */

undefined8 FUN_108ef84dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef84e4; end: 108ef84ef; -[SCSelectionStoriesLastPostTimeRepositoryServices .cxx_destruct] */

void FUN_108ef84e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ef84f0; end: 108ef8693; -[SCSendFlowScope initWithSource:config:uiContainer:delegate:] */

undefined8
FUN_108ef84f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0c0220(param_4);
  puVar2 = PTR_PTR_1126c33e0;
  _objc_alloc(PTR_PTR_1126c33e0);
  func_0x00010c033480();
  func_0x00010c0d9840(puVar1);
  _objc_release(puVar2);
  func_0x00010c04a620(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108ef8694; end: 108ef86cb;  */

void FUN_108ef8694(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 108ef86cc; end: 108ef87e3; -[SCSendFlowScope initWithSource:config:triggerEventSubject:uiContainer:delegate:] */

undefined1 *
FUN_108ef86cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ff2a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ef87e4; end: 108ef87eb; -[SCSendFlowScope source] */

undefined8 FUN_108ef87e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef87ec; end: 108ef87f3; -[SCSendFlowScope config] */

undefined8 FUN_108ef87ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef87f4; end: 108ef87fb; -[SCSendFlowScope triggerEventSubject] */

undefined8 FUN_108ef87f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ef87fc; end: 108ef8803; -[SCSendFlowScope uiContainer] */

undefined8 FUN_108ef87fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ef8804; end: 108ef881b; -[SCSendFlowScope delegate] */

void FUN_108ef8804(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef881c; end: 108ef8823; -[SCSendFlowScope sendTriggeredSubject] */

undefined8 FUN_108ef881c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ef8824; end: 108ef8873; -[SCSendFlowScope .cxx_destruct] */

void FUN_108ef8824(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ef8874; end: 108ef8a33; -[SCSendFlowPreviewConfig initWithPreviewConfig:snapEditorConfig:snapDocEditor:workflowDelegate:cameraPreviewDelegate:setupMultisnapViewObservable:setCaptureDiscardRelatedDataObservable:batchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable:logDirectSnapCreateForTimelineWithSessionIDObservable:] */

undefined1 *
FUN_108ef8874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff2a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
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



/* Entry: 108ef8a34; end: 108ef8a3b; -[SCSendFlowPreviewConfig previewConfig] */

undefined8 FUN_108ef8a34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef8a3c; end: 108ef8a43; -[SCSendFlowPreviewConfig snapEditorConfig] */

undefined8 FUN_108ef8a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef8a44; end: 108ef8a4b; -[SCSendFlowPreviewConfig snapDocEditor] */

undefined8 FUN_108ef8a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ef8a4c; end: 108ef8a63; -[SCSendFlowPreviewConfig workflowDelegate] */

void FUN_108ef8a4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef8a64; end: 108ef8a7b; -[SCSendFlowPreviewConfig cameraPreviewDelegate] */

void FUN_108ef8a64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef8a7c; end: 108ef8a87; -[SCSendFlowPreviewConfig setCameraPreviewDelegate:] */

void FUN_108ef8a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 108ef8a88; end: 108ef8a8f; -[SCSendFlowPreviewConfig setupMultisnapViewObservable] */

undefined8 FUN_108ef8a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ef8a90; end: 108ef8abf; -[SCSendFlowPreviewConfig setSetupMultisnapViewObservable:] */

void FUN_108ef8a90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ef8ac0; end: 108ef8ac7; -[SCSendFlowPreviewConfig setCaptureDiscardRelatedDataObservable] */

undefined8 FUN_108ef8ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ef8ac8; end: 108ef8af7; -[SCSendFlowPreviewConfig setSetCaptureDiscardRelatedDataObservable:] */

void FUN_108ef8ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef8af8; end: 108ef8aff; -[SCSendFlowPreviewConfig batchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable] */

undefined8 FUN_108ef8af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ef8b00; end: 108ef8b2f; -[SCSendFlowPreviewConfig setBatchCaptureDidCreateSnapWithBatchCaptureSessionIDObservable:] */

void FUN_108ef8b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef8b30; end: 108ef8b37; -[SCSendFlowPreviewConfig logDirectSnapCreateForTimelineWithSessionIDObservable] */

undefined8 FUN_108ef8b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108ef8b38; end: 108ef8b67; -[SCSendFlowPreviewConfig setLogDirectSnapCreateForTimelineWithSessionIDObservable:] */

void FUN_108ef8b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef8b68; end: 108ef8be3; -[SCSendFlowPreviewConfig .cxx_destruct] */

void FUN_108ef8b68(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ef8be4; end: 108ef8d63; -[SCSendFlowSendToConfig initWithSelectedItems:sendToAttribution:recipientConfiguration:storyConfiguration:previewConfiguration:shareSheetConfiguration:contentConfiguration:] */

undefined1 *
FUN_108ef8be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff2b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ef8d64; end: 108ef8d6b; -[SCSendFlowSendToConfig sendToAttribution] */

undefined8 FUN_108ef8d64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef8d6c; end: 108ef8d73; -[SCSendFlowSendToConfig selectedItems] */

undefined8 FUN_108ef8d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef8d74; end: 108ef8d7b; -[SCSendFlowSendToConfig recipientConfiguration] */

undefined8 FUN_108ef8d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ef8d7c; end: 108ef8d83; -[SCSendFlowSendToConfig storyConfiguration] */

undefined8 FUN_108ef8d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ef8d84; end: 108ef8d8b; -[SCSendFlowSendToConfig previewConfiguration] */

undefined8 FUN_108ef8d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ef8d8c; end: 108ef8d93; -[SCSendFlowSendToConfig shareSheetConfiguration] */

undefined8 FUN_108ef8d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ef8d94; end: 108ef8d9b; -[SCSendFlowSendToConfig contentConfiguration] */

undefined8 FUN_108ef8d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ef8d9c; end: 108ef8e07; -[SCSendFlowSendToConfig .cxx_destruct] */

void FUN_108ef8d9c(long param_1)

{
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



/* Entry: 108ef8e08; end: 108ef8e6f; +[SCSendFlowConfig previewAndSendToWithPreviewConfig:] */

void FUN_108ef8e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8228;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef8e70; end: 108ef8f07; +[SCSendFlowConfig sendToWithSendToConfig:mediaHandler:] */

void FUN_108ef8e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c8228;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef8f08; end: 108ef8f4f; +[SCSendFlowConfig stackedCameraPreviewAndSendTo] */

void FUN_108ef8f08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8228;
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



/* Entry: 108ef8f50; end: 108ef8f73; -[SCSendFlowConfig copyWithZone:] */

undefined8 FUN_108ef8f50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef8f74; end: 108ef8fb7; -[SCSendFlowConfig internalInit] */

void FUN_108ef8f74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff2b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef8fb8; end: 108ef906b; -[SCSendFlowConfig matchStackedCameraPreviewAndSendTo:previewAndSendTo:sendTo:] */

void FUN_108ef8fb8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ef906c; end: 108ef90a7; -[SCSendFlowConfig .cxx_destruct] */

void FUN_108ef906c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ef90a8; end: 108ef9113; +[SCSendFlowStepResult finishWithMediaHandler:] */

void FUN_108ef90a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef9114; end: 108ef915f; +[SCSendFlowStepResult moveBack] */

void FUN_108ef9114(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef9160; end: 108ef91f7; +[SCSendFlowStepResult moveToNextWithUiContainer:mediaHandler:] */

void FUN_108ef9160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef91f8; end: 108ef925b; +[SCSendFlowStepResult preloadNextWithUiContainer:] */

void FUN_108ef91f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef925c; end: 108ef92a7; +[SCSendFlowStepResult released] */

void FUN_108ef925c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef92a8; end: 108ef92cb; -[SCSendFlowStepResult copyWithZone:] */

undefined8 FUN_108ef92a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef92cc; end: 108ef930f; -[SCSendFlowStepResult internalInit] */

void FUN_108ef92cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff2c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef9310; end: 108ef942f; -[SCSendFlowStepResult matchPreloadNext:moveToNext:moveBack:finish:released:] */

void FUN_108ef9310(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_108ef93f8;
    }
    if (param_3 == 0) goto LAB_108ef93f8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
LAB_108ef93f4:
    (*pcVar3)(lVar2,uVar1);
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_108ef93f8;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if (lVar2 == 3) {
        if (param_6 == 0) goto LAB_108ef93f8;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
        goto LAB_108ef93f4;
      }
      if ((lVar2 != 4) || (param_7 == 0)) goto LAB_108ef93f8;
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
    }
    (*pcVar3)(lVar2);
  }
LAB_108ef93f8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ef9430; end: 108ef9477; -[SCSendFlowStepResult .cxx_destruct] */

void FUN_108ef9430(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ef9478; end: 108ef94c3; +[SCSendFlowSendingEvent chatMessage] */

void FUN_108ef9478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c32e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef94c4; end: 108ef9547; +[SCSendFlowSendingEvent snapWithPostingStory:storyTypes:recipientsCount:groupCount:] */

void FUN_108ef94c4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c32e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef9548; end: 108ef96db; +[SCSendFlowSendingEvent storyWithNewlyCreatedCustomStoriesMetadata:storyTypes:clientIds:mediaTypes:spotlightDescription:publicStoryBusinessIds:spotlightTileBytes:isCrossPostingSpotlightToStories:] */

void FUN_108ef9548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c32e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x68] = param_10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef96dc; end: 108ef96ff; -[SCSendFlowSendingEvent copyWithZone:] */

undefined8 FUN_108ef96dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef9700; end: 108ef97d7; -[SCSendFlowSendingEvent hash] */

void FUN_108ef9700(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x68);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_1126ff2c8;
  puStack_c0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef97d8; end: 108ef981b; -[SCSendFlowSendingEvent internalInit] */

void FUN_108ef97d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff2c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


