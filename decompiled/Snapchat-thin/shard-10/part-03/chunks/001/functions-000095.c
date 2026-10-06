/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ec0054; end: 107ec005f;  */

void FUN_107ec0054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ec005c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ec0060; end: 107ec036b; -[SCCloudCreateOrExtendEntryOperationV2 logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec0060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 8;
  func_0x00010bafc234(8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_112771070;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c18);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbdda0(uVar2);
  func_0x00010c0df760(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_release(puVar3);
  lVar6 = (long)_DAT_112771074;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010b5fa34c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e06db8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c15e520(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21d8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28d8);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771068));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2998,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar5 = *(long *)(param_1 + _DAT_112771084);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ec036c; end: 107ec03ab; -[SCCloudCreateOrExtendEntryOperationV2 eligibleForOutOfOrderExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec036c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771074);
  func_0x00010bf8b0c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == 0;
}



/* Entry: 107ec03ac; end: 107ec03eb; -[SCCloudCreateOrExtendEntryOperationV2 doesNotRequireMediaUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec03ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771074);
  func_0x00010bf8b0c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107ec03ec; end: 107ec042b; -[SCCloudCreateOrExtendEntryOperationV2 isOperationFromRetryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec03ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112771070);
  func_0x00010c13f6e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107ec042c; end: 107ec04b3; -[SCCloudCreateOrExtendEntryOperationV2 allMediaUploadsCompleteWithBoltDataUploader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ec042c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf879c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112771074);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    FUN_107eac9cc(param_3,uVar2,5);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ec04b4; end: 107ec04bb; -[SCCloudCreateOrExtendEntryOperationV2 requiresSyncStatusUpdate] */

undefined8 FUN_107ec04b4(void)

{
  return 1;
}



/* Entry: 107ec04bc; end: 107ec04c3; -[SCCloudCreateOrExtendEntryOperationV2 needRunImmediately] */

undefined8 FUN_107ec04bc(void)

{
  return 0;
}



/* Entry: 107ec04c4; end: 107ec063f; -[SCCloudCreateOrExtendEntryOperationV2 processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107ec04c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771074);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar3,param_2,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar3 != (undefined *)0x0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ec0640;
    puStack_68 = &UNK_110841f80;
    _objc_retain(puVar3);
    puStack_60 = puVar3;
    _objc_retain(param_4);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107ec075c;
    puStack_98 = &UNK_1108bbd78;
    uStack_58 = param_4;
    _objc_retain(puVar3);
    puStack_90 = puVar3;
    _objc_retain(param_3);
    uStack_88 = param_3;
    func_0x00010c0f8520(param_4,param_2,&puStack_80,param_6,&puStack_b0);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(uStack_58);
    _objc_release(puStack_60);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 107ec0640; end: 107ec075b;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined * FUN_107ec0640(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *in_x5;
  undefined *puVar10;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined *unaff_x24;
  undefined *puVar13;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined1 ***pppuVar14;
  undefined *puVar15;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1d8;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar8 = PTR_PTR_1126bc7f8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf20(puVar8);
  _objc_release(puVar13);
  puVar5 = PTR_PTR_1126bc810;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_48 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar3);
  puVar8 = puVar5;
  func_0x00010bf6bf00(PTR_PTR_1126bc818);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar11 = *(undefined **)(puVar5 + 0x20);
  puVar5 = *(undefined **)(puVar5 + 0x28);
  puVar7 = &uStack_170;
  pcStack_58 = FUN_107ec075c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  if (puVar5 != (undefined *)0x0) {
    puVar8 = puVar5;
    func_0x00010c13ac80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010c13a8c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar8);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined8 *)0x0;
    puVar8 = puVar11;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x24 = (undefined *)*puStack_160;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_160 != unaff_x24) {
            _objc_enumerationMutation(puVar8);
          }
          uVar2 = (uint)*(undefined8 *)(lStack_168 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar2 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = puVar5;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar4 != unaff_x25);
        puVar4 = puVar8;
        puVar7 = &uStack_170;
        func_0x00010bf52a60();
        puVar13 = (undefined *)0x0;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    puVar8 = (undefined *)puVar7;
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_2a0;
  puStack_178 = &SUB_108019660;
  pppuVar14 = &ppuStack_180;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  ppuStack_180 = &puStack_60;
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  puStack_290 = (undefined8 *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  puVar5 = puVar6;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_290;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_290 != unaff_x25) {
          _objc_enumerationMutation(puVar6);
        }
        puVar13 = *(undefined **)(lStack_298 + (long)unaff_x26 * 8);
        unaff_x23 = puVar13;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar13 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = puVar8;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar5 != unaff_x26);
      puVar5 = puVar6;
      puVar7 = &uStack_2a0;
      func_0x00010bf52a60();
      puVar13 = (undefined *)0x0;
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar5;
  }
  puVar15 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_2a0;
  do {
    puVar10 = in_x5;
    *(undefined **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined **)((long)puVar1 + -0x30) = puVar13;
    *(undefined **)((long)puVar1 + -0x28) = puVar8;
    *(undefined **)((long)puVar1 + -0x20) = puVar6;
    *(undefined **)((long)puVar1 + -0x18) = puVar11;
    *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar14;
    *(undefined **)((long)puVar1 + -8) = puVar15;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined **)((long)puVar1 + -0x138) = puVar5;
    puVar6 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar15 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)((long)puVar1 + -0x130);
    puVar13 = (undefined *)((long)puVar1 + -0xf0);
    puVar9 = (undefined *)0x10;
    puVar5 = puVar15;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      unaff_x28 = (undefined *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        puVar11 = (undefined *)0x0;
        do {
          if ((undefined *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar15);
          }
          puVar13 = *(undefined **)(*(long *)((long)puVar1 + -0x128) + (long)puVar11 * 8);
          func_0x00010bf0b760();
          if ((uint)puVar13 < 0x16) {
            func_0x00010b697928();
          }
          else {
            puVar13 = (undefined *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined *)puVar7;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar8 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = puVar13;
          if ((int)puVar8 != 0) {
            unaff_x26 = puVar13;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = *(undefined **)((long)puVar1 + -0x138);
            puVar10 = (undefined *)0x0;
            unaff_x25 = (undefined *)puVar7;
            puVar9 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar12 = (undefined *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar8 = (undefined *)((long)puVar1 + -0x130);
        puVar13 = (undefined *)((long)puVar1 + -0xf0);
        puVar9 = (undefined *)0x10;
        puVar5 = puVar15;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    puVar12 = (undefined *)0x1;
code_r0x00010801998c:
    _objc_release(puVar15);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar5 = *(undefined **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar12;
    }
    ___stack_chk_fail();
    *(undefined **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined **)((long)puVar1 + -400) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x178) = puVar12;
    *(undefined **)((long)puVar1 + -0x170) = puVar15;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar7;
    *(undefined **)((long)puVar1 + -0x160) = puVar4;
    *(undefined **)((long)puVar1 + -0x158) = puVar11;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    pppuVar14 = (undefined1 ***)((long)puVar1 + -0x150);
    in_x5 = puVar10;
    _objc_retain();
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    _objc_retain(puVar13);
    _objc_retain(puVar10);
    unaff_x25 = puVar10;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar11 == 0) {
      unaff_x27 = (undefined *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar10;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar11 & 1) == 0) {
      unaff_x27 = puVar10;
      if (puVar13 == (undefined *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        in_x5 = (undefined *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = puVar13;
        if (puVar8 != (undefined *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar11 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)puVar1 + -0x1a8) = puVar11;
        in_x5 = (undefined *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (puVar13 == (undefined *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined *)0x1;
    }
    if ((int)puVar9 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      return unaff_x27;
    }
    puVar15 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = puVar6;
    puVar7 = (undefined8 *)puVar10;
    puVar11 = puVar5;
    unaff_x23 = puVar10;
    unaff_x24 = puVar9;
  } while( true );
}



/* Entry: 107ec075c; end: 107ec0767;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_107ec075c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar10;
  undefined1 *unaff_x24;
  undefined1 *puVar11;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 **ppuVar12;
  undefined *puVar13;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  puVar4 = *(undefined1 **)(param_1 + 0x28);
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  _objc_retain();
  _objc_retain(puVar4);
  if (puVar4 != (undefined1 *)0x0) {
    puVar3 = puVar4;
    func_0x00010c13ac80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c13a8c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar3);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    puVar3 = puVar9;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf52a60();
    if (puVar11 != (undefined1 *)0x0) {
      unaff_x24 = (undefined1 *)*puStack_110;
      do {
        unaff_x25 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_110 != unaff_x24) {
            _objc_enumerationMutation(puVar3);
          }
          uVar2 = (uint)*(undefined8 *)(lStack_118 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar2 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = puVar4;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar11 != unaff_x25);
        puVar11 = puVar3;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (puVar11 != (undefined1 *)0x0);
    }
    _objc_release(puVar3);
    param_3 = (undefined1 *)puVar6;
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  puStack_128 = &SUB_108019660;
  ppuVar12 = &puStack_130;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(param_3);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_240;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_240 != unaff_x25) {
          _objc_enumerationMutation(puVar5);
        }
        puVar11 = *(undefined1 **)(lStack_248 + (long)unaff_x26 * 8);
        unaff_x23 = puVar11;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar11 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = param_3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar4 != unaff_x26);
      puVar4 = puVar5;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar5);
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar4;
  }
  puVar13 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_250;
  do {
    puVar8 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = param_3;
    *(undefined1 **)((long)puVar1 + -0x20) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x18) = puVar9;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar4;
    puVar5 = puVar3;
    _objc_retain();
    _objc_retain(puVar3);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar11 = puVar3;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar7 = (undefined1 *)0x10;
    puVar4 = puVar11;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar11);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)puVar9 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar7 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar7 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            param_3 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar8 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar7 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar10 = (undefined1 *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        param_3 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar7 = (undefined1 *)0x10;
        puVar4 = puVar11;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar10 = (undefined1 *)0x1;
code_r0x00010801998c:
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar4 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar10;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar10;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar11;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar3;
    *(undefined1 **)((long)puVar1 + -0x158) = puVar9;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    ppuVar12 = (undefined1 **)((long)puVar1 + -0x150);
    param_6 = puVar8;
    _objc_retain();
    _objc_retain(puVar5);
    _objc_retain(param_3);
    _objc_retain(unaff_x22);
    _objc_retain(puVar8);
    unaff_x25 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar9 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar9 & 1) == 0) {
      unaff_x27 = puVar8;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == (undefined1 *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (param_3 != (undefined1 *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar9 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar9;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar7 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar8);
      _objc_release(unaff_x22);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      return unaff_x27;
    }
    puVar13 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar3 = puVar5;
    puVar6 = (undefined8 *)puVar8;
    puVar9 = puVar4;
    unaff_x23 = puVar8;
    unaff_x24 = puVar7;
  } while( true );
}



/* Entry: 107ec0768; end: 107ec0797; -[SCCloudCreateOrExtendEntryOperationV2 cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec0768(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771074);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec0798; end: 107ec0807; -[SCCloudCreateOrExtendEntryOperationV2 snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec0798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771074);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107ec0808;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_40 = *(undefined8 *)(puVar1 + _DAT_112771078);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_107ec0878;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_60 = *(undefined8 *)(puVar1 + _DAT_11277107c);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_50 = &puStack_30;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        return (undefined *)0x1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107ec0808; end: 107ec0877; -[SCCloudCreateOrExtendEntryOperationV2 detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec0808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771078);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107ec0878;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_40 = *(undefined8 *)(puVar1 + _DAT_11277107c);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      return (undefined *)0x1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107ec0878; end: 107ec08e7; -[SCCloudCreateOrExtendEntryOperationV2 miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec0878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_11277107c);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107ec08e8; end: 107ec08ef; -[SCCloudCreateOrExtendEntryOperationV2 numberOfSnaps] */

undefined8 FUN_107ec08e8(void)

{
  return 1;
}



/* Entry: 107ec08f0; end: 107ec09b3; -[SCCloudCreateOrExtendEntryOperationV2 dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec08f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_112771080;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112771074);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uStack_40 = *(undefined8 *)(param_1 + lVar4);
    param_3 = &uStack_40;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_48 = lVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,&lStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126af4c0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112771070);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar3,param_2,uVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar3;
  func_0x00010c07b240(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar5);
  return puVar2;
}



/* Entry: 107ec09b4; end: 107ec0a4b; -[SCCloudCreateOrExtendEntryOperationV2 isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ec09b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771070);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 107ec0a4c; end: 107ec0aeb; -[SCCloudCreateOrExtendEntryOperationV2 _getCloudSyncEntryData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec0a4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d81b8;
  _objc_alloc(PTR_PTR_1126d81b8);
  lVar5 = (long)_DAT_112771070;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c07b240(uVar4);
  func_0x00010c010360(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ec0aec; end: 107ec0c2b; -[SCCloudCreateOrExtendEntryOperationV2 isEligibleForTacomaWithCOFService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ec0aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112771074;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  if (lVar2 == 0) {
    lVar7 = (long)_DAT_112771070;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 == 8) goto LAB_107ec0b4c;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 == 0) {
      lVar5 = *(long *)(param_1 + lVar5);
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      if (lVar2 == 0) {
        func_0x00010c269d40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0809e0();
        goto LAB_107ec0be8;
      }
    }
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0808c0();
    iVar1 = (int)uVar6;
  }
  else {
    _objc_release();
LAB_107ec0b4c:
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c080960();
    iVar1 = (int)uVar6;
  }
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0809e0();
    _objc_release(uVar3);
  }
LAB_107ec0be8:
  _objc_release(uVar4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107ec0c2c; end: 107ec0ceb; -[SCCloudCreateOrExtendEntryOperationV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec0c2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771088,0);
  _objc_storeStrong(param_1 + _DAT_11277108c,0);
  _objc_storeStrong(param_1 + _DAT_112771084,0);
  _objc_storeStrong(param_1 + _DAT_11277107c,0);
  _objc_storeStrong(param_1 + _DAT_112771078,0);
  _objc_storeStrong(param_1 + _DAT_112771074,0);
  _objc_storeStrong(param_1 + _DAT_112771080,0);
  _objc_storeStrong(param_1 + _DAT_112771070,0);
  _objc_storeStrong(param_1 + _DAT_11277106c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771068,0);
  return;
}



/* Entry: 107ec0cec; end: 107ec0cf3;  */

void FUN_107ec0cec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_fileURL_1125c8e00);
  return;
}



/* Entry: 107ec0cf4; end: 107ec0f1b; -[SCCloudCreateOrExtendOperationProgressReporter initWithReporterQueue:progressHandler:] */

undefined1 *
FUN_107ec0cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fb958;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar1);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010bf82c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010c117b60(PTR__OBJC_CLASS___NSProgress_1126b8028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010c117b60(PTR__OBJC_CLASS___NSProgress_1126b8028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010c117b60(PTR__OBJC_CLASS___NSProgress_1126b8028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010c117b60(PTR__OBJC_CLASS___NSProgress_1126b8028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x00010c117b60(PTR__OBJC_CLASS___NSProgress_1126b8028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ec0f1c; end: 107ec0fcb; -[SCCloudCreateOrExtendOperationProgressReporter reporterWithIdentifier:didReportFractionCompleted:] */

void FUN_107ec0f1c(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 8);
  if ((lVar1 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107ec0fcc;
    puStack_60 = &UNK_1108a7688;
    lStack_58 = param_2;
    _objc_retain(param_4);
    uStack_50 = param_4;
    uStack_48 = param_1;
    func_0x00010007380c(lVar1,&puStack_78);
    _objc_release(uStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ec0fcc; end: 107ec1067;  */

void FUN_107ec0fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c276f80();
  fVar4 = *(float *)(param_1 + 0x30) * (float)lVar3;
  uVar5 = 0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fae0();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bfb67a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000107ec1064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))((float)(double)CONCAT44(uVar5,fVar4),lVar3);
  return;
}



/* Entry: 107ec1068; end: 107ec107f; -[SCCloudCreateOrExtendOperationProgressReporter progressReceiver] */

void FUN_107ec1068(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec1080; end: 107ec108b; -[SCCloudCreateOrExtendOperationProgressReporter setProgressReceiver:] */

void FUN_107ec1080(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107ec108c; end: 107ec10db; -[SCCloudCreateOrExtendOperationProgressReporter .cxx_destruct] */

void FUN_107ec108c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ec10dc; end: 107ec11a7; -[SCCloudDeleteEntriesCleanupContext initWithDeletedSnaps:snapIdToEntryIdMap:entryIdToDeletedEntryAssets:] */

undefined1 *
FUN_107ec10dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb960;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ec11a8; end: 107ec11af; -[SCCloudDeleteEntriesCleanupContext deletedSnaps] */

undefined8 FUN_107ec11a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ec11b0; end: 107ec11b7; -[SCCloudDeleteEntriesCleanupContext snapIdToEntryIdMap] */

undefined8 FUN_107ec11b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ec11b8; end: 107ec11bf; -[SCCloudDeleteEntriesCleanupContext entryIdToDeletedEntryAssets] */

undefined8 FUN_107ec11b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ec11c0; end: 107ec11fb; -[SCCloudDeleteEntriesCleanupContext .cxx_destruct] */

void FUN_107ec11c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ec11fc; end: 107ec1363; -[SCCloudDeleteEntriesOperation initWithProfile:entryIds:entryIdToSnapIdsMap:prioritized:deleteSharedSnapForAll:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ec11fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fb968;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710b0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127710b0) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127710b4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127710b8) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127710bc) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127710c0) = uVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127710c4) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127710c8) = param_7;
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ec1364; end: 107ec136b; -[SCCloudDeleteEntriesOperation type] */

undefined8 FUN_107ec1364(void)

{
  return 2;
}



/* Entry: 107ec136c; end: 107ec1373; -[SCCloudDeleteEntriesOperation analyticsType] */

undefined8 FUN_107ec136c(void)

{
  return 3;
}



/* Entry: 107ec1374; end: 107ec13a3; -[SCCloudDeleteEntriesOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec1374(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710b0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec13a4; end: 107ec13d3; -[SCCloudDeleteEntriesOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec13a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec13d4; end: 107ec142b; -[SCCloudDeleteEntriesOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec13d4(void)

{
  _objc_alloc(PTR_PTR_1126d82e0);
  func_0x00010c03ab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec142c; end: 107ec1617; -[SCCloudDeleteEntriesOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ec142c(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a70);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb968;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710b0);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710b0) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710b4);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127710b4) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf97260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710b8);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127710b8) = uVar2;
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010bf97240();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710bc);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127710bc) = uVar2;
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127710c0);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127710c0) = uVar4;
      _objc_release(uVar6);
      lVar7 = (long)_DAT_1127710c4;
      *(undefined1 *)((long)ppuVar3 + lVar7) = 0;
      uVar4 = param_3;
      func_0x00010bf6c7c0();
      *(char *)((long)ppuVar3 + (long)_DAT_1127710c8) = (char)uVar4;
      uVar4 = param_3;
      func_0x00010c0d7100();
      if ((int)uVar4 != 0) {
        *(undefined1 *)((long)ppuVar3 + lVar7) = 1;
      }
      _objc_release(param_3);
    }
    _objc_retain(ppuVar3);
    puVar8 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar8;
}



/* Entry: 107ec1618; end: 107ec1873; -[SCCloudDeleteEntriesOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107ec1618(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  long lStack_1b0;
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
  _objc_retain(param_5);
  lVar10 = (long)_DAT_1127710b8;
  lVar5 = *(long *)(param_1 + lVar10);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf529e0();
  puVar2 = *(undefined **)(param_1 + lVar10);
  func_0x00010bf529e0();
  if ((puVar8 == puVar2) && (puVar8 = puVar1, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
    _objc_retain(param_1);
    puVar8 = param_1;
  }
  else {
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + _DAT_1127710b0);
      uVar3 = 1;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5,param_2,lVar5,0,0,0,1,1);
      _objc_release(uVar3);
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
      _objc_retain(puVar1);
      puVar8 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
      if (puVar8 != (undefined *)0x0) {
        lVar5 = *plStack_120;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(puVar1);
            }
            uVar3 = *(undefined8 *)(lStack_128 + (long)puVar7 * 8);
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_2,uVar3);
            _objc_release(uVar3);
            puVar7 = puVar7 + 1;
          } while (puVar8 != puVar7);
          puVar8 = puVar1;
          func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      puVar8 = PTR_PTR_1126d7f40;
      _objc_alloc();
      lVar5 = *(long *)(param_1 + _DAT_1127710b4);
      func_0x00010c03ab80();
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar5);
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar10 = *(long *)(param_5 + _DAT_1127710b8);
  _objc_retain(lVar10);
  lStack_338 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_2f0,auStack_230,0x10);
  if (lStack_338 != 0) {
    lVar6 = *plStack_2e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2e0 != lVar6) {
          _objc_enumerationMutation(lVar10);
        }
        puVar1 = PTR_PTR_1126af4c0;
        func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(lStack_2e8 + lVar11 * 8),lVar5
                           );
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126af4d0;
          func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar1,lVar5);
          _objc_retainAutoreleasedReturnValue();
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          puVar2 = puVar8;
          func_0x00010bf52a60();
          if (puVar2 != (undefined *)0x0) {
            lVar9 = *plStack_320;
            do {
              puVar7 = (undefined *)0x0;
              do {
                if (*plStack_320 != lVar9) {
                  _objc_enumerationMutation(puVar8);
                }
                puVar4 = PTR_PTR_1126bc7f8;
                func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,
                                    *(undefined8 *)(lStack_328 + (long)puVar7 * 8));
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d7bc0();
                func_0x00010c1d7be0(puVar4,param_2,*(undefined8 *)(param_5 + _DAT_1127710b4));
                _objc_release(puVar4);
                puVar7 = puVar7 + 1;
              } while (puVar2 != puVar7);
              puVar2 = puVar8;
              func_0x00010bf52a60(puVar8,param_2,&uStack_330,auStack_2b0,0x10);
            } while (puVar2 != (undefined *)0x0);
          }
          puVar2 = PTR_PTR_1126bc830;
          func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7bc0();
          func_0x00010c1d7be0(puVar2,param_2,*(undefined8 *)(param_5 + _DAT_1127710b4));
          puVar7 = puVar2;
          func_0x00010c0f7a20(puVar2);
          func_0x00010c1da4e0(puVar2,param_2,(int)puVar7 + 1);
          _objc_release(puVar2);
          _objc_release(puVar8);
        }
        _objc_release(puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_338);
      lStack_338 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_2f0,auStack_230,0x10);
    } while (lStack_338 != 0);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa6ee0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(lVar5 + _DAT_1127710b8));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return (undefined *)(ulong)(puVar8 != (undefined *)0x0);
}



/* Entry: 107ec1874; end: 107ec1afb; -[SCCloudDeleteEntriesOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec1874(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_1f8;
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
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar7 = *(long *)(param_1 + _DAT_1127710b8);
  _objc_retain(lVar7);
  lStack_1f8 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lStack_1f8 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(lVar7);
        }
        puVar1 = PTR_PTR_1126af4c0;
        func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(lStack_1a8 + lVar9 * 8),
                            param_3);
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 != (undefined *)0x0) {
          puVar2 = PTR_PTR_1126af4d0;
          func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar1,param_3);
          _objc_retainAutoreleasedReturnValue();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          puVar3 = puVar2;
          func_0x00010bf52a60();
          if (puVar3 != (undefined *)0x0) {
            lVar8 = *plStack_1e0;
            do {
              puVar6 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar8) {
                  _objc_enumerationMutation(puVar2);
                }
                puVar4 = PTR_PTR_1126bc7f8;
                func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,
                                    *(undefined8 *)(lStack_1e8 + (long)puVar6 * 8));
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d7bc0();
                func_0x00010c1d7be0(puVar4,param_2,*(undefined8 *)(param_1 + _DAT_1127710b4));
                _objc_release(puVar4);
                puVar6 = puVar6 + 1;
              } while (puVar3 != puVar6);
              puVar3 = puVar2;
              func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_170,0x10);
            } while (puVar3 != (undefined *)0x0);
          }
          puVar3 = PTR_PTR_1126bc830;
          func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7bc0();
          func_0x00010c1d7be0(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_1127710b4));
          puVar6 = puVar3;
          func_0x00010c0f7a20(puVar3);
          func_0x00010c1da4e0(puVar3,param_2,(int)puVar6 + 1);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        _objc_release(puVar1);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lStack_1f8);
      lStack_1f8 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_1f8 != 0);
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return true;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa6ee0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_3 + _DAT_1127710b8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 107ec1afc; end: 107ec1b53; -[SCCloudDeleteEntriesOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec1afc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa6ee0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + _DAT_1127710b8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 107ec1b54; end: 107ec1cab; -[SCCloudDeleteEntriesOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

void FUN_107ec1b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c7dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f98a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf9f60(param_1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf8eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6b8,PTR_s_empty_1125c1470);
  return;
}



/* Entry: 107ec1cac; end: 107ec20c3; -[SCCloudDeleteEntriesOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec1cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(param_1 + _DAT_1127710b8);
  _objc_retain(lVar14);
  lVar6 = lVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar14);
      }
      puVar7 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126af4d0;
        func_0x00010bfa74e0(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        func_0x00010bf6bf20(PTR_PTR_1126bc7f8);
        puVar9 = PTR_PTR_1126bc800;
        func_0x00010bfa71e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126bc828;
        if (puVar9 != (undefined *)0x0) {
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6bec0(puVar11);
          _objc_release(puVar10);
        }
        puVar11 = PTR_PTR_1126bc808;
        func_0x00010bfa7000();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar11;
        func_0x00010bf529e0();
        if (puVar10 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar5);
          func_0x00010bf6bea0(PTR_PTR_1126bc820);
        }
        func_0x00010befa120(puVar2);
        puVar10 = puVar8;
        func_0x00010c0b8600(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        func_0x00010bf97e80(puVar10);
        puVar12 = PTR_PTR_1126bc810;
        func_0x00010bfa72c0(PTR_PTR_1126bc810);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6bf00(PTR_PTR_1126bc818);
        _objc_release(puVar12);
        _objc_release(puVar4);
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  func_0x00010bf6be80(PTR_PTR_1126bc830);
  puVar7 = PTR_PTR_1126d82e8;
  _objc_alloc(PTR_PTR_1126d82e8);
  puVar11 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar8 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar9 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c00b4e0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ec20c4; end: 107ec20d7;  */

void FUN_107ec20c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ec20d8; end: 107ec226b; -[SCCloudDeleteEntriesOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined **
FUN_107ec20d8(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined8 param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **ppuVar9;
  undefined **unaff_x24;
  undefined **ppuVar10;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined *puStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined **)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    ppuVar2 = param_3;
    func_0x00010bf6cfe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar6 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_110;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_110 != unaff_x23) {
            _objc_enumerationMutation(ppuVar2);
          }
          param_2 = param_4;
          func_0x0001080194b4(*(undefined8 *)(lStack_118 + (long)unaff_x24 * 8));
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar6 != unaff_x24);
        ppuVar6 = ppuVar2;
        func_0x00010bf52a60();
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar6 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    ppuVar6 = param_3;
    func_0x00010bf97220();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_107ec226c;
    puStack_130 = &UNK_1108c0730;
    _objc_retain(param_4);
    ppuVar2 = &puStack_148;
    ppuStack_128 = param_4;
    func_0x00010bf97ce0(ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuStack_128);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar6 = (undefined **)param_3[4];
  ppuVar10 = &puStack_280;
  pcStack_158 = FUN_107ec226c;
  ppuVar11 = &puStack_160;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar6);
  lStack_278 = 0;
  puStack_280 = (undefined *)0x0;
  uStack_268 = 0;
  puStack_270 = (undefined8 *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  ppuVar4 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_270;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_270 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        ppuVar10 = *(undefined ***)(lStack_278 + (long)unaff_x26 * 8);
        unaff_x23 = ppuVar10;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)ppuVar10 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = ppuVar6;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar2;
      ppuVar10 = &puStack_280;
      func_0x00010bf52a60();
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  ppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar4;
  }
  puVar12 = &UNK_1080197ec;
  ___stack_chk_fail();
  ppuVar1 = &puStack_280;
  do {
    ppuVar8 = param_6;
    *(undefined ***)((long)ppuVar1 + -0x60) = unaff_x28;
    *(undefined ***)((long)ppuVar1 + -0x58) = unaff_x27;
    *(undefined ***)((long)ppuVar1 + -0x50) = unaff_x26;
    *(undefined ***)((long)ppuVar1 + -0x48) = unaff_x25;
    *(undefined ***)((long)ppuVar1 + -0x40) = unaff_x24;
    *(undefined ***)((long)ppuVar1 + -0x38) = unaff_x23;
    *(undefined ***)((long)ppuVar1 + -0x30) = unaff_x22;
    *(undefined ***)((long)ppuVar1 + -0x28) = ppuVar6;
    *(undefined ***)((long)ppuVar1 + -0x20) = ppuVar2;
    *(undefined ***)((long)ppuVar1 + -0x18) = param_2;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar11;
    *(undefined **)((long)ppuVar1 + -8) = puVar12;
    *(undefined8 *)((long)ppuVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined ***)((long)ppuVar1 + -0x138) = ppuVar4;
    ppuVar2 = ppuVar5;
    _objc_retain();
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar10);
    *(undefined8 *)((long)ppuVar1 + -0x128) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x130) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x118) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x120) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x108) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x110) = 0;
    *(undefined8 *)((long)ppuVar1 + -0xf8) = 0;
    *(undefined8 *)((long)ppuVar1 + -0x100) = 0;
    ppuVar3 = ppuVar5;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)((long)ppuVar1 + -0x130);
    unaff_x22 = (undefined **)((long)ppuVar1 + -0xf0);
    ppuVar7 = (undefined **)0x10;
    ppuVar4 = ppuVar3;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      unaff_x28 = (undefined **)**(undefined8 **)((long)ppuVar1 + -0x120);
      do {
        param_2 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)ppuVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(ppuVar3);
          }
          unaff_x22 = *(undefined ***)(*(long *)((long)ppuVar1 + -0x128) + (long)param_2 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined **)0xfffffffffbadbeef;
          }
          unaff_x24 = ppuVar10;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          ppuVar6 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)ppuVar6 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = *(undefined ***)((long)ppuVar1 + -0x138);
            ppuVar8 = (undefined **)0x0;
            unaff_x25 = ppuVar10;
            ppuVar7 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              ppuVar9 = (undefined **)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          param_2 = (undefined **)((long)param_2 + 1);
        } while (ppuVar4 != param_2);
        ppuVar6 = (undefined **)((long)ppuVar1 + -0x130);
        unaff_x22 = (undefined **)((long)ppuVar1 + -0xf0);
        ppuVar7 = (undefined **)0x10;
        ppuVar4 = ppuVar3;
        func_0x00010bf52a60();
      } while (ppuVar4 != (undefined **)0x0);
    }
    ppuVar9 = (undefined **)0x1;
code_r0x00010801998c:
    _objc_release(ppuVar3);
    _objc_release(ppuVar10);
    _objc_release(ppuVar5);
    ppuVar4 = *(undefined ***)((long)ppuVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar1 + -0x70)) {
      return ppuVar9;
    }
    ___stack_chk_fail();
    *(undefined ***)((long)ppuVar1 + -0x1a0) = unaff_x28;
    *(undefined ***)((long)ppuVar1 + -0x198) = unaff_x27;
    *(undefined ***)((long)ppuVar1 + -400) = unaff_x26;
    *(undefined ***)((long)ppuVar1 + -0x188) = unaff_x25;
    *(undefined ***)((long)ppuVar1 + -0x180) = unaff_x24;
    *(undefined ***)((long)ppuVar1 + -0x178) = ppuVar9;
    *(undefined ***)((long)ppuVar1 + -0x170) = ppuVar3;
    *(undefined ***)((long)ppuVar1 + -0x168) = ppuVar10;
    *(undefined ***)((long)ppuVar1 + -0x160) = ppuVar5;
    *(undefined ***)((long)ppuVar1 + -0x158) = param_2;
    *(undefined1 **)((long)ppuVar1 + -0x150) = (undefined1 *)((long)ppuVar1 + -0x10);
    *(undefined **)((long)ppuVar1 + -0x148) = &SUB_1080199ec;
    ppuVar11 = (undefined1 **)((long)ppuVar1 + -0x150);
    param_6 = ppuVar8;
    _objc_retain();
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar6);
    _objc_retain(unaff_x22);
    _objc_retain(ppuVar8);
    unaff_x25 = ppuVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)ppuVar5 == 0) {
      unaff_x27 = (undefined **)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = ppuVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)ppuVar5 & 1) == 0) {
      unaff_x27 = ppuVar8;
      if (unaff_x22 == (undefined **)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar6 == (undefined **)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        param_6 = (undefined **)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (ppuVar6 != (undefined **)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        ppuVar5 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)((long)ppuVar1 + -0x1a8) = ppuVar5;
        param_6 = (undefined **)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)ppuVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined **)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined **)0x1;
    }
    if ((int)ppuVar7 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(ppuVar8);
      _objc_release(unaff_x22);
      _objc_release(ppuVar6);
      _objc_release(ppuVar2);
      _objc_release(ppuVar4);
      return unaff_x27;
    }
    puVar12 = &UNK_108019ae0;
    ppuVar1 = (undefined **)((long)ppuVar1 + -0x1b0);
    ppuVar5 = ppuVar2;
    ppuVar10 = ppuVar8;
    param_2 = ppuVar4;
    unaff_x23 = ppuVar8;
    unaff_x24 = ppuVar7;
  } while( true );
}



/* Entry: 107ec226c; end: 107ec227f;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_107ec226c(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar8;
  undefined1 *unaff_x24;
  undefined1 *puVar9;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = *(undefined1 **)(param_1 + 0x20);
  puVar6 = &uStack_130;
  puVar2 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(puVar5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_120;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined1 **)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x23 = puVar9;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar9 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = puVar5;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar3 != unaff_x26);
      puVar3 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  puVar10 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_130;
  do {
    puVar7 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x20) = param_3;
    *(undefined1 **)((long)puVar1 + -0x18) = param_2;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar2;
    *(undefined **)((long)puVar1 + -8) = puVar10;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar3;
    param_3 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar2 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar9 = (undefined1 *)0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        param_2 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)param_2 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar5 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar5 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar7 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar9 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar8 = (undefined1 *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          param_2 = param_2 + 1;
        } while (puVar3 != param_2);
        puVar5 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar9 = (undefined1 *)0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar8 = (undefined1 *)0x1;
code_r0x00010801998c:
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar3 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar8;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar8;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar2;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar4;
    *(undefined1 **)((long)puVar1 + -0x158) = param_2;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    puVar2 = (undefined1 *)((long)puVar1 + -0x150);
    param_6 = puVar7;
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(puVar5);
    _objc_retain(unaff_x22);
    _objc_retain(puVar7);
    unaff_x25 = puVar7;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar4 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar7;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x27 = puVar7;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined1 *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (puVar5 != (undefined1 *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar4 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar4;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar9 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar7);
      _objc_release(unaff_x22);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_release(puVar3);
      return unaff_x27;
    }
    puVar10 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = param_3;
    puVar6 = (undefined8 *)puVar7;
    param_2 = puVar3;
    unaff_x23 = puVar7;
    unaff_x24 = puVar9;
  } while( true );
}



/* Entry: 107ec2280; end: 107ec2353; -[SCCloudDeleteEntriesOperation changedSnapContextsWithEntryUpdate:] */

void FUN_107ec2280(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf6cfe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107ec2354;
    puStack_48 = &UNK_110a11520;
    lStack_40 = param_3;
    uStack_38 = param_1;
    _objc_retain(param_3);
    lVar2 = lVar1;
    func_0x00010c0b8600(lVar1,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_40);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ec2354; end: 107ec2487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec2354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar3;
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079400(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c23f7c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ec2488; end: 107ec25d7; -[SCCloudDeleteEntriesOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec2488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 1;
  func_0x00010bafc234(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127710b8),
                      &PTR____CFConstantStringClassReference_110e26898);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127710b0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec35f8,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_1127710c0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ec25d8; end: 107ec25df; -[SCCloudDeleteEntriesOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107ec25d8(void)

{
  return 0;
}



/* Entry: 107ec25e0; end: 107ec25e7; -[SCCloudDeleteEntriesOperation doesNotRequireMediaUpload] */

undefined8 FUN_107ec25e0(void)

{
  return 1;
}



/* Entry: 107ec25e8; end: 107ec25ef; -[SCCloudDeleteEntriesOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ec25e8(void)

{
  return 1;
}



/* Entry: 107ec25f0; end: 107ec25f7; -[SCCloudDeleteEntriesOperation requiresSyncStatusUpdate] */

undefined8 FUN_107ec25f0(void)

{
  return 0;
}



/* Entry: 107ec25f8; end: 107ec2607; -[SCCloudDeleteEntriesOperation needRunImmediately] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ec25f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127710c4);
}



/* Entry: 107ec2608; end: 107ec2aaf; -[SCCloudDeleteEntriesOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec2608(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar14 = *(long *)(param_1 + _DAT_1127710b8);
  _objc_retain(lVar14);
  lVar13 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_150,auStack_100,0x10);
  if (lVar13 != 0) {
    lVar17 = *plStack_140;
    do {
      lVar16 = 0;
      do {
        if (*plStack_140 != lVar17) {
          _objc_enumerationMutation(lVar14);
        }
        uVar15 = *(undefined8 *)(lStack_148 + lVar16 * 8);
        puVar7 = PTR_PTR_1126af4c0;
        func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,uVar15,param_4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126bc7e0;
          func_0x00010bfa5b00(PTR_PTR_1126bc7e0,param_2,uVar15,param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c0f7a20();
          if (1 < (int)puVar9) {
            func_0x00010bf529e0(puVar8);
          }
          puVar9 = puVar7;
          func_0x00010c15e520();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = PTR_PTR_1126af4d0;
            func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar7,param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar2,param_2,puVar9);
            puVar10 = PTR_PTR_1126bc800;
            func_0x00010bfa7180(PTR_PTR_1126bc800,param_2,puVar7,0,param_4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 != (undefined *)0x0) {
              func_0x00010befa120(puVar3,param_2,puVar10);
            }
            puVar11 = PTR_PTR_1126bc808;
            func_0x00010bfa6fc0(PTR_PTR_1126bc808,param_2,puVar7,param_4);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010bf529e0();
            if (puVar12 != (undefined *)0x0) {
              func_0x00010c1d0640(puVar4,param_2,puVar11,uVar15);
            }
            func_0x00010befa120(puVar1,param_2,puVar7);
            func_0x00010befa160(puVar5,param_2,puVar8);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          else {
            func_0x00010befa160(puVar6,param_2,puVar8);
          }
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_150,auStack_100,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar14);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar8 != (undefined *)0x0) {
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_107ec2ab0;
    puStack_180 = &UNK_1108475b0;
    _objc_retain(puVar2);
    puStack_178 = puVar2;
    _objc_retain(puVar3);
    puStack_170 = puVar3;
    _objc_retain(puVar4);
    puStack_168 = puVar4;
    _objc_retain(puVar1);
    puStack_160 = puVar1;
    _objc_retain(param_4);
    puStack_1d0 = puVar7;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_107ec2b84;
    puStack_1b8 = &UNK_1108a5040;
    uStack_158 = param_4;
    _objc_retain(puVar2);
    puStack_1b0 = puVar2;
    _objc_retain(param_3);
    lStack_1a8 = param_3;
    _objc_retain(puVar4);
    puStack_1a0 = puVar4;
    func_0x00010c0f8520(param_4,param_2,&puStack_198,param_6,&puStack_1d0);
    _objc_release(puStack_1a0);
    _objc_release(lStack_1a8);
    _objc_release(puStack_1b0);
    _objc_release(uStack_158);
    _objc_release(puStack_160);
    _objc_release(puStack_168);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar5;
  puStack_108 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_110,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_3 + 0x20));
  lVar13 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    func_0x00010bf6bec0(PTR_PTR_1126bc828,param_2,*(undefined8 *)(param_3 + 0x28));
  }
  func_0x00010bf97ce0(*(undefined8 *)(param_3 + 0x30),param_2,&PTR___NSConcreteGlobalBlock_110a11570
                     );
  func_0x00010bf6be80(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_3 + 0x38));
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0b8600(uVar15,param_2,&PTR___NSConcreteGlobalBlock_110a11590);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0(PTR_PTR_1126bc810,param_2,uVar15,*(undefined8 *)(param_3 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf00(PTR_PTR_1126bc818,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 107ec2ab0; end: 107ec2b6f;  */

void FUN_107ec2ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6bec0(PTR_PTR_1126bc828,param_2,*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x30),param_2,&PTR___NSConcreteGlobalBlock_110a11570
                     );
  func_0x00010bf6be80(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a11590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0(PTR_PTR_1126bc810,param_2,uVar2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf00(PTR_PTR_1126bc818,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ec2b70; end: 107ec2b83;  */

void FUN_107ec2b70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc820,PTR_s_deleteGalleryEntryAssets__1125b8950);
  return;
}



/* Entry: 107ec2b84; end: 107ec2ccb;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined ** FUN_107ec2b84(long param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **in_x5;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **ppuVar11;
  undefined **unaff_x24;
  undefined **ppuVar12;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puVar13;
  undefined *puStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  undefined1 *puVar3;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  ppuVar10 = *(undefined ***)(param_1 + 0x20);
  _objc_retain(ppuVar10);
  ppuVar4 = ppuVar10;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x22 = (undefined **)*puStack_100;
    do {
      unaff_x23 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(ppuVar10);
        }
        param_2 = *(undefined ***)(param_1 + 0x28);
        func_0x0001080194b4(*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8));
        unaff_x23 = (undefined **)((long)unaff_x23 + 1);
      } while (ppuVar4 != unaff_x23);
      ppuVar4 = ppuVar10;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar10);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_107ec2ccc;
  puStack_120 = &UNK_1108c0730;
  ppuVar10 = *(undefined ***)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(ppuVar10);
  ppuVar4 = &puStack_138;
  ppuStack_118 = ppuVar10;
  func_0x00010bf97ce0(uVar1);
  ppuVar10 = ppuStack_118;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  ppuVar10 = (undefined **)ppuVar10[4];
  ppuVar12 = &puStack_270;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar4;
  _objc_retain();
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar10);
  lStack_268 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppuVar6 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_260;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_260 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        ppuVar12 = *(undefined ***)(lStack_268 + (long)unaff_x26 * 8);
        unaff_x23 = ppuVar12;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)ppuVar12 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = ppuVar10;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar6 != unaff_x26);
      ppuVar6 = ppuVar4;
      ppuVar12 = &puStack_270;
      func_0x00010bf52a60();
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar10);
  _objc_release(ppuVar4);
  ppuVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppuVar6;
  }
  puVar13 = &UNK_1080197ec;
  ___stack_chk_fail();
  ppuVar5 = &puStack_270;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    ppuVar9 = in_x5;
    puVar3 = (undefined1 *)ppuVar5;
    *(undefined ***)(puVar3 + -0x60) = unaff_x28;
    *(undefined ***)(puVar3 + -0x58) = unaff_x27;
    *(undefined ***)(puVar3 + -0x50) = unaff_x26;
    *(undefined ***)(puVar3 + -0x48) = unaff_x25;
    *(undefined ***)(puVar3 + -0x40) = unaff_x24;
    *(undefined ***)(puVar3 + -0x38) = unaff_x23;
    *(undefined ***)(puVar3 + -0x30) = unaff_x22;
    *(undefined ***)(puVar3 + -0x28) = ppuVar10;
    *(undefined ***)(puVar3 + -0x20) = ppuVar4;
    *(undefined ***)(puVar3 + -0x18) = param_2;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x150;
    *(undefined **)(puVar3 + -8) = puVar13;
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined ***)(puVar3 + -0x138) = ppuVar6;
    ppuVar4 = ppuVar7;
    _objc_retain();
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar12);
    *(undefined8 *)(puVar3 + -0x128) = 0;
    *(undefined8 *)(puVar3 + -0x130) = 0;
    *(undefined8 *)(puVar3 + -0x118) = 0;
    *(undefined8 *)(puVar3 + -0x120) = 0;
    *(undefined8 *)(puVar3 + -0x108) = 0;
    *(undefined8 *)(puVar3 + -0x110) = 0;
    *(undefined8 *)(puVar3 + -0xf8) = 0;
    *(undefined8 *)(puVar3 + -0x100) = 0;
    ppuVar5 = ppuVar7;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)(puVar3 + -0x130);
    unaff_x22 = (undefined **)(puVar3 + -0xf0);
    ppuVar8 = (undefined **)0x10;
    ppuVar6 = ppuVar5;
    func_0x00010bf52a60();
    if (ppuVar6 != (undefined **)0x0) {
      unaff_x28 = (undefined **)**(undefined8 **)(puVar3 + -0x120);
      do {
        param_2 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)(puVar3 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(ppuVar5);
          }
          unaff_x22 = *(undefined ***)(*(long *)(puVar3 + -0x128) + (long)param_2 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined **)0xfffffffffbadbeef;
          }
          unaff_x24 = ppuVar12;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          ppuVar10 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)ppuVar10 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = *(undefined ***)(puVar3 + -0x138);
            ppuVar9 = (undefined **)0x0;
            unaff_x25 = ppuVar12;
            ppuVar8 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              ppuVar11 = (undefined **)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          param_2 = (undefined **)((long)param_2 + 1);
        } while (ppuVar6 != param_2);
        ppuVar10 = (undefined **)(puVar3 + -0x130);
        unaff_x22 = (undefined **)(puVar3 + -0xf0);
        ppuVar8 = (undefined **)0x10;
        ppuVar6 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuVar6 != (undefined **)0x0);
    }
    ppuVar11 = (undefined **)0x1;
code_r0x00010801998c:
    _objc_release(ppuVar5);
    _objc_release(ppuVar12);
    _objc_release(ppuVar7);
    ppuVar6 = *(undefined ***)(puVar3 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x70)) {
      return ppuVar11;
    }
    ___stack_chk_fail();
    *(undefined ***)(puVar3 + -0x1a0) = unaff_x28;
    *(undefined ***)(puVar3 + -0x198) = unaff_x27;
    *(undefined ***)(puVar3 + -400) = unaff_x26;
    *(undefined ***)(puVar3 + -0x188) = unaff_x25;
    *(undefined ***)(puVar3 + -0x180) = unaff_x24;
    *(undefined ***)(puVar3 + -0x178) = ppuVar11;
    *(undefined ***)(puVar3 + -0x170) = ppuVar5;
    *(undefined ***)(puVar3 + -0x168) = ppuVar12;
    *(undefined ***)(puVar3 + -0x160) = ppuVar7;
    *(undefined ***)(puVar3 + -0x158) = param_2;
    *(undefined1 **)(puVar3 + -0x150) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x148) = &SUB_1080199ec;
    in_x5 = ppuVar9;
    _objc_retain();
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar10);
    _objc_retain(unaff_x22);
    _objc_retain(ppuVar9);
    unaff_x25 = ppuVar9;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)ppuVar7 == 0) {
      unaff_x27 = (undefined **)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = ppuVar9;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)ppuVar7 & 1) == 0) {
      unaff_x27 = ppuVar9;
      if (unaff_x22 == (undefined **)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar10 == (undefined **)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        in_x5 = (undefined **)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (ppuVar10 != (undefined **)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        ppuVar7 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)(puVar3 + -0x1a8) = ppuVar7;
        in_x5 = (undefined **)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)(puVar3 + -0x1a8));
      }
      if (unaff_x22 == (undefined **)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined **)0x1;
    }
    if ((int)ppuVar8 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(ppuVar9);
      _objc_release(unaff_x22);
      _objc_release(ppuVar10);
      _objc_release(ppuVar4);
      _objc_release(ppuVar6);
      return unaff_x27;
    }
    puVar13 = &UNK_108019ae0;
    ppuVar5 = (undefined **)(puVar3 + -0x1b0);
    ppuVar7 = ppuVar4;
    ppuVar12 = ppuVar9;
    param_2 = ppuVar6;
    unaff_x23 = ppuVar9;
    unaff_x24 = ppuVar8;
    puVar2 = puVar3;
  } while( true );
}



/* Entry: 107ec2ccc; end: 107ec2cdf;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_107ec2ccc(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar8;
  undefined1 *unaff_x24;
  undefined1 *puVar9;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = *(undefined1 **)(param_1 + 0x20);
  puVar6 = &uStack_130;
  puVar2 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(puVar5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_120;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined1 **)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x23 = puVar9;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar9 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = puVar5;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar3 != unaff_x26);
      puVar3 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  puVar10 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_130;
  do {
    puVar7 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x20) = param_3;
    *(undefined1 **)((long)puVar1 + -0x18) = param_2;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar2;
    *(undefined **)((long)puVar1 + -8) = puVar10;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar3;
    param_3 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar2 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar9 = (undefined1 *)0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        param_2 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)param_2 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar5 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar5 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar7 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar9 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar8 = (undefined1 *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          param_2 = param_2 + 1;
        } while (puVar3 != param_2);
        puVar5 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar9 = (undefined1 *)0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar8 = (undefined1 *)0x1;
code_r0x00010801998c:
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar3 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar8;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar8;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar2;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar4;
    *(undefined1 **)((long)puVar1 + -0x158) = param_2;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    puVar2 = (undefined1 *)((long)puVar1 + -0x150);
    param_6 = puVar7;
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(puVar5);
    _objc_retain(unaff_x22);
    _objc_retain(puVar7);
    unaff_x25 = puVar7;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar4 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar7;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x27 = puVar7;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined1 *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (puVar5 != (undefined1 *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar4 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar4;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar9 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar7);
      _objc_release(unaff_x22);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_release(puVar3);
      return unaff_x27;
    }
    puVar10 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = param_3;
    puVar6 = (undefined8 *)puVar7;
    param_2 = puVar3;
    unaff_x23 = puVar7;
    unaff_x24 = puVar9;
  } while( true );
}



/* Entry: 107ec2ce0; end: 107ec2ce7; -[SCCloudDeleteEntriesOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107ec2ce0(void)

{
  return 0;
}



/* Entry: 107ec2ce8; end: 107ec2d27; -[SCCloudDeleteEntriesOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ec2ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0808e0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ec2d28; end: 107ec2e93; -[SCCloudDeleteEntriesOperation _deleteEntriesWithNetworker:dataObjectContext:memoriesAssetRepository:logger:performer:successHandler:failureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec2d28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107ec2e94;
  puStack_78 = &UNK_110a115b0;
  uStack_68 = param_9;
  uStack_70 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_90;
  _objc_retainBlock();
  FUN_107efa854(*(undefined8 *)(param_1 + _DAT_1127710b8),*(undefined8 *)(param_1 + _DAT_1127710bc),
                param_4,*(undefined1 *)(param_1 + _DAT_1127710c4),
                *(undefined1 *)(param_1 + _DAT_1127710c8),param_5,param_3,param_6,param_7,ppuVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 107ec2e94; end: 107ec2f87;  */

void FUN_107ec2e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c09a0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ec2f88; end: 107ec2f93;  */

void FUN_107ec2f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ec2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ec2f94; end: 107ec3053;  */

void FUN_107ec2f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99480(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_2,0,param_3,0,0,param_4,
                      &PTR____CFConstantStringClassReference_110ec29b8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ec3054; end: 107ec30c3; -[SCCloudDeleteEntriesOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec3054(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127710c0,0);
  _objc_storeStrong(param_1 + _DAT_1127710bc,0);
  _objc_storeStrong(param_1 + _DAT_1127710b8,0);
  _objc_storeStrong(param_1 + _DAT_1127710b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127710b0,0);
  return;
}



/* Entry: 107ec30c4; end: 107ec34df; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE initWithEntryId:title:autosaveTimeUtc:addSnapEntities:dataVaultEncryption:profile:userContext:memoriesExperimentService:] */

/* WARNING: Possible PIC construction at 0x000107ec31e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ec31e4) */
/* WARNING: Removing unreachable block (ram,0x000107ec3240) */
/* WARNING: Removing unreachable block (ram,0x000107ec3254) */
/* WARNING: Removing unreachable block (ram,0x000107ec3270) */
/* WARNING: Removing unreachable block (ram,0x000107ec31d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ec30c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_f8 = PTR_PTR_1126fb970;
  puVar1 = &uStack_100;
  puVar3 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    lVar6 = param_6;
    func_0x00010bf52a60();
    puVar2 = puRam0000000000000000;
    if (lVar6 != 0) goto code_r0x00010c23f220;
    lVar6 = param_6;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710cc);
    *(long *)((long)puVar1 + (long)_DAT_1127710cc) = lVar6;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127710d0;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127710d4;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127710d8;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar4);
    lVar6 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127710dc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(long *)((long)puVar1 + lVar7) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710e0);
    *(long *)((long)puVar1 + (long)_DAT_1127710e0) = lVar6;
    _objc_release(uVar4);
    lVar6 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710e4);
    *(long *)((long)puVar1 + (long)_DAT_1127710e4) = lVar6;
    _objc_release(uVar4);
    uVar4 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127710e8) = uVar4;
    _objc_release(uVar5);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127710ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127710ec) = uVar4;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_1127710f0;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127710f4;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010bf97e80(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar3;
code_r0x00010c23f220:
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_snap_11266d6b0);
  return puVar2;
}



/* Entry: 107ec34e0; end: 107ec34f7;  */

void FUN_107ec34e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107ec34f8; end: 107ec358b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec34f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127710e8);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bdc1800(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ec358c; end: 107ec3593; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE type] */

undefined8 FUN_107ec358c(void)

{
  return 6;
}



/* Entry: 107ec3594; end: 107ec359b; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE analyticsType] */

undefined8 FUN_107ec3594(void)

{
  return 0xc;
}



/* Entry: 107ec359c; end: 107ec35cb; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec359c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710cc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ec35cc; end: 107ec363b; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec35cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_1127710d4);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d82f0);
    func_0x00010c03aae0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec363c; end: 107ec36b7; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec363c(void)

{
  _objc_alloc(PTR_PTR_1126d82f0);
  func_0x00010c03aae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec36b8; end: 107ec3bc3; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ****
FUN_107ec36b8(undefined8 ****param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar4 = param_3;
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar3 = puVar4;
  func_0x00010010fab4(puVar4,PTR_DAT_1126a5a78);
  if (puVar4 == (undefined8 *)0x0 || (int)puVar3 == 0) {
    ppppuVar20 = param_1;
    ppppuVar18 = (undefined8 ****)0x0;
  }
  else {
    puStack_f8 = PTR_PTR_1126fb970;
    ppppuVar20 = &pppuStack_100;
    pppuStack_100 = param_1;
    _objc_msgSendSuper2(ppppuVar20,PTR_s_init_1125d9248);
    if (ppppuVar20 != (undefined8 ****)0x0) {
      _objc_retain(param_3);
      puVar2 = param_4;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710cc);
      *(undefined **)((long)ppppuVar20 + (long)_DAT_1127710cc) = puVar2;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710d0);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710d0) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710d4);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710d4) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010bf12220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710d8);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710d8) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_DAT_1127710dc;
      uVar8 = *(undefined8 *)((long)ppppuVar20 + lVar14);
      *(undefined8 **)((long)ppppuVar20 + lVar14) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010bf6f620();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710e0);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710e0) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010c0ce260();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_1127710e4;
      uVar8 = *(undefined8 *)((long)ppppuVar20 + lVar10);
      *(undefined8 **)((long)ppppuVar20 + lVar10) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710e8);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710e8) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710ec);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710ec) = puVar4;
      _objc_release(uVar8);
      puVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710f0);
      *(undefined8 **)((long)ppppuVar20 + (long)_DAT_1127710f0) = puVar4;
      _objc_release(uVar8);
      uVar17 = *(ulong *)((long)ppppuVar20 + lVar14);
      func_0x00010bf529e0();
      uVar12 = *(ulong *)((long)ppppuVar20 + lVar10);
      func_0x00010bf529e0();
      if (uVar12 < uVar17) {
        uVar8 = *(undefined8 *)((long)ppppuVar20 + lVar14);
        func_0x00010bf529e0();
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)((long)ppppuVar20 + lVar10);
        *(undefined8 *)((long)ppppuVar20 + lVar10) = uVar8;
        _objc_release(uVar23);
      }
      puVar4 = param_3;
      func_0x00010bf8b0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar4 != (undefined8 *)0x0) {
        func_0x00010bf529e0(*(undefined8 *)((long)ppppuVar20 + lVar14));
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lVar19 = *(long *)((long)ppppuVar20 + lVar14);
        _objc_retain(lVar19);
        puVar5 = &uStack_140;
        puVar6 = auStack_f0;
        param_5 = 0x10;
        lVar10 = lVar19;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          lVar15 = *plStack_130;
          do {
            lVar13 = 0;
            do {
              if (*plStack_130 != lVar15) {
                _objc_enumerationMutation(lVar19);
              }
              lVar21 = *(long *)(lStack_138 + lVar13 * 8);
              lVar16 = lVar21;
              func_0x00010bf8b0c0();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = lVar16;
              func_0x00010c08fa60();
              _objc_release(lVar16);
              if (lVar22 == 0) {
                puVar5 = param_3;
                func_0x00010bf8b0e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar21);
                _objc_release(puVar5);
                if (puVar4 != (undefined8 *)0x0) {
                  puVar6 = PTR_PTR_1126bf910;
                  func_0x00010c2aebc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar24 = puVar6;
                  func_0x00010c192ce0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar24;
                  func_0x00010bf21f60();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar24);
                  _objc_release(puVar6);
                  func_0x00010befa120(puVar2);
                  _objc_release(puVar7);
                }
                _objc_release(puVar4);
              }
              else {
                func_0x00010befa120(puVar2);
              }
              lVar13 = lVar13 + 1;
            } while (lVar10 != lVar13);
            puVar5 = &uStack_140;
            puVar6 = auStack_f0;
            param_5 = 0x10;
            lVar10 = lVar19;
            func_0x00010bf52a60();
          } while (lVar10 != 0);
        }
        _objc_release(lVar19);
        uVar8 = *(undefined8 *)((long)ppppuVar20 + lVar14);
        *(undefined **)((long)ppppuVar20 + lVar14) = puVar2;
        _objc_release(uVar8);
      }
      _objc_release(param_3);
    }
    _objc_retain(ppppuVar20);
    ppppuVar18 = ppppuVar20;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppuVar18;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar8);
    ppppuVar20 = (undefined8 ****)0x0;
    goto LAB_107ec4130;
  }
  lVar19 = (long)_DAT_1127710dc;
  lVar14 = *(long *)((long)ppppuVar20 + lVar19);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  func_0x00010bfed480();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar14;
  func_0x00010bf529e0();
  puVar24 = puVar2;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (puVar24 == (undefined *)0x0) {
LAB_107ec3d44:
    if (lVar10 != 0 || bVar1) goto LAB_107ec3dd0;
    _objc_retain(ppppuVar20);
  }
  else {
    lVar15 = *(long *)((long)ppppuVar20 + (long)_DAT_1127710d8);
    if (lVar15 != 0) {
      puVar24 = puVar2;
      func_0x00010bf12220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0();
      bVar1 = lVar15 == -1;
      _objc_release(puVar24);
      goto LAB_107ec3d44;
    }
    bVar1 = true;
LAB_107ec3dd0:
    lVar22 = *(long *)((long)ppppuVar20 + lVar19);
    _objc_retain(lVar22);
    lVar16 = *(long *)((long)ppppuVar20 + (long)_DAT_1127710e0);
    _objc_retain(lVar16);
    uVar23 = *(undefined8 *)((long)ppppuVar20 + (long)_DAT_1127710e4);
    _objc_retain(uVar23);
    puVar24 = *(undefined **)((long)ppppuVar20 + (long)_DAT_1127710d8);
    _objc_retain(puVar24);
    lVar13 = lVar16;
    lVar15 = lVar22;
    uVar8 = uVar23;
    if (lVar10 != 0) {
      lVar10 = lVar22;
      func_0x00010c0d3c80();
      lVar21 = lVar16;
      func_0x00010c0d3c80();
      uVar9 = uVar23;
      func_0x00010c0d3c80();
      func_0x00010c12d480(lVar10);
      func_0x00010c12d480(lVar21);
      func_0x00010c12d480(uVar9);
      lVar15 = lVar10;
      func_0x00010bf51e00();
      _objc_release(lVar22);
      lVar13 = lVar21;
      func_0x00010bf51e00();
      _objc_release(lVar16);
      uVar8 = uVar9;
      func_0x00010bf51e00();
      _objc_release(uVar23);
      _objc_release(uVar9);
      _objc_release(lVar21);
      _objc_release(lVar10);
    }
    puVar7 = puVar24;
    if (bVar1) {
      puVar7 = puVar2;
      func_0x00010bf12220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
    }
    lVar10 = lVar15;
    func_0x00010bf529e0();
    if ((lVar10 == 0) || (lVar10 = lVar13, func_0x00010bf529e0(), lVar10 == 0)) {
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = 2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(uVar23);
      ppppuVar20 = (undefined8 ****)0x0;
    }
    else {
      puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)((long)ppppuVar20 + lVar19);
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        uVar17 = 0;
        do {
          puVar11 = PTR_PTR_1126d7f18;
          _objc_alloc(PTR_PTR_1126d7f18);
          lVar10 = lVar15;
          func_0x00010c0dfd40(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar13;
          func_0x00010c0dfd40(lVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar8;
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00e960(puVar11);
          _objc_release(uVar23);
          _objc_release(lVar16);
          _objc_release(lVar10);
          func_0x00010befa120(puVar24);
          _objc_release(puVar11);
          uVar17 = uVar17 + 1;
          uVar12 = *(ulong *)((long)ppppuVar20 + lVar19);
          func_0x00010bf529e0();
        } while (uVar17 < uVar12);
      }
      ppppuVar20 = (undefined8 ****)PTR_PTR_1126d82f8;
      _objc_alloc(PTR_PTR_1126d82f8);
      func_0x00010c010340();
    }
    _objc_release(puVar24);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(lVar13);
    _objc_release(lVar15);
  }
  _objc_release(lVar14);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(puVar5);
  puVar24 = puVar6;
LAB_107ec4130:
  _objc_release(puVar24);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar20);
  return ppppuVar20;
}



/* Entry: 107ec3bc4; end: 107ec4183; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec3bc4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar16 = (long)_DAT_1127710d4;
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + lVar16),param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    uVar18 = *(undefined8 *)(param_1 + _DAT_1127710cc);
    puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        *(undefined8 *)(param_1 + lVar16));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5,param_2,uVar18,puVar19,0,0,0,1,uVar4);
    _objc_release(uVar4);
    param_1 = (undefined *)0x0;
    goto LAB_107ec4130;
  }
  lVar15 = (long)_DAT_1127710dc;
  lVar11 = *(long *)(param_1 + lVar15);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107ec4184;
  puStack_98 = &UNK_110a11640;
  _objc_retain(param_4);
  puStack_90 = param_4;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_6);
  uStack_80 = param_6;
  puStack_78 = param_1;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010bfed480(lVar11,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf529e0();
  puVar19 = puVar2;
  func_0x00010bf12220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (puVar19 == (undefined *)0x0) {
LAB_107ec3d44:
    if (lVar3 != 0 || bVar1) goto LAB_107ec3dd0;
    _objc_retain(param_1);
  }
  else {
    lVar12 = *(long *)(param_1 + _DAT_1127710d8);
    if (lVar12 != 0) {
      puVar19 = puVar2;
      func_0x00010bf12220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf433a0(lVar12,param_2,puVar19);
      bVar1 = lVar12 == -1;
      _objc_release(puVar19);
      goto LAB_107ec3d44;
    }
    bVar1 = true;
LAB_107ec3dd0:
    lVar17 = *(long *)(param_1 + lVar15);
    _objc_retain(lVar17);
    lVar13 = *(long *)(param_1 + _DAT_1127710e0);
    _objc_retain(lVar13);
    uVar18 = *(undefined8 *)(param_1 + _DAT_1127710e4);
    _objc_retain(uVar18);
    puVar19 = *(undefined **)(param_1 + _DAT_1127710d8);
    _objc_retain(puVar19);
    lVar6 = lVar13;
    lVar12 = lVar17;
    uVar4 = uVar18;
    if (lVar3 != 0) {
      lVar3 = lVar17;
      func_0x00010c0d3c80();
      lVar5 = lVar13;
      func_0x00010c0d3c80();
      uVar10 = uVar18;
      func_0x00010c0d3c80();
      func_0x00010c12d480(lVar3,param_2,lVar11);
      func_0x00010c12d480(lVar5,param_2,lVar11);
      func_0x00010c12d480(uVar10,param_2,lVar11);
      lVar12 = lVar3;
      func_0x00010bf51e00();
      _objc_release(lVar17);
      lVar6 = lVar5;
      func_0x00010bf51e00();
      _objc_release(lVar13);
      uVar4 = uVar10;
      func_0x00010bf51e00();
      _objc_release(uVar18);
      _objc_release(uVar10);
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    puVar7 = puVar19;
    if (bVar1) {
      puVar7 = puVar2;
      func_0x00010bf12220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
    }
    lVar3 = lVar12;
    func_0x00010bf529e0();
    if ((lVar3 == 0) || (lVar3 = lVar6, func_0x00010bf529e0(), lVar3 == 0)) {
      uVar10 = *(undefined8 *)(param_1 + _DAT_1127710cc);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          *(undefined8 *)(param_1 + lVar16));
      _objc_retainAutoreleasedReturnValue();
      uVar18 = 2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5,param_2,uVar10,puVar19,0,0,0,2,uVar18);
      _objc_release(uVar18);
      param_1 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = *(long *)(param_1 + lVar15);
      func_0x00010bf529e0();
      if (lVar16 != 0) {
        uVar14 = 0;
        do {
          puVar8 = PTR_PTR_1126d7f18;
          _objc_alloc(PTR_PTR_1126d7f18);
          lVar16 = lVar12;
          func_0x00010c0dfd40(lVar12,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar6;
          func_0x00010c0dfd40(lVar6,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar4;
          func_0x00010c0dfd40(uVar4,param_2,uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00e960(puVar8,param_2,0,lVar16,lVar3,uVar18);
          _objc_release(uVar18);
          _objc_release(lVar3);
          _objc_release(lVar16);
          func_0x00010befa120(puVar19,param_2,puVar8);
          _objc_release(puVar8);
          uVar14 = uVar14 + 1;
          uVar9 = *(ulong *)(param_1 + lVar15);
          func_0x00010bf529e0();
        } while (uVar14 < uVar9);
      }
      param_1 = PTR_PTR_1126d82f8;
      _objc_alloc(PTR_PTR_1126d82f8);
      func_0x00010c010340();
    }
    _objc_release(puVar19);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar12);
  }
  _objc_release(lVar11);
  _objc_release(puStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  puVar19 = puStack_90;
LAB_107ec4130:
  _objc_release(puVar19);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ec4184; end: 107ec42f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107ec4184(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af4d0;
  lVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (puVar2 == (undefined *)0x0) {
    lVar1 = param_2;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126af4d0;
    if (lVar1 == 0) {
      lVar1 = param_2;
      FUN_107ee8f54(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if ((int)lVar1 != 0) goto LAB_107ec4268;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf8b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (puVar3 != (undefined *)0x0) {
LAB_107ec4268:
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)_DAT_1127710e8);
        lVar1 = param_2;
        func_0x00010c241220(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c07b240(uVar4);
        uVar5 = uVar7;
        func_0x00010c0719c0(uVar7);
        uVar6 = (uint)uVar4 ^ (uint)uVar5;
        _objc_release(uVar7);
        goto LAB_107ec42cc;
      }
    }
  }
  uVar6 = 1;
LAB_107ec42cc:
  _objc_release(puVar2);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 107ec42f4; end: 107ec477b; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ec42f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc830;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d500();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127710dc;
  lVar4 = *(long *)(param_1 + lVar13);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar14 = 0;
    lVar4 = (long)_DAT_1127710e0;
    do {
      puVar6 = PTR_PTR_1126bf8e8;
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126bf8f0;
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127710e4);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar8 = PTR_PTR_1126bc7f8;
      uVar5 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c1d7bc0(puVar8);
      puVar9 = puVar6;
      func_0x00010c0fd8e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar8);
      _objc_release(puVar9);
      puVar9 = puVar7;
      func_0x00010c0fd920(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar8);
      _objc_release(puVar9);
      func_0x00010c1a7000(puVar8);
      puVar9 = puVar8;
      func_0x00010c0fd8c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar9);
      puVar9 = puVar2;
      func_0x00010c245780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c241220(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010b704538(puVar9,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar2);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126d82c0;
      func_0x00010c247f00(puVar2);
      func_0x00010c247520(puVar8);
      func_0x00010bf977a0(puVar9);
      func_0x00010c207320(puVar2);
      puVar9 = puVar8;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf59960(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf433a0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (puVar11 == (undefined *)0x1) {
        puVar9 = puVar2;
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar9 == (undefined *)0x0) {
          puVar9 = puVar8;
          func_0x00010bf59960(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c185360(puVar2);
          _objc_release(puVar9);
        }
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      uVar14 = uVar14 + 1;
      uVar12 = *(ulong *)(param_1 + lVar13);
      func_0x00010bf529e0();
    } while (uVar14 < uVar12);
  }
  func_0x00010c284fa0(puVar2);
  puVar8 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380(PTR_PTR_1126af4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c066e00(puVar2);
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar8 == (undefined *)0x0) {
    func_0x00010c1a1e00(puVar2);
    func_0x00010c222da0(puVar2);
  }
  func_0x00010c0f7a20(puVar2);
  func_0x00010c1da4e0(puVar2);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 107ec477c; end: 107ec4913; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE _indexSetForInserting:into:] */

void FUN_107ec477c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf529e0();
  if (uVar9 == 0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar2 = param_4;
      func_0x00010bf529e0();
      if (uVar2 <= uVar8) break;
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf59960(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf433a0(uVar4,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (uVar6 == 1) {
        func_0x00010bef92c0(puVar1,param_2,uVar9 + uVar8);
        uVar9 = uVar9 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar9 < uVar2);
  }
  for (; uVar2 = param_3, func_0x00010bf529e0(), uVar9 < uVar2; uVar9 = uVar9 + 1) {
    func_0x00010bef92c0(puVar1,param_2,uVar8 + uVar9);
  }
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ec4914; end: 107ec491b; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ec4914(void)

{
  return 1;
}



/* Entry: 107ec491c; end: 107ec4d0f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Possible PIC construction at 0x000107ec4a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ec4a88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec491c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  lVar11 = (long)_DAT_1127710dc;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + (long)puVar13 * 8);
        uVar5 = uVar10;
        func_0x00010bf19ac0();
        if ((int)uVar5 == 1) goto code_r0x00010c241220;
        puVar13 = puVar13 + 1;
      } while (puVar4 != puVar13);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126d8270;
  _objc_alloc();
  func_0x00010c0093a0();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  FUN_107ee8930(uVar6,*(undefined8 *)(param_1 + _DAT_1127710e0),
                *(undefined8 *)(param_1 + _DAT_1127710e4));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127710d4);
  uVar5 = param_3;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_107ec4d18;
  puStack_168 = &UNK_110a11150;
  uStack_140 = in_stack_00000020;
  uStack_138 = in_stack_00000028;
  lStack_160 = param_1;
  uStack_158 = param_7;
  uStack_150 = param_6;
  uStack_148 = param_3;
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar10 = uVar6;
  FUN_107eecc84(param_3,uVar6,uVar9,0,puVar3,puVar4,param_6,param_7,param_4,0,0xc,uVar8,
                in_stack_00000020,&puStack_180);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  puVar13 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ec4d10; end: 107ec4d17;  */

void FUN_107ec4d10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ec4d18; end: 107ec4dcb;  */

void FUN_107ec4d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed77c0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ec4dcc; end: 107ec50bb; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec4dcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
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
  lVar7 = (long)_DAT_1127710d4;
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + lVar7),param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc830;
  puStack_140 = puVar1;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = param_3;
  func_0x00010c0b4ca0();
  func_0x00010c1fce60(puVar2,param_2,param_3);
  puVar1 = puVar2;
  func_0x00010c0f7a20(puVar2);
  func_0x00010c1da4e0(puVar2,param_2,(int)puVar1 + -1);
  func_0x00010c210e00(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_1127710d8));
  puStack_150 = puVar2;
  func_0x00010c210f40(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_1127710ec));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar10 = *(long *)(param_1 + _DAT_1127710dc);
  lStack_148 = param_1;
  _objc_retain(lVar10);
  lVar7 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar8 = *plStack_120;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x28 = PTR_PTR_1126af4d0;
        uVar3 = *(undefined8 *)(lStack_128 + param_1 * 8);
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0(unaff_x28,param_2,uVar3,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (unaff_x28 != (undefined *)0x0) {
          puVar2 = PTR_PTR_1126bc7f8;
          func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7000();
          func_0x00010befa120(puVar1,param_2,unaff_x28);
          _objc_release(puVar2);
        }
        _objc_release(unaff_x28);
        param_1 = param_1 + 1;
      } while (lVar7 != param_1);
      lVar7 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x27 = 0;
    } while (lVar7 != 0);
  }
  _objc_release(lVar10);
  puVar9 = puStack_140;
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0(PTR_PTR_1126af4d0,param_2,puStack_140,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lStack_148;
  func_0x00010be38f00(lStack_148,param_2,puVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_150;
  lVar10 = lVar7;
  func_0x00010c0670a0(puStack_150,param_2,puVar1,lVar7);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_release(uStack_158);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(uStack_138);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = &uStack_280;
    puStack_188 = puVar2;
    puStack_178 = puVar9;
    pcStack_168 = FUN_107ec50bc;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = (undefined8 *)puVar1;
    puStack_1b0 = unaff_x28;
    uStack_1a8 = unaff_x27;
    puStack_1a0 = puVar4;
    lStack_198 = param_1;
    lStack_190 = lVar7;
    uStack_180 = param_4;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(lVar10);
    if (puVar1 != (undefined *)0x0) {
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar5 = puVar6;
      if (puVar2 != (undefined *)0x0) {
        lVar7 = *plStack_270;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_270 != lVar7) {
              _objc_enumerationMutation(puVar1);
            }
            lVar8 = lVar10;
            func_0x00010c13a8c0(lVar10,param_2,*(undefined8 *)(lStack_278 + (long)puVar9 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bb0c0();
            _objc_release(lVar8);
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar2 = puVar1;
          puVar5 = &uStack_280;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
    }
    _objc_release(lVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    if (puVar5 != (undefined8 *)0x0) {
      pcStack_288 = FUN_107ec51e8;
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_107ec5254;
      puStack_2a0 = &UNK_11085a2d8;
      puStack_298 = puVar1;
      ppuStack_290 = &puStack_170;
      func_0x00010c0b8600(puVar5,param_2,&puStack_2b8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec50bc; end: 107ec51e7; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ec50bc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined1 *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar3 = puVar4;
    if (puVar1 != (undefined1 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = param_4;
          func_0x00010c13a8c0(param_4,param_2,*(undefined8 *)(lStack_118 + (long)puVar6 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar2);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = param_3;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (puVar3 != (undefined8 *)0x0) {
      pcStack_128 = FUN_107ec51e8;
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_107ec5254;
      puStack_140 = &UNK_11085a2d8;
      puStack_138 = param_3;
      puStack_130 = &stack0xfffffffffffffff0;
      func_0x00010c0b8600(puVar3,param_2,&puStack_158);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107ec51e8; end: 107ec5253; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:] */

void FUN_107ec51e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107ec5254;
    puStack_20 = &UNK_11085a2d8;
    uStack_18 = param_1;
    func_0x00010c0b8600(param_3,param_2,&puStack_38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ec5254; end: 107ec5333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec5254(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c079400();
  func_0x00010c23f7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ec5334; end: 107ec54df; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec5334(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127710d4),
                      &PTR____CFConstantStringClassReference_110e29c18);
  lVar4 = (long)_DAT_1127710dc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a11690);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e268d8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a116b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec28b8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127710cc));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_1127710f0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ec54e0; end: 107ec558f;  */

void FUN_107ec54e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ec5590; end: 107ec56ab; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec5590(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + _DAT_1127710dc);
  _objc_retain(lVar4);
  lVar7 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar7 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          bVar1 = false;
          goto LAB_107ec566c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar7 != 0);
  }
  bVar1 = true;
LAB_107ec566c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar1;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uVar5 = *(ulong *)(lVar4 + _DAT_1127710dc);
  _objc_retain(uVar5);
  uVar3 = uVar5;
  func_0x00010bf52a60(uVar5,param_2,&uStack_220,auStack_1d8,0x10);
  if (uVar3 != 0) {
    lVar7 = *plStack_210;
    do {
      uVar9 = 0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        lVar4 = *(long *)(lStack_218 + uVar9 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
          bVar1 = false;
          goto LAB_107ec5788;
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar3 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_220,auStack_1d8,0x10);
    } while (uVar3 != 0);
  }
  bVar1 = true;
LAB_107ec5788:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return bVar1;
  }
  ___stack_chk_fail();
  uVar3 = uVar5;
  func_0x00010bf879c0();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(uVar5 + (long)_DAT_1127710dc);
    func_0x00010bfaea20(lVar4,param_2,&PTR___NSConcreteGlobalBlock_110a116d0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf529e0();
    bVar1 = lVar7 == 0;
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107ec56ac; end: 107ec57c7; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec56ac(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar4 = *(ulong *)(param_1 + _DAT_1127710dc);
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010bf52a60(uVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (uVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      uVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(uVar4);
        }
        lVar3 = *(long *)(lStack_108 + uVar6 * 8);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          bVar1 = false;
          goto LAB_107ec5788;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar2 != 0);
  }
  bVar1 = true;
LAB_107ec5788:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar1;
  }
  ___stack_chk_fail();
  uVar2 = uVar4;
  func_0x00010bf879c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(uVar4 + (long)_DAT_1127710dc);
    func_0x00010bfaea20(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110a116d0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar5 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107ec57c8; end: 107ec5867; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ec57c8(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010bf879c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + (long)_DAT_1127710dc);
    func_0x00010bfaea20(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110a116d0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107ec5868; end: 107ec586f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate] */

undefined8 FUN_107ec5868(void)

{
  return 1;
}



/* Entry: 107ec5870; end: 107ec5877; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE needRunImmediately] */

undefined8 FUN_107ec5870(void)

{
  return 0;
}



/* Entry: 107ec5878; end: 107ec587f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107ec5878(void)

{
  return 0;
}



/* Entry: 107ec5880; end: 107ec5887; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107ec5880(void)

{
  return 0;
}



/* Entry: 107ec5888; end: 107ec588f; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ec5888(void)

{
  return 0;
}



/* Entry: 107ec5890; end: 107ec58bf; -[SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ec5890(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127710dc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


