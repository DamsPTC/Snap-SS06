/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ab8a38; end: 107ab8ba7;  */

long FUN_107ab8a38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar6 = param_1;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar7 = *plStack_120;
      unaff_x21 = &PTR____CFConstantStringClassReference_110dcffb8;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          lVar2 = *(long *)(lStack_128 + lVar8 * 8);
          func_0x00010bf0a640();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0b4ca0();
          lVar6 = lVar4 + lVar6;
          _objc_release(lVar3);
          _objc_release(lVar2);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_1;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      unaff_x22 = 0;
    }
    _objc_release(param_1);
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar6;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107ab8ba8;
  uStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  lStack_150 = lVar6;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  uVar5 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x107ab8c54;
  puStack_178 = &UNK_110848c48;
  lStack_170 = param_2;
  lStack_168 = lVar1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar5,&puStack_190);
  _objc_release(uVar5);
  _objc_release(lStack_170);
  _objc_release(param_2);
  return param_2;
}



/* Entry: 107ab8ba8; end: 107ab8cf7;  */

void FUN_107ab8ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107ab8c54;
  puStack_48 = &UNK_110848c48;
  uStack_40 = param_2;
  uStack_38 = param_1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 107ab8cf8; end: 107ab90f7;  */

void FUN_107ab8cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = param_1;
  _objc_retain();
  fVar6 = (float)uVar2;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 & 1) == 0) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar6 = fVar6 / 1000.0;
  dVar9 = (double)fVar6;
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c24d6e0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  FUN_107ab8a38(uVar2);
  func_0x00010c0a5300(dVar9,(double)(fVar6 / 1000.0),param_1,param_7);
  if ((param_4 & 1) == 0) {
    _objc_retain(param_3);
    _objc_retain(param_7);
    uVar3 = param_2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c276c80(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar3);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c064460(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar7 = dVar9;
      _objc_release(uVar3);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c064440(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = dVar7;
      _objc_release(uVar3);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c276ca0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar3);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c07f740(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(puVar1);
      func_0x00010c0ac6c0(dVar9,dVar7,dVar8,param_7);
    }
    _objc_release(param_7);
    _objc_release(param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab90f8; end: 107ab9217;  */

void FUN_107ab90f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d62b0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae020();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ab9218; end: 107ab9457;  */

void FUN_107ab9218(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c251ee0(param_4);
  func_0x00010c29bdc0(param_4);
  uVar10 = param_1;
  func_0x00010c29a4e0(param_4);
  uVar2 = uVar10;
  _objc_release(param_4);
  fVar8 = (float)uVar2;
  uVar2 = param_2;
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c0cd980(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c0c2c20(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126d62b0;
  func_0x00010c22ba80(PTR_PTR_1126d62b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80(uVar1);
  fVar9 = fVar8;
  _objc_release(uVar1);
  func_0x00010bfb2c80(uVar5);
  _objc_release(uVar5);
  func_0x00010c0a9de0(param_1,uVar10,(double)fVar8,(double)fVar9,puVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ab9458; end: 107ab9553;  */

void FUN_107ab9458(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d62b0;
  _objc_retain();
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0c00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ab9554; end: 107ab95eb;  */

void FUN_107ab9554(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_1);
    lVar2 = param_1;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ab95ec; end: 107ab96af;  */

void FUN_107ab95ec(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    uVar2 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfb7c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab96b0; end: 107ab987b;  */

void FUN_107ab96b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c07dbe0(param_3);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07dbe0(param_3);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  FUN_107b27000(param_1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1d0640(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = uVar2;
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25b720();
  uVar5 = uVar2;
  func_0x00010c25a6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c25b7c0();
  uVar7 = uVar2;
  func_0x00010c29d360(uVar2);
  FUN_107b2894c(uVar4,uVar6,uVar7);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ab987c; end: 107ab98e7; -[SCDiscoverPublisherCameosPropertiesProvider initWithCircumstanceEngine:] */

undefined1 * FUN_107ab987c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9a88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ab98e8; end: 107ab997f; -[SCDiscoverPublisherCameosPropertiesProvider pagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverPageProperties:fullSnapDoc:] */

void FUN_107ab98e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  FUN_107ab9980(param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab9980; end: 107ab9b8b;  */

void FUN_107ab9980(long param_1,int param_2,undefined **param_3,undefined ***param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **appuStack_e8 [16];
  long lStack_68;
  
  ppuVar6 = &puStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x000108f571b4();
  if (param_2 == 0) {
LAB_107ab9b40:
    ppuVar6 = (undefined **)0x0;
  }
  else {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    puStack_140 = (undefined *)0x0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar1 = param_1;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    param_4 = appuStack_e8;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar9 = 0;
        param_3 = ppuVar6;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          lVar7 = *(long *)(lStack_138 + lVar9 * 8);
          lVar3 = lVar7;
          func_0x00010c23ffa0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x000108f571b4();
          _objc_release(lVar4);
          _objc_release(lVar3);
          if ((int)lVar5 != 0) {
            func_0x00010c23ffa0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar7;
            func_0x00010c23fe00();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf0d7e0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf0d820();
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(lVar7);
            if (lVar5 != 0) {
              _objc_release(lVar1);
              goto LAB_107ab9b40;
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        param_4 = appuStack_e8;
        lVar2 = lVar1;
        ppuVar6 = &puStack_140;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110efd7d8;
    puStack_f0 = PTR____kCFBooleanTrue_11034ab68;
    param_3 = &puStack_f0;
    param_4 = &ppuStack_f8;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    ppuVar6 = param_3;
    FUN_107ab9980(param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107ab9b8c; end: 107ab9c23; -[SCDiscoverPublisherCameosPropertiesProvider attachmentPagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverAttachmentPageProperties:fullSnapDoc:] */

void FUN_107ab9b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  FUN_107ab9980(param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab9c24; end: 107ab9c2b; -[SCDiscoverPublisherCameosPropertiesProvider .cxx_destruct] */

void FUN_107ab9c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ab9c2c; end: 107ab9e87;  */

void FUN_107ab9c2c(long param_1,long param_2,undefined8 param_3,ulong param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  lVar6 = param_1;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    lVar6 = param_1;
    func_0x00010bf8c980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(lVar6);
  }
  lVar6 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    lVar6 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(lVar6);
  }
  if (param_5 != (code *)0x0) {
    uVar8 = param_6;
    (*param_5)(param_6,uVar1,uVar2,param_7,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14db60(param_3);
    _objc_release(uVar8);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab9e88; end: 107ab9f2b; -[SCDiscoverPublisherCommercePagePropertiesProvider initWithUserSession:commerceSessionBuildingFunc:lazyUserTrackedLogger:] */

undefined1 *
FUN_107ab9e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9a90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ab9f2c; end: 107aba08f; -[SCDiscoverPublisherCommercePagePropertiesProvider pagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverPageProperties:fullSnapDoc:] */

void FUN_107ab9f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x000108f56b50();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    FUN_107ab9c2c(param_3,param_4,puVar6,param_5,uVar7,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
    puVar5 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar7);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107aba090; end: 107aba1e3; -[SCDiscoverPublisherCommercePagePropertiesProvider attachmentPagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverAttachmentPageProperties:fullSnapDoc:] */

void FUN_107aba090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x000108f56b50();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    FUN_107ab9c2c(param_3,param_4,puVar5,param_5,uVar6,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010c1d0640(puVar5);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107aba1e4; end: 107aba21b; -[SCDiscoverPublisherCommercePagePropertiesProvider .cxx_destruct] */

void FUN_107aba1e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107aba21c; end: 107aba2bf; -[SCDiscoverPublisherContextPagePropertiesProvider initWithCircumstanceEngine:viewLocation:offPlatformLinkGenerationService:] */

undefined1 *
FUN_107aba21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9a98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aba2c0; end: 107aba9f3; -[SCDiscoverPublisherContextPagePropertiesProvider pagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverPageProperties:fullSnapDoc:] */

void FUN_107aba2c0(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined *param_5)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar17 = (undefined *)0x0;
    goto LAB_107aba9b8;
  }
  puVar3 = param_5;
  FUN_107b27000(param_5,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar17 = puVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar17;
  func_0x00010c06f520();
  if ((int)puVar5 == 0) {
    _objc_release(puVar17);
LAB_107aba3ac:
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = puVar3;
    func_0x00010bf46560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d7a0();
    func_0x00010c0df6e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar5);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = puVar3;
    func_0x00010bf46560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b5c0();
    func_0x00010c0df6e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar5);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = puVar3;
    func_0x00010c25a6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25b720();
    puVar7 = puVar3;
    func_0x00010c25a6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25b7c0();
    puVar9 = puVar3;
    func_0x00010c29d360(puVar3);
    FUN_107b2894c(puVar6,puVar8,puVar9);
    func_0x00010c0df6e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar17 = puVar5;
    }
    _objc_retain(puVar17);
    _objc_release(puVar5);
    _objc_opt_class(PTR_PTR_1126d52b0);
    puVar5 = puVar17;
    func_0x00010bf09f60(puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07c940(param_3);
    func_0x00010c0df6e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0822a0(param_3);
    func_0x00010c0df6e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar17);
    lVar1 = param_1;
    func_0x00010be1af20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x0001085356d8();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar10 = param_3;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x0001006372a4();
      _objc_release(uVar10);
      func_0x00010bf529e0();
      uVar10 = uVar11;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x000108f56d38();
      if ((int)uVar14 == 0) {
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar10);
      }
      else {
        func_0x00010c080160();
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar10);
      }
      uVar10 = param_3;
      func_0x00010c11b6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c0720c0();
      uVar13 = uVar11;
      if ((uVar12 & 1) == 0) {
        uVar12 = uVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar12;
        func_0x00010c23ffa0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x000108f56ee8();
        if ((int)uVar16 != 0) {
          func_0x00010bfecde0();
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar10);
          goto joined_r0x000107aba84c;
        }
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar12);
        _objc_release(uVar10);
      }
      else {
        func_0x00010bfecde0();
        _objc_release(uVar10);
joined_r0x000107aba84c:
        if (uVar13 != 0) {
          func_0x00010c1d0640(puVar4);
        }
      }
      puVar17 = PTR_PTR_1126b3af0;
      _objc_alloc(PTR_PTR_1126b3af0);
      func_0x00010bfecde0(uVar11);
      func_0x00010c054900(puVar17);
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      puVar5 = puVar4;
      func_0x000107d27920(puVar4,uVar18,lVar1,puVar17,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar4);
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(puVar17);
      _objc_release(uVar11);
    }
    if (*(long *)(param_1 + 0x10) == 0x65) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x000108f4b700();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        puVar17 = PTR_PTR_1126b2d20;
        func_0x00010bf7f080(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar17);
      }
    }
    func_0x00010bef7760(param_1);
    _objc_retain(puVar4);
    puVar17 = puVar4;
  }
  else {
    puVar5 = puVar3;
    func_0x00010c08bda0();
    _objc_release(puVar17);
    if (puVar5 == (undefined *)0x19) goto LAB_107aba3ac;
    puVar17 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107aba9b8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107aba9f4; end: 107abaa13;  */

bool FUN_107aba9f4(undefined8 param_1,long param_2)

{
  func_0x00010bef60a0(param_2);
  return param_2 == 0;
}



/* Entry: 107abaa14; end: 107abaa1b; -[SCDiscoverPublisherContextPagePropertiesProvider attachmentPagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverAttachmentPageProperties:fullSnapDoc:] */

undefined8 FUN_107abaa14(void)

{
  return 0;
}



/* Entry: 107abaa1c; end: 107abaa23; -[SCDiscoverPublisherContextPagePropertiesProvider updateViewLocation:] */

void FUN_107abaa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107abaa24; end: 107abaadb; -[SCDiscoverPublisherContextPagePropertiesProvider addCloseActionProperties:] */

void FUN_107abaa24(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d53d8;
  _objc_opt_class(PTR_PTR_1126d53d8);
  puVar3 = puVar1;
  func_0x00010bf09f60(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1d0640(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107abaadc; end: 107abac63; -[SCDiscoverPublisherContextPagePropertiesProvider _generateDeeplinkURLForStoryPlayableDataModel:snapPlayableDataModel:] */

void FUN_107abaadc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0f01a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c082620();
  if ((lVar1 == 0) || (lVar4 = lVar1, func_0x00010c08fa60(), lVar3 = lVar1, lVar4 == 0)) {
    lVar3 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    func_0x00010bf25140(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf8c980(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfbf8e0(lVar4,param_2,lVar1,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfbf8a0(lVar4,param_2,lVar1,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107abac64; end: 107abac8f; -[SCDiscoverPublisherContextPagePropertiesProvider .cxx_destruct] */

void FUN_107abac64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107abac90; end: 107abb05f; -[SCDiscoverPublisherPagePropertiesManager initWithUserSession:snapDocOperaMediaManager:snapDocConfigurer:discoverFeedDataFetcher:lazyBitmojiAvatarProvider:lazyBitmojiFriendAvatarProvider:commerceSessionBuildingFunc:lazyUserTrackedLogger:impalaOperaLayerViewControllerProviderCreator:circumstanceEngine:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:offPlatformLinkGenerationService:storiesConfigProvider:snapchatterObservableRepository:] */

undefined8 *
FUN_107abac90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f9aa0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    func_0x00010c184700(puVar1[4]);
    puVar2 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    func_0x00010c184700(puVar1[5]);
    _objc_retain(param_3);
    uVar3 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[0x19];
    puVar1[0x19] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar3);
    puVar1[0xb] = param_9;
    _objc_retain(param_11);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x15];
    puVar1[0x15] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[0x18];
    puVar1[0x18] = param_18;
    _objc_release(uVar3);
    puVar1[0x16] = 0xc;
    func_0x00010beb0100(puVar1);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107abb060; end: 107abb193; -[SCDiscoverPublisherPagePropertiesManager preparePagePropertyForSnapPlayableDataModel:storyPlayableDataModel:completion:] */

void FUN_107abb060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107abb194;
  puStack_70 = &UNK_1109f9608;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  FUN_107ab6994(param_3,uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107abb194; end: 107abb2af;  */

void FUN_107abb194(long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107abb2b0;
  puStack_78 = &UNK_11084cb90;
  _objc_copyWeak(auStack_50,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uStack_68 = uVar2;
  uStack_48 = param_2;
  uStack_47 = param_3;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = param_4;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 107abb2b0; end: 107abb2ef;  */

void FUN_107abb2b0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6f040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107abb2f0; end: 107abb417; -[SCDiscoverPublisherPagePropertiesManager getPagePropertyForSnapPlayableDataModelOnMainThread:storyPlayableDataModel:completion:] */

void FUN_107abb2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107abb418;
  puStack_60 = &UNK_110857fd0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107abb418; end: 107abb44f;  */

void FUN_107abb418(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107abb450; end: 107abb54f; -[SCDiscoverPublisherPagePropertiesManager setError:forSnapPlayableDataModel:] */

void FUN_107abb450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107abb550;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107abb550; end: 107abb583;  */

void FUN_107abb550(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107abb584; end: 107abb58f; -[SCDiscoverPublisherPagePropertiesManager updateViewLocation:] */

void FUN_107abb584(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_updateViewLocation__1126809e0);
  return;
}



/* Entry: 107abb590; end: 107abb5bf; -[SCDiscoverPublisherPagePropertiesManager updateAutoProgressingConfig:] */

void FUN_107abb590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107abb5c0; end: 107abb6c3; -[SCDiscoverPublisherPagePropertiesManager _shouldUpdateBitmojiStoriesCachedProperties:storyPlayableDataModel:fullSnapDocDataModel:] */

uint FUN_107abb5c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = param_5;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f56ee8();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0af8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = param_4;
      func_0x00010c07dbe0(param_4);
      func_0x00010c0df6e0(puVar4,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c071ae0(lVar3,param_2,puVar4);
      uVar6 = (uint)lVar5 ^ 1;
      _objc_release(puVar4);
      _objc_release(lVar3);
      goto LAB_107abb694;
    }
  }
  uVar6 = 0;
LAB_107abb694:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107abb6c4; end: 107abbf93; -[SCDiscoverPublisherPagePropertiesManager _pageDataForDataModel:storyPlayableDataModel:mediaIsLoaded:mediaIsLoading:fullSnapDocDataModel:completion:] */

void FUN_107abb6c4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  uint param_5,undefined4 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  uint uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_3;
  ppuVar23 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar3 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 == (undefined **)0x0) {
    if (param_8 != 0) {
      ppuVar19 = (undefined **)0x0;
      ppuVar23 = (undefined **)0x0;
      (**(code **)(param_8 + 0x10))(param_8,0,0,0,0);
    }
    goto LAB_107abbf38;
  }
  ppuVar19 = param_1;
  func_0x00010be1d820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar19;
  func_0x00010c0d3c80();
  _objc_release(ppuVar19);
  ppuVar19 = param_1;
  func_0x00010beb6e80();
  if ((int)ppuVar19 != 0) {
    FUN_107ab96b0(ppuVar3,param_3,param_4,param_1[0xd]);
    func_0x00010bed4780(param_1);
  }
  ppuVar19 = param_4;
  func_0x00010c22ed80(param_4);
  puVar20 = param_1[0x16];
  ppuVar23 = param_3;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar23 == (undefined **)0x0) {
    ppuVar22 = (undefined **)0x0;
  }
  else {
    ppuVar4 = param_3;
    func_0x00010c24b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar4;
    func_0x00010c24b580();
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar23);
  puVar25 = param_1[0x13];
  puVar27 = param_1[0xd];
  puVar5 = param_1[0x15];
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  FUN_107ac03e0(param_4,param_7,puVar25,puVar27,
                (uint)((ulong)puVar20 >> 2) & 1 & ((uint)ppuVar19 ^ 0xffffffff),ppuVar22,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  ppuVar23 = (undefined **)param_1[7];
  puVar27 = param_1[0x19];
  puVar20 = param_1[0xc];
  puVar5 = param_1[0xd];
  puVar25 = param_1[0xe];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = param_3;
  FUN_107abe280(param_3,param_4,puVar20,ppuVar23,puVar27,param_5,param_6,param_7,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  ppuVar6 = ppuVar22;
  func_0x000107d0492c(ppuVar22,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar6;
  func_0x00010c0f1980();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar19;
  func_0x00010c0d3c80();
  _objc_release(ppuVar19);
  ppuVar19 = ppuVar6;
  func_0x00010bf0d180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar19;
  func_0x00010c0d3c80();
  _objc_release(ppuVar19);
  ppuVar19 = param_4;
  func_0x00010c242500(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar19;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = param_3;
  func_0x00010c071ae0();
  _objc_release(ppuVar9);
  _objc_release(ppuVar19);
  ppuVar9 = param_4;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_3;
  ppuVar19 = ppuVar10;
  func_0x00010c071ae0();
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  ppuVar9 = param_4;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bf529e0();
  uVar21 = 0;
  if ((undefined **)0x1 < ppuVar10) {
    ppuVar10 = param_4;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_4;
    func_0x00010c242500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    ppuVar13 = ppuVar10;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = param_3;
    ppuVar19 = ppuVar13;
    func_0x00010c071ae0();
    uVar21 = (uint)ppuVar14;
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar9);
  if (((ulong)param_1[0x13] & 0xfffffffffffffffb) == 0x62) {
    iVar1 = (int)param_1[0xd];
    func_0x000108f4aedc();
    puVar20 = PTR____kCFBooleanFalse_11034ab60;
    if (iVar1 == 0) {
      if ((((uint)ppuVar15 | uVar21) & 1) == 0) {
        ppuVar19 = param_1;
        func_0x00010be6f420(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(ppuVar7);
        _objc_release(ppuVar19);
      }
    }
    else {
      ppuVar19 = param_1;
      func_0x00010be6f420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar7);
      _objc_release(ppuVar19);
      if ((((uint)ppuVar15 | uVar21) & 1) != 0) {
        func_0x00010c1d0640(ppuVar7);
      }
    }
    func_0x00010c1d0640(ppuVar7);
    ppuVar19 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    if ((int)ppuVar11 == 0) {
      ppuVar19 = (undefined **)puVar20;
    }
    ppuVar23 = &PTR____CFConstantStringClassReference_110ebea18;
    func_0x00010c1d0640(ppuVar7);
  }
  puVar20 = param_1[0x17];
  if ((puVar20 == (undefined *)0x0) || (func_0x00010bf90760(), ((ulong)puVar20 & 1) != 0)) {
LAB_107abbc14:
    ppuVar15 = (undefined **)param_1[0x15];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar15;
    FUN_107ab88e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar15 = param_1;
      ppuVar23 = ppuVar9;
      func_0x00010be6f420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar15;
      func_0x00010bef7f60(ppuVar7);
      _objc_release(ppuVar15);
      _objc_release(ppuVar9);
    }
  }
  else {
    iVar1 = (int)param_1[0x17];
    func_0x00010bf923e0();
    if (iVar1 != 0) goto LAB_107abbc14;
  }
  if (param_5 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar5 = param_1[1];
    _objc_retain(puVar5);
    ppuVar19 = &puStack_130;
    ppuVar23 = apuStack_f0;
    puVar20 = puVar5;
    func_0x00010bf52a60();
    if (puVar20 != (undefined *)0x0) {
      lVar26 = *plStack_120;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar26) {
            _objc_enumerationMutation(puVar5);
          }
          lVar24 = *(long *)(lStack_128 + (long)puVar25 * 8);
          uVar16 = param_7;
          func_0x00010c23fe00(param_7);
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar24;
          func_0x00010c0f1b00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          lVar18 = lVar17;
          func_0x00010bf529e0();
          if (lVar18 != 0) {
            func_0x00010bef7f60(ppuVar7);
          }
          uVar16 = param_7;
          func_0x00010c23fe00(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0d1c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          lVar18 = lVar24;
          func_0x00010bf529e0();
          if (lVar18 != 0) {
            func_0x00010bef7f60(ppuVar8);
          }
          _objc_release(lVar24);
          _objc_release(lVar17);
          puVar25 = puVar25 + 1;
        } while (puVar20 != puVar25);
        ppuVar19 = &puStack_130;
        ppuVar23 = apuStack_f0;
        puVar20 = puVar5;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    _objc_release(puVar5);
  }
  ppuVar15 = (undefined **)(ulong)param_5;
  ppuVar9 = ppuVar7;
  func_0x00010bf529e0();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar19 = ppuVar7;
    ppuVar23 = param_3;
    func_0x00010bed4780(param_1);
    ppuVar9 = ppuVar8;
    func_0x00010bf529e0();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar19 = ppuVar8;
      ppuVar23 = param_3;
      func_0x00010bed33c0(param_1);
    }
  }
  if (param_8 != 0) {
    ppuVar23 = param_1;
    func_0x00010be63e00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_1;
    func_0x00010be63de0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1[3];
    ppuVar10 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar9;
    (**(code **)(param_8 + 0x10))(param_8,ppuVar23,ppuVar9,ppuVar15,puVar20);
    _objc_release(puVar20);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar23);
    ppuVar23 = ppuVar15;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
LAB_107abbf38:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  iVar1 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar19);
    _objc_retain(ppuVar23);
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    ppuVar3 = ppuVar19;
    func_0x00010c23ffa0(ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    iVar2 = iVar1;
    func_0x00010be41d20();
    if (iVar2 == 0) {
      _objc_release(ppuVar3);
    }
    else {
      ppuVar22 = ppuVar23;
      func_0x00010bf90760();
      _objc_release(ppuVar3);
      if ((int)ppuVar22 != 0) {
        func_0x00010c1d0640(puVar20);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0ce4e0(ppuVar23);
        func_0x00010c0df740(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar20);
        _objc_release(puVar5);
        func_0x00010c1d0640(puVar20);
      }
    }
    ppuVar3 = ppuVar19;
    func_0x00010c23ffa0(ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be41d80();
    if (iVar1 == 0) {
      _objc_release(ppuVar3);
    }
    else {
      ppuVar22 = ppuVar23;
      func_0x00010bf923e0();
      _objc_release(ppuVar3);
      if ((int)ppuVar22 != 0) {
        func_0x00010c1d0640(puVar20);
        func_0x00010c1d0640(puVar20);
        func_0x00010c1d0640(puVar20);
      }
    }
    _objc_release(ppuVar23);
    _objc_release(ppuVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  return;
}



/* Entry: 107abbf94; end: 107abc15b; -[SCDiscoverPublisherPagePropertiesManager _pagePropertiesForAutoProgressingWithDataModel:autoProgressingConfiguration:viewLocation:circumstanceEngine:] */

void FUN_107abbf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar3 = param_3;
  func_0x00010c23ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be41d20(param_1,param_2,uVar3);
  if ((int)uVar4 == 0) {
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_4;
    func_0x00010bf90760();
    _objc_release(uVar3);
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
    if ((int)uVar4 != 0) {
      func_0x00010c1d0640(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f0bc78);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0ce4e0(param_4);
      func_0x00010c0df740(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110f0bc98);
      _objc_release(puVar5);
      func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea98);
    }
  }
  uVar3 = param_3;
  func_0x00010c23ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be41d80(param_1,param_2,uVar3);
  if ((int)param_1 == 0) {
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_4;
    func_0x00010bf923e0();
    _objc_release(uVar3);
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
    if ((int)uVar4 != 0) {
      func_0x00010c1d0640(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f0bc78);
      func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea98);
      func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb3c8,
                          &PTR____CFConstantStringClassReference_110f0c258);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107abc15c; end: 107abc2e7; -[SCDiscoverPublisherPagePropertiesManager _setupSubPageProperties] */

void FUN_107abc15c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ***pppuVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ****ppppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ****ppppuVar19;
  long lVar20;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar21;
  undefined8 ****unaff_x28;
  undefined8 ***pppuVar22;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  long lStack_220;
  undefined8 ***pppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 **ppuStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  long lStack_f0;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar17 = (undefined8 ****)PTR_PTR_1126d6018;
  _objc_alloc();
  ppppuVar5 = *(undefined8 *****)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c00cda0();
  puVar1 = PTR_PTR_1126d63d8;
  _objc_alloc();
  func_0x00010c05d400();
  puVar2 = PTR_PTR_1126d6020;
  _objc_alloc();
  func_0x00010bffece0();
  uVar15 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar15);
  puVar2 = PTR_PTR_1126d63e0;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c021ce0();
  puVar3 = PTR_PTR_1126d63e8;
  _objc_alloc();
  func_0x00010bffe1e0();
  uStack_50 = *(undefined8 *)(param_1 + 0xa0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  puStack_58 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar16);
  ppppuVar8 = &pppuStack_70;
  puVar12 = (undefined1 *)0x2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_70 = ppppuVar17;
  puStack_68 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar16);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppppuVar7 = (undefined8 ****)&ppuStack_1b0;
    pcStack_88 = FUN_107abc2e8;
    lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar6 = ppppuVar8;
    puVar13 = puVar12;
    uVar16 = uVar15;
    ppppuVar11 = ppppuVar5;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(ppppuVar8);
    iVar14 = (int)ppppuVar11;
    _objc_retain(puVar12);
    _objc_retain(uVar15);
    ppppuVar11 = ppppuVar8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar19 = ppppuVar11;
    func_0x00010c08fa60();
    _objc_release(ppppuVar11);
    if (ppppuVar19 == (undefined8 ****)0x0) {
      ppppuVar11 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar11 = ppppuVar17;
      ppppuVar6 = ppppuVar8;
      puVar13 = puVar12;
      func_0x00010be1d820();
      _objc_retainAutoreleasedReturnValue();
      if ((int)ppppuVar5 != 0) {
        ppppuVar5 = ppppuVar11;
        func_0x00010c0d3c80();
        _objc_release(ppppuVar11);
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lStack_1a8 = 0;
        ppuStack_1b0 = (undefined8 ***)0x0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        ppppuVar17 = (undefined8 ****)ppppuVar17[2];
        _objc_retain(ppppuVar17);
        puVar13 = auStack_170;
        uVar16 = 0x10;
        ppppuVar11 = ppppuVar17;
        func_0x00010bf52a60();
        if (ppppuVar11 != (undefined8 ****)0x0) {
          unaff_x27 = *plStack_1a0;
          do {
            unaff_x28 = (undefined8 ****)0x0;
            do {
              if (*plStack_1a0 != unaff_x27) {
                _objc_enumerationMutation(ppppuVar17);
              }
              ppppuVar19 = *(undefined8 *****)(lStack_1a8 + (long)unaff_x28 * 8);
              unaff_x26 = uVar15;
              func_0x00010c23fe00();
              _objc_retainAutoreleasedReturnValue();
              uVar16 = unaff_x26;
              func_0x00010c0f1b00(ppppuVar19,param_2,puVar12,ppppuVar8,ppppuVar5);
              iVar14 = (int)uVar16;
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x26);
              ppppuVar6 = ppppuVar19;
              func_0x00010bf529e0();
              if (ppppuVar6 != (undefined8 ****)0x0) {
                func_0x00010bef7f60(ppppuVar5,param_2,ppppuVar19);
              }
              _objc_release(ppppuVar19);
              unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
            } while (ppppuVar11 != unaff_x28);
            puVar13 = auStack_170;
            uVar16 = 0x10;
            ppppuVar11 = ppppuVar17;
            ppppuVar7 = (undefined8 ****)&ppuStack_1b0;
            func_0x00010bf52a60();
          } while (ppppuVar11 != (undefined8 ****)0x0);
        }
        _objc_release(ppppuVar17);
        ppppuVar11 = ppppuVar5;
        func_0x00010bf51e00();
        _objc_release(ppppuVar5);
        ppppuVar6 = ppppuVar7;
      }
    }
    _objc_release(uVar15);
    _objc_release(puVar12);
    ppppuVar7 = ppppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f0) {
      ___stack_chk_fail();
      pcStack_1b8 = FUN_107abc504;
      lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_210 = unaff_x28;
      lStack_208 = unaff_x27;
      uStack_200 = unaff_x26;
      pppuStack_1f8 = ppppuVar19;
      pppuStack_1f0 = ppppuVar11;
      pppuStack_1e8 = ppppuVar17;
      pppuStack_1e0 = ppppuVar5;
      uStack_1d8 = uVar15;
      puStack_1d0 = puVar12;
      pppuStack_1c8 = ppppuVar8;
      ppuStack_1c0 = &puStack_90;
      _objc_retain(ppppuVar6);
      _objc_retain(puVar13);
      _objc_retain(uVar16);
      ppppuVar8 = ppppuVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar8;
      func_0x00010c08fa60();
      _objc_release(ppppuVar8);
      if (ppppuVar5 == (undefined8 ****)0x0) {
        ppppuVar11 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar11 = ppppuVar7;
        func_0x00010be1d760(ppppuVar7,param_2,ppppuVar6,puVar13);
        _objc_retainAutoreleasedReturnValue();
        if (iVar14 != 0) {
          ppppuVar8 = ppppuVar11;
          func_0x00010c0d3c80(ppppuVar11);
          _objc_release(ppppuVar11);
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          lStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2c8 = 0;
          plStack_2d0 = (long *)0x0;
          pppuVar18 = ppppuVar7[2];
          _objc_retain(pppuVar18);
          pppuVar9 = pppuVar18;
          func_0x00010bf52a60(pppuVar18,param_2,&uStack_2e0,auStack_2a0,0x10);
          if (pppuVar9 != (undefined8 ***)0x0) {
            lVar21 = *plStack_2d0;
            do {
              pppuVar22 = (undefined8 ***)0x0;
              do {
                if (*plStack_2d0 != lVar21) {
                  _objc_enumerationMutation(pppuVar18);
                }
                lVar20 = *(long *)(lStack_2d8 + (long)pppuVar22 * 8);
                uVar15 = uVar16;
                func_0x00010c23fe00(uVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf0d1c0(lVar20,param_2,puVar13,ppppuVar6,ppppuVar8,uVar15);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar15);
                lVar10 = lVar20;
                func_0x00010bf529e0();
                if (lVar10 != 0) {
                  func_0x00010bef7f60(ppppuVar8,param_2,lVar20);
                }
                _objc_release(lVar20);
                pppuVar22 = (undefined8 ***)((long)pppuVar22 + 1);
              } while (pppuVar9 != pppuVar22);
              pppuVar9 = pppuVar18;
              func_0x00010bf52a60(pppuVar18,param_2,&uStack_2e0,auStack_2a0,0x10);
            } while (pppuVar9 != (undefined8 ***)0x0);
          }
          _objc_release(pppuVar18);
          ppppuVar11 = ppppuVar8;
          func_0x00010bf51e00(ppppuVar8);
          _objc_release(ppppuVar8);
        }
      }
      _objc_release(uVar16);
      _objc_release(puVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_220) {
        ___stack_chk_fail();
        ppppuVar8 = ppppuVar6;
        func_0x00010be467a0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar5 = ppppuVar8;
        func_0x00010c08fa60();
        if (ppppuVar5 == (undefined8 ****)0x0) {
          ppppuVar11 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar11 = (undefined8 ****)ppppuVar6[4];
          func_0x00010c0dff20(ppppuVar11,param_2,ppppuVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppppuVar8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar11);
    return;
  }
  return;
}



/* Entry: 107abc2e8; end: 107abc503; -[SCDiscoverPublisherPagePropertiesManager _noCachePagePropertiesForSnapPlayableDataModel:storyPlayableDataModel:fullSnapDocDataModel:mediaIsLoaded:] */

void FUN_107abc2e8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar14;
  undefined1 *unaff_x28;
  long lVar15;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  puVar1 = param_4;
  uVar9 = param_5;
  puVar7 = param_6;
  _objc_retain(param_3);
  iVar10 = (int)puVar7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar7 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar7;
  func_0x00010c08fa60();
  _objc_release(puVar7);
  if (puVar12 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = param_1;
    puVar6 = param_3;
    puVar1 = param_4;
    func_0x00010be1d820();
    _objc_retainAutoreleasedReturnValue();
    if ((int)param_6 != 0) {
      param_6 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar7);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      param_1 = *(undefined1 **)(param_1 + 0x10);
      _objc_retain(param_1);
      puVar1 = auStack_f0;
      uVar9 = 0x10;
      puVar7 = param_1;
      func_0x00010bf52a60();
      if (puVar7 != (undefined1 *)0x0) {
        unaff_x27 = *plStack_120;
        do {
          unaff_x28 = (undefined1 *)0x0;
          do {
            if (*plStack_120 != unaff_x27) {
              _objc_enumerationMutation(param_1);
            }
            puVar12 = *(undefined1 **)(lStack_128 + (long)unaff_x28 * 8);
            unaff_x26 = param_5;
            func_0x00010c23fe00();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = unaff_x26;
            func_0x00010c0f1b00(puVar12,param_2,param_4,param_3,param_6);
            iVar10 = (int)uVar9;
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            puVar1 = puVar12;
            func_0x00010bf529e0();
            if (puVar1 != (undefined1 *)0x0) {
              func_0x00010bef7f60(param_6,param_2,puVar12);
            }
            _objc_release(puVar12);
            unaff_x28 = unaff_x28 + 1;
          } while (puVar7 != unaff_x28);
          puVar1 = auStack_f0;
          uVar9 = 0x10;
          puVar7 = param_1;
          puVar8 = &uStack_130;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined1 *)0x0);
      }
      _objc_release(param_1);
      puVar7 = param_6;
      func_0x00010bf51e00();
      _objc_release(param_6);
      puVar6 = (undefined1 *)puVar8;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107abc504;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    uStack_180 = unaff_x26;
    puStack_178 = puVar12;
    puStack_170 = puVar7;
    puStack_168 = param_1;
    puStack_160 = param_6;
    uStack_158 = param_5;
    puStack_150 = param_4;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_retain(puVar1);
    _objc_retain(uVar9);
    puVar7 = puVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010c08fa60();
    _objc_release(puVar7);
    if (puVar12 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x00010be1d760(puVar2,param_2,puVar6,puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (iVar10 != 0) {
        puVar12 = puVar7;
        func_0x00010c0d3c80(puVar7);
        _objc_release(puVar7);
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        lStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        lVar11 = *(long *)(puVar2 + 0x10);
        _objc_retain(lVar11);
        lVar3 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_260,auStack_220,0x10);
        if (lVar3 != 0) {
          lVar14 = *plStack_250;
          do {
            lVar15 = 0;
            do {
              if (*plStack_250 != lVar14) {
                _objc_enumerationMutation(lVar11);
              }
              lVar13 = *(long *)(lStack_258 + lVar15 * 8);
              uVar4 = uVar9;
              func_0x00010c23fe00(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf0d1c0(lVar13,param_2,puVar1,puVar6,puVar12,uVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              lVar5 = lVar13;
              func_0x00010bf529e0();
              if (lVar5 != 0) {
                func_0x00010bef7f60(puVar12,param_2,lVar13);
              }
              _objc_release(lVar13);
              lVar15 = lVar15 + 1;
            } while (lVar3 != lVar15);
            lVar3 = lVar11;
            func_0x00010bf52a60(lVar11,param_2,&uStack_260,auStack_220,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar11);
        puVar7 = puVar12;
        func_0x00010bf51e00(puVar12);
        _objc_release(puVar12);
      }
    }
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar1 = puVar6;
      func_0x00010be467a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c08fa60();
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = *(undefined1 **)(puVar6 + 0x20);
        func_0x00010c0dff20(puVar7,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107abc504; end: 107abc71f; -[SCDiscoverPublisherPagePropertiesManager _noCacheAttachmentPagePropertiesForSnapPlayableDataModel:storyPlayableDataModel:fullSnapDocDataModel:mediaIsLoaded:] */

void FUN_107abc504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be1d760(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      lVar1 = lVar4;
      func_0x00010c0d3c80(lVar4);
      _objc_release(lVar4);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar5 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar5);
      lVar4 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar4 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar5);
            }
            lVar6 = *(long *)(lStack_128 + lVar8 * 8);
            uVar2 = param_5;
            func_0x00010c23fe00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0d1c0(lVar6,param_2,param_4,param_3,lVar1,uVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            lVar3 = lVar6;
            func_0x00010bf529e0();
            if (lVar3 != 0) {
              func_0x00010bef7f60(lVar1,param_2,lVar6);
            }
            _objc_release(lVar6);
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
          lVar4 = lVar5;
          func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar4 != 0);
      }
      _objc_release(lVar5);
      lVar4 = lVar1;
      func_0x00010bf51e00(lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar1 = param_3;
    func_0x00010be467a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x20);
      func_0x00010c0dff20(lVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107abc720; end: 107abc77f; -[SCDiscoverPublisherPagePropertiesManager _getCachedPagePropertiesForSnapPlayableDataModel:storyPlayableDataModel:] */

void FUN_107abc720(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be467a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dff20(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107abc780; end: 107abc7df; -[SCDiscoverPublisherPagePropertiesManager _getCachedAttachmentPagePropertiesForSnapPlayableDataModel:storyPlayableDataModel:] */

void FUN_107abc780(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be467a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dff20(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107abc7e0; end: 107abc877; -[SCDiscoverPublisherPagePropertiesManager _setError:forSnapPlayableDataModel:] */

void FUN_107abc7e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107abc878; end: 107abc8f3; -[SCDiscoverPublisherPagePropertiesManager _updateCachePageProperties:forSnapPlayableDataModel:storyPlayableDataModel:] */

void FUN_107abc878(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be467a0(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar2 != 0)) {
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20),param_2,param_3,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107abc8f4; end: 107abc96f; -[SCDiscoverPublisherPagePropertiesManager _updateAttachmentCachePageProperties:forSnapPlayableDataModel:storyPlayableDataModel:] */

void FUN_107abc8f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be467a0(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar2 != 0)) {
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x28),param_2,param_3,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107abc970; end: 107abca83; -[SCDiscoverPublisherPagePropertiesManager _getPagePropertyForSnapPlayableDataModelOnMainThread:storyPlayableDataModel:completion:] */

void FUN_107abc970(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_107ab7860(param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5400();
  if ((uVar2 & 1) == 0) {
    func_0x00010bfd5020(param_4);
  }
  func_0x00010c0c5420(uVar1);
  uVar2 = uVar1;
  func_0x00010bfbbc80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f040(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107abca84; end: 107abcba7; -[SCDiscoverPublisherPagePropertiesManager _keyForSnapPlayableDataModel:storyPlayableDataModel:] */

void FUN_107abca84(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_4;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_107abcb7c;
    }
    lVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eac258);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107abcb7c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107abcba8; end: 107abcccf; -[SCDiscoverPublisherPagePropertiesManager _mediaTypeForSnapDocDataModel:] */

undefined1 FUN_107abcba8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
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
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar3 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar6 * 8);
        func_0x00010c0c6c20();
        if (iVar1 == 3) {
          uVar4 = 3;
          goto LAB_107abcc90;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  uVar4 = 2;
LAB_107abcc90:
  _objc_release(lVar2);
  iVar1 = (int)lVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010be5ed20();
  return iVar1 == 2;
}



/* Entry: 107abccd0; end: 107abcceb; -[SCDiscoverPublisherPagePropertiesManager _isMediaImage:] */

bool FUN_107abccd0(int param_1)

{
  func_0x00010be5ed20();
  return param_1 == 2;
}



/* Entry: 107abccec; end: 107abcd07; -[SCDiscoverPublisherPagePropertiesManager _isMediaVideo:] */

bool FUN_107abccec(int param_1)

{
  func_0x00010be5ed20();
  return param_1 == 3;
}



/* Entry: 107abcd08; end: 107abcd0f; -[SCDiscoverPublisherPagePropertiesManager snapDocOperaMediaManager] */

undefined8 FUN_107abcd08(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107abcd10; end: 107abce2f; -[SCDiscoverPublisherPagePropertiesManager .cxx_destruct] */

void FUN_107abcd10(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 107abce30; end: 107abcf73; -[SCDiscoverPublisherSubscriptionPagePropertiesProvider initWithDiscoverFeedDataFetcher:pagePropertiesManager:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:circumstanceEngine:snapchatterObservableRepository:] */

undefined1 *
FUN_107abce30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
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
  puStack_58 = PTR_PTR_1126f9aa8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_9);
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



/* Entry: 107abcf74; end: 107abd0b7; -[SCDiscoverPublisherSubscriptionPagePropertiesProvider pagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverPageProperties:fullSnapDoc:] */

void FUN_107abcf74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar7 = param_3;
  FUN_107abd0b8(param_3,0,lVar1,param_5,lVar3,lVar4,lVar5,lVar6,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107abd0b8; end: 107abda83;  */

void FUN_107abd0b8(undefined8 param_1,undefined *param_2,uint param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = param_2;
  func_0x00010c259740();
  puVar6 = param_2;
  func_0x00010c259740();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = param_2;
    func_0x00010c080160();
    iVar3 = (int)puVar6;
    bVar2 = false;
  }
  else {
    puVar6 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740(param_2);
    puVar7 = puVar6;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar7 == (undefined *)0x0) {
      func_0x00010c11b1e0(param_2);
      func_0x00010c0df7c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf5b7e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c080120();
      iVar3 = (int)uVar10;
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c11b1e0(param_2);
      func_0x00010c0df7c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf5b7e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079480();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      bVar2 = false;
    }
    else {
      puVar6 = puVar7;
      func_0x00010c080120();
      iVar3 = (int)puVar6;
      func_0x00010c0794a0();
      _objc_release(puVar7);
      bVar2 = true;
    }
  }
  func_0x00010c0800e0(param_2);
  func_0x00010c11b1e0();
  func_0x00010c1d0640(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar6);
  bVar1 = false;
  if (puVar5 != (undefined *)0x0) {
    bVar1 = bVar2;
  }
  if (bVar1) {
    puVar7 = PTR_PTR_1126d5298;
    _objc_alloc(PTR_PTR_1126d5298);
    puVar6 = param_2;
    func_0x00010bfe4640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d5c0(puVar7);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
  }
  else {
    puVar6 = PTR_PTR_1126d6050;
    _objc_alloc(PTR_PTR_1126d6050);
    func_0x00010c03c080();
    func_0x00010c1d0640(puVar4);
  }
  _objc_release(puVar6);
  if (iVar3 == 0) {
    puVar5 = param_2;
    func_0x00010c0800e0();
    if (((param_3 & 1) == 0) && ((int)puVar5 != 0)) {
      puVar5 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf009e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar7 = puVar6;
      func_0x00010bf529e0(puVar6);
      func_0x00010c1d0640(puVar4);
      func_0x00010c1d0640(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000108f4816c(param_9,puVar7 != (undefined *)0x0);
      func_0x00010c0df780(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar5);
      func_0x00010c1d0640(puVar4);
      puVar5 = PTR_PTR_1126d52a0;
      puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c2bea80(puVar5);
      _objc_release(puVar7);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar5);
      if (bVar1) {
        puVar7 = PTR_PTR_1126d5298;
        _objc_alloc(PTR_PTR_1126d5298);
        puVar5 = param_2;
        func_0x00010bfe4640(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04d5c0(puVar7);
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar7);
      }
      else {
        puVar5 = PTR_PTR_1126d6050;
        _objc_alloc(PTR_PTR_1126d6050);
        func_0x00010c03c080();
        func_0x00010c1d0640(puVar4);
      }
      _objc_release(puVar5);
      goto LAB_107abd84c;
    }
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126d6050;
      _objc_alloc(PTR_PTR_1126d6050);
      func_0x00010c03c080();
    }
    else {
      puVar5 = PTR_PTR_1126d52a8;
      _objc_alloc(PTR_PTR_1126d52a8);
      func_0x00010c04d5a0();
    }
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    puVar5 = param_2;
    func_0x00010c259740();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126d6050;
      _objc_alloc(PTR_PTR_1126d6050);
      func_0x00010c11b1e0(param_2);
      func_0x00010c03c080(puVar6);
    }
    else {
      puVar6 = PTR_PTR_1126d52a8;
      _objc_alloc(PTR_PTR_1126d52a8);
      func_0x00010c259740(param_2);
      func_0x00010c04d5a0(puVar6);
    }
    func_0x00010c1d0640(puVar4);
LAB_107abd84c:
    _objc_release(puVar6);
  }
  puVar5 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) goto LAB_107abd9b0;
  puVar5 = param_2;
  func_0x00010c112fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      func_0x000108072594();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(puVar4);
      _objc_release(puVar6);
      func_0x000108072594();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107abd8dc;
    }
  }
  else {
    puVar5 = param_2;
    func_0x00010c112fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14db60(puVar4);
    _objc_release(puVar5);
    puVar6 = param_2;
    func_0x00010c112fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
LAB_107abd8dc:
    func_0x00010c14db60(puVar4);
    _objc_release(puVar6);
  }
  puVar5 = param_2;
  func_0x00010c155040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _objc_release();
    if (puVar5 != (undefined *)0x0) goto LAB_107abd9b0;
    func_0x0001080725a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_2;
    func_0x00010c155040(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14db60(puVar4);
  _objc_release(puVar6);
LAB_107abd9b0:
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107abda84; end: 107abdbc7; -[SCDiscoverPublisherSubscriptionPagePropertiesProvider attachmentPagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverAttachmentPageProperties:fullSnapDoc:] */

void FUN_107abda84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar7 = param_3;
  FUN_107abd0b8(param_3,1,lVar1,param_5,lVar3,lVar4,lVar5,lVar6,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107abdbc8; end: 107abdc17; -[SCDiscoverPublisherSubscriptionPagePropertiesProvider .cxx_destruct] */

void FUN_107abdbc8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107abdc18; end: 107abdccb; -[SCDiscoverPublisherWebpagePagePropertiesProvider initWithLazyBitmojiAvatarProvider:lazyBitmojiFriendAvatarProvider:lazySnapDocConfigurer:] */

undefined1 *
FUN_107abdc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9ab0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107abdccc; end: 107abddb7; -[SCDiscoverPublisherWebpagePagePropertiesProvider pagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverPageProperties:fullSnapDoc:] */

void FUN_107abdccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  uVar3 = param_3;
  FUN_107abddb8(param_3,param_5,1,lVar1,lVar2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107abddb8; end: 107abe163;  */

void FUN_107abddb8(long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_107abe10c;
  }
  uVar1 = param_6;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf8bc40();
  if ((int)uVar1 == 1) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar6 = param_2;
    if (param_3 == 0) {
LAB_107abe040:
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c14db60();
      uVar1 = uVar4;
      func_0x00010bfad580();
      if ((int)uVar1 == 1) {
        func_0x00010c1d0640(puVar11);
      }
      puVar12 = puVar5;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = puVar5;
        func_0x00010bf51e00(puVar5);
        func_0x00010c14db60(puVar11);
        _objc_release(puVar12);
      }
      puVar12 = puVar11;
      func_0x00010bf51e00(puVar11);
      _objc_release(puVar11);
      _objc_release(lVar6);
    }
    else {
      lVar6 = param_1;
      func_0x00010bf1ad20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      FUN_107ab9554();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010bf1ad20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf8c980(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      FUN_107ab95ec(lVar6,param_5,lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_retain(param_2);
      _objc_retain(lVar7);
      _objc_retain(lVar9);
      lVar6 = lVar7;
      func_0x00010c08fa60();
      lVar8 = param_2;
      if (lVar6 != 0) {
        func_0x00010bdc2d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
      }
      lVar10 = lVar9;
      func_0x00010c08fa60();
      lVar6 = lVar8;
      if (lVar10 != 0) {
        func_0x00010bdc2d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
      }
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(param_2);
      lVar8 = lVar7;
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        func_0x00010befa120(puVar5);
      }
      lVar8 = lVar9;
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        func_0x00010befa120(puVar5);
      }
      _objc_release(lVar9);
      _objc_release(lVar7);
      if (lVar6 != 0) goto LAB_107abe040;
      puVar12 = (undefined *)0x0;
    }
    _objc_release(puVar5);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(uVar4);
LAB_107abe10c:
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107abe164; end: 107abe24f; -[SCDiscoverPublisherWebpagePagePropertiesProvider attachmentPagePropertiesForStoryPlayableDataModel:snapPlayableDataModel:discoverAttachmentPageProperties:fullSnapDoc:] */

void FUN_107abe164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  uVar3 = param_3;
  FUN_107abddb8(param_3,param_5,0,lVar1,lVar2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107abe250; end: 107abe27f; -[SCDiscoverPublisherWebpagePagePropertiesProvider .cxx_destruct] */

void FUN_107abe250(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107abe280; end: 107abfaa7;  */

void FUN_107abe280(double param_1,ulong param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,long param_6,uint param_7,uint param_8,undefined *param_9,
                  ulong param_10,byte param_11,undefined4 param_12,undefined8 param_13,
                  ulong param_14)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  puVar4 = param_4;
  puVar15 = param_5;
  lVar13 = param_6;
  _objc_retain();
  iVar11 = (int)lVar13;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  uVar1 = param_2;
  func_0x00010bef60a0();
  if (uVar1 != 0) goto LAB_107abe348;
  puVar2 = param_3;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010c08fa60();
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar2);
    goto LAB_107abe348;
  }
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  _objc_release(puVar2);
  if (uVar3 == 0) goto LAB_107abe348;
  if (((param_7 & 1) == 0) && ((param_8 & 1) == 0)) {
    func_0x000108f54844();
  }
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new();
  puVar10 = param_3;
  FUN_107abfaa8(param_2,param_3,param_9,puVar2,param_11);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  puVar15 = param_3;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar15);
  func_0x00010c2b53a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  ppuVar14 = &PTR____CFConstantStringClassReference_110ed3a38;
  uVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (ppuVar14 != (undefined **)0x0) {
    func_0x00010c2b52e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_7 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(puVar2);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    func_0x00010c1d0760(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = param_3;
    func_0x00010c11b0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010c08fa60();
    _objc_release();
    if (puVar17 != (undefined *)0x0) {
      puVar15 = param_3;
      func_0x00010c11b0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release();
    }
    func_0x00010807443c();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(param_3);
  }
  else {
    _objc_retain(puVar2);
    _objc_retain(param_6);
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    if (param_6 != 0) {
      puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
    }
    _objc_release(param_6);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar14);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(param_10);
  puVar4 = param_3;
  func_0x00010c11b0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_3;
  func_0x00010c0b4680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  func_0x00010c1d0760(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  param_1 = 14.0;
  puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  iVar11 = 4;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar16);
  _objc_release(puVar15);
  func_0x00010c1d0760(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar15 = param_3;
  func_0x00010bf61360();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c08fa60();
  _objc_release(puVar15);
  if (puVar16 == (undefined *)0x0) {
    func_0x00010c25aba0();
    if (param_1 == 0.0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      func_0x00010c25aba0(param_3);
      dVar18 = param_1 / 1000.0;
      puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      puVar5 = param_3;
      param_1 = dVar18;
      func_0x00010c078b00();
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((int)puVar5 == 0) || (param_1 = ABS(dVar18), 86400.0 < param_1)) {
        puVar15 = param_3;
        func_0x00010bfe2bc0();
        if (((ulong)puVar15 & 1) == 0) {
          puVar10 = (undefined *)0x4;
          puVar15 = puVar16;
          func_0x0001084866e4(puVar16,4,1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar15 = (undefined *)0x0;
        }
      }
      else {
        func_0x000108074454();
        _objc_retainAutoreleasedReturnValue();
        iVar11 = 4;
        func_0x00010bfb5e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar16);
    }
  }
  else {
    puVar15 = param_3;
    func_0x00010bf61360();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar16 = puVar15;
  func_0x00010c08fa60();
  if (puVar16 != (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    iVar11 = 2;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  _objc_release(puVar15);
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (param_7 == 0) {
    puVar17 = (undefined *)0x0;
    param_7 = 0;
  }
  else {
    puVar10 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar10;
    func_0x00010c0eaa80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar17;
    func_0x00010c0f1980(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_retain(puVar2);
    iVar11 = 1;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar2);
    FUN_107abffd4(param_3,puVar2);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_9);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    _objc_retain(param_10);
    _objc_retain(param_13);
    puVar10 = PTR_PTR_1126ce808;
    func_0x00010c29d3e0();
    if (((ulong)puVar10 & 1) == 0) {
      puVar4 = param_3;
      func_0x00010c237cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar15 != (undefined *)0x0) goto LAB_107abef1c;
    }
    else {
LAB_107abef1c:
      puVar4 = param_3;
      func_0x00010c237cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c239480();
      if (((ulong)puVar4 & 1) == 0) {
        uVar1 = param_2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_9;
        func_0x00010c23fe00(param_9);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x000107ab8788(uVar1,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar1);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((uVar3 & 1) == 0) {
          func_0x00010c11b1e0();
          func_0x00010c14de00(puVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_13;
          func_0x00010bf5b7e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (param_4 != (undefined *)0x0) {
            puVar4 = PTR_PTR_1126b64b8;
            _objc_opt_new(PTR_PTR_1126b64b8);
            puVar15 = param_3;
            func_0x00010c237cc0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c201be0(puVar4);
            _objc_release(puVar15);
            puVar15 = param_3;
            func_0x00010bf25140(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c174420(puVar4);
            _objc_release(puVar15);
            func_0x00010c080120(uVar6);
            func_0x00010c20f460(puVar4);
            func_0x00010c079480(uVar6);
            func_0x00010c1d5c40(puVar4);
            func_0x00010c11b1e0(param_3);
            func_0x00010c1e5b60(puVar4);
            puVar15 = param_3;
            func_0x00010c239520(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d74a0(puVar4);
            _objc_release(puVar15);
            uVar1 = param_2;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = param_3;
            func_0x00010c242500(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(uVar1);
            if ((uVar3 & 1) == 0) {
              func_0x00010c1d74a0(puVar4);
            }
            puVar15 = param_3;
            func_0x00010bf8c980(param_3);
            _objc_retainAutoreleasedReturnValue();
            iVar11 = 0;
            puVar16 = param_4;
            func_0x00010bfe9f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            if (puVar16 != (undefined *)0x0) {
              func_0x000107d75140(puVar2,puVar16);
              func_0x000107d75238(puVar2,(ulong)puVar10 & 0xffffffff);
            }
            _objc_release(puVar16);
            _objc_release(puVar4);
          }
          _objc_release(uVar6);
        }
      }
    }
    _objc_release(param_13);
    _objc_release(param_10);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(param_9);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar10 = param_9;
    FUN_107ac0198(param_3,param_9,puVar2);
    if ((param_11 & 1) == 0) {
      uVar1 = param_10;
      func_0x000108f4ae38();
      _objc_retain(param_3);
      _objc_retain(puVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      if ((int)uVar1 != 0 && (param_14 == 0x53 || (param_14 & 0xfffffffffffffffe) == 0x2c)) {
        func_0x00010befa120(puVar4);
      }
      _objc_retain(param_3);
      puVar15 = param_3;
      func_0x00010bfd5020();
      if ((((ulong)puVar15 & 1) == 0) &&
         (puVar15 = param_3, func_0x00010bfd8720(), ((ulong)puVar15 & 1) == 0)) {
        puVar15 = param_3;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c067fc0();
        _objc_release(puVar15);
        if ((puVar16 + -0xf0 < (undefined *)0x18) &&
           ((1L << ((ulong)(puVar16 + -0xf0) & 0x3f) & 0x840001U) != 0)) goto LAB_107abf324;
        _objc_release(param_3);
        func_0x00010befa120(puVar4);
      }
      else {
LAB_107abf324:
        _objc_release(param_3);
      }
      func_0x00010befa120(puVar4);
      puVar15 = param_3;
      func_0x00010c11b0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar15 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c1d0760(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c07dbe0(param_3);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      iVar11 = 5;
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar15);
      FUN_107ac03a4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(param_3);
    }
  }
  puVar4 = puVar17;
  func_0x00010bf0d180();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  puVar16 = (undefined *)0x0;
  if (puVar15 != (undefined *)0x0) {
    puVar4 = puVar17;
    func_0x00010bf0d180();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_9);
    _objc_retain(puVar4);
    _objc_retain(param_10);
    puVar15 = puVar4;
    func_0x00010bf529e0();
    if (puVar15 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      uVar1 = param_2;
      func_0x00010bef60a0();
      puVar16 = (undefined *)0x0;
      if ((param_7 != 0) && (uVar1 == 0)) {
        _objc_retain(puVar4);
        _objc_retain(param_10);
        puVar10 = puVar4;
        func_0x00010c0d3c80();
        puVar15 = PTR_PTR_1126b2368;
        _objc_alloc();
        func_0x00010c0594a0();
        puVar16 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar16;
        func_0x00010bf1f3c0();
        _objc_release(puVar16);
        if ((int)puVar5 != 0) {
          uVar1 = param_10;
          func_0x000108f54858();
          if ((int)uVar1 != 0) {
            puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b53e0(puVar15);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar16);
          }
          puVar16 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          puVar7 = puVar16;
          func_0x000108b8fcc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00c560(puVar5);
          _objc_release(puVar7);
          uVar3 = param_10;
          func_0x000108f5492c();
          if (((uVar1 & 1) == 0) && ((int)uVar3 != 0)) {
            func_0x00010c1d0640(puVar5);
            func_0x00010c1d0640(puVar10);
          }
          puVar7 = PTR_PTR_1126c7cd0;
          func_0x00010bf21760(PTR_PTR_1126c7cd0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b53e0(puVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar5);
          _objc_release(puVar16);
        }
        _objc_release(puVar10);
        _objc_release(param_10);
        _objc_release(puVar4);
        FUN_107abfaa8(param_2,param_3,param_9,puVar15,0);
        _objc_retain(puVar15);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_retain(param_2);
        puVar16 = param_3;
        func_0x00010c280580();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        func_0x00010c14de00(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53a0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(uVar1);
        _objc_release(puVar16);
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar15);
        _objc_retain(puVar15);
        _objc_retain(param_3);
        puVar10 = param_3;
        func_0x00010c11b0a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0760(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        func_0x00010c1d0760(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c07dbe0(param_3);
        _objc_release(param_3);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        iVar11 = 4;
        puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar10);
        _objc_release(puVar15);
        FUN_107abffd4(param_3,puVar15);
        puVar10 = param_9;
        FUN_107ac0198(param_3,param_9,puVar15);
        puVar16 = puVar15;
        func_0x00010c1531a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
      }
    }
    _objc_release(param_10);
    _objc_release(puVar4);
    _objc_release(param_9);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar4);
  }
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  puVar15 = puVar16;
  func_0x00010c033240();
  _objc_release(puVar5);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar2);
LAB_107abe348:
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar10;
    _objc_retain(puVar15);
    puVar2 = PTR_PTR_1126b19f8;
    _objc_retain(puVar4);
    _objc_retain(puVar10);
    _objc_retain(param_2);
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b19f8;
    puVar5 = puVar10;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ca00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b19f8;
    uVar1 = param_2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ad20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar16);
    _objc_release(uVar1);
    _objc_release(puVar17);
    _objc_release(puVar5);
    _objc_release(puVar2);
    uVar1 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = puVar10;
    func_0x00010bf8c980(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar10;
    func_0x00010c280580(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c158300(puVar10);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07dbe0(puVar10);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    FUN_107b8dc40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126bdd88;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar10;
    func_0x00010c237cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010c08fa60();
    _objc_release(puVar4);
    func_0x00010c1d0760(puVar15);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (iVar11 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(puVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
    _objc_release(puVar8);
    _objc_release(puVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar9;
    _objc_retain(puVar9);
    _objc_retain(puVar15);
    puVar10 = puVar15;
    func_0x00010c11b3a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar15;
    func_0x00010c11b0a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11b1e0(puVar15);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25aba0(puVar15);
    _objc_release(puVar15);
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010c2b53e0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    _objc_retain(puVar17);
    _objc_retain(puVar9);
    puVar16 = puVar9;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(puVar9);
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfd5020(puVar9);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = puVar9;
    func_0x0001080743c4();
    _objc_release(puVar9);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000108074400(puVar2);
    }
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d63f0);
    func_0x00010c013c00(0x3ff4cccccccccccd);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107abfaa8; end: 107abffd3;  */

void FUN_107abfaa8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b19f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  uVar2 = param_3;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ca00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  uVar4 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ad20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar4 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = param_3;
  func_0x00010bf8c980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c280580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c158300(param_3);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07dbe0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = param_4;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = uVar4;
  FUN_107b8dc40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bdd88;
  func_0x00010c240200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c237cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c08fa60();
  _objc_release(uVar2);
  func_0x00010c1d0760(param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar7);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = uVar9;
  _objc_retain(uVar9);
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010c11b3a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c11b0a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11b1e0(param_5);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25aba0(param_5);
  _objc_release(param_5);
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b53e0(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar2);
  _objc_retain(puVar6);
  _objc_retain(uVar9);
  uVar10 = uVar9;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(uVar9);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfd5020(uVar9);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar12 = uVar9;
  func_0x0001080743c4();
  _objc_release(uVar9);
  if ((uVar12 & 1) == 0) {
    func_0x000108074400(uVar2);
  }
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126d63f0);
  func_0x00010c013c00(0x3ff4cccccccccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107abffd4; end: 107ac0197;  */

void FUN_107abffd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c11b3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c11b0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11b1e0(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25aba0(param_2);
  _objc_release(param_2);
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c2b53e0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  _objc_retain(puVar10);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfd5020(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x0001080743c4();
  _objc_release(param_3);
  if ((uVar7 & 1) == 0) {
    func_0x000108074400(uVar9);
  }
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar10);
  _objc_release(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d63f0);
    func_0x00010c013c00(0x3ff4cccccccccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107ac0198; end: 107ac03a3;  */

void FUN_107ac0198(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_1);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfd5020(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  func_0x0001080743c4();
  _objc_release(param_1);
  if ((uVar5 & 1) == 0) {
    func_0x000108074400(param_2);
  }
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d63f0);
    func_0x00010c013c00(0x3ff4cccccccccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 107ac03a4; end: 107ac03df;  */

void FUN_107ac03a4(void)

{
  _objc_alloc(PTR_PTR_1126d63f0);
  func_0x00010c013c00(0x3ff4cccccccccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ac03e0; end: 107ac0923;  */

ulong * FUN_107ac03e0(ulong param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                     long param_6,undefined8 param_7,ulong param_8,undefined8 param_9,ulong param_10
                     ,ulong param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong uVar34;
  undefined *puVar35;
  ulong *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong *puStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = param_1;
  _objc_retain();
  uStack_128 = param_2;
  _objc_retain(param_2);
  uStack_130 = param_4;
  _objc_retain(param_4);
  puVar27 = PTR_PTR_1126b2368;
  _objc_opt_new();
  puVar35 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f0def8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f0e018;
  puStack_80 = PTR____kCFBooleanTrue_11034ab68;
  puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar28;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar28);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc41b8;
  puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_98 = puVar28;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar29);
  _objc_release(puVar28);
  puVar28 = PTR_PTR_1126b2d20;
  func_0x00010beeebc0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar28;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar29;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dcae18;
  puStack_b8 = puVar35;
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar29);
  if (param_6 != 0) {
    puVar29 = PTR_PTR_1126b2d20;
    func_0x00010beeea00();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d0 = puVar29;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c8 = puVar30;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar28);
    _objc_release(puVar30);
    _objc_release(puVar29);
    puVar30 = PTR_PTR_1126b2d20;
    func_0x00010beee9e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar35;
    puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_e0 = puVar30;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar29);
    _objc_release(puVar30);
  }
  uVar34 = uStack_130;
  if ((param_3 == 0x65) &&
     (uVar38 = uStack_130, func_0x000108f4b700(uStack_130,0), (int)uVar38 != 0)) {
    puVar30 = PTR_PTR_1126b2d20;
    func_0x00010bf7f080();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar35;
    puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f0 = puVar30;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar31);
    _objc_release(puVar30);
  }
  uVar38 = uStack_138;
  uVar32 = uStack_138;
  func_0x0001080743c4();
  uVar3 = uStack_128;
  if (((uVar32 & 1) != 0) || (uVar32 = uStack_128, func_0x000108074400(), (int)uVar32 != 0)) {
    ppuStack_100 = &PTR____CFConstantStringClassReference_110ed3a18;
    puStack_f8 = puVar35;
    puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar27);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar30);
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0d6f8;
  ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb4a0;
  puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar30);
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f0eaf8;
  puStack_118 = puVar35;
  uVar37 = 1;
  puVar30 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar30);
  puVar33 = (ulong *)PTR_PTR_1126b23e0;
  _objc_alloc();
  puVar30 = puVar27;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar30;
  func_0x00010c033240();
  _objc_release(puVar30);
  _objc_release(puVar27);
  _objc_release(uVar34);
  _objc_release(uVar3);
  uVar32 = uVar38;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar33);
    return puVar33;
  }
  ___stack_chk_fail();
  lVar26 = lStack_70;
  puVar25 = puStack_78;
  puVar24 = puStack_80;
  ppuVar23 = ppuStack_88;
  ppuVar22 = ppuStack_90;
  puVar21 = puStack_98;
  ppuVar20 = ppuStack_a0;
  puVar19 = puStack_a8;
  puVar18 = puStack_b0;
  ppuVar17 = ppuStack_c0;
  puVar16 = puStack_c8;
  puVar15 = puStack_d0;
  puVar14 = puStack_d8;
  puVar13 = puStack_e0;
  puVar12 = puStack_e8;
  puVar11 = puStack_f0;
  puVar10 = puStack_f8;
  ppuVar9 = ppuStack_100;
  ppuVar8 = ppuStack_108;
  ppuVar7 = ppuStack_110;
  puVar6 = puStack_118;
  ppuVar5 = ppuStack_120;
  uVar4 = uStack_128;
  uVar2 = uStack_130;
  uVar1 = uStack_138;
  ppuStack_1a0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_198 = puVar35;
  uStack_168 = uVar34;
  uStack_160 = uVar3;
  uStack_158 = uVar38;
  pcStack_148 = FUN_107ac0924;
  puStack_190 = puVar28;
  puStack_188 = puVar29;
  puStack_180 = puVar30;
  puStack_178 = puVar33;
  puStack_170 = puVar27;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar31);
  _objc_retain(uVar37);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  _objc_retain(ppuVar5);
  _objc_retain(puVar6);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(ppuVar17);
  _objc_retain(puVar18);
  _objc_retain(puVar19);
  _objc_retain(ppuVar20);
  _objc_retain(puVar21);
  _objc_retain(ppuVar22);
  _objc_retain(ppuVar23);
  _objc_retain(puVar24);
  _objc_retain(puVar25);
  _objc_retain(lVar26);
  _objc_retain(uStack_68);
  _objc_retain(unaff_x28);
  _objc_retain(unaff_x27);
  _objc_retain(unaff_x26);
  _objc_retain(unaff_x25);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(unaff_x21);
  _objc_retain(unaff_x20);
  _objc_retain(unaff_x19);
  _objc_retain(unaff_x29);
  _objc_retain(unaff_x30);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_1b0 = PTR_PTR_1126f9ab8;
  puVar33 = &uStack_1b8;
  uStack_1b8 = uVar32;
  _objc_msgSendSuper2(puVar33,PTR_s_init_1125d9248);
  puVar35 = puStack_b8;
  if (puVar33 != (ulong *)0x0) {
    _objc_storeWeak(puVar33 + 0xe,puVar31);
    _objc_retain(ppuVar5);
    uVar34 = puVar33[6];
    puVar33[6] = (ulong)ppuVar5;
    _objc_release(uVar34);
    _objc_retain(puVar6);
    uVar34 = puVar33[7];
    puVar33[7] = (ulong)puVar6;
    _objc_release(uVar34);
    _objc_retain(param_8);
    uVar34 = puVar33[2];
    puVar33[2] = param_8;
    _objc_release(uVar34);
    _objc_retain(uVar1);
    uVar34 = puVar33[3];
    puVar33[3] = uVar1;
    _objc_release(uVar34);
    _objc_retain(uVar37);
    uVar34 = puVar33[4];
    puVar33[4] = uVar37;
    _objc_release(uVar34);
    _objc_retain(uVar2);
    uVar34 = puVar33[5];
    puVar33[5] = uVar2;
    _objc_release(uVar34);
    _objc_retain(uVar4);
    uVar34 = puVar33[0xd];
    puVar33[0xd] = uVar4;
    _objc_release(uVar34);
    _objc_retain(ppuVar7);
    uVar34 = puVar33[9];
    puVar33[9] = (ulong)ppuVar7;
    _objc_release(uVar34);
    _objc_retain(ppuVar9);
    uVar34 = puVar33[8];
    puVar33[8] = (ulong)ppuVar9;
    _objc_release(uVar34);
    _objc_retain(puVar10);
    uVar34 = puVar33[0xb];
    puVar33[0xb] = (ulong)puVar10;
    _objc_release(uVar34);
    _objc_retain(ppuVar8);
    uVar34 = puVar33[10];
    puVar33[10] = (ulong)ppuVar8;
    _objc_release(uVar34);
    _objc_retain(ppuVar17);
    uVar34 = puVar33[0xf];
    puVar33[0xf] = (ulong)ppuVar17;
    _objc_release(uVar34);
    _objc_retain(puVar19);
    uVar34 = puVar33[0xc];
    puVar33[0xc] = (ulong)puVar19;
    _objc_release(uVar34);
    puVar33[0x10] = (ulong)puVar35;
    _objc_retain(param_10);
    uVar34 = puVar33[0x12];
    puVar33[0x12] = param_10;
    _objc_release(uVar34);
    uVar34 = param_11;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = puVar33[0x13];
    puVar33[0x13] = uVar34;
    _objc_release(uVar38);
    puVar35 = PTR_PTR_1126d63f8;
    _objc_alloc();
    puVar36 = puVar33 + 0xe;
    _objc_loadWeakRetained(puVar36);
    func_0x00010c004460();
    uVar34 = puVar33[0x14];
    puVar33[0x14] = (ulong)puVar35;
    _objc_release(uVar34);
    _objc_release(puVar36);
    puVar35 = PTR_PTR_1126d6400;
    _objc_alloc();
    uVar34 = puVar33[0xd];
    func_0x00010c269d40(uVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f780();
    uVar38 = puVar33[1];
    puVar33[1] = (ulong)puVar35;
    _objc_release(uVar38);
    _objc_release(uVar34);
    uVar34 = puVar33[9];
    func_0x00010c240380(uVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec160();
    _objc_release(uVar34);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(unaff_x30);
  _objc_release(unaff_x29);
  _objc_release(unaff_x19);
  _objc_release(unaff_x20);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(unaff_x25);
  _objc_release(unaff_x26);
  _objc_release(unaff_x27);
  _objc_release(unaff_x28);
  _objc_release(uStack_68);
  _objc_release(lVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(puVar21);
  _objc_release(ppuVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(ppuVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(uVar37);
  _objc_release(puVar31);
  return puVar33;
}



/* Entry: 107ac0924; end: 107ac115f; -[SCDiscoverPublisherOperaPlugin initWithUserSession:context:loggingContext:startWithAttachment:enableAutoAdvance:snapDocConfigurer:snapDocMediaResolver:discoverFeedDataFetcher:subscriptionStore:discoverFeedEventsController:webBrowsingURLChecker:webBrowsingURLInterceptor:publisherPagePropertiesManager:readReceiptCoordinator:cachedViewStateProvider:legacyStoriesTooltipsService:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:storiesGrapheneMetricsEmitter:previewFilterDataProviderCreator:circumstanceEngine:viewLocation:networkConnectivityMonitor:notificationPool:creatorSettingsFetcher:imageDownloader:streamingMediaFetcher:grapheneRegistry:creatorSettingsMutator:creatorSettingsTracker:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:discoverBlizzardLogger:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:safetyReportScopeExposer:externalLinkSendingService:lazyUserTrackedLogger:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:currentPageTracker:storiesExperimentServices:snapDocEditorFactory:previewSnapSenderFactory:contentRemovalDelegate:triggeringSection:] */

undefined8 *
FUN_107ac0924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  puStack_70 = PTR_PTR_1126f9ab8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0xe,param_3);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[9];
    puVar1[9] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[8];
    puVar1[8] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_29;
    _objc_release(uVar2);
    puVar1[0x10] = param_27;
    _objc_retain(param_51);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_51;
    _objc_release(uVar2);
    uVar2 = param_52;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d63f8;
    _objc_alloc();
    puVar4 = puVar1 + 0xe;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c004460();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d6400;
    _objc_alloc();
    uVar2 = puVar1[0xd];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f780();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = puVar1[9];
    func_0x00010c240380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec160();
    _objc_release(uVar2);
  }
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ac1160; end: 107ac118f; -[SCDiscoverPublisherOperaPlugin type] */

void FUN_107ac1160(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e49cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e49cd8);
  return;
}



/* Entry: 107ac1190; end: 107ac1197; -[SCDiscoverPublisherOperaPlugin shouldUseExtendedResetToCamera] */

undefined8 FUN_107ac1190(void)

{
  return 0;
}



/* Entry: 107ac1198; end: 107ac11bf; -[SCDiscoverPublisherOperaPlugin playlistDataSource] */

void FUN_107ac1198(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ac11c0; end: 107ac12ab; -[SCDiscoverPublisherOperaPlugin updateOperaDependencies:] */

void FUN_107ac11c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab0c0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c80(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b76c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc220(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ac12ac; end: 107ac145b; -[SCDiscoverPublisherOperaPlugin updateOperaConfiguration:] */

void FUN_107ac12ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac560();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6c80(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5380(0x4010000000000000,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x80);
  if ((0x19 < lVar6 - 0x49U || (1L << (lVar6 - 0x49U & 0x3f) & 0x2020001U) == 0) &&
     ((uVar1 = lVar6 - 0x57U >> 1, 7 < (uVar1 | lVar6 - 0x57U << 0x3f) ||
      ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) == 0)))) {
    uVar5 = 0xb0;
    if ((0x29 < lVar6 - 0x42U) || ((1L << (lVar6 - 0x42U & 0x3f) & 0x3c000100701U) == 0))
    goto LAB_107ac133c;
  }
  uVar5 = 0x13c;
LAB_107ac133c:
  func_0x00010c2b5480(puVar2,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fd999999999999a,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afda0(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be08a00(param_1);
  func_0x00010c2a8d80(puVar2,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be6dbe0(param_1);
  func_0x00010c2b4880(puVar2,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c240380(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d6c60(puVar3);
  func_0x00010c288260(uVar5,param_2,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ac145c; end: 107ac14d7; -[SCDiscoverPublisherOperaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_107ac145c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c1d5420(uVar2,param_2,param_3);
  func_0x00010c197680(*(undefined8 *)(param_1 + 8),param_2,param_3);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ac14d8; end: 107ac1527; -[SCDiscoverPublisherOperaPlugin setPlaylistItemController:] */

void FUN_107ac14d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c1ddde0(uVar1,param_2,param_3);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac1528; end: 107ac152b; -[SCDiscoverPublisherOperaPlugin extraPropertiesProvider] */

void FUN_107ac1528(void)

{
  return;
}



/* Entry: 107ac152c; end: 107ac15b7; -[SCDiscoverPublisherOperaPlugin setOperaControlling:] */

void FUN_107ac152c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  lVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c08f5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ebe0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac15b8; end: 107ac1607; -[SCDiscoverPublisherOperaPlugin teardown] */

void FUN_107ac15b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c240380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf67700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ac1608; end: 107ac184f; -[SCDiscoverPublisherOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107ac1608(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar7 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    _objc_release(uVar7);
  }
  else {
    puVar2 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    _objc_release(uVar7);
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 8);
      _objc_retain(puVar4);
      _objc_retain(puVar2);
      func_0x00010bf9ea80(uVar7);
      puVar5 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      (**(code **)(param_6 + 0x10))(param_6,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      goto LAB_107ac180c;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0,0);
LAB_107ac180c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac1850; end: 107ac18f7;  */

void FUN_107ac1850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bef7f60(uVar1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac18f8; end: 107ac1967; -[SCDiscoverPublisherOperaPlugin registeredEventsForOperaSession] */

void FUN_107ac18f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  func_0x00010c0720c0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110ebeb98);
  if ((int)pppuVar2 != 0) {
    uVar3 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110ebebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    func_0x00010bee3780(puVar1,param_2,(long)(int)uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107ac1968; end: 107ac19ef; -[SCDiscoverPublisherOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_107ac1968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebeb98);
  if ((int)param_3 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110ebebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    func_0x00010bee3780(param_1,param_2,(long)(int)uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107ac19f0; end: 107ac1aef; -[SCDiscoverPublisherOperaPlugin _updateViewLocationIfNeeded:] */

void FUN_107ac19f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != -1) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c29d360();
    if (param_3 != lVar1) {
      puVar2 = PTR_PTR_1126d6048;
      func_0x00010bf826c0(PTR_PTR_1126d6048,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bc8c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar5);
      func_0x00010c1c0620(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1c0620(*(undefined8 *)(param_1 + 0xa0),param_2,*(undefined8 *)(param_1 + 0x20));
      lVar1 = param_1;
      func_0x00010becf5a0(param_1,param_2,param_3);
      puVar3 = PTR_PTR_1126afdd8;
      func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c24fc40(*(undefined8 *)(param_1 + 0x90),param_2,lVar1);
      }
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 107ac1af0; end: 107ac1b2f; -[SCDiscoverPublisherOperaPlugin _translateViewLocationToPageName:] */

undefined8 FUN_107ac1af0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  if (param_3 < 0x2c) {
    if (param_3 == 4) {
      return uVar1;
    }
    if (param_3 == 0x2b) {
      return 0xb8;
    }
  }
  else {
    if (param_3 == 0x2c) {
      return uVar1;
    }
    if (param_3 == 0x53) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 107ac1b30; end: 107ac1b7b; -[SCDiscoverPublisherOperaPlugin _enableAuxViewAction] */

undefined8 FUN_107ac1b30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084837e8(uVar2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107ac1b7c; end: 107ac1bcf; -[SCDiscoverPublisherOperaPlugin _operaPageModeOnNilNextViewModel] */

undefined8 FUN_107ac1b7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084837e8(uVar2,uVar1);
  _objc_release(uVar1);
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107ac1bd0; end: 107ac1bd7; -[SCDiscoverPublisherOperaPlugin discoverPublisherOperaSession] */

undefined8 FUN_107ac1bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107ac1bd8; end: 107ac1ccf; -[SCDiscoverPublisherOperaPlugin .cxx_destruct] */

void FUN_107ac1bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
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



/* Entry: 107ac1cd0; end: 107ac1cdb; +[SCDiscoverPublisherOperaSession announcerIdentifier] */

undefined ** FUN_107ac1cd0(void)

{
  return &PTR____CFConstantStringClassReference_110eac2d8;
}



/* Entry: 107ac1cdc; end: 107ac1ce3; -[SCDiscoverPublisherOperaSession addListener:] */

void FUN_107ac1cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ac1ce4; end: 107ac1ceb; -[SCDiscoverPublisherOperaSession removeListener:] */

void FUN_107ac1ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ac1cec; end: 107ac2523; -[SCDiscoverPublisherOperaSession initWithContext:userSession:loggingContext:subscriptionStore:discoverFeedEventsController:discoverFeedDataFetcher:snapDocConfigurer:publisherPagePropertiesManager:cachedViewStateProvider:legacyStoriesTooltipsService:readReceiptCoordinator:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:storiesGrapheneMetricsEmitter:previewFilterDataProviderCreator:circumstanceEngine:networkConnectivityMonitor:notificationPool:imageDownloader:streamingMediaFetcher:grapheneRegistry:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:discoverBlizzardLogger:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:safetyReportScopeExposer:externalLinkSendingService:lazyUserTrackedLogger:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:snapDocEditorFactory:previewSnapSenderFactory:contentRemovalDelegate:triggeringSection:storiesConfigProvider:] */

undefined8 *
FUN_107ac1cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_48);
  puStack_70 = PTR_PTR_1126f9ac0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_5);
    puVar1[0xf] = param_3;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_storeWeak(puVar1 + 7,param_13);
    _objc_storeWeak(puVar1 + 8,param_11);
    func_0x00010bdc7960(puVar1);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_18);
    uVar3 = puVar1[0x18];
    puVar1[0x18] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x17];
    puVar1[0x17] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0x19];
    puVar1[0x19] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0xb,param_20);
    _objc_storeWeak(puVar1 + 0xc,param_21);
    _objc_retain(param_22);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar1[0x20];
    puVar1[0x20] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_30);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_34);
    uVar3 = puVar1[0x27];
    puVar1[0x27] = param_34;
    _objc_release(uVar3);
    _objc_retain(param_35);
    uVar3 = puVar1[0x25];
    puVar1[0x25] = param_35;
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar3 = puVar1[0x26];
    puVar1[0x26] = param_43;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar1[0x28];
    puVar1[0x28] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_37);
    uVar3 = puVar1[0x29];
    puVar1[0x29] = param_37;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = param_38;
    _objc_release(uVar3);
    _objc_retain(param_39);
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = param_39;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar1[0x2d];
    puVar1[0x2d] = param_40;
    _objc_release(uVar3);
    _objc_retain(param_41);
    uVar3 = puVar1[0x2e];
    puVar1[0x2e] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_44);
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = param_44;
    _objc_release(uVar3);
    _objc_retain(param_45);
    uVar3 = puVar1[0x30];
    puVar1[0x30] = param_45;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x31,param_46);
    puVar1[0x32] = param_47;
    _objc_retain(param_48);
    uVar3 = puVar1[0x33];
    puVar1[0x33] = param_48;
    _objc_release(uVar3);
  }
  _objc_release(param_48);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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
  return puVar1;
}



/* Entry: 107ac2524; end: 107ac258f; -[SCDiscoverPublisherOperaSession setOperaEventAnnouncing:] */

void FUN_107ac2524(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x98,param_3);
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac2590; end: 107ac2597; -[SCDiscoverPublisherOperaSession currentSessionId] */

void FUN_107ac2590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_sessionID_1126359f8);
  return;
}



/* Entry: 107ac2598; end: 107ac25a3; -[SCDiscoverPublisherOperaSession setLoggingContext:] */

void FUN_107ac2598(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107ac25a4; end: 107ac27a3; -[SCDiscoverPublisherOperaSession registeredEventsForOperaSession] */

void FUN_107ac25a4(void)

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
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 in_x4;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_d0 = puVar1;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_c8 = puVar2;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9460;
  puStack_c0 = puVar3;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9460;
  puStack_b8 = puVar4;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_b0 = puVar5;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_a8 = puVar6;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9c10;
  puStack_a0 = puVar7;
  func_0x00010bf3dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2330;
  puStack_98 = puVar8;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2330;
  puStack_90 = puVar9;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ebd138;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ebd178;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ed3a58;
  ppuVar14 = &puStack_d0;
  uVar15 = 0xd;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(uVar15);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c06dca0();
  if (((ulong)puVar2 & 1) != 0) goto LAB_107ac294c;
  ppuVar12 = ppuVar14;
  func_0x00010c0720c0();
  if ((int)ppuVar12 == 0) {
    func_0x00010beaf6e0(puVar1);
    func_0x00010bed67a0(puVar1);
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c0700c0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c0720c0();
      if ((int)ppuVar12 == 0) {
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf17ae0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)ppuVar12 == 0) goto LAB_107ac294c;
      }
      else {
        _objc_release(puVar2);
      }
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar14;
    func_0x00010c0720c0();
    if ((int)ppuVar12 == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)ppuVar12 == 0) {
        puVar2 = PTR_PTR_1126c9c10;
        func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppuVar12 == 0) {
          ppuVar12 = ppuVar14;
          func_0x00010c0720c0();
          if ((int)ppuVar12 == 0) {
            ppuVar12 = ppuVar14;
            func_0x00010c0720c0();
            if ((int)ppuVar12 == 0) {
              puVar2 = PTR_PTR_1126b2330;
              func_0x00010bf3df00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar14;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              puVar2 = PTR_PTR_1126b2340;
              if ((int)ppuVar12 == 0) {
                puVar2 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar14;
                func_0x00010c0720c0();
                _objc_release(puVar2);
                if ((int)ppuVar12 != 0) {
                  puVar1[0xa1] = 1;
                }
              }
              else {
                uVar13 = uVar15;
                func_0x00010c118b40(uVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c076c60();
                _objc_release(uVar13);
                if ((int)puVar2 != 0) {
                  puVar2 = puVar1 + 0x10;
                  _objc_loadWeakRetained(puVar2);
                  puVar3 = puVar2;
                  func_0x00010c29d360();
                  func_0x000108534a80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000107d04cb0();
                  _objc_release(puVar3);
                  _objc_release(puVar2);
                }
                puVar1[0xa1] = 0;
              }
            }
            else {
              func_0x00010be18e00(puVar1);
            }
          }
          else {
            func_0x00010be18e00(puVar1);
            func_0x00010be09d20(puVar1);
            func_0x00010c26ac40(*(undefined8 *)(puVar1 + 0x88));
            puVar1[0xa0] = 0;
          }
          goto LAB_107ac294c;
        }
        puVar2 = puVar1 + 0x50;
        _objc_loadWeakRetained(puVar2);
        puVar3 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a6a40();
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar1 = puVar1 + 0x1a8;
        _objc_loadWeakRetained(puVar1);
        puVar2 = PTR_PTR_1126c9310;
        func_0x00010bf631e0(PTR_PTR_1126c9310);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(puVar1);
        goto LAB_107ac2834;
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010be09d20(puVar1);
  }
  else {
    puVar1 = puVar1 + 0x1a0;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
LAB_107ac2834:
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_107ac294c:
  _objc_release(in_x4);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}


