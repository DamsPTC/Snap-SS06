/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108085ac4; end: 108085acf; -[SCPreviewFeatureAutoCaptionsServices .cxx_destruct] */

void FUN_108085ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108085ad0; end: 1080862b3; +[SCPreviewFeatureUserTaggingUtils userTaggingInfoStickerStatesFromStickerState:] */

undefined1 * FUN_108085ad0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined *puVar12;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_140 = puVar2;
  _objc_retain(param_3);
  puVar11 = &uStack_130;
  lStack_148 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lStack_138 = *plStack_120;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_120 != lStack_138) {
          _objc_enumerationMutation(lStack_148);
        }
        puVar12 = *(undefined **)(lStack_128 + unaff_x20 * 8);
        puVar2 = puVar12;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = puVar12;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          if (puVar3 != (undefined *)0x0) {
            puVar5 = PTR_PTR_1126d9108;
            _objc_alloc(PTR_PTR_1126d9108);
            puVar2 = puVar12;
            func_0x00010bfedfc0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c244f40();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfedfc0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar12;
            func_0x00010c244f40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05bf60(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar12);
            _objc_release(puVar6);
            _objc_release(puVar3);
            _objc_release(puVar2);
            puVar3 = PTR_PTR_1126d9110;
            func_0x00010c245320(PTR_PTR_1126d9110);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108085d98;
          }
          puVar2 = puVar12;
          func_0x00010c0846e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfede40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c27dd80();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar2 = puVar12;
          func_0x00010c0846e0();
          _objc_retainAutoreleasedReturnValue();
          if ((int)puVar7 == 9) {
            puVar12 = puVar2;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar12;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            func_0x00010c2451a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar12);
            _objc_release(puVar2);
            puVar5 = PTR_PTR_1126d9108;
            _objc_alloc(PTR_PTR_1126d9108);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar2;
            func_0x00010bfe2ee0();
            puVar6 = puVar2;
            func_0x00010c0b5940(puVar2);
            func_0x000100c4a928(puVar12,puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar12;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = puVar3;
            func_0x00010c292e20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05bf60(puVar5);
            _objc_release(puVar12);
            _objc_release(puVar6);
            _objc_release(puVar2);
            puVar2 = PTR_PTR_1126d9110;
            func_0x00010c245320(PTR_PTR_1126d9110);
            _objc_retainAutoreleasedReturnValue();
LAB_1080860d0:
            func_0x00010befa120(puStack_140);
            _objc_release(puVar2);
            goto LAB_108085da8;
          }
          puVar3 = puVar2;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfede40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c27dd80();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar2 = puVar12;
          func_0x00010c0846e0();
          _objc_retainAutoreleasedReturnValue();
          if ((int)puVar7 == 8) {
            puVar12 = puVar2;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar12;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            func_0x00010c0ca640();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar12);
            _objc_release(puVar2);
            puVar5 = PTR_PTR_1126d9108;
            _objc_alloc(PTR_PTR_1126d9108);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar2;
            func_0x00010bfe2ee0();
            puVar6 = puVar2;
            func_0x00010c0b5940(puVar2);
            func_0x000100c4a928(puVar12,puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar12;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = puVar3;
            func_0x00010c294420(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05bf60(puVar5);
            _objc_release(puVar12);
            _objc_release(puVar6);
            _objc_release(puVar2);
LAB_1080860c4:
            puVar2 = PTR_PTR_1126d9110;
            func_0x00010c0ca6e0(PTR_PTR_1126d9110);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1080860d0;
          }
          puVar3 = puVar2;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfede40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c27dd80();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if ((int)puVar7 == 0x16) {
            func_0x00010c0846e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar12;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bfc0fa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar12);
            puVar3 = puVar5;
            func_0x00010c27dd80();
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)puVar3 == 5) {
              puVar3 = puVar5;
              func_0x00010c11ee60(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c078d80();
              _objc_release(puVar3);
              if ((int)puVar2 != 0) {
                puVar3 = PTR_PTR_1126d9108;
                _objc_alloc(PTR_PTR_1126d9108);
                puVar2 = puVar5;
                func_0x00010c11ee60(puVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05bf60(puVar3);
                _objc_release(puVar2);
                goto LAB_1080860c4;
              }
            }
            goto LAB_108085db0;
          }
        }
        else {
          puVar5 = PTR_PTR_1126d9108;
          _objc_alloc(PTR_PTR_1126d9108);
          puVar2 = puVar12;
          func_0x00010bfedfc0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0ca400();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfedfc0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar12;
          func_0x00010c0ca400();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar7;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05bf60(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar7);
          _objc_release(puVar12);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar3 = PTR_PTR_1126d9110;
          func_0x00010c0ca6e0(PTR_PTR_1126d9110);
          _objc_retainAutoreleasedReturnValue();
LAB_108085d98:
          func_0x00010befa120(puStack_140);
LAB_108085da8:
          _objc_release(puVar3);
LAB_108085db0:
          _objc_release(puVar5);
        }
        unaff_x20 = unaff_x20 + 1;
      } while (param_3 != unaff_x20);
      puVar11 = &uStack_130;
      param_3 = lStack_148;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar1 = lStack_148;
  _objc_release(lStack_148);
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
    return puStack_140;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_180;
  lStack_168 = lVar1;
  pcStack_158 = FUN_1080862b4;
  lStack_170 = unaff_x20;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puStack_178 = PTR_PTR_1126fc498;
  lStack_180 = lVar8;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    _objc_retain(puVar11);
    uVar10 = *(undefined8 *)((long)plVar9 + 8);
    *(undefined8 **)((long)plVar9 + 8) = puVar11;
    _objc_release(uVar10);
  }
  _objc_release(puVar11);
  return (undefined1 *)plVar9;
}



/* Entry: 1080862b4; end: 108086327; -[SCPreviewFeatureUserTaggingServices initWithUserTagging:] */

undefined1 * FUN_1080862b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc498;
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



/* Entry: 108086328; end: 10808632f; -[SCPreviewFeatureUserTaggingServices userTagging] */

undefined8 FUN_108086328(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108086330; end: 10808633b; -[SCPreviewFeatureUserTaggingServices .cxx_destruct] */

void FUN_108086330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808633c; end: 10808639f; +[SCPreviewFeatureUserTaggingStickerState mentionWithStyle:] */

void FUN_10808633c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9110;
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



/* Entry: 1080863a0; end: 10808640b; +[SCPreviewFeatureUserTaggingStickerState snapcodeWithStyle:] */

void FUN_1080863a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9110;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10808640c; end: 10808642f; -[SCPreviewFeatureUserTaggingStickerState copyWithZone:] */

undefined8 FUN_10808640c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108086430; end: 1080864a7; -[SCPreviewFeatureUserTaggingStickerState hash] */

void FUN_108086430(long param_1)

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
  puStack_68 = PTR_PTR_1126fc4a0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080864a8; end: 1080864eb; -[SCPreviewFeatureUserTaggingStickerState internalInit] */

void FUN_1080864a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc4a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080864ec; end: 1080865a3; -[SCPreviewFeatureUserTaggingStickerState isEqual:] */

long FUN_1080864ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808657c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108086588;
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
          goto LAB_108086588;
        }
        goto LAB_10808657c;
      }
    }
    lVar3 = 0;
  }
LAB_108086588:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1080865a4; end: 108086627; -[SCPreviewFeatureUserTaggingStickerState matchMention:snapcode:] */

void FUN_1080865a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10808660c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10808660c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10808660c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108086628; end: 108086657; -[SCPreviewFeatureUserTaggingStickerState .cxx_destruct] */

void FUN_108086628(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108086658; end: 108086703; -[SCPreviewFeatureUserTaggingInfoStickerStyle initWithUserId:username:] */

undefined1 *
FUN_108086658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc4a8;
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



/* Entry: 108086704; end: 108086727; -[SCPreviewFeatureUserTaggingInfoStickerStyle copyWithZone:] */

undefined8 FUN_108086704(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108086728; end: 10808679b; -[SCPreviewFeatureUserTaggingInfoStickerStyle hash] */

undefined8 * FUN_108086728(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10808681c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108086828;
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
          goto LAB_108086828;
        }
        goto LAB_10808681c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108086828:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10808679c; end: 108086843; -[SCPreviewFeatureUserTaggingInfoStickerStyle isEqual:] */

long FUN_10808679c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808681c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108086828;
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
          goto LAB_108086828;
        }
        goto LAB_10808681c;
      }
    }
    lVar3 = 0;
  }
LAB_108086828:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108086844; end: 10808684b; -[SCPreviewFeatureUserTaggingInfoStickerStyle userId] */

undefined8 FUN_108086844(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808684c; end: 108086853; -[SCPreviewFeatureUserTaggingInfoStickerStyle username] */

undefined8 FUN_10808684c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108086854; end: 108086883; -[SCPreviewFeatureUserTaggingInfoStickerStyle .cxx_destruct] */

void FUN_108086854(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108086884; end: 108086f3f;  */

void FUN_108086884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d9118;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c229ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c229f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe1180();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d9120;
  _objc_alloc(PTR_PTR_1126d9120);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_5;
  func_0x00010c229ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229fe0();
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_5;
  func_0x00010c229ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229fe0();
  func_0x00010c0df720(param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063600(puVar5);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar10 = param_5;
  func_0x00010c229ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229f20();
  func_0x00010c0df720(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffb40();
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar12 = PTR_PTR_1126d9128;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08c7c0(param_5);
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08c7c0(param_5);
  func_0x00010c0df720(param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08c7c0(param_5);
  func_0x00010c0df720(param_3,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08c7c0(param_5);
  func_0x00010c0df720(param_4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c141a80(param_5);
  func_0x00010c0df720(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063660();
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
  uStack_78 = param_5;
  func_0x00010c252cc0();
  _objc_retainAutoreleasedReturnValue();
  if (uStack_78 == 0) {
    lVar2 = param_5;
    func_0x00010bf8bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uStack_78 = param_5;
      func_0x00010c25d080();
      _objc_retainAutoreleasedReturnValue();
      if (uStack_78 != 0) goto LAB_108086b7c;
    }
    lVar2 = param_5;
    func_0x00010bfabc80();
    if ((int)lVar2 == 0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = param_5;
      func_0x00010c089ca0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_108086b7c:
  puVar13 = PTR_PTR_1126d9130;
  func_0x00010beffa20(param_5);
  func_0x00010c26b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d9138;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb4000(param_5);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bfb3c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe1180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bfb4120();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_5;
  func_0x00010bfb3c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorGetAlpha();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf11ba0(param_5);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010bfa0560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c2200(param_5);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010bf8bb60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c269e00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_5;
  func_0x00010c269ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_5;
  func_0x00010bf2fa60();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_5;
  func_0x00010bfa04c0();
  func_0x00010b7816a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046a60();
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar7);
  puVar9 = PTR_PTR_1126d9140;
  _objc_alloc(PTR_PTR_1126d9140);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cd920(param_5);
  func_0x00010c0df720(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c27dd80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c247520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d9a0(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uStack_78);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108086f40; end: 108086f5f;  */

undefined8 FUN_108086f40(ulong param_1)

{
  if (param_1 < 0xb) {
    return *(undefined8 *)(&UNK_10deedd28 + param_1 * 8);
  }
  return 0;
}



/* Entry: 108086f60; end: 108086fd3;  */

void FUN_108086f60(long param_1)

{
  if (param_1 == -0x6e0993d9) {
    func_0x000108edf3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 0x7b2e3000) {
    func_0x000108edf60c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 0x7b2e2fc2) {
    func_0x000108edf514();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108086fd4; end: 1080870ef;  */

undefined8 FUN_108086fd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f27518,param_2,param_1);
  uVar3 = 0x6dc1de7e;
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f27538,param_2,param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f27558,param_2,param_1);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f27618,param_2,param_1);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f275b8,param_2,param_1);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f27598,param_2,param_1);
            uVar3 = 0xffffffffa7d67d05;
            if ((uVar2 & 1) == 0) {
              iVar1 = 0x10f275d8;
              func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f275d8,param_2,param_1);
              uVar3 = 0x43b981ab;
              if (iVar1 == 0) {
                uVar3 = 0;
              }
            }
          }
        }
        else {
          uVar3 = 0x2f872b54;
        }
      }
      else {
        uVar3 = 0xffffffffa7d67d05;
      }
    }
    else {
      uVar3 = 0x43b981ab;
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1080870f0; end: 10808723b;  */

void FUN_1080870f0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_108087208:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    func_0x00010c297dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_1;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) goto LAB_108087208;
      puVar5 = PTR_PTR_1126c3cb0;
      _objc_alloc(PTR_PTR_1126c3cb0);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2bec60(param_1);
      func_0x00010c0df720(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010c297dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c159620(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0636a0(puVar5,param_2,puVar1,puVar2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10808723c; end: 1080875a7;  */

/* WARNING: Possible PIC construction at 0x000108087ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108088170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080897b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108088174) */
/* WARNING: Removing unreachable block (ram,0x000108087ec8) */
/* WARNING: Removing unreachable block (ram,0x000108087ee0) */
/* WARNING: Removing unreachable block (ram,0x000108087f04) */
/* WARNING: Removing unreachable block (ram,0x000108087f60) */
/* WARNING: Removing unreachable block (ram,0x000108087fc0) */
/* WARNING: Removing unreachable block (ram,0x000108087f78) */
/* WARNING: Removing unreachable block (ram,0x000108087f80) */
/* WARNING: Removing unreachable block (ram,0x000108087f9c) */
/* WARNING: Removing unreachable block (ram,0x000108087fa0) */
/* WARNING: Removing unreachable block (ram,0x000108087fe4) */
/* WARNING: Removing unreachable block (ram,0x000108087fb0) */
/* WARNING: Removing unreachable block (ram,0x000108087f84) */
/* WARNING: Removing unreachable block (ram,0x000108087fe8) */
/* WARNING: Removing unreachable block (ram,0x000108087ef4) */
/* WARNING: Removing unreachable block (ram,0x000108087ff0) */
/* WARNING: Removing unreachable block (ram,0x000108088020) */
/* WARNING: Removing unreachable block (ram,0x00010808803c) */
/* WARNING: Removing unreachable block (ram,0x0001080880a8) */
/* WARNING: Removing unreachable block (ram,0x000108088034) */
/* WARNING: Removing unreachable block (ram,0x0001080880c4) */
/* WARNING: Removing unreachable block (ram,0x000108088194) */
/* WARNING: Removing unreachable block (ram,0x000108088198) */
/* WARNING: Removing unreachable block (ram,0x0001080881d0) */
/* WARNING: Removing unreachable block (ram,0x0001080881ec) */
/* WARNING: Removing unreachable block (ram,0x000108088274) */
/* WARNING: Removing unreachable block (ram,0x000108088264) */
/* WARNING: Removing unreachable block (ram,0x00010808827c) */
/* WARNING: Removing unreachable block (ram,0x0001080881e4) */
/* WARNING: Removing unreachable block (ram,0x000108088298) */
/* WARNING: Removing unreachable block (ram,0x00010808852c) */
/* WARNING: Removing unreachable block (ram,0x0001080886b0) */
/* WARNING: Removing unreachable block (ram,0x00010808866c) */
/* WARNING: Removing unreachable block (ram,0x000108088698) */
/* WARNING: Removing unreachable block (ram,0x00010808869c) */
/* WARNING: Removing unreachable block (ram,0x0001080886a0) */
/* WARNING: Removing unreachable block (ram,0x0001080886a4) */
/* WARNING: Removing unreachable block (ram,0x0001080886c8) */
/* WARNING: Removing unreachable block (ram,0x0001080886cc) */
/* WARNING: Removing unreachable block (ram,0x0001080886d0) */
/* WARNING: Removing unreachable block (ram,0x000108089210) */
/* WARNING: Removing unreachable block (ram,0x000108089218) */
/* WARNING: Removing unreachable block (ram,0x00010808921c) */
/* WARNING: Removing unreachable block (ram,0x000108089220) */
/* WARNING: Removing unreachable block (ram,0x000108089224) */
/* WARNING: Removing unreachable block (ram,0x000108089228) */
/* WARNING: Removing unreachable block (ram,0x000108089230) */
/* WARNING: Removing unreachable block (ram,0x0001080886a8) */
/* WARNING: Removing unreachable block (ram,0x0001080886d4) */
/* WARNING: Removing unreachable block (ram,0x000108088848) */
/* WARNING: Removing unreachable block (ram,0x000108088854) */
/* WARNING: Removing unreachable block (ram,0x000108088858) */
/* WARNING: Removing unreachable block (ram,0x000108088864) */
/* WARNING: Removing unreachable block (ram,0x000108088868) */
/* WARNING: Removing unreachable block (ram,0x00010808886c) */
/* WARNING: Removing unreachable block (ram,0x0001080891e0) */
/* WARNING: Removing unreachable block (ram,0x0001080891e4) */
/* WARNING: Removing unreachable block (ram,0x0001080891e8) */
/* WARNING: Removing unreachable block (ram,0x0001080891ec) */
/* WARNING: Removing unreachable block (ram,0x0001080891f4) */
/* WARNING: Removing unreachable block (ram,0x0001080891f8) */
/* WARNING: Removing unreachable block (ram,0x0001080891fc) */
/* WARNING: Removing unreachable block (ram,0x000108089200) */
/* WARNING: Removing unreachable block (ram,0x000108089204) */
/* WARNING: Removing unreachable block (ram,0x000108089238) */
/* WARNING: Removing unreachable block (ram,0x000108089208) */
/* WARNING: Removing unreachable block (ram,0x000108088870) */
/* WARNING: Removing unreachable block (ram,0x00010808885c) */
/* WARNING: Removing unreachable block (ram,0x000108088874) */
/* WARNING: Removing unreachable block (ram,0x0001080888d8) */
/* WARNING: Removing unreachable block (ram,0x0001080888c0) */
/* WARNING: Removing unreachable block (ram,0x0001080888dc) */
/* WARNING: Removing unreachable block (ram,0x000108088918) */
/* WARNING: Removing unreachable block (ram,0x000108088924) */
/* WARNING: Removing unreachable block (ram,0x000108088928) */
/* WARNING: Removing unreachable block (ram,0x000108088938) */
/* WARNING: Removing unreachable block (ram,0x000108088940) */
/* WARNING: Removing unreachable block (ram,0x000108088978) */
/* WARNING: Removing unreachable block (ram,0x000108088994) */
/* WARNING: Removing unreachable block (ram,0x000108088b80) */
/* WARNING: Removing unreachable block (ram,0x000108088a2c) */
/* WARNING: Removing unreachable block (ram,0x000108088a7c) */
/* WARNING: Removing unreachable block (ram,0x000108088a88) */
/* WARNING: Removing unreachable block (ram,0x000108088a8c) */
/* WARNING: Removing unreachable block (ram,0x000108088a9c) */
/* WARNING: Removing unreachable block (ram,0x000108088aa4) */
/* WARNING: Removing unreachable block (ram,0x000108088b0c) */
/* WARNING: Removing unreachable block (ram,0x000108088ad8) */
/* WARNING: Removing unreachable block (ram,0x000108088b20) */
/* WARNING: Removing unreachable block (ram,0x000108088b40) */
/* WARNING: Removing unreachable block (ram,0x000108088b5c) */
/* WARNING: Removing unreachable block (ram,0x000108088b84) */
/* WARNING: Removing unreachable block (ram,0x000108088bac) */
/* WARNING: Removing unreachable block (ram,0x000108088c6c) */
/* WARNING: Removing unreachable block (ram,0x000108088eb8) */
/* WARNING: Removing unreachable block (ram,0x000108088e8c) */
/* WARNING: Removing unreachable block (ram,0x000108088ec0) */
/* WARNING: Removing unreachable block (ram,0x000108088ea8) */
/* WARNING: Removing unreachable block (ram,0x000108088ec4) */
/* WARNING: Removing unreachable block (ram,0x000108088ffc) */
/* WARNING: Removing unreachable block (ram,0x00010808903c) */
/* WARNING: Removing unreachable block (ram,0x000108089070) */
/* WARNING: Removing unreachable block (ram,0x000108089078) */
/* WARNING: Removing unreachable block (ram,0x000108089088) */
/* WARNING: Removing unreachable block (ram,0x000108088148) */
/* WARNING: Removing unreachable block (ram,0x0001080897b8) */

void FUN_10808723c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **ppuVar13;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar14;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar15;
  undefined **unaff_x28;
  undefined1 *puVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 unaff_d8;
  double unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar16 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar12 = param_3;
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_PTR_11329cf70;
    unaff_x28 = &PTR_PTR_1126d9000;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_128 + (long)unaff_x27 * 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar2);
        unaff_x23 = (undefined **)PTR_PTR_1126d9148;
        _objc_alloc_init();
        unaff_x22 = unaff_x23;
        func_0x00010c221c40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x22;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x22);
        _objc_release(unaff_x23);
        func_0x00010befa120(ppuVar13);
        _objc_release(unaff_x24);
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar12 != unaff_x27);
      ppuVar12 = param_3;
      func_0x00010bf52a60();
      unaff_x21 = (undefined **)0x0;
    } while (ppuVar12 != (undefined **)0x0);
  }
  _objc_release(param_3);
  ppuVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    uVar2 = 0x108087414;
    ___stack_chk_fail();
    puVar1 = &uStack_130;
    ppuVar15 = ppuVar13;
    do {
      *(undefined ***)((long)puVar1 + -0x60) = unaff_x28;
      *(undefined ***)((long)puVar1 + -0x58) = unaff_x27;
      *(undefined ***)((long)puVar1 + -0x50) = unaff_x26;
      *(undefined ***)((long)puVar1 + -0x48) = unaff_x25;
      *(undefined ***)((long)puVar1 + -0x40) = unaff_x24;
      *(undefined ***)((long)puVar1 + -0x38) = unaff_x23;
      *(undefined ***)((long)puVar1 + -0x30) = unaff_x22;
      *(undefined ***)((long)puVar1 + -0x28) = unaff_x21;
      *(undefined ***)((long)puVar1 + -0x20) = ppuVar15;
      *(undefined ***)((long)puVar1 + -0x18) = param_3;
      *(undefined1 **)((long)puVar1 + -0x10) = puVar16;
      *(undefined8 *)((long)puVar1 + -8) = uVar2;
      *(undefined8 *)((long)puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar12);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)puVar1 + -0x128) = 0;
      *(undefined8 *)((long)puVar1 + -0x130) = 0;
      *(undefined8 *)((long)puVar1 + -0x118) = 0;
      *(undefined8 *)((long)puVar1 + -0x120) = 0;
      *(undefined8 *)((long)puVar1 + -0x108) = 0;
      *(undefined8 *)((long)puVar1 + -0x110) = 0;
      *(undefined8 *)((long)puVar1 + -0xf8) = 0;
      *(undefined8 *)((long)puVar1 + -0x100) = 0;
      _objc_retain(ppuVar12);
      ppuVar15 = ppuVar12;
      func_0x00010bf52a60();
      ppuVar8 = param_4;
      ppuVar3 = unaff_x22;
      ppuVar14 = unaff_x25;
      uVar18 = param_2;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar14 = (undefined **)**(undefined8 **)((long)puVar1 + -0x120);
        unaff_x26 = &PTR_PTR_1126d9000;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)puVar1 + -0x120) != ppuVar14) {
              _objc_enumerationMutation(ppuVar12);
            }
            FUN_108086fd4(*(undefined8 *)(*(long *)((long)puVar1 + -0x128) + (long)unaff_x27 * 8));
            unaff_x23 = (undefined **)PTR_PTR_1126d9150;
            _objc_alloc_init();
            ppuVar3 = unaff_x23;
            func_0x00010c21ace0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = ppuVar3;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar13);
            _objc_release(unaff_x24);
            _objc_release(ppuVar3);
            _objc_release(unaff_x23);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar15 != unaff_x27);
          ppuVar15 = ppuVar12;
          func_0x00010bf52a60();
          unaff_x21 = (undefined **)0x0;
        } while (ppuVar15 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      ppuVar15 = ppuVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x68)) break;
      ___stack_chk_fail();
      *(double *)((long)puVar1 + -0x1a0) = unaff_d9;
      *(undefined8 *)((long)puVar1 + -0x198) = unaff_d8;
      *(undefined ***)((long)puVar1 + -400) = unaff_x28;
      *(undefined ***)((long)puVar1 + -0x188) = unaff_x27;
      *(undefined ***)((long)puVar1 + -0x180) = unaff_x26;
      *(undefined ***)((long)puVar1 + -0x178) = ppuVar14;
      *(undefined ***)((long)puVar1 + -0x170) = unaff_x24;
      *(undefined ***)((long)puVar1 + -0x168) = unaff_x23;
      *(undefined ***)((long)puVar1 + -0x160) = ppuVar3;
      *(undefined ***)((long)puVar1 + -0x158) = unaff_x21;
      *(undefined ***)((long)puVar1 + -0x150) = ppuVar13;
      *(undefined ***)((long)puVar1 + -0x148) = ppuVar12;
      *(undefined1 **)((long)puVar1 + -0x140) = (undefined1 *)((long)puVar1 + -0x10);
      *(code **)((long)puVar1 + -0x138) = FUN_1080875a8;
      *(undefined8 *)((long)puVar1 + -0x1b0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar15);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)puVar1 + -0x2a8) = puVar4;
      dVar17 = 0.0;
      *(undefined8 *)((long)puVar1 + -0x268) = 0;
      *(undefined8 *)((long)puVar1 + -0x270) = 0;
      *(undefined8 *)((long)puVar1 + -600) = 0;
      *(undefined8 *)((long)puVar1 + -0x260) = 0;
      *(undefined8 *)((long)puVar1 + -0x248) = 0;
      *(undefined8 *)((long)puVar1 + -0x250) = 0;
      *(undefined8 *)((long)puVar1 + -0x238) = 0;
      *(undefined8 *)((long)puVar1 + -0x240) = 0;
      _objc_retain(ppuVar15);
      unaff_x25 = (undefined **)((long)puVar1 + -0x270);
      unaff_x22 = (undefined **)((long)puVar1 + -0x230);
      *(undefined ***)((long)puVar1 + -0x2b0) = ppuVar15;
      uVar2 = 0x10;
      ppuVar13 = ppuVar15;
      func_0x00010bf52a60();
      *(undefined ***)((long)puVar1 + -0x298) = ppuVar13;
      if (ppuVar13 != (undefined **)0x0) {
        *(undefined8 *)((long)puVar1 + -0x2a0) = **(undefined8 **)((long)puVar1 + -0x260);
        *(undefined ***)((long)puVar1 + -0x278) = &PTR____CFConstantStringClassReference_110f27438;
        *(undefined ***)((long)puVar1 + -0x2b8) = &PTR____CFConstantStringClassReference_110f27418;
        *(undefined ***)((long)puVar1 + -0x2c0) = &PTR____CFConstantStringClassReference_110f27498;
        *(undefined ***)((long)puVar1 + -0x2c8) = &PTR____CFConstantStringClassReference_110f274b8;
        unaff_d8 = 0x408f400000000000;
        *(undefined ***)((long)puVar1 + -0x2d0) = &PTR____CFConstantStringClassReference_110f274f8;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            if (**(long **)((long)puVar1 + -0x260) != *(long *)((long)puVar1 + -0x2a0)) {
              _objc_enumerationMutation(*(undefined8 *)((long)puVar1 + -0x2b0));
            }
            unaff_x26 = *(undefined ***)(*(long *)((long)puVar1 + -0x268) + (long)ppuVar14 * 8);
            ppuVar13 = unaff_x26;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar13 == (undefined **)0x0) {
              ppuVar13 = unaff_x26;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar13 != (undefined **)0x0) {
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = (undefined **)PTR_PTR_1126ba9a8;
                _objc_alloc_init();
                func_0x00010c27dd80(unaff_x26);
                ppuVar12 = unaff_x24;
                func_0x00010c21ace0(unaff_x24);
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = unaff_x26;
                func_0x00010bf64de0(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f320();
                dVar17 = dVar17 * 1000.0;
                ppuVar3 = ppuVar12;
                func_0x00010c2156c0(ppuVar12);
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = unaff_x26;
                func_0x00010c26fc80();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = ppuVar5;
                func_0x00010c0d4f60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = ppuVar3;
                func_0x00010c215860(ppuVar3);
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = ppuVar6;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar6);
                _objc_release(unaff_x23);
                _objc_release(ppuVar5);
                _objc_release(ppuVar3);
                _objc_release(ppuVar15);
                _objc_release(ppuVar12);
                _objc_release(unaff_x24);
                ppuVar12 = (undefined **)PTR_PTR_1126ba8c8;
                _objc_alloc_init();
                ppuVar15 = ppuVar12;
                func_0x00010c21ace0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x21 = ppuVar15;
                func_0x00010c189a20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = unaff_x21;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(*(undefined8 *)((long)puVar1 + -0x2a8));
                _objc_release(ppuVar3);
                _objc_release(unaff_x21);
                _objc_release(ppuVar15);
                _objc_release(ppuVar12);
                unaff_x27 = unaff_x26;
                unaff_x28 = ppuVar14;
                goto LAB_108087d64;
              }
              unaff_x21 = *(undefined ***)((long)puVar1 + -0x2c0);
              ppuVar13 = unaff_x26;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              unaff_x23 = (undefined **)0x0;
              if (ppuVar13 != (undefined **)0x0) {
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2827c0();
                _objc_release(unaff_x26);
                ppuVar13 = (undefined **)PTR_PTR_1126ba930;
                _objc_alloc_init();
                ppuVar12 = ppuVar13;
                func_0x00010c1bd820();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = ppuVar12;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                _objc_release(ppuVar13);
                ppuVar13 = (undefined **)PTR_PTR_1126ba8c8;
                _objc_alloc_init();
                ppuVar15 = ppuVar13;
                func_0x00010c21ace0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x21 = ppuVar15;
                func_0x00010c16f9a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = unaff_x21;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(*(undefined8 *)((long)puVar1 + -0x2a8));
                _objc_release(ppuVar3);
                _objc_release(unaff_x21);
                _objc_release(ppuVar15);
                goto LAB_108087d64;
              }
              ppuVar13 = unaff_x26;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar13 != (undefined **)0x0) {
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = (undefined **)PTR_PTR_1126ba8c0;
                _objc_alloc_init();
                puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010bf01f20(unaff_x26);
                func_0x00010c0df720(puVar4);
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar12;
                func_0x00010c167920();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c29e660();
                ppuVar3 = ppuVar15;
                func_0x00010c21ace0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2807a0();
                unaff_x23 = ppuVar3;
                func_0x00010c21b980();
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = unaff_x23;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                _objc_release(ppuVar3);
                _objc_release(ppuVar15);
                _objc_release(puVar4);
                _objc_release(ppuVar12);
                ppuVar12 = (undefined **)PTR_PTR_1126ba8c8;
                _objc_alloc_init();
                ppuVar15 = ppuVar12;
                func_0x00010c21ace0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x21 = ppuVar15;
                func_0x00010c167920();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = unaff_x21;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(*(undefined8 *)((long)puVar1 + -0x2a8));
                _objc_release(ppuVar3);
                _objc_release(unaff_x21);
                _objc_release(ppuVar15);
                _objc_release(ppuVar12);
                unaff_x24 = ppuVar13;
                goto LAB_108087d64;
              }
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = (undefined **)0x0;
            }
            else {
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = (undefined **)PTR_PTR_1126bab48;
              _objc_alloc_init();
              *(undefined ***)((long)puVar1 + -0x280) = unaff_x24;
              func_0x00010bf34540(unaff_x26);
              func_0x00010c17a660();
              _objc_retainAutoreleasedReturnValue();
              *(undefined ***)((long)puVar1 + -0x288) = unaff_x24;
              func_0x00010bf9fa60(unaff_x26);
              func_0x00010c199dc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = unaff_x26;
              func_0x00010c09f000(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = unaff_x24;
              func_0x00010c1bfa60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = unaff_x26;
              func_0x00010bfe4800(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar12;
              func_0x00010c1a9360();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = unaff_x26;
              func_0x00010bf632c0(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppuVar3;
              func_0x00010c189360();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2a2d00(unaff_x26);
              unaff_x28 = unaff_x27;
              func_0x00010c222dc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = unaff_x28;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              *(undefined ***)((long)puVar1 + -0x290) = ppuVar6;
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              _objc_release(ppuVar15);
              _objc_release(ppuVar12);
              _objc_release(ppuVar13);
              _objc_release(unaff_x24);
              _objc_release(*(undefined8 *)((long)puVar1 + -0x288));
              _objc_release(*(undefined8 *)((long)puVar1 + -0x280));
              ppuVar12 = (undefined **)PTR_PTR_1126ba8c8;
              _objc_alloc_init();
              ppuVar15 = ppuVar12;
              func_0x00010c21ace0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = *(undefined ***)((long)puVar1 + -0x290);
              unaff_x21 = ppuVar15;
              func_0x00010c224b40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = unaff_x21;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(*(undefined8 *)((long)puVar1 + -0x2a8));
              _objc_release(ppuVar3);
              _objc_release(unaff_x21);
              _objc_release(ppuVar15);
              _objc_release(ppuVar12);
              unaff_x23 = ppuVar13;
LAB_108087d64:
              _objc_release(ppuVar13);
            }
            _objc_release(unaff_x26);
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          } while (*(undefined ***)((long)puVar1 + -0x298) != ppuVar14);
          unaff_x25 = (undefined **)((long)puVar1 + -0x270);
          unaff_x22 = (undefined **)((long)puVar1 + -0x230);
          lVar7 = *(long *)((long)puVar1 + -0x2b0);
          uVar2 = 0x10;
          func_0x00010bf52a60();
          *(long *)((long)puVar1 + -0x298) = lVar7;
        } while (lVar7 != 0);
      }
      ppuVar12 = *(undefined ***)((long)puVar1 + -0x2b0);
      _objc_release(ppuVar12);
      ppuVar13 = ppuVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x1b0)) {
        ppuVar13 = *(undefined ***)((long)puVar1 + -0x2a8);
        break;
      }
      ___stack_chk_fail();
      *(undefined8 *)((long)puVar1 + -0x360) = unaff_d13;
      *(undefined8 *)((long)puVar1 + -0x358) = unaff_d12;
      *(undefined8 *)((long)puVar1 + -0x350) = unaff_d11;
      *(undefined8 *)((long)puVar1 + -0x348) = unaff_d10;
      *(double *)((long)puVar1 + -0x340) = unaff_d9;
      *(undefined8 *)((long)puVar1 + -0x338) = unaff_d8;
      *(undefined ***)((long)puVar1 + -0x330) = unaff_x28;
      *(undefined ***)((long)puVar1 + -0x328) = unaff_x27;
      *(undefined ***)((long)puVar1 + -800) = unaff_x26;
      *(undefined ***)((long)puVar1 + -0x318) = ppuVar14;
      *(undefined ***)((long)puVar1 + -0x310) = unaff_x24;
      *(undefined ***)((long)puVar1 + -0x308) = unaff_x23;
      *(undefined ***)((long)puVar1 + -0x300) = ppuVar3;
      *(undefined ***)((long)puVar1 + -0x2f8) = unaff_x21;
      *(undefined ***)((long)puVar1 + -0x2f0) = ppuVar15;
      *(undefined ***)((long)puVar1 + -0x2e8) = ppuVar12;
      *(undefined1 **)((long)puVar1 + -0x2e0) = (undefined1 *)((long)puVar1 + -0x140);
      *(code **)((long)puVar1 + -0x2d8) = FUN_108087e10;
      puVar16 = (undefined1 *)((long)puVar1 + -0x2e0);
      *(undefined8 *)((long)puVar1 + -0x370) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      param_4 = ppuVar8;
      ppuVar12 = unaff_x25;
      ppuVar14 = unaff_x22;
      uVar11 = uVar2;
      param_2 = uVar18;
      _objc_retain();
      uVar10 = SUB84(ppuVar12,0);
      _objc_retain(ppuVar8);
      _objc_retain(unaff_x25);
      _objc_retain(unaff_x22);
      if (ppuVar13 == (undefined **)0x0) goto LAB_108089178;
      *(undefined8 *)((long)puVar1 + -0x570) = uVar2;
      unaff_x23 = ppuVar13;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x23;
      func_0x00010bf4e780();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = unaff_x23;
      func_0x00010c2a04c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0x108087ec8;
      puVar1 = (undefined8 *)((long)puVar1 + -0x600);
      param_3 = ppuVar12;
      unaff_x24 = ppuVar8;
      unaff_x28 = ppuVar13;
      unaff_d8 = uVar18;
      unaff_d9 = dVar17;
    } while( true );
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
LAB_108089178:
  _objc_release(unaff_x22);
  _objc_release(unaff_x25);
  _objc_release(ppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x370)) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ___stack_chk_fail();
    *(double *)((long)puVar1 + -0x670) = dVar17;
    *(undefined8 *)((long)puVar1 + -0x668) = uVar18;
    *(undefined8 *)((long)puVar1 + -0x660) = 0;
    *(undefined ***)((long)puVar1 + -0x658) = unaff_x27;
    *(undefined ***)((long)puVar1 + -0x650) = unaff_x26;
    *(undefined ***)((long)puVar1 + -0x648) = unaff_x25;
    *(undefined ***)((long)puVar1 + -0x640) = ppuVar8;
    *(undefined8 *)((long)puVar1 + -0x638) = 0;
    *(undefined ***)((long)puVar1 + -0x630) = unaff_x22;
    *(undefined ***)((long)puVar1 + -0x628) = unaff_x21;
    *(undefined ***)((long)puVar1 + -0x620) = ppuVar15;
    *(undefined8 *)((long)puVar1 + -0x618) = uVar2;
    *(undefined1 **)((long)puVar1 + -0x610) = puVar16;
    *(code **)((long)puVar1 + -0x608) = FUN_108089244;
    *(undefined4 *)((long)puVar1 + -0x7dc) = uVar10;
    *(undefined8 *)((long)puVar1 + -0x688) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = param_4;
    _objc_retain();
    _objc_retain(param_4);
    *(undefined ***)((long)puVar1 + -0x7f0) = ppuVar14;
    _objc_retain(ppuVar14);
    *(undefined8 *)((long)puVar1 + -0x7f8) = uVar11;
    _objc_retain(uVar11);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(ppuVar13);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)puVar1 + -0x808) = puVar4;
    *(undefined8 *)((long)puVar1 + -0x748) = 0;
    *(undefined8 *)((long)puVar1 + -0x750) = 0;
    *(undefined8 *)((long)puVar1 + -0x738) = 0;
    *(undefined8 *)((long)puVar1 + -0x740) = 0;
    *(undefined8 *)((long)puVar1 + -0x728) = 0;
    *(undefined8 *)((long)puVar1 + -0x730) = 0;
    *(undefined8 *)((long)puVar1 + -0x718) = 0;
    *(undefined8 *)((long)puVar1 + -0x720) = 0;
    _objc_retain(ppuVar13);
    *(undefined ***)((long)puVar1 + -0x810) = ppuVar13;
    func_0x00010bf52a60();
    *(undefined ***)((long)puVar1 + -0x7d8) = ppuVar13;
    ppuVar15 = ppuVar12;
    if (ppuVar13 != (undefined **)0x0) {
      *(undefined8 *)((long)puVar1 + -0x7e8) = **(undefined8 **)((long)puVar1 + -0x740);
      *(undefined ***)((long)puVar1 + -0x800) = &PTR____CFConstantStringClassReference_110e69858;
      *(undefined ***)((long)puVar1 + -0x818) = &PTR____CFConstantStringClassReference_110e09f78;
      do {
        lVar7 = 0;
        do {
          if (**(long **)((long)puVar1 + -0x740) != *(long *)((long)puVar1 + -0x7e8)) {
            _objc_enumerationMutation(*(undefined8 *)((long)puVar1 + -0x810));
          }
          ppuVar15 = *(undefined ***)(*(long *)((long)puVar1 + -0x748) + lVar7 * 8);
          if ((*(int *)((long)puVar1 + -0x7dc) == 0) ||
             (ppuVar13 = ppuVar15, func_0x00010c07f200(), ((ulong)ppuVar13 & 1) == 0)) {
            ppuVar13 = ppuVar15;
            func_0x00010bfe8f60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar13;
            func_0x00010c0d3c80();
            _objc_release(ppuVar13);
            ppuVar13 = ppuVar15;
            func_0x00010c073720();
            if ((int)ppuVar13 != 0) {
              ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_opt_new();
              ppuVar12 = ppuVar14;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar12;
              func_0x00010bf64920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar12);
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar12 = (undefined **)0x0;
              }
              else {
                ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                func_0x00010bdc1900();
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar13;
                if (ppuVar12 != (undefined **)0x0) {
                  ppuVar8 = ppuVar12;
                }
                _objc_retain(ppuVar8);
                _objc_release(ppuVar13);
                _objc_release(ppuVar12);
                ppuVar12 = ppuVar8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = ppuVar8;
              }
              ppuVar8 = ppuVar12;
              func_0x00010c08fa60();
              ppuVar5 = ppuVar12;
              if (ppuVar8 == (undefined **)0x0) {
                ppuVar8 = param_4;
                func_0x00010bfb9b80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = ppuVar8;
                func_0x00010bfb2040();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar8);
                ppuVar8 = ppuVar6;
                func_0x00010bf1bae0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar8;
                func_0x00010bf1acc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                _objc_release(ppuVar8);
                _objc_release(ppuVar6);
              }
              ppuVar12 = ppuVar5;
              func_0x00010c08fa60();
              if (ppuVar12 != (undefined **)0x0) {
                func_0x00010c1d0640(ppuVar13);
                puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c008340(puVar4);
                _objc_release(puVar9);
                func_0x00010c1d0640(ppuVar14);
                _objc_release(puVar4);
              }
              _objc_release(ppuVar3);
              _objc_release(ppuVar13);
              _objc_release(ppuVar5);
            }
            ppuVar13 = ppuVar15;
            func_0x00010c14e3c0();
            uVar2 = 0xffffffffbe0f5dbf;
            if (ppuVar13 != (undefined **)0x1) {
              uVar2 = 0x5ee93ad2;
            }
            uVar18 = 0x3dc5995;
            if (ppuVar13 != (undefined **)0x2) {
              uVar18 = uVar2;
            }
            ppuVar3 = ppuVar15;
            func_0x00010c104360();
            FUN_108086f40();
            ppuVar12 = (undefined **)PTR_PTR_1126d9168;
            _objc_opt_class(PTR_PTR_1126d9168);
            ppuVar8 = ppuVar15;
            _objc_opt_isKindOfClass(ppuVar15,ppuVar12);
            ppuVar13 = ppuVar15;
            if (((ulong)ppuVar8 & 1) == 0) {
              ppuVar13 = (undefined **)0x0;
            }
            _objc_retain(ppuVar13);
            ppuVar8 = ppuVar13;
            func_0x00010bf8ba40();
            _objc_retainAutoreleasedReturnValue();
            *(undefined **)((long)puVar1 + -0x790) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)((long)puVar1 + -0x788) = 0xc2000000;
            *(code **)((long)puVar1 + -0x780) = FUN_108089fd8;
            *(undefined **)((long)puVar1 + -0x778) = &UNK_110a19de8;
            _objc_retain(param_4);
            *(undefined ***)((long)puVar1 + -0x770) = param_4;
            _objc_retain(ppuVar13);
            *(undefined ***)((long)puVar1 + -0x768) = ppuVar13;
            uVar2 = *(undefined8 *)((long)puVar1 + -0x7f0);
            _objc_retain(uVar2);
            *(undefined8 *)((long)puVar1 + -0x760) = uVar2;
            uVar2 = *(undefined8 *)((long)puVar1 + -0x7f8);
            _objc_retain(uVar2);
            *(undefined8 *)((long)puVar1 + -0x758) = uVar2;
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar8;
            func_0x00010c124d20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(ppuVar8);
            if (ppuVar13 == (undefined **)0x0) {
              *(undefined ***)((long)puVar1 + -0x7c8) = ppuVar3;
              *(undefined8 *)((long)puVar1 + -0x7c0) = uVar18;
            }
            else {
              ppuVar8 = ppuVar5;
              func_0x00010bf529e0();
              if (ppuVar8 == (undefined **)0x0) {
                _objc_release(ppuVar5);
                _objc_release(*(undefined8 *)((long)puVar1 + -0x758));
                _objc_release(*(undefined8 *)((long)puVar1 + -0x760));
                _objc_release(*(undefined8 *)((long)puVar1 + -0x768));
                _objc_release(*(undefined8 *)((long)puVar1 + -0x770));
                _objc_release(ppuVar13);
                _objc_release(ppuVar14);
                goto LAB_108089a30;
              }
              *(undefined ***)((long)puVar1 + -0x7c8) = ppuVar3;
              *(undefined8 *)((long)puVar1 + -0x7c0) = uVar18;
            }
            puVar4 = PTR_PTR_1126d8be0;
            _objc_alloc();
            ppuVar13 = ppuVar15;
            func_0x00010bf11e00(ppuVar15);
            func_0x00010b79ab74();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff5d80();
            *(undefined **)((long)puVar1 + -2000) = puVar4;
            _objc_release(ppuVar13);
            ppuVar13 = ppuVar15;
            func_0x00010bf32720(ppuVar15);
            _objc_retainAutoreleasedReturnValue();
            *(undefined **)((long)puVar1 + -0x7b8) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)((long)puVar1 + -0x7b0) = 0xc2000000;
            *(code **)((long)puVar1 + -0x7a8) = FUN_10808a0f4;
            *(undefined **)((long)puVar1 + -0x7a0) = &UNK_110a19e18;
            _objc_retain(param_4);
            *(undefined ***)((long)puVar1 + -0x798) = param_4;
            func_0x00010bfb2040(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar13);
            puVar4 = PTR_PTR_1126d8bd8;
            func_0x00010c2b1c60(PTR_PTR_1126d8bd8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21ace0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c280f40(ppuVar15);
            func_0x00010c21bb80(puVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto code_r0x00010bfadea0;
          }
LAB_108089a30:
          lVar7 = lVar7 + 1;
        } while (*(long *)((long)puVar1 + -0x7d8) != lVar7);
        lVar7 = *(long *)((long)puVar1 + -0x810);
        func_0x00010bf52a60();
        *(long *)((long)puVar1 + -0x7d8) = lVar7;
        ppuVar15 = ppuVar12;
      } while (lVar7 != 0);
    }
    uVar2 = *(undefined8 *)((long)puVar1 + -0x810);
    _objc_release(uVar2);
    _objc_release(*(undefined8 *)((long)puVar1 + -0x7f8));
    _objc_release(*(undefined8 *)((long)puVar1 + -0x7f0));
    _objc_release(param_4);
    _objc_release(uVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar1 + -0x688)) {
      ___stack_chk_fail();
code_r0x00010bfadea0:
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(ppuVar15,PTR_s_filterId_1125c9150);
      return;
    }
    ppuVar13 = *(undefined ***)((long)puVar1 + -0x808);
  }
  goto _objc_autoreleaseReturnValue;
}



/* Entry: 1080875a8; end: 108087e0f;  */

/* WARNING: Possible PIC construction at 0x000108088170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080897b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108088174) */
/* WARNING: Removing unreachable block (ram,0x0001080897b8) */

void FUN_1080875a8(undefined8 param_1,double param_2,undefined *param_3,undefined *param_4)

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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  ulong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined *puStack_410;
  undefined8 uStack_3e8;
  undefined auStack_340 [128];
  undefined auStack_2c0 [128];
  long lStack_240;
  undefined *puStack_168;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar41 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar49 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar32 = &uStack_140;
  puVar44 = auStack_100;
  lVar34 = 0x10;
  puStack_168 = param_3;
  func_0x00010bf52a60();
  if (puStack_168 != (undefined *)0x0) {
    lVar35 = *plStack_130;
    do {
      puVar44 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar35) {
          _objc_enumerationMutation(param_3);
        }
        puVar37 = *(undefined **)(lStack_138 + (long)puVar44 * 8);
        puVar47 = puVar37;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar47 == (undefined *)0x0) {
          puVar47 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar47 != (undefined *)0x0) {
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar46 = PTR_PTR_1126ba9a8;
            _objc_alloc_init();
            func_0x00010c27dd80(puVar37);
            puVar6 = puVar46;
            func_0x00010c21ace0(puVar46);
            _objc_retainAutoreleasedReturnValue();
            puVar40 = puVar37;
            func_0x00010bf64de0(puVar37);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            dVar49 = dVar49 * 1000.0;
            puVar39 = puVar6;
            func_0x00010c2156c0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar37;
            func_0x00010c26fc80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar39;
            func_0x00010c215860(puVar39);
            _objc_retainAutoreleasedReturnValue();
            puVar47 = puVar5;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar39);
            _objc_release(puVar40);
            _objc_release(puVar6);
            _objc_release(puVar46);
            puVar46 = PTR_PTR_1126ba8c8;
            _objc_alloc_init();
            puVar6 = puVar46;
            func_0x00010c21ace0();
            _objc_retainAutoreleasedReturnValue();
            puVar40 = puVar6;
            func_0x00010c189a20();
            _objc_retainAutoreleasedReturnValue();
            puVar39 = puVar40;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar41);
            _objc_release(puVar39);
            _objc_release(puVar40);
            _objc_release(puVar6);
            _objc_release(puVar46);
            goto LAB_108087d64;
          }
          puVar47 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar47 != (undefined *)0x0) {
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2827c0();
            _objc_release(puVar37);
            puVar47 = PTR_PTR_1126ba930;
            _objc_alloc_init();
            puVar46 = puVar47;
            func_0x00010c1bd820();
            _objc_retainAutoreleasedReturnValue();
            puVar37 = puVar46;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar46);
            _objc_release(puVar47);
            puVar47 = PTR_PTR_1126ba8c8;
            _objc_alloc_init();
            puVar46 = puVar47;
            func_0x00010c21ace0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar46;
            func_0x00010c16f9a0();
            _objc_retainAutoreleasedReturnValue();
            puVar40 = puVar6;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar41);
            _objc_release(puVar40);
            _objc_release(puVar6);
            _objc_release(puVar46);
            goto LAB_108087d64;
          }
          puVar47 = puVar37;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar47 != (undefined *)0x0) {
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126ba8c0;
            _objc_alloc_init();
            puVar46 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf01f20(puVar37);
            func_0x00010c0df720(puVar46);
            _objc_retainAutoreleasedReturnValue();
            puVar40 = puVar6;
            func_0x00010c167920();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29e660();
            puVar39 = puVar40;
            func_0x00010c21ace0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2807a0();
            puVar7 = puVar39;
            func_0x00010c21b980();
            _objc_retainAutoreleasedReturnValue();
            puVar47 = puVar7;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar39);
            _objc_release(puVar40);
            _objc_release(puVar46);
            _objc_release(puVar6);
            puVar46 = PTR_PTR_1126ba8c8;
            _objc_alloc_init();
            puVar6 = puVar46;
            func_0x00010c21ace0();
            _objc_retainAutoreleasedReturnValue();
            puVar40 = puVar6;
            func_0x00010c167920();
            _objc_retainAutoreleasedReturnValue();
            puVar39 = puVar40;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar41);
            _objc_release(puVar39);
            _objc_release(puVar40);
            _objc_release(puVar6);
            _objc_release(puVar46);
            goto LAB_108087d64;
          }
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar46 = PTR_PTR_1126bab48;
          _objc_alloc_init();
          func_0x00010bf34540(puVar37);
          puVar6 = puVar46;
          func_0x00010c17a660();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9fa60(puVar37);
          puVar40 = puVar6;
          func_0x00010c199dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar39 = puVar37;
          func_0x00010c09f000(puVar37);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar40;
          func_0x00010c1bfa60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar37;
          func_0x00010bfe4800(puVar37);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010c1a9360();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar37;
          func_0x00010bf632c0(puVar37);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar5;
          func_0x00010c189360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a2d00(puVar37);
          puVar3 = puVar2;
          func_0x00010c222dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar47 = puVar3;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar7);
          _objc_release(puVar39);
          _objc_release(puVar40);
          _objc_release(puVar6);
          _objc_release(puVar46);
          puVar46 = PTR_PTR_1126ba8c8;
          _objc_alloc_init();
          puVar6 = puVar46;
          func_0x00010c21ace0();
          _objc_retainAutoreleasedReturnValue();
          puVar40 = puVar6;
          func_0x00010c224b40();
          _objc_retainAutoreleasedReturnValue();
          puVar39 = puVar40;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar41);
          _objc_release(puVar39);
          _objc_release(puVar40);
          _objc_release(puVar6);
          _objc_release(puVar46);
LAB_108087d64:
          _objc_release(puVar47);
        }
        _objc_release(puVar37);
        puVar44 = puVar44 + 1;
      } while (puStack_168 != puVar44);
      puVar32 = &uStack_140;
      puVar44 = auStack_100;
      lVar34 = 0x10;
      puStack_168 = param_3;
      func_0x00010bf52a60();
    } while (puStack_168 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_4;
  puVar33 = puVar32;
  puVar47 = puVar44;
  lVar35 = lVar34;
  dVar54 = dVar49;
  dVar52 = param_2;
  _objc_retain();
  iVar31 = (int)puVar33;
  _objc_retain(param_4);
  _objc_retain(puVar32);
  _objc_retain(puVar44);
  if (param_3 == (undefined *)0x0) {
    puVar41 = (undefined *)0x0;
  }
  else {
    puVar46 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar46;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar46;
    func_0x00010c2a04c0();
    _objc_retainAutoreleasedReturnValue();
    puVar40 = puVar41;
    func_0x000108087414();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
    if ((puVar46 == (undefined *)0x0) ||
       (puVar41 = puVar46, func_0x00010c2a0460(), puVar41 == (undefined *)0x7fffffffffffffff)) {
      puVar39 = (undefined *)0x0;
    }
    else {
      puVar41 = puVar46;
      func_0x00010c2a04c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0460(puVar46);
      puVar47 = puVar41;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar41);
      puVar39 = puVar47;
      FUN_108086fd4();
      _objc_retain(puVar47);
      puVar41 = puVar47;
      FUN_108086fd4();
      if ((puVar41 == (undefined *)0x0) &&
         (puVar41 = puVar47, func_0x00010bfda7c0(), (int)puVar41 == 0)) {
        puVar41 = puVar47;
        func_0x00010bfda7c0();
        _objc_release(puVar47);
        if ((int)puVar41 != 0) goto LAB_108087f80;
LAB_108087fe4:
        puVar39 = (undefined *)0x0;
      }
      else {
        _objc_release(puVar47);
LAB_108087f80:
        if (puVar39 == (undefined *)0x0) {
          if ((puVar6 == (undefined *)0x0) ||
             (puVar41 = puVar47, func_0x00010bf4bb00(), (int)puVar41 == 0)) goto LAB_108087fe4;
          _objc_retain(puVar47);
          puVar39 = puVar47;
        }
        else {
          func_0x00010b78080c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(puVar47);
    }
    puVar41 = puVar46;
    func_0x00010c23ec00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar41;
    FUN_1080875a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
    if ((puVar46 == (undefined *)0x0) ||
       (puVar41 = puVar46, func_0x00010c23ebe0(), puVar41 == (undefined *)0x7fffffffffffffff)) {
      uStack_3e8 = 0;
    }
    else {
      puVar41 = puVar46;
      func_0x00010c23ec00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ebe0(puVar46);
      puVar47 = puVar41;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar41);
      puVar41 = puVar47;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uStack_3e8 = 0;
      if (puVar41 != (undefined *)0x0) {
        uStack_3e8 = 0x4dc724f;
      }
      func_0x00010b777958();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar47);
    }
    puVar41 = puVar46;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar46;
    func_0x00010bf4e4e0(puVar46);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar41;
    FUN_108089244(puVar41,puVar47,0,param_4,puVar32);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar47);
    _objc_release(puVar41);
    puVar41 = puVar46;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar41;
    func_0x00010bf529e0();
    _objc_release(puVar41);
    if (puVar47 != (undefined *)0x0) {
      func_0x00010bfc1460(puVar46);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bfadea0;
    }
    puVar41 = puVar46;
    func_0x00010c249de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar41;
    func_0x00010808723c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
    if ((puVar46 == (undefined *)0x0) ||
       (puVar41 = puVar46, func_0x00010c249d80(), puVar41 == (undefined *)0x7fffffffffffffff)) {
      uVar42 = 0;
    }
    else {
      puVar41 = puVar46;
      func_0x00010c249de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249d80(puVar46);
      puVar47 = puVar41;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar41);
      puVar41 = puVar47;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar41;
      func_0x00010c067fc0();
      _objc_release(puVar41);
      if (puVar37 < (undefined *)0x5) {
        uVar42 = *(undefined8 *)(&UNK_10deedd80 + (long)puVar37 * 8);
      }
      else {
        uVar42 = 0x7b2e2fc2;
      }
      func_0x00010b77f3e4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar47);
    }
    puVar41 = puVar46;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar41;
    FUN_1080870f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar2 = PTR_PTR_1126d90f0;
    _objc_alloc();
    puVar41 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25be80(puVar46);
    func_0x00010c0df780(puVar41);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e440();
    _objc_release(puVar41);
    puVar41 = puVar46;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar41;
    func_0x000100504554();
    _objc_release(puVar41);
    puVar37 = PTR_PTR_1126bcd48;
    _objc_alloc_init();
    puVar8 = puVar37;
    func_0x00010c223ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar8;
    func_0x00010c223ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar43;
    func_0x00010c1ac480();
    _objc_retainAutoreleasedReturnValue();
    puVar45 = puVar9;
    func_0x00010c1ac460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar45;
    func_0x00010c1a2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c220800();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c082fa0(puVar46);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c220860();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar12;
    func_0x00010c1a2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar38;
    func_0x00010c207d20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c207d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140100(puVar46);
    puVar15 = puVar14;
    func_0x00010c1edda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140140(puVar46);
    puVar16 = puVar15;
    func_0x00010c1edde0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c20e320();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25bfa0(puVar46);
    func_0x00010c0df6e0(puVar47);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c20e340();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c183040();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c182fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar21 = puVar20;
    func_0x00010c1a2c40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_3;
    func_0x00010bfaee40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar21;
    func_0x00010c21b1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar47);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar38);
    _objc_release(puVar12);
    _objc_release(puVar41);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar45);
    _objc_release(puVar9);
    _objc_release(puVar43);
    _objc_release(puVar8);
    _objc_release(puVar37);
    puVar41 = param_3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar41 == (undefined *)0x0) {
      puStack_410 = param_3;
      func_0x00010c15f220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar41 = param_3;
      func_0x00010bf5c9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c80();
      dVar50 = dVar54;
      dVar51 = dVar52;
      func_0x00010c0c2640(PTR_PTR_1126bf720);
      dVar53 = 0.0;
      if ((((dVar54 != 0.0) && (dVar53 = dVar50, dVar52 != 0.0)) &&
          (dVar52 = dVar54 / dVar52, dVar53 = 0.0, dVar52 != 0.0)) &&
         ((dVar53 = dVar50, dVar52 != INFINITY && (dVar51 = dVar52 * dVar51, dVar51 < dVar50)))) {
        dVar53 = dVar51;
      }
      dVar54 = dVar54 / dVar53;
      func_0x00010c27ade0(puVar41);
      dVar52 = dVar50 * dVar54;
      func_0x00010c27ae20(puVar41);
      dVar53 = dVar50 * dVar54;
      func_0x00010c14e120(puVar41);
      dVar54 = dVar54 * dVar50;
      func_0x00010c141a80(puVar41);
      puVar47 = PTR_PTR_1126d8d80;
      _objc_alloc_init();
      puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar52,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar47;
      func_0x00010c219bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar53,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c219be0();
      _objc_retainAutoreleasedReturnValue();
      puVar45 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar50,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c1ee7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010c1f5fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_410 = puVar12;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar45);
      _objc_release(puVar9);
      _objc_release(puVar43);
      _objc_release(puVar8);
      _objc_release(puVar37);
      _objc_release(puVar47);
      _objc_release(puVar41);
      dVar52 = dVar51;
    }
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    if (dVar49 == 0.0) {
LAB_10808885c:
      dVar50 = 0.0;
    }
    else if (param_2 == 0.0) {
LAB_108088870:
      dVar52 = 0.0;
      dVar50 = dVar54;
    }
    else {
      dVar49 = dVar49 / param_2;
      if (dVar49 == 0.0) goto LAB_10808885c;
      if (dVar49 == INFINITY) goto LAB_108088870;
      dVar50 = dVar49 * dVar52;
      if (dVar54 <= dVar50) {
        dVar52 = dVar54 / dVar49;
        dVar50 = dVar54;
      }
    }
    puVar41 = param_3;
    func_0x00010bf114c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar41;
    FUN_10808b2e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar41;
    func_0x00010bf529e0();
    if (puVar47 == (undefined *)0x0) {
      puVar43 = (undefined *)0x0;
    }
    else {
      puVar43 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar41);
    puVar37 = param_3;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    puVar47 = auStack_2c0;
    lVar35 = 0x10;
    puVar41 = puVar37;
    func_0x00010bf52a60();
    lVar36 = lRam0000000000000000;
    while (puVar41 != (undefined *)0x0) {
      puVar47 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar36) {
          _objc_enumerationMutation(puVar37);
        }
        uVar26 = *(undefined8 *)((long)puVar47 * 8);
        func_0x000108e258d0(uVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar43);
        _objc_release(uVar26);
        puVar47 = puVar47 + 1;
      } while (puVar41 != puVar47);
      puVar47 = auStack_2c0;
      lVar35 = 0x10;
      puVar41 = puVar37;
      func_0x00010bf52a60();
    }
    _objc_release(puVar37);
    puVar41 = param_3;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar41;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    puVar45 = param_3;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar45;
    func_0x00010c23ef60();
    puVar10 = puVar9;
    FUN_108089ad4(dVar50,dVar52);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar45);
    _objc_release(puVar9);
    _objc_release(puVar41);
    puVar9 = param_3;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    puVar45 = puVar9;
    func_0x00010bf529e0();
    puVar41 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar45 == (undefined *)0x0) {
      puVar45 = (undefined *)0x0;
    }
    else {
      func_0x00010bf529e0(puVar9);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar9);
      puVar47 = auStack_340;
      lVar35 = 0x10;
      puVar45 = puVar9;
      func_0x00010bf52a60();
      lVar36 = lRam0000000000000000;
      while (puVar45 != (undefined *)0x0) {
        puVar47 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar36) {
            _objc_enumerationMutation(puVar9);
          }
          puVar38 = *(undefined **)((long)puVar47 * 8);
          puVar11 = puVar44;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c06f760();
          _objc_release(puVar11);
          if ((int)puVar12 == 0) {
            FUN_10808a784(puVar38);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar11 = puVar44;
            func_0x00010c269d40(puVar44);
            _objc_retainAutoreleasedReturnValue();
            puVar38 = puVar11;
            func_0x00010c2465a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
          }
          func_0x00010c14c720(puVar41);
          _objc_release(puVar38);
          puVar47 = puVar47 + 1;
        } while (puVar45 != puVar47);
        puVar47 = auStack_340;
        lVar35 = 0x10;
        puVar45 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
      puVar45 = puVar41;
      func_0x00010bf51e00();
      _objc_release(puVar41);
    }
    puVar41 = param_3;
    func_0x00010c23f440();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar41;
    func_0x00010c08fa60();
    _objc_release(puVar41);
    puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puVar12 = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126d9158;
      _objc_alloc(PTR_PTR_1126d9158);
      uVar26 = 0xffffffff8419d893;
      func_0x00010b794420(0xffffffff8419d893);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126bcd20;
      _objc_alloc();
      puVar38 = param_3;
      func_0x00010c23f440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062ba0();
      lVar35 = 0;
      puVar47 = puVar12;
      func_0x00010bff4d20(puVar11);
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar41;
      _objc_release(puVar11);
      _objc_release(puVar12);
      _objc_release(puVar38);
      _objc_release(uVar26);
      puVar12 = puVar41;
    }
    puVar11 = PTR_PTR_1126bcd60;
    _objc_alloc_init();
    func_0x00010c19c8e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c16cc80(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c178c80(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c191960(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c20bc80(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf0f0e0(param_3);
    func_0x00010c16bbc0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar41 = param_3;
    func_0x00010c23faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2060e0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010c09a780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010c096600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc920(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    func_0x00010c203a00(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar41 = param_3;
    func_0x00010bf0f140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c600(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    func_0x00010c186220(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar41 = param_3;
    func_0x00010c111620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1ea0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010bf20900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173880(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21df60(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010bf5cf00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar41 == (undefined *)0x0) {
      puVar38 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar41);
      func_0x00010c097820();
      puVar15 = PTR_PTR_1126bcd40;
      _objc_alloc_init();
      puVar16 = puVar41;
      func_0x00010c094320();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010c1bbd60();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c1df120();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfddb20(puVar41);
      func_0x00010c0df6e0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c1a71c0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c073e60(puVar41);
      _objc_release(puVar41);
      func_0x00010c0df6e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010c1b15a0();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar20;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar14);
      _objc_release(puVar19);
      _objc_release(puVar13);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
    }
    func_0x00010c1df0e0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar38);
    _objc_release(puVar41);
    puVar41 = param_3;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar41 != (undefined *)0x0) {
      puVar41 = param_3;
      func_0x00010bf16100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c1bc380(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar41);
    }
    if (lVar34 != 0) {
      func_0x00010c1c4d20(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar41 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar41;
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar38;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    iVar31 = (int)puVar13;
    _objc_release(puVar38);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar45);
    _objc_release(puVar10);
    _objc_release(puVar43);
    _objc_release(puVar8);
    _objc_release(puStack_410);
    _objc_release(puVar25);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar42);
    _objc_release(puVar5);
    _objc_release(0);
    _objc_release(puVar4);
    _objc_release(uStack_3e8);
    _objc_release(puVar7);
    _objc_release(puVar39);
    _objc_release(puVar40);
    _objc_release(puVar6);
    _objc_release(puVar46);
  }
  _objc_release(puVar44);
  _objc_release(puVar32);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_240) {
    ___stack_chk_fail();
    lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar37);
    _objc_retain(puVar47);
    _objc_retain(lVar35);
    puVar41 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar44 = param_3;
    func_0x00010bf52a60();
    lVar34 = lRam0000000000000000;
    while (puVar44 != (undefined *)0x0) {
      puVar46 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar34) {
          _objc_enumerationMutation(param_3);
        }
        uVar48 = *(ulong *)((long)puVar46 * 8);
        if ((iVar31 == 0) || (uVar27 = uVar48, func_0x00010c07f200(), (uVar27 & 1) == 0)) {
          uVar27 = uVar48;
          func_0x00010bfe8f60();
          _objc_retainAutoreleasedReturnValue();
          uVar28 = uVar27;
          func_0x00010c0d3c80();
          _objc_release(uVar27);
          uVar27 = uVar48;
          func_0x00010c073720();
          if ((int)uVar27 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            uVar27 = uVar28;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar29 = uVar27;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar27);
            if (uVar29 == 0) {
              puVar40 = (undefined *)0x0;
            }
            else {
              puVar40 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bdc1900();
              _objc_retainAutoreleasedReturnValue();
              puVar39 = puVar6;
              if (puVar40 != (undefined *)0x0) {
                puVar39 = puVar40;
              }
              _objc_retain(puVar39);
              _objc_release(puVar6);
              _objc_release(puVar40);
              puVar40 = puVar39;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar39;
            }
            puVar39 = puVar40;
            func_0x00010c08fa60();
            puVar7 = puVar40;
            if (puVar39 == (undefined *)0x0) {
              puVar39 = puVar37;
              func_0x00010bfb9b80();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar39;
              func_0x00010bfb2040();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar39);
              puVar39 = puVar4;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar39;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar40);
              _objc_release(puVar39);
              _objc_release(puVar4);
            }
            puVar40 = puVar7;
            func_0x00010c08fa60();
            if (puVar40 != (undefined *)0x0) {
              func_0x00010c1d0640(puVar6);
              puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
              puVar39 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c008340(puVar40);
              _objc_release(puVar39);
              func_0x00010c1d0640(uVar28);
              _objc_release(puVar40);
            }
            _objc_release(uVar29);
            _objc_release(puVar6);
            _objc_release(puVar7);
          }
          func_0x00010c14e3c0();
          func_0x00010c104360();
          FUN_108086f40();
          puVar6 = PTR_PTR_1126d9168;
          _objc_opt_class(PTR_PTR_1126d9168);
          uVar29 = uVar48;
          _objc_opt_isKindOfClass(uVar48,puVar6);
          uVar27 = uVar48;
          if ((uVar29 & 1) == 0) {
            uVar27 = 0;
          }
          _objc_retain(uVar27);
          uVar29 = uVar27;
          func_0x00010bf8ba40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar37);
          _objc_retain(uVar27);
          _objc_retain(puVar47);
          _objc_retain(lVar35);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          uVar30 = uVar29;
          func_0x00010c124d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(uVar29);
          if ((uVar27 == 0) || (uVar29 = uVar30, func_0x00010bf529e0(), uVar29 != 0)) {
            _objc_alloc();
            uVar27 = uVar48;
            func_0x00010bf11e00(uVar48);
            func_0x00010b79ab74();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff5d80();
            _objc_release(uVar27);
            uVar27 = uVar48;
            func_0x00010bf32720(uVar48);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar37);
            func_0x00010bfb2040(uVar27);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar27);
            puVar44 = PTR_PTR_1126d8bd8;
            func_0x00010c2b1c60(PTR_PTR_1126d8bd8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21ace0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c280f40(uVar48);
            func_0x00010c21bb80(puVar44);
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto code_r0x00010bfadea0;
          }
          _objc_release(uVar30);
          _objc_release(lVar35);
          _objc_release(puVar47);
          _objc_release(uVar27);
          _objc_release(puVar37);
          _objc_release(uVar27);
          _objc_release(uVar28);
        }
        puVar46 = puVar46 + 1;
      } while (puVar44 != puVar46);
      puVar44 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_release(lVar35);
    _objc_release(puVar47);
    _objc_release(puVar37);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar36) {
      ___stack_chk_fail();
code_r0x00010bfadea0:
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}



/* Entry: 108087e10; end: 108089243;  */

/* WARNING: Possible PIC construction at 0x000108088170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080897b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108088174) */
/* WARNING: Removing unreachable block (ram,0x0001080897b8) */

void FUN_108087e10(double param_1,double param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,long param_7)

{
  long lVar1;
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
  undefined *puVar15;
  undefined *puVar16;
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
  undefined *puVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  ulong uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined *puStack_270;
  undefined8 uStack_248;
  undefined auStack_1a0 [128];
  undefined auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  uVar40 = param_5;
  puVar44 = param_6;
  lVar35 = param_7;
  dVar50 = param_1;
  dVar48 = param_2;
  _objc_retain();
  iVar34 = (int)uVar40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == (undefined *)0x0) {
    puVar39 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar2;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = puVar2;
    func_0x00010c2a04c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar44;
    func_0x000108087414();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar44);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar44 = puVar2, func_0x00010c2a0460(), puVar44 == (undefined *)0x7fffffffffffffff)) {
      puVar38 = (undefined *)0x0;
    }
    else {
      puVar44 = puVar2;
      func_0x00010c2a04c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0460(puVar2);
      puVar4 = puVar44;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar44);
      puVar38 = puVar4;
      FUN_108086fd4();
      _objc_retain(puVar4);
      puVar44 = puVar4;
      FUN_108086fd4();
      if ((puVar44 == (undefined *)0x0) &&
         (puVar44 = puVar4, func_0x00010bfda7c0(), (int)puVar44 == 0)) {
        puVar44 = puVar4;
        func_0x00010bfda7c0();
        _objc_release(puVar4);
        if ((int)puVar44 != 0) goto LAB_108087f80;
LAB_108087fe4:
        puVar38 = (undefined *)0x0;
      }
      else {
        _objc_release(puVar4);
LAB_108087f80:
        if (puVar38 == (undefined *)0x0) {
          if ((puVar43 == (undefined *)0x0) ||
             (puVar44 = puVar4, func_0x00010bf4bb00(), (int)puVar44 == 0)) goto LAB_108087fe4;
          _objc_retain(puVar4);
          puVar38 = puVar4;
        }
        else {
          func_0x00010b78080c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(puVar4);
    }
    puVar44 = puVar2;
    func_0x00010c23ec00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar44;
    FUN_1080875a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar44);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar44 = puVar2, func_0x00010c23ebe0(), puVar44 == (undefined *)0x7fffffffffffffff)) {
      uStack_248 = 0;
    }
    else {
      puVar44 = puVar2;
      func_0x00010c23ec00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ebe0(puVar2);
      puVar4 = puVar44;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar44);
      puVar44 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uStack_248 = 0;
      if (puVar44 != (undefined *)0x0) {
        uStack_248 = 0x4dc724f;
      }
      func_0x00010b777958();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar44 = puVar2;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4e4e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar44;
    FUN_108089244(puVar44,puVar4,0,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar44);
    puVar44 = puVar2;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar44;
    func_0x00010bf529e0();
    _objc_release(puVar44);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bfc1460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bfadea0;
    }
    puVar44 = puVar2;
    func_0x00010c249de0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar44;
    func_0x00010808723c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar44);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar44 = puVar2, func_0x00010c249d80(), puVar44 == (undefined *)0x7fffffffffffffff)) {
      uVar40 = 0;
    }
    else {
      puVar44 = puVar2;
      func_0x00010c249de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249d80(puVar2);
      puVar4 = puVar44;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar44);
      puVar44 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar44;
      func_0x00010c067fc0();
      _objc_release(puVar44);
      if (puVar39 < (undefined *)0x5) {
        uVar40 = *(undefined8 *)(&UNK_10deedd80 + (long)puVar39 * 8);
      }
      else {
        uVar40 = 0x7b2e2fc2;
      }
      func_0x00010b77f3e4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar44 = puVar2;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar44;
    FUN_1080870f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar44);
    puVar9 = PTR_PTR_1126d90f0;
    _objc_alloc();
    puVar44 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25be80(puVar2);
    func_0x00010c0df780(puVar44);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e440();
    _objc_release(puVar44);
    puVar44 = puVar2;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar44;
    func_0x000100504554();
    _objc_release(puVar44);
    puVar39 = PTR_PTR_1126bcd48;
    _objc_alloc_init();
    puVar11 = puVar39;
    func_0x00010c223ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar11;
    func_0x00010c223ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar41;
    func_0x00010c1ac480();
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puVar12;
    func_0x00010c1ac460();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar42;
    func_0x00010c1a2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c220800();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c082fa0(puVar2);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c220860();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar15;
    func_0x00010c1a2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar37;
    func_0x00010c207d20();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c207d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140100(puVar2);
    puVar18 = puVar17;
    func_0x00010c1edda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140140(puVar2);
    puVar19 = puVar18;
    func_0x00010c1edde0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c20e320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25bfa0(puVar2);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c20e340();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c183040();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c182fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar24 = puVar23;
    func_0x00010c1a2c40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_3;
    func_0x00010bfaee40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar24;
    func_0x00010c21b1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar27;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar4);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar37);
    _objc_release(puVar15);
    _objc_release(puVar44);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar42);
    _objc_release(puVar12);
    _objc_release(puVar41);
    _objc_release(puVar11);
    _objc_release(puVar39);
    puVar44 = param_3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar44 == (undefined *)0x0) {
      puStack_270 = param_3;
      func_0x00010c15f220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar44 = param_3;
      func_0x00010bf5c9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c80();
      dVar46 = dVar50;
      dVar47 = dVar48;
      func_0x00010c0c2640(PTR_PTR_1126bf720);
      dVar49 = 0.0;
      if ((((dVar50 != 0.0) && (dVar49 = dVar46, dVar48 != 0.0)) &&
          (dVar48 = dVar50 / dVar48, dVar49 = 0.0, dVar48 != 0.0)) &&
         ((dVar49 = dVar46, dVar48 != INFINITY && (dVar47 = dVar48 * dVar47, dVar47 < dVar46)))) {
        dVar49 = dVar47;
      }
      dVar50 = dVar50 / dVar49;
      func_0x00010c27ade0(puVar44);
      dVar48 = dVar46 * dVar50;
      func_0x00010c27ae20(puVar44);
      dVar49 = dVar46 * dVar50;
      func_0x00010c14e120(puVar44);
      dVar50 = dVar50 * dVar46;
      func_0x00010c141a80(puVar44);
      puVar4 = PTR_PTR_1126d8d80;
      _objc_alloc_init();
      puVar39 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar48,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010c219bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar41 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar49,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c219be0();
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar46,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c1ee7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c1f5fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = puVar15;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar42);
      _objc_release(puVar12);
      _objc_release(puVar41);
      _objc_release(puVar11);
      _objc_release(puVar39);
      _objc_release(puVar4);
      _objc_release(puVar44);
      dVar48 = dVar47;
    }
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    if (param_1 == 0.0) {
LAB_10808885c:
      dVar46 = 0.0;
    }
    else if (param_2 == 0.0) {
LAB_108088870:
      dVar48 = 0.0;
      dVar46 = dVar50;
    }
    else {
      param_1 = param_1 / param_2;
      if (param_1 == 0.0) goto LAB_10808885c;
      if (param_1 == INFINITY) goto LAB_108088870;
      dVar46 = param_1 * dVar48;
      if (dVar50 <= dVar46) {
        dVar48 = dVar50 / param_1;
        dVar46 = dVar50;
      }
    }
    puVar44 = param_3;
    func_0x00010bf114c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar44;
    FUN_10808b2e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar44);
    puVar44 = param_3;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar44;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar41 = (undefined *)0x0;
    }
    else {
      puVar41 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar44);
    puVar39 = param_3;
    func_0x00010bf30960();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = auStack_120;
    lVar35 = 0x10;
    puVar4 = puVar39;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar44 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar39);
        }
        uVar29 = *(undefined8 *)((long)puVar44 * 8);
        func_0x000108e258d0(uVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar41);
        _objc_release(uVar29);
        puVar44 = puVar44 + 1;
      } while (puVar4 != puVar44);
      puVar44 = auStack_120;
      lVar35 = 0x10;
      puVar4 = puVar39;
      func_0x00010bf52a60();
    }
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar39;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    puVar42 = param_3;
    func_0x00010bf89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar42;
    func_0x00010c23ef60();
    puVar13 = puVar12;
    FUN_108089ad4(dVar46,dVar48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar42);
    _objc_release(puVar12);
    _objc_release(puVar39);
    puVar12 = param_3;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puVar12;
    func_0x00010bf529e0();
    puVar39 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar42 == (undefined *)0x0) {
      puVar42 = (undefined *)0x0;
    }
    else {
      func_0x00010bf529e0(puVar12);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      puVar44 = auStack_1a0;
      lVar35 = 0x10;
      puVar42 = puVar12;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar42 != (undefined *)0x0) {
        puVar44 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar12);
          }
          puVar37 = *(undefined **)((long)puVar44 * 8);
          puVar14 = param_6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c06f760();
          _objc_release(puVar14);
          if ((int)puVar15 == 0) {
            FUN_10808a784(puVar37);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar14 = param_6;
            func_0x00010c269d40(param_6);
            _objc_retainAutoreleasedReturnValue();
            puVar37 = puVar14;
            func_0x00010c2465a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
          }
          func_0x00010c14c720(puVar39);
          _objc_release(puVar37);
          puVar44 = puVar44 + 1;
        } while (puVar42 != puVar44);
        puVar44 = auStack_1a0;
        lVar35 = 0x10;
        puVar42 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      puVar42 = puVar39;
      func_0x00010bf51e00();
      _objc_release(puVar39);
    }
    puVar39 = param_3;
    func_0x00010c23f440();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar39;
    func_0x00010c08fa60();
    _objc_release(puVar39);
    puVar39 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puVar15 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126d9158;
      _objc_alloc(PTR_PTR_1126d9158);
      uVar29 = 0xffffffff8419d893;
      func_0x00010b794420(0xffffffff8419d893);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126bcd20;
      _objc_alloc();
      puVar37 = param_3;
      func_0x00010c23f440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062ba0();
      lVar35 = 0;
      puVar44 = puVar15;
      func_0x00010bff4d20(puVar14);
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar39;
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar37);
      _objc_release(uVar29);
      puVar15 = puVar39;
    }
    puVar14 = PTR_PTR_1126bcd60;
    _objc_alloc_init();
    func_0x00010c19c8e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c16cc80(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c178c80(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c191960(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c20bc80(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf0f0e0(param_3);
    func_0x00010c16bbc0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar39 = param_3;
    func_0x00010c23faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2060e0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010c09a780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010c096600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc920(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    func_0x00010c203a00(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar39 = param_3;
    func_0x00010bf0f140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c600(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    func_0x00010c186220(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar39 = param_3;
    func_0x00010c111620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1ea0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010bf20900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173880(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21df60(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010bf5cf00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar39 == (undefined *)0x0) {
      puVar37 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar39);
      func_0x00010c097820();
      puVar18 = PTR_PTR_1126bcd40;
      _objc_alloc_init();
      puVar19 = puVar39;
      func_0x00010c094320();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010c1bbd60();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010c1df120();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfddb20(puVar39);
      func_0x00010c0df6e0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      func_0x00010c1a71c0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c073e60(puVar39);
      _objc_release(puVar39);
      func_0x00010c0df6e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010c1b15a0();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar23;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(puVar17);
      _objc_release(puVar22);
      _objc_release(puVar16);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
    }
    func_0x00010c1df0e0(puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar37);
    _objc_release(puVar39);
    puVar39 = param_3;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar39 != (undefined *)0x0) {
      puVar39 = param_3;
      func_0x00010bf16100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c1bc380(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar39);
    }
    if (param_7 != 0) {
      func_0x00010c1c4d20(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar39 = puVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar39;
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar37;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    iVar34 = (int)puVar16;
    _objc_release(puVar37);
    _objc_release(puVar14);
    _objc_release(puVar15);
    _objc_release(puVar12);
    _objc_release(puVar42);
    _objc_release(puVar13);
    _objc_release(puVar41);
    _objc_release(puVar11);
    _objc_release(puStack_270);
    _objc_release(puVar28);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar40);
    _objc_release(puVar7);
    _objc_release(0);
    _objc_release(puVar6);
    _objc_release(uStack_248);
    _objc_release(puVar5);
    _objc_release(puVar38);
    _objc_release(puVar3);
    _objc_release(puVar43);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar44);
    _objc_retain(lVar35);
    puVar39 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar43 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar45 = *(ulong *)((long)puVar43 * 8);
        if ((iVar34 == 0) || (uVar30 = uVar45, func_0x00010c07f200(), (uVar30 & 1) == 0)) {
          uVar30 = uVar45;
          func_0x00010bfe8f60();
          _objc_retainAutoreleasedReturnValue();
          uVar31 = uVar30;
          func_0x00010c0d3c80();
          _objc_release(uVar30);
          uVar30 = uVar45;
          func_0x00010c073720();
          if ((int)uVar30 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            uVar30 = uVar31;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar32 = uVar30;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar30);
            if (uVar32 == 0) {
              puVar38 = (undefined *)0x0;
            }
            else {
              puVar38 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bdc1900();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              if (puVar38 != (undefined *)0x0) {
                puVar5 = puVar38;
              }
              _objc_retain(puVar5);
              _objc_release(puVar3);
              _objc_release(puVar38);
              puVar38 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar5;
            }
            puVar5 = puVar38;
            func_0x00010c08fa60();
            puVar6 = puVar38;
            if (puVar5 == (undefined *)0x0) {
              puVar5 = puVar4;
              func_0x00010bfb9b80();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010bfb2040();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              puVar5 = puVar7;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar38);
              _objc_release(puVar5);
              _objc_release(puVar7);
            }
            puVar38 = puVar6;
            func_0x00010c08fa60();
            if (puVar38 != (undefined *)0x0) {
              func_0x00010c1d0640(puVar3);
              puVar38 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
              puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c008340(puVar38);
              _objc_release(puVar5);
              func_0x00010c1d0640(uVar31);
              _objc_release(puVar38);
            }
            _objc_release(uVar32);
            _objc_release(puVar3);
            _objc_release(puVar6);
          }
          func_0x00010c14e3c0();
          func_0x00010c104360();
          FUN_108086f40();
          puVar3 = PTR_PTR_1126d9168;
          _objc_opt_class(PTR_PTR_1126d9168);
          uVar32 = uVar45;
          _objc_opt_isKindOfClass(uVar45,puVar3);
          uVar30 = uVar45;
          if ((uVar32 & 1) == 0) {
            uVar30 = 0;
          }
          _objc_retain(uVar30);
          uVar32 = uVar30;
          func_0x00010bf8ba40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar4);
          _objc_retain(uVar30);
          _objc_retain(puVar44);
          _objc_retain(lVar35);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          uVar33 = uVar32;
          func_0x00010c124d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(uVar32);
          if ((uVar30 == 0) || (uVar32 = uVar33, func_0x00010bf529e0(), uVar32 != 0)) {
            _objc_alloc();
            uVar30 = uVar45;
            func_0x00010bf11e00(uVar45);
            func_0x00010b79ab74();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff5d80();
            _objc_release(uVar30);
            uVar30 = uVar45;
            func_0x00010bf32720(uVar45);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar4);
            func_0x00010bfb2040(uVar30);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar30);
            puVar44 = PTR_PTR_1126d8bd8;
            func_0x00010c2b1c60(PTR_PTR_1126d8bd8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21ace0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c280f40(uVar45);
            func_0x00010c21bb80(puVar44);
            _objc_unsafeClaimAutoreleasedReturnValue();
            goto code_r0x00010bfadea0;
          }
          _objc_release(uVar33);
          _objc_release(lVar35);
          _objc_release(puVar44);
          _objc_release(uVar30);
          _objc_release(puVar4);
          _objc_release(uVar30);
          _objc_release(uVar31);
        }
        puVar43 = puVar43 + 1;
      } while (puVar2 != puVar43);
      puVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_release(lVar35);
    _objc_release(puVar44);
    _objc_release(puVar4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar36) {
      ___stack_chk_fail();
code_r0x00010bfadea0:
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 108089244; end: 108089acb;  */

/* WARNING: Possible PIC construction at 0x0001080897b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080897b8) */

void FUN_108089244(long param_1,undefined *param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_1);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return;
      }
      ___stack_chk_fail();
code_r0x00010bfadea0:
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar13,PTR_s_filterId_1125c9150);
      return;
    }
    lVar12 = 0;
    puVar5 = puVar13;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar13 = *(undefined **)(lVar12 * 8);
      if ((param_3 == 0) || (puVar4 = puVar13, func_0x00010c07f200(), ((ulong)puVar4 & 1) == 0)) {
        puVar5 = puVar13;
        func_0x00010bfe8f60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        puVar5 = puVar13;
        func_0x00010c073720();
        if ((int)puVar5 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
          puVar11 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar11;
          func_0x00010bf64920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          if (puVar6 == (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
          }
          else {
            puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            if (puVar11 != (undefined *)0x0) {
              puVar7 = puVar11;
            }
            _objc_retain(puVar7);
            _objc_release(puVar5);
            _objc_release(puVar11);
            puVar11 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar7;
          }
          puVar7 = puVar11;
          func_0x00010c08fa60();
          puVar9 = puVar11;
          if (puVar7 == (undefined *)0x0) {
            puVar7 = param_2;
            func_0x00010bfb9b80();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfb2040();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar8;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            _objc_release(puVar7);
            _objc_release(puVar8);
          }
          puVar11 = puVar9;
          func_0x00010c08fa60();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c1d0640(puVar5);
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c008340(puVar11);
            _objc_release(puVar7);
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar11);
          }
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar9);
        }
        func_0x00010c14e3c0();
        func_0x00010c104360();
        FUN_108086f40();
        puVar5 = PTR_PTR_1126d9168;
        _objc_opt_class(PTR_PTR_1126d9168);
        puVar6 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar5);
        puVar11 = puVar13;
        if (((ulong)puVar6 & 1) == 0) {
          puVar11 = (undefined *)0x0;
        }
        _objc_retain(puVar11);
        puVar6 = puVar11;
        func_0x00010bf8ba40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        _objc_retain(puVar11);
        _objc_retain(param_4);
        _objc_retain(param_5);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010c124d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if ((puVar11 == (undefined *)0x0) ||
           (puVar6 = puVar9, func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) {
          _objc_alloc();
          puVar2 = puVar13;
          func_0x00010bf11e00(puVar13);
          func_0x00010b79ab74();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff5d80();
          _objc_release(puVar2);
          puVar2 = puVar13;
          func_0x00010bf32720(puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_2);
          func_0x00010bfb2040(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126d8bd8;
          func_0x00010c2b1c60(PTR_PTR_1126d8bd8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21ace0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c280f40(puVar13);
          func_0x00010c21bb80(puVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          goto code_r0x00010bfadea0;
        }
        _objc_release(puVar9);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(puVar11);
        _objc_release(param_2);
        _objc_release(puVar11);
        _objc_release(puVar4);
      }
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar13 = puVar5;
  } while( true );
}



/* Entry: 108089acc; end: 108089ad3;  */

void FUN_108089acc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 108089ad4; end: 108089f73;  */

undefined * FUN_108089ad4(double param_1,double param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  long lStack_238;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = param_2;
  _objc_retain();
  lVar14 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar14 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _objc_retain(param_3);
    lStack_238 = param_3;
    func_0x00010bf52a60();
    if (lStack_238 != 0) {
      lVar14 = *plStack_1c0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1c0 != lVar14) {
            _objc_enumerationMutation(param_3);
          }
          lVar18 = *(long *)(lStack_1c8 + lVar15 * 8);
          uStack_1d8 = 0;
          lVar3 = lVar18;
          func_0x00010bf40c40(lVar18);
          _objc_retainAutoreleasedReturnValue();
          param_4 = &uStack_1d8;
          func_0x000108cff288();
          _objc_release(lVar3);
          puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          lVar3 = lVar18;
          func_0x00010c102f00(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010bf0a0e0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          dVar21 = 0.0;
          lVar4 = lVar18;
          func_0x00010c102f00();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar4;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar3 != 0) {
            lVar16 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar4);
              }
              uVar19 = *(undefined8 *)(lVar16 * 8);
              func_0x00010c09ea00(uVar19);
              dVar21 = dVar21 / param_1;
              func_0x00010c09ea00(uVar19);
              dVar20 = dVar20 / param_2;
              puVar5 = PTR_PTR_1126bb2b8;
              func_0x00010c246560(dVar21,dVar20,PTR_PTR_1126bb2b8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar17);
              _objc_release(puVar5);
              lVar16 = lVar16 + 1;
            } while (lVar3 != lVar16);
            lVar3 = lVar4;
            func_0x00010bf52a60();
          }
          _objc_release(lVar4);
          func_0x00010bf89e60();
          puVar5 = PTR_PTR_1126d8d58;
          _objc_alloc_init(PTR_PTR_1126d8d58);
          puVar6 = puVar5;
          func_0x00010c17eb00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c099460(lVar18);
          puVar7 = puVar6;
          func_0x00010c20e980(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c1de980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8e2c0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c194460(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c191920();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(lVar18);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar17);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lStack_238);
        lStack_238 = param_3;
        func_0x00010bf52a60();
      } while (lStack_238 != 0);
    }
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126d9160;
    _objc_alloc_init();
    puVar6 = puVar5;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c20e9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c2037e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c08fa60();
  _objc_release(puVar12);
  _objc_release(param_4);
  return (undefined *)(ulong)(puVar13 != (undefined8 *)0x0);
}



/* Entry: 108089f74; end: 108089fd7;  */

bool FUN_108089f74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 108089fd8; end: 10808a0f3;  */

void FUN_108089fd8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9130;
  _objc_opt_class(PTR_PTR_1126d9130);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8b6c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    FUN_108086884(param_3,uVar6,uVar3,*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar4 = uVar2;
    func_0x00010bf861e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c252cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (uVar5 != 0) {
      func_0x00010befa120(param_2);
    }
    _objc_retain(param_2);
    _objc_release(uVar2);
    _objc_release(param_3);
    uVar6 = param_2;
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10808a0f4; end: 10808a18b;  */

bool FUN_10808a0f4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f1ce0();
  _objc_release(uVar2);
  lVar1 = 2;
  if (0x2b < uVar3 || (1L << (uVar3 & 0x3f) & 0x8000000000bU) == 0) {
    lVar1 = 1;
  }
  lVar4 = param_2;
  func_0x00010bf32b00(param_2);
  _objc_release(param_2);
  return lVar4 == lVar1;
}



/* Entry: 10808a18c; end: 10808a783;  */

void FUN_10808a18c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain();
  func_0x000108edf3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108edf514();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108edf60c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  func_0x00010914e0b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108087414();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = puVar4;
  func_0x00010808723c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bcd48;
  _objc_alloc_init();
  puVar7 = puVar6;
  func_0x00010c223ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c1ac480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar9 = puVar8;
  func_0x00010c1a2c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar10 = puVar9;
  func_0x00010c207d20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c1edda0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain();
    _objc_opt_new(puVar12);
    puVar5 = PTR_PTR_1126d9170;
    _objc_alloc_init();
    func_0x00010c249ca0(puVar4);
    puVar6 = puVar5;
    func_0x00010c207d80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    puVar6 = puVar5;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c207c40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126ba8c0;
    _objc_alloc_init(PTR_PTR_1126ba8c0);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf01f00(puVar4);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c167920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c21b980();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    puVar6 = puVar5;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c167920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126ba9a8;
    _objc_alloc_init(PTR_PTR_1126ba9a8);
    puVar6 = puVar5;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c2709c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c26f320(puVar8);
    puVar4 = puVar6;
    func_0x00010c2156c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c215860(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ba8c8;
    _objc_alloc_init(PTR_PTR_1126ba8c8);
    puVar5 = puVar4;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c189a20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10808a784; end: 10808ad8b;  */

void FUN_10808a784(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  _objc_retain();
  uVar8 = param_3;
  func_0x00010c27dd80();
  puVar11 = (undefined *)0x0;
  uVar8 = uVar8 - 1;
  if ((0xc < uVar8) || ((0x17ffU >> (ulong)((uint)uVar8 & 0x1f) & 1) == 0)) goto LAB_10808ad30;
  lVar12 = *(long *)(&UNK_10deeddf0 + uVar8 * 8);
  uVar8 = param_3;
  func_0x00010bfee000();
  puVar11 = (undefined *)0x0;
  if ((0x15 < uVar8) || ((0x31ffffU >> (ulong)((uint)uVar8 & 0x1f) & 1) == 0)) goto LAB_10808ad30;
  uVar9 = *(undefined8 *)(&UNK_10deede58 + uVar8 * 8);
  func_0x00010c1281e0(param_3);
  uVar17 = param_1;
  uVar19 = param_2;
  func_0x00010bf345e0(param_3);
  uVar18 = uVar17;
  func_0x00010bf345e0(param_3);
  func_0x00010c14e120(param_3);
  uVar8 = param_3;
  func_0x00010c2790e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x0001091743c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar11 = PTR_PTR_1126c4000;
  _objc_alloc_init();
  puVar3 = puVar11;
  func_0x00010c227680(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c227840(uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar11);
  bVar1 = false;
  uVar8 = 0;
  if (lVar12 < 0x3cedc99) {
    if (lVar12 < -0x15e045b1) {
      if (lVar12 != -0x7955171c) {
        lVar10 = -0x62a7aa50;
        goto LAB_10808a9b0;
      }
    }
    else if ((lVar12 != -0x15e045b1) && (lVar12 != -0x107719eb)) {
      lVar10 = 0x1f8b58;
LAB_10808a9b0:
      uVar14 = 0;
      uVar13 = 0;
      if (lVar12 != lVar10) goto LAB_10808aa20;
    }
LAB_10808a9c0:
    uVar8 = param_3;
    func_0x00010bf377a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar14 = param_3;
    func_0x00010bf377a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    uVar14 = 0;
    bVar1 = true;
  }
  else {
    if (0x1a1de167 < lVar12) {
      if ((lVar12 != 0x1a1de168) && (lVar12 != 0x24b0f4ce)) {
        lVar10 = 0x7f6db8cc;
        goto LAB_10808a9b0;
      }
      goto LAB_10808a9c0;
    }
    if (lVar12 == 0x3cedc99) goto LAB_10808a9c0;
    if (lVar12 != 0x3f08826) {
      lVar10 = 0x40ae93f;
      goto LAB_10808a9b0;
    }
    uVar14 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    bVar1 = false;
    uVar13 = 0;
  }
LAB_10808aa20:
  uVar16 = param_3;
  func_0x00010bf377a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010bf9e600();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010c08fa60();
  if (uVar15 == 0) {
    uVar15 = 0;
  }
  else {
    uVar7 = param_3;
    func_0x00010bf377a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf9e600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  _objc_release(uVar16);
  if (bVar1) {
    uVar6 = param_3;
    func_0x00010bf377a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010bf62920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  else {
    uVar16 = 0;
  }
  puVar3 = PTR_PTR_1126c3ff8;
  _objc_alloc_init(PTR_PTR_1126c3ff8);
  func_0x00010c21ace0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c194460(puVar3,param_4,uVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d7da0(puVar3,param_4,uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar3,param_4,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1e9b60(param_1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1e9a40(param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1dee80(puVar3,param_4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c141a80(param_3);
  func_0x00010c1ee8e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f6140(uVar18,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c081660(param_3);
  func_0x00010c1b51a0(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c081160(param_3);
  func_0x00010c1b50a0(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c219440(puVar3,param_4,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b4000(puVar3,param_4,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3660(puVar3,param_4,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac5e0(puVar3,param_4,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfedfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac5a0(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c06c000(param_3);
  func_0x00010c1af2c0(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c199840(puVar3,param_4,uVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c073260(param_3);
  func_0x00010c1b1180(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf06320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169260(puVar3,param_4,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c188dc0(puVar3,param_4,uVar16);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(puVar5);
  _objc_release(uVar2);
LAB_10808ad30:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10808ad8c; end: 10808b2e7;  */

void FUN_10808ad8c(double param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_98 [24];
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar18 = param_2;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2be880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar5 = param_2;
  dVar19 = param_1;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2beba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar21 = dVar19;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar18);
  puVar8 = PTR_PTR_1126b2700;
  _objc_alloc();
  uVar18 = param_2;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar20 = param_1;
  func_0x00010c055500(param_1,dVar19,0,dVar21);
  _objc_release(uVar3);
  _objc_release(uVar18);
  puVar9 = PTR_PTR_1126b2700;
  _objc_alloc();
  uVar18 = param_2;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c14e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar4 = param_2;
  dVar21 = dVar20;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c055500(param_1,dVar19,dVar20,dVar21);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar18);
  uVar18 = param_2;
  func_0x00010c0fb860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf529e0();
  _objc_release(uVar18);
  if (uVar3 != 0) {
    uVar18 = 0;
    do {
      uVar3 = param_2;
      func_0x00010c0fb860(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar3 = uVar4;
      func_0x00010c250fc0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar19 = param_1;
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bf957a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar21 = dVar19 / 1000.0;
      _objc_release(uVar3);
      if (0.0 <= dVar21) {
        param_1 = param_1 / 1000.0;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        else {
          puVar11 = PTR_PTR_1126bb2a8;
          _objc_alloc(PTR_PTR_1126bb2a8);
          _CMTimeMakeWithSeconds(auStack_98,0,600);
          func_0x00010c052280(puVar11);
          func_0x00010befa120(puVar10);
          _objc_release(puVar11);
        }
        puVar12 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        _CMTimeMakeWithSeconds(auStack_98,param_1,600);
        func_0x00010c052280(puVar12);
        func_0x00010befa120(puVar10);
        puVar13 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        _CMTimeMakeWithSeconds(auStack_98,dVar21,600);
        func_0x00010c052280(puVar13);
        puVar14 = puVar10;
        func_0x00010befa120(puVar10);
        func_0x00010b73c8a8();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126c41f0;
        _objc_alloc(PTR_PTR_1126c41f0);
        func_0x00010c0553e0();
        puVar16 = PTR_PTR_1126bb258;
        _objc_alloc(PTR_PTR_1126bb258);
        uVar3 = uVar4;
        func_0x00010c26b700(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0511e0(puVar16);
        _objc_release(uVar3);
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        func_0x00010bfe7c80(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        func_0x00010befa120(puVar1);
        func_0x00010befa120(puVar2);
        _objc_release(puVar11);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        dVar19 = dVar21;
      }
      _objc_release(puVar10);
      _objc_release(uVar4);
      uVar18 = uVar18 + 1;
      uVar3 = param_2;
      func_0x00010c0fb860();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      param_1 = dVar19;
    } while (uVar18 < uVar4);
  }
  (**(code **)(param_3 + 0x10))(param_3,puVar1,puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10808b2e8; end: 10808b90f;  */

void FUN_10808b2e8(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_1c0;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined *)0x0;
  if (param_3 != (undefined *)0x0) {
    _objc_retain(param_3);
    dVar19 = 0.0;
    puVar11 = param_3;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar15;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar11 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        dVar18 = dVar19;
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar1);
          dVar18 = dVar19;
        }
        uVar12 = *(undefined8 *)((long)puVar15 * 8);
        uVar2 = uVar12;
        func_0x00010c27a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        dVar19 = dVar18;
        _objc_release(uVar2);
        if (0.0 < dVar18) {
          puVar3 = PTR_PTR_1126c3fe0;
          _objc_alloc(PTR_PTR_1126c3fe0);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar2 = uVar12;
          func_0x00010c27a460(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27ada0();
          func_0x00010c0df720(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar4 = uVar12;
          func_0x00010c27a460(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27ada0();
          func_0x00010c0df720(param_2,puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c063600(puVar3);
          _objc_release(puVar15);
          _objc_release(uVar4);
          _objc_release(puVar11);
          _objc_release(uVar2);
          puVar5 = PTR_PTR_1126c3fe8;
          _objc_alloc();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar2 = uVar12;
          func_0x00010c27a460();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c27a460();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c141a80();
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c055500();
          _objc_release(puVar15);
          _objc_release(uVar12);
          _objc_release(puVar11);
          _objc_release(uVar2);
          _objc_release(puVar3);
          goto LAB_10808b5c8;
        }
        puVar15 = puVar15 + 1;
      } while (puVar11 != puVar15);
      puVar11 = puVar1;
      func_0x00010bf52a60();
    }
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c3fe0;
    _objc_alloc(PTR_PTR_1126c3fe0);
    func_0x00010c063600();
    puVar5 = PTR_PTR_1126c3fe8;
    _objc_alloc();
    func_0x00010c055500();
LAB_10808b5c8:
    _objc_release(puVar1);
    puVar11 = param_3;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar15 = puVar11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126d9100;
    _objc_alloc();
    func_0x00010c0553a0();
    _objc_release(puVar15);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar11 = PTR_PTR_1126d90f8;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_4);
    _objc_alloc();
    lVar10 = param_4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    dVar19 = 0.0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lVar6 = param_4;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 == 0) {
      ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf538;
    }
    else {
      lVar17 = *plStack_270;
      ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf538;
      do {
        lVar13 = 0;
        do {
          dVar18 = dVar19;
          if (*plStack_270 != lVar17) {
            _objc_enumerationMutation(lVar6);
            dVar18 = dVar19;
          }
          lVar16 = *(long *)(lStack_278 + lVar13 * 8);
          lVar8 = lVar16;
          func_0x00010c27a460(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          dVar19 = dVar18;
          _objc_release(lVar8);
          ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (0.0 < dVar18) {
            if (lVar16 == 0) {
              uStack_298 = 0;
              uStack_290 = 0;
              uStack_288 = 0;
            }
            else {
              func_0x00010c26f000(&uStack_298,lVar16);
            }
            _CMTimeGetSeconds(&uStack_298);
            dVar19 = dVar19 * 1000.0;
            func_0x00010c0df720(dVar19);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar9;
            goto LAB_10808b814;
          }
          lVar13 = lVar13 + 1;
        } while (lVar7 != lVar13);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
LAB_10808b814:
    _objc_release(lVar6);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar6 = param_4;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_240,lVar7);
    }
    _CMTimeGetSeconds(&uStack_240);
    func_0x00010c0df720(dVar19 * 1000.0,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(param_4);
    func_0x00010c051620();
    _objc_release(puVar15);
    _objc_release(ppuVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      _objc_retain();
      if (lVar10 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar10;
        func_0x00010c0fb860(lVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar10);
        lVar7 = lVar6;
        func_0x00010c0b8600(lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        puVar11 = PTR_PTR_1126bced0;
        _objc_alloc(PTR_PTR_1126bced0);
        func_0x00010c035e80();
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      _objc_release(lVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10808b910; end: 10808b9eb;  */

void FUN_10808b910(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0fb860(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10808b9ec;
    puStack_40 = &UNK_110a19e68;
    _objc_retain(param_1);
    lVar2 = lVar1;
    lStack_38 = param_1;
    func_0x00010c0b8600(lVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126bced0;
    _objc_alloc(PTR_PTR_1126bced0);
    func_0x00010c035e80();
    _objc_release(lVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10808b9ec; end: 10808bdf3;  */

void FUN_10808b9ec(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_98 [24];
  
  puVar1 = PTR_PTR_1126bcec8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c27a460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b2700;
  _objc_retain(uVar3);
  _objc_alloc(puVar4);
  uVar5 = uVar3;
  func_0x00010c27ada0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2be880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = uVar3;
  dVar14 = param_1;
  func_0x00010c27ada0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2beba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar9 = uVar3;
  dVar15 = dVar14;
  func_0x00010c141a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c055500(param_1,dVar14,0,dVar15,puVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar10 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  uVar5 = uVar3;
  func_0x00010c27ada0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2be880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar7 = uVar3;
  dVar14 = param_1;
  func_0x00010c27ada0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2beba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar9 = uVar3;
  dVar15 = dVar14;
  func_0x00010c14e120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar11 = uVar3;
  dVar16 = dVar15;
  func_0x00010c141a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar11);
  func_0x00010c055500(param_1,dVar14,dVar15,dVar16,puVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c250fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar14 = param_1;
  _objc_release(uVar5);
  if (0.0 < param_1) {
    puVar13 = PTR_PTR_1126bb2a8;
    _objc_alloc(PTR_PTR_1126bb2a8);
    _CMTimeMake(auStack_98,0,1000);
    func_0x00010c052280(puVar13);
    func_0x00010befa120(puVar12);
    _objc_release(puVar13);
  }
  puVar13 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  uVar5 = param_3;
  func_0x00010c250fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _CMTimeMake(auStack_98,(long)dVar14,1000);
  func_0x00010c052280(puVar13);
  func_0x00010befa120(puVar12);
  _objc_release(puVar13);
  _objc_release(uVar5);
  puVar13 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  uVar5 = param_3;
  func_0x00010bf957a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _CMTimeMake(auStack_98,(long)dVar14,1000);
  func_0x00010c052280(puVar13);
  func_0x00010befa120(puVar12);
  _objc_release(puVar13);
  _objc_release(uVar5);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x00010c051760(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10808bdf4; end: 10808be9b;  */

void FUN_10808bdf4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3700;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c250fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf885a0(uVar3);
  func_0x00010c035e60(param_1 / 1000.0,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10808be9c; end: 10808c073;  */

void FUN_10808be9c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    FUN_10808b2e8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0fb860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c27a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar3 = lVar1;
    func_0x00010c27ada0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2be880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar5 = lVar1;
    uVar9 = param_1;
    func_0x00010c27ada0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2beba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar10 = uVar9;
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126b3720;
    _objc_alloc(PTR_PTR_1126b3720);
    lVar3 = lVar1;
    func_0x00010c141a80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar4 = lVar1;
    uVar11 = uVar10;
    func_0x00010c14e120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf885a0(lVar4);
    func_0x00010c0554e0(param_1,uVar9,uVar10,uVar11,puVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126d9178;
    _objc_alloc(PTR_PTR_1126d9178);
    func_0x00010c035ea0();
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10808c074; end: 10808c197; -[SCPreviewAutoCaptionsScope initWithAutoCaptionsButton:uiContainer:eventObservable:renderer:assetsObservable:] */

undefined1 *
FUN_10808c074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fc4b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10808c198; end: 10808c19f; -[SCPreviewAutoCaptionsScope autoCaptionsButton] */

undefined8 FUN_10808c198(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808c1a0; end: 10808c1a7; -[SCPreviewAutoCaptionsScope uiContainer] */

undefined8 FUN_10808c1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808c1a8; end: 10808c1af; -[SCPreviewAutoCaptionsScope eventObservable] */

undefined8 FUN_10808c1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10808c1b0; end: 10808c1b7; -[SCPreviewAutoCaptionsScope renderer] */

undefined8 FUN_10808c1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10808c1b8; end: 10808c1bf; -[SCPreviewAutoCaptionsScope assetsObservable] */

undefined8 FUN_10808c1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10808c1c0; end: 10808c213; -[SCPreviewAutoCaptionsScope .cxx_destruct] */

void FUN_10808c1c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808c214; end: 10808c2c7; -[SCAutoCaptionsDataModel initWithTokenDataModels:transform:shouldSplitWithSpace:] */

undefined1 *
FUN_10808c214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc4b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10808c2c8; end: 10808c2eb; -[SCAutoCaptionsDataModel copyWithZone:] */

undefined8 FUN_10808c2c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808c2ec; end: 10808c363; -[SCAutoCaptionsDataModel hash] */

undefined8 * FUN_10808c2ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10808c3f4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10808c400;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10808c400;
        }
        goto LAB_10808c3f4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10808c400:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10808c364; end: 10808c41b; -[SCAutoCaptionsDataModel isEqual:] */

long FUN_10808c364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808c3f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808c400;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10808c400;
        }
        goto LAB_10808c3f4;
      }
    }
    lVar3 = 0;
  }
LAB_10808c400:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10808c41c; end: 10808c423; -[SCAutoCaptionsDataModel tokenDataModels] */

undefined8 FUN_10808c41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808c424; end: 10808c42b; -[SCAutoCaptionsDataModel transform] */

undefined8 FUN_10808c424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10808c42c; end: 10808c433; -[SCAutoCaptionsDataModel shouldSplitWithSpace] */

undefined1 FUN_10808c42c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10808c434; end: 10808c463; -[SCAutoCaptionsDataModel .cxx_destruct] */

void FUN_10808c434(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10808c464; end: 10808c4ef; -[SCAutoCaptionsTokenDataModel initWithToken:startTimestamp:endTimestamp:] */

undefined1 *
FUN_10808c464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc4c0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10808c4f0; end: 10808c513; -[SCAutoCaptionsTokenDataModel copyWithZone:] */

undefined8 FUN_10808c4f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808c514; end: 10808c5bf; -[SCAutoCaptionsTokenDataModel hash] */

undefined8 * FUN_10808c514(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10808c690:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10808c69c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
        dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          puVar6 = *(undefined1 **)((long)puVar3 + 8);
          if (puVar6 != *(undefined1 **)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_10808c69c;
          }
          goto LAB_10808c690;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10808c69c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10808c5c0; end: 10808c6b7; -[SCAutoCaptionsTokenDataModel isEqual:] */

long FUN_10808c5c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808c690:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808c69c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_10808c69c;
          }
          goto LAB_10808c690;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10808c69c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10808c6b8; end: 10808c6bf; -[SCAutoCaptionsTokenDataModel token] */

undefined8 FUN_10808c6b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808c6c0; end: 10808c6c7; -[SCAutoCaptionsTokenDataModel startTimestamp] */

undefined8 FUN_10808c6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808c6c8; end: 10808c6cf; -[SCAutoCaptionsTokenDataModel endTimestamp] */

undefined8 FUN_10808c6c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10808c6d0; end: 10808c6db; -[SCAutoCaptionsTokenDataModel .cxx_destruct] */

void FUN_10808c6d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808c6dc; end: 10808c787; -[SCAutoCaptionsViewModel initWithPhraseViewModels:transform:] */

undefined1 *
FUN_10808c6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc4c8;
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



/* Entry: 10808c788; end: 10808c7ab; -[SCAutoCaptionsViewModel copyWithZone:] */

undefined8 FUN_10808c788(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808c7ac; end: 10808c81f; -[SCAutoCaptionsViewModel hash] */

undefined8 * FUN_10808c7ac(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10808c8a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10808c8ac;
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
          goto LAB_10808c8ac;
        }
        goto LAB_10808c8a0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10808c8ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10808c820; end: 10808c8c7; -[SCAutoCaptionsViewModel isEqual:] */

long FUN_10808c820(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808c8a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808c8ac;
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
          goto LAB_10808c8ac;
        }
        goto LAB_10808c8a0;
      }
    }
    lVar3 = 0;
  }
LAB_10808c8ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10808c8c8; end: 10808c8cf; -[SCAutoCaptionsViewModel phraseViewModels] */

undefined8 FUN_10808c8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808c8d0; end: 10808c8d7; -[SCAutoCaptionsViewModel transform] */

undefined8 FUN_10808c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808c8d8; end: 10808c907; -[SCAutoCaptionsViewModel .cxx_destruct] */

void FUN_10808c8d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808c908; end: 10808c98f; -[SCAutoCaptionsPhraseViewModel initWithPhrase:startTimestamp:] */

undefined1 *
FUN_10808c908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc4d0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10808c990; end: 10808c9b3; -[SCAutoCaptionsPhraseViewModel copyWithZone:] */

undefined8 FUN_10808c990(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808c9b4; end: 10808ca3f; -[SCAutoCaptionsPhraseViewModel hash] */

undefined8 * FUN_10808c9b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10808cadc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10808cae8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10808cae8;
        }
        goto LAB_10808cadc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10808cae8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10808ca40; end: 10808cb03; -[SCAutoCaptionsPhraseViewModel isEqual:] */

long FUN_10808ca40(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808cadc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808cae8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10808cae8;
        }
        goto LAB_10808cadc;
      }
    }
    lVar4 = 0;
  }
LAB_10808cae8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10808cb04; end: 10808cb0b; -[SCAutoCaptionsPhraseViewModel phrase] */

undefined8 FUN_10808cb04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808cb0c; end: 10808cb13; -[SCAutoCaptionsPhraseViewModel startTimestamp] */

undefined8 FUN_10808cb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808cb14; end: 10808cb1f; -[SCAutoCaptionsPhraseViewModel .cxx_destruct] */

void FUN_10808cb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808cb20; end: 10808cb6b; +[SCAutoCaptionsEvent deleteCaption] */

void FUN_10808cb20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c41e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10808cb6c; end: 10808cbb3; +[SCAutoCaptionsEvent editCaption] */

void FUN_10808cb6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c41e8;
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



/* Entry: 10808cbb4; end: 10808cc1b; +[SCAutoCaptionsEvent loadConfigurationWithConfig:] */

void FUN_10808cbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c41e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10808cc1c; end: 10808cc3f; -[SCAutoCaptionsEvent copyWithZone:] */

undefined8 FUN_10808cc1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808cc40; end: 10808cc9f; -[SCAutoCaptionsEvent hash] */

void FUN_10808cc40(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fc4d8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10808cca0; end: 10808cce3; -[SCAutoCaptionsEvent internalInit] */

void FUN_10808cca0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc4d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10808cce4; end: 10808cd83; -[SCAutoCaptionsEvent isEqual:] */

long FUN_10808cce4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808cd68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10808cd68;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10808cd68;
    }
  }
  lVar3 = 1;
LAB_10808cd68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10808cd84; end: 10808ce2f; -[SCAutoCaptionsEvent matchEditCaption:deleteCaption:loadConfiguration:] */

void FUN_10808cd84(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10808ce0c;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10808ce0c;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_10808ce0c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10808ce30; end: 10808ce3b; -[SCAutoCaptionsEvent .cxx_destruct] */

void FUN_10808ce30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10808ce3c; end: 10808cee7; -[SCAutoCaptionsConfiguration initWithPhraseViewModels:transform:] */

undefined1 *
FUN_10808ce3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc4e0;
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



/* Entry: 10808cee8; end: 10808cf0b; -[SCAutoCaptionsConfiguration copyWithZone:] */

undefined8 FUN_10808cee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808cf0c; end: 10808cf7f; -[SCAutoCaptionsConfiguration hash] */

undefined8 * FUN_10808cf0c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10808d000:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10808d00c;
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
          goto LAB_10808d00c;
        }
        goto LAB_10808d000;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10808d00c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10808cf80; end: 10808d027; -[SCAutoCaptionsConfiguration isEqual:] */

long FUN_10808cf80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10808d000:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10808d00c;
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
          goto LAB_10808d00c;
        }
        goto LAB_10808d000;
      }
    }
    lVar3 = 0;
  }
LAB_10808d00c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10808d028; end: 10808d02f; -[SCAutoCaptionsConfiguration phraseViewModels] */

undefined8 FUN_10808d028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808d030; end: 10808d037; -[SCAutoCaptionsConfiguration transform] */

undefined8 FUN_10808d030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808d038; end: 10808d067; -[SCAutoCaptionsConfiguration .cxx_destruct] */

void FUN_10808d038(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10808d068; end: 10808d0c7; -[SCAutoCaptionsTransform initWithTranslation:rotation:scale:] */

void FUN_10808d068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc4e8;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10808d0c8; end: 10808d0eb; -[SCAutoCaptionsTransform copyWithZone:] */

undefined8 FUN_10808d0c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10808d0ec; end: 10808d1bf; -[SCAutoCaptionsTransform hash] */

ulong * FUN_10808d0ec(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[3] == (double)param_3[3]) &&
           (bVar2 = false, !NAN((double)puVar3[4]) && !NAN((double)param_3[4]))) {
          bVar2 = (double)puVar3[4] == (double)param_3[4];
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
          dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
            goto LAB_10808d298;
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10808d298:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10808d1c0; end: 10808d2b3; -[SCAutoCaptionsTransform isEqual:] */

bool FUN_10808d1c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20))))
        {
          bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
          dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
            goto LAB_10808d298;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10808d298:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10808d2b4; end: 10808d2bb; -[SCAutoCaptionsTransform translation] */

undefined1  [16] FUN_10808d2b4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}


