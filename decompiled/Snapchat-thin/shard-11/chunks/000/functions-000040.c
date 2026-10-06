/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080a3370; end: 1080a3377; -[SCValdiProcessedTextRangeValue setRange:] */

void FUN_1080a3370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



/* Entry: 1080a3378; end: 1080a337b; -[SCValdiProcessedTextRangeValue value] */

undefined8 FUN_1080a3378(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a337c; end: 1080a339b; -[SCValdiProcessedTextRangeValue setValue:] */

void FUN_1080a337c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a6090();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a339c; end: 1080a339f; -[SCValdiProcessedTextRangeValue .cxx_destruct] */

void FUN_1080a339c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a33a0; end: 1080a33a7; -[SCValdiProcessedTextOuterOutline range] */

undefined1  [16] FUN_1080a33a0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1080a33a8; end: 1080a33af; -[SCValdiProcessedTextOuterOutline setRange:] */

void FUN_1080a33a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 1080a33b0; end: 1080a33b3; -[SCValdiProcessedTextOuterOutline color] */

undefined8 FUN_1080a33b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a33b4; end: 1080a33d3; -[SCValdiProcessedTextOuterOutline setColor:] */

void FUN_1080a33b4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a6090();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a33d4; end: 1080a33db; -[SCValdiProcessedTextOuterOutline width] */

undefined8 FUN_1080a33d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a33dc; end: 1080a33e3; -[SCValdiProcessedTextOuterOutline setWidth:] */

void FUN_1080a33dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080a33e4; end: 1080a33e7; -[SCValdiProcessedTextOuterOutline .cxx_destruct] */

void FUN_1080a33e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a33e8; end: 1080a33ef; -[SCValdiProcessedTextRangeMapping sourceRange] */

undefined1  [16] FUN_1080a33e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 1080a33f0; end: 1080a33f7; -[SCValdiProcessedTextRangeMapping setSourceRange:] */

void FUN_1080a33f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  return;
}



/* Entry: 1080a33f8; end: 1080a33ff; -[SCValdiProcessedTextRangeMapping destinationRange] */

undefined1  [16] FUN_1080a33f8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1080a3400; end: 1080a3407; -[SCValdiProcessedTextRangeMapping setDestinationRange:] */

void FUN_1080a3400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 1080a3408; end: 1080a340b; -[SCValdiProcessedTextConfiguration foregroundColorOverride] */

undefined8 FUN_1080a3408(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a340c; end: 1080a342b; -[SCValdiProcessedTextConfiguration setForegroundColorOverride:] */

void FUN_1080a340c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a6090();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a342c; end: 1080a3433; -[SCValdiProcessedTextConfiguration customUnderlineStyle] */

undefined8 FUN_1080a342c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a3434; end: 1080a3453; -[SCValdiProcessedTextConfiguration setCustomUnderlineStyle:] */

void FUN_1080a3434(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a6090();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a3454; end: 1080a345b; -[SCValdiProcessedTextConfiguration customUnderlineMode] */

undefined8 FUN_1080a3454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a345c; end: 1080a3463; -[SCValdiProcessedTextConfiguration setCustomUnderlineMode:] */

void FUN_1080a345c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1080a3464; end: 1080a346b; -[SCValdiProcessedTextConfiguration customUnderlineColorAttributeName] */

undefined8 FUN_1080a3464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080a346c; end: 1080a3473; -[SCValdiProcessedTextConfiguration setCustomUnderlineColorAttributeName:] */

void FUN_1080a346c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1080a3474; end: 1080a347b; -[SCValdiProcessedTextConfiguration customUnderlineFallbackColor] */

undefined8 FUN_1080a3474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1080a347c; end: 1080a349b; -[SCValdiProcessedTextConfiguration setCustomUnderlineFallbackColor:] */

void FUN_1080a347c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a6090();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a349c; end: 1080a34d7; -[SCValdiProcessedTextConfiguration .cxx_destruct] */

void FUN_1080a349c(long param_1)

{
  func_0x0001080a61b4(param_1 + 0x28);
  func_0x0001080a61b4(param_1 + 0x20);
  func_0x0001080a61b4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a34d8; end: 1080a390f; +[SCValdiProcessedText processedTextWithString:onTapItems:onLayoutItems:inlineAttachmentItems:animationItems:outlineItems:configuration:] */

void FUN_1080a34d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long in_stack_00000000;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001080a62d4();
  func_0x0001080a6160();
  func_0x0001080a6158();
  func_0x0001080a6274();
  func_0x0001080a61d4();
  func_0x0001080a6228();
  func_0x0001080a6220();
  func_0x0001080a61f0();
  func_0x0001080a61ac();
  func_0x0001080a61f0();
  func_0x0001080a6218();
  if ((in_stack_00000000 != 0) && (param_1 != 0)) {
    lVar1 = in_stack_00000000;
    func_0x00010bfb5380();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x0001080a6218();
      func_0x00010bef6f20();
    }
    lVar4 = in_stack_00000000;
    func_0x00010bf62aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar4 = in_stack_00000000;
      func_0x00010bf62a40();
      func_0x0001080a6138();
      if (lVar4 != 0) {
        lVar4 = in_stack_00000000;
        func_0x00010bf62a40();
        if (lVar4 == 2) {
          lVar4 = in_stack_00000000;
          func_0x00010bf62a00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010bf62a20();
            _objc_retainAutoreleasedReturnValue();
            if (in_stack_00000000 == 0) {
              func_0x00010bf1c920();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x0001080a6158();
            }
            func_0x0001080a6138();
            func_0x0001080a61ac();
            _objc_retain(lVar4);
            func_0x0001080a6228();
            puStack_90 = &uStack_98;
            uStack_98 = 0;
            uStack_88 = 0x3032000000;
            pcStack_80 = FUN_1080a5ca4;
            uStack_78 = 0x1080a5cb4;
            uStack_70 = 0;
            puStack_c0 = &uStack_c8;
            uStack_c8 = 0;
            uStack_b8 = 0x3032000000;
            pcStack_b0 = FUN_1080a5ca4;
            uStack_a8 = 0x1080a5cb4;
            uStack_a0 = 0;
            func_0x0001080a6218();
            func_0x0001080a61ac();
            func_0x0001080a6228();
            func_0x00010bf97b00();
            lVar3 = puStack_90[5];
            func_0x00010bf529e0();
            for (lVar4 = 0; uVar5 = puStack_90[5], lVar3 != lVar4; lVar4 = lVar4 + 1) {
              func_0x00010c0dfd40(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11f4c0();
              func_0x0001080a6150();
              func_0x0001080a6368();
              func_0x0001080a63b4();
              func_0x0001080a6368();
              func_0x00010c0dfd40(puStack_c0[5]);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef6f20();
              func_0x0001080a6150();
            }
            func_0x0001080a626c();
            func_0x0001080a6138();
            _objc_release(unaff_x19);
            func_0x0001080a61bc(&uStack_c8);
            _objc_release(uStack_a0);
            func_0x0001080a61bc(&uStack_98);
            _objc_release(uStack_70);
            func_0x0001080a61c4();
            func_0x0001080a6138();
            func_0x0001080a6148();
            _objc_retainAutorelease(uVar5);
            _objc_release();
            func_0x0001080a61c4();
          }
          func_0x0001080a6138();
        }
        else if (lVar4 == 1) {
          FUN_1080a0220();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = unaff_x19;
          func_0x00010bf529e0();
          if (lVar4 != 0) {
            _objc_retainAutorelease();
            _objc_retainAutorelease(unaff_x19);
          }
          func_0x0001080a61c4();
        }
      }
    }
    _objc_release(lVar1);
  }
  func_0x0001080a6170();
  func_0x0001080a6148();
  func_0x0001080a6158();
  func_0x0001080a626c();
  puVar2 = PTR_PTR_1126d9280;
  _objc_alloc(PTR_PTR_1126d9280);
  func_0x00010c04e860();
  func_0x0001080a6168();
  func_0x0001080a6138();
  func_0x0001080a6170();
  func_0x0001080a61cc();
  func_0x0001080a6264();
  func_0x0001080a6284();
  func_0x0001080a6150();
  func_0x0001080a6178();
  func_0x0001080a6148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080a3910; end: 1080a45e7; +[SCValdiProcessedText processedTextWithAttributeValue:attributes:isRightToLeft:fontManager:traitCollection:configuration:] */

void FUN_1080a3910(double param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined1 in_ZR;
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
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 extraout_x8;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_220;
  undefined *puStack_208;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_90;
  
  func_0x0001080a60a0();
  uStack_90 = extraout_x8;
  func_0x0001080a6160();
  func_0x0001080a61ac();
  func_0x0001080a61d4();
  func_0x0001080a6228();
  func_0x0001080a6220();
  if (param_5 == (undefined *)0x0) goto LAB_1080a44e8;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_opt_class();
  func_0x0001080a610c();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x0001080a610c();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126d9288;
      _objc_opt_class();
      func_0x0001080a610c();
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR_PTR_1126d9220;
        _objc_opt_class();
        func_0x0001080a610c();
        if (((ulong)puVar1 & 1) != 0) {
          func_0x0001080a6274();
          goto LAB_1080a3a10;
        }
      }
      else {
        param_5 = PTR_PTR_1126d9220;
        _objc_alloc();
        func_0x00010c063580();
        if (param_5 != (undefined *)0x0) {
LAB_1080a3a10:
          puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
          _objc_opt_new();
          puVar1 = param_5;
          func_0x00010c0f4d00(param_5);
          puVar3 = param_5;
          func_0x00010c0f4d00();
          puStack_220 = (undefined *)0x0;
          puVar28 = (undefined *)0x0;
          puStack_208 = (undefined *)0x0;
          puVar29 = (undefined *)0x0;
          puStack_240 = (undefined *)0x0;
          puStack_238 = (undefined *)0x0;
          for (puVar25 = (undefined *)0x0; in_ZR = puVar25 == puVar3, !(bool)in_ZR;
              puVar25 = puVar25 + 1) {
            puVar4 = param_6;
            func_0x00010c0d3c80();
            if (puVar4 == (undefined *)0x0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_opt_new();
              puVar4 = puVar5;
            }
            else {
              puVar5 = puVar4;
              func_0x0001080a61ac();
            }
            func_0x0001080a6148();
            func_0x0001080a61dc();
            func_0x00010bf4bde0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x0001080a61dc();
            func_0x00010bfb3ae0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x0001080a61dc();
            func_0x00010bf40ca0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x0001080a61dc();
            func_0x00010bf13d60();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x0001080a61dc();
            func_0x00010c26bb20();
            puVar10 = puVar9;
            func_0x0001080a61dc();
            func_0x00010c0eeae0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x0001080a61dc();
            func_0x00010c0eeb00();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x0001080a61dc();
            func_0x00010c0ee680();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x0001080a61dc();
            func_0x00010c0ee6a0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x0001080a61dc();
            func_0x00010bfe6c80();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x0001080a61dc();
            func_0x00010c065480();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x0001080a61dc();
            func_0x00010bf03f80();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 != (undefined *)0x0) {
              func_0x00010c1d0640(puVar4);
            }
            if (puVar8 != (undefined *)0x0) {
              func_0x00010c1d0640(puVar4);
            }
            if ((puVar11 != (undefined *)0x0) && (puVar10 != (undefined *)0x0)) {
              func_0x00010c1d0640(puVar4);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              fVar30 = SUB84(param_1,0);
              func_0x00010bfb2c80(puVar11);
              param_1 = (double)(ulong)(uint)-fVar30;
              func_0x00010c0df740(param_1,puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              func_0x0001080a6138();
            }
            if (puVar6 != (undefined *)0x0) {
              func_0x00010bfb3ec0(PTR_PTR_1126d9238);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13a900();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              func_0x0001080a6168();
              func_0x0001080a6138();
            }
            puVar19 = PTR_PTR_1126d91d0;
            puVar17 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
            _objc_opt_class();
            puVar18 = puVar17;
            _objc_opt_isKindOfClass();
            if (((ulong)puVar18 & 1) == 0) {
              puVar17 = (undefined *)0x0;
            }
            _objc_retain(puVar17);
            func_0x0001080a6168();
            func_0x00010bf08660(puVar19);
            func_0x0001080a6264();
            func_0x0001080a61f0();
            switch(puVar9) {
            case (undefined *)0x1:
              func_0x0001080a632c();
              func_0x0001080a61a0();
              goto LAB_1080a3dbc;
            case (undefined *)0x2:
              func_0x0001080a61a0();
              break;
            case (undefined *)0x3:
              func_0x0001080a632c();
              break;
            case (undefined *)0x4:
              func_0x0001080a61a0();
              break;
            case (undefined *)0x5:
              func_0x0001080a61a0();
              break;
            default:
              goto LAB_1080a3dbc;
            }
            func_0x00010c1d0640(puVar4);
LAB_1080a3dbc:
            func_0x0001080a6170();
            puVar9 = puVar2;
            func_0x00010c08fa60();
            if (puVar14 == (undefined *)0x0) {
              if (puVar15 == (undefined *)0x0) {
                puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                _objc_alloc();
                func_0x00010c04e840();
                puVar17 = puVar2;
                func_0x00010bf069e0();
              }
              else {
                puVar17 = puVar9;
                func_0x0001080a638c();
                _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
                func_0x00010c1a9f00(puVar17);
                func_0x0001080a6170();
                func_0x00010c23d0a0(puVar15);
                func_0x00010c23d0a0(puVar15);
                dVar31 = 0.0;
                dVar32 = 0.0;
                func_0x00010c1739e0(0,0,param_1,param_2,puVar17);
                puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                func_0x00010c2956a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf069e0(puVar2);
                _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
                func_0x00010c04e840();
                func_0x0001080a6298();
                func_0x0001080a6170();
                _objc_release();
                param_1 = dVar31;
                param_2 = dVar32;
              }
            }
            else {
              puVar19 = puVar9;
              func_0x0001080a638c();
              puVar18 = puVar14;
              func_0x00010bfe7300();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              func_0x0001080a6168();
              puVar17 = PTR__OBJC_CLASS___UIImage_1126aea68;
              if (puVar18 == (undefined *)0x0) {
                _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
                func_0x00010c1a9f00(puVar19);
              }
              else {
                func_0x00010bfe7300(puVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14e120();
                func_0x00010bfe9400(puVar17);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1a9f00(puVar19);
                func_0x0001080a6264();
                func_0x0001080a6170();
              }
              func_0x0001080a6168();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar4 == (undefined *)0x0) {
                param_2 = 0.0;
              }
              else {
                func_0x00010bfe0640(puVar14);
                dVar31 = param_1;
                func_0x0001080a626c();
                func_0x00010bf0ab40(puVar4);
                dVar32 = dVar31;
                func_0x00010bf6e320(puVar4);
                func_0x0001080a6168();
                param_1 = (dVar31 + dVar32) - param_1;
                param_2 = param_1 * 0.5;
              }
              func_0x00010c2a5040(puVar14);
              dVar31 = param_1;
              func_0x00010bfe0640(puVar14);
              dVar32 = 0.0;
              func_0x00010c1739e0(0,param_2,param_1,dVar31,puVar19);
              puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
              func_0x00010bf0e420();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf069e0(puVar2);
              puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
              _objc_alloc();
              func_0x00010c04e840();
              func_0x0001080a6298();
              func_0x0001080a6170();
              func_0x0001080a6168();
              func_0x0001080a6264();
              param_1 = dVar32;
            }
            func_0x0001080a6218();
            if (puVar17 != (undefined *)0x0) {
              puVar19 = param_5;
              func_0x00010c0e6f60();
              _objc_retainAutoreleasedReturnValue();
              if (puVar19 != (undefined *)0x0) {
                if (puStack_238 == (undefined *)0x0) {
                  puStack_238 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_opt_new();
                }
                puVar7 = puVar17;
                FUN_1080a45e8(puVar9,puVar17,puVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x0001080a62a8(puStack_238);
                func_0x0001080a6170();
                func_0x0001080a6308();
              }
              puVar18 = param_5;
              func_0x00010c0e4b60();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar18;
              if (puVar18 != (undefined *)0x0) {
                if (puStack_240 == (undefined *)0x0) {
                  puStack_240 = puVar18;
                  func_0x0001080a60e8();
                }
                puVar7 = puVar17;
                FUN_1080a45e8(puVar9,puVar17,puVar18);
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puStack_240;
                func_0x0001080a62a8();
                func_0x0001080a6170();
                func_0x0001080a6308();
              }
              if (puVar15 != (undefined *)0x0) {
                if (puStack_220 == (undefined *)0x0) {
                  func_0x0001080a60e8();
                  puStack_220 = puVar20;
                }
                puVar7 = puVar17;
                FUN_1080a45e8(puVar9,puVar17,puVar15);
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puStack_220;
                func_0x0001080a62a8();
                func_0x0001080a6170();
                func_0x0001080a6308();
              }
              if (puVar16 != (undefined *)0x0) {
                if (puVar29 == (undefined *)0x0) {
                  func_0x0001080a60e8();
                  puVar29 = puVar20;
                }
                puStack_168 = puStack_208;
                _objc_retain(puVar29);
                _objc_retain(puVar5);
                func_0x0001080a61d4();
                puVar20 = puVar16;
                func_0x00010c0f4900();
                _objc_retainAutoreleasedReturnValue();
                if ((puVar14 == (undefined *)0x0 && puVar15 == (undefined *)0x0) &&
                   (func_0x00010c08fa60(), puVar20 != (undefined *)0x0)) {
                  uStack_118 = 0;
                  puVar17 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
                  func_0x00010c127e80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar22 = uStack_118;
                  puVar20 = puVar17;
                  func_0x0001080a61ac();
                  if (puVar17 == (undefined *)0x0) {
                    func_0x00010b96bf1c();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar20;
                    func_0x00010c076f00();
                    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    if ((int)puVar9 != 0) {
                      func_0x00010c09e4e0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c25d9e0(puVar7);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0eeea0(puVar20);
                      _objc_release(puVar7);
                      _objc_release(uVar22);
                    }
                  }
                  else {
                    func_0x0001080a6218();
                    func_0x00010c0c1b40();
                    _objc_retainAutoreleasedReturnValue();
                    param_1 = 0.0;
                    lStack_158 = 0;
                    uStack_160 = 0;
                    uStack_148 = 0;
                    plStack_150 = (long *)0x0;
                    uStack_138 = 0;
                    uStack_140 = 0;
                    uStack_128 = 0;
                    uStack_130 = 0;
                    puVar20 = puVar17;
                    func_0x0001080a6140();
                    if (puVar20 != (undefined *)0x0) {
                      lVar27 = *plStack_150;
                      do {
                        puVar24 = (undefined *)0x0;
                        puVar26 = puVar1;
                        do {
                          puVar23 = puVar7;
                          if (*plStack_150 != lVar27) {
                            _objc_enumerationMutation(puVar17);
                            puVar23 = puVar7;
                          }
                          lVar21 = *(long *)(lStack_158 + (long)puVar24 * 8);
                          func_0x00010c11f2a0();
                          puVar7 = (undefined *)0x0;
                          puVar1 = puVar26;
                          if (puVar23 != (undefined *)0x0) {
                            puVar1 = puVar26 + 1;
                            puVar7 = puVar9 + lVar21;
                            FUN_1080a5db4(puVar29,puVar7,puVar23,puVar16,&puStack_168,puVar26);
                          }
                          puVar24 = puVar24 + 1;
                          puVar26 = puVar1;
                        } while (puVar24 < puVar20);
                        puVar20 = puVar17;
                        func_0x0001080a6140();
                      } while (puVar20 != (undefined *)0x0);
                    }
                  }
                  func_0x0001080a6168();
                  func_0x0001080a6170();
                  func_0x0001080a6148();
                }
                else {
                  puVar7 = puVar16;
                  func_0x00010c0f48c0(puVar16);
                  FUN_1080a5db4(puVar29,puVar9,puVar17,puVar16,&puStack_168,puVar7);
                }
                func_0x0001080a61cc();
                func_0x0001080a6178();
                _objc_release(puVar5);
                func_0x0001080a6284();
                puVar7 = puStack_168;
                func_0x0001080a61f0();
                puVar20 = puStack_208;
                _objc_release();
                puStack_208 = puVar7;
                func_0x0001080a6308();
              }
              if ((puVar13 != (undefined *)0x0) && (puVar12 != (undefined *)0x0)) {
                if (puVar28 == (undefined *)0x0) {
                  func_0x0001080a60e8();
                  puVar28 = puVar20;
                }
                fVar30 = SUB84(param_1,0);
                puVar7 = PTR_PTR_1126d9290;
                _objc_opt_new(PTR_PTR_1126d9290);
                func_0x00010c1e6f40();
                func_0x00010c17e800(puVar7);
                func_0x00010bfb2c80(puVar13);
                param_1 = (double)fVar30;
                func_0x00010c2256c0(puVar7);
                func_0x0001080a62a8(puVar28);
                func_0x0001080a6170();
                func_0x0001080a6308();
              }
              _objc_release(puVar18);
              _objc_release(puVar19);
            }
            _objc_release(puVar4);
            func_0x0001080a6178();
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar8);
            func_0x0001080a61cc();
            _objc_release(puVar6);
            _objc_release(puVar5);
            func_0x0001080a6148();
          }
          func_0x00010c115840();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080a6168();
          _objc_release(puStack_208);
          func_0x0001080a6284();
          func_0x0001080a6150();
          func_0x0001080a6178();
          func_0x0001080a61c4();
          func_0x0001080a6138();
          func_0x0001080a6264();
          goto LAB_1080a4528;
        }
      }
LAB_1080a44e8:
      _objc_opt_new();
    }
    else {
      _objc_alloc();
      func_0x00010c04e840();
    }
  }
  else {
    func_0x00010c0d3c80();
  }
  func_0x00010c115840();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080a6138();
LAB_1080a4528:
  func_0x0001080a61cc();
  func_0x0001080a6150();
  func_0x0001080a6178();
  _objc_release(param_6);
  func_0x0001080a61c4();
  func_0x0001080a6068(uStack_90);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    param_3 = PTR_PTR_1126d92a0;
    func_0x0001080a6160();
    _objc_opt_new(param_3);
    func_0x00010c1e6f40();
    func_0x00010c220160(param_3);
    func_0x0001080a6148();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1080a45e8; end: 1080a4643;  */

void FUN_1080a45e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d92a0;
  func_0x0001080a6160();
  _objc_opt_new(puVar1);
  func_0x00010c1e6f40();
  func_0x00010c220160(puVar1);
  func_0x0001080a6148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080a4644; end: 1080a4797; -[SCValdiProcessedText initWithString:onTapItems:onLayoutItems:inlineAttachmentItems:animationItems:outlineItems:customUnderlineSourceString:customUnderlineCharacterRanges:] */

undefined1 * FUN_1080a4644(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x0001080a62d4();
  func_0x0001080a6160();
  func_0x0001080a6158();
  func_0x0001080a6274();
  func_0x0001080a61d4();
  func_0x0001080a6228();
  func_0x0001080a6220();
  func_0x0001080a61f0();
  func_0x0001080a626c();
  puStack_68 = PTR_PTR_1126fc5a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001080a61ac();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = unaff_x20;
    func_0x0001080a61e8(uVar2);
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = unaff_x21;
    func_0x0001080a61e8(uVar2);
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = unaff_x22;
    func_0x0001080a61e8(uVar2);
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = unaff_x23;
    func_0x0001080a61e8(uVar2);
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = unaff_x24;
    func_0x0001080a61e8(uVar2);
    func_0x0001080a61f0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = in_stack_00000000;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = in_stack_00000008;
    func_0x0001080a61e8(uVar2);
    func_0x00010bed9b60(puVar1);
  }
  func_0x0001080a6168();
  func_0x0001080a6170();
  func_0x0001080a61cc();
  func_0x0001080a6150();
  func_0x0001080a6178();
  func_0x0001080a61c4();
  func_0x0001080a6138();
  func_0x0001080a6148();
  return (undefined1 *)puVar1;
}



/* Entry: 1080a4798; end: 1080a49b3; -[SCValdiProcessedText _updateInlineAttachmentItemsOrderedByChildIndex] */

void FUN_1080a4798(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  func_0x0001080a60a0();
  uVar8 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar8);
  uVar1 = uVar8;
  func_0x0001080a6140();
  lVar4 = lRam0000000000000000;
  if (uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    do {
      uVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(uVar8);
        }
        puVar7 = *(undefined **)(uVar6 * 8);
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x0001080a6374();
        puVar3 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar2);
        puVar2 = puVar7;
        if (((ulong)puVar3 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        func_0x0001080a626c();
        func_0x0001080a6284();
        if ((puVar2 != (undefined *)0x0) &&
           (func_0x00010bf38de0(), puVar2 = PTR__OBJC_CLASS___NSException_1126af520,
           -1 < (long)puVar7)) {
          puVar3 = puVar7;
          if ((undefined *)0xffff < puVar7) {
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11f020();
            func_0x0001080a6148();
            puVar3 = puVar2;
          }
          if (puVar5 == (undefined *)0x0) {
            func_0x0001080a60e8();
            puVar5 = puVar3;
          }
          while (puVar2 = puVar5, func_0x00010bf529e0(), puVar2 <= puVar7) {
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            func_0x0001080a6148();
          }
          func_0x00010c1d04c0(puVar5);
        }
        func_0x0001080a6168();
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar1;
      } while (uVar6 < uVar1);
      uVar1 = uVar8;
      func_0x0001080a6140();
    } while (uVar1 != 0);
  }
  func_0x0001080a6264();
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release();
  func_0x0001080a6068(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bf529e0(*(undefined8 *)(lVar4 + 0x20));
    func_0x0001080a62c8();
    return;
  }
  return;
}



/* Entry: 1080a49b4; end: 1080a49cf; -[SCValdiProcessedText hasAnimationTransform] */

void FUN_1080a49b4(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a49d0; end: 1080a49eb; -[SCValdiProcessedText hasInlineViewAttachment] */

void FUN_1080a49d0(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a49ec; end: 1080a4a23; -[SCValdiProcessedText hasInlineViewAttachmentForIndex:] */

bool FUN_1080a49ec(long param_1)

{
  func_0x00010c0654a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1080a4a24; end: 1080a4a3f; -[SCValdiProcessedText hasOnTap] */

void FUN_1080a4a24(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a4a40; end: 1080a4a5b; -[SCValdiProcessedText hasOnLayout] */

void FUN_1080a4a40(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a4a5c; end: 1080a4a77; -[SCValdiProcessedText hasOuterOutline] */

void FUN_1080a4a5c(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a4a78; end: 1080a4a93; -[SCValdiProcessedText hasCustomUnderline] */

void FUN_1080a4a78(long param_1)

{
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x48));
  func_0x0001080a62c8();
  return;
}



/* Entry: 1080a4a94; end: 1080a4a9b; -[SCValdiProcessedText animationTransformsCount] */

void FUN_1080a4a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1080a4a9c; end: 1080a4b5b; -[SCValdiProcessedText onTapAtIndex:effectiveRange:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1080a4a9c(ulong *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *unaff_x25;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *unaff_x29;
  ulong unaff_x30;
  undefined8 *in_stack_00000120;
  
  func_0x0001080a63f8();
  in_stack_00000120 = unaff_x29;
  func_0x0001080a63cc();
  func_0x0001080a60a0();
  func_0x0001080a6118();
  func_0x0001080a61ac();
  func_0x0001080a607c();
  if (param_1 != (ulong *)0x0) {
    func_0x0001080a6238();
    do {
      puVar4 = (ulong *)0x0;
      do {
        func_0x0001080a6128();
        if (!(bool)in_ZR) {
          func_0x0001080a631c();
        }
        func_0x0001080a6180();
        in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                unaff_x21 == (ulong *)((long)param_1 + unaff_x30);
        if ((param_1 != unaff_x25 && param_1 <= unaff_x21) &&
            unaff_x21 < (ulong *)((long)param_1 + unaff_x30)) {
          if (unaff_x20 != (ulong *)0x0) {
            func_0x0001080a6230();
            *unaff_x20 = (ulong)param_1;
            unaff_x20[1] = unaff_x30;
          }
          param_1 = unaff_x23;
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          goto LAB_1080a4b3c;
        }
        puVar4 = (ulong *)((long)puVar4 + 1);
        in_ZR = puVar4 == unaff_x22;
      } while (puVar4 < unaff_x22);
      func_0x0001080a607c();
      unaff_x22 = param_1;
    } while (param_1 != (ulong *)0x0);
  }
  puVar4 = (ulong *)0x0;
LAB_1080a4b3c:
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_1080a4b5c;
    func_0x0001080a63f8();
    in_stack_00000120 = &stack0x00000120;
    func_0x0001080a63cc();
    func_0x0001080a60a0();
    func_0x0001080a6118();
    func_0x0001080a61ac();
    func_0x0001080a607c();
    if (param_1 != (ulong *)0x0) {
      func_0x0001080a6238();
      do {
        puVar5 = (ulong *)0x0;
        do {
          func_0x0001080a6128();
          if (!(bool)in_ZR) {
            func_0x0001080a631c();
          }
          func_0x0001080a6180();
          in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                  unaff_x21 == (ulong *)((long)param_1 + (long)pcVar3);
          if ((param_1 != unaff_x25 && param_1 <= unaff_x21) &&
              unaff_x21 < (ulong *)((long)param_1 + (long)pcVar3)) {
            if (puVar4 != (ulong *)0x0) {
              func_0x0001080a6230();
              *puVar4 = (ulong)param_1;
              puVar4[1] = (ulong)pcVar3;
            }
            param_1 = unaff_x23;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_1;
            goto LAB_1080a4bfc;
          }
          puVar5 = (ulong *)((long)puVar5 + 1);
          in_ZR = puVar5 == unaff_x22;
        } while (puVar5 < unaff_x22);
        func_0x0001080a607c();
        unaff_x22 = param_1;
      } while (param_1 != (ulong *)0x0);
    }
    puVar4 = (ulong *)0x0;
LAB_1080a4bfc:
    func_0x0001080a6148();
    func_0x0001080a6068(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar3 = FUN_1080a4c1c;
      func_0x0001080a63f8();
      in_stack_00000120 = &stack0x00000120;
      func_0x0001080a63cc();
      func_0x0001080a60a0();
      func_0x0001080a6118();
      func_0x0001080a61ac();
      func_0x0001080a607c();
      if (param_1 != (ulong *)0x0) {
        func_0x0001080a6238();
        do {
          puVar5 = (ulong *)0x0;
          do {
            func_0x0001080a6128();
            if (!(bool)in_ZR) {
              func_0x0001080a631c();
            }
            func_0x0001080a6180();
            in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                    unaff_x21 == (ulong *)((long)param_1 + (long)pcVar3);
            if ((param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                unaff_x21 < (ulong *)((long)param_1 + (long)pcVar3)) {
              if (puVar4 != (ulong *)0x0) {
                func_0x0001080a6230();
                *puVar4 = (ulong)param_1;
                puVar4[1] = (ulong)pcVar3;
              }
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = unaff_x23;
              goto LAB_1080a4cbc;
            }
            puVar5 = (ulong *)((long)puVar5 + 1);
            in_ZR = puVar5 == unaff_x22;
          } while (puVar5 < unaff_x22);
          func_0x0001080a607c();
          unaff_x22 = param_1;
        } while (param_1 != (ulong *)0x0);
      }
      puVar4 = (ulong *)0x0;
LAB_1080a4cbc:
      puVar5 = puVar4;
      func_0x0001080a6148();
      func_0x0001080a6068(extraout_x8_01);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uVar1 = puVar5[6];
        func_0x00010bf529e0();
        if (param_3 < uVar1) {
          puVar4 = (ulong *)puVar5[6];
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar4;
          func_0x0001080a635c();
          func_0x0001080a610c();
          puVar5 = puVar4;
          if (((ulong)puVar2 & 1) == 0) {
            puVar5 = (ulong *)0x0;
          }
          func_0x0001080a61ac();
          func_0x0001080a61c4();
          if (puVar5 == (ulong *)0x0) {
            puVar4 = (ulong *)0x0;
            if (param_4 != (ulong *)0x0) {
              param_4[1] = 0;
              *param_4 = 0x7fffffffffffffff;
            }
          }
          else {
            if (param_4 != (ulong *)0x0) {
              puVar5 = puVar4;
              func_0x00010c11f2a0();
              *param_4 = (ulong)puVar5;
              param_4[1] = (ulong)pcVar3;
            }
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x0001080a6374();
            puVar2 = puVar4;
            _objc_opt_isKindOfClass(puVar4,puVar5);
            if (((ulong)puVar2 & 1) == 0) {
              puVar4 = (ulong *)0x0;
            }
            func_0x0001080a6274();
            func_0x0001080a6138();
          }
          func_0x0001080a6148();
        }
        else {
          puVar4 = (ulong *)0x0;
          if (param_4 != (ulong *)0x0) {
            param_4[1] = 0;
            *param_4 = 0x7fffffffffffffff;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1080a4b5c; end: 1080a4c1b; -[SCValdiProcessedText onLayoutAtIndex:effectiveRange:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1080a4b5c(ulong *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *unaff_x25;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *unaff_x29;
  ulong unaff_x30;
  undefined8 *in_stack_00000120;
  
  func_0x0001080a63f8();
  in_stack_00000120 = unaff_x29;
  func_0x0001080a63cc();
  func_0x0001080a60a0();
  func_0x0001080a6118();
  func_0x0001080a61ac();
  func_0x0001080a607c();
  if (param_1 != (ulong *)0x0) {
    func_0x0001080a6238();
    do {
      puVar4 = (ulong *)0x0;
      do {
        func_0x0001080a6128();
        if (!(bool)in_ZR) {
          func_0x0001080a631c();
        }
        func_0x0001080a6180();
        in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                unaff_x21 == (ulong *)((long)param_1 + unaff_x30);
        if ((param_1 != unaff_x25 && param_1 <= unaff_x21) &&
            unaff_x21 < (ulong *)((long)param_1 + unaff_x30)) {
          if (unaff_x20 != (ulong *)0x0) {
            func_0x0001080a6230();
            *unaff_x20 = (ulong)param_1;
            unaff_x20[1] = unaff_x30;
          }
          param_1 = unaff_x23;
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          goto LAB_1080a4bfc;
        }
        puVar4 = (ulong *)((long)puVar4 + 1);
        in_ZR = puVar4 == unaff_x22;
      } while (puVar4 < unaff_x22);
      func_0x0001080a607c();
      unaff_x22 = param_1;
    } while (param_1 != (ulong *)0x0);
  }
  puVar4 = (ulong *)0x0;
LAB_1080a4bfc:
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_1080a4c1c;
    func_0x0001080a63f8();
    in_stack_00000120 = &stack0x00000120;
    func_0x0001080a63cc();
    func_0x0001080a60a0();
    func_0x0001080a6118();
    func_0x0001080a61ac();
    func_0x0001080a607c();
    if (param_1 != (ulong *)0x0) {
      func_0x0001080a6238();
      do {
        puVar5 = (ulong *)0x0;
        do {
          func_0x0001080a6128();
          if (!(bool)in_ZR) {
            func_0x0001080a631c();
          }
          func_0x0001080a6180();
          in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) &&
                  unaff_x21 == (ulong *)((long)param_1 + (long)pcVar3);
          if ((param_1 != unaff_x25 && param_1 <= unaff_x21) &&
              unaff_x21 < (ulong *)((long)param_1 + (long)pcVar3)) {
            if (puVar4 != (ulong *)0x0) {
              func_0x0001080a6230();
              *puVar4 = (ulong)param_1;
              puVar4[1] = (ulong)pcVar3;
            }
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = unaff_x23;
            goto LAB_1080a4cbc;
          }
          puVar5 = (ulong *)((long)puVar5 + 1);
          in_ZR = puVar5 == unaff_x22;
        } while (puVar5 < unaff_x22);
        func_0x0001080a607c();
        unaff_x22 = param_1;
      } while (param_1 != (ulong *)0x0);
    }
    puVar4 = (ulong *)0x0;
LAB_1080a4cbc:
    puVar5 = puVar4;
    func_0x0001080a6148();
    func_0x0001080a6068(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uVar1 = puVar5[6];
      func_0x00010bf529e0();
      if (param_3 < uVar1) {
        puVar4 = (ulong *)puVar5[6];
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x0001080a635c();
        func_0x0001080a610c();
        puVar5 = puVar4;
        if (((ulong)puVar2 & 1) == 0) {
          puVar5 = (ulong *)0x0;
        }
        func_0x0001080a61ac();
        func_0x0001080a61c4();
        if (puVar5 == (ulong *)0x0) {
          puVar4 = (ulong *)0x0;
          if (param_4 != (ulong *)0x0) {
            param_4[1] = 0;
            *param_4 = 0x7fffffffffffffff;
          }
        }
        else {
          if (param_4 != (ulong *)0x0) {
            puVar5 = puVar4;
            func_0x00010c11f2a0();
            *param_4 = (ulong)puVar5;
            param_4[1] = (ulong)pcVar3;
          }
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x0001080a6374();
          puVar2 = puVar4;
          _objc_opt_isKindOfClass(puVar4,puVar5);
          if (((ulong)puVar2 & 1) == 0) {
            puVar4 = (ulong *)0x0;
          }
          func_0x0001080a6274();
          func_0x0001080a6138();
        }
        func_0x0001080a6148();
      }
      else {
        puVar4 = (ulong *)0x0;
        if (param_4 != (ulong *)0x0) {
          param_4[1] = 0;
          *param_4 = 0x7fffffffffffffff;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1080a4c1c; end: 1080a4cdb; -[SCValdiProcessedText inlineViewAttachmentAtIndex:effectiveRange:] */

void FUN_1080a4c1c(ulong param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  ulong *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  ulong uVar2;
  ulong unaff_x30;
  
  func_0x0001080a63f8();
  func_0x0001080a63cc();
  func_0x0001080a60a0();
  func_0x0001080a6118();
  func_0x0001080a61ac();
  func_0x0001080a607c();
  if (param_1 != 0) {
    func_0x0001080a6238();
    do {
      uVar2 = 0;
      do {
        func_0x0001080a6128();
        if (!(bool)in_ZR) {
          func_0x0001080a631c();
        }
        func_0x0001080a6180();
        in_ZR = (param_1 != unaff_x25 && param_1 <= unaff_x21) && unaff_x21 == param_1 + unaff_x30;
        if ((param_1 != unaff_x25 && param_1 <= unaff_x21) && unaff_x21 < param_1 + unaff_x30) {
          if (unaff_x20 != (ulong *)0x0) {
            func_0x0001080a6230();
            *unaff_x20 = param_1;
            unaff_x20[1] = unaff_x30;
          }
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1080a4cbc;
        }
        uVar2 = uVar2 + 1;
        in_ZR = uVar2 == unaff_x22;
      } while (uVar2 < unaff_x22);
      func_0x0001080a607c();
      unaff_x22 = param_1;
    } while (param_1 != 0);
  }
  unaff_x23 = 0;
LAB_1080a4cbc:
  uVar2 = unaff_x23;
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = *(ulong *)(uVar2 + 0x30);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      unaff_x23 = *(ulong *)(uVar2 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = unaff_x23;
      func_0x0001080a635c();
      func_0x0001080a610c();
      uVar2 = unaff_x23;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
      func_0x0001080a61ac();
      func_0x0001080a61c4();
      if (uVar2 == 0) {
        unaff_x23 = 0;
        if (param_4 != (ulong *)0x0) {
          param_4[1] = 0;
          *param_4 = 0x7fffffffffffffff;
        }
      }
      else {
        if (param_4 != (ulong *)0x0) {
          uVar2 = unaff_x23;
          func_0x00010c11f2a0();
          *param_4 = uVar2;
          param_4[1] = unaff_x30;
        }
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = unaff_x23;
        func_0x0001080a6374();
        uVar1 = unaff_x23;
        _objc_opt_isKindOfClass(unaff_x23,uVar2);
        if ((uVar1 & 1) == 0) {
          unaff_x23 = 0;
        }
        func_0x0001080a6274();
        func_0x0001080a6138();
      }
      func_0x0001080a6148();
    }
    else {
      unaff_x23 = 0;
      if (param_4 != (ulong *)0x0) {
        param_4[1] = 0;
        *param_4 = 0x7fffffffffffffff;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 1080a4cdc; end: 1080a4dbf; -[SCValdiProcessedText inlineViewAttachmentForViewIndex:effectiveRange:] */

void FUN_1080a4cdc(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001080a635c();
    func_0x0001080a610c();
    uVar3 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    func_0x0001080a61ac();
    func_0x0001080a61c4();
    if (uVar3 == 0) {
      uVar1 = 0;
      if (param_4 != (ulong *)0x0) {
        param_4[1] = 0;
        *param_4 = 0x7fffffffffffffff;
      }
    }
    else {
      if (param_4 != (ulong *)0x0) {
        uVar3 = uVar1;
        func_0x00010c11f2a0();
        *param_4 = uVar3;
        param_4[1] = param_2;
      }
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x0001080a6374();
      uVar2 = uVar1;
      _objc_opt_isKindOfClass(uVar1,uVar3);
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      func_0x0001080a6274();
      func_0x0001080a6138();
    }
    func_0x0001080a6148();
  }
  else {
    uVar1 = 0;
    if (param_4 != (ulong *)0x0) {
      param_4[1] = 0;
      *param_4 = 0x7fffffffffffffff;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080a4dc0; end: 1080a4fff; -[SCValdiProcessedText rectForInlineViewAttachment:layoutManager:textContainer:] */

undefined8
FUN_1080a4dc0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7,long param_8,long param_9)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 unaff_d9;
  
  func_0x0001080a6160();
  func_0x0001080a6158();
  func_0x0001080a6274();
  if ((((param_7 != 0) && (param_8 != 0)) && (param_9 != 0)) &&
     (uVar2 = param_7, func_0x00010bf38de0(), -1 < (long)uVar2)) {
    uVar3 = *(ulong *)(param_5 + 0x30);
    func_0x00010bf529e0();
    if (uVar2 < uVar3) {
      uVar4 = *(ulong *)(param_5 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x0001080a635c();
      uVar5 = uVar3;
      func_0x0001080a6344();
      uVar2 = uVar4;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      func_0x0001080a6228();
      if ((uVar2 == 0) || (func_0x00010c11f2a0(uVar4), uVar5 == 0)) {
LAB_1080a4f50:
        func_0x0001080a63d8();
        param_1 = unaff_d9;
      }
      else {
        func_0x00010bf96780();
        func_0x0001080a63c0();
        func_0x00010bfcd240();
        if ((param_8 == 0x7fffffffffffffff) || (uVar5 == 0)) goto LAB_1080a4f50;
        uVar2 = param_7;
        func_0x00010c23d0a0();
        dVar7 = param_2;
        func_0x0001080a63c0();
        func_0x00010bf20b60();
        dVar8 = param_4;
        _CGRectIsEmpty();
        if ((uVar2 & 1) == 0) {
          uVar6 = 0;
          bVar1 = true;
          if ((0.0 < param_2) && (bVar1 = false, !NAN(param_4) && !NAN(param_2))) {
            bVar1 = param_4 == param_2;
          }
          if (!bVar1) {
            func_0x0001080a63c0();
            func_0x00010c099260();
            uVar2 = param_7;
            func_0x00010c298ec0();
            if (uVar2 == 3) {
              func_0x0001080a63c0();
              func_0x00010c09ee80();
              _CGRectGetMinY(uVar6,dVar7,param_3,dVar8);
            }
            else {
              func_0x00010c298ec0();
              switch(param_7) {
              default:
                break;
              case 1:
                break;
              case 2:
              case 3:
              }
            }
          }
        }
      }
      func_0x0001080a6150();
      func_0x0001080a6178();
      unaff_d9 = param_1;
      goto LAB_1080a4f0c;
    }
  }
  func_0x0001080a63d8();
LAB_1080a4f0c:
  func_0x0001080a61c4();
  func_0x0001080a6138();
  func_0x0001080a6148();
  return unaff_d9;
}



/* Entry: 1080a5000; end: 1080a54bf; -[SCValdiProcessedText clampToCharacterLimit:ignoreNewlines:didChange:] */

void FUN_1080a5000(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lStack_1d8;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_f8 [16];
  undefined8 uStack_78;
  
  lVar15 = param_1;
  puVar13 = param_3;
  puVar14 = param_4;
  func_0x0001080a60a0();
  puVar4 = *(undefined8 **)(lVar15 + 0x38);
  uStack_78 = extraout_x8;
  func_0x00010c08fa60();
  bVar1 = (0 < (long)param_3 && param_3 <= puVar4) && ((long)param_3 < 1 || puVar4 != param_3);
  uVar2 = bVar1;
  if (0 < (long)param_3 && param_3 < puVar4) {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    func_0x00010c08fa60();
    uVar2 = param_3 == puVar5;
    puVar4 = param_3;
    if (param_3 < puVar5) {
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_3;
      func_0x00010c11f3a0();
      func_0x0001080a6178();
      uVar2 = puVar4 == param_3;
      if (param_3 <= puVar4) {
        puVar4 = param_3;
      }
    }
  }
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  if ((int)param_4 == 0) {
    if (puVar4 != (undefined8 *)0x0) {
      param_2 = (undefined *)0x0;
      puVar14 = (undefined8 *)0x0;
      func_0x0001080a5568(puVar18,0,puVar4);
      puVar13 = puVar4;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a6158();
    puVar13 = (undefined8 *)0x0;
    func_0x00010bf98040(uVar6);
    _objc_release(puVar18);
    func_0x0001080a6150();
    puVar14 = puVar4;
  }
  if ((bVar1) || ((*(byte *)(puStack_168 + 3) & 1) != 0)) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    lVar7 = *(long *)(param_1 + 0x38);
    _objc_retain();
    lVar8 = *(long *)(param_1 + 0x40);
    _objc_retain();
    lStack_1d8 = *(long *)(param_1 + 0x38);
    func_0x0001080a61d4();
    puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_opt_class();
    func_0x0001080a6344();
    lVar15 = lStack_1d8;
    if (((ulong)puVar9 & 1) == 0) {
      lVar15 = 0;
    }
    func_0x0001080a6220();
    func_0x0001080a6178();
    if (lVar15 == 0) {
      lStack_1d8 = *(long *)(param_1 + 0x38);
      func_0x00010c0d3c80();
      func_0x0001080a61d4();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = lStack_1d8;
      _objc_release(uVar6);
    }
    if (lVar8 == lVar7) {
      func_0x0001080a61d4();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lStack_1d8;
      _objc_release(uVar6);
    }
    param_2 = puVar18;
    func_0x0001080a5650(lStack_1d8,puVar18);
    if ((lVar8 != 0) && (lVar8 != lVar7)) {
      func_0x0001080a61d4();
      puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_opt_class();
      func_0x0001080a6344();
      lVar15 = lVar8;
      if (((ulong)puVar9 & 1) == 0) {
        lVar15 = 0;
      }
      func_0x0001080a61f0();
      func_0x0001080a6178();
      lVar10 = lVar8;
      if (lVar15 == 0) {
        func_0x00010c0d3c80();
        _objc_retain();
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        *(long *)(param_1 + 0x40) = lVar10;
        _objc_release(uVar6);
      }
      func_0x0001080a5650(lVar10,puVar18);
      func_0x0001080a61cc();
      param_2 = puVar18;
    }
    func_0x0001080a62f8(*(undefined8 *)(param_1 + 8));
    func_0x0001080a62f8(*(undefined8 *)(param_1 + 0x10));
    func_0x0001080a62f8(*(undefined8 *)(param_1 + 0x18));
    func_0x0001080a62f8(*(undefined8 *)(param_1 + 0x20));
    uVar17 = *(ulong *)(param_1 + 0x28);
    func_0x0001080a6220();
    func_0x0001080a6158();
    uVar11 = uVar17;
    func_0x00010bf529e0();
    while( true ) {
      uVar2 = uVar11 - 1 == 0;
      if ((long)uVar11 < 1) break;
      uVar16 = uVar17;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar16;
      func_0x00010c11f2a0();
      func_0x0001080a6314();
      if ((uVar12 & 1) == 0) {
        func_0x00010c12d3c0(uVar17);
      }
      else {
        func_0x00010c1e6f40(uVar16);
      }
      func_0x0001080a6168();
      uVar11 = uVar11 - 1;
    }
    func_0x0001080a6138();
    func_0x0001080a61cc();
    uVar17 = *(ulong *)(param_1 + 0x48);
    func_0x0001080a6220();
    func_0x0001080a6158();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar13 = &uStack_140;
    puVar14 = auStack_f8;
    uVar11 = uVar17;
    func_0x0001080a6140();
    puVar18 = (undefined *)0x0;
    if (uVar11 != 0) {
      lVar15 = *plStack_130;
      do {
        uVar16 = 0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(uVar17);
          }
          iVar3 = (int)*(undefined8 *)(lStack_138 + uVar16 * 8);
          func_0x00010c11f4c0();
          func_0x0001080a6314();
          if (iVar3 != 0) {
            if (puVar18 == (undefined *)0x0) {
              puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new();
            }
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar18);
            func_0x0001080a6284();
          }
          uVar16 = uVar16 + 1;
          uVar2 = uVar16 == uVar11;
        } while (uVar16 < uVar11);
        puVar13 = &uStack_140;
        puVar14 = auStack_f8;
        uVar11 = uVar17;
        func_0x0001080a6140();
      } while (uVar11 != 0);
    }
    func_0x0001080a6138();
    func_0x0001080a61cc();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar18;
    _objc_release(uVar6);
    func_0x00010bed9b60(param_1);
    _objc_release(lStack_1d8);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  func_0x0001080a61bc(&uStack_190);
  func_0x0001080a61bc();
  func_0x0001080a6138();
  func_0x0001080a6068(uStack_78);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080a61bc(&uStack_190);
  puVar4 = &uStack_170;
  func_0x0001080a61bc();
  func_0x0001080a6324();
  puVar18 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_2);
  func_0x00010c0d96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080a628c();
  func_0x00010c11f340();
  func_0x0001080a6178();
  func_0x0001080a6150();
  if (puVar18 == (undefined *)0x7fffffffffffffff) {
    func_0x0001080a5568(puVar4[4],puVar13,puVar14,*(undefined8 *)(*(long *)(puVar4[6] + 8) + 0x18));
    *(long *)(*(long *)(puVar4[6] + 8) + 0x18) =
         *(long *)(*(long *)(puVar4[6] + 8) + 0x18) + (long)puVar14;
  }
  else {
    func_0x0001080a63a0();
  }
  return;
}



/* Entry: 1080a54c0; end: 1080a56f7;  */

void FUN_1080a54c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_2);
  func_0x00010c0d96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080a628c();
  func_0x00010c11f340();
  func_0x0001080a6178();
  func_0x0001080a6150();
  if (puVar1 == (undefined *)0x7fffffffffffffff) {
    func_0x0001080a5568(*(undefined8 *)(param_1 + 0x20),param_3,param_4,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + param_4;
  }
  else {
    func_0x0001080a63a0();
  }
  return;
}



/* Entry: 1080a56f8; end: 1080a578f;  */

void FUN_1080a56f8(void)

{
  ulong uVar1;
  ulong unaff_x19;
  ulong uVar2;
  
  func_0x0001080a62f0();
  func_0x0001080a6158();
  func_0x00010bf529e0();
  uVar2 = unaff_x19;
  while (0 < (long)uVar2) {
    uVar2 = uVar2 - 1;
    func_0x0001080a63b4();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = unaff_x19;
    func_0x00010c11f2a0();
    func_0x0001080a6314();
    if ((uVar1 & 1) == 0) {
      func_0x0001080a63b4();
      func_0x00010c12d3c0();
      unaff_x19 = uVar1;
    }
    else {
      func_0x00010c1e6f40();
    }
    func_0x0001080a6178();
  }
  func_0x0001080a6138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a5790; end: 1080a5843; -[SCValdiProcessedText enumerateOnLayoutCallbacksUsingBlock:] */

ulong FUN_1080a5790(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x8_06;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  code *pcStack_4f0;
  undefined *puStack_4e8;
  ulong uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined8 uStack_4b0;
  
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (param_2 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_00)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), param_2 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(lVar4 + 0x18);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_02)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), uVar1 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_01);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(lVar4 + 0x20);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_04)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), uVar1 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_03);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a628c();
      func_0x00010c2a5040();
      lVar4 = unaff_x22;
      func_0x00010c11f2a0();
      func_0x0001080a60b0();
      (*extraout_x8_06)(param_1);
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), lVar4 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_05);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  uStack_4b0 = uVar5;
  func_0x00010bfd7f80();
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(uVar1 + 0x38);
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puStack_4d8 = &uStack_4d0;
      uStack_4d0 = 0;
      uStack_4c0 = 0x2020000000;
      uStack_4b8 = 0;
      puStack_500 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_4f8 = 0xc2000000;
      pcStack_4f0 = FUN_1080a5b48;
      puStack_4e8 = &UNK_110a1b060;
      uStack_4e0 = uVar1;
      puStack_4c8 = puStack_4d8;
      func_0x00010bf97c00(uVar1,param_3,&puStack_500);
      uVar3 = (uint)*(byte *)(puStack_4c8 + 3);
      func_0x0001080a61bc(&uStack_4d0);
      goto LAB_1080a5b24;
    }
  }
  uVar3 = 0;
LAB_1080a5b24:
  return (ulong)(uVar3 & 1);
}



/* Entry: 1080a5844; end: 1080a58f7; -[SCValdiProcessedText enumerateInlineViewAttachmentsUsingBlock:] */

ulong FUN_1080a5844(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  ulong uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined8 uStack_390;
  
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (param_2 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_00)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), param_2 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(lVar4 + 0x20);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_02)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), uVar1 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_01);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a628c();
      func_0x00010c2a5040();
      lVar4 = unaff_x22;
      func_0x00010c11f2a0();
      func_0x0001080a60b0();
      (*extraout_x8_04)(param_1);
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), lVar4 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_03);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  uStack_390 = uVar5;
  func_0x00010bfd7f80();
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(uVar1 + 0x38);
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puStack_3b8 = &uStack_3b0;
      uStack_3b0 = 0;
      uStack_3a0 = 0x2020000000;
      uStack_398 = 0;
      puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3d8 = 0xc2000000;
      pcStack_3d0 = FUN_1080a5b48;
      puStack_3c8 = &UNK_110a1b060;
      uStack_3c0 = uVar1;
      puStack_3a8 = puStack_3b8;
      func_0x00010bf97c00(uVar1,param_3,&puStack_3e0);
      uVar3 = (uint)*(byte *)(puStack_3a8 + 3);
      func_0x0001080a61bc(&uStack_3b0);
      goto LAB_1080a5b24;
    }
  }
  uVar3 = 0;
LAB_1080a5b24:
  return (ulong)(uVar3 & 1);
}



/* Entry: 1080a58f8; end: 1080a59ab; -[SCValdiProcessedText enumerateAnimationTransformsUsingBlock:] */

ulong FUN_1080a58f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (param_2 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a624c();
      func_0x0001080a60b0();
      (*extraout_x8_00)();
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), param_2 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (uVar1 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a628c();
      func_0x00010c2a5040();
      lVar4 = unaff_x22;
      func_0x00010c11f2a0();
      func_0x0001080a60b0();
      (*extraout_x8_02)(param_1);
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), lVar4 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8_01);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  uStack_270 = uVar5;
  func_0x00010bfd7f80();
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(uVar1 + 0x38);
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puStack_298 = &uStack_290;
      uStack_290 = 0;
      uStack_280 = 0x2020000000;
      uStack_278 = 0;
      puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b8 = 0xc2000000;
      pcStack_2b0 = FUN_1080a5b48;
      puStack_2a8 = &UNK_110a1b060;
      uStack_2a0 = uVar1;
      puStack_288 = puStack_298;
      func_0x00010bf97c00(uVar1,param_3,&puStack_2c0);
      uVar3 = (uint)*(byte *)(puStack_288 + 3);
      func_0x0001080a61bc(&uStack_290);
      goto LAB_1080a5b24;
    }
  }
  uVar3 = 0;
LAB_1080a5b24:
  return (ulong)(uVar3 & 1);
}



/* Entry: 1080a59ac; end: 1080a5a8f; -[SCValdiProcessedText enumerateOuterOutlinesUsingBlock:] */

ulong FUN_1080a59ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  
  func_0x0001080a6258();
  func_0x0001080a60a0();
  func_0x0001080a6160();
  func_0x0001080a6118();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001080a6158();
  func_0x0001080a6054();
  if (param_2 != 0) {
    func_0x0001080a6208();
    do {
      func_0x0001080a6128();
      if (!(bool)in_ZR) {
        func_0x0001080a62c0();
      }
      func_0x0001080a61f8();
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a628c();
      func_0x00010c2a5040();
      lVar3 = unaff_x22;
      func_0x00010c11f2a0();
      func_0x0001080a60b0();
      (*extraout_x8_00)(param_1);
      func_0x0001080a6150();
      func_0x0001080a63ec();
    } while ((!(bool)in_CY) || (func_0x0001080a6054(), lVar3 != 0));
  }
  uVar1 = 0;
  func_0x0001080a6138();
  func_0x0001080a6148();
  func_0x0001080a6068(extraout_x8);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  uStack_150 = uVar5;
  func_0x00010bfd7f80();
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(uVar1 + 0x38);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puStack_178 = &uStack_170;
      uStack_170 = 0;
      uStack_160 = 0x2020000000;
      uStack_158 = 0;
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_1080a5b48;
      puStack_188 = &UNK_110a1b060;
      uStack_180 = uVar1;
      puStack_168 = puStack_178;
      func_0x00010bf97c00(uVar1,param_3,&puStack_1a0);
      uVar4 = (uint)*(byte *)(puStack_168 + 3);
      func_0x0001080a61bc(&uStack_170);
      goto LAB_1080a5b24;
    }
  }
  uVar4 = 0;
LAB_1080a5b24:
  return (ulong)(uVar4 & 1);
}



/* Entry: 1080a5a90; end: 1080a5b47; -[SCValdiProcessedText updateInlineAttachments] */

byte FUN_1080a5a90(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1;
  func_0x00010bfd7f80();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puStack_48 = &uStack_40;
      uStack_40 = 0;
      uStack_30 = 0x2020000000;
      uStack_28 = 0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1080a5b48;
      puStack_58 = &UNK_110a1b060;
      lStack_50 = param_1;
      puStack_38 = puStack_48;
      func_0x00010bf97c00(param_1,param_2,&puStack_70);
      bVar2 = *(byte *)(puStack_38 + 3);
      func_0x0001080a61bc(&uStack_40);
      goto LAB_1080a5b24;
    }
  }
  bVar2 = 0;
LAB_1080a5b24:
  return bVar2 & 1;
}



/* Entry: 1080a5b48; end: 1080a5c27;  */

void FUN_1080a5b48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(*(long *)(param_3 + 0x20) + 0x38);
  func_0x00010bf0dde0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_class();
  func_0x0001080a610c();
  uVar3 = uVar1;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0;
  }
  func_0x0001080a61d4();
  func_0x0001080a61c4();
  if (uVar3 != 0) {
    func_0x00010c23d0a0(param_4);
    uVar3 = uVar1;
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    if ((uVar3 & 1) == 0) {
      func_0x00010c1739e0(0,0,param_1,param_2,uVar1);
      func_0x0001080a63a0();
    }
  }
  func_0x0001080a6178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080a5c28; end: 1080a5c2f; -[SCValdiProcessedText attributedString] */

undefined8 FUN_1080a5c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1080a5c30; end: 1080a5c37; -[SCValdiProcessedText customUnderlineSourceString] */

undefined8 FUN_1080a5c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080a5c38; end: 1080a5c3f; -[SCValdiProcessedText customUnderlineCharacterRanges] */

undefined8 FUN_1080a5c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080a5c40; end: 1080a5ca3; -[SCValdiProcessedText .cxx_destruct] */

void FUN_1080a5c40(long param_1)

{
  func_0x0001080a61b4(param_1 + 0x48);
  func_0x0001080a61b4(param_1 + 0x40);
  func_0x0001080a61b4(param_1 + 0x38);
  func_0x0001080a61b4(param_1 + 0x30);
  func_0x0001080a61b4(param_1 + 0x28);
  func_0x0001080a61b4(param_1 + 0x20);
  func_0x0001080a61b4(param_1 + 0x18);
  func_0x0001080a61b4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a5ca4; end: 1080a5cbb;  */

void FUN_1080a5ca4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1080a5cbc; end: 1080a5db3;  */

void FUN_1080a5cbc(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_1080a0038();
  if (param_2 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar1;
      func_0x0001080a61e8(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar1;
      func_0x0001080a61e8(uVar2);
    }
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a628c();
    func_0x00010befa120();
    func_0x0001080a6150();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_1080a009c(uVar2,param_3,param_4,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1080a5db4; end: 1080a6053;  */

void FUN_1080a5db4(void)

{
  ulong uVar1;
  ulong *in_x4;
  ulong unaff_x20;
  
  func_0x0001080a63cc();
  func_0x0001080a62f0();
  func_0x0001080a6158();
  func_0x00010bfceba0();
  uVar1 = *in_x4;
  if (uVar1 == 0) {
    func_0x0001080a60e8();
    _objc_autorelease();
    *in_x4 = uVar1;
  }
  while( true ) {
    func_0x00010bf529e0();
    if (unaff_x20 < uVar1) break;
    func_0x00010befa120();
    uVar1 = *in_x4;
  }
  func_0x00010c0dfd40(*in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x0001080a6168();
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*in_x4);
  func_0x0001080a6168();
  func_0x00010bf52200();
  func_0x0001080a628c();
  FUN_1080a45e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080a63b4();
  func_0x00010befa120();
  func_0x0001080a61c4();
  func_0x0001080a6150();
  func_0x0001080a6138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a6054; end: 1080a6413;  */

void FUN_1080a6054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080a6414; end: 1080a641b; -[SCValdiTextAnimationCoordinatorTimelineState hasExistingAnimationStartTime] */

undefined1 FUN_1080a6414(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1080a641c; end: 1080a6423; -[SCValdiTextAnimationCoordinatorTimelineState setHasExistingAnimationStartTime:] */

void FUN_1080a641c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1080a6424; end: 1080a642b; -[SCValdiTextAnimationCoordinatorTimelineState existingAnimationStartTime] */

undefined8 FUN_1080a6424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a642c; end: 1080a6433; -[SCValdiTextAnimationCoordinatorTimelineState setExistingAnimationStartTime:] */

void FUN_1080a642c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080a6434; end: 1080a643b; -[SCValdiTextAnimationCoordinatorTimelineState hasNewAnimationStartTime] */

undefined1 FUN_1080a6434(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1080a643c; end: 1080a6443; -[SCValdiTextAnimationCoordinatorTimelineState setHasNewAnimationStartTime:] */

void FUN_1080a643c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1080a6444; end: 1080a644b; -[SCValdiTextAnimationCoordinatorTimelineState newAnimationStartTime] */

undefined8 FUN_1080a6444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a644c; end: 1080a6453; -[SCValdiTextAnimationCoordinatorTimelineState setNewAnimationStartTime:] */

void FUN_1080a644c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1080a6454; end: 1080a64b7; -[SCValdiTextAnimationCoordinator init] */

undefined1 * FUN_1080a6454(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc5b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a64b8; end: 1080a6553; -[SCValdiTextAnimationCoordinator _timelineStateForKey:] */

void FUN_1080a64b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  
  func_0x0001080a66b4();
  puVar1 = unaff_x20;
  func_0x00010c270340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d92b0;
    _objc_opt_new(PTR_PTR_1126d92b0);
    func_0x00010c270340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(unaff_x20);
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080a6554; end: 1080a6583; -[SCValdiTextAnimationCoordinator resetFrameState] */

void FUN_1080a6554(undefined8 param_1)

{
  func_0x00010c270340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080a6584; end: 1080a65eb; -[SCValdiTextAnimationCoordinator recordExistingAnimationScheduledStartTime:forTimelineKey:] */

void FUN_1080a6584(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x00010becc100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfd6e00();
  if (((int)uVar1 == 0) || (func_0x00010bf9b300(param_2), dVar2 < param_1)) {
    func_0x00010c1a5e60(param_2,param_3,1);
    func_0x00010c198160(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080a65ec; end: 1080a667b; -[SCValdiTextAnimationCoordinator startTimeForNewAnimationWithTimelineKey:timeOffset:currentTime:] */

double FUN_1080a65ec(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  double dVar1;
  ulong uVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x00010becc100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfd9680();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1a6520(param_3,param_4,1);
    uVar2 = param_3;
    func_0x00010bfd6e00();
    dVar1 = param_2;
    if ((int)uVar2 != 0) {
      func_0x00010bf9b300(param_3);
      dVar1 = param_1 + dVar3;
      if (param_1 + dVar3 <= param_2) {
        dVar1 = param_2;
      }
    }
    dVar3 = dVar1;
    func_0x00010c1cc9a0(dVar3,param_3);
  }
  func_0x00010c0d8480(param_3);
  _objc_release(param_3);
  return dVar3;
}



/* Entry: 1080a667c; end: 1080a6683; -[SCValdiTextAnimationCoordinator timelineStates] */

undefined8 FUN_1080a667c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a6684; end: 1080a66a7; -[SCValdiTextAnimationCoordinator setTimelineStates:] */

void FUN_1080a6684(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080a66b4();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a66a8; end: 1080a66c3; -[SCValdiTextAnimationCoordinator .cxx_destruct] */

void FUN_1080a66a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a66c4; end: 1080a671f; -[SCValdiTextAnimationPresentation initWithTranslationY:scale:opacity:] */

void FUN_1080a66c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc5b8;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 1080a6720; end: 1080a6727; -[SCValdiTextAnimationPresentation hasOpacityOverride] */

bool FUN_1080a6720(long param_1)

{
  return *(double *)(param_1 + 0x18) != 1.0;
}



/* Entry: 1080a6728; end: 1080a6743; -[SCValdiTextAnimationPresentation hasTransformOverride] */

bool FUN_1080a6728(long param_1)

{
  if (*(double *)(param_1 + 8) != 0.0) {
    return true;
  }
  return *(double *)(param_1 + 0x10) != 1.0;
}



/* Entry: 1080a6744; end: 1080a674b; -[SCValdiTextAnimationPresentation translationY] */

undefined8 FUN_1080a6744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a674c; end: 1080a6753; -[SCValdiTextAnimationPresentation scale] */

undefined8 FUN_1080a674c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a6754; end: 1080a676b; -[SCValdiTextAnimationPresentation opacity] */

undefined8 FUN_1080a6754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a676c; end: 1080a686b; -[SCValdiTextAnimationTransform initWithKey:partIndex:translationY:scale:opacity:duration:timeOffsetBetweenParts:groupIndex:partIndexInGroup:partPattern:] */

undefined1 *
FUN_1080a676c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_8);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fc5c0;
  uStack_80 = param_6;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1080a686c; end: 1080a697f; -[SCValdiTextAnimationTransform copyWithPartIndex:partIndexInGroup:] */

undefined *
FUN_1080a686c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d92b8;
  _objc_alloc(PTR_PTR_1126d92b8);
  uVar2 = param_2;
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ae20(param_2);
  uVar4 = param_1;
  func_0x00010c14e120(param_2);
  uVar5 = uVar4;
  func_0x00010c0e8ca0(param_2);
  uVar6 = uVar5;
  func_0x00010bf8b160(param_2);
  uVar7 = uVar6;
  func_0x00010c26f560(param_2);
  uVar3 = param_2;
  func_0x00010bfceba0(param_2);
  func_0x00010c0f4900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020c60(param_1,uVar4,uVar5,uVar6,uVar7,puVar1,param_3,uVar2,param_4,uVar3,param_5,
                      param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 1080a6980; end: 1080a6987; -[SCValdiTextAnimationTransform key] */

undefined8 FUN_1080a6980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080a6988; end: 1080a698f; -[SCValdiTextAnimationTransform partIndex] */

undefined8 FUN_1080a6988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080a6990; end: 1080a6997; -[SCValdiTextAnimationTransform translationY] */

undefined8 FUN_1080a6990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080a6998; end: 1080a699f; -[SCValdiTextAnimationTransform scale] */

undefined8 FUN_1080a6998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080a69a0; end: 1080a69a7; -[SCValdiTextAnimationTransform opacity] */

undefined8 FUN_1080a69a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1080a69a8; end: 1080a69af; -[SCValdiTextAnimationTransform duration] */

undefined8 FUN_1080a69a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1080a69b0; end: 1080a69b7; -[SCValdiTextAnimationTransform timeOffsetBetweenParts] */

undefined8 FUN_1080a69b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1080a69b8; end: 1080a69bf; -[SCValdiTextAnimationTransform groupIndex] */

undefined8 FUN_1080a69b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080a69c0; end: 1080a69c7; -[SCValdiTextAnimationTransform partIndexInGroup] */

undefined8 FUN_1080a69c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080a69c8; end: 1080a69cf; -[SCValdiTextAnimationTransform partPattern] */

undefined8 FUN_1080a69c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080a69d0; end: 1080a69ff; -[SCValdiTextAnimationTransform .cxx_destruct] */

void FUN_1080a69d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080a6a00; end: 1080a6a27; -[SCValdiTextGradientHelper gradientLayer] */

void FUN_1080a6a00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080a6a28; end: 1080a6a4f; -[SCValdiTextGradientHelper gradientColor] */

void FUN_1080a6a28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080a6a50; end: 1080a6b0b; -[SCValdiTextGradientHelper setGradientAttributes:] */

bool FUN_1080a6a50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    FUN_1080a7b84(param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(ulong *)(param_1 + 8) = uVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar4);
  *(bool *)(param_1 + 0x18) = uVar2 >= 2;
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1 < uVar2;
}



/* Entry: 1080a6b0c; end: 1080a6b1b; -[SCValdiTextGradientHelper hasGradient] */

bool FUN_1080a6b0c(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}


