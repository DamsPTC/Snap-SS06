/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085a4fb0; end: 1085a4fbf; -[SCItemViewModel accessoryImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4fb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ab0);
}



/* Entry: 1085a4fc0; end: 1085a4fcb; -[SCItemViewModel setAccessoryImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085a4fcc; end: 1085a4fdb; -[SCItemViewModel disclosureImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ab4);
}



/* Entry: 1085a4fdc; end: 1085a4fe7; -[SCItemViewModel setDisclosureImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085a4fe8; end: 1085a5067; -[SCItemViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4fe8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776ab4,0);
  _objc_storeStrong(param_1 + _DAT_112776ab0,0);
  _objc_storeStrong(param_1 + _DAT_112776aa4,0);
  _objc_storeStrong(param_1 + _DAT_112776aac,0);
  _objc_storeStrong(param_1 + _DAT_112776aa0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776aa8,0);
  return;
}



/* Entry: 1085a5068; end: 1085a5313; -[SCItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1085a5068(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1085a5314;
  puStack_80 = &UNK_110868d10;
  _objc_retain(puVar4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1085a5374;
  puStack_a8 = &UNK_110868d10;
  puStack_78 = puVar4;
  _objc_retain(puVar2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1085a5400;
  puStack_d0 = &UNK_110868d10;
  puStack_a0 = puVar2;
  _objc_retain(puVar3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1085a5428;
  puStack_f8 = &UNK_110a580c0;
  puStack_c8 = puVar3;
  _objc_retain(puVar3);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1085a548c;
  puStack_120 = &UNK_110868d10;
  puStack_f0 = puVar3;
  _objc_retain(puVar5);
  puStack_140 = PTR_PTR_1126fce68;
  puVar6 = &uStack_148;
  uStack_148 = param_1;
  puStack_118 = puVar5;
  _objc_msgSendSuper2(puVar6,PTR_s_initWithAccessoryViewProvider_ac_11253bdb8,&puStack_98,
                      &PTR___NSConcreteGlobalBlock_110a58060,&puStack_c0,
                      &PTR___NSConcreteGlobalBlock_110a580a0,&puStack_e8,&puStack_110,&puStack_138,
                      &PTR___NSConcreteGlobalBlock_110a580f0);
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112776ab8;
    _objc_retain(puVar4);
    uVar8 = *(undefined8 *)((long)puVar6 + lVar7);
    *(undefined **)((long)puVar6 + lVar7) = puVar4;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776abc;
    _objc_retain(puVar2);
    uVar8 = *(undefined8 *)((long)puVar6 + lVar7);
    *(undefined **)((long)puVar6 + lVar7) = puVar2;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776ac0;
    _objc_retain(puVar3);
    uVar8 = *(undefined8 *)((long)puVar6 + lVar7);
    *(undefined **)((long)puVar6 + lVar7) = puVar3;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776ac4;
    _objc_retain(puVar5);
    uVar8 = *(undefined8 *)((long)puVar6 + lVar7);
    *(undefined **)((long)puVar6 + lVar7) = puVar5;
    _objc_release(uVar8);
  }
  _objc_release(puStack_118);
  _objc_release(puStack_f0);
  _objc_release(puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar6;
}



/* Entry: 1085a5314; end: 1085a539b;  */

void FUN_1085a5314(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a539c; end: 1085a53ff;  */

bool FUN_1085a539c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf0e540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 1085a5400; end: 1085a5427;  */

void FUN_1085a5400(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a5428; end: 1085a548b;  */

bool FUN_1085a5428(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf0e540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1085a548c; end: 1085a54eb;  */

void FUN_1085a548c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a54ec; end: 1085a5813; -[SCItemView initWithAccessoryView:disclosureView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1085a54ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  if (param_3 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  else {
    puVar6 = (undefined *)0x0;
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  PTR__OBJC_CLASS___UIImageView_1126aec28 = puVar4;
  if (param_4 == 0) {
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1085a5814;
  puStack_a0 = &UNK_110a58110;
  _objc_retain(param_3);
  lStack_98 = param_3;
  _objc_retain(puVar6);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1085a5850;
  puStack_c8 = &UNK_110868d10;
  puStack_90 = puVar6;
  _objc_retain(puVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1085a58dc;
  puStack_f0 = &UNK_110868d10;
  puStack_c0 = puVar2;
  _objc_retain(puVar3);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1085a5904;
  puStack_118 = &UNK_110a580c0;
  puStack_e8 = puVar3;
  _objc_retain(puVar3);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1085a5968;
  puStack_148 = &UNK_110a58110;
  puStack_110 = puVar3;
  _objc_retain(param_4);
  lStack_140 = param_4;
  _objc_retain(puVar4);
  puStack_168 = PTR_PTR_1126fce68;
  puVar5 = &uStack_170;
  uStack_170 = param_1;
  puStack_138 = puVar4;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithAccessoryViewProvider_ac_11253bdb8,&puStack_b8,
                      &PTR___NSConcreteGlobalBlock_110a58140,&puStack_e0,
                      &PTR___NSConcreteGlobalBlock_110a58160,&puStack_108,&puStack_130,&puStack_160,
                      &PTR___NSConcreteGlobalBlock_110a58180);
  if (puVar5 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112776abc;
    _objc_retain(puVar2);
    uVar8 = *(undefined8 *)((long)puVar5 + lVar7);
    *(undefined **)((long)puVar5 + lVar7) = puVar2;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776ac0;
    _objc_retain(puVar3);
    uVar8 = *(undefined8 *)((long)puVar5 + lVar7);
    *(undefined **)((long)puVar5 + lVar7) = puVar3;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776ab8;
    _objc_retain(puVar6);
    uVar8 = *(undefined8 *)((long)puVar5 + lVar7);
    *(undefined **)((long)puVar5 + lVar7) = puVar6;
    _objc_release(uVar8);
    lVar7 = (long)_DAT_112776ac4;
    _objc_retain(puVar4);
    uVar8 = *(undefined8 *)((long)puVar5 + lVar7);
    *(undefined **)((long)puVar5 + lVar7) = puVar4;
    _objc_release(uVar8);
  }
  _objc_release(puStack_138);
  _objc_release(lStack_140);
  _objc_release(puStack_110);
  _objc_release(puStack_e8);
  _objc_release(puStack_c0);
  _objc_release(puStack_90);
  _objc_release(lStack_98);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1085a5814; end: 1085a5843;  */

void FUN_1085a5814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085a5844; end: 1085a584f;  */

bool FUN_1085a5844(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 1085a5850; end: 1085a5877;  */

void FUN_1085a5850(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a5878; end: 1085a58db;  */

bool FUN_1085a5878(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf0e540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 1085a58dc; end: 1085a5903;  */

void FUN_1085a58dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a5904; end: 1085a5967;  */

bool FUN_1085a5904(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf0e540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1085a5968; end: 1085a5997;  */

void FUN_1085a5968(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085a5998; end: 1085a59a3;  */

bool FUN_1085a5998(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 1085a59a4; end: 1085a59df; -[SCItemView prepareForReuse] */

void FUN_1085a59a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3f48;
  _objc_alloc_init(PTR_PTR_1126d3f48);
  func_0x00010bf47d60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085a59e0; end: 1085a5a4b; -[SCItemView topContentViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085a59e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112776abc);
  func_0x00010bf0e540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1085a5a4c; end: 1085a5ab7; -[SCItemView bottomContentViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085a5a4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112776ac0);
  func_0x00010bf0e540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1085a5ab8; end: 1085a5b03; -[SCItemView accessoryViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085a5ab8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112776ab8);
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 1085a5b04; end: 1085a5b4f; -[SCItemView disclosureViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1085a5b04(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112776ac4);
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 1085a5b50; end: 1085a5baf; -[SCItemView topContentSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1085a5b50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112776abc);
  uVar1 = uVar2;
  func_0x00010c0def20(uVar2);
  func_0x00010c26c660(0,0,param_1,param_2,uVar2,param_4,uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1085a5bb0; end: 1085a5c0f; -[SCItemView bottomContentSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1085a5bb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112776ac0);
  uVar1 = uVar2;
  func_0x00010c0def20(uVar2);
  func_0x00010c26c660(0,0,param_1,param_2,uVar2,param_4,uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1085a5c10; end: 1085a5f53; -[SCItemView configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085a5c10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126fce68;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_configureWithViewModel__1125af900,param_3);
  puVar5 = PTR_PTR_1126d3f50;
  lVar6 = param_3;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2716c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_78 = uVar7;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x0001006decbc(lVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e4a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112776abc));
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126d3f50;
  lVar6 = param_3;
  func_0x00010c2610e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c261100(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_88 = uVar7;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x0001006decbc(lVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e4a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112776ac0));
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_112776ab8;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar1 = param_3;
    func_0x00010beed180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar1);
  }
  lVar6 = (long)_DAT_112776ac4;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar1 = param_3;
    func_0x00010bf811e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar1);
  }
  func_0x00010c1cbe20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_112776abc);
}



/* Entry: 1085a5f54; end: 1085a5f63; -[SCItemView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a5f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776abc);
}



/* Entry: 1085a5f64; end: 1085a5f73; -[SCItemView subtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a5f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ac0);
}



/* Entry: 1085a5f74; end: 1085a5f83; -[SCItemView accessoryImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a5f74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ab8);
}



/* Entry: 1085a5f84; end: 1085a5f93; -[SCItemView disclosureImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a5f84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776ac4);
}



/* Entry: 1085a5f94; end: 1085a5ff3; -[SCItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a5f94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776ac4,0);
  _objc_storeStrong(param_1 + _DAT_112776ab8,0);
  _objc_storeStrong(param_1 + _DAT_112776ac0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776abc,0);
  return;
}



/* Entry: 1085a5ff4; end: 1085a604f; -[SCUserSession imageDownloader] */

void FUN_1085a5ff4(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085a6050; end: 1085a60eb;  */

void FUN_1085a6050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bdfd0;
  _objc_opt_class(PTR_PTR_1126bdfd0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110a581c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a60ec; end: 1085a60f3;  */

void FUN_1085a60ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageDownloader_1125d7728);
  return;
}



/* Entry: 1085a60f4; end: 1085a61b7; -[SCSpectaclesContentPageScope initWithDelegate:uiContainer:] */

undefined8 *
FUN_1085a60f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_1126fce70;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 1085a61b8; end: 1085a61cf; -[SCSpectaclesContentPageScope delegate] */

void FUN_1085a61b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a61d0; end: 1085a61d7; -[SCSpectaclesContentPageScope uiContainer] */

undefined8 FUN_1085a61d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085a61d8; end: 1085a6203; -[SCSpectaclesContentPageScope .cxx_destruct] */

void FUN_1085a61d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085a6204; end: 1085a6547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1085a6204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar9 = param_5;
  func_0x00010c11c420();
  if (puVar9 != (undefined *)0x61) {
    puVar9 = (undefined *)0x0;
    goto LAB_1085a6500;
  }
  puVar9 = param_5;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar11 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar9);
  puVar9 = puVar2;
  if (((ulong)puVar11 & 1) == 0) {
    puVar9 = (undefined *)0x0;
  }
  _objc_retain(puVar9);
  _objc_release(puVar2);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(0);
    puVar11 = (undefined *)0x0;
LAB_1085a64f4:
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar4 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar9);
    puVar9 = puVar11;
    if (((ulong)puVar4 & 1) == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar11);
    if (puVar9 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = puVar11;
      _objc_opt_isKindOfClass(puVar11,puVar4);
      puVar4 = puVar11;
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar11);
      if (puVar4 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        param_1 = 0;
        _objc_retain(puVar11);
        puVar5 = puVar11;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar5 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar11);
            }
            uVar12 = *(ulong *)((long)puVar10 * 8);
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_opt_isKindOfClass(uVar12,puVar7);
            if ((uVar12 & 1) != 0) {
              func_0x00010befa120(puVar6);
            }
            puVar10 = puVar10 + 1;
          } while (puVar5 != puVar10);
          puVar5 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        puVar11 = puVar6;
        func_0x00010bf51e00();
        _objc_release(puVar6);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((puVar11 == (undefined *)0x0) ||
       (puVar9 = puVar11, func_0x00010bf529e0(), puVar9 != (undefined *)0x1)) goto LAB_1085a64f4;
    puVar2 = puVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar11);
LAB_1085a6500:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar9;
  }
  ___stack_chk_fail();
  func_0x00010c181140(param_2,*(undefined8 *)(param_5 + _DAT_112776ae0));
  func_0x00010c181140(param_1,*(undefined8 *)(param_5 + _DAT_112776ae8));
  func_0x00010c181140(param_3,*(undefined8 *)(param_5 + _DAT_112776aec));
  func_0x00010c181140(param_4,*(undefined8 *)(param_5 + _DAT_112776ae4));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_layoutIfNeeded_112600d80);
  return param_5;
}



/* Entry: 1085a6548; end: 1085a65cb; -[SCSwipeViewContainerView panTransitionCoordinatedViewWillBeCoveredWithInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010c181140(param_2,*(undefined8 *)(param_5 + _DAT_112776ae0));
  func_0x00010c181140(param_1,*(undefined8 *)(param_5 + _DAT_112776ae8));
  func_0x00010c181140(param_3,*(undefined8 *)(param_5 + _DAT_112776aec));
  func_0x00010c181140(param_4,*(undefined8 *)(param_5 + _DAT_112776ae4));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1085a65cc; end: 1085a65db; -[SCSwipeViewContainerView containedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a65cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776afc);
}



/* Entry: 1085a65dc; end: 1085a65eb; -[SCSwipeViewContainerView hideCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085a65dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776ad0);
}



/* Entry: 1085a65ec; end: 1085a66e3; -[SCSwipeViewContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a65ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776afc,0);
  _objc_storeStrong(param_1 + _DAT_112776aec,0);
  _objc_storeStrong(param_1 + _DAT_112776ae8,0);
  _objc_storeStrong(param_1 + _DAT_112776ae4,0);
  _objc_storeStrong(param_1 + _DAT_112776ae0,0);
  _objc_storeStrong(param_1 + _DAT_112776af8,0);
  _objc_storeStrong(param_1 + _DAT_112776af4,0);
  _objc_storeStrong(param_1 + _DAT_112776af0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776adc,0);
  return;
}



/* Entry: 1085a66e4; end: 1085a6737; -[SCSwipeViewContainerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a66e4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1);
  puStack_28 = PTR_PTR_1126fce80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085a6738; end: 1085a673f; -[SCSwipeViewContainerViewController presentationObserverLoggingEnabled] */

undefined8 FUN_1085a6738(void)

{
  return 1;
}



/* Entry: 1085a6740; end: 1085a674f; -[SCSwipeViewContainerViewController panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776b10),PTR_s_target_112678178);
  return;
}



/* Entry: 1085a6750; end: 1085a6783; -[SCSwipeViewContainerViewController onRingFlashEnable] */

void FUN_1085a6750(undefined8 param_1)

{
  func_0x00010c141e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a6784; end: 1085a6807; -[SCSwipeViewContainerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  func_0x00010c1a1780(param_1);
  func_0x00010c29e820(*(undefined8 *)(param_1 + _DAT_112776b08));
  return;
}



/* Entry: 1085a6808; end: 1085a688b; -[SCSwipeViewContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1,param_3);
  func_0x00010c1d92a0(param_1);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48,param_3);
  func_0x00010c29c860(*(undefined8 *)(param_1 + _DAT_112776b08));
  return;
}



/* Entry: 1085a688c; end: 1085a68bb; -[SCSwipeViewContainerViewController childViewControllerForHomeIndicatorAutoHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a688c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a68bc; end: 1085a68eb; -[SCSwipeViewContainerViewController childViewControllerForScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a68bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a68ec; end: 1085a6963; -[SCSwipeViewContainerViewController handleUserTriggeredNavigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a68ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a59f0;
  lVar4 = *(long *)(param_1 + _DAT_112776b18);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x000107c318f8(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    func_0x00010bfd30c0(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085a6964; end: 1085a69eb; -[SCSwipeViewContainerViewController didTapNewTabToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6964(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_1126a59f0;
  lVar6 = (long)_DAT_112776b18;
  lVar5 = *(long *)(param_1 + lVar6);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x000107c318f8(lVar5,puVar2);
  lVar1 = lVar5;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + lVar6);
    _objc_opt_respondsToSelector(uVar4,PTR_s_didTapNewTabToDismiss_1125bcd10);
    if ((uVar4 & 1) != 0) {
      func_0x00010bf7cda0(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085a69ec; end: 1085a6aab; -[SCSwipeViewContainerViewController detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a69ec(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar1 = param_1;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_112776b18;
  }
  else {
    func_0x00010c1818c0(*(undefined8 *)(param_1 + (long)_DAT_112776b1c),param_2,0);
    lVar3 = (long)_DAT_112776b18;
    func_0x00010c2a6740(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar3));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112776b24);
  *(undefined8 *)(param_1 + (long)_DAT_112776b24) = 0;
  _objc_release(uVar2);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a6aac; end: 1085a6ae3; -[SCSwipeViewContainerViewController setOverlayItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b30);
  *(undefined8 *)(param_1 + _DAT_112776b30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a6ae4; end: 1085a6bbb; -[SCSwipeViewContainerViewController overlayItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6ae4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_1126a5648;
  lVar6 = (long)_DAT_112776b30;
  uVar4 = *(ulong *)(param_1 + lVar6);
  if (uVar4 == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112776b18);
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x000107c318f8(uVar5,puVar2);
    uVar1 = uVar5;
    if ((int)uVar4 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_overlayItem_1126198f0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar1;
      func_0x00010c0efb60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar4;
      _objc_release(uVar3);
      uVar4 = uVar1;
      func_0x00010c0efb60(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  else {
    _objc_retain(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a6bbc; end: 1085a6bd7; -[SCSwipeViewContainerViewController hideTopRoundCornerViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6bbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776b20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776b1c),PTR_s_setHideCorners__112647a78);
  return;
}



/* Entry: 1085a6bd8; end: 1085a6c5f; -[SCSwipeViewContainerViewController mightDismissWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6bd8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5290;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_mightDismissWithStyle__112610ef0);
  if ((uVar3 & 1) != 0) {
    func_0x00010c0cd360(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a6c60; end: 1085a6cc3; -[SCSwipeViewContainerViewController panningTransitionCoordinator:wantsInteractionControllerForDirection:isEdgePan:] */

void FUN_1085a6c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c068500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0684e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a6cc4; end: 1085a6d13; -[SCSwipeViewContainerViewController PPVNavigationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6cc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776b18;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_PPVNavigationLogger_11254e138);
  if ((uVar1 & 1) != 0) {
    func_0x00010bdc1e60(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a6d14; end: 1085a6d9f; -[SCSwipeViewContainerViewController shouldDisableShakeToReportOnCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1085a6d14(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar3 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar3);
  uVar4 = uVar3;
  func_0x000107c318f8(uVar3,puVar2);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar4 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldDisableShakeToReportOnCurr_112669630);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c22f020(uVar1);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1085a6da0; end: 1085a6e17; -[SCSwipeViewContainerViewController willStartCensoringScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6da0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_willStartCensoringScreenshot_112687530);
  if ((uVar3 & 1) != 0) {
    func_0x00010c2a6c20(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a6e18; end: 1085a6e8f; -[SCSwipeViewContainerViewController willEndCensoringScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6e18(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_willEndCensoringScreenshot_1126872e8);
  if ((uVar3 & 1) != 0) {
    func_0x00010c2a6300(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a6e90; end: 1085a6f1f; -[SCSwipeViewContainerViewController defaultProjectNameV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6e90(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV3_1125b81a0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010bf69fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a6f20; end: 1085a6faf; -[SCSwipeViewContainerViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6f20(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultProjectNameV2_1125b8198);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010bf69fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a6fb0; end: 1085a703f; -[SCSwipeViewContainerViewController defaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a6fb0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultSubProjectName_1125b8320);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010bf6a5e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a7040; end: 1085a70cf; -[SCSwipeViewContainerViewController jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a7040(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5038;
  uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_jiraMetaInfo_1125fef30);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010c085480(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085a70d0; end: 1085a70ff; -[SCSwipeViewContainerViewController isAnimatingScroll] */

void FUN_1085a70d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0799c0();
  if ((int)uVar1 != 0) {
    func_0x00010c0741c0(param_1);
  }
  return;
}



/* Entry: 1085a7100; end: 1085a71a7; -[SCSwipeViewContainerViewController lockScrollWithRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a7100(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112776b38;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      lVar2 = *(long *)(param_1 + lVar5);
    }
    func_0x00010befa120(lVar2,param_2,param_3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112776b10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a71a8; end: 1085a7237; -[SCSwipeViewContainerViewController unlockScrollWithRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a71a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112776b38;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112776b10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a7238; end: 1085a7267; -[SCSwipeViewContainerViewController childViewControllerForCustomStatusBarStyleContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a7238(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a7268; end: 1085a7287; -[SCSwipeViewContainerViewController interactionControllerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a7268(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776b3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a7288; end: 1085a72a7; -[SCSwipeViewContainerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a7288(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776b28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a72a8; end: 1085a739b; -[SCSwipeViewContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a72a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112776b40);
  _objc_destroyWeak(param_1 + _DAT_112776b28);
  _objc_destroyWeak(param_1 + _DAT_112776b3c);
  _objc_storeStrong(param_1 + _DAT_112776b30,0);
  _objc_storeStrong(param_1 + _DAT_112776b2c,0);
  _objc_storeStrong(param_1 + _DAT_112776b24,0);
  _objc_storeStrong(param_1 + _DAT_112776b04,0);
  _objc_storeStrong(param_1 + _DAT_112776b10,0);
  _objc_storeStrong(param_1 + _DAT_112776b08,0);
  _objc_storeStrong(param_1 + _DAT_112776b34,0);
  _objc_storeStrong(param_1 + _DAT_112776b38,0);
  _objc_storeStrong(param_1 + _DAT_112776b18,0);
  _objc_storeStrong(param_1 + _DAT_112776b0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776b1c,0);
  return;
}



/* Entry: 1085a739c; end: 1085a73c3; -[SCPageLoadTrace beginPageInjection] */

void FUN_1085a739c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf18a20(param_1,param_2,1);
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}



/* Entry: 1085a73c4; end: 1085a73ef; -[SCPageLoadTrace endPageInjection] */

void FUN_1085a73c4(long param_1,undefined8 param_2)

{
  func_0x00010bf954c0(param_1,param_2,*(undefined8 *)(param_1 + 0x30),1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1085a73f0; end: 1085a7417; -[SCPageLoadTrace beginViewModelCreation] */

void FUN_1085a73f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf18a20(param_1,param_2,3);
  *(long *)(param_1 + 0x40) = lVar1;
  return;
}



/* Entry: 1085a7418; end: 1085a7443; -[SCPageLoadTrace endViewModelCreation] */

void FUN_1085a7418(long param_1,undefined8 param_2)

{
  func_0x00010bf954c0(param_1,param_2,*(undefined8 *)(param_1 + 0x40),3);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1085a7444; end: 1085a749b; -[SCPageLoadTrace cancelPagePresentation] */

void FUN_1085a7444(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1085a749c; end: 1085a74c3; -[SCPageLoadTrace viewWillDisappear] */

void FUN_1085a749c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf18a20(param_1,param_2,6);
  *(long *)(param_1 + 0x20) = lVar1;
  return;
}



/* Entry: 1085a74c4; end: 1085a74ef; -[SCPageLoadTrace viewDidDisappear] */

void FUN_1085a74c4(long param_1,undefined8 param_2)

{
  func_0x00010bf954c0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),6);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1085a74f0; end: 1085a7517; -[SCPageLoadTrace viewWillLayoutSubviews] */

void FUN_1085a74f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf18a20(param_1,param_2,7);
  *(long *)(param_1 + 0x28) = lVar1;
  return;
}



/* Entry: 1085a7518; end: 1085a7543; -[SCPageLoadTrace viewDidLayoutSubviews] */

void FUN_1085a7518(long param_1,undefined8 param_2)

{
  func_0x00010bf954c0(param_1,param_2,*(undefined8 *)(param_1 + 0x28),7);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1085a7544; end: 1085a75ff; -[SCPageLoadTrace beginPageEvent:] */

void FUN_1085a7544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ee4bd8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar4;
  func_0x000100878794();
  if (puVar1 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3,param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a7600; end: 1085a76e7; -[SCPageLoadTrace endPageEvent:] */

void FUN_1085a7600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ee4bd8);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b4ca0(lVar1);
    func_0x00010bf94200(puVar2,param_2,lVar3,puVar4);
    _objc_release(puVar2);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a76e8; end: 1085a7717; -[SCPageLoadTrace .cxx_destruct] */

void FUN_1085a76e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 1085a7718; end: 1085a771f; -[SCNotificationCustomUIServices plugInCollector] */

undefined8 FUN_1085a7718(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085a7720; end: 1085a772b; -[SCNotificationCustomUIServices .cxx_destruct] */

void FUN_1085a7720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085a772c; end: 1085a77a7; -[SCUserTweaksEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a772c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112776b70;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = lRam0000000113827f88;
  lRam0000000113827f88 = lVar3;
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a77a8; end: 1085a77b7; -[SCUserTweaksEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a77a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112776b70);
  return;
}



/* Entry: 1085a77b8; end: 1085a77c3; -[SCPreferences setUserId:] */

void FUN_1085a77b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ee4d18);
  return;
}



/* Entry: 1085a77c4; end: 1085a77cf; -[SCPreferences setUsername:] */

void FUN_1085a77c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ee4d38);
  return;
}



/* Entry: 1085a77d0; end: 1085a77db; -[SCPreferences setLagunaId:] */

void FUN_1085a77d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ee4d58);
  return;
}



/* Entry: 1085a77dc; end: 1085a783f; -[SCPreferences userEmail] */

void FUN_1085a77dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee4d78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a7840; end: 1085a784b; -[SCPreferences setUserEmail:] */

void FUN_1085a7840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ee4d78);
  return;
}



/* Entry: 1085a784c; end: 1085a7857; +[SCCurrentPageTrackerImplementation resetStopwatch] */

void FUN_1085a784c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372c458,PTR_s_resetAndStart_11262ba78);
  return;
}



/* Entry: 1085a7858; end: 1085a78f3;  */

void FUN_1085a7858(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf07760(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a78f4; end: 1085a790f;  */

void FUN_1085a78f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


