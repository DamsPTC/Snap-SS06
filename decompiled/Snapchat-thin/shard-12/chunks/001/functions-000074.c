/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cfdc8c; end: 108cfdfd7; -[SCMultiSnapVideoSegmentedExportSession exportSegmentsWithConfig:completionQueue:completionHandler:] */

void FUN_108cfdc8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0ef120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_3;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == lVar4) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x108cfddcc;
    puStack_78 = &UNK_1108465d0;
    _objc_retain(param_3);
    lStack_70 = param_3;
    lStack_68 = param_1;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_90);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_70);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108cfdfd8; end: 108cfe183; -[SCMultiSnapVideoSegmentedExportSession batchExportSegmentsWithConfig:completionQueue:completionHandler:] */

void FUN_108cfdfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = param_3;
  func_0x00010c26f640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf9d1a0(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108cfe184; end: 108cfe31f;  */

void FUN_108cfe184(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) goto LAB_108cfe2f8;
    *(undefined1 *)(lVar3 + 0x18) = 1;
    func_0x00010bf2e3c0(*(undefined8 *)(param_1 + 0x38));
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108cfe338;
    puStack_88 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    uStack_78 = uVar4;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x000107c27d8c(uVar5,&puStack_a0);
    _objc_release(uStack_80);
    uVar4 = uStack_78;
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != lVar3) goto LAB_108cfe2f8;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108cfe320;
    puStack_58 = &UNK_11084aaa8;
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar6;
    _objc_retain(uVar4);
    uStack_50 = uVar4;
    func_0x000107c27d8c(uVar5,&puStack_70);
    _objc_release(uStack_50);
    uVar4 = uStack_48;
  }
  _objc_release(uVar4);
LAB_108cfe2f8:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108cfe320; end: 108cfe34f;  */

void FUN_108cfe320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108cfe334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 108cfe350; end: 108cfe3a7; -[SCMultiSnapVideoSegmentedExportSession cancelExport] */

void FUN_108cfe350(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108cfe3a8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 108cfe3a8; end: 108cfe4d7;  */

void FUN_108cfe3a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  func_0x00010c178260(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf9d1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e3c0();
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c178260(*(undefined8 *)(lStack_108 + lVar6 * 8),param_2,1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
      uVar1 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + 0x20) != 0) {
    return;
  }
  pcStack_118 = FUN_108cfe4d8;
  lVar5 = *(long *)(lVar2 + 0x28);
  uStack_130 = uVar1;
  lStack_128 = lVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    _objc_release(uVar3);
    func_0x00010c12d3c0(*(undefined8 *)(lVar2 + 0x28),param_2,0);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x108cfe580;
    puStack_140 = &UNK_110842e18;
    lStack_138 = lVar2;
    func_0x00010be98140(lVar2,param_2,*(undefined8 *)(lVar2 + 0x20),&puStack_158);
  }
  return;
}



/* Entry: 108cfe4d8; end: 108cfe5cf; -[SCMultiSnapVideoSegmentedExportSession _runNextTaskIfNeeded] */

void FUN_108cfe4d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x28),param_2,0);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x108cfe580;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010be98140(param_1,param_2,*(undefined8 *)(param_1 + 0x20),&puStack_48);
  }
  return;
}



/* Entry: 108cfe5d0; end: 108cfe8db; -[SCMultiSnapVideoSegmentedExportSession _runTask:completionBlock:] */

void FUN_108cfe5d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *unaff_x22;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf2f680();
  puVar3 = PTR_PTR_1126ba150;
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c2991a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e420(puVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x10));
    _objc_release(lVar2);
    if ((int)puVar3 == 0) {
      lVar2 = param_3;
      func_0x00010c2307e0();
      puVar4 = (undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
      if ((int)lVar2 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
        func_0x000109128224();
        puVar4 = (undefined8 *)PTR__AVAssetExportPresetHEVCHighestQuality_110347eb0;
        if (iVar1 == 0) {
          puVar4 = (undefined8 *)PTR__AVAssetExportPresetHighestQuality_110347eb8;
        }
      }
      unaff_x22 = (undefined *)*puVar4;
      _objc_retain(unaff_x22);
      puVar3 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010c2991a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4280(puVar3,param_2,lVar2,unaff_x22);
      _objc_release(lVar2);
      func_0x00010c198fc0(param_3,param_2,puVar3);
      lVar2 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7200(puVar3,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010c1d6fc0(puVar3,param_2,*(undefined8 *)PTR__AVFileTypeMPEG4_110348008);
      if (param_3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c26f620(&uStack_a0,param_3);
      }
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      func_0x00010c214ec0(puVar3,param_2,&uStack_d0);
      func_0x00010c200aa0(puVar3,param_2,1);
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_108cfe8dc;
      puStack_f8 = &UNK_1108465d0;
      lStack_f0 = param_1;
      _objc_retain(param_3);
      lStack_e8 = param_3;
      puStack_e0 = puVar3;
      _objc_retain(param_4);
      uStack_d8 = param_4;
      _objc_retain(puVar3);
      func_0x00010bf9cee0(puVar3,param_2,&puStack_110);
      _objc_release(uStack_d8);
      _objc_release(puStack_e0);
      _objc_release(lStack_e8);
      _objc_release(puVar3);
      _objc_release(unaff_x22);
      goto LAB_108cfe894;
    }
    func_0x00010c20f880(param_3,param_2,0);
    unaff_x22 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e87178;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&uStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(unaff_x22,param_2,&PTR____CFConstantStringClassReference_110ef2718,0x3e9,
                        puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(param_3,param_2,unaff_x22);
    _objc_release(unaff_x22);
    _objc_release(puVar3);
  }
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
LAB_108cfe894:
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_118 = FUN_108cfe8dc;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x18);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108cfe98c;
    puStack_160 = &UNK_11084a9e8;
    puStack_140 = unaff_x22;
    lStack_138 = param_1;
    uStack_130 = param_4;
    lStack_128 = param_3;
    puStack_120 = &stack0xfffffffffffffff0;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uStack_158 = uVar5;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uStack_150 = uVar6;
    _objc_retain(uVar5);
    uStack_148 = uVar5;
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_178);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
    return;
  }
  return;
}



/* Entry: 108cfe8dc; end: 108cfe98b;  */

void FUN_108cfe8dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108cfe98c;
  puStack_50 = &UNK_11084a9e8;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 108cfe98c; end: 108cfea13;  */

void FUN_108cfe98c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c198fc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf2f680();
  if ((uVar1 & 1) == 0) {
    func_0x00010c252d60(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c20f880(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c261600();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf987e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108cfea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 108cfea14; end: 108cfeb37; -[SCMultiSnapVideoSegmentedExportSession _callbackForTask:] */

void FUN_108cfea14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf44140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x108cfec18;
      puStack_58 = &UNK_110842e18;
      _objc_retain(param_3);
      lStack_50 = param_3;
      func_0x000107c312d0("APPSTORE",&puStack_70);
      lVar1 = lStack_50;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf44140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_108cfeb38;
      puStack_30 = &UNK_110842e18;
      _objc_retain(param_3);
      lStack_28 = param_3;
      func_0x000107c27d8c(lVar1,&puStack_48);
      _objc_release(lVar1);
      lVar1 = lStack_28;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108cfeb38; end: 108cfecf7;  */

void FUN_108cfeb38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uVar2 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_70);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010c261600(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2f680(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,&uStack_70,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  return;
}



/* Entry: 108cfecf8; end: 108cfecff; -[SCMultiSnapVideoSegmentedExportSession shouldForceReencode] */

undefined1 FUN_108cfecf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 108cfed00; end: 108cfed07; -[SCMultiSnapVideoSegmentedExportSession setShouldForceReencode:] */

void FUN_108cfed00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108cfed08; end: 108cfed5b; -[SCMultiSnapVideoSegmentedExportSession .cxx_destruct] */

void FUN_108cfed08(long param_1)

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



/* Entry: 108cfed5c; end: 108cfee0f; -[SCMultiSnapVideoSegmentedExportSessionConfig initWithTimeRanges:outputUrls:shouldForceReencode:] */

undefined1 *
FUN_108cfed5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fe4c8;
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



/* Entry: 108cfee10; end: 108cfee33; -[SCMultiSnapVideoSegmentedExportSessionConfig copyWithZone:] */

undefined8 FUN_108cfee10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cfee34; end: 108cfeeab; -[SCMultiSnapVideoSegmentedExportSessionConfig hash] */

undefined8 * FUN_108cfee34(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108cfef3c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108cfef48;
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
          goto LAB_108cfef48;
        }
        goto LAB_108cfef3c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108cfef48:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108cfeeac; end: 108cfef63; -[SCMultiSnapVideoSegmentedExportSessionConfig isEqual:] */

long FUN_108cfeeac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108cfef3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108cfef48;
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
          goto LAB_108cfef48;
        }
        goto LAB_108cfef3c;
      }
    }
    lVar3 = 0;
  }
LAB_108cfef48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108cfef64; end: 108cfef6b; -[SCMultiSnapVideoSegmentedExportSessionConfig timeRanges] */

undefined8 FUN_108cfef64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cfef6c; end: 108cfef73; -[SCMultiSnapVideoSegmentedExportSessionConfig outputUrls] */

undefined8 FUN_108cfef6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cfef74; end: 108cfef7b; -[SCMultiSnapVideoSegmentedExportSessionConfig shouldForceReencode] */

undefined1 FUN_108cfef74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cfef7c; end: 108cfefab; -[SCMultiSnapVideoSegmentedExportSessionConfig .cxx_destruct] */

void FUN_108cfef7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cfefac; end: 108cff273; -[SCDrawingGalleryPoint toDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfefac(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined *puVar13;
  ulong uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11277ae7c;
  puVar13 = *(undefined **)(param_1 + lVar10);
  if (puVar13 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_opt_new(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
    func_0x00010c1d02e0();
    func_0x00010c1c3b00(puVar3);
    puVar13 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c09e2e0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar3);
    _objc_release(puVar13);
    puStack_f8 = PTR_PTR_1126fe4d0;
    puVar4 = &uStack_100;
    uStack_100 = param_1;
    _objc_msgSendSuper2(puVar4,PTR_s_toDictionary_11267a140);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_retain(puVar6);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (ulong *)0x0) {
      puVar12 = (ulong *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        uVar7 = param_1;
        func_0x00010c296f60();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar8 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar13);
        uVar1 = uVar7;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar7);
        if (uVar1 != 0) {
          puVar13 = puVar3;
          func_0x00010c25d4c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010c0de9e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar13);
        }
        _objc_release(uVar1);
        puVar12 = (ulong *)((long)puVar12 + 1);
      } while (puVar4 != puVar12);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + lVar10);
    *(ulong **)(param_1 + lVar10) = puVar4;
    _objc_release(uVar11);
    puVar13 = *(undefined **)(param_1 + lVar10);
    _objc_retain(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar13;
    _objc_retain(puVar13);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + _DAT_11277ae7c,0);
  return;
}



/* Entry: 108cff274; end: 108cff287; -[SCDrawingGalleryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cff274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ae7c,0);
  return;
}



/* Entry: 108cff288; end: 108cff3bb;  */

void FUN_108cff288(int param_1,ulong *param_2)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  func_0x00010bfc9760(param_1,param_2,&dStack_28,&dStack_30,&dStack_38,&dStack_40);
  if ((param_2 != (ulong *)0x0) && (param_1 != 0)) {
    *param_2 = (long)(dStack_28 * 255.0) << 0x10 | (long)(dStack_40 * 255.0) << 0x18 |
               (long)(dStack_30 * 255.0) << 8 | (long)(dStack_38 * 255.0);
  }
  return;
}



/* Entry: 108cff3bc; end: 108cff797;  */

void FUN_108cff3bc(double param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined *puStack_458;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar27 = param_1;
  dVar25 = param_2;
  _objc_retain();
  puVar16 = param_3;
  func_0x00010bf529e0();
  puStack_238 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar16 == (undefined *)0x0) {
    puStack_238 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar27 = 0.0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _objc_retain(param_3);
    param_5 = &uStack_1d0;
    param_6 = auStack_110;
    param_7 = 0x10;
    puStack_230 = param_3;
    func_0x00010bf52a60();
    if (puStack_230 != (undefined *)0x0) {
      lVar15 = *plStack_1c0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_1c0 != lVar15) {
            _objc_enumerationMutation(param_3);
          }
          lVar19 = *(long *)(lStack_1c8 + (long)puVar16 * 8);
          lVar13 = lVar19;
          func_0x00010bf40c40(lVar19);
          _objc_retainAutoreleasedReturnValue();
          FUN_108cff288();
          _objc_release(lVar13);
          puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          lVar13 = lVar19;
          func_0x00010c102f00(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          dVar27 = 0.0;
          lVar2 = lVar19;
          func_0x00010c102f00();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar2;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar13 != 0) {
            lVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar2);
              }
              uVar22 = *(undefined8 *)(lVar17 * 8);
              func_0x00010c09ea00(uVar22);
              dVar27 = dVar27 / param_1;
              func_0x00010c09ea00(uVar22);
              dVar25 = dVar25 / param_2;
              puVar3 = PTR_PTR_1126bb2b8;
              func_0x00010c246560(PTR_PTR_1126bb2b8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar18);
              _objc_release(puVar3);
              lVar17 = lVar17 + 1;
            } while (lVar13 != lVar17);
            lVar13 = lVar2;
            func_0x00010bf52a60();
          }
          _objc_release(lVar2);
          func_0x00010bf89e60();
          func_0x00010c099460(lVar19);
          dVar27 = dVar27 / param_1;
          puVar3 = PTR_PTR_1126d8d58;
          _objc_alloc_init();
          puVar4 = puVar3;
          func_0x00010c17eb00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c20e980();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c1de980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8e2c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c194460();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c191920();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_238);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(lVar19);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar18);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puStack_230);
        param_5 = &uStack_1d0;
        param_6 = auStack_110;
        param_7 = 0x10;
        puStack_230 = param_3;
        func_0x00010bf52a60();
      } while (puStack_230 != (undefined *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar16 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar28 = dVar27;
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0b6c20(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar23 = dVar27;
    dVar26 = dVar25;
    func_0x00010b690ad8(dVar27,dVar25,1.0 / dVar28);
    _objc_release(puVar16);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puVar21 = param_5;
    func_0x00010bf529e0();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar21 == (undefined8 *)0x0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      func_0x00010bf529e0(param_5);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_5;
      func_0x00010bf529e0();
      if (puVar21 != (undefined8 *)0x0) {
        puVar21 = (undefined8 *)0x0;
        do {
          puVar10 = param_5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          puVar11 = puVar10;
          func_0x00010c102f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010bf0a0e0(puVar18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          dVar28 = 0.0;
          puVar12 = puVar10;
          func_0x00010c102f00();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar12;
          func_0x00010bf52a60();
          lVar13 = lRam0000000000000000;
          while (puVar11 != (undefined8 *)0x0) {
            puVar20 = (undefined8 *)0x0;
            dVar24 = dVar28;
            do {
              if (lRam0000000000000000 != lVar13) {
                _objc_enumerationMutation(puVar12);
              }
              uVar22 = *(undefined8 *)((long)puVar20 * 8);
              func_0x00010c2beb40(uVar22);
              dVar28 = dVar23 * dVar24;
              func_0x00010c2bed60(uVar22);
              puVar3 = PTR_PTR_1126bcf00;
              _objc_alloc(PTR_PTR_1126bcf00);
              func_0x00010c026b40(dVar28,dVar26 * dVar24);
              func_0x00010befa120(puVar18);
              _objc_release(puVar3);
              puVar20 = (undefined8 *)((long)puVar20 + 1);
              dVar24 = dVar28;
            } while (puVar11 != puVar20);
            puVar11 = puVar12;
            func_0x00010bf52a60();
          }
          _objc_release(puVar12);
          puVar11 = puVar10;
          func_0x00010bf41480(puVar10);
          lVar13 = (long)(int)puVar11;
          func_0x000108cff314(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25dd00(puVar10);
          puVar11 = puVar10;
          func_0x00010bf8e2c0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf89e80(puVar10);
          if (param_6 != (undefined1 *)0x0) {
            puVar14 = param_6;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            _objc_release(puVar14);
          }
          puVar3 = PTR_PTR_1126bcf08;
          _objc_alloc(PTR_PTR_1126bcf08);
          func_0x00010c026160(dVar23 * dVar28);
          func_0x00010befa120(puVar16);
          _objc_release(puVar3);
          _objc_release(puVar11);
          _objc_release(lVar13);
          _objc_release(puVar18);
          _objc_release(puVar10);
          puVar21 = (undefined8 *)((long)puVar21 + 1);
          puVar11 = param_5;
          func_0x00010bf529e0();
        } while (puVar21 < puVar11);
      }
      puVar18 = puVar16;
      func_0x00010bf51e00();
      _objc_release(puVar16);
    }
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_5);
    puVar16 = puVar18;
    lVar13 = param_7;
    func_0x00010c151aa0(dVar27,dVar25,dVar23,dVar26);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar18);
    puStack_238 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      dVar28 = dVar23;
      dVar24 = dVar26;
      _objc_retain(puVar16);
      _objc_retain(lVar13);
      dVar27 = dVar23;
      dVar25 = dVar26;
      func_0x000107c308a4(dVar23,dVar26);
      puVar18 = PTR_PTR_1126dbbc0;
      _objc_opt_new(PTR_PTR_1126dbbc0);
      func_0x00010c2037c0();
      _UIGraphicsBeginImageContextWithOptions(dVar23,dVar26,0,0);
      _UIGraphicsGetCurrentContext();
      puStack_458 = (undefined *)0x0;
      func_0x00010bf529e0(puVar16);
      lVar15 = lVar13;
      func_0x00010bf271a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar15 != 0) {
        func_0x00010bf89920(dVar27,dVar25,dVar28,dVar24,lVar15);
      }
      for (; puStack_238 = puVar16, func_0x00010bf529e0(), puStack_458 < puStack_238;
          puStack_458 = puStack_458 + 1) {
        puVar3 = puVar16;
        func_0x00010c0dfd40(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28cde0(puVar18);
        _objc_release(puVar3);
        func_0x00010bf89c20(dVar27,dVar25,dVar28,dVar24,puVar18);
      }
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      _objc_release(lVar15);
      _objc_release(puVar18);
      _objc_release(lVar13);
      _objc_release(puVar16);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_238);
  return;
}



/* Entry: 108cff798; end: 108cffbb3; +[SCDrawingUtils screenshotWithGalleryStrokes:strokeIds:multiSnapDrawingCache:smoothingAlgorithmVersion:outputSize:] */

void FUN_108cff798(double param_1,double param_2,undefined *param_3,undefined8 param_4,ulong param_5
                  ,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double unaff_d12;
  double dVar18;
  double unaff_d13;
  undefined *puStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar18 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0b6c20(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar13 = param_1;
  dVar15 = param_2;
  func_0x00010b690ad8(param_1,param_2,1.0 / dVar18);
  _objc_release(puVar9);
  _objc_retain(param_5);
  lStack_168 = param_6;
  _objc_retain(param_6);
  uVar12 = param_5;
  func_0x00010bf529e0();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (uVar12 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar12 = param_5;
    puStack_188 = param_3;
    uStack_180 = param_8;
    lStack_178 = param_7;
    func_0x00010bf529e0(param_5);
    func_0x00010bf0a0e0(puVar9,param_4,uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    puStack_170 = puVar9;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar2 = param_5;
        func_0x00010c0dfd40(param_5,param_4,uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        uVar3 = uVar2;
        func_0x00010c102f00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        func_0x00010bf0a0e0(puVar9,param_4,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        dVar18 = 0.0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        lStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        plStack_150 = (long *)0x0;
        uVar3 = uVar2;
        func_0x00010c102f00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf52a60();
        if (uVar4 != 0) {
          lVar10 = *plStack_150;
          do {
            uVar11 = 0;
            dVar14 = dVar18;
            do {
              if (*plStack_150 != lVar10) {
                _objc_enumerationMutation(uVar3);
              }
              uVar8 = *(undefined8 *)(lStack_158 + uVar11 * 8);
              func_0x00010c2beb40(uVar8);
              dVar18 = dVar13 * dVar14;
              func_0x00010c2bed60(uVar8);
              unaff_d13 = dVar15 * dVar14;
              puVar5 = PTR_PTR_1126bcf00;
              _objc_alloc(PTR_PTR_1126bcf00);
              func_0x00010c026b40(dVar18,unaff_d13);
              func_0x00010befa120(puVar9,param_4,puVar5);
              _objc_release(puVar5);
              uVar11 = uVar11 + 1;
              dVar14 = dVar18;
            } while (uVar4 != uVar11);
            uVar4 = uVar3;
            func_0x00010bf52a60(uVar3,param_4,&uStack_160,auStack_120,0x10);
          } while (uVar4 != 0);
        }
        _objc_release(uVar3);
        uVar3 = uVar2;
        func_0x00010bf41480(uVar2);
        lVar10 = (long)(int)uVar3;
        func_0x000108cff314(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25dd00(uVar2);
        uVar3 = uVar2;
        func_0x00010bf8e2c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf89e80(uVar2);
        if (lStack_168 != 0) {
          lVar6 = lStack_168;
          func_0x00010c0dfd40(lStack_168,param_4,uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(lVar6);
        }
        unaff_d12 = dVar13 * dVar18;
        puVar5 = PTR_PTR_1126bcf08;
        _objc_alloc(PTR_PTR_1126bcf08);
        func_0x00010c026160(unaff_d12);
        func_0x00010befa120(puStack_170,param_4,puVar5);
        _objc_release(puVar5);
        _objc_release(uVar3);
        _objc_release(lVar10);
        _objc_release(puVar9);
        _objc_release(uVar2);
        uVar12 = uVar12 + 1;
        uVar2 = param_5;
        func_0x00010bf529e0();
      } while (uVar12 < uVar2);
    }
    puVar5 = puStack_170;
    puVar9 = puStack_170;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    param_7 = lStack_178;
    param_8 = uStack_180;
    param_3 = puStack_188;
  }
  lVar10 = lStack_168;
  _objc_release(lStack_168);
  _objc_release(param_5);
  _objc_release(lVar10);
  _objc_release(param_5);
  puVar5 = param_3;
  puVar7 = puVar9;
  lVar10 = param_7;
  dVar18 = dVar13;
  dVar14 = dVar15;
  func_0x00010c151aa0(param_1,param_2,dVar13,dVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_198 = FUN_108cffbb4;
    dVar16 = dVar18;
    dVar17 = dVar14;
    dStack_200 = unaff_d13;
    dStack_1f8 = unaff_d12;
    dStack_1f0 = dVar15;
    dStack_1e8 = dVar13;
    dStack_1e0 = param_1;
    dStack_1d8 = param_2;
    puStack_1d0 = param_3;
    uStack_1c8 = param_8;
    uStack_1c0 = param_5;
    lStack_1b8 = param_7;
    puStack_1b0 = puVar9;
    puStack_1a8 = puVar5;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(lVar10);
    dVar13 = dVar18;
    dVar15 = dVar14;
    func_0x000107c308a4(dVar18,dVar14);
    puVar9 = PTR_PTR_1126dbbc0;
    _objc_opt_new(PTR_PTR_1126dbbc0);
    func_0x00010c2037c0();
    uVar8 = 0;
    _UIGraphicsBeginImageContextWithOptions(dVar18,dVar14,0,0);
    _UIGraphicsGetCurrentContext();
    puStack_208 = (undefined *)0x0;
    puVar5 = puVar7;
    func_0x00010bf529e0(puVar7);
    lVar6 = lVar10;
    func_0x00010bf271a0(lVar10,param_4,puVar7,puVar5,&puStack_208,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      func_0x00010bf89920(dVar13,dVar15,dVar16,dVar17,lVar6);
    }
    for (; puVar1 = puStack_208, puVar5 = puVar7, func_0x00010bf529e0(), puVar1 < puVar5;
        puStack_208 = puStack_208 + 1) {
      puVar5 = puVar7;
      func_0x00010c0dfd40(puVar7,param_4,puStack_208);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28cde0(puVar9,param_4,puVar5);
      _objc_release(puVar5);
      func_0x00010bf89c20(dVar13,dVar15,dVar16,dVar17,puVar9,param_4,uVar8);
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(lVar6);
    _objc_release(puVar9);
    _objc_release(lVar10);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108cffbb4; end: 108cffd5f; +[SCDrawingUtils screenshotWithDrawingStrokes:multiSnapDrawingCache:smoothingAlgorithmVersion:outputSize:strokesCoordinateSize:] */

void FUN_108cffbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uStack_78;
  
  uVar8 = param_3;
  uVar9 = param_4;
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x000107c308a4(param_3,param_4);
  puVar1 = PTR_PTR_1126dbbc0;
  _objc_opt_new(PTR_PTR_1126dbbc0);
  func_0x00010c2037c0();
  uVar2 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  _UIGraphicsGetCurrentContext();
  uStack_78 = 0;
  uVar3 = param_7;
  func_0x00010bf529e0(param_7);
  lVar4 = param_8;
  func_0x00010bf271a0(param_8,param_6,param_7,uVar3,&uStack_78,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010bf89920(uVar6,uVar7,uVar8,uVar9,lVar4);
  }
  for (; uVar3 = uStack_78, uVar5 = param_7, func_0x00010bf529e0(), uVar3 < uVar5;
      uStack_78 = uStack_78 + 1) {
    uVar3 = param_7;
    func_0x00010c0dfd40(param_7,param_6,uStack_78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cde0(puVar1,param_6,uVar3);
    _objc_release(uVar3);
    func_0x00010bf89c20(uVar6,uVar7,uVar8,uVar9,puVar1,param_6,uVar2);
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108cffd60; end: 108cffdfb; +[SCDrawingUtils sojuGalleryPointWithX:y:] */

void FUN_108cffd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dbbc8;
  _objc_alloc(PTR_PTR_1126dbbc8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063600(puVar1,param_4,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cffdfc; end: 108cfff83; -[SCEmojiPickerDropletView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108cffdfc(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fe4d8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    dVar7 = param_1 * 0.7;
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0(param_1);
    lVar6 = (long)_DAT_11277ae80;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(dVar7 + -1.0,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cfff84; end: 108d0012f; -[SCEmojiPickerDropletView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfff84(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fe4d8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + _DAT_11277ae84);
  func_0x00010bf20c00(param_5);
  dVar7 = *pdVar1;
  bVar2 = false;
  if ((dVar7 == param_3) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
    bVar2 = pdVar1[1] == param_4;
  }
  if (!bVar2) {
    func_0x00010bf20c00(param_5);
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    lVar3 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar8 = dVar7 * 0.7;
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar4 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar6 = (long)_DAT_11277ae80;
    func_0x00010c1739e0(dVar7,*(undefined8 *)(param_5 + lVar6));
    _objc_release(lVar4);
    _objc_release(lVar3);
    dVar7 = dVar8 + -1.0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(dVar7,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + lVar6));
    _objc_release(puVar5);
  }
  lVar3 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  lVar4 = param_5;
  dVar8 = dVar7;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar7,dVar8,*(undefined8 *)(param_5 + _DAT_11277ae80));
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 108d00130; end: 108d0019f; -[SCEmojiPickerDropletView setEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d00130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277ae88;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277ae80),param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d001a0; end: 108d0037b; -[SCEmojiPickerDropletView setCurrentPath:] */

void FUN_108d001a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe4d8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setCurrentPath__11263f828);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010c19f0e0(0,0,param_1,uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c072360();
  uVar2 = param_2;
  if ((int)uVar1 == 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetMidX();
    uVar1 = uVar4;
    func_0x00010bf20c00(param_2);
    _CGRectGetMidY();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar4,uVar1);
  }
  else {
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    uVar5 = uVar4;
    func_0x00010bf20c00(param_2);
    _CGRectGetMidY();
    uVar1 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar4,uVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf199a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9840(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 108d0037c; end: 108d003e7; +[SCEmojiPickerDropletView closedPath] */

void FUN_108d0037c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe4e0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_closedPath_1125ad198);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeScale(auStack_60,0x3ffd99999999999a,0x3ffd99999999999a);
  func_0x00010bf08a40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d003e8; end: 108d003f7; -[SCEmojiPickerDropletView emoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d003e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ae88);
}



/* Entry: 108d003f8; end: 108d00437; -[SCEmojiPickerDropletView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d003f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ae88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ae80,0);
  return;
}



/* Entry: 108d00438; end: 108d00787; -[SCEmojiPickerListView initWithEmojiList:emojiExtendList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d00438(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_4;
  puVar2 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_188 = PTR_PTR_1126fe4e8;
  puVar1 = &uStack_190;
  uStack_190 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = param_4;
    func_0x00010c0d3c80();
    lVar10 = (long)_DAT_11277ae8c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    *(long *)((long)puVar1 + lVar10) = lVar6;
    _objc_release(uVar5);
    puVar2 = param_5;
    func_0x00010c0d3c80();
    lVar11 = (long)_DAT_11277ae90;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined1 **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010bffc4a0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ae94);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ae94) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    dVar12 = param_1;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    func_0x00010c013de0(0,0,param_1,dVar12);
    lVar6 = (long)_DAT_11277ae98;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    lVar8 = *(long *)((long)puVar1 + lVar10);
    _objc_retain(lVar8);
    lVar6 = lVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bdc6a00(puVar1);
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      lVar6 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    param_1 = 0.0;
    lVar8 = *(long *)((long)puVar1 + lVar11);
    _objc_retain(lVar8);
    puVar2 = auStack_180;
    lVar6 = lVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bdc6a00(puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      puVar2 = auStack_180;
      lVar6 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ae9c) = 0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bf529e0();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277aea0) = uVar5;
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aea4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277aea4) = 0;
    _objc_release(uVar5);
    lVar6 = 1;
    func_0x00010c17d4c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_retain(lVar6);
    _objc_alloc(puVar1);
    lVar9 = (long)_DAT_11277ae98;
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
    _CGRectGetMinX();
    dVar12 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar9));
    _CGRectGetMinY();
    func_0x00010c013de0(param_1,dVar12 + (double)(long)(puVar2 + -1) * 31.0 + 8.0,0x4039000000000000
                        ,0x4039000000000000,puVar1);
    func_0x00010c212f20();
    _objc_release(lVar6);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    func_0x00010c213040(puVar1);
    puVar4 = *(undefined1 **)(param_4 + _DAT_11277ae8c);
    func_0x00010bf529e0();
    if (puVar4 < puVar2) {
      func_0x00010c1a7f60(puVar1);
    }
    func_0x00010c1bdb00(puVar1);
    func_0x00010befbb60(*(undefined8 *)(param_4 + lVar9));
    func_0x00010befa120(*(undefined8 *)(param_4 + _DAT_11277ae94));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 108d00788; end: 108d008d3; -[SCEmojiPickerListView _addEmojiView:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d00788(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  lVar4 = (long)_DAT_11277ae98;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  _CGRectGetMinX();
  dVar5 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  _CGRectGetMinY();
  func_0x00010c013de0(param_1,dVar5 + (double)(long)(param_5 - 1) * 31.0 + 8.0,0x4039000000000000,
                      0x4039000000000000,puVar1);
  func_0x00010c212f20();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_3,1);
  uVar3 = *(ulong *)(param_2 + _DAT_11277ae8c);
  func_0x00010bf529e0();
  if (uVar3 < param_5) {
    func_0x00010c1a7f60(puVar1,param_3,1);
  }
  func_0x00010c1bdb00(puVar1,param_3,2);
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
  func_0x00010befa120(*(undefined8 *)(param_2 + _DAT_11277ae94),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d008d4; end: 108d00bab; -[SCEmojiPickerListView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108d008d4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5
                   )

{
  double *pdVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = PTR_PTR_1126fe4e8;
  lStack_1a0 = param_5;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + _DAT_11277aea8);
  func_0x00010bf20c00(param_5);
  bVar3 = false;
  if ((*pdVar1 == param_3) && (bVar3 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
    bVar3 = pdVar1[1] == param_4;
  }
  if (bVar3) {
    lVar7 = (long)_DAT_11277ae94;
  }
  else {
    func_0x00010bf20c00(param_5);
    *pdVar1 = param_3;
    pdVar1[1] = param_4;
    func_0x00010bf20c00(param_5);
    lVar14 = (long)_DAT_11277ae98;
    func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar14));
    dVar18 = 0.0;
    lVar7 = (long)_DAT_11277ae94;
    lVar8 = *(long *)(param_5 + lVar7);
    _objc_retain(lVar8);
    lVar4 = lVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar4 != 0) {
      lVar16 = 0;
      do {
        lVar13 = 0;
        lVar12 = lVar16;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar8);
          }
          uVar10 = *(undefined8 *)(lVar13 * 8);
          lVar16 = lVar12 + 1;
          func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar14));
          _CGRectGetMinX();
          dVar17 = dVar18;
          func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar14));
          _CGRectGetMinY();
          func_0x00010c1739e0(dVar18,dVar17 + (double)lVar12 * 31.0 + 8.0,0x4039000000000000,
                              0x4039000000000000,uVar10);
          dVar18 = 24.0;
          puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c266f40(PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(uVar10);
          _objc_release(puVar5);
          lVar13 = lVar13 + 1;
          lVar12 = lVar16;
        } while (lVar4 != lVar13);
        lVar4 = lVar8;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar8);
  }
  uVar10 = 0;
  uVar9 = *(ulong *)(param_5 + lVar7);
  _objc_retain(uVar9);
  uVar6 = uVar9;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar6 != 0) {
    uVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar9);
      }
      uVar11 = *(undefined8 *)(uVar15 * 8);
      func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11277ae98));
      _CGRectGetMidX();
      uVar19 = uVar10;
      func_0x00010bf20c00(uVar11);
      _CGRectGetMidY();
      func_0x00010c17a6a0(uVar10,uVar19,uVar11);
      uVar15 = uVar15 + 1;
    } while (uVar6 != uVar15);
    uVar6 = uVar9;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return uVar9;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(uVar9 + (long)_DAT_11277ae90);
  func_0x00010bfecde0(lVar7);
  return (ulong)(lVar7 != 0x7fffffffffffffff);
}



/* Entry: 108d00bac; end: 108d00bd7; -[SCEmojiPickerListView isEmojiInAdditionalMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d00bac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae90);
  func_0x00010bfecde0(lVar1);
  return lVar1 != 0x7fffffffffffffff;
}



/* Entry: 108d00bd8; end: 108d00c9b; -[SCEmojiPickerListView selectedAdditionalEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d00bd8(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11277ae90);
  func_0x00010bfecde0(lVar2,param_2,param_3);
  if (lVar2 == 0x7fffffffffffffff) {
    if (*(char *)(param_1 + _DAT_11277ae9c) != '\x01') {
LAB_108d00c60:
      bVar1 = false;
      goto LAB_108d00c80;
    }
    lVar3 = *(long *)(param_1 + _DAT_11277aea4);
    bVar1 = lVar3 != 0;
    *(undefined8 *)(param_1 + _DAT_11277aea4) = 0;
  }
  else {
    lVar2 = (long)_DAT_11277aea4;
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
    if ((uVar4 & 1) != 0) goto LAB_108d00c60;
    _objc_retain(param_3);
    lVar3 = *(long *)(param_1 + lVar2);
    *(ulong *)(param_1 + lVar2) = param_3;
    bVar1 = true;
  }
  _objc_release(lVar3);
LAB_108d00c80:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108d00c9c; end: 108d00e37; -[SCEmojiPickerListView setExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d00c9c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(byte *)(param_1 + _DAT_11277ae9c) != param_3) {
    *(char *)(param_1 + _DAT_11277ae9c) = (char)param_3;
    if (param_3 == 0) {
      lVar7 = (long)_DAT_11277ae8c;
      func_0x00010c12d500(*(undefined8 *)(param_1 + lVar7),param_2,
                          *(undefined8 *)(param_1 + _DAT_11277ae90));
      lVar6 = (long)_DAT_11277aea4;
      if (*(long *)(param_1 + lVar6) != 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + lVar7));
        uVar5 = *(undefined8 *)(param_1 + _DAT_11277ae94);
        lVar7 = *(long *)(param_1 + lVar7);
        func_0x00010bf529e0(lVar7);
        func_0x00010c0dfd40(uVar5,param_2,lVar7 + -1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar5);
      }
    }
    else {
      lVar6 = (long)_DAT_11277aea4;
      lVar7 = (long)_DAT_11277ae8c;
      if (*(long *)(param_1 + lVar6) != 0) {
        uVar1 = *(ulong *)(param_1 + lVar7);
        func_0x00010bf529e0();
        lVar8 = (long)_DAT_11277aea0;
        uVar3 = *(ulong *)(param_1 + lVar8);
        if (uVar3 < uVar1) {
          lVar4 = *(long *)(param_1 + lVar7);
          uVar5 = *(undefined8 *)(param_1 + lVar6);
          lVar2 = lVar4;
          func_0x00010bf529e0(lVar4);
          func_0x00010c12d380(lVar4,param_2,uVar5,uVar3,lVar2 - *(long *)(param_1 + lVar8));
        }
        func_0x00010be881a0(param_1);
      }
      func_0x00010befa160(*(undefined8 *)(param_1 + lVar7),param_2,
                          *(undefined8 *)(param_1 + _DAT_11277ae90));
    }
    uVar1 = *(ulong *)(param_1 + _DAT_11277aea0);
    if (*(long *)(param_1 + lVar6) != 0) {
      uVar1 = uVar1 + 1;
    }
    lVar7 = (long)_DAT_11277ae94;
    while( true ) {
      uVar3 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
      if (uVar3 <= uVar1) break;
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar5,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      uVar1 = uVar1 + 1;
    }
  }
  return;
}



/* Entry: 108d00e38; end: 108d00e6f; -[SCEmojiPickerListView pointInside:withEvent:] */

void FUN_108d00e38(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108d00e70; end: 108d00eef; -[SCEmojiPickerListView emojiForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d00e70(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_2 = param_2 / param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  dVar5 = 1.0;
  if (param_2 <= 1.0) {
    dVar5 = param_2;
  }
  lVar3 = (long)_DAT_11277ae8c;
  uVar1 = *(ulong *)(param_3 + lVar3);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_3 + lVar3);
  func_0x00010bf529e0();
  dVar4 = dVar5 * (double)uVar1;
  if ((double)(lVar2 - 1) <= dVar5 * (double)uVar1) {
    dVar4 = (double)(lVar2 - 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + lVar3),PTR_s_objectAtIndex__112615960,(long)dVar4);
  return;
}



/* Entry: 108d00ef0; end: 108d00f93; -[SCEmojiPickerListView locationForEmojiIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108d00ef0(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(param_3 + _DAT_11277ae8c);
  func_0x00010bf529e0();
  param_5 = param_5 & ((long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
  uVar1 = lVar2 - 1U;
  if (param_5 <= lVar2 - 1U) {
    uVar1 = param_5;
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_11277ae94);
  func_0x00010c0dfd20(uVar3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar4 = param_1;
  func_0x00010bf345e0(uVar3);
  func_0x00010be1eca0(param_3,param_4,uVar1);
  _objc_release(uVar3);
  auVar5._8_8_ = param_2 + dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108d00f94; end: 108d0103f; -[SCEmojiPickerListView locationForEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108d00f94(double param_1,double param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar4 = (long)_DAT_11277ae8c;
  uVar2 = *(ulong *)(param_3 + lVar4);
  func_0x00010bfecde0();
  lVar4 = *(long *)(param_3 + lVar4);
  func_0x00010bf529e0();
  uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  uVar1 = lVar4 - 1U;
  if (uVar2 <= lVar4 - 1U) {
    uVar1 = uVar2;
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_11277ae94);
  func_0x00010c0dfd20(uVar3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar5 = param_1;
  func_0x00010bf345e0(uVar3);
  func_0x00010be1eca0(param_3,param_4,uVar1);
  _objc_release(uVar3);
  auVar6._8_8_ = param_2 + dVar5;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 108d01040; end: 108d01117; -[SCEmojiPickerListView emojiViewCenterForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108d01040(double param_1,double param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_2 = param_2 / param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  dVar6 = 1.0;
  dVar5 = 1.0;
  if (param_2 <= 1.0) {
    dVar5 = param_2;
  }
  lVar3 = (long)_DAT_11277ae8c;
  uVar1 = *(ulong *)(param_3 + lVar3);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_3 + lVar3);
  func_0x00010bf529e0();
  dVar4 = dVar5 * (double)uVar1;
  if ((double)(lVar3 - 1) <= dVar5 * (double)uVar1) {
    dVar4 = (double)(lVar3 - 1);
  }
  lVar3 = (long)dVar4;
  uVar2 = *(undefined8 *)(param_3 + _DAT_11277ae94);
  func_0x00010c0dfd20(uVar2,param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar5 = dVar4;
  func_0x00010bf345e0(uVar2);
  func_0x00010be1eca0(param_3,param_4,lVar3);
  _objc_release(uVar2);
  auVar7._8_8_ = dVar6 + dVar5;
  auVar7._0_8_ = dVar4;
  return auVar7;
}



/* Entry: 108d01118; end: 108d0119f; -[SCEmojiPickerListView estimateContentHeightWithExpand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108d01118(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae8c);
  func_0x00010bf529e0(lVar1);
  if ((param_3 != 0) && ((*(byte *)(param_1 + _DAT_11277ae9c) & 1) == 0)) {
    lVar2 = *(long *)(param_1 + _DAT_11277ae90);
    func_0x00010bf529e0(lVar2);
    lVar1 = lVar2 + lVar1;
  }
  return (double)lVar1 * 25.0 + 8.0 + (double)(lVar1 + -1) * 6.0 + 8.0;
}



/* Entry: 108d011a0; end: 108d01293; -[SCEmojiPickerListView _refreshAdditionalEmojiViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d011a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = (long)_DAT_11277ae94;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  lVar9 = (long)_DAT_11277aea0;
  lVar7 = *(long *)(param_1 + lVar9);
  lVar10 = (long)_DAT_11277ae90;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar1 == lVar2 + lVar7) {
    lVar1 = *(long *)(param_1 + lVar10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        lVar1 = *(long *)(param_1 + lVar9);
        uVar3 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf529e0();
        if (uVar3 <= uVar6 + lVar1) {
          return;
        }
        uVar4 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0dfd40(uVar4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c0dfd40(uVar5,param_2,uVar6 + *(long *)(param_1 + lVar9));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar6 = uVar6 + 1;
        uVar3 = *(ulong *)(param_1 + lVar10);
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
  }
  return;
}



/* Entry: 108d01294; end: 108d012df; -[SCEmojiPickerListView _getEmojiCenterOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d01294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11277ae8c);
    func_0x00010bf529e0();
    uVar2 = 0x4008000000000000;
    if (param_3 != lVar1 + -1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xc008000000000000;
}



/* Entry: 108d012e0; end: 108d0134f; -[SCEmojiPickerListView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d012e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277aea4,0);
  _objc_storeStrong(param_1 + _DAT_11277ae94,0);
  _objc_storeStrong(param_1 + _DAT_11277ae90,0);
  _objc_storeStrong(param_1 + _DAT_11277ae8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ae98,0);
  return;
}



/* Entry: 108d01350; end: 108d01357; -[SCEmojiPickerView initWithEmojiList:emojiExtendList:needOnboardingAnimation:] */

void FUN_108d01350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEmojiList_emojiExtendLis_1125e1770);
  return;
}



/* Entry: 108d01358; end: 108d01953; -[SCEmojiPickerView initWithEmojiList:emojiExtendList:needOnboardingAnimation:viewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d01358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR_PTR_1126fe4f0;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0(puVar2);
    func_0x00010c181a20(puVar1);
    _objc_release(puVar2);
    func_0x00010c222680(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11277aeac;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar6);
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0x403f000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x4010000000000000;
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb40();
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126dbbd0;
    _objc_alloc();
    func_0x00010c00f640();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aeb0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277aeb0) = puVar2;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010bf20c00(puVar1);
    _CGRectGetMinX();
    uVar6 = uVar8;
    func_0x00010bf20c00(puVar1);
    _CGRectGetMinY();
    func_0x00010c013de0(uVar8,uVar6,0x4039000000000000,0x4039000000000000,puVar2);
    func_0x00010c17f940(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    func_0x00010c1a7f60(puVar2);
    uVar6 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4039000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar4);
    func_0x00010c213040(puVar2);
    func_0x00010c1bdb00(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf431e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126dbbd8;
    _objc_alloc_init();
    lVar7 = (long)_DAT_11277aeb4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010befbb60(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c074c20(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf431e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    if (param_6 != 0) {
      puVar3 = (undefined1 *)puVar1;
      func_0x00010bf431e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf345e0();
      func_0x00010c17a6a0(*(undefined8 *)((long)puVar1 + lVar7));
      _objc_release(puVar3);
    }
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0);
    func_0x00010bef9040(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
    _objc_alloc();
    func_0x00010c04ea80();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aeb8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277aeb8) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_1126dbbe8;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aebc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277aebc) = puVar5;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277aec0) = 0;
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d01954; end: 108d01a17; -[SCEmojiPickerView selectedEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d01954(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277aeb4;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf431e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_class(PTR__OBJC_CLASS___UILabel_1126aec30);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    uVar3 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf8e2c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d01a18; end: 108d01a37; -[SCEmojiPickerView sizeThatFits:] */

undefined1  [16] FUN_108d01a18(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf4ade0();
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x4046000000000000;
  return auVar1;
}



/* Entry: 108d01a38; end: 108d01ebf; -[SCEmojiPickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d01a38(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe4f0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + _DAT_11277aec4);
  func_0x00010bf20c00(param_5);
  dVar9 = *pdVar1;
  dVar11 = pdVar1[1];
  bVar2 = false;
  if ((dVar9 == param_3) && (bVar2 = false, !NAN(dVar11) && !NAN(param_4))) {
    bVar2 = dVar11 == param_4;
  }
  if (!bVar2) {
    func_0x00010bf20c00(param_5);
    lVar7 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar9,dVar11,param_3,param_4);
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar10 = 0.0;
    func_0x00010c1739e0(0,0,0,dVar9,*(undefined8 *)(param_5 + _DAT_11277aeac));
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar5 = param_5;
    dVar11 = dVar10;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    lVar6 = (long)_DAT_11277aeb0;
    dVar9 = 0.0;
    func_0x00010c1739e0(0,0,*(undefined8 *)(param_5 + lVar6));
    _objc_release(lVar5);
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010c29d520();
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    if (lVar7 == 0) {
      func_0x00010c09ee60(uVar4);
      func_0x00010c17a6a0(*(undefined8 *)(param_5 + _DAT_11277aeb4));
    }
    else {
      lVar7 = (long)_DAT_11277aeb4;
      uVar3 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010bf8e2c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ee40(uVar4);
      func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar7));
      _objc_release(uVar3);
    }
    func_0x00010bf20c00(param_5);
    *pdVar1 = dVar10;
    pdVar1[1] = dVar11;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar7 = param_5;
  dVar11 = dVar9;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  lVar5 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar9,dVar11);
  _objc_release(lVar5);
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  lVar5 = param_5;
  dVar11 = dVar9;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar9,dVar11,*(undefined8 *)(param_5 + _DAT_11277aeac));
  _objc_release(lVar5);
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  lVar5 = param_5;
  dVar11 = dVar9;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  lVar8 = (long)_DAT_11277aeb0;
  func_0x00010c17a6a0(dVar9,dVar11,*(undefined8 *)(param_5 + lVar8));
  _objc_release(lVar5);
  _objc_release(lVar7);
  lVar7 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  lVar5 = param_5;
  dVar11 = dVar9;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  lVar6 = param_5;
  func_0x00010bf431e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar9,dVar11);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  lVar5 = (long)_DAT_11277aeb4;
  lVar7 = *(long *)(param_5 + lVar5);
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    lVar7 = param_5;
    func_0x00010c29d520();
    lVar6 = param_5;
    if (lVar7 == 1) {
      func_0x00010bf4b2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidX();
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
      _CGRectGetMidY();
    }
    else {
      func_0x00010bf431e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf345e0();
    }
    func_0x00010c17a6a0(dVar9,*(undefined8 *)(param_5 + lVar5));
    _objc_release(lVar6);
    lVar7 = *(long *)(param_5 + lVar8);
    func_0x00010bf8e440(0,0,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194460(*(undefined8 *)(param_5 + lVar5));
  }
  else {
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar5));
    lVar7 = param_5;
    func_0x00010bf431e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar9,dVar11);
  }
  _objc_release(lVar7);
  func_0x00010bf02fe0(param_5);
  return;
}



/* Entry: 108d01ec0; end: 108d0212b; -[SCEmojiPickerView animateOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d01ec0(double param_1,double param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  func_0x00010bf431e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf431e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2);
    _objc_release(puVar1);
    func_0x00010c192d40(0x3fd3333333333333,puVar2);
    func_0x00010c1ea580(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _CATransform3DMakeScale(&uStack_e0,0,0,0x3ff0000000000000);
    func_0x00010c297140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    puStack_60 = puVar1;
    _CATransform3DMakeScale(&uStack_e0,0x3ff4cccccccccccd,0x3ff4cccccccccccd,0x3ff0000000000000);
    func_0x00010c297140();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_e0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    param_1 = *(double *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    param_2 = *(double *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_c0 = param_1;
    dStack_b0 = param_2;
    puStack_58 = puVar3;
    func_0x00010c297140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220360(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c1b6d00(puVar2);
    func_0x00010bf431e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  dVar6 = param_1;
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar7 = 0.0;
  dVar8 = 0.0;
  if (0.0 <= param_1) {
    dVar8 = param_1;
  }
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + _DAT_11277aeb0));
  _CGRectGetHeight();
  if (dVar7 <= dVar8) {
    dVar8 = dVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2 + dVar6,dVar8,*(undefined8 *)(puVar2 + _DAT_11277aeb4),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 108d0212c; end: 108d0219b; -[SCEmojiPickerView setDropletOriginY:offsetX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0212c(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (0.0 <= param_1) {
    dVar3 = param_1;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_11277aeb0));
  _CGRectGetHeight();
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2 + dVar1,dVar3,*(undefined8 *)(param_3 + _DAT_11277aeb4),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 108d0219c; end: 108d021db; -[SCEmojiPickerView _setExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0219c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277aec0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277aec0) = (char)param_3;
  func_0x00010c23d620();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108d021dc; end: 108d0223b; -[SCEmojiPickerView _setAlphaForPickerAnimatableViews:] */

/* WARNING: Possible PIC construction at 0x000108d0220c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d02210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d021dc(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(param_3 ^ 1),*(undefined8 *)(param_1 + _DAT_11277aeac),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d0223c; end: 108d0228f; -[SCEmojiPickerView animateViews:] */

void FUN_108d0223c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe4f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_animateViews__11259e668);
  func_0x00010bea1d20(param_1);
  return;
}



/* Entry: 108d02290; end: 108d02337; -[SCEmojiPickerView onPreAnimateForViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02290(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe4f0;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_onPreAnimateForViews__1126170e8);
  func_0x00010bea1d20(param_3);
  lVar1 = (long)_DAT_11277aeb4;
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf431e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108d02338; end: 108d02393; -[SCEmojiPickerView onPostAnimateForViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02338(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe4f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_onPostAnimateForViews__1126170d0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277aeb4));
  return;
}



/* Entry: 108d02394; end: 108d02957; -[SCEmojiPickerView longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02394(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c29d520();
  if (uVar2 == 0) {
    lVar4 = param_5;
    func_0x00010c252440();
    if ((lVar4 != 3) && (lVar4 = param_5, func_0x00010c252440(), lVar4 != 5)) goto LAB_108d02838;
    uVar2 = *(ulong *)(param_3 + (long)_DAT_11277aeb4);
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar1 = *(ulong *)(param_3 + (long)_DAT_11277aeb0);
      func_0x00010bf8e440(0,0,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar1 = uVar2;
    }
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e720();
    _objc_release(uVar2);
    func_0x00010c29d540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fbc40();
LAB_108d02828:
    _objc_release(param_3);
  }
  else {
    func_0x00010c09ef00(param_5,param_4,param_3);
    lVar4 = param_5;
    func_0x00010c252440();
    if (lVar4 - 3U < 2) {
      lVar7 = (long)_DAT_11277aeb0;
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010bf8e440(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_11277aeb4;
      func_0x00010c194460(*(undefined8 *)(param_3 + lVar4),param_4,uVar3);
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_3 + lVar7);
      uVar3 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010bf8e2c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c159260(uVar5,param_4,uVar3);
      _objc_release(uVar3);
      func_0x00010c198740(*(undefined8 *)(param_3 + lVar7),param_4,0);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_108d029e0;
      puStack_108 = &UNK_110858dc0;
      uStack_100 = param_3;
      dStack_f8 = param_1;
      dStack_f0 = param_2;
      func_0x00010bf03460(0x3fd3333333333333,0,0x3fe8000000000000,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_4,2,&puStack_120,0);
      uVar2 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010bf8e2c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8e720(uVar2,param_4,param_3,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c29d540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fbc00();
      _objc_release(uVar2);
      if ((int)uVar5 == 0) goto LAB_108d02838;
      uVar1 = param_3 + (long)_DAT_11277aed0;
      _objc_loadWeakRetained(uVar1);
      func_0x00010bf8e740();
    }
    else if (lVar4 == 2) {
      dVar8 = (param_1 - *(double *)(param_3 + (long)_DAT_11277aec8)) + 20.0;
      dVar9 = 0.0;
      if (dVar8 <= 0.0) {
        dVar9 = dVar8;
      }
      dVar8 = -dVar9;
      if (0.0 <= dVar9) {
        dVar8 = dVar9;
      }
      if ((0.0 < dVar8) &&
         (dVar9 = 1.0 - 1.0 / ((dVar8 * 0.55) / 50.0 + 1.0), dVar8 = -(dVar9 * 50.0),
         dVar9 * 50.0 <= 0.0)) {
        dVar8 = -0.0;
      }
      uVar2 = param_3;
      func_0x00010c2303e0(param_3,param_4,param_5);
      if ((int)uVar2 == 0) {
        lVar4 = (long)_DAT_11277aeb0;
        uVar1 = *(ulong *)(param_3 + lVar4);
        func_0x00010bf8e440(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_11277aeb4;
        uVar3 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010bf8e2c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0(uVar1,param_4,uVar3);
        _objc_release(uVar3);
        if ((uVar2 & 1) == 0) {
          lVar6 = (long)_DAT_11277aebc;
          func_0x00010c15a4e0(*(undefined8 *)(param_3 + lVar6));
          func_0x00010c108f40(*(undefined8 *)(param_3 + lVar6));
        }
        func_0x00010c194460(*(undefined8 *)(param_3 + lVar7),param_4,uVar1);
        dVar9 = param_2;
        func_0x00010bf8ea20(param_1,param_2,*(undefined8 *)(param_3 + lVar4));
        func_0x00010c1920a0(dVar9,dVar8 + -75.0,param_3);
        func_0x00010bf03000(param_1,param_2,param_3);
        if (1.0 < *(double *)(param_3 + (long)_DAT_11277aecc)) {
          func_0x00010c29d540(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fbc00();
          goto LAB_108d02828;
        }
      }
      else {
        lVar4 = (long)_DAT_11277aeb8;
        func_0x00010bfe9da0(*(undefined8 *)(param_3 + lVar4));
        func_0x00010c108f40(*(undefined8 *)(param_3 + lVar4));
        func_0x00010c198740(*(undefined8 *)(param_3 + (long)_DAT_11277aeb0),param_4,1);
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        uStack_d8 = 0x108d0299c;
        puStack_d0 = &UNK_11084e430;
        uStack_c8 = param_3;
        dStack_c0 = param_1;
        dStack_b8 = param_2;
        dStack_b0 = dVar8;
        func_0x00010bf03460(0x3fd999999999999a,0,0x3feb333333333333,0,
                            PTR__OBJC_CLASS___UIView_1126aec20,param_4,2,&puStack_e8,0);
        func_0x00010c29d540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fbc00();
        uVar1 = param_3;
      }
    }
    else {
      if (lVar4 != 1) goto LAB_108d02838;
      lVar4 = (long)_DAT_11277aec8;
      *(double *)(param_3 + lVar4) = param_1;
      ((double *)(param_3 + lVar4))[1] = param_2;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108d02958;
      puStack_90 = &UNK_110858dc0;
      uStack_88 = param_3;
      dStack_80 = param_1;
      dStack_78 = param_2;
      func_0x00010bf03460(0x3fd3333333333333,0,0x3fe851eb851eb852,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_4,2,&puStack_a8,0);
      uVar1 = *(ulong *)(param_3 + (long)_DAT_11277aeb0);
      func_0x00010bf8e440(param_1,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c194460(*(undefined8 *)(param_3 + (long)_DAT_11277aeb4),param_4,uVar1);
    }
  }
  _objc_release(uVar1);
LAB_108d02838:
  _objc_release(param_5);
  return;
}



/* Entry: 108d02958; end: 108d029df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02958(long param_1,undefined8 param_2)

{
  func_0x00010c192060(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277aeb4),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1920b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),0xc052c00000000000,*(undefined8 *)(param_1 + 0x20),
             PTR_s_setDropletOriginY_offsetX__112642248);
  return;
}



/* Entry: 108d029e0; end: 108d02a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d029e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bea3c00(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar2 = (long)_DAT_11277aeb4;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,&uStack_60);
  func_0x00010c192060(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf8ea20(*(undefined8 *)(param_1 + 0x28),uVar3,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277aeb0));
  func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf345e0(*(undefined8 *)(lVar1 + lVar2));
  func_0x00010c1920a0(uVar3,0,lVar1);
  func_0x00010bf02fe0(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d02aa0; end: 108d02b37; -[SCEmojiPickerView _animatePath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277aeac);
  _objc_retain(param_3);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1040();
  _objc_release(param_3);
  func_0x00010c14c6a0(uVar3,param_2,puVar1,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108d02b38; end: 108d02bf7; -[SCEmojiPickerView animatePathDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02b38(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_11277aeac;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460();
  dVar4 = param_1 * 0.5;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x00010c0d18c0(0,dVar4);
  func_0x00010bef98c0(0,param_1 - dVar4,puVar2);
  func_0x00010bdcaf00(param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108d02bf8; end: 108d02d8f; -[SCEmojiPickerView animatePathForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02bf8(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((*(byte *)(param_3 + _DAT_11277aec0) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  lVar4 = (long)_DAT_11277aeac;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460();
  dVar8 = param_1 * 0.5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 - dVar8;
  _objc_release(uVar2);
  dVar5 = 0.0;
  dVar7 = 0.0;
  func_0x00010bf512a0(param_3,param_4,0);
  func_0x00010bf99640(*(undefined8 *)(param_3 + _DAT_11277aeb0),param_4,1);
  dVar7 = dVar7 + dVar5;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  dVar6 = dVar5;
  _objc_release(puVar3);
  if (dVar7 < dVar5) {
    func_0x00010bf4ade0(param_3);
    param_2 = param_2 / dVar6;
    if (param_2 <= 1.0) {
      param_2 = 1.0;
    }
    param_2 = param_2 + -1.0;
    if (0.0 < param_2) {
      param_2 = param_2 + 1.0;
      _log10();
    }
    *(double *)(param_3 + _DAT_11277aecc) = param_2 + 1.0;
    param_1 = param_1 * (param_2 + 1.0);
  }
  func_0x00010c0d18c0(0,dVar8,puVar1);
  func_0x00010bef98c0(0,param_1,puVar1);
  func_0x00010bdcaf00(param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d02d90; end: 108d02ddb; -[SCEmojiPickerView containerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d02d90(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c29d520();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf99650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + _DAT_11277aeb0),
               PTR_s_estimateContentHeightWithExpand__1125c3f38,
               *(undefined1 *)(param_2 + _DAT_11277aec0));
    return param_1;
  }
  return 0x4039000000000000;
}



/* Entry: 108d02ddc; end: 108d02f0f; -[SCEmojiPickerView shouldExpandHeightWithGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d02ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11277aec0) & 1) == 0) {
    dVar3 = 0.0;
    dVar5 = 0.0;
    func_0x00010bf512a0(param_1,param_2,0);
    dVar6 = dVar5;
    func_0x00010bf99640(*(undefined8 *)(param_1 + _DAT_11277aeb0),param_2,1);
    dVar5 = dVar5 + dVar3;
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxY();
    dVar4 = dVar3;
    _objc_release(puVar1);
    if (dVar5 <= dVar3) {
      func_0x00010c09ef00(param_3,param_2,param_1);
      func_0x00010bf20c00(param_1);
      _CGRectGetHeight();
      if (dVar4 < dVar6) {
        func_0x00010bf4ade0(param_1);
        dVar4 = dVar6 / dVar4 + -1.0;
        if (0.0 < dVar4) {
          dVar4 = dVar4 + 1.0;
          _log10();
        }
        dVar4 = dVar4 + 1.0;
        *(double *)(param_1 + _DAT_11277aecc) = dVar4;
        if (dVar4 <= 1.0) {
          dVar4 = 1.0;
        }
        bVar2 = 1.1 < dVar4;
        goto LAB_108d02ef0;
      }
    }
  }
  bVar2 = false;
LAB_108d02ef0:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108d02f10; end: 108d02f2f; -[SCEmojiPickerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02f10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277aed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d02f30; end: 108d02f43; -[SCEmojiPickerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02f30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277aed0,param_3);
  return;
}



/* Entry: 108d02f44; end: 108d02fbf; -[SCEmojiPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d02f44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277aed0);
  _objc_storeStrong(param_1 + _DAT_11277aebc,0);
  _objc_storeStrong(param_1 + _DAT_11277aeb8,0);
  _objc_storeStrong(param_1 + _DAT_11277aeb4,0);
  _objc_storeStrong(param_1 + _DAT_11277aeb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277aeac,0);
  return;
}



/* Entry: 108d02fc0; end: 108d0344b; -[SCPinchResizeTooltipView initWithFrame:simpleContentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d02fc0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126fe4f8;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11277aee0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    func_0x00010c21e900(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11277aee4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x000109201a90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x4014000000000000;
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c23d5a0(param_3,0x403c000000000000,uVar2);
    _objc_release(puVar3);
    dVar8 = (double)(long)param_3 + 18.0;
    dVar7 = 28.0;
    dVar6 = dVar8;
    func_0x00010c19f0e0(0,0,dVar8,0x403c000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11277aee8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x401c000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3f000000;
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7620(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bf20c00(puVar1);
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0((dVar6 - dVar8) * 0.5,dVar7 + -28.0 + 14.0,dVar8,0x403c000000000000,
                        *(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010c1a7f60(puVar1);
    func_0x00010c1677c0(0,puVar1);
    func_0x00010c18dc00(puVar1);
    func_0x00010c200180(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277aeec) = 0;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d0344c; end: 108d034f7; -[SCPinchResizeTooltipView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0344c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe4f8;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11277aee4));
  dVar1 = param_3;
  dVar2 = param_4;
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0((dVar1 - param_3) * 0.5,(dVar2 - param_4) + 14.0,param_3,param_4,
                      *(undefined8 *)(param_5 + _DAT_11277aee8));
  return;
}



/* Entry: 108d034f8; end: 108d0350b; -[SCPinchResizeTooltipView show] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d034f8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277aeec) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be15070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchTooltipAnimation_112562db8);
  return;
}



/* Entry: 108d0350c; end: 108d0364b; -[SCPinchResizeTooltipView _fetchTooltipAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0350c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277aee0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c13e600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d0364c; end: 108d036f3;  */

void FUN_108d0364c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bfcaaa0(), lVar1 == 0)) {
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2720;
    _objc_alloc(PTR_PTR_1126b2720);
    func_0x00010c008240();
    func_0x00010c1a9f00(param_1);
    _objc_release(puVar2);
    func_0x00010beba540(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d036f4; end: 108d037fb; -[SCPinchResizeTooltipView _showPinchResizeTooltip] */

void FUN_108d036f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108d037fc;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_58 = param_1;
  func_0x000107c312cc("APPSTORE",&puStack_78);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108d038b0;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_48);
  func_0x000107c312d4(0x40f44444,"APPSTORE",&puStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108d037fc; end: 108d038a3;  */

void FUN_108d037fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a7f60(lVar1,param_2,0);
    func_0x00010c24dbc0(lVar1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108d038a4;
    puStack_30 = &UNK_110842e18;
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,
                        &puStack_48,0);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108d038a4; end: 108d038af;  */

void FUN_108d038a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d038b0; end: 108d03907;  */

void FUN_108d038b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010bf5f360(), 3 < uVar2)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfe1560();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d03908; end: 108d03a33; -[SCPinchResizeTooltipView hide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03908(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  ppuVar5 = &puStack_90;
  if (*(char *)(param_1 + (long)_DAT_11277aeec) == '\x01') {
    *(undefined1 *)(param_1 + (long)_DAT_11277aeec) = 0;
    uVar2 = param_1;
    func_0x00010bf5f360();
    uVar6 = 0;
    if (uVar2 < 4) {
      uVar3 = param_1;
      func_0x00010c22e6e0(param_1,param_2,0);
      uVar6 = 0;
      if ((uVar2 != 3) && ((uVar3 & 1) == 0)) {
        uVar2 = param_1;
        func_0x00010bf7a1a0(param_1,param_2,0);
        uVar6 = (uint)uVar2 ^ 1;
      }
    }
    func_0x00010c200180(param_1,param_2,uVar6);
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d03a34;
  puStack_50 = &UNK_110842e18;
  ppuVar4 = &puStack_68;
  uStack_48 = param_1;
  _objc_retainBlock(ppuVar4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108d03a40;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_1;
  _objc_retainBlock(&puStack_90);
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,ppuVar4,
                      ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 108d03a34; end: 108d03a3f;  */

void FUN_108d03a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d03a40; end: 108d03a7b;  */

void FUN_108d03a40(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,1);
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 108d03a7c; end: 108d03afb; -[SCPinchResizeTooltipView currentLoopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108d03a7c(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c06c0e0();
  if ((int)lVar1 == 0) {
    if ((*(double *)(param_2 + _DAT_11277aef0) <= 0.0) ||
       (*(double *)(param_2 + _DAT_11277aef4) <= 0.0)) {
      return 0;
    }
    param_1 = *(double *)(param_2 + _DAT_11277aef4) - *(double *)(param_2 + _DAT_11277aef0);
  }
  else {
    _CACurrentMediaTime();
    param_1 = param_1 - *(double *)(param_2 + _DAT_11277aef0);
  }
  return (long)(param_1 / 1.8333333333333333);
}



/* Entry: 108d03afc; end: 108d03b4b; -[SCPinchResizeTooltipView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03afc(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11277aef0) = param_1;
  puStack_28 = PTR_PTR_1126fe4f8;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108d03b4c; end: 108d03b9b; -[SCPinchResizeTooltipView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03b4c(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11277aef4) = param_1;
  puStack_28 = PTR_PTR_1126fe4f8;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108d03b9c; end: 108d03bcf; -[SCPinchResizeTooltipView isAnimating] */

void FUN_108d03b9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fe4f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_isAnimating_1125f8a48);
  return;
}



/* Entry: 108d03bd0; end: 108d03bdf; -[SCPinchResizeTooltipView setCurrentLoopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277aed4) = param_3;
  return;
}



/* Entry: 108d03be0; end: 108d03bef; -[SCPinchResizeTooltipView didResizeBrush] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d03be0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aed8);
}



/* Entry: 108d03bf0; end: 108d03bff; -[SCPinchResizeTooltipView setDidResizeBrush:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03bf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aed8) = param_3;
  return;
}



/* Entry: 108d03c00; end: 108d03c0f; -[SCPinchResizeTooltipView shouldBrieflyRedisplayPinchResizeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d03c00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aedc);
}



/* Entry: 108d03c10; end: 108d03c1f; -[SCPinchResizeTooltipView setShouldBrieflyRedisplayPinchResizeTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03c10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aedc) = param_3;
  return;
}



/* Entry: 108d03c20; end: 108d03c6f; -[SCPinchResizeTooltipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d03c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277aee0,0);
  _objc_storeStrong(param_1 + _DAT_11277aee4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277aee8,0);
  return;
}



/* Entry: 108d03c70; end: 108d03d63; -[SCGeoFilterView displayName] */

void FUN_108d03c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e77038);
  if ((int)uVar2 == 0) {
    uVar2 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e77058);
    if ((int)uVar2 == 0) {
      func_0x000109201ac0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000109201b08();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000109201aa8();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d03d64; end: 108d03d67; -[SCGeoFilterView pan:] */

void FUN_108d03d64(void)

{
  return;
}



/* Entry: 108d03d68; end: 108d03d6b; -[SCGeoFilterView rotation:] */

void FUN_108d03d68(void)

{
  return;
}


