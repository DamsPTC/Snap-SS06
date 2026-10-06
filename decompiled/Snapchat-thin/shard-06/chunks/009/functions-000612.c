/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fbe724; end: 104fbe80b; -[SVGParser initWithString:] */

undefined1 * FUN_104fbe724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e5718;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSXMLParser_1126b3378;
    _objc_alloc(PTR__OBJC_CLASS___NSXMLParser_1126b3378);
    func_0x00010c008240();
    func_0x00010c18b5e0();
    func_0x00010c0f3d80(puVar3);
    puVar4 = puVar3;
    func_0x00010c0f4840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9260(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fbe80c; end: 104fbe8df; -[SVGParser initWithContentsOfURL:] */

undefined1 * FUN_104fbe80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSXMLParser_1126b3378;
    _objc_alloc(PTR__OBJC_CLASS___NSXMLParser_1126b3378);
    func_0x00010c0040a0();
    func_0x00010c18b5e0();
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    func_0x00010c0f3d80(puVar2);
    puVar4 = puVar2;
    func_0x00010c0f4840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9260(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fbe8e0; end: 104fbe967; -[SVGParser relativeURL:] */

void FUN_104fbe8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c264460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bdc2c60(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fbe968; end: 104fbe96f; -[SVGParser parserError] */

undefined8 FUN_104fbe968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104fbe970; end: 104fbe99f; -[SVGParser setParserError:] */

void FUN_104fbe970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fbe9a0; end: 104fbe9a7; -[SVGParser root] */

undefined8 FUN_104fbe9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fbe9a8; end: 104fbe9d7; -[SVGParser setRoot:] */

void FUN_104fbe9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fbe9d8; end: 104fbe9df; -[SVGParser svgURL] */

undefined8 FUN_104fbe9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104fbe9e0; end: 104fbea27; -[SVGParser .cxx_destruct] */

void FUN_104fbe9e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fbea28; end: 104fbea7b; +[SVGTextUtilities defaultFontSize] */

double FUN_104fbea28(void)

{
  long lVar1;
  double dVar2;
  
  if (dRam00000001136b91d0 == 0.0) {
    dVar2 = 0.0;
    lVar1 = 0;
    _CTFontCreateUIFontForLanguage(0,0);
    if (lVar1 != 0) {
      _CTFontGetSize();
      dRam00000001136b91d0 = dVar2;
      _CFRelease(lVar1);
    }
  }
  return dRam00000001136b91d0;
}



/* Entry: 104fbea7c; end: 104fbebf7; +[SVGTextUtilities cleanXMLText:] */

void FUN_104fbea7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c11f340(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar5 = param_3;
  if (lVar2 != 0x7fffffffffffffff) {
    lVar4 = param_3;
    func_0x00010c0d3c80();
    do {
      lVar5 = lVar4;
      func_0x00010c08fa60(lVar4);
      lVar6 = lVar4;
      func_0x00010c11f380(lVar4,param_2,puVar3,0,lVar2,lVar5 - lVar2);
      if (lVar6 == 0x7fffffffffffffff) {
        lVar6 = lVar4;
        func_0x00010c08fa60(lVar4);
      }
      func_0x00010c130d20(lVar4,param_2,lVar2,lVar6 - lVar2,
                          &PTR____CFConstantStringClassReference_110daafd8);
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c11f340(lVar4,param_2,puVar1);
      _objc_release(puVar1);
    } while (lVar2 != 0x7fffffffffffffff);
    func_0x00010bf070e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    lVar5 = lVar4;
    func_0x00010bf51e00(lVar4);
    _objc_release(param_3);
    _objc_release(lVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104fbebf8; end: 104fbee17; +[SVGTextUtilities fontAttributesFromSVGAttributes:] */

undefined * FUN_104fbebf8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puStack_140;
  undefined auStack_f0 [128];
  long lStack_70;
  ulong uVar9;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = puVar2;
    func_0x000104fc18b4();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_f0;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar9 = *(ulong *)((long)puVar7 * 8);
      iVar8 = (int)uVar9;
      func_0x00010bfda7c0();
      if (((uVar9 & 1) != 0) || (func_0x00010c0720c0(), iVar8 != 0)) {
        puVar6 = param_3;
        func_0x00010c0dff20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar3);
        _objc_release(puVar6);
      }
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar7);
    puVar7 = auStack_f0;
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    if (puStack_140 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar3);
    }
    puVar5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puStack_140);
    puStack_140 = puVar5;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
    return puStack_140;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b3288;
  func_0x00010bfb3b20(PTR_PTR_1126b3288);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b3288;
  if (puVar7 == (undefined *)0x0) {
    func_0x00010bf52400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      _CTFontCreateUIFontForLanguage(0);
      if (puVar3 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar3;
        _CTFontCopyFontDescriptor();
        _CFRelease(puVar3);
      }
    }
    else {
      puVar7 = puVar5;
      _CTFontDescriptorCreateWithAttributes();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar4 = puVar5;
      func_0x00010bf002e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar7;
      _CTFontDescriptorCreateMatchingFontDescriptor(puVar7,puVar3);
      if (puVar4 != (undefined *)0x0) {
        _CFRelease(puVar7);
        puVar6 = puVar4;
        _CTFontDescriptorCreateCopyWithAttributes(puVar4,puVar5);
        puVar7 = puVar4;
        if (puVar6 != (undefined *)0x0) {
          _CFRelease(puVar4);
          puVar7 = puVar6;
        }
      }
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bf52420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      _CFRetain(puVar7);
    }
    else {
      _CTFontDescriptorCreateCopyWithAttributes(puVar7,puVar5);
    }
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  return puVar7;
}



/* Entry: 104fbee18; end: 104fbef8f; +[SVGTextUtilities newFontDescriptorFromAttributes:baseDescriptor:] */

undefined * FUN_104fbee18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *in_x3;
  
  puVar1 = PTR_PTR_1126b3288;
  func_0x00010bfb3b20(PTR_PTR_1126b3288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3288;
  if (in_x3 == (undefined *)0x0) {
    func_0x00010bf52400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      _CTFontCreateUIFontForLanguage(0);
      if (puVar3 == (undefined *)0x0) {
        in_x3 = (undefined *)0x0;
      }
      else {
        in_x3 = puVar3;
        _CTFontCopyFontDescriptor();
        _CFRelease(puVar3);
      }
    }
    else {
      in_x3 = puVar2;
      _CTFontDescriptorCreateWithAttributes();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar4 = puVar2;
      func_0x00010bf002e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = in_x3;
      _CTFontDescriptorCreateMatchingFontDescriptor(in_x3,puVar3);
      if (puVar4 != (undefined *)0x0) {
        _CFRelease(in_x3);
        puVar5 = puVar4;
        _CTFontDescriptorCreateCopyWithAttributes(puVar4,puVar2);
        in_x3 = puVar4;
        if (puVar5 != (undefined *)0x0) {
          _CFRelease(puVar4);
          in_x3 = puVar5;
        }
      }
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010bf52420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      _CFRetain(in_x3);
    }
    else {
      _CTFontDescriptorCreateCopyWithAttributes(in_x3,puVar2);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return in_x3;
}



/* Entry: 104fbef90; end: 104fbf01b; +[SVGTextUtilities newFontRefFromFontDescriptor:] */

void FUN_104fbef90(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_4;
  _CTFontDescriptorCopyAttribute(param_4,*(undefined8 *)PTR__kCTFontSizeAttribute_11034a0c0);
  if (lVar1 == 0) {
    dVar4 = 0.0;
  }
  else {
    lVar2 = lVar1;
    _CFNumberGetTypeID();
    lVar3 = lVar1;
    _CFGetTypeID();
    dVar4 = 0.0;
    if (lVar2 == lVar3) {
      func_0x00010bfb2c80(lVar1);
      dVar4 = (double)param_1;
    }
    _CFRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CTFontCreateWithFontDescriptor_110349eb0)(dVar4,param_4,0);
  return;
}



/* Entry: 104fbf01c; end: 104fbf137; +[SVGTextUtilities coreTextAttributesFromSVGStyleAttributes:] */

void FUN_104fbf01c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bef8620(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010bef8600(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010bef8640(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010bef8660(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010befce40(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010bef8680(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    func_0x00010c0990c0(PTR_PTR_1126b3288,param_3,param_4,puVar1);
    if (0.0 < param_1) {
      func_0x00010bf6fc80(param_1,PTR_PTR_1126b3288,param_3,puVar1);
    }
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fbf138; end: 104fbf4f7; +[SVGTextUtilities characterSetWithSVGDescription:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_104fbf138(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_140;
  long alStack_138 [3];
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
  puVar12 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  ppuVar10 = &PTR____CFConstantStringClassReference_110dbff58;
  lVar3 = param_3;
  func_0x00010bfda7c0();
  if ((int)lVar3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf44740(lVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
    _objc_alloc_init();
    alStack_138[2] = 0;
    alStack_138[1] = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar3);
    ppuVar10 = (undefined **)(alStack_138 + 1);
    param_4 = auStack_f0;
    lVar5 = lVar3;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      _objc_release(lVar3);
      puVar12 = (undefined *)0x0;
    }
    else {
      bVar1 = false;
      lVar15 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(lVar3);
          }
          lVar16 = *(long *)(alStack_138[2] + lVar14 * 8);
          puVar12 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar16;
          func_0x00010c25d0a0(lVar16,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          lVar13 = lVar6;
          func_0x00010bfda7c0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dbff58);
          lVar7 = lVar6;
          if ((int)lVar13 != 0) {
            func_0x00010c260c00(lVar6,param_2,2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            lVar6 = lVar7;
            func_0x00010bf44740(lVar7,param_2,&PTR____CFConstantStringClassReference_110db3638);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar6;
            func_0x00010bf529e0();
            if (lVar13 == 1) {
              lVar13 = lVar16;
              func_0x00010c25cfc0(lVar16,param_2,&PTR____CFConstantStringClassReference_110dbff78,
                                  &PTR____CFConstantStringClassReference_110db1158);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25cfc0(lVar16,param_2,&PTR____CFConstantStringClassReference_110dbff78,
                                  &PTR____CFConstantStringClassReference_110dbff98);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar13 = lVar6;
              func_0x00010bf529e0();
              if (lVar13 == 2) {
                lVar13 = lVar6;
                func_0x00010c0dfd20(lVar6,param_2,0);
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar6;
                func_0x00010c0dfd20(lVar6,param_2,1);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                lVar16 = 0;
                lVar13 = 0;
              }
            }
            puVar12 = PTR__OBJC_CLASS___NSScanner_1126b3380;
            func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,lVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSScanner_1126b3380;
            func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,lVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar12;
            func_0x00010c14eda0(puVar12,param_2,alStack_138);
            if (((int)puVar9 != 0) &&
               (puVar9 = puVar8, func_0x00010c14eda0(puVar8,param_2,&lStack_140), (int)puVar9 != 0))
            {
              func_0x00010bef7600(puVar4,param_2,alStack_138[0],(lStack_140 - alStack_138[0]) + 1);
              bVar1 = true;
            }
            _objc_release(puVar8);
            _objc_release(puVar12);
            _objc_release(lVar16);
            _objc_release(lVar13);
            _objc_release(lVar6);
          }
          _objc_release(lVar7);
          lVar14 = lVar14 + 1;
        } while (lVar5 != lVar14);
        ppuVar10 = (undefined **)(alStack_138 + 1);
        param_4 = auStack_f0;
        lVar5 = lVar3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
      _objc_release(lVar3);
      if (bVar1) {
        _objc_retain(puVar4);
        puVar12 = puVar4;
      }
      else {
        puVar12 = (undefined *)0x0;
      }
    }
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    func_0x00010c0dff20(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110dbffb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c08fa60();
    if (ppuVar11 != (undefined **)0x0) {
      puVar12 = PTR_PTR_1126b3288;
      func_0x00010bf35a60(PTR_PTR_1126b3288,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        func_0x00010c12d3e0(param_4,param_2,
                            *(undefined8 *)PTR__kCTFontCharacterSetAttribute_11034a080);
      }
      else {
        func_0x00010c1d0560(param_4,param_2,puVar12);
      }
      _objc_release(puVar12);
    }
    _objc_release(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104fbf4f8; end: 104fbf5a7; +[SVGTextUtilities limitCharacterSetFromSVGStyleAttributes:toCoreTextAttributes:] */

void FUN_104fbf4f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dbffb8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3288;
    func_0x00010bf35a60(PTR_PTR_1126b3288,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c12d3e0(param_4,param_2,*(undefined8 *)PTR__kCTFontCharacterSetAttribute_11034a080
                         );
    }
    else {
      func_0x00010c1d0560(param_4,param_2,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fbf5a8; end: 104fbf88b; +[SVGTextUtilities addFontWidthFromSVGStyleAttributes:toCoreTextAttributes:] */

void FUN_104fbf5a8(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x23;
  undefined **ppuVar16;
  long unaff_x24;
  undefined **ppuVar17;
  int iVar18;
  long unaff_x25;
  undefined **ppuVar19;
  ulong uVar20;
  long unaff_x26;
  undefined **ppuVar21;
  long lVar22;
  undefined **unaff_x27;
  ulong unaff_x28;
  undefined **ppuVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_300;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  uint uStack_27c;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *apuStack_220 [16];
  long lStack_1a0;
  ulong uStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined **ppuStack_148;
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
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_104fc15fc(param_3,&PTR____CFConstantStringClassReference_110dbffd8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = *(undefined ***)PTR__kCTFontWidthTrait_11034a120;
  ppuVar23 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar9 = apuStack_f0;
  lVar22 = param_3;
  func_0x00010bf52a60();
  if (lVar22 != 0) {
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x23 = &PTR____CFConstantStringClassReference_110dbfff8;
    unaff_x26 = *plStack_120;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x28 = *(ulong *)(lStack_128 + unaff_x25 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar3 = unaff_x28;
        _objc_opt_isKindOfClass(unaff_x28,puVar2);
        if ((uVar3 & 1) != 0) {
          uVar3 = unaff_x28;
          func_0x00010c0720c0();
          if (((uVar3 & 1) != 0) || (uVar3 = unaff_x28, func_0x00010c0720c0(), (int)uVar3 != 0)) {
            _objc_release(ppuVar23);
            _objc_release(param_3);
            goto LAB_104fbf834;
          }
          uVar3 = unaff_x28;
          func_0x00010c0720c0();
          if ((uVar3 & 1) == 0) {
            uVar3 = unaff_x28;
            func_0x00010c0720c0();
            if ((uVar3 & 1) == 0) {
              uVar3 = unaff_x28;
              func_0x00010c0720c0();
              if ((uVar3 & 1) == 0) {
                uVar3 = unaff_x28;
                func_0x00010c0720c0();
                if ((uVar3 & 1) == 0) {
                  uVar3 = unaff_x28;
                  func_0x00010c0720c0();
                  if ((uVar3 & 1) == 0) {
                    uVar3 = unaff_x28;
                    func_0x00010c0720c0();
                    if ((uVar3 & 1) == 0) {
                      uVar3 = unaff_x28;
                      func_0x00010c0720c0();
                      if ((uVar3 & 1) == 0) {
                        uVar3 = unaff_x28;
                        func_0x00010c0720c0();
                        if ((int)uVar3 == 0) goto LAB_104fbf76c;
                        uVar24 = 0x3ff0000000000000;
                      }
                      else {
                        uVar24 = 0x3fe8000000000000;
                      }
                    }
                    else {
                      uVar24 = 0x3fe0000000000000;
                    }
                  }
                  else {
                    uVar24 = 0x3fd0000000000000;
                  }
                }
                else {
                  uVar24 = 0xbfd0000000000000;
                }
              }
              else {
                uVar24 = 0xbfe0000000000000;
              }
            }
            else {
              uVar24 = 0xbfe8000000000000;
            }
          }
          else {
            uVar24 = 0xbff0000000000000;
          }
          unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(uVar24);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar23);
          ppuVar23 = unaff_x23;
          unaff_x24 = lVar22;
          goto LAB_104fbf80c;
        }
LAB_104fbf76c:
        unaff_x25 = unaff_x25 + 1;
      } while (lVar22 != unaff_x25);
      ppuVar9 = apuStack_f0;
      lVar22 = param_3;
      func_0x00010bf52a60();
      unaff_x24 = lVar22;
    } while (lVar22 != 0);
  }
LAB_104fbf80c:
  _objc_release(param_3);
  lVar22 = unaff_x24;
  if (ppuVar23 == (undefined **)0x0) {
LAB_104fbf834:
    ppuVar4 = ppuVar14;
    func_0x00010c12d3e0(param_4);
  }
  else {
    ppuVar4 = ppuVar23;
    ppuVar9 = ppuVar14;
    func_0x00010c1d0560(param_4);
    _objc_release(ppuVar23);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104fbf88c;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = lVar22;
  ppuStack_168 = unaff_x23;
  ppuStack_160 = ppuVar23;
  ppuStack_158 = ppuVar14;
  lStack_150 = param_3;
  ppuStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  FUN_104fc15fc(ppuVar4,&PTR____CFConstantStringClassReference_110dc0138);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = *(undefined ***)PTR__kCTFontTraitsAttribute_11034a0e0;
  ppuVar23 = ppuVar9;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar23 == (undefined **)0x0) {
    ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar19 = *(undefined ***)PTR__kCTFontWeightTrait_11034a118;
  ppuVar5 = ppuVar9;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = *(undefined ***)PTR__kCTFontSymbolicTrait_11034a0d8;
  ppuVar15 = ppuVar23;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar15;
  func_0x00010c282760();
  _objc_release(ppuVar15);
  dVar25 = 0.0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  _objc_retain(ppuVar4);
  ppuVar13 = apuStack_220;
  ppuVar7 = ppuVar4;
  func_0x00010bf52a60();
  ppuVar8 = ppuVar4;
  if (ppuVar7 != (undefined **)0x0) {
    uStack_27c = (uint)ppuVar6;
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbfff8;
    ppuVar15 = (undefined **)*puStack_250;
    ppuVar16 = &PTR____CFConstantStringClassReference_110dc0018;
    ppuVar21 = &PTR____CFConstantStringClassReference_110dc0158;
    ppuStack_290 = ppuVar17;
    ppuStack_288 = ppuVar14;
    ppuStack_278 = ppuVar19;
    ppuStack_270 = ppuVar23;
    ppuStack_268 = ppuVar5;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != ppuVar15) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar20 = *(ulong *)(lStack_258 + (long)ppuVar17 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar3 = uVar20;
        _objc_opt_isKindOfClass(uVar20,puVar2);
        if ((uVar3 & 1) != 0) {
          uVar3 = uVar20;
          func_0x00010c0720c0();
          if ((((uVar3 & 1) == 0) && (uVar3 = uVar20, func_0x00010c0720c0(), (uVar3 & 1) == 0)) &&
             (uVar3 = uVar20, func_0x00010c0720c0(), (int)uVar3 == 0)) {
            uVar3 = uVar20;
            func_0x00010c0720c0();
            if (((uVar3 & 1) == 0) && (uVar3 = uVar20, func_0x00010c0720c0(), (int)uVar3 == 0)) {
              uVar3 = uVar20;
              func_0x00010c067ec0();
              if (((int)uVar3 < 100) || (uVar3 = uVar20, func_0x00010c067ec0(), 900 < (int)uVar3))
              goto LAB_104fbfa98;
              func_0x00010bf885a0(uVar20);
              ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df720((dVar25 + -400.0) / 500.0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuStack_268);
              _objc_release(ppuVar4);
              ppuVar19 = ppuStack_278;
              ppuVar23 = ppuStack_270;
              if ((uStack_27c >> 1 & 1) == 0) goto joined_r0x000104fbfc00;
            }
            else {
              _objc_release(ppuStack_268);
              _objc_release(ppuVar4);
              ppuVar21 = (undefined **)0x0;
            }
          }
          else {
            _objc_release(ppuStack_268);
            _objc_release(ppuVar4);
            ppuVar23 = ppuStack_270;
            ppuVar19 = ppuStack_278;
            if ((uStack_27c >> 1 & 1) == 0) goto LAB_104fbfc04;
            ppuVar21 = (undefined **)0x0;
          }
          ppuVar23 = ppuStack_270;
          ppuVar19 = ppuStack_278;
          ppuVar8 = ppuStack_270;
          func_0x00010c0d3c80();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(ppuVar8);
          _objc_release(puVar2);
          ppuVar17 = ppuVar8;
          func_0x00010bf51e00();
          ppuVar13 = ppuStack_288;
          func_0x00010c1d0560(ppuVar9);
          _objc_release(ppuVar17);
          ppuVar5 = ppuVar21;
          unaff_x27 = ppuVar7;
          goto LAB_104fbfb84;
        }
LAB_104fbfa98:
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar7 != ppuVar17);
      ppuVar13 = apuStack_220;
      ppuVar7 = ppuVar4;
      func_0x00010bf52a60();
      ppuVar23 = ppuStack_270;
      ppuVar19 = ppuStack_278;
      ppuVar5 = ppuStack_268;
      unaff_x27 = ppuVar7;
    } while (ppuVar7 != (undefined **)0x0);
  }
LAB_104fbfb84:
  _objc_release(ppuVar8);
  ppuVar16 = ppuVar8;
  ppuVar21 = ppuVar5;
  ppuVar7 = unaff_x27;
joined_r0x000104fbfc00:
  if (ppuVar21 == (undefined **)0x0) {
LAB_104fbfc04:
    ppuVar14 = ppuVar19;
    func_0x00010c12d3e0(ppuVar9);
  }
  else {
    ppuVar14 = ppuVar21;
    ppuVar13 = ppuVar19;
    func_0x00010c1d0560(ppuVar9);
    _objc_release(ppuVar21);
  }
  _objc_release(ppuVar23);
  _objc_release(ppuVar4);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_3c0;
  pcStack_298 = FUN_104fbfc6c;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2f0 = ppuVar6;
  ppuStack_2e8 = ppuVar7;
  ppuStack_2e0 = ppuVar21;
  ppuStack_2d8 = ppuVar19;
  ppuStack_2d0 = ppuVar17;
  ppuStack_2c8 = ppuVar16;
  ppuStack_2c0 = ppuVar15;
  ppuStack_2b8 = ppuVar23;
  ppuStack_2b0 = ppuVar4;
  ppuStack_2a8 = ppuVar9;
  ppuStack_2a0 = &puStack_140;
  _objc_retain(ppuVar13);
  FUN_104fc15fc(ppuVar14,&PTR____CFConstantStringClassReference_110dc01b8);
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 0.0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  ppuVar9 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar9 != (undefined **)0x0) {
    lVar22 = *plStack_3b0;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_3b0 != lVar22) {
          _objc_enumerationMutation(ppuVar14);
        }
        iVar18 = (int)*(undefined8 *)(lStack_3b8 + (long)ppuVar23 * 8);
        iVar1 = iVar18;
        func_0x00010c0720c0();
        if (iVar1 == 0) {
          func_0x00010c0720c0();
          if (iVar18 != 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(ppuVar13);
            _objc_release(puVar2);
          }
        }
        else {
          func_0x00010c12d3e0(ppuVar13);
        }
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar9 != ppuVar23);
      ppuVar9 = ppuVar14;
      puVar12 = &uStack_3c0;
      func_0x00010bf52a60();
    } while (ppuVar9 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_300) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    puVar10 = (undefined1 *)puVar12;
    _CTFontDescriptorCreateWithAttributes();
    if (puVar10 != (undefined1 *)0x0) {
      dVar26 = 100.0;
      puVar11 = puVar10;
      _CTFontCreateWithFontDescriptor();
      if (puVar11 != (undefined1 *)0x0) {
        _CTFontGetAscent();
        dVar27 = dVar26;
        _CTFontGetDescent(puVar11);
        if (0.0 < dVar26 + dVar27) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740((float)((dVar25 * 100.0) / (dVar26 + dVar27)),
                              PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar12);
          _objc_release(puVar2);
        }
        _CFRelease(puVar11);
      }
      _CFRelease(puVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
}



/* Entry: 104fbf88c; end: 104fbfc6b; +[SVGTextUtilities addfontWeightFromSVGStyleAttributes:toCoreTextAttributes:] */

void FUN_104fbf88c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  int iVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined **unaff_x27;
  undefined **ppuVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  uint uStack_14c;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_104fc15fc(param_3,&PTR____CFConstantStringClassReference_110dc0138);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = *(undefined ***)PTR__kCTFontTraitsAttribute_11034a0e0;
  ppuVar2 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar17 = *(undefined ***)PTR__kCTFontWeightTrait_11034a118;
  ppuVar3 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = *(undefined ***)PTR__kCTFontSymbolicTrait_11034a0d8;
  ppuVar12 = ppuVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar12;
  func_0x00010c282760();
  _objc_release(ppuVar12);
  dVar22 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  _objc_retain(param_3);
  ppuVar11 = apuStack_f0;
  ppuVar4 = param_3;
  func_0x00010bf52a60();
  ppuVar7 = param_3;
  if (ppuVar4 != (undefined **)0x0) {
    uStack_14c = (uint)ppuVar21;
    ppuVar21 = &PTR____CFConstantStringClassReference_110dbfff8;
    ppuVar12 = (undefined **)*puStack_120;
    ppuVar14 = &PTR____CFConstantStringClassReference_110dc0018;
    ppuVar19 = &PTR____CFConstantStringClassReference_110dc0158;
    ppuStack_160 = ppuVar15;
    ppuStack_158 = ppuVar13;
    ppuStack_148 = ppuVar17;
    ppuStack_140 = ppuVar2;
    ppuStack_138 = ppuVar3;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != ppuVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar18 = *(ulong *)(lStack_128 + (long)ppuVar15 * 8);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar6 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar5);
        if ((uVar6 & 1) != 0) {
          uVar6 = uVar18;
          func_0x00010c0720c0();
          if ((((uVar6 & 1) == 0) && (uVar6 = uVar18, func_0x00010c0720c0(), (uVar6 & 1) == 0)) &&
             (uVar6 = uVar18, func_0x00010c0720c0(), (int)uVar6 == 0)) {
            uVar6 = uVar18;
            func_0x00010c0720c0();
            if (((uVar6 & 1) == 0) && (uVar6 = uVar18, func_0x00010c0720c0(), (int)uVar6 == 0)) {
              uVar6 = uVar18;
              func_0x00010c067ec0();
              if (((int)uVar6 < 100) || (uVar6 = uVar18, func_0x00010c067ec0(), 900 < (int)uVar6))
              goto LAB_104fbfa98;
              func_0x00010bf885a0(uVar18);
              ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df720((dVar22 + -400.0) / 500.0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuStack_138);
              _objc_release(param_3);
              ppuVar17 = ppuStack_148;
              ppuVar2 = ppuStack_140;
              if ((uStack_14c >> 1 & 1) == 0) goto joined_r0x000104fbfc00;
            }
            else {
              _objc_release(ppuStack_138);
              _objc_release(param_3);
              ppuVar19 = (undefined **)0x0;
            }
          }
          else {
            _objc_release(ppuStack_138);
            _objc_release(param_3);
            ppuVar2 = ppuStack_140;
            ppuVar17 = ppuStack_148;
            if ((uStack_14c >> 1 & 1) == 0) goto LAB_104fbfc04;
            ppuVar19 = (undefined **)0x0;
          }
          ppuVar2 = ppuStack_140;
          ppuVar17 = ppuStack_148;
          ppuVar7 = ppuStack_140;
          func_0x00010c0d3c80();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(ppuVar7);
          _objc_release(puVar5);
          ppuVar15 = ppuVar7;
          func_0x00010bf51e00();
          ppuVar11 = ppuStack_158;
          func_0x00010c1d0560(param_4);
          _objc_release(ppuVar15);
          ppuVar3 = ppuVar19;
          unaff_x27 = ppuVar4;
          goto LAB_104fbfb84;
        }
LAB_104fbfa98:
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar4 != ppuVar15);
      ppuVar11 = apuStack_f0;
      ppuVar4 = param_3;
      func_0x00010bf52a60();
      ppuVar2 = ppuStack_140;
      ppuVar17 = ppuStack_148;
      ppuVar3 = ppuStack_138;
      unaff_x27 = ppuVar4;
    } while (ppuVar4 != (undefined **)0x0);
  }
LAB_104fbfb84:
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar7;
  ppuVar19 = ppuVar3;
  ppuVar4 = unaff_x27;
joined_r0x000104fbfc00:
  if (ppuVar19 == (undefined **)0x0) {
LAB_104fbfc04:
    ppuVar13 = ppuVar17;
    func_0x00010c12d3e0(param_4);
  }
  else {
    ppuVar13 = ppuVar19;
    ppuVar11 = ppuVar17;
    func_0x00010c1d0560(param_4);
    _objc_release(ppuVar19);
  }
  _objc_release(ppuVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_290;
  pcStack_168 = FUN_104fbfc6c;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1c0 = ppuVar21;
  ppuStack_1b8 = ppuVar4;
  ppuStack_1b0 = ppuVar19;
  ppuStack_1a8 = ppuVar17;
  ppuStack_1a0 = ppuVar15;
  ppuStack_198 = ppuVar14;
  ppuStack_190 = ppuVar12;
  ppuStack_188 = ppuVar2;
  ppuStack_180 = param_3;
  ppuStack_178 = param_4;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  FUN_104fc15fc(ppuVar13,&PTR____CFConstantStringClassReference_110dc01b8);
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  ppuVar2 = ppuVar13;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar20 = *plStack_280;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_280 != lVar20) {
          _objc_enumerationMutation(ppuVar13);
        }
        iVar16 = (int)*(undefined8 *)(lStack_288 + (long)ppuVar21 * 8);
        iVar1 = iVar16;
        func_0x00010c0720c0();
        if (iVar1 == 0) {
          func_0x00010c0720c0();
          if (iVar16 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(ppuVar11);
            _objc_release(puVar5);
          }
        }
        else {
          func_0x00010c12d3e0(ppuVar11);
        }
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar2 != ppuVar21);
      ppuVar2 = ppuVar13;
      puVar10 = &uStack_290;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    puVar8 = (undefined1 *)puVar10;
    _CTFontDescriptorCreateWithAttributes();
    if (puVar8 != (undefined1 *)0x0) {
      dVar23 = 100.0;
      puVar9 = puVar8;
      _CTFontCreateWithFontDescriptor();
      if (puVar9 != (undefined1 *)0x0) {
        _CTFontGetAscent();
        dVar24 = dVar23;
        _CTFontGetDescent(puVar9);
        if (0.0 < dVar23 + dVar24) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740((float)((dVar22 * 100.0) / (dVar23 + dVar24)),
                              PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar10);
          _objc_release(puVar5);
        }
        _CFRelease(puVar9);
      }
      _CFRelease(puVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return;
  }
  return;
}



/* Entry: 104fbfc6c; end: 104fbfe0b; +[SVGTextUtilities addFontVariantFromSVGStyleAttributes:toCoreTextAttributes:] */

void FUN_104fbfc6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_104fc15fc(param_3,&PTR____CFConstantStringClassReference_110dc01b8);
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        iVar7 = (int)*(undefined8 *)(lStack_128 + lVar9 * 8);
        iVar1 = iVar7;
        func_0x00010c0720c0();
        if (iVar1 == 0) {
          func_0x00010c0720c0();
          if (iVar7 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(param_4);
            _objc_release(puVar3);
          }
        }
        else {
          func_0x00010c12d3e0(param_4);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar4 = (undefined1 *)puVar6;
  _CTFontDescriptorCreateWithAttributes();
  if (puVar4 != (undefined1 *)0x0) {
    dVar11 = 100.0;
    puVar5 = puVar4;
    _CTFontCreateWithFontDescriptor();
    if (puVar5 != (undefined1 *)0x0) {
      _CTFontGetAscent();
      dVar12 = dVar11;
      _CTFontGetDescent(puVar5);
      if (0.0 < dVar11 + dVar12) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740((float)((dVar10 * 100.0) / (dVar11 + dVar12)),
                            PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar6);
        _objc_release(puVar3);
      }
      _CFRelease(puVar5);
    }
    _CFRelease(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104fbfe0c; end: 104fbfee7; +[SVGTextUtilities determinePointSizeFromCoreTextAttributes:givenPixelSize:] */

void FUN_104fbfe0c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  _CTFontDescriptorCreateWithAttributes();
  if (lVar1 != 0) {
    dVar4 = 100.0;
    lVar2 = lVar1;
    _CTFontCreateWithFontDescriptor();
    if (lVar2 != 0) {
      _CTFontGetAscent();
      dVar5 = dVar4;
      _CTFontGetDescent(lVar2);
      if (0.0 < dVar4 + dVar5) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740((float)((param_1 * 100.0) / (dVar4 + dVar5)),
                            PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(param_4);
        _objc_release(puVar3);
      }
      _CFRelease(lVar2);
    }
    _CFRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fbfee8; end: 104fc01f3; +[SVGTextUtilities attributedStringFromString:nonFontSVGStyleAttributes:baseFont:baseFontDescriptor:includeParagraphStyle:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_104fbfee8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined *param_6,undefined *param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  float fVar11;
  double dVar12;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_11c [2];
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float *pfStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float *pfStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float *pfStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float *pfStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float *pfStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_6;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar2);
  if (param_8 != 0) {
    uStack_111 = 4;
    uVar3 = param_5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            uStack_111 = 2;
          }
        }
        else {
          uStack_111 = 1;
        }
      }
      else {
        uStack_111 = 0;
      }
    }
    uStack_112 = 0;
    _CTFontGetAscent(param_6);
    dVar12 = param_1;
    _CTFontGetDescent(param_6);
    param_1 = param_1 + dVar12;
    uVar4 = param_5;
    func_0x00010c0dff20();
    fVar11 = SUB84(dVar12,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    dVar12 = param_1;
    fStack_128 = 0.0;
    if ((uVar5 != 0) && (uVar5 = uVar4, func_0x00010c0720c0(), (uVar5 & 1) == 0)) {
      func_0x00010bfb2c80(uVar4);
      dVar12 = (double)fVar11;
      fStack_128 = fVar11;
      if (fVar11 <= 0.0) {
        fStack_128 = 0.0;
        dVar12 = param_1;
      }
    }
    uStack_110 = 7;
    afStack_11c[1] = 0.01;
    pfStack_100 = afStack_11c + 1;
    uStack_108 = 4;
    uStack_f8 = 9;
    fStack_120 = (float)dVar12;
    pfStack_e8 = afStack_11c;
    uStack_f0 = 4;
    uStack_e0 = 8;
    pfStack_d0 = &fStack_120;
    uStack_d8 = 4;
    uStack_c8 = 0xf;
    pfStack_b8 = &fStack_124;
    uStack_c0 = 4;
    uStack_b0 = 0xe;
    pfStack_a0 = &fStack_128;
    uStack_a8 = 4;
    param_1 = 2.96439387504748e-323;
    uStack_98 = 6;
    puStack_88 = &uStack_112;
    uStack_90 = 1;
    uStack_80 = 0;
    uStack_78 = 1;
    puStack_70 = &uStack_111;
    puVar6 = &uStack_110;
    fStack_124 = fStack_128;
    afStack_11c[0] = fStack_120;
    _CTParagraphStyleCreate(puVar6,2);
    func_0x00010c1d0560(puVar1);
    _CFRelease(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  fVar11 = SUB84(param_1,0);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar9 = param_4;
  puVar10 = puVar1;
  func_0x00010c04e840();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b3288;
    _objc_retain(puVar10);
    _objc_retain(uVar9);
    func_0x00010c0d88c0();
    if ((puVar7 == (undefined *)0x0) || (puVar1 != param_7)) {
      puVar2 = puVar1;
      _CTFontDescriptorCopyAttribute(puVar1,*(undefined8 *)PTR__kCTFontSizeAttribute_11034a0c0);
      if (puVar2 == (undefined *)0x0) {
        dVar12 = 0.0;
      }
      else {
        puVar7 = puVar2;
        _CFNumberGetTypeID();
        puVar8 = puVar2;
        _CFGetTypeID();
        dVar12 = 0.0;
        if (puVar7 == puVar8) {
          func_0x00010bfb2c80(puVar2);
          dVar12 = (double)fVar11;
        }
        _CFRelease(puVar2);
      }
      puVar7 = puVar1;
      _CTFontCreateWithFontDescriptor(dVar12,puVar1,0);
    }
    else {
      _CFRetain(puVar7);
    }
    puVar2 = PTR_PTR_1126b3288;
    func_0x00010bf0e3e0(PTR_PTR_1126b3288);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar9);
    if (puVar7 != (undefined *)0x0) {
      _CFRelease(puVar7);
    }
    if (puVar1 != (undefined *)0x0) {
      _CFRelease(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fc01f4; end: 104fc033f; +[SVGTextUtilities attributedStringFromString:SVGStyleAttributes:baseFont:baseFontDescriptor:includeParagraphStyle:] */

void FUN_104fc01f4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126b3288;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0d88c0();
  if ((param_6 == (undefined *)0x0) || (puVar1 != param_7)) {
    puVar2 = puVar1;
    _CTFontDescriptorCopyAttribute(puVar1,*(undefined8 *)PTR__kCTFontSizeAttribute_11034a0c0);
    if (puVar2 == (undefined *)0x0) {
      dVar5 = 0.0;
    }
    else {
      puVar3 = puVar2;
      _CFNumberGetTypeID();
      puVar4 = puVar2;
      _CFGetTypeID();
      dVar5 = 0.0;
      if (puVar3 == puVar4) {
        func_0x00010bfb2c80(puVar2);
        dVar5 = (double)param_1;
      }
      _CFRelease(puVar2);
    }
    param_6 = puVar1;
    _CTFontCreateWithFontDescriptor(dVar5,puVar1,0);
  }
  else {
    _CFRetain(param_6);
  }
  puVar2 = PTR_PTR_1126b3288;
  func_0x00010bf0e3e0(PTR_PTR_1126b3288);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  if (param_6 != (undefined *)0x0) {
    _CFRelease(param_6);
  }
  if (puVar1 != (undefined *)0x0) {
    _CFRelease(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fc0340; end: 104fc0483; +[SVGTextUtilities coreTextAttributesFromSVGStyleAttributes:baseDescriptor:] */

void FUN_104fc0340(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _CTFontDescriptorCopyAttributes();
    if (param_5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
    }
    else {
      puVar2 = param_5;
      func_0x00010c0d3c80();
      _CFRelease(param_5);
    }
    func_0x00010bef8620(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010bef8600(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010bef8640(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010bef8660(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010befce40(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010bef8680(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    func_0x00010c0990c0(PTR_PTR_1126b3288,param_3,param_4,puVar2);
    if (0.0 < param_1) {
      func_0x00010bf6fc80(param_1,PTR_PTR_1126b3288,param_3,puVar2);
    }
  }
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fc0484; end: 104fc0747; +[SVGTextUtilities addFontStyleFromSVGStyleAttributes:toCoreTextAttributes:] */

double FUN_104fc0484(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *apuStack_250 [16];
  long lStack_1d0;
  undefined8 uStack_130;
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
  _objc_retain(param_4);
  FUN_104fc15fc(param_3,&PTR____CFConstantStringClassReference_110dc0238);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = *(undefined ***)PTR__kCTFontTraitsAttribute_11034a0e0;
  puVar1 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar17 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  _objc_release(puVar17);
  dVar18 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar17 = &uStack_130;
  ppuVar8 = apuStack_f0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  puVar15 = param_3;
  if (puVar2 == (undefined8 *)0x0) {
LAB_104fc06ec:
    _objc_release(puVar15);
  }
  else {
    uVar9 = 0;
    lVar11 = *plStack_120;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(ulong *)(lStack_128 + (long)puVar17 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar3);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar12;
          func_0x00010c0720c0();
          if ((((uVar4 & 1) == 0) && (uVar4 = uVar12, func_0x00010c0720c0(), (int)uVar4 == 0)) &&
             (uVar4 = uVar12, func_0x00010c0720c0(), (int)uVar4 == 0)) {
            func_0x00010c0720c0();
            uVar9 = (uint)uVar12 | uVar9;
          }
          else {
            uVar9 = 1;
          }
        }
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar2 != puVar17);
      puVar17 = &uStack_130;
      ppuVar8 = apuStack_f0;
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
    _objc_release(param_3);
    if ((uVar9 & 1) != 0) {
      puVar15 = puVar1;
      func_0x00010c0d3c80();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar15);
      _objc_release(puVar3);
      puVar2 = puVar15;
      func_0x00010bf51e00();
      puVar17 = puVar2;
      func_0x00010c1d0560(param_4);
      _objc_release(puVar2);
      ppuVar8 = ppuVar10;
      goto LAB_104fc06ec;
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return dVar18;
  }
  ___stack_chk_fail();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  _objc_retain(ppuVar8);
  ppuVar13 = *(undefined ***)PTR__kCTFontSizeAttribute_11034a0c0;
  ppuVar5 = ppuVar8;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (dVar18 <= 0.0) {
    func_0x00010bf696a0(PTR_PTR_1126b3288);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar10;
  }
  puVar1 = puVar17;
  FUN_104fc15fc(puVar17,&PTR____CFConstantStringClassReference_110dc0298);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 0.0;
  lStack_288 = 0;
  puStack_290 = (undefined *)0x0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  _objc_retain();
  ppuVar6 = &puStack_290;
  ppuVar10 = apuStack_250;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined8 *)0x0) {
    _objc_release(puVar1);
    ppuVar14 = (undefined **)0x0;
    dVar19 = 0.0;
  }
  else {
    ppuVar14 = (undefined **)0x0;
    lVar11 = *plStack_280;
    do {
      puVar15 = (undefined8 *)0x0;
      ppuVar7 = ppuVar14;
      do {
        if (*plStack_280 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        ppuVar16 = *(undefined ***)(lStack_288 + (long)puVar15 * 8);
        ppuVar14 = (undefined **)PTR_PTR_1126b3288;
        ppuVar6 = ppuVar16;
        ppuVar10 = ppuVar5;
        func_0x00010bfb4040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        func_0x00010bf885a0(ppuVar14);
        dVar19 = 0.0;
        if (0.0 < dVar18) goto LAB_104fc0940;
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar6 = ppuVar16;
        _objc_opt_isKindOfClass(ppuVar16,puVar3);
        if (((ulong)ppuVar6 & 1) != 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dc02b8;
          ppuVar7 = ppuVar16;
          func_0x00010bfdcf80();
          if (((int)ppuVar7 != 0) && (func_0x00010bf885a0(ppuVar16), 0.0 < dVar18)) {
            func_0x00010bf885a0(ppuVar16);
            dVar19 = dVar18;
            goto LAB_104fc0940;
          }
        }
        puVar15 = (undefined8 *)((long)puVar15 + 1);
        ppuVar7 = ppuVar14;
      } while (puVar2 != puVar15);
      ppuVar6 = &puStack_290;
      ppuVar10 = apuStack_250;
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
LAB_104fc0940:
    _objc_release(puVar1);
    if ((ppuVar14 != (undefined **)0x0) && (func_0x00010bf885a0(ppuVar14), 0.0 < dVar18)) {
      ppuVar6 = ppuVar14;
      func_0x00010c1d0560(ppuVar8);
      ppuVar10 = ppuVar13;
    }
  }
  _objc_release(puVar1);
  _objc_release(ppuVar14);
  _objc_release(ppuVar5);
  _objc_release(ppuVar8);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return dVar19;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar10);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar8 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar3);
  if (((ulong)ppuVar8 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar8 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar3);
    if ((((ulong)ppuVar8 & 1) != 0) && (func_0x00010bf885a0(ppuVar6), 0.0 < dVar18)) {
      _objc_retain(ppuVar6);
      ppuVar8 = ppuVar6;
      goto LAB_104fc0d78;
    }
    goto LAB_104fc0d74;
  }
  ppuVar8 = ppuVar6;
  func_0x00010c0720c0();
  if ((int)ppuVar8 == 0) {
    ppuVar5 = ppuVar6;
    func_0x00010c0720c0();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)ppuVar5 == 0) {
      ppuVar5 = ppuVar6;
      func_0x00010c0720c0();
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)ppuVar5 == 0) {
        ppuVar5 = ppuVar6;
        func_0x00010c0720c0();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar5 != 0) {
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar19 = 1.44;
          goto LAB_104fc0ac4;
        }
        ppuVar5 = ppuVar6;
        func_0x00010c0720c0();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar5 == 0) {
          ppuVar5 = ppuVar6;
          func_0x00010c0720c0();
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)ppuVar5 == 0) {
            ppuVar5 = ppuVar6;
            func_0x00010c0720c0();
            ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)ppuVar5 == 0) {
              ppuVar8 = ppuVar6;
              func_0x00010c0720c0();
              if (((int)ppuVar8 != 0) &&
                 (func_0x00010bf885a0(ppuVar10),
                 ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar18)) {
                func_0x00010bf885a0(ppuVar10);
                goto LAB_104fc0af4;
              }
              ppuVar8 = ppuVar6;
              func_0x00010c0720c0();
              if (((int)ppuVar8 != 0) &&
                 (func_0x00010bf885a0(ppuVar10),
                 ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar18)) {
                func_0x00010bf885a0(ppuVar10);
                goto LAB_104fc0abc;
              }
              ppuVar8 = ppuVar6;
              func_0x00010c0720c0();
              if ((int)ppuVar8 != 0) {
                func_0x00010bf885a0(ppuVar10);
                if (0.0 < dVar18) {
                  _objc_retain(ppuVar10);
                  ppuVar8 = ppuVar10;
                  goto LAB_104fc0d78;
                }
                goto LAB_104fc0a40;
              }
              ppuVar8 = ppuVar6;
              func_0x00010bfdcf80();
              if ((int)ppuVar8 == 0) {
                ppuVar8 = ppuVar6;
                func_0x00010bfdcf80();
                if ((int)ppuVar8 == 0) {
                  ppuVar8 = ppuVar6;
                  func_0x00010bfdcf80();
                  if ((((int)ppuVar8 != 0) ||
                      ((ppuVar8 = ppuVar6, func_0x00010bfdcf80(), ((ulong)ppuVar8 & 1) == 0 &&
                       (func_0x00010bf885a0(ppuVar6), 0.0 < dVar18)))) &&
                     (func_0x00010bf885a0(ppuVar6),
                     ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar18))
                  goto LAB_104fc0b04;
                }
                else {
                  func_0x00010bf885a0(ppuVar10);
                  if (0.0 < dVar18) {
                    func_0x00010bf885a0(ppuVar6);
                    dVar19 = dVar18;
                    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    goto joined_r0x000104fc0cc8;
                  }
                }
              }
              else {
                func_0x00010bf885a0(ppuVar10);
                if (0.0 < dVar18) {
                  func_0x00010bf885a0(ppuVar6);
                  dVar19 = dVar18 / 100.0;
                  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
joined_r0x000104fc0cc8:
                  PTR__OBJC_CLASS___NSNumber_1126ae570 = (undefined *)ppuVar8;
                  if (0.0 < dVar19) {
                    func_0x00010bf885a0(ppuVar10);
                    dVar18 = dVar19 * dVar18;
                    goto LAB_104fc0b04;
                  }
                }
              }
LAB_104fc0d74:
              ppuVar8 = (undefined **)0x0;
              goto LAB_104fc0d78;
            }
            func_0x00010bf696a0(PTR_PTR_1126b3288);
            dVar19 = 1.728;
            goto LAB_104fc0ac4;
          }
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar19 = 1.728;
        }
        else {
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar19 = 1.44;
        }
      }
      else {
        func_0x00010bf696a0(PTR_PTR_1126b3288);
LAB_104fc0af4:
        dVar19 = 1.2;
      }
      dVar18 = dVar18 * dVar19;
    }
    else {
      func_0x00010bf696a0(PTR_PTR_1126b3288);
LAB_104fc0abc:
      dVar19 = 1.2;
LAB_104fc0ac4:
      dVar18 = dVar18 / dVar19;
    }
  }
  else {
LAB_104fc0a40:
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf696a0(PTR_PTR_1126b3288);
  }
LAB_104fc0b04:
  func_0x00010c0df720(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
LAB_104fc0d78:
  _objc_release(ppuVar10);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return dVar18;
}



/* Entry: 104fc0748; end: 104fc09e3; +[SVGTextUtilities addFontSizeFromSVGStyleAttributes:toCoreTextAttributes:] */

double FUN_104fc0748(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar9 = *(undefined ***)PTR__kCTFontSizeAttribute_11034a0c0;
  ppuVar1 = param_5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 <= 0.0) {
    func_0x00010bf696a0(PTR_PTR_1126b3288);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar2;
  }
  lVar3 = param_4;
  FUN_104fc15fc(param_4,&PTR____CFConstantStringClassReference_110dc0298);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain();
  ppuVar6 = &puStack_140;
  ppuVar2 = apuStack_100;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
    ppuVar10 = (undefined **)0x0;
    dVar14 = 0.0;
  }
  else {
    ppuVar10 = (undefined **)0x0;
    lVar8 = *plStack_130;
    do {
      lVar11 = 0;
      ppuVar7 = ppuVar10;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        ppuVar12 = *(undefined ***)(lStack_138 + lVar11 * 8);
        ppuVar10 = (undefined **)PTR_PTR_1126b3288;
        ppuVar6 = ppuVar12;
        ppuVar2 = ppuVar1;
        func_0x00010bfb4040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        func_0x00010bf885a0(ppuVar10);
        dVar14 = 0.0;
        if (0.0 < dVar13) goto LAB_104fc0940;
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar6 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar5);
        if (((ulong)ppuVar6 & 1) != 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dc02b8;
          ppuVar7 = ppuVar12;
          func_0x00010bfdcf80();
          if (((int)ppuVar7 != 0) && (func_0x00010bf885a0(ppuVar12), 0.0 < dVar13)) {
            func_0x00010bf885a0(ppuVar12);
            dVar14 = dVar13;
            goto LAB_104fc0940;
          }
        }
        lVar11 = lVar11 + 1;
        ppuVar7 = ppuVar10;
      } while (lVar4 != lVar11);
      ppuVar6 = &puStack_140;
      ppuVar2 = apuStack_100;
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
LAB_104fc0940:
    _objc_release(lVar3);
    if ((ppuVar10 != (undefined **)0x0) && (func_0x00010bf885a0(ppuVar10), 0.0 < dVar13)) {
      ppuVar6 = ppuVar10;
      func_0x00010c1d0560(param_5);
      ppuVar2 = ppuVar9;
    }
  }
  _objc_release(lVar3);
  _objc_release(ppuVar10);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return dVar14;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar1 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar5);
  if (((ulong)ppuVar1 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar1 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar5);
    if ((((ulong)ppuVar1 & 1) != 0) && (func_0x00010bf885a0(ppuVar6), 0.0 < dVar13)) {
      _objc_retain(ppuVar6);
      ppuVar1 = ppuVar6;
      goto LAB_104fc0d78;
    }
    goto LAB_104fc0d74;
  }
  ppuVar1 = ppuVar6;
  func_0x00010c0720c0();
  if ((int)ppuVar1 == 0) {
    ppuVar9 = ppuVar6;
    func_0x00010c0720c0();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)ppuVar9 == 0) {
      ppuVar9 = ppuVar6;
      func_0x00010c0720c0();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)ppuVar9 == 0) {
        ppuVar9 = ppuVar6;
        func_0x00010c0720c0();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar9 != 0) {
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar14 = 1.44;
          goto LAB_104fc0ac4;
        }
        ppuVar9 = ppuVar6;
        func_0x00010c0720c0();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)ppuVar9 == 0) {
          ppuVar9 = ppuVar6;
          func_0x00010c0720c0();
          ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)ppuVar9 == 0) {
            ppuVar9 = ppuVar6;
            func_0x00010c0720c0();
            ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)ppuVar9 == 0) {
              ppuVar1 = ppuVar6;
              func_0x00010c0720c0();
              if (((int)ppuVar1 != 0) &&
                 (func_0x00010bf885a0(ppuVar2),
                 ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar13)) {
                func_0x00010bf885a0(ppuVar2);
                goto LAB_104fc0af4;
              }
              ppuVar1 = ppuVar6;
              func_0x00010c0720c0();
              if (((int)ppuVar1 != 0) &&
                 (func_0x00010bf885a0(ppuVar2),
                 ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar13)) {
                func_0x00010bf885a0(ppuVar2);
                goto LAB_104fc0abc;
              }
              ppuVar1 = ppuVar6;
              func_0x00010c0720c0();
              if ((int)ppuVar1 != 0) {
                func_0x00010bf885a0(ppuVar2);
                if (0.0 < dVar13) {
                  _objc_retain(ppuVar2);
                  ppuVar1 = ppuVar2;
                  goto LAB_104fc0d78;
                }
                goto LAB_104fc0a40;
              }
              ppuVar1 = ppuVar6;
              func_0x00010bfdcf80();
              if ((int)ppuVar1 == 0) {
                ppuVar1 = ppuVar6;
                func_0x00010bfdcf80();
                if ((int)ppuVar1 == 0) {
                  ppuVar1 = ppuVar6;
                  func_0x00010bfdcf80();
                  if ((((int)ppuVar1 != 0) ||
                      ((ppuVar1 = ppuVar6, func_0x00010bfdcf80(), ((ulong)ppuVar1 & 1) == 0 &&
                       (func_0x00010bf885a0(ppuVar6), 0.0 < dVar13)))) &&
                     (func_0x00010bf885a0(ppuVar6),
                     ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < dVar13))
                  goto LAB_104fc0b04;
                }
                else {
                  func_0x00010bf885a0(ppuVar2);
                  if (0.0 < dVar13) {
                    func_0x00010bf885a0(ppuVar6);
                    dVar14 = dVar13;
                    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    goto joined_r0x000104fc0cc8;
                  }
                }
              }
              else {
                func_0x00010bf885a0(ppuVar2);
                if (0.0 < dVar13) {
                  func_0x00010bf885a0(ppuVar6);
                  dVar14 = dVar13 / 100.0;
                  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
joined_r0x000104fc0cc8:
                  PTR__OBJC_CLASS___NSNumber_1126ae570 = (undefined *)ppuVar1;
                  if (0.0 < dVar14) {
                    func_0x00010bf885a0(ppuVar2);
                    dVar13 = dVar14 * dVar13;
                    goto LAB_104fc0b04;
                  }
                }
              }
LAB_104fc0d74:
              ppuVar1 = (undefined **)0x0;
              goto LAB_104fc0d78;
            }
            func_0x00010bf696a0(PTR_PTR_1126b3288);
            dVar14 = 1.728;
            goto LAB_104fc0ac4;
          }
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar14 = 1.728;
        }
        else {
          func_0x00010bf696a0(PTR_PTR_1126b3288);
          dVar14 = 1.44;
        }
      }
      else {
        func_0x00010bf696a0(PTR_PTR_1126b3288);
LAB_104fc0af4:
        dVar14 = 1.2;
      }
      dVar13 = dVar13 * dVar14;
    }
    else {
      func_0x00010bf696a0(PTR_PTR_1126b3288);
LAB_104fc0abc:
      dVar14 = 1.2;
LAB_104fc0ac4:
      dVar13 = dVar13 / dVar14;
    }
  }
  else {
LAB_104fc0a40:
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf696a0(PTR_PTR_1126b3288);
  }
LAB_104fc0b04:
  func_0x00010c0df720(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_104fc0d78:
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return dVar13;
}



/* Entry: 104fc09e4; end: 104fc0d9f; +[SVGTextUtilities fontSizeFromSVGAttribute:givenBaseSize:] */

void FUN_104fc09e4(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((((ulong)puVar2 & 1) != 0) && (func_0x00010bf885a0(param_4), 0.0 < param_1)) {
      _objc_retain(param_4);
      puVar1 = param_4;
      goto LAB_104fc0d78;
    }
    goto LAB_104fc0d74;
  }
  puVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)puVar1 == 0) {
    puVar2 = param_4;
    func_0x00010c0720c0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar2 == 0) {
      puVar2 = param_4;
      func_0x00010c0720c0();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar2 == 0) {
        puVar2 = param_4;
        func_0x00010c0720c0();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar2 == 0) {
          puVar2 = param_4;
          func_0x00010c0720c0();
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar2 == 0) {
            puVar2 = param_4;
            func_0x00010c0720c0();
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)puVar2 == 0) {
              puVar2 = param_4;
              func_0x00010c0720c0();
              puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)puVar2 == 0) {
                puVar1 = param_4;
                func_0x00010c0720c0();
                if (((int)puVar1 == 0) ||
                   (func_0x00010bf885a0(param_5), puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570,
                   param_1 <= 0.0)) {
                  puVar1 = param_4;
                  func_0x00010c0720c0();
                  if (((int)puVar1 == 0) ||
                     (func_0x00010bf885a0(param_5), puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570,
                     param_1 <= 0.0)) {
                    puVar1 = param_4;
                    func_0x00010c0720c0();
                    if ((int)puVar1 != 0) {
                      func_0x00010bf885a0(param_5);
                      if (0.0 < param_1) {
                        _objc_retain(param_5);
                        puVar1 = param_5;
                        goto LAB_104fc0d78;
                      }
                      goto LAB_104fc0a40;
                    }
                    puVar1 = param_4;
                    func_0x00010bfdcf80();
                    if ((int)puVar1 == 0) {
                      puVar1 = param_4;
                      func_0x00010bfdcf80();
                      if ((int)puVar1 == 0) {
                        puVar1 = param_4;
                        func_0x00010bfdcf80();
                        if ((((int)puVar1 != 0) ||
                            ((puVar1 = param_4, func_0x00010bfdcf80(), ((ulong)puVar1 & 1) == 0 &&
                             (func_0x00010bf885a0(param_4), 0.0 < param_1)))) &&
                           (func_0x00010bf885a0(param_4),
                           puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570, 0.0 < param_1))
                        goto LAB_104fc0b04;
                      }
                      else {
                        func_0x00010bf885a0(param_5);
                        if (0.0 < param_1) {
                          func_0x00010bf885a0(param_4);
                          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          goto joined_r0x000104fc0cc8;
                        }
                      }
                    }
                    else {
                      func_0x00010bf885a0(param_5);
                      if (0.0 < param_1) {
                        func_0x00010bf885a0(param_4);
                        param_1 = param_1 / 100.0;
                        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
joined_r0x000104fc0cc8:
                        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar1;
                        if (0.0 < param_1) {
                          func_0x00010bf885a0(param_5);
                          goto LAB_104fc0b04;
                        }
                      }
                    }
LAB_104fc0d74:
                    puVar1 = (undefined *)0x0;
                    goto LAB_104fc0d78;
                  }
                  func_0x00010bf885a0(param_5);
                }
                else {
                  func_0x00010bf885a0(param_5);
                }
              }
              else {
                func_0x00010bf696a0(PTR_PTR_1126b3288);
              }
            }
            else {
              func_0x00010bf696a0(PTR_PTR_1126b3288);
            }
          }
          else {
            func_0x00010bf696a0(PTR_PTR_1126b3288);
          }
        }
        else {
          func_0x00010bf696a0(PTR_PTR_1126b3288);
        }
      }
      else {
        func_0x00010bf696a0(PTR_PTR_1126b3288);
      }
    }
    else {
      func_0x00010bf696a0(PTR_PTR_1126b3288);
    }
  }
  else {
LAB_104fc0a40:
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf696a0(PTR_PTR_1126b3288);
  }
LAB_104fc0b04:
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_104fc0d78:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fc0da0; end: 104fc1063; +[SVGTextUtilities fontFamilyAttributesFromSVGAttribute:higherPriorityAttributes:] */

void FUN_104fc0da0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bef7f60(puVar1);
  }
  puVar3 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar7);
  if ((uVar4 & 1) != 0) {
    puVar7 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c282760();
    _objc_release(puVar7);
    uVar4 = param_3;
    func_0x00010c0720c0();
    if (((((int)uVar4 == 0) && (uVar4 = param_3, func_0x00010c0720c0(), (int)uVar4 == 0)) &&
        (uVar4 = param_3, func_0x00010c0720c0(), (int)uVar4 == 0)) &&
       ((uVar4 = param_3, func_0x00010c0720c0(), (int)uVar4 == 0 &&
        (uVar4 = param_3, func_0x00010c0720c0(), (int)uVar4 == 0)))) {
      uVar4 = param_3;
      FUN_104fc1b84();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c08fa60();
      if (uVar6 != 0) {
        puVar7 = puVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if ((puVar7 == (undefined *)0x0) && (uVar6 = uVar4, FUN_104fc1064(), (int)uVar6 != 0)) {
          func_0x00010c1d0560(puVar1);
        }
      }
      _objc_release(uVar4);
      if ((int)puVar5 == 0) goto LAB_104fc0f74;
    }
    puVar7 = puVar3;
    func_0x00010c0d3c80(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar7);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
LAB_104fc0f74:
  puVar7 = puVar1;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104fc1064; end: 104fc11af;  */

long FUN_104fc1064(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain();
  lVar5 = param_1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    if (lRam00000001136b91e0 != -1) {
      func_0x00010002a2fc(0x1136b91e0,&PTR___NSConcreteGlobalBlock_1108605a0);
    }
    lVar1 = lRam00000001136b91d8;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_1);
      lVar2 = param_1;
      _CTFontCreateWithName(0,param_1,0);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar3 = lVar2;
        _CTFontCopyFamilyName();
        if (lVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = param_1;
          func_0x00010c0720c0(param_1);
          _CFRelease(lVar3);
        }
        _CFRelease(lVar2);
      }
      lVar2 = lRam00000001136b91d8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(lVar2);
      _objc_release(puVar4);
      _objc_release(param_1);
    }
    else {
      lVar5 = lVar1;
      func_0x00010bf1f3c0(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 104fc11b0; end: 104fc13d7; +[SVGTextUtilities addFontFamilyFromSVGStyleAttributes:toCoreTextAttributes:] */

void FUN_104fc11b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_104fc15fc(param_3,&PTR____CFConstantStringClassReference_110dc04d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = (undefined *)0x0;
    do {
      lVar8 = 0;
      puVar4 = puVar7;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = PTR_PTR_1126b3288;
        func_0x00010bfb3da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar7;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 != (undefined *)0x0) goto LAB_104fc12f0;
        lVar8 = lVar8 + 1;
        puVar4 = puVar7;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_104fc12f0:
  _objc_release(param_3);
  puVar5 = puVar7;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72040(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1d0560(param_4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bef7f60(param_4);
  }
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar7 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = puRam00000001136b91d8;
    puRam00000001136b91d8 = puVar7;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puRam00000001136b91d8,PTR_s_setName__112650610,
               &PTR____CFConstantStringClassReference_110dc04f8);
    return;
  }
  return;
}



/* Entry: 104fc13d8; end: 104fc1547;  */

void FUN_104fc13d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001136b91d8;
  puRam00000001136b91d8 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam00000001136b91d8,PTR_s_setName__112650610,
             &PTR____CFConstantStringClassReference_110dc04f8);
  return;
}



/* Entry: 104fc1548; end: 104fc15fb;  */

void FUN_104fc1548(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                      &PTR____CFConstantStringClassReference_110db2d38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136b91e8;
  puRam00000001136b91e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fc15fc; end: 104fc1b83;  */

void FUN_104fc15fc(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0dff20(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar12);
  if (((ulong)puVar2 & 1) == 0) {
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar12);
    if (((ulong)puVar2 & 1) == 0) {
      if (param_1 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_alloc();
        func_0x00010c0309a0();
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_alloc();
      func_0x00010c0309a0();
      puVar3 = param_1;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bf529e0();
      puVar12 = puVar2;
      if (puVar11 != (undefined *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        func_0x00010bf529e0(puVar3);
        func_0x00010bffc4a0();
        _objc_retain(puVar3);
        puVar12 = puVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar12 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            lVar13 = *(long *)((long)puVar10 * 8);
            puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010bf35a20();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar13;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar13);
            _objc_release(puVar4);
            lVar13 = lVar5;
            func_0x00010c08fa60();
            if (lVar13 != 0) {
              func_0x00010befa120(puVar11);
            }
            _objc_release(lVar5);
            puVar10 = puVar10 + 1;
          } while (puVar12 != puVar10);
          puVar12 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
        puVar12 = puVar11;
        func_0x00010bf51e00();
        _objc_release(puVar2);
        _objc_release(puVar11);
      }
      _objc_release(puVar3);
    }
  }
  else {
    _objc_retain(param_1);
    puVar12 = param_1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010bf529e0();
    if (puVar12 != (undefined *)0x0) {
      _objc_retain(puVar3);
      puVar12 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar12 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          uVar14 = *(ulong *)((long)puVar11 * 8);
          uVar6 = uVar14;
          func_0x00010c11f420();
          if ((uVar6 != 0 && uVar6 != 0x7fffffffffffffff) &&
             (uVar7 = uVar14, func_0x00010c08fa60(), uVar6 < uVar7)) {
            uVar6 = uVar14;
            func_0x00010c260c20(uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c25d0a0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(uVar6);
            func_0x00010c260c00();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar14;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(uVar14);
            uVar14 = uVar6;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar14;
            func_0x00010bf529e0();
            if ((1 < uVar8) || (uVar8 = uVar6, func_0x00010c08fa60(), uVar8 != 0)) {
              func_0x00010c1d0560(puVar2);
            }
            _objc_release(uVar14);
            _objc_release(uVar6);
            _objc_release(uVar7);
          }
          puVar11 = puVar11 + 1;
        } while (puVar12 != puVar11);
        puVar12 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
    }
    puVar12 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      _objc_retain();
      func_0x00010bf35a20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c25d0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104fc1b84; end: 104fc1c5b;  */

void FUN_104fc1b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010bf35a20(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc0618);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fc1c5c; end: 104fc1ca7;  */

void FUN_104fc1c5c(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fc1ca8; end: 104fc2397;  */

void FUN_104fc1ca8(double *param_1,undefined *param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  uint uStack_3b0;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  float afStack_2c8 [6];
  undefined1 uStack_2b0;
  undefined1 auStack_2af [255];
  byte abStack_1b0 [256];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar17 = PTR__CGAffineTransformIdentity_110347008;
  dVar31 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar27 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  dVar35 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar33 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = dVar31;
  *param_1 = dVar27;
  param_1[3] = dVar35;
  param_1[2] = dVar33;
  dVar32 = *(double *)(puVar17 + 0x28);
  dVar28 = *(double *)(puVar17 + 0x20);
  param_1[5] = dVar32;
  param_1[4] = dVar28;
  puVar22 = param_2;
  dVar30 = dVar28;
  func_0x00010c08fa60();
  if (puVar22 + -9 < (undefined *)0xf6) {
    puVar19 = param_2;
    func_0x00010bfc3380();
    if ((int)puVar19 != 0) {
      puVar19 = (undefined *)0x0;
      dVar36 = *(double *)puVar17;
LAB_104fc1d7c:
      uVar13 = (long)puVar22 - (long)puVar19;
      bVar2 = abStack_1b0[(long)puVar19];
      if (bVar2 < 0x73) {
        if (bVar2 == 0x6d) {
          if (uVar13 < 0x12) goto LAB_104fc2344;
          pbVar9 = abStack_1b0 + (long)puVar19;
          _strncmp(pbVar9,&DAT_10f638b90,6);
          if ((int)pbVar9 != 0) goto LAB_104fc2344;
          uStack_3b0 = 1;
          lVar18 = 6;
          uVar13 = 6;
        }
        else {
          if (bVar2 != 0x72) goto LAB_104fc1e0c;
          if (uVar13 < 9) goto LAB_104fc2344;
          pbVar9 = abStack_1b0 + (long)puVar19;
          _strncmp(pbVar9,"rotate",6);
          if ((int)pbVar9 != 0) goto LAB_104fc2344;
          uVar13 = 3;
          lVar18 = 6;
          uStack_3b0 = 3;
        }
      }
      else {
        if (bVar2 != 0x73) {
          if (bVar2 == 0x74) {
            if (0xb < uVar13) {
              pbVar9 = abStack_1b0 + (long)puVar19;
              _strncmp(pbVar9,"translate",9);
              if ((int)pbVar9 == 0) {
                uStack_3b0 = 2;
                lVar18 = 9;
                goto LAB_104fc1eb0;
              }
            }
            goto LAB_104fc2344;
          }
LAB_104fc1e0c:
          puVar19 = puVar19 + 1;
          goto LAB_104fc2300;
        }
        if (uVar13 < 8) goto LAB_104fc2344;
        pbVar9 = abStack_1b0 + (long)puVar19;
        _strncmp(pbVar9,"scale",5);
        if ((int)pbVar9 == 0) {
          uStack_3b0 = 4;
          lVar18 = 5;
LAB_104fc1eb0:
          uVar13 = 2;
          goto LAB_104fc1ec8;
        }
        pbVar9 = abStack_1b0 + (long)puVar19;
        _strncmp(pbVar9,"skewY",5);
        if ((int)pbVar9 == 0) {
          uStack_3b0 = 6;
        }
        else {
          pbVar9 = abStack_1b0 + (long)puVar19;
          _strncmp(pbVar9,"skewX",5);
          if ((int)pbVar9 != 0) goto LAB_104fc2344;
          uStack_3b0 = 5;
        }
        lVar18 = 5;
        uVar13 = 1;
      }
LAB_104fc1ec8:
      puVar17 = puVar19 + lVar18;
      puVar24 = puVar22;
      if (puVar22 <= puVar17) {
        puVar24 = puVar17;
      }
      do {
        if (puVar24 == puVar17) goto LAB_104fc2344;
        puVar19 = puVar17 + 1;
        pbVar9 = abStack_1b0 + (long)puVar17;
        puVar17 = puVar19;
      } while (*pbVar9 != 0x28);
      if (puVar19 < puVar22) {
        uVar21 = 0;
        do {
          bVar12 = false;
          bVar4 = false;
          pbVar9 = abStack_1b0 + 1 + (long)puVar19;
          lVar18 = -2 - (long)puVar19;
          puVar17 = puVar22 + (-1 - (long)puVar19);
          do {
            puVar24 = puVar17;
            lVar15 = lVar18;
            pbVar16 = pbVar9;
            bVar2 = abStack_1b0[(long)puVar19];
            uVar14 = (uint)bVar2;
            bVar6 = 9 < uVar14 - 0x30;
            puVar17 = puVar19;
            bVar1 = true;
            if (bVar6) {
              puVar17 = (undefined *)0x0;
              bVar1 = bVar12;
            }
            if (bVar2 == 0x2d) {
              puVar17 = puVar19;
              bVar1 = bVar12;
            }
            bVar3 = bVar2 != 0x2d;
            bVar7 = bVar2 != 0x2e;
            puVar23 = puVar19;
            bVar5 = true;
            if (bVar7) {
              puVar23 = puVar17;
              bVar12 = bVar1;
              bVar5 = bVar4;
            }
            bVar4 = bVar5;
            bVar1 = bVar7 && (bVar3 && (bVar6 && uVar14 == 0x29));
            puVar19 = puVar19 + 1;
            if ((puVar23 != (undefined *)0x0) || (puVar22 <= puVar19)) break;
            pbVar9 = pbVar16 + 1;
            lVar18 = lVar15 + -1;
            puVar17 = puVar24 + -1;
          } while (!bVar7 || (!bVar3 || (!bVar6 || uVar14 != 0x29)));
          if (puVar23 != (undefined *)0x0) {
            puVar17 = puVar23;
            if (puVar19 < puVar22) {
              puVar17 = puVar22 + (long)puVar23 + -(long)puVar19;
              puVar20 = puVar23;
              do {
                bVar2 = *pbVar16;
                if (bVar2 - 0x30 < 10) {
                  bVar12 = true;
                }
                else {
                  if (bVar2 != 0x2e || bVar4) {
                    bVar1 = bVar2 == 0x29 || bVar1;
                    if (!bVar12) goto LAB_104fc2344;
                    puVar19 = (undefined *)-lVar15;
                    goto LAB_104fc1ff4;
                  }
                  bVar4 = true;
                }
                puVar20 = puVar20 + 1;
                lVar15 = lVar15 + -1;
                puVar24 = puVar24 + -1;
                pbVar16 = pbVar16 + 1;
                puVar19 = puVar22;
              } while (puVar24 != (undefined *)0x0);
            }
            puVar20 = puVar17;
            if (!bVar12) goto LAB_104fc2344;
LAB_104fc1ff4:
            ___memcpy_chk(&uStack_2b0,abStack_1b0 + (long)puVar23,puVar20 + (1 - (long)puVar23),
                          0x100);
            auStack_2af[(long)(puVar20 + (1 - (long)puVar23) + -1)] = 0;
            iVar8 = (int)&uStack_2b0;
            if (bVar4) {
              _atof();
              fVar26 = (float)dVar30;
            }
            else {
              _atoi();
              fVar26 = (float)iVar8;
            }
            dVar30 = (double)(ulong)(uint)fVar26;
            afStack_2c8[uVar21] = fVar26;
            uVar21 = uVar21 + 1;
          }
        } while (((!bVar1) && (puVar19 < puVar22)) && (uVar21 <= uVar13));
        if (uVar13 < uVar21) goto LAB_104fc2344;
      }
      else {
        uVar21 = 0;
      }
      if (uStack_3b0 < 4) {
        if (uStack_3b0 == 1) {
          if (uVar21 != 6) goto LAB_104fc2344;
          dStack_300 = (double)afStack_2c8[0];
          dStack_2f8 = (double)afStack_2c8[1];
          dStack_2f0 = (double)afStack_2c8[2];
          dStack_2e8 = (double)afStack_2c8[3];
          dStack_2e0 = (double)(float)afStack_2c8._16_8_;
          dStack_2d8 = (double)SUB84(afStack_2c8._16_8_,4);
          dStack_328 = param_1[1];
          dStack_330 = *param_1;
          dStack_318 = param_1[3];
          dStack_320 = param_1[2];
          dStack_308 = param_1[5];
          dVar30 = param_1[4];
          dStack_310 = dVar30;
          _CGAffineTransformConcat(param_1,&dStack_300,&dStack_330);
        }
        else {
          if (uStack_3b0 == 2) {
            dVar34 = 0.0;
            if (uVar21 != 1) {
              if (uVar21 != 2) goto LAB_104fc2344;
              dVar34 = (double)afStack_2c8[1];
            }
            dVar29 = (double)afStack_2c8[0];
          }
          else {
            if (uVar21 == 1) {
              dStack_328 = param_1[1];
              dStack_330 = *param_1;
              dStack_318 = param_1[3];
              dStack_320 = param_1[2];
              dStack_308 = param_1[5];
              dStack_310 = param_1[4];
              _CGAffineTransformRotate
                        (&dStack_300,(double)afStack_2c8[0] * 0.017453292519943295,&dStack_330);
              goto LAB_104fc22ec;
            }
            if (uVar21 != 3) goto LAB_104fc2344;
            dVar29 = (double)afStack_2c8[1];
            dVar34 = (double)afStack_2c8[2];
            dVar30 = (double)afStack_2c8[0];
            dStack_328 = param_1[1];
            dStack_330 = *param_1;
            dStack_318 = param_1[3];
            dStack_320 = param_1[2];
            dStack_308 = param_1[5];
            dStack_310 = param_1[4];
            _CGAffineTransformTranslate(&dStack_300,dVar29,dVar34,&dStack_330);
            param_1[1] = dStack_2f8;
            *param_1 = dStack_300;
            param_1[3] = dStack_2e8;
            param_1[2] = dStack_2f0;
            param_1[5] = dStack_2d8;
            param_1[4] = dStack_2e0;
            dStack_328 = param_1[1];
            dStack_330 = *param_1;
            dStack_318 = param_1[3];
            dStack_320 = param_1[2];
            dStack_308 = param_1[5];
            dStack_310 = param_1[4];
            _CGAffineTransformRotate(&dStack_300,dVar30 * 0.017453292519943295,&dStack_330);
            param_1[1] = dStack_2f8;
            *param_1 = dStack_300;
            param_1[3] = dStack_2e8;
            param_1[2] = dStack_2f0;
            param_1[5] = dStack_2d8;
            param_1[4] = dStack_2e0;
            dVar29 = -dVar29;
            dVar34 = -dVar34;
          }
          dStack_328 = param_1[1];
          dStack_330 = *param_1;
          dStack_318 = param_1[3];
          dStack_320 = param_1[2];
          dStack_308 = param_1[5];
          dStack_310 = param_1[4];
          _CGAffineTransformTranslate(&dStack_300,dVar29,dVar34,&dStack_330);
LAB_104fc22ec:
          param_1[1] = dStack_2f8;
          *param_1 = dStack_300;
          param_1[3] = dStack_2e8;
          param_1[2] = dStack_2f0;
          param_1[5] = dStack_2d8;
          param_1[4] = dStack_2e0;
          dVar30 = dStack_2e0;
        }
      }
      else {
        if (uStack_3b0 != 4) {
          if (uStack_3b0 == 5) {
            if (uVar21 != 1) goto LAB_104fc2344;
            dVar30 = ((double)afStack_2c8[0] * 3.141592653589793) / 180.0;
            _tan();
            dStack_330 = dVar27;
            dStack_328 = dVar31;
            dStack_320 = dVar30;
            dStack_318 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
            dStack_310 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
            dStack_308 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
          }
          else {
            if (uVar21 != 1) goto LAB_104fc2344;
            dVar30 = ((double)afStack_2c8[0] * 3.141592653589793) / 180.0;
            _tan();
            dStack_330 = dVar36;
            dStack_328 = dVar30;
            dStack_320 = dVar33;
            dStack_318 = dVar35;
            dStack_310 = dVar28;
            dStack_308 = dVar32;
          }
          dStack_358 = param_1[1];
          dStack_360 = *param_1;
          dStack_348 = param_1[3];
          dStack_350 = param_1[2];
          dStack_338 = param_1[5];
          dStack_340 = param_1[4];
          _CGAffineTransformConcat(&dStack_300,&dStack_330,&dStack_360);
          goto LAB_104fc22ec;
        }
        fVar26 = afStack_2c8[0];
        if ((uVar21 != 1) && (fVar26 = afStack_2c8[1], uVar21 != 2)) {
          dStack_328 = param_1[1];
          dStack_330 = *param_1;
          dStack_318 = param_1[3];
          dStack_320 = param_1[2];
          dStack_308 = param_1[5];
          dStack_310 = param_1[4];
          _CGAffineTransformScale(&dStack_300,0x3ff0000000000000,0x3ff0000000000000,&dStack_330);
          param_1[1] = dStack_2f8;
          *param_1 = dStack_300;
          param_1[3] = dStack_2e8;
          param_1[2] = dStack_2f0;
          param_1[5] = dStack_2d8;
          param_1[4] = dStack_2e0;
          dVar30 = dStack_2e0;
          goto LAB_104fc2344;
        }
        dStack_328 = param_1[1];
        dStack_330 = *param_1;
        dStack_318 = param_1[3];
        dStack_320 = param_1[2];
        dStack_308 = param_1[5];
        dStack_310 = param_1[4];
        _CGAffineTransformScale(&dStack_300,(double)afStack_2c8[0],(double)fVar26,&dStack_330);
        param_1[1] = dStack_2f8;
        *param_1 = dStack_300;
        param_1[3] = dStack_2e8;
        param_1[2] = dStack_2f0;
        param_1[5] = dStack_2d8;
        param_1[4] = dStack_2e0;
        dVar30 = dStack_2e0;
      }
LAB_104fc2300:
      if (puVar22 <= puVar19) goto LAB_104fc2344;
      goto LAB_104fc1d7c;
    }
  }
LAB_104fc2344:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lRam00000001136b9200 != -1) {
    func_0x00010002a2fc(0x1136b9200,&PTR___NSConcreteGlobalBlock_1108605e8);
  }
  puVar17 = puRam00000001136b91f8;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 != (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    puVar19 = puVar17;
    _objc_opt_isKindOfClass(puVar17,puVar22);
    if (((ulong)puVar19 & 1) != 0) {
      _objc_release(puVar17);
      puVar17 = (undefined *)0x0;
    }
    goto LAB_104fc2b24;
  }
  puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = param_2;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar22;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar17);
  puVar17 = puVar19;
  func_0x00010bfda7c0();
  if ((int)puVar17 == 0) {
    puVar17 = param_2;
    func_0x00010bfda7c0();
    if ((int)puVar17 != 0) {
      puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar17;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_2;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(puVar17);
      puVar17 = puVar24;
      func_0x00010c08fa60();
      if (puVar17 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        puVar22 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar24;
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        _objc_release(puVar17);
        puVar17 = puVar10;
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar17;
        func_0x00010bf529e0();
        if (puVar22 == (undefined *)0x0) {
          puVar25 = (undefined *)0x0;
          puVar24 = (undefined *)0x0;
LAB_104fc29c0:
          _objc_retain(puVar24);
          puVar11 = puVar24;
        }
        else {
          puVar23 = puVar17;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar23;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          _objc_release(puVar23);
          if (puVar22 == (undefined *)0x1) {
            puVar25 = (undefined *)0x0;
            goto LAB_104fc29c0;
          }
          puVar23 = puVar17;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar23;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          _objc_release(puVar23);
          if (puVar22 < (undefined *)0x3) {
            puVar25 = (undefined *)0x0;
          }
          else {
            puVar22 = puVar17;
            func_0x00010c0dfd20();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            puVar25 = puVar22;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar23);
            _objc_release(puVar22);
          }
          if (puVar11 == (undefined *)0x0) goto LAB_104fc29c0;
        }
        if (puVar25 == (undefined *)0x0) {
          _objc_retain(puVar11);
          puVar25 = puVar11;
        }
        puVar22 = puVar24;
        func_0x00010bfdcf80();
        if ((int)puVar22 == 0) {
          puVar23 = puVar24;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar24);
          dVar30 = dVar30 * 2.55001;
          puVar23 = (undefined *)(ulong)(uint)(int)dVar30;
        }
        puVar22 = puVar11;
        func_0x00010bfdcf80();
        if ((int)puVar22 == 0) {
          puVar22 = puVar11;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar11);
          dVar30 = dVar30 * 2.55;
          puVar22 = (undefined *)(ulong)(uint)(int)dVar30;
        }
        puVar20 = puVar25;
        func_0x00010bfdcf80();
        if ((int)puVar20 == 0) {
          puVar20 = puVar25;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar25);
          puVar20 = (undefined *)(ulong)(uint)(int)(dVar30 * 2.55);
        }
        _objc_release(puVar25);
        _objc_release(puVar11);
        _objc_release(puVar24);
        _objc_release(puVar17);
        puVar24 = puVar10;
      }
      _objc_release(puVar24);
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      puVar20 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar23 = (undefined *)0x0;
      goto LAB_104fc27a4;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar20 = (undefined *)0xc0;
      puVar22 = (undefined *)0xc0;
      puVar23 = (undefined *)0xc0;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar17 & 1) != 0) || (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 != 0)
       ) {
      puVar22 = (undefined *)0x80;
LAB_104fc29b0:
      puVar20 = (undefined *)0x80;
      puVar23 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0xff;
LAB_104fc2b74:
      puVar20 = (undefined *)0xff;
      puVar23 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar23 = (undefined *)0x80;
LAB_104fc27a4:
      puVar22 = (undefined *)0x0;
      puVar20 = (undefined *)0x0;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar23 = (undefined *)0xff;
      goto LAB_104fc27a4;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0x0;
      goto LAB_104fc29b0;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar17 & 1) != 0) || (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 != 0)
       ) {
      puVar22 = (undefined *)0x0;
      goto LAB_104fc2b74;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0x80;
LAB_104fc2c94:
      puVar23 = (undefined *)0x0;
      puVar20 = (undefined *)0x0;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0xff;
      goto LAB_104fc2c94;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar20 = (undefined *)0x0;
      puVar22 = (undefined *)0x80;
      puVar23 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar20 = (undefined *)0x0;
      puVar22 = (undefined *)0xff;
      puVar23 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar22 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      puVar20 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar23 = (undefined *)0x0;
      puVar20 = (undefined *)0x80;
      puVar22 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar17 & 1) != 0) || (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 != 0)
       ) {
      puVar23 = (undefined *)0x0;
      puVar20 = (undefined *)0xff;
      puVar22 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 != 0) {
      puVar23 = (undefined *)0xff;
      puVar22 = (undefined *)0xc0;
      puVar20 = (undefined *)0xcb;
      goto LAB_104fc2ac8;
    }
    puVar17 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar17 == 0) {
      puVar17 = param_2;
      func_0x00010c0720c0();
      if (((int)puVar17 != 0) || (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 != 0)) {
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bfce1e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104fc2e24;
      }
      puVar17 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar17 != 0) goto LAB_104fc2e48;
      puVar17 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar17 != 0) goto LAB_104fc2e74;
      puVar17 = param_2;
      func_0x00010c0720c0();
      if (((((ulong)puVar17 & 1) != 0) ||
          (puVar17 = param_2, func_0x00010c0720c0(), ((ulong)puVar17 & 1) != 0)) ||
         (puVar17 = param_2, func_0x00010c0720c0(), ((ulong)puVar17 & 1) != 0)) {
LAB_104fc2f0c:
        puVar20 = (undefined *)0x0;
        puVar22 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        goto LAB_104fc2ac8;
      }
      puVar17 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar17 == 0) {
        puVar17 = param_2;
        func_0x00010c0720c0();
        if (((ulong)puVar17 & 1) != 0) goto LAB_104fc2f0c;
        puVar17 = param_2;
        func_0x00010c0720c0();
        if ((int)puVar17 == 0) {
          puVar17 = param_2;
          func_0x00010c0720c0();
          if (((int)puVar17 == 0) && (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 == 0))
          {
            puVar17 = param_2;
            func_0x00010c0720c0();
            if (((ulong)puVar17 & 1) == 0) {
              puVar17 = param_2;
              func_0x00010c0720c0();
              if ((int)puVar17 != 0) goto LAB_104fc2e48;
              puVar17 = param_2;
              func_0x00010c0720c0();
              if (((ulong)puVar17 & 1) == 0) {
                puVar17 = param_2;
                func_0x00010c0720c0();
                if ((int)puVar17 != 0) goto LAB_104fc2e48;
                puVar17 = param_2;
                func_0x00010c0720c0();
                if ((((ulong)puVar17 & 1) == 0) &&
                   (puVar17 = param_2, func_0x00010c0720c0(), ((ulong)puVar17 & 1) == 0)) {
                  puVar17 = param_2;
                  func_0x00010c0720c0();
                  if ((int)puVar17 == 0) {
                    puVar17 = param_2;
                    func_0x00010c0720c0();
                    if ((int)puVar17 != 0) goto LAB_104fc2e48;
                    puVar17 = param_2;
                    func_0x00010c0720c0();
                    if ((((int)puVar17 == 0) &&
                        (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 == 0)) &&
                       (puVar17 = param_2, func_0x00010c0720c0(), (int)puVar17 == 0)) {
                      puVar17 = param_2;
                      func_0x00010c0720c0();
                      if ((int)puVar17 != 0) goto LAB_104fc2f2c;
                      puVar17 = param_2;
                      func_0x00010c0720c0();
                      if ((((ulong)puVar17 & 1) == 0) &&
                         (puVar22 = param_2, func_0x00010c0720c0(), puVar17 = puRam00000001136b91f8,
                         ((ulong)puVar22 & 1) == 0)) {
                        puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
                        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0580(puVar17);
                        _objc_release(puVar22);
                        puVar17 = (undefined *)0x0;
                        goto LAB_104fc2b1c;
                      }
                      goto LAB_104fc2f0c;
                    }
                  }
LAB_104fc2e74:
                  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  func_0x00010bf634a0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_104fc2e24;
                }
              }
            }
            goto LAB_104fc2f0c;
          }
LAB_104fc2e48:
          puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c098f40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
LAB_104fc2f2c:
          puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c2a4b20();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf635c0();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_104fc2e24:
      if (puVar17 == (undefined *)0x0) goto LAB_104fc2f0c;
      goto LAB_104fc2b08;
    }
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar17 = puVar19;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar22 = puVar17;
    func_0x00010c08fa60();
    if (puVar22 == (undefined *)0x3) {
      puVar19 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25da60();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar19;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar19);
      _objc_release(puVar22);
      puVar22 = puVar19;
      func_0x00010c260c80(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar19);
      _objc_release(puVar22);
      puVar22 = puVar19;
      func_0x00010c260c80(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar19);
      _objc_release(puVar22);
      _objc_release(puVar17);
      puVar22 = (undefined *)0x6;
      puVar17 = puVar19;
LAB_104fc26d0:
      puVar19 = puVar17;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar22 < (undefined *)0x4) {
        puVar22 = (undefined *)0x0;
        goto LAB_104fc27c4;
      }
      puVar24 = puVar17;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar22 < (undefined *)0x6) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar22 = puVar17;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
      }
      if (puVar24 == (undefined *)0x0) goto LAB_104fc27c4;
    }
    else {
      if ((undefined *)0x1 < puVar22) goto LAB_104fc26d0;
      puVar22 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
LAB_104fc27c4:
      _objc_retain(puVar19);
      puVar24 = puVar19;
    }
    puVar23 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    if (puVar22 == (undefined *)0x0) {
      _objc_retain(puVar24);
      puVar22 = puVar24;
      puVar23 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    }
    PTR__OBJC_CLASS___NSScanner_1126b3380 = puVar23;
    if (puVar19 != (undefined *)0x0) {
      func_0x00010c14f820(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar23);
      puVar23 = PTR__OBJC_CLASS___NSScanner_1126b3380;
      func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar23);
      puVar23 = PTR__OBJC_CLASS___NSScanner_1126b3380;
      func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar23);
    }
    _objc_release(puVar22);
    _objc_release(puVar24);
    _objc_release(puVar19);
    puVar22 = (undefined *)0x0;
    puVar23 = (undefined *)0x0;
    puVar20 = (undefined *)0x0;
    puVar19 = puVar17;
LAB_104fc2ac8:
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620((double)((ulong)puVar23 & 0xffffffff) / 255.0,
                        (double)((ulong)puVar22 & 0xffffffff) / 255.0,
                        (double)((ulong)puVar20 & 0xffffffff) / 255.0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    if (puVar17 != (undefined *)0x0) {
LAB_104fc2b08:
      func_0x00010c1d0580(puRam00000001136b91f8);
    }
  }
LAB_104fc2b1c:
  _objc_release(puVar19);
LAB_104fc2b24:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104fc2398; end: 104fc30c3;  */

void FUN_104fc2398(double param_1,undefined *param_2)

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
  
  _objc_retain();
  if (lRam00000001136b9200 != -1) {
    func_0x00010002a2fc(0x1136b9200,&PTR___NSConcreteGlobalBlock_1108605e8);
  }
  puVar3 = puRam00000001136b91f8;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      _objc_release(puVar3);
      puVar3 = (undefined *)0x0;
    }
    goto LAB_104fc2b24;
  }
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bfda7c0();
  if ((int)puVar3 == 0) {
    puVar3 = param_2;
    func_0x00010bfda7c0();
    if ((int)puVar3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar3 = puVar8;
      func_0x00010c08fa60();
      if (puVar3 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        puVar6 = (undefined *)0x0;
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar8;
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar3);
        puVar3 = puVar1;
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf529e0();
        if (puVar6 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          puVar8 = (undefined *)0x0;
LAB_104fc29c0:
          _objc_retain(puVar8);
          puVar2 = puVar8;
        }
        else {
          puVar7 = puVar3;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar7);
          if (puVar6 == (undefined *)0x1) {
            puVar9 = (undefined *)0x0;
            goto LAB_104fc29c0;
          }
          puVar7 = puVar3;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar7;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar7);
          if (puVar6 < (undefined *)0x3) {
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar6 = puVar3;
            func_0x00010c0dfd20();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar6;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          if (puVar2 == (undefined *)0x0) goto LAB_104fc29c0;
        }
        if (puVar9 == (undefined *)0x0) {
          _objc_retain(puVar2);
          puVar9 = puVar2;
        }
        puVar6 = puVar8;
        func_0x00010bfdcf80();
        if ((int)puVar6 == 0) {
          puVar7 = puVar8;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar8);
          param_1 = param_1 * 2.55001;
          puVar7 = (undefined *)(ulong)(uint)(int)param_1;
        }
        puVar6 = puVar2;
        func_0x00010bfdcf80();
        if ((int)puVar6 == 0) {
          puVar6 = puVar2;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar2);
          param_1 = param_1 * 2.55;
          puVar6 = (undefined *)(ulong)(uint)(int)param_1;
        }
        puVar5 = puVar9;
        func_0x00010bfdcf80();
        if ((int)puVar5 == 0) {
          puVar5 = puVar9;
          func_0x00010c067ec0();
        }
        else {
          func_0x00010bf885a0(puVar9);
          puVar5 = (undefined *)(ulong)(uint)(int)(param_1 * 2.55);
        }
        _objc_release(puVar9);
        _objc_release(puVar2);
        _objc_release(puVar8);
        _objc_release(puVar3);
        puVar8 = puVar1;
      }
      _objc_release(puVar8);
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_104fc27a4;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar5 = (undefined *)0xc0;
      puVar6 = (undefined *)0xc0;
      puVar7 = (undefined *)0xc0;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar3 & 1) != 0) || (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 != 0)) {
      puVar6 = (undefined *)0x80;
LAB_104fc29b0:
      puVar5 = (undefined *)0x80;
      puVar7 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0xff;
LAB_104fc2b74:
      puVar5 = (undefined *)0xff;
      puVar7 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar7 = (undefined *)0x80;
LAB_104fc27a4:
      puVar6 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar7 = (undefined *)0xff;
      goto LAB_104fc27a4;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_104fc29b0;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar3 & 1) != 0) || (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 != 0)) {
      puVar6 = (undefined *)0x0;
      goto LAB_104fc2b74;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0x80;
LAB_104fc2c94:
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0xff;
      goto LAB_104fc2c94;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar5 = (undefined *)0x0;
      puVar6 = (undefined *)0x80;
      puVar7 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar5 = (undefined *)0x0;
      puVar6 = (undefined *)0xff;
      puVar7 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0x80;
      puVar6 = (undefined *)0x80;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((((ulong)puVar3 & 1) != 0) || (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 != 0)) {
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0xff;
      puVar6 = (undefined *)0xff;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 != 0) {
      puVar7 = (undefined *)0xff;
      puVar6 = (undefined *)0xc0;
      puVar5 = (undefined *)0xcb;
      goto LAB_104fc2ac8;
    }
    puVar3 = param_2;
    func_0x00010c0720c0();
    if ((int)puVar3 == 0) {
      puVar3 = param_2;
      func_0x00010c0720c0();
      if (((int)puVar3 != 0) || (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 != 0)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bfce1e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104fc2e24;
      }
      puVar3 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar3 != 0) goto LAB_104fc2e48;
      puVar3 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar3 != 0) goto LAB_104fc2e74;
      puVar3 = param_2;
      func_0x00010c0720c0();
      if (((((ulong)puVar3 & 1) != 0) ||
          (puVar3 = param_2, func_0x00010c0720c0(), ((ulong)puVar3 & 1) != 0)) ||
         (puVar3 = param_2, func_0x00010c0720c0(), ((ulong)puVar3 & 1) != 0)) {
LAB_104fc2f0c:
        puVar5 = (undefined *)0x0;
        puVar6 = (undefined *)0x0;
        puVar7 = (undefined *)0x0;
        goto LAB_104fc2ac8;
      }
      puVar3 = param_2;
      func_0x00010c0720c0();
      if ((int)puVar3 == 0) {
        puVar3 = param_2;
        func_0x00010c0720c0();
        if (((ulong)puVar3 & 1) != 0) goto LAB_104fc2f0c;
        puVar3 = param_2;
        func_0x00010c0720c0();
        if ((int)puVar3 == 0) {
          puVar3 = param_2;
          func_0x00010c0720c0();
          if (((int)puVar3 == 0) && (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 == 0)) {
            puVar3 = param_2;
            func_0x00010c0720c0();
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = param_2;
              func_0x00010c0720c0();
              if ((int)puVar3 != 0) goto LAB_104fc2e48;
              puVar3 = param_2;
              func_0x00010c0720c0();
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = param_2;
                func_0x00010c0720c0();
                if ((int)puVar3 != 0) goto LAB_104fc2e48;
                puVar3 = param_2;
                func_0x00010c0720c0();
                if ((((ulong)puVar3 & 1) == 0) &&
                   (puVar3 = param_2, func_0x00010c0720c0(), ((ulong)puVar3 & 1) == 0)) {
                  puVar3 = param_2;
                  func_0x00010c0720c0();
                  if ((int)puVar3 == 0) {
                    puVar3 = param_2;
                    func_0x00010c0720c0();
                    if ((int)puVar3 != 0) goto LAB_104fc2e48;
                    puVar3 = param_2;
                    func_0x00010c0720c0();
                    if ((((int)puVar3 == 0) &&
                        (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 == 0)) &&
                       (puVar3 = param_2, func_0x00010c0720c0(), (int)puVar3 == 0)) {
                      puVar3 = param_2;
                      func_0x00010c0720c0();
                      if ((int)puVar3 != 0) goto LAB_104fc2f2c;
                      puVar3 = param_2;
                      func_0x00010c0720c0();
                      if ((((ulong)puVar3 & 1) == 0) &&
                         (puVar6 = param_2, func_0x00010c0720c0(), puVar3 = puRam00000001136b91f8,
                         ((ulong)puVar6 & 1) == 0)) {
                        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
                        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0580(puVar3);
                        _objc_release(puVar6);
                        puVar3 = (undefined *)0x0;
                        goto LAB_104fc2b1c;
                      }
                      goto LAB_104fc2f0c;
                    }
                  }
LAB_104fc2e74:
                  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  func_0x00010bf634a0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_104fc2e24;
                }
              }
            }
            goto LAB_104fc2f0c;
          }
LAB_104fc2e48:
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c098f40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
LAB_104fc2f2c:
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c2a4b20();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf635c0();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_104fc2e24:
      if (puVar3 == (undefined *)0x0) goto LAB_104fc2f0c;
      goto LAB_104fc2b08;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar4;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = puVar3;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x3) {
      puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25da60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar4);
      _objc_release(puVar6);
      puVar6 = puVar4;
      func_0x00010c260c80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar4);
      _objc_release(puVar6);
      puVar6 = puVar4;
      func_0x00010c260c80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066ec0(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar6 = (undefined *)0x6;
      puVar3 = puVar4;
LAB_104fc26d0:
      puVar4 = puVar3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 < (undefined *)0x4) {
        puVar6 = (undefined *)0x0;
        goto LAB_104fc27c4;
      }
      puVar8 = puVar3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 < (undefined *)0x6) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar3;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
      }
      if (puVar8 == (undefined *)0x0) goto LAB_104fc27c4;
    }
    else {
      if ((undefined *)0x1 < puVar6) goto LAB_104fc26d0;
      puVar6 = (undefined *)0x0;
      puVar4 = (undefined *)0x0;
LAB_104fc27c4:
      _objc_retain(puVar4);
      puVar8 = puVar4;
    }
    puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(puVar8);
      puVar6 = puVar8;
      puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    }
    PTR__OBJC_CLASS___NSScanner_1126b3380 = puVar7;
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c14f820(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
      func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSScanner_1126b3380;
      func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ec80();
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar4);
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
    puVar4 = puVar3;
LAB_104fc2ac8:
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620((double)((ulong)puVar7 & 0xffffffff) / 255.0,
                        (double)((ulong)puVar6 & 0xffffffff) / 255.0,
                        (double)((ulong)puVar5 & 0xffffffff) / 255.0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
LAB_104fc2b08:
      func_0x00010c1d0580(puRam00000001136b91f8);
    }
  }
LAB_104fc2b1c:
  _objc_release(puVar4);
LAB_104fc2b24:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fc30c4; end: 104fc3107;  */

void FUN_104fc30c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001136b91f8;
  puRam00000001136b91f8 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam00000001136b91f8,PTR_s_setName__112650610,
             &PTR____CFConstantStringClassReference_110dc0658);
  return;
}



/* Entry: 104fc3108; end: 104fc3727;  */

/* WARNING: Removing unreachable block (ram,0x000104fc35d8) */

double FUN_104fc3108(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    double param_5,undefined **param_6,byte **param_7,byte **param_8,char *param_9)

{
  byte bVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  byte **ppbVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  byte **ppbVar11;
  uint uVar12;
  byte **ppbVar13;
  char cVar14;
  long lVar15;
  undefined **ppuVar16;
  uint uVar17;
  char cVar18;
  long lVar19;
  byte **ppbVar20;
  undefined **ppuVar21;
  ulong uVar22;
  byte **ppbVar23;
  bool bVar24;
  long lVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  byte *pbStack_378;
  undefined8 uStack_36c;
  long lStack_308;
  double dStack_2a0;
  float afStack_280 [6];
  undefined1 uStack_268;
  undefined1 auStack_267 [255];
  byte *apbStack_168 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dStack_2a0 = *(double *)PTR__CGRectZero_110347608;
  dVar33 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  ppuVar9 = param_6;
  dVar27 = dStack_2a0;
  func_0x00010c08fa60();
  if ((long)ppuVar9 - 7U < 0xf8) {
    param_8 = apbStack_168;
    param_9 = (char *)0xff;
    ppuVar10 = param_6;
    func_0x00010bfc3380();
    if ((int)ppuVar10 != 0) {
      ppuVar10 = (undefined **)0x0;
      do {
        ppuVar16 = ppuVar10;
        ppuVar21 = ppuVar9;
        if (ppuVar9 == ppuVar16) break;
        uVar17 = *(byte *)((long)apbStack_168 + (long)ppuVar16) - 0x30;
        bVar6 = *(byte *)((long)apbStack_168 + (long)ppuVar16) - 0x2d < 2;
        ppuVar10 = (undefined **)((long)ppuVar16 + 1);
        ppuVar21 = ppuVar16;
      } while ((!bVar6 && 8 < uVar17) && (bVar6 || uVar17 != 9));
      if (6 < (long)ppuVar9 - (long)ppuVar21) {
        uVar22 = 0;
        do {
          bVar24 = false;
          bVar6 = false;
          do {
            bVar1 = *(byte *)((long)apbStack_168 + (long)ppuVar21);
            ppuVar10 = ppuVar21;
            if (bVar1 == 0x2e) {
              bVar24 = true;
              bVar7 = bVar6;
            }
            else {
              bVar7 = bVar1 - 0x30 < 10;
              if (!bVar7) {
                ppuVar10 = (undefined **)0xffffffffffffffff;
              }
              bVar7 = (bool)(bVar7 | bVar6);
              if (bVar1 == 0x2d) {
                ppuVar10 = ppuVar21;
                bVar7 = bVar6;
              }
            }
            ppuVar21 = (undefined **)((long)ppuVar21 + 1);
          } while ((ppuVar10 == (undefined **)0xffffffffffffffff) &&
                  (bVar6 = bVar7, (long)ppuVar21 < (long)ppuVar9));
          if ((long)ppuVar10 < 0) goto LAB_104fc32f0;
          ppuVar16 = ppuVar10;
          ppuVar3 = ppuVar21;
          if ((long)ppuVar21 < (long)ppuVar9) {
            do {
              uVar17 = (uint)*(byte *)((long)apbStack_168 + (long)ppuVar21);
              if (uVar17 - 0x30 < 10) {
                bVar7 = true;
              }
              else {
                if (uVar17 != 0x2e || bVar24) {
                  ppuVar3 = (undefined **)((long)ppuVar21 + 1);
                  break;
                }
                bVar24 = true;
              }
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
              ppuVar3 = ppuVar9;
            } while (ppuVar9 != ppuVar21);
          }
          ppuVar21 = ppuVar3;
          if (!bVar7) goto LAB_104fc32f0;
          ppbVar23 = (byte **)((long)ppuVar16 + (1 - (long)ppuVar10));
          param_7 = (byte **)((long)apbStack_168 + (long)ppuVar10);
          param_9 = (char *)0x100;
          param_8 = ppbVar23;
          ___memcpy_chk(&uStack_268);
          (&uStack_268)[(long)ppbVar23] = 0;
          iVar8 = (int)&uStack_268;
          if (bVar24) {
            _atof();
            fVar26 = (float)dVar27;
          }
          else {
            _atoi();
            fVar26 = (float)iVar8;
          }
          dVar27 = (double)(ulong)(uint)fVar26;
          afStack_280[uVar22] = fVar26;
        } while (((long)ppuVar21 < (long)ppuVar9) &&
                (bVar6 = uVar22 < 3, uVar22 = uVar22 + 1, bVar6));
        dVar33 = (double)(float)afStack_280._8_8_;
        dStack_2a0 = (double)(float)afStack_280._0_8_;
      }
    }
  }
LAB_104fc32f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dStack_2a0;
  }
  ___stack_chk_fail();
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppbVar23 = (byte **)*param_7;
  if (ppbVar23 < param_8) {
    bVar1 = *(byte *)((long)param_6 + (long)ppbVar23);
    uVar22 = (ulong)bVar1;
    if (((9 < (byte)(bVar1 - 0x30)) &&
        (0x2e < bVar1 || (1L << (uVar22 & 0x3f) & 0x680100000400U) == 0)) && (bVar1 != 0x65))
    goto LAB_104fc33d4;
    ppbVar23 = (byte **)((long)ppbVar23 + 1);
    cVar14 = *param_9;
  }
  else {
    uVar22 = 0;
LAB_104fc33d4:
    cVar14 = '\x01';
    *param_9 = '\x01';
  }
  dVar27 = 0.0;
  cVar18 = cVar14;
  do {
    ppuVar9 = param_6;
    ppbVar11 = param_7;
    ppbVar13 = param_8;
    if (cVar18 != '\0') goto LAB_104fc36e8;
    uVar17 = (uint)uVar22;
    if ((uVar17 < 0x2f) && ((1L << (uVar22 & 0x3f) & 0x680000000000U) != 0)) goto LAB_104fc3488;
    if ((uVar17 == 0x65) || (0xf5 < (uVar17 - 0x3a & 0xff))) break;
    if (ppbVar23 < param_8) {
      bVar1 = *(byte *)((long)param_6 + (long)ppbVar23);
      uVar22 = (ulong)bVar1;
      if ((9 < (byte)(bVar1 - 0x30)) &&
         ((0x2e < bVar1 || ((1L << (uVar22 & 0x3f) & 0x680100000400U) == 0)))) goto LAB_104fc3470;
      cVar18 = '\0';
      ppbVar23 = (byte **)((long)ppbVar23 + 1);
    }
    else {
LAB_104fc3470:
      cVar14 = '\x01';
      *param_9 = '\x01';
      cVar18 = '\x01';
    }
  } while (ppbVar23 < param_8);
  if (cVar14 != '\0') goto LAB_104fc36e8;
LAB_104fc3488:
  uVar17 = (uint)uVar22;
  if ((((uVar17 < 0x2f) && ((1L << (uVar22 & 0x3f) & 0x680000000000U) != 0)) || (uVar17 == 0x65)) ||
     ((uVar17 - 0x30 & 0xff) < 10)) {
    uStack_36c._0_1_ = (undefined1)uVar22;
    bVar6 = (uVar17 - 0x30 & 0xff) < 10;
    lVar15 = 1;
  }
  else {
    bVar6 = false;
    lVar15 = 0;
  }
  lVar2 = (long)param_8 - (long)ppbVar23;
  if (param_8 < ppbVar23 || lVar2 == 0) {
    bVar24 = false;
joined_r0x000104fc3588:
    bVar7 = false;
    if (lVar15 != 0) goto LAB_104fc360c;
LAB_104fc363c:
    dVar27 = 0.0;
    if (param_8 <= ppbVar23) {
      *param_9 = '\x01';
    }
  }
  else {
    lVar25 = 0;
    bVar7 = false;
    bVar24 = false;
    lVar19 = lVar15;
    ppbVar20 = ppbVar23;
    do {
      bVar1 = *(byte *)((long)param_6 + (long)ppbVar23 + lVar25);
      uVar22 = (ulong)bVar1;
      if ((bVar1 != 0x2e) || (bVar24)) {
        if (bVar1 == 0x65 || (byte)(bVar1 - 0x30) < 10) {
          if ((byte)(bVar1 - 0x30) < 10) {
            bVar6 = true;
            goto LAB_104fc354c;
          }
        }
        else {
          if (!bVar7) {
            lVar15 = lVar15 + lVar25;
            ppbVar23 = (byte **)((long)ppbVar23 + lVar25);
            goto joined_r0x000104fc3588;
          }
          if ((bVar1 != 0x2b) && (bVar1 != 0x2d)) {
            bVar7 = true;
            lVar4 = lVar19;
            ppbVar5 = ppbVar20;
            break;
          }
        }
        bVar7 = (bool)(bVar1 == 0x65 | bVar7);
      }
      else {
        bVar24 = true;
      }
LAB_104fc354c:
      *(byte *)((long)&uStack_36c + lVar25 + lVar15) = bVar1;
      if (lVar15 + lVar25 == 0x62) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110dc0c78;
        _NSLog(&PTR____CFConstantStringClassReference_110dc0c78);
        ppbVar23 = (byte **)((long)ppbVar23 + lVar25 + 1);
        lVar15 = 99;
        goto LAB_104fc360c;
      }
      lVar19 = lVar19 + 1;
      lVar25 = lVar25 + 1;
      ppbVar20 = (byte **)((long)ppbVar20 + 1);
      lVar4 = lVar2 + lVar15;
      ppbVar5 = param_8;
    } while (lVar2 != lVar25);
    ppbVar23 = ppbVar5;
    lVar15 = lVar4;
    if (lVar15 == 0) goto LAB_104fc363c;
LAB_104fc360c:
    fVar26 = SUB84(dVar27,0);
    if (!bVar6) goto LAB_104fc363c;
    pbStack_378 = (byte *)((long)&uStack_36c + lVar15 + 1);
    *(undefined1 *)((long)&uStack_36c + lVar15) = 0;
    ppuVar9 = (undefined **)&uStack_36c;
    ppbVar11 = &pbStack_378;
    if ((bool)(bVar24 | bVar7)) {
      _strtof();
      dVar27 = (double)fVar26;
    }
    else {
      ppbVar13 = (byte **)0xa;
      _strtol();
      dVar27 = (double)(long)ppuVar9;
    }
  }
  if ((ppbVar23 < param_8) && (0x19 < (((uint)uVar22 & 0xffffffdf) - 0x41 & 0xff))) {
    ppbVar20 = ppbVar23;
    while (((ppbVar23 = ppbVar20, 0x2e < (uint)uVar22 ||
            ((1L << (uVar22 & 0x3f) & 0x680000000000U) == 0)) &&
           (((uint)uVar22 - 0x3a & 0xff) < 0xf6))) {
      ppbVar23 = (byte **)((long)ppbVar20 + 1);
      if ((param_8 <= ppbVar23) ||
         (bVar1 = *(byte *)((long)param_6 + 1 + (long)ppbVar20), uVar22 = (ulong)bVar1,
         ppbVar20 = ppbVar23, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) break;
    }
  }
LAB_104fc36e8:
  uVar12 = (uint)ppbVar13;
  uVar17 = (uint)ppbVar11;
  *param_7 = (byte *)ppbVar23;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return dVar27;
  }
  ___stack_chk_fail();
  dVar31 = dVar27;
  dVar39 = dVar33;
  _CGPathGetCurrentPoint();
  bVar6 = false;
  if ((dVar31 == param_4) && (bVar6 = false, !NAN(param_5) && !NAN(dVar39))) {
    bVar6 = param_5 == dVar39;
  }
  if (!bVar6) {
    if ((dVar27 == 0.0) || (dVar33 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CGPathAddLineToPoint_110347488)(param_4,param_5,ppuVar9,0);
      return param_4;
    }
    dVar28 = ABS(dVar27);
    dVar48 = ABS(dVar33);
    _fmod(param_3,0x4076800000000000);
    fVar32 = -2.854354e-18;
    fVar26 = (float)(param_3 * 0.017453292519943295);
    ___sincosf_stret();
    dVar34 = (double)fVar32;
    dVar29 = (double)fVar26;
    dVar35 = (dVar31 - param_4) * dVar34 * 0.5 + (dVar39 - param_5) * dVar29 * 0.5;
    dVar36 = (dVar39 - param_5) * dVar34 * 0.5 - (dVar31 - param_4) * dVar29 * 0.5;
    dVar27 = (dVar35 * dVar35) / (dVar27 * dVar27) + (dVar36 * dVar36) / (dVar33 * dVar33);
    if (1.0 < dVar27) {
      dVar27 = (double)SQRT((float)dVar27);
      dVar28 = dVar28 * dVar27;
      dVar48 = dVar48 * dVar27;
      dVar27 = (dVar35 * dVar35) / (dVar28 * dVar28) + (dVar36 * dVar36) / (dVar48 * dVar48);
      if (1.0 < dVar27) {
        dVar27 = (double)SQRT((float)(dVar27 + 1e-06));
        dVar28 = dVar28 * dVar27;
        dVar48 = dVar48 * dVar27;
      }
    }
    uVar40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar37 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar44 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar42 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar41 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    dVar43 = dVar36 * dVar28 * dVar28;
    dVar45 = dVar35 * dVar48 * dVar48;
    dVar33 = dVar35 * dVar45 + dVar36 * dVar43;
    dVar27 = 0.0;
    if (dVar33 != 0.0) {
      dVar33 = ((-(dVar36 * dVar43) + dVar48 * dVar48 * dVar28 * dVar28) - dVar35 * dVar45) / dVar33
      ;
      dVar27 = 0.0;
      if (0.0 <= dVar33) {
        dVar27 = SQRT(dVar33);
      }
      if (uVar17 == uVar12) {
        dVar27 = -dVar27;
      }
    }
    dVar33 = (dVar36 * dVar28 * dVar27) / dVar48;
    dVar43 = (dVar35 * -(dVar27 * dVar48)) / dVar28;
    dVar46 = (dVar35 - dVar33) / dVar28;
    dVar47 = (dVar36 - dVar43) / dVar48;
    dVar35 = (-dVar33 - dVar35) / dVar28;
    dVar36 = (-dVar43 - dVar36) / dVar48;
    dVar45 = (double)SQRT((float)(dVar47 * dVar47 + dVar46 * dVar46));
    fVar26 = (float)((dVar46 + dVar47 * 0.0) / dVar45);
    uStack_420 = uVar37;
    uStack_418 = uVar40;
    uStack_410 = uVar42;
    uStack_408 = uVar44;
    uStack_400 = uVar38;
    uStack_3f8 = uVar41;
    _acosf(fVar26);
    dVar27 = -(double)fVar26;
    if (dVar46 * 0.0 <= dVar47) {
      dVar27 = (double)fVar26;
    }
    dVar45 = (dVar47 * dVar36 + dVar35 * dVar46) /
             (dVar45 * (double)SQRT((float)(dVar36 * dVar36 + dVar35 * dVar35)));
    if (dVar45 <= -1.0) {
      dVar30 = 3.141592653589793;
    }
    else {
      fVar26 = (float)dVar45;
      _acosf();
      dVar30 = -(double)fVar26;
      if (dVar47 * dVar35 <= dVar46 * dVar36) {
        dVar30 = (double)fVar26;
      }
      if (1.0 <= dVar45) {
        dVar30 = 0.0;
      }
    }
    uVar17 = uVar12;
    if (dVar30 <= 0.0) {
      uVar17 = 1;
    }
    if (uVar17 == 0) {
      dVar30 = dVar30 + -6.283185307179586;
    }
    dVar35 = dVar30 + 6.283185307179586;
    if ((uVar12 & dVar30 < 0.0) == 0) {
      dVar35 = dVar30;
    }
    uStack_450 = uVar37;
    uStack_448 = uVar40;
    uStack_440 = uVar42;
    uStack_438 = uVar44;
    uStack_430 = uVar38;
    uStack_428 = uVar41;
    _CGAffineTransformTranslate
              (&uStack_420,(param_4 + dVar31) * 0.5 + dVar33 * dVar34 + dVar43 * -dVar29,
               (param_5 + dVar39) * 0.5 + dVar33 * dVar29 + dVar43 * dVar34,&uStack_450);
    uStack_478 = uStack_418;
    uStack_480 = uStack_420;
    uStack_468 = uStack_408;
    uStack_470 = uStack_410;
    uStack_458 = uStack_3f8;
    uStack_460 = uStack_400;
    _CGAffineTransformRotate(&uStack_450,param_3 * 0.017453292519943295,&uStack_480);
    uStack_408 = uStack_438;
    uStack_410 = uStack_440;
    uStack_3f8 = uStack_428;
    uStack_400 = uStack_430;
    uStack_418 = uStack_448;
    uStack_420 = uStack_450;
    dVar33 = dVar28;
    if (dVar28 <= dVar48) {
      dVar33 = dVar48;
    }
    dVar31 = 1.0;
    if (dVar28 <= dVar48) {
      dVar31 = dVar28 / dVar48;
    }
    dVar39 = dVar48 / dVar28;
    if (dVar28 <= dVar48) {
      dVar39 = 1.0;
    }
    uStack_478 = uStack_448;
    uStack_480 = uStack_450;
    uStack_468 = uStack_438;
    uStack_470 = uStack_440;
    uStack_458 = uStack_428;
    uStack_460 = uStack_430;
    _CGAffineTransformScale(&uStack_450,dVar31,dVar39,&uStack_480);
    uStack_418 = uStack_448;
    uStack_420 = uStack_450;
    uStack_408 = uStack_438;
    uStack_410 = uStack_440;
    uStack_3f8 = uStack_428;
    uStack_400 = uStack_430;
    dVar31 = 0.0;
    _CGPathAddArc(0,0,dVar33,dVar27,dVar27 + dVar35,ppuVar9,&uStack_420,uVar12 ^ 1);
  }
  return dVar31;
}



/* Entry: 104fc3728; end: 104fc3b67;  */

void FUN_104fc3728(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,uint param_7,uint param_8)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  dVar4 = param_1;
  dVar8 = param_2;
  _CGPathGetCurrentPoint();
  bVar2 = false;
  if ((dVar4 == param_4) && (bVar2 = false, !NAN(param_5) && !NAN(dVar8))) {
    bVar2 = param_5 == dVar8;
  }
  if (!bVar2) {
    if ((param_1 == 0.0) || (param_2 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CGPathAddLineToPoint_110347488)(param_4,param_5,param_6,0);
      return;
    }
    dVar5 = ABS(param_1);
    dVar24 = ABS(param_2);
    _fmod(param_3,0x4076800000000000);
    fVar9 = -2.854354e-18;
    fVar3 = (float)(param_3 * 0.017453292519943295);
    ___sincosf_stret();
    dVar10 = (double)fVar9;
    dVar6 = (double)fVar3;
    dVar11 = (dVar4 - param_4) * dVar10 * 0.5 + (dVar8 - param_5) * dVar6 * 0.5;
    dVar12 = (dVar8 - param_5) * dVar10 * 0.5 - (dVar4 - param_4) * dVar6 * 0.5;
    dVar20 = (dVar11 * dVar11) / (param_1 * param_1) + (dVar12 * dVar12) / (param_2 * param_2);
    if (1.0 < dVar20) {
      dVar20 = (double)SQRT((float)dVar20);
      dVar5 = dVar5 * dVar20;
      dVar24 = dVar24 * dVar20;
      dVar20 = (dVar11 * dVar11) / (dVar5 * dVar5) + (dVar12 * dVar12) / (dVar24 * dVar24);
      if (1.0 < dVar20) {
        dVar20 = (double)SQRT((float)(dVar20 + 1e-06));
        dVar5 = dVar5 * dVar20;
        dVar24 = dVar24 * dVar20;
      }
    }
    uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar13 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    dVar18 = dVar12 * dVar5 * dVar5;
    dVar21 = dVar11 * dVar24 * dVar24;
    dVar25 = dVar11 * dVar21 + dVar12 * dVar18;
    dVar20 = 0.0;
    if (dVar25 != 0.0) {
      dVar25 = ((-(dVar12 * dVar18) + dVar24 * dVar24 * dVar5 * dVar5) - dVar11 * dVar21) / dVar25;
      dVar20 = 0.0;
      if (0.0 <= dVar25) {
        dVar20 = SQRT(dVar25);
      }
      if (param_7 == param_8) {
        dVar20 = -dVar20;
      }
    }
    dVar25 = (dVar12 * dVar5 * dVar20) / dVar24;
    dVar20 = (dVar11 * -(dVar20 * dVar24)) / dVar5;
    dVar22 = (dVar11 - dVar25) / dVar5;
    dVar23 = (dVar12 - dVar20) / dVar24;
    dVar18 = (-dVar25 - dVar11) / dVar5;
    dVar12 = (-dVar20 - dVar12) / dVar24;
    dVar21 = (double)SQRT((float)(dVar23 * dVar23 + dVar22 * dVar22));
    fVar3 = (float)((dVar22 + dVar23 * 0.0) / dVar21);
    uStack_a0 = uVar13;
    uStack_98 = uVar15;
    uStack_90 = uVar17;
    uStack_88 = uVar19;
    uStack_80 = uVar14;
    uStack_78 = uVar16;
    _acosf(fVar3);
    dVar11 = -(double)fVar3;
    if (dVar22 * 0.0 <= dVar23) {
      dVar11 = (double)fVar3;
    }
    dVar21 = (dVar23 * dVar12 + dVar18 * dVar22) /
             (dVar21 * (double)SQRT((float)(dVar12 * dVar12 + dVar18 * dVar18)));
    if (dVar21 <= -1.0) {
      dVar7 = 3.141592653589793;
    }
    else {
      fVar3 = (float)dVar21;
      _acosf();
      dVar7 = -(double)fVar3;
      if (dVar23 * dVar18 <= dVar22 * dVar12) {
        dVar7 = (double)fVar3;
      }
      if (1.0 <= dVar21) {
        dVar7 = 0.0;
      }
    }
    uVar1 = param_8;
    if (dVar7 <= 0.0) {
      uVar1 = 1;
    }
    if (uVar1 == 0) {
      dVar7 = dVar7 + -6.283185307179586;
    }
    dVar12 = dVar7 + 6.283185307179586;
    if ((param_8 & dVar7 < 0.0) == 0) {
      dVar12 = dVar7;
    }
    uStack_d0 = uVar13;
    uStack_c8 = uVar15;
    uStack_c0 = uVar17;
    uStack_b8 = uVar19;
    uStack_b0 = uVar14;
    uStack_a8 = uVar16;
    _CGAffineTransformTranslate
              (&uStack_a0,(param_4 + dVar4) * 0.5 + dVar25 * dVar10 + dVar20 * -dVar6,
               (param_5 + dVar8) * 0.5 + dVar25 * dVar6 + dVar20 * dVar10,&uStack_d0);
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    _CGAffineTransformRotate(&uStack_d0,param_3 * 0.017453292519943295,&uStack_100);
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    dVar4 = dVar5;
    if (dVar5 <= dVar24) {
      dVar4 = dVar24;
    }
    dVar8 = 1.0;
    if (dVar5 <= dVar24) {
      dVar8 = dVar5 / dVar24;
    }
    dVar6 = dVar24 / dVar5;
    if (dVar5 <= dVar24) {
      dVar6 = 1.0;
    }
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    _CGAffineTransformScale(&uStack_d0,dVar8,dVar6,&uStack_100);
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    _CGPathAddArc(0,0,dVar4,dVar11,dVar11 + dVar12,param_6,&uStack_a0,param_8 ^ 1);
  }
  return;
}



/* Entry: 104fc3b68; end: 104fc3d2b; +[SVGToQuartz LogQuartzContextState:] */

void FUN_104fc3b68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  if (param_3 == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110dc0c98);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110dc0cb8);
    _CGContextGetCTM(&uStack_60,param_3);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    puVar1 = &uStack_90;
    FUN_104fc1c5c();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110dc0cd8);
    lVar2 = param_3;
    _CGContextIsPathEmpty();
    if ((int)lVar2 == 0) {
      _NSLog(&PTR____CFConstantStringClassReference_110dc0d18);
      _CGContextGetPathCurrentPoint(param_3);
      _NSLog(&PTR____CFConstantStringClassReference_110dc0d38);
      _CGContextGetPathBoundingBox(param_3);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc0d58;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc0cf8;
    }
    _NSLog(ppuVar3);
    _CGContextGetClipBoundingBox(param_3);
    _NSLog(&PTR____CFConstantStringClassReference_110dc0d78);
    _CGContextGetTextPosition(param_3);
    _NSLog(&PTR____CFConstantStringClassReference_110dc0d98);
    _CGContextGetTextMatrix(&uStack_90,param_3);
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    puVar4 = &uStack_90;
    FUN_104fc1c5c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _NSLog(&PTR____CFConstantStringClassReference_110dc0db8);
    _CGContextGetUserSpaceToDeviceSpaceTransform(&uStack_90,param_3);
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    puVar1 = &uStack_90;
    FUN_104fc1c5c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _NSLog(&PTR____CFConstantStringClassReference_110dc0dd8);
    _NSLog(&PTR____CFConstantStringClassReference_110dc0df8);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 104fc3d2c; end: 104fc3d7b; +[SVGToQuartz attributeHasDisplaySetToNone:] */

undefined8 FUN_104fc3d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dc0e18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104fc3d7c; end: 104fc41a3; +[SVGToQuartz aspectRatioDrawRectFromString:givenBounds:naturalSize:] */

double FUN_104fc3d7c(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,undefined8 param_7,undefined8 param_8,undefined **param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 unaff_x21;
  long lVar19;
  undefined **unaff_x23;
  ulong uVar20;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined1 *puVar21;
  undefined **unaff_x26;
  long lVar22;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [128];
  long lStack_490;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined1 ***pppuStack_430;
  code *pcStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined *puStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_350;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *apuStack_290 [16];
  long lStack_210;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  double dStack_198;
  undefined **ppuStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  dVar32 = param_1 + param_3;
  dVar27 = param_2 + param_4;
  puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  dStack_180 = param_4;
  dStack_178 = param_3;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_9;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  puStack_170 = (undefined *)0x0;
  uStack_158 = 0;
  puStack_160 = (undefined8 *)0x0;
  _objc_retain(ppuVar1);
  ppuVar18 = &puStack_170;
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  dVar25 = param_1;
  if (ppuVar2 == (undefined **)0x0) {
    _objc_release(ppuVar1);
LAB_104fc4070:
    ppuVar2 = unaff_x23;
    ppuVar23 = unaff_x24;
    ppuVar7 = unaff_x25;
    if (param_5 / param_6 < dStack_178 / dStack_180) {
      dVar27 = dStack_180 * (param_5 / param_6);
      if (dVar25 != param_1) {
        param_1 = param_1 + (dStack_178 - dVar27) * 0.5;
      }
      if (dVar25 == dVar32) {
        param_1 = dVar32 - dVar27;
      }
    }
  }
  else {
    unaff_x28 = (undefined **)0x0;
    unaff_x27 = (undefined **)*puStack_160;
    dVar29 = (dVar32 - param_1) * 0.5;
    unaff_x23 = &PTR____CFConstantStringClassReference_110dc0e58;
    unaff_x24 = &PTR____CFConstantStringClassReference_110dc0e78;
    unaff_x25 = &PTR____CFConstantStringClassReference_110dc0e98;
    dVar28 = (param_2 - dVar27) * 0.5;
    dVar31 = dVar27;
    dStack_198 = param_6;
    ppuStack_190 = param_9;
    dStack_188 = param_5;
    do {
      unaff_x26 = (undefined **)0x0;
      dVar26 = dVar25;
      dVar30 = dVar31;
      do {
        if ((undefined **)*puStack_160 != unaff_x27) {
          _objc_enumerationMutation(ppuVar1);
        }
        puVar17 = *(undefined **)(lStack_168 + (long)unaff_x26 * 8);
        puVar3 = puVar17;
        func_0x00010c0720c0();
        dVar25 = dVar26;
        dVar31 = dVar30;
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = puVar17;
          func_0x00010c0720c0();
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = puVar17;
            func_0x00010c0720c0();
            dVar25 = param_1;
            dVar31 = dVar27;
            if ((((((((ulong)puVar3 & 1) == 0) &&
                   (puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar29,
                   ((ulong)puVar3 & 1) == 0)) &&
                  (puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar32,
                  ((ulong)puVar3 & 1) == 0)) &&
                 ((puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = param_1, dVar31 = dVar28,
                  ((ulong)puVar3 & 1) == 0 &&
                  (puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar29,
                  ((ulong)puVar3 & 1) == 0)))) &&
                ((puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar32, ((ulong)puVar3 & 1) == 0
                 && ((puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = param_1, dVar31 = param_2,
                     ((ulong)puVar3 & 1) == 0 &&
                     (puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar29,
                     ((ulong)puVar3 & 1) == 0)))))) &&
               (puVar3 = puVar17, func_0x00010c0720c0(), dVar25 = dVar32, (int)puVar3 == 0)) {
              dVar25 = dVar26;
              dVar31 = dVar30;
            }
          }
          else {
            unaff_x28 = (undefined **)0x1;
          }
        }
        else {
          unaff_x28 = (undefined **)0x0;
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        dVar26 = dVar25;
        dVar30 = dVar31;
      } while (ppuVar2 != unaff_x26);
      ppuVar18 = &puStack_170;
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
    _objc_release(ppuVar1);
    unaff_x21 = 0;
    param_9 = ppuStack_190;
    param_6 = dStack_198;
    param_5 = dStack_188;
    if ((int)unaff_x28 == 0) goto LAB_104fc4070;
    if (dVar25 == dVar32) {
      param_1 = dVar32 - dStack_188;
    }
    else if (dVar25 != param_1) {
      param_1 = dVar29 + dStack_188 * -0.5;
    }
    ppuVar2 = unaff_x23;
    ppuVar23 = unaff_x24;
    ppuVar7 = unaff_x25;
    if ((dVar31 != param_2) &&
       (ppuVar2 = &PTR____CFConstantStringClassReference_110dc0e58,
       ppuVar23 = &PTR____CFConstantStringClassReference_110dc0e78,
       ppuVar7 = &PTR____CFConstantStringClassReference_110dc0e98, dVar31 == dVar27)) {
      ppuVar2 = unaff_x23;
      ppuVar23 = unaff_x24;
      ppuVar7 = unaff_x25;
    }
  }
  _objc_release(ppuVar1);
  _objc_release(param_9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_104fc41a4;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_200 = unaff_x28;
  ppuStack_1f8 = unaff_x27;
  ppuStack_1f0 = unaff_x26;
  ppuStack_1e8 = ppuVar7;
  ppuStack_1e0 = ppuVar23;
  ppuStack_1d8 = ppuVar2;
  ppuStack_1d0 = param_9;
  uStack_1c8 = unaff_x21;
  ppuStack_1c0 = ppuVar1;
  puStack_1b8 = puVar17;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar18);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar18;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 0.0;
  lStack_2c8 = 0;
  puStack_2d0 = (undefined *)0x0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  ppuVar1 = &puStack_2d0;
  ppuVar15 = apuStack_290;
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x27 = (undefined **)*puStack_2c0;
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc0f98;
    ppuVar23 = &PTR____CFConstantStringClassReference_110db97b8;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_2c0 != unaff_x27) {
          _objc_enumerationMutation(ppuVar5);
        }
        unaff_x26 = *(undefined ***)(lStack_2c8 + (long)unaff_x28 * 8);
        ppuVar7 = ppuVar18;
        func_0x00010c296f60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = unaff_x26;
        func_0x00010c08fa60();
        if ((ppuVar1 != (undefined **)0x0) &&
           (ppuVar1 = ppuVar7, func_0x00010c08fa60(), ppuVar1 != (undefined **)0x0)) {
          ppuVar1 = ppuVar4;
          func_0x00010c08fa60();
          if (ppuVar1 != (undefined **)0x0) {
            func_0x00010bf070e0(ppuVar4);
          }
          ppuStack_2e0 = unaff_x26;
          ppuStack_2d8 = ppuVar7;
          func_0x00010bf06ba0(ppuVar4);
        }
        _objc_release(ppuVar7);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar6 != unaff_x28);
      ppuVar1 = &puStack_2d0;
      ppuVar15 = apuStack_290;
      ppuVar6 = ppuVar5;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  ppuVar6 = ppuVar4;
  func_0x00010bf51e00();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return dVar25;
  }
  ___stack_chk_fail();
  pcStack_2e8 = FUN_104fc4358;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = unaff_x28;
  ppuStack_338 = unaff_x27;
  ppuStack_330 = unaff_x26;
  ppuStack_328 = ppuVar7;
  ppuStack_320 = ppuVar23;
  ppuStack_318 = ppuVar2;
  ppuStack_310 = ppuVar6;
  ppuStack_308 = ppuVar5;
  ppuStack_300 = ppuVar4;
  ppuStack_2f8 = ppuVar18;
  ppuStack_2f0 = &puStack_1b0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar15);
  ppuVar23 = ppuVar15;
  ppuVar18 = ppuVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar6;
  if (ppuVar23 == (undefined **)0x0) {
    ppuVar18 = &PTR____CFConstantStringClassReference_110dbf3b8;
    ppuVar5 = ppuVar15;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
    }
    else {
      ppuVar18 = &PTR____CFConstantStringClassReference_110db97b8;
      ppuVar6 = ppuVar5;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar6;
      func_0x00010bf529e0();
      if (ppuVar23 == (undefined **)0x0) {
        ppuVar23 = (undefined **)0x0;
      }
      else {
        ppuVar2 = ppuVar1;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        dVar25 = 0.0;
        lStack_408 = 0;
        puStack_410 = (undefined *)0x0;
        uStack_3f8 = 0;
        plStack_400 = (long *)0x0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        _objc_retain(ppuVar6);
        ppuVar18 = &puStack_410;
        ppuVar4 = ppuVar6;
        func_0x00010bf52a60();
        ppuVar23 = (undefined **)0x0;
        if (ppuVar4 != (undefined **)0x0) {
          lVar19 = *plStack_400;
          unaff_x28 = &PTR_PTR_1126af000;
          ppuStack_420 = ppuVar5;
          ppuStack_418 = ppuVar1;
          do {
            ppuVar18 = (undefined **)0x0;
            do {
              if (*plStack_400 != lVar19) {
                _objc_enumerationMutation(ppuVar6);
              }
              unaff_x26 = *(undefined ***)(lStack_408 + (long)ppuVar18 * 8);
              unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010c2a4bc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = unaff_x26;
              func_0x00010c25d0a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              ppuVar1 = ppuVar7;
              func_0x00010bfda7c0();
              if ((int)ppuVar1 != 0) {
                unaff_x27 = ppuVar7;
                func_0x00010c08fa60();
                ppuVar1 = ppuVar2;
                func_0x00010c08fa60();
                if (ppuVar1 < unaff_x27) {
                  func_0x00010c08fa60(ppuVar2);
                  func_0x00010c260c00();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                  func_0x00010c2a4bc0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar23 = unaff_x26;
                  ppuVar18 = unaff_x27;
                  func_0x00010c25d0a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x27);
                  _objc_release(ppuVar7);
                  ppuVar1 = ppuStack_418;
                  ppuVar5 = ppuStack_420;
                  goto LAB_104fc4590;
                }
              }
              _objc_release(ppuVar7);
              ppuVar18 = (undefined **)((long)ppuVar18 + 1);
            } while (ppuVar4 != ppuVar18);
            ppuVar18 = &puStack_410;
            ppuVar4 = ppuVar6;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
          ppuVar23 = (undefined **)0x0;
          ppuVar1 = ppuStack_418;
          ppuVar5 = ppuStack_420;
        }
LAB_104fc4590:
        _objc_release(ppuVar6);
        _objc_release(ppuVar2);
      }
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar5);
    ppuVar4 = ppuVar6;
  }
  ppuVar6 = ppuVar23;
  _objc_release(ppuVar15);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar14 = &uStack_550;
  pcStack_428 = FUN_104fc4600;
  lStack_490 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_480 = unaff_x28;
  ppuStack_478 = unaff_x27;
  ppuStack_470 = unaff_x26;
  ppuStack_468 = ppuVar7;
  ppuStack_460 = ppuVar6;
  ppuStack_458 = ppuVar2;
  ppuStack_450 = ppuVar4;
  ppuStack_448 = ppuVar5;
  ppuStack_440 = ppuVar15;
  ppuStack_438 = ppuVar1;
  pppuStack_430 = &ppuStack_2f0;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(ppuVar18);
  func_0x00010bffc4a0();
  dVar25 = 0.0;
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  _objc_retain(ppuVar18);
  puVar16 = auStack_510;
  lVar19 = 0x10;
  ppuVar2 = ppuVar18;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar22 = *plStack_540;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_540 != lVar22) {
          _objc_enumerationMutation(ppuVar18);
        }
        uVar20 = *(ulong *)(lStack_548 + (long)ppuVar23 * 8);
        uVar8 = uVar20;
        func_0x00010c11f420();
        uVar9 = uVar20;
        func_0x00010c08fa60();
        if (((2 < uVar9 && uVar8 != 0x7fffffffffffffff) && uVar8 != 0) && uVar8 < uVar9 - 1) {
          uVar8 = uVar20;
          func_0x00010c260c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(ppuVar1);
          _objc_release(uVar20);
          _objc_release(uVar8);
        }
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar2 != ppuVar23);
      puVar16 = auStack_510;
      lVar19 = 0x10;
      ppuVar2 = ppuVar18;
      puVar14 = &uStack_550;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar18);
  ppuVar6 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  _objc_release(ppuVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_490) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar16);
  _objc_retain(lVar19);
  if (puVar16 == (undefined1 *)0x0) goto LAB_104fc49d8;
  puVar21 = puVar16;
  func_0x00010c0720c0();
  if ((((ulong)puVar21 & 1) != 0) || (puVar21 = puVar16, func_0x00010c0720c0(), (int)puVar21 != 0))
  {
    dVar25 = 0.0;
    _CGContextSetLineDash(0,puVar14,0,0);
    goto LAB_104fc49d8;
  }
  puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar16;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  puVar10 = puVar21;
  func_0x00010bf529e0();
  if (puVar10 != (undefined1 *)0x0) {
    puVar11 = puVar21;
    if (((ulong)puVar10 & 1) == 0) {
      lVar22 = (long)puVar10 << 3;
      _malloc();
LAB_104fc491c:
      puVar21 = (undefined1 *)0x0;
      do {
        fVar24 = SUB84(dVar25,0);
        puVar12 = puVar11;
        func_0x00010c0dfd20(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c25d0a0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar12);
        func_0x00010bfb2c80(puVar13);
        dVar25 = (double)fVar24;
        *(double *)(lVar22 + (long)puVar21 * 8) = dVar25;
        _objc_release(puVar13);
        fVar24 = SUB84(dVar25,0);
        puVar21 = puVar21 + 1;
      } while (puVar10 != puVar21);
    }
    else {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      puVar10 = puVar11;
      func_0x00010bf529e0();
      lVar22 = (long)puVar10 << 3;
      _malloc();
      fVar24 = SUB84(dVar25,0);
      if (puVar10 != (undefined1 *)0x0) goto LAB_104fc491c;
    }
    if (lVar19 == 0) {
      dVar25 = 0.0;
    }
    else {
      func_0x00010bfb2c80(lVar19);
      dVar25 = (double)fVar24;
    }
    _CGContextSetLineDash(dVar25,puVar14,lVar22,puVar10);
    _free(lVar22);
    puVar21 = puVar11;
  }
  _objc_release(puVar21);
LAB_104fc49d8:
  _objc_release(lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return dVar25;
}



/* Entry: 104fc41a4; end: 104fc4357; +[SVGToQuartz styleAttributeStringForDictionary:] */

void FUN_104fc41a4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **unaff_x23;
  ulong uVar16;
  undefined **unaff_x24;
  undefined **ppuVar17;
  undefined **unaff_x25;
  undefined1 *puVar18;
  undefined **unaff_x26;
  long lVar19;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar20;
  float fVar21;
  double dVar22;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar14 = &puStack_130;
  ppuVar4 = apuStack_f0;
  ppuVar2 = ppuVar20;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x27 = (undefined **)*puStack_120;
    unaff_x23 = &PTR____CFConstantStringClassReference_110dc0f98;
    unaff_x24 = &PTR____CFConstantStringClassReference_110db97b8;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x27) {
          _objc_enumerationMutation(ppuVar20);
        }
        unaff_x26 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x25 = param_3;
        func_0x00010c296f60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = unaff_x26;
        func_0x00010c08fa60();
        if ((ppuVar14 != (undefined **)0x0) &&
           (ppuVar14 = unaff_x25, func_0x00010c08fa60(), ppuVar14 != (undefined **)0x0)) {
          ppuVar14 = ppuVar1;
          func_0x00010c08fa60();
          if (ppuVar14 != (undefined **)0x0) {
            func_0x00010bf070e0(ppuVar1);
          }
          ppuStack_140 = unaff_x26;
          ppuStack_138 = unaff_x25;
          func_0x00010bf06ba0(ppuVar1);
        }
        _objc_release(unaff_x25);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar2 != unaff_x28);
      ppuVar14 = &puStack_130;
      ppuVar4 = apuStack_f0;
      ppuVar2 = ppuVar20;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar20);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_104fc4358;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  ppuStack_170 = ppuVar2;
  ppuStack_168 = ppuVar20;
  ppuStack_160 = ppuVar1;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  _objc_retain(ppuVar4);
  ppuVar17 = ppuVar4;
  ppuVar1 = ppuVar14;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbf3b8;
    ppuVar20 = ppuVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar20;
    func_0x00010c08fa60();
    if (ppuVar17 == (undefined **)0x0) {
      ppuVar17 = (undefined **)0x0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db97b8;
      ppuVar2 = ppuVar20;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar2;
      func_0x00010bf529e0();
      if (ppuVar17 == (undefined **)0x0) {
        ppuVar17 = (undefined **)0x0;
      }
      else {
        unaff_x23 = ppuVar14;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        lStack_268 = 0;
        puStack_270 = (undefined *)0x0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        _objc_retain(ppuVar2);
        ppuVar1 = &puStack_270;
        ppuVar3 = ppuVar2;
        func_0x00010bf52a60();
        ppuVar17 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          lVar15 = *plStack_260;
          unaff_x28 = &PTR_PTR_1126af000;
          ppuStack_280 = ppuVar20;
          ppuStack_278 = ppuVar14;
          do {
            ppuVar14 = (undefined **)0x0;
            do {
              if (*plStack_260 != lVar15) {
                _objc_enumerationMutation(ppuVar2);
              }
              unaff_x26 = *(undefined ***)(lStack_268 + (long)ppuVar14 * 8);
              unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010c2a4bc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x26;
              func_0x00010c25d0a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              ppuVar1 = unaff_x25;
              func_0x00010bfda7c0();
              if ((int)ppuVar1 != 0) {
                unaff_x27 = unaff_x25;
                func_0x00010c08fa60();
                ppuVar1 = unaff_x23;
                func_0x00010c08fa60();
                if (ppuVar1 < unaff_x27) {
                  func_0x00010c08fa60(unaff_x23);
                  func_0x00010c260c00();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                  func_0x00010c2a4bc0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar17 = unaff_x26;
                  ppuVar1 = unaff_x27;
                  func_0x00010c25d0a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x27);
                  _objc_release(unaff_x25);
                  ppuVar14 = ppuStack_278;
                  ppuVar20 = ppuStack_280;
                  goto LAB_104fc4590;
                }
              }
              _objc_release(unaff_x25);
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            } while (ppuVar3 != ppuVar14);
            ppuVar1 = &puStack_270;
            ppuVar3 = ppuVar2;
            func_0x00010bf52a60();
          } while (ppuVar3 != (undefined **)0x0);
          ppuVar17 = (undefined **)0x0;
          ppuVar14 = ppuStack_278;
          ppuVar20 = ppuStack_280;
        }
LAB_104fc4590:
        _objc_release(ppuVar2);
        _objc_release(unaff_x23);
      }
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar20);
    ppuVar3 = ppuVar2;
  }
  ppuVar2 = ppuVar17;
  _objc_release(ppuVar4);
  _objc_release(ppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar12 = &uStack_3b0;
  pcStack_288 = FUN_104fc4600;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2e0 = unaff_x28;
  ppuStack_2d8 = unaff_x27;
  ppuStack_2d0 = unaff_x26;
  ppuStack_2c8 = unaff_x25;
  ppuStack_2c0 = ppuVar2;
  ppuStack_2b8 = unaff_x23;
  ppuStack_2b0 = ppuVar3;
  ppuStack_2a8 = ppuVar20;
  ppuStack_2a0 = ppuVar4;
  ppuStack_298 = ppuVar14;
  ppuStack_290 = &puStack_150;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(ppuVar1);
  func_0x00010bffc4a0();
  dVar22 = 0.0;
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  plStack_3a0 = (long *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  _objc_retain(ppuVar1);
  puVar13 = auStack_370;
  lVar15 = 0x10;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    lVar19 = *plStack_3a0;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_3a0 != lVar19) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar16 = *(ulong *)(lStack_3a8 + (long)ppuVar20 * 8);
        uVar5 = uVar16;
        func_0x00010c11f420();
        uVar6 = uVar16;
        func_0x00010c08fa60();
        if (((2 < uVar6 && uVar5 != 0x7fffffffffffffff) && uVar5 != 0) && uVar5 < uVar6 - 1) {
          uVar5 = uVar16;
          func_0x00010c260c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(ppuVar14);
          _objc_release(uVar16);
          _objc_release(uVar5);
        }
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar4 != ppuVar20);
      puVar13 = auStack_370;
      lVar15 = 0x10;
      ppuVar4 = ppuVar1;
      puVar12 = &uStack_3b0;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar2 = ppuVar14;
  func_0x00010bf51e00();
  _objc_release(ppuVar14);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(lVar15);
  if (puVar13 == (undefined1 *)0x0) goto LAB_104fc49d8;
  puVar18 = puVar13;
  func_0x00010c0720c0();
  if ((((ulong)puVar18 & 1) != 0) || (puVar18 = puVar13, func_0x00010c0720c0(), (int)puVar18 != 0))
  {
    _CGContextSetLineDash(0,puVar12,0,0);
    goto LAB_104fc49d8;
  }
  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar8 = puVar18;
  func_0x00010bf529e0();
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar18;
    if (((ulong)puVar8 & 1) == 0) {
      lVar19 = (long)puVar8 << 3;
      _malloc();
LAB_104fc491c:
      puVar18 = (undefined1 *)0x0;
      do {
        fVar21 = SUB84(dVar22,0);
        puVar10 = puVar9;
        func_0x00010c0dfd20(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c25d0a0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar10);
        func_0x00010bfb2c80(puVar11);
        dVar22 = (double)fVar21;
        *(double *)(lVar19 + (long)puVar18 * 8) = dVar22;
        _objc_release(puVar11);
        fVar21 = SUB84(dVar22,0);
        puVar18 = puVar18 + 1;
      } while (puVar8 != puVar18);
    }
    else {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      puVar8 = puVar9;
      func_0x00010bf529e0();
      lVar19 = (long)puVar8 << 3;
      _malloc();
      fVar21 = SUB84(dVar22,0);
      if (puVar8 != (undefined1 *)0x0) goto LAB_104fc491c;
    }
    if (lVar15 == 0) {
      dVar22 = 0.0;
    }
    else {
      func_0x00010bfb2c80(lVar15);
      dVar22 = (double)fVar21;
    }
    _CGContextSetLineDash(dVar22,puVar12,lVar19,puVar8);
    _free(lVar19);
    puVar18 = puVar9;
  }
  _objc_release(puVar18);
LAB_104fc49d8:
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 104fc4358; end: 104fc45ff; +[SVGToQuartz valueForStyleAttribute:fromDefinition:] */

void FUN_104fc4358(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined **unaff_x21;
  long lVar12;
  undefined **unaff_x22;
  undefined **unaff_x23;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **unaff_x25;
  undefined1 *puVar15;
  undefined **unaff_x26;
  long lVar16;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar17;
  float fVar18;
  double dVar19;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
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
  ppuVar14 = param_4;
  ppuVar11 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110dbf3b8;
    unaff_x21 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = unaff_x21;
    func_0x00010c08fa60();
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_110db97b8;
      unaff_x22 = unaff_x21;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = unaff_x22;
      func_0x00010bf529e0();
      if (ppuVar14 == (undefined **)0x0) {
        ppuVar14 = (undefined **)0x0;
      }
      else {
        unaff_x23 = param_3;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        lStack_128 = 0;
        puStack_130 = (undefined *)0x0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        _objc_retain(unaff_x22);
        ppuVar11 = &puStack_130;
        ppuVar1 = unaff_x22;
        func_0x00010bf52a60();
        ppuVar14 = (undefined **)0x0;
        if (ppuVar1 != (undefined **)0x0) {
          lVar12 = *plStack_120;
          unaff_x28 = &PTR_PTR_1126af000;
          ppuStack_140 = unaff_x21;
          ppuStack_138 = param_3;
          do {
            ppuVar11 = (undefined **)0x0;
            do {
              if (*plStack_120 != lVar12) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x26 = *(undefined ***)(lStack_128 + (long)ppuVar11 * 8);
              unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010c2a4bc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x26;
              func_0x00010c25d0a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              ppuVar14 = unaff_x25;
              func_0x00010bfda7c0();
              if ((int)ppuVar14 != 0) {
                unaff_x27 = unaff_x25;
                func_0x00010c08fa60();
                ppuVar14 = unaff_x23;
                func_0x00010c08fa60();
                if (ppuVar14 < unaff_x27) {
                  func_0x00010c08fa60(unaff_x23);
                  func_0x00010c260c00();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                  func_0x00010c2a4bc0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = unaff_x26;
                  ppuVar11 = unaff_x27;
                  func_0x00010c25d0a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x27);
                  _objc_release(unaff_x25);
                  param_3 = ppuStack_138;
                  unaff_x21 = ppuStack_140;
                  goto LAB_104fc4590;
                }
              }
              _objc_release(unaff_x25);
              ppuVar11 = (undefined **)((long)ppuVar11 + 1);
            } while (ppuVar1 != ppuVar11);
            ppuVar11 = &puStack_130;
            ppuVar1 = unaff_x22;
            func_0x00010bf52a60();
          } while (ppuVar1 != (undefined **)0x0);
          ppuVar14 = (undefined **)0x0;
          param_3 = ppuStack_138;
          unaff_x21 = ppuStack_140;
        }
LAB_104fc4590:
        _objc_release(unaff_x22);
        _objc_release(unaff_x23);
      }
      _objc_release(unaff_x22);
    }
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_270;
  pcStack_148 = FUN_104fc4600;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = ppuVar14;
  ppuStack_178 = unaff_x23;
  ppuStack_170 = unaff_x22;
  ppuStack_168 = unaff_x21;
  ppuStack_160 = param_4;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(ppuVar11);
  func_0x00010bffc4a0();
  dVar19 = 0.0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(ppuVar11);
  puVar10 = auStack_230;
  lVar12 = 0x10;
  ppuVar14 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    lVar16 = *plStack_260;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_260 != lVar16) {
          _objc_enumerationMutation(ppuVar11);
        }
        uVar13 = *(ulong *)(lStack_268 + (long)ppuVar17 * 8);
        uVar2 = uVar13;
        func_0x00010c11f420();
        uVar3 = uVar13;
        func_0x00010c08fa60();
        if (((2 < uVar3 && uVar2 != 0x7fffffffffffffff) && uVar2 != 0) && uVar2 < uVar3 - 1) {
          uVar2 = uVar13;
          func_0x00010c260c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(ppuVar1);
          _objc_release(uVar13);
          _objc_release(uVar2);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar14 != ppuVar17);
      puVar10 = auStack_230;
      lVar12 = 0x10;
      ppuVar14 = ppuVar11;
      puVar9 = &uStack_270;
      func_0x00010bf52a60();
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  ppuVar14 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(lVar12);
  if (puVar10 == (undefined1 *)0x0) goto LAB_104fc49d8;
  puVar15 = puVar10;
  func_0x00010c0720c0();
  if ((((ulong)puVar15 & 1) != 0) || (puVar15 = puVar10, func_0x00010c0720c0(), (int)puVar15 != 0))
  {
    _CGContextSetLineDash(0,puVar9,0,0);
    goto LAB_104fc49d8;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = puVar15;
  func_0x00010bf529e0();
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar15;
    if (((ulong)puVar5 & 1) == 0) {
      lVar16 = (long)puVar5 << 3;
      _malloc();
LAB_104fc491c:
      puVar15 = (undefined1 *)0x0;
      do {
        fVar18 = SUB84(dVar19,0);
        puVar7 = puVar6;
        func_0x00010c0dfd20(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c25d0a0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar7);
        func_0x00010bfb2c80(puVar8);
        dVar19 = (double)fVar18;
        *(double *)(lVar16 + (long)puVar15 * 8) = dVar19;
        _objc_release(puVar8);
        fVar18 = SUB84(dVar19,0);
        puVar15 = puVar15 + 1;
      } while (puVar5 != puVar15);
    }
    else {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar5 = puVar6;
      func_0x00010bf529e0();
      lVar16 = (long)puVar5 << 3;
      _malloc();
      fVar18 = SUB84(dVar19,0);
      if (puVar5 != (undefined1 *)0x0) goto LAB_104fc491c;
    }
    if (lVar12 == 0) {
      dVar19 = 0.0;
    }
    else {
      func_0x00010bfb2c80(lVar12);
      dVar19 = (double)fVar18;
    }
    _CGContextSetLineDash(dVar19,puVar9,lVar16,puVar5);
    _free(lVar16);
    puVar15 = puVar6;
  }
  _objc_release(puVar15);
LAB_104fc49d8:
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 104fc4600; end: 104fc47e7; +[SVGToQuartz dictionaryForStyleAttributeString:] */

void FUN_104fc4600(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  float fVar16;
  double dVar17;
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
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db97b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  dVar17 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar11 = auStack_f0;
  lVar12 = 0x10;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar12 * 8);
        uVar2 = uVar13;
        func_0x00010c11f420();
        uVar3 = uVar13;
        func_0x00010c08fa60();
        if (((2 < uVar3 && uVar2 != 0x7fffffffffffffff) && uVar2 != 0) && uVar2 < uVar3 - 1) {
          uVar2 = uVar13;
          func_0x00010c260c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(puVar1);
          _objc_release(uVar13);
          _objc_release(uVar2);
        }
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      puVar11 = auStack_f0;
      lVar12 = 0x10;
      lVar6 = param_3;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(lVar12);
  if (puVar11 == (undefined1 *)0x0) goto LAB_104fc49d8;
  puVar14 = puVar11;
  func_0x00010c0720c0();
  if ((((ulong)puVar14 & 1) != 0) || (puVar14 = puVar11, func_0x00010c0720c0(), (int)puVar14 != 0))
  {
    _CGContextSetLineDash(0,puVar10,0,0);
    goto LAB_104fc49d8;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = puVar14;
  func_0x00010bf529e0();
  if (puVar5 != (undefined1 *)0x0) {
    puVar7 = puVar14;
    if (((ulong)puVar5 & 1) == 0) {
      lVar6 = (long)puVar5 << 3;
      _malloc();
LAB_104fc491c:
      puVar14 = (undefined1 *)0x0;
      do {
        fVar16 = SUB84(dVar17,0);
        puVar8 = puVar7;
        func_0x00010c0dfd20(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c25d0a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar8);
        func_0x00010bfb2c80(puVar9);
        dVar17 = (double)fVar16;
        *(double *)(lVar6 + (long)puVar14 * 8) = dVar17;
        _objc_release(puVar9);
        fVar16 = SUB84(dVar17,0);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
    }
    else {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar5 = puVar7;
      func_0x00010bf529e0();
      lVar6 = (long)puVar5 << 3;
      _malloc();
      fVar16 = SUB84(dVar17,0);
      if (puVar5 != (undefined1 *)0x0) goto LAB_104fc491c;
    }
    if (lVar12 == 0) {
      dVar17 = 0.0;
    }
    else {
      func_0x00010bfb2c80(lVar12);
      dVar17 = (double)fVar16;
    }
    _CGContextSetLineDash(dVar17,puVar10,lVar6,puVar5);
    _free(lVar6);
    puVar14 = puVar7;
  }
  _objc_release(puVar14);
LAB_104fc49d8:
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 104fc47e8; end: 104fc4a03; +[SVGToQuartz setupLineDashForQuartzContext:withSVGDashArray:andPhase:] */

void FUN_104fc47e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) goto LAB_104fc49d8;
  uVar7 = param_5;
  func_0x00010c0720c0();
  if (((uVar7 & 1) != 0) || (uVar7 = param_5, func_0x00010c0720c0(), (int)uVar7 != 0)) {
    _CGContextSetLineDash(0,param_4,0,0);
    goto LAB_104fc49d8;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = uVar7;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar4 = uVar7;
    if ((uVar2 & 1) == 0) {
      lVar3 = uVar2 << 3;
      _malloc();
LAB_104fc491c:
      uVar7 = 0;
      do {
        fVar8 = SUB84(param_1,0);
        uVar5 = uVar4;
        func_0x00010c0dfd20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c25d0a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(uVar5);
        func_0x00010bfb2c80(uVar6);
        param_1 = (double)fVar8;
        *(double *)(lVar3 + uVar7 * 8) = param_1;
        _objc_release(uVar6);
        fVar8 = SUB84(param_1,0);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    else {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar2 = uVar4;
      func_0x00010bf529e0();
      lVar3 = uVar2 << 3;
      _malloc();
      fVar8 = SUB84(param_1,0);
      if (uVar2 != 0) goto LAB_104fc491c;
    }
    if (param_6 == 0) {
      dVar9 = 0.0;
    }
    else {
      func_0x00010bfb2c80(param_6);
      dVar9 = (double)fVar8;
    }
    _CGContextSetLineDash(dVar9,param_4,lVar3,uVar2);
    _free(lVar3);
    uVar7 = uVar4;
  }
  _objc_release(uVar7);
LAB_104fc49d8:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fc4a04; end: 104fc4abb; +[SVGToQuartz setupLineWidthForQuartzContext:withSVGStrokeString:withVectorEffect:withSVGContext:] */

void FUN_104fc4a04(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_7);
  if (param_5 != 0) {
    _objc_retain(param_6);
    func_0x00010bfb2c80(param_5);
    dVar2 = (double)param_1;
    uVar1 = param_6;
    func_0x00010c0720c0(param_6,param_3,&PTR____CFConstantStringClassReference_110dc0fb8);
    _objc_release(param_6);
    if ((int)uVar1 != 0) {
      dVar3 = dVar2;
      _CGContextConvertSizeToUserSpace(dVar2,dVar2,param_4);
      dVar2 = ABS(dVar2) + ABS(dVar3);
      dVar3 = dVar2 * 0.5;
      func_0x00010bf9cc80(param_7);
      dVar2 = dVar2 * dVar3;
    }
    _CGContextSetLineWidth(dVar2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104fc4abc; end: 104fc4b17; +[SVGToQuartz setupOpacityForQuartzContext:withSVGOpacity:] */

void FUN_104fc4abc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010bfb2c80(param_5);
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 == 1.0;
        bVar2 = 1.0 <= param_1;
      }
    }
    if (!bVar2 || bVar1) {
      _CGContextSetAlpha((double)param_1,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fc4b18; end: 104fc4c3f; +[SVGToQuartz setupColorForQuartzContext:withColorString:withSVGContext:] */

void FUN_104fc4b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x000104fc141c();
    if ((int)lVar1 == 0) {
      lVar1 = param_4;
      func_0x00010c08fa60();
      if (lVar1 == 0) goto LAB_104fc4c20;
      uVar3 = param_5;
      func_0x00010bf40f40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_5;
      func_0x00010c0dfd80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2;
        func_0x00010c0f8f20();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar2);
    }
    if (uVar3 != 0) {
      uVar2 = uVar3;
      _objc_retainAutorelease(uVar3);
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(param_3,uVar2);
      uVar2 = uVar3;
      _objc_retainAutorelease(uVar3);
      func_0x00010bdc0fe0();
      _CGContextSetStrokeColorWithColor(param_3,uVar2);
      _objc_release(uVar3);
    }
  }
LAB_104fc4c20:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fc4c40; end: 104fc4ccb; +[SVGToQuartz setupLineEndForQuartzContext:withSVGLineEndString:] */

void FUN_104fc4c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_4;
    func_0x00010c0720c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0();
        uVar2 = 2;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
    _CGContextSetLineCap(param_3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fc4ccc; end: 104fc4cff; +[SVGToQuartz setupMiterLimitForQuartzContext:withSVGMiterLimitString:] */

void FUN_104fc4ccc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
    func_0x00010bfb2c80(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbae74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGContextSetMiterLimit_1103472a8)((double)param_1,param_4);
    return;
  }
  return;
}



/* Entry: 104fc4d00; end: 104fc4d93; +[SVGToQuartz setupMiterForQuartzContext:withSVGMiterString:] */

void FUN_104fc4d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0720c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0();
        uVar2 = 2;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
    _CGContextSetLineJoin(param_3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fc4d94; end: 104fc50a7; +[GHGlyph positionGlyphs:alongCGPath:] */

void FUN_104fc4d94(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_160;
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uVar5 = 0x3032000000;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_104fc50a8;
  uStack_80 = 0x104fc50b8;
  uStack_58 = 1;
  uVar1 = param_3;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  puStack_b8 = &uStack_c0;
  uStack_78 = uVar1;
  func_0x00010c0e1c40(puStack_98[5]);
  puStack_130 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3010000000;
  pcStack_d8 = "";
  uStack_c8 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_d0 = *(undefined8 *)PTR__CGPointZero_110347540;
  puStack_120 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104fc50c0;
  puStack_148 = &UNK_110860608;
  puStack_138 = &uStack_a0;
  puStack_118 = &uStack_70;
  puStack_128 = &uStack_c0;
  puStack_108 = puStack_120;
  puStack_e8 = puStack_130;
  uStack_a8 = uVar5;
  _objc_retain(param_3);
  uStack_140 = param_3;
  _objc_retainBlock(&puStack_160);
  _CGPathApply(param_4,ppuVar2,FUN_104fb2cf4);
  lVar3 = puStack_98[5];
  if (lVar3 != 0) {
    dVar6 = (double)puStack_108[3];
    do {
      dVar9 = (double)puStack_b8[3];
      dVar7 = (double)puStack_e8[4];
      uVar10 = puStack_e8[5];
      dVar11 = (dVar9 - dVar6) + dVar7;
      uVar5 = uVar10;
      FUN_104fb3038(dVar7,uVar10,dVar11,uVar10);
      dVar8 = dVar11;
      func_0x00010c1ea8a0(dVar11,uVar10,dVar7,uVar5,lVar3);
      puStack_e8[4] = dVar11;
      puStack_e8[5] = uVar10;
      uVar4 = puStack_68[3];
      uVar1 = param_3;
      func_0x00010bf529e0();
      if (uVar4 < uVar1) {
        puStack_68[3] = puStack_68[3] + 1;
        uVar1 = param_3;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puStack_98[5];
        puStack_98[5] = uVar1;
        _objc_release(uVar5);
        func_0x00010c0e1c40(puStack_98[5]);
        puStack_b8[3] = dVar8;
      }
      else {
        uVar5 = puStack_98[5];
        puStack_98[5] = 0;
        _objc_release(uVar5);
      }
      dVar6 = (dVar9 - dVar6) + (double)puStack_108[3];
      puStack_108[3] = dVar6;
      lVar3 = puStack_98[5];
    } while (lVar3 != 0);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return;
}



/* Entry: 104fc50a8; end: 104fc50bf;  */

void FUN_104fc50a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fc50c0; end: 104fc53bf;  */

void FUN_104fc50c0(long param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined **ppuVar3;
  double *pdVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 auStack_f0 [2];
  double *pdStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lStack_a0 = *(long *)(param_1 + 0x28);
  if (*(long *)(*(long *)(lStack_a0 + 8) + 0x28) != 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_104fc53c0;
    puStack_b8 = &UNK_110860608;
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    ppuVar3 = &puStack_d0;
    uStack_b0 = uVar6;
    _objc_retainBlock();
    iVar1 = *param_2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar6 = **(undefined8 **)(param_2 + 2);
        *(undefined8 *)(lVar5 + 0x28) = (*(undefined8 **)(param_2 + 2))[1];
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
      }
      else if (iVar1 == 1) {
        (*(code *)ppuVar3[2])(ppuVar3,param_2);
      }
    }
    else if (iVar1 == 2) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      dVar9 = *(double *)(lVar5 + 0x20);
      dVar14 = *(double *)(lVar5 + 0x28);
      pdVar4 = *(double **)(param_2 + 2);
      dVar18 = *pdVar4;
      dVar7 = pdVar4[1];
      dVar20 = pdVar4[2];
      dVar21 = pdVar4[3];
      dVar10 = (double)func_0x00010bf279c0(dVar9,dVar14,dVar20,dVar21,PTR_PTR_1126b3280);
      if (dVar10 <= 1.0) {
        dVar19 = dVar10;
        do {
          dVar11 = 1.0 - dVar19;
          dVar12 = dVar19 * (dVar11 + dVar11);
          dStack_e0 = dVar18 * dVar12 + dVar9 * dVar11 * dVar11 + dVar20 * dVar19 * dVar19;
          dStack_d8 = dVar7 * dVar12 + dVar14 * dVar11 * dVar11 + dVar21 * dVar19 * dVar19;
          auStack_f0[0] = 1;
          pdStack_e8 = &dStack_e0;
          (*(code *)ppuVar3[2])(ppuVar3,auStack_f0);
          dVar11 = dVar10 + dVar19;
          bVar2 = false;
          if ((1.0 < dVar11) && (bVar2 = false, !NAN(dVar19))) {
            bVar2 = dVar19 < 1.0;
          }
          dVar19 = 1.0;
          if (!bVar2) {
            dVar19 = dVar11;
          }
        } while (dVar19 <= 1.0);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(double *)(lVar5 + 0x20) = dVar20;
      *(double *)(lVar5 + 0x28) = dVar21;
    }
    else if (iVar1 == 3) {
      pdVar4 = *(double **)(param_2 + 2);
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      dVar21 = pdVar4[1];
      dVar20 = *pdVar4;
      dVar11 = pdVar4[3];
      dVar19 = pdVar4[2];
      dVar9 = pdVar4[4];
      dVar10 = pdVar4[5];
      dVar14 = *(double *)(lVar5 + 0x20);
      dVar18 = *(double *)(lVar5 + 0x28);
      dVar7 = (double)func_0x00010bf27880(dVar14,dVar18,dVar9,dVar10,dVar20,dVar21,dVar19,dVar11,
                                          PTR_PTR_1126b3280);
      if (dVar7 <= 1.0) {
        auVar13 = NEON_fmov(0xc008000000000000,8);
        auVar16 = NEON_fmov(0x4008000000000000,8);
        dVar15 = auVar16._0_8_;
        dVar17 = auVar16._8_8_;
        auVar16 = NEON_fmov(0xc018000000000000,8);
        dVar12 = dVar7;
        do {
          dStack_e0 = dVar14 + (dVar14 * auVar13._0_8_ + dVar15 * dVar20 +
                               (dVar20 * auVar16._0_8_ + dVar15 * dVar19 + dVar15 * dVar14 +
                               ((dVar9 + auVar13._0_8_ * dVar19 + dVar15 * dVar20) - dVar14) *
                               dVar12) * dVar12) * dVar12;
          dStack_d8 = dVar18 + (dVar18 * auVar13._8_8_ + dVar17 * dVar21 +
                               (dVar21 * auVar16._8_8_ + dVar17 * dVar11 + dVar17 * dVar18 +
                               ((dVar10 + auVar13._8_8_ * dVar11 + dVar17 * dVar21) - dVar18) *
                               dVar12) * dVar12) * dVar12;
          auStack_f0[0] = 1;
          pdStack_e8 = &dStack_e0;
          (*(code *)ppuVar3[2])(ppuVar3,auStack_f0);
          dVar8 = dVar7 + dVar12;
          bVar2 = false;
          if ((1.0 < dVar8) && (bVar2 = false, !NAN(dVar12))) {
            bVar2 = dVar12 < 1.0;
          }
          dVar12 = 1.0;
          if (!bVar2) {
            dVar12 = dVar8;
          }
        } while (dVar12 <= 1.0);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(double *)(lVar5 + 0x20) = dVar9;
      *(double *)(lVar5 + 0x28) = dVar10;
    }
    _objc_release(ppuVar3);
    _objc_release(uStack_b0);
  }
  return;
}



/* Entry: 104fc53c0; end: 104fc55b7;  */

void FUN_104fc53c0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar14 = **(double **)(param_2 + 8);
  dVar6 = (*(double **)(param_2 + 8))[1];
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  dVar7 = *(double *)(lVar3 + 0x20);
  dVar10 = *(double *)(lVar3 + 0x28);
  if ((0.004 < ABS(dVar14 - dVar7)) || (0.004 < ABS(dVar6 - dVar10))) {
    dVar17 = dVar14 - dVar7;
    dVar18 = dVar6 - dVar10;
    fVar12 = (float)(dVar18 * dVar18 + dVar17 * dVar17);
    if (0.0 < fVar12) {
      dVar16 = (double)SQRT(fVar12);
      FUN_104fb3038(dVar7,dVar10,dVar14,dVar6);
      dVar15 = dVar16;
      do {
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) break;
        dVar8 = *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
        lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        dVar11 = *(double *)(lVar3 + 0x18);
        dVar13 = dVar15 + dVar11;
        if (dVar13 < dVar8) {
          *(double *)(lVar3 + 0x18) = dVar13;
          lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          *(double *)(lVar3 + 0x20) = dVar14;
          *(double *)(lVar3 + 0x28) = dVar6;
          break;
        }
        dVar8 = dVar8 - dVar11;
        dVar11 = dVar8 / dVar16;
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        dVar13 = *(double *)(lVar3 + 0x20) + dVar17 * dVar11;
        dVar11 = *(double *)(lVar3 + 0x28) + dVar18 * dVar11;
        func_0x00010c1ea8a0(dVar13,dVar11,dVar7,dVar10);
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar9;
        uVar5 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18);
        uVar1 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
        if (uVar5 < uVar1) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
          *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar4 = *(undefined8 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar3 + 0x28) = uVar2;
          _objc_release(uVar4);
          func_0x00010c0e1c40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar9;
        }
        else {
          lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          uVar9 = *(undefined8 *)(lVar3 + 0x28);
          *(undefined8 *)(lVar3 + 0x28) = 0;
          _objc_release(uVar9);
        }
        dVar15 = dVar15 - dVar8;
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        *(double *)(lVar3 + 0x20) = dVar13;
        *(double *)(lVar3 + 0x28) = dVar11;
      } while (0.0 < dVar15);
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(double *)(lVar3 + 0x20) = dVar14;
  *(double *)(lVar3 + 0x28) = dVar6;
  return;
}



/* Entry: 104fc55b8; end: 104fc5787; -[GHGlyph initWithDictionary:textAttributes:font:glyph:transform:offset:andWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fc55b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined2 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126e5720;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithDictionary__1125e0b28,param_6);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718b50) = param_8;
    _CFRetain(param_8);
    *(undefined2 *)((long)puVar2 + (long)_DAT_112718b54) = param_9;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112718b58);
    uVar10 = param_10[2];
    uVar9 = param_10[5];
    uVar3 = param_10[4];
    uVar12 = param_10[1];
    uVar11 = *param_10;
    puVar1[3] = param_10[3];
    puVar1[2] = uVar10;
    puVar1[5] = uVar9;
    puVar1[4] = uVar3;
    puVar1[1] = uVar12;
    *puVar1 = uVar11;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718b5c) = param_1;
    ((undefined8 *)((long)puVar2 + (long)_DAT_112718b5c))[1] = param_2;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718b60) = param_3;
    lVar6 = (long)_DAT_112718b64;
    _objc_retain(param_7);
    fVar7 = (float)uVar3;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112718b68);
    *(undefined **)((long)puVar2 + (long)_DAT_112718b68) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112718b6c);
    *(undefined **)((long)puVar2 + (long)_DAT_112718b6c) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      dVar8 = -1.0;
    }
    else {
      func_0x00010bfb2c80(puVar4);
      dVar8 = (double)fVar7;
    }
    *(double *)((long)puVar2 + (long)_DAT_112718b70) = dVar8;
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 104fc5788; end: 104fc590f; -[GHGlyph calculatedHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104fc5788(double param_1,ulong param_2)

{
  double *pdVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126e5720;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_calculatedHash_1125a7858);
  uVar3 = param_2;
  func_0x00010c26b8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bfb3a80(param_2);
  _CFHash();
  func_0x00010c0e1c40(param_2);
  dVar6 = (double)(undefined1 *)((long)puVar2 + uVar4 + uVar3);
  dVar7 = dVar6 + param_1 * 31.0;
  func_0x00010c0e1c40(param_2);
  dVar5 = (double)NEON_ucvtf((long)dVar7);
  dVar7 = dVar6 * 341.0;
  func_0x00010c0e1c40(param_2);
  dVar7 = (double)NEON_ucvtf((long)(dVar5 + dVar7));
  pdVar1 = (double *)(param_2 + (long)_DAT_112718b58);
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + dVar6 * 3751.0));
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + *pdVar1 * 41261.0));
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + pdVar1[1] * 453871.0));
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + pdVar1[2] * 4992581.0));
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + pdVar1[3] * 54918391.0));
  dVar5 = pdVar1[5];
  dVar7 = (double)NEON_ucvtf((long)(dVar7 + pdVar1[4] * 604102301.0));
  func_0x00010bfcd200(param_2);
  return (long)(dVar7 + dVar5 * 6645125311.0) + (param_2 & 0xffffffff) * 0x1104e23835;
}



/* Entry: 104fc5910; end: 104fc5947; -[GHGlyph boundingBox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc5910(void)

{
  func_0x00010bfb3a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbbbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CTFontGetBoundingRectsForGlyphs_110349f10)();
  return;
}



/* Entry: 104fc5948; end: 104fc5abb; -[GHGlyph isEqual:] */

bool FUN_104fc5948(double param_1,long param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  double dVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  if (param_4 == param_2) {
    bVar3 = true;
    goto LAB_104fc5a94;
  }
  puStack_58 = PTR_PTR_1126e5720;
  plVar4 = &lStack_60;
  lStack_60 = param_2;
  _objc_msgSendSuper2(plVar4,PTR_s_isEqual__1125fa0c8,param_4);
  if ((int)plVar4 == 0) {
    bVar3 = false;
    goto LAB_104fc5a94;
  }
  _objc_retain(param_4);
  lVar5 = param_2;
  func_0x00010c26b8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c26b8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c071ae0();
  if ((int)lVar7 == 0) {
LAB_104fc5a78:
    bVar3 = false;
  }
  else {
    func_0x00010c0e1c40(param_2);
    dVar1 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    dVar9 = param_1;
    func_0x00010c0e1c40(param_4);
    bVar3 = false;
    bVar2 = false;
    if (!NAN(dVar1) &&
        !NAN((double)CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,
                                                         CONCAT13(in_register_00005003,
                                                                  CONCAT12(in_register_00005002,
                                                                           CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
      bVar2 = dVar1 == (double)CONCAT17(in_register_00005007,
                                        CONCAT16(in_register_00005006,
                                                 CONCAT15(in_register_00005005,
                                                          CONCAT14(in_register_00005004,
                                                                   CONCAT13(in_register_00005003,
                                                                            CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
    }
    if ((bVar2) && (param_1 == dVar9)) {
      func_0x00010c27a460(auStack_90,param_2);
      if (param_4 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_c0,param_4);
      }
      puVar8 = auStack_90;
      _CGAffineTransformEqualToTransform(puVar8,&uStack_c0);
      if ((int)puVar8 == 0) goto LAB_104fc5a78;
      func_0x00010bfcd200(param_2);
      lVar7 = param_4;
      func_0x00010bfcd200(param_4);
      bVar3 = (int)param_2 == (int)lVar7;
    }
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_4);
LAB_104fc5a94:
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 104fc5abc; end: 104fc5b0f; -[GHGlyph dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc5abc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112718b50) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126e5720;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104fc5b10; end: 104fc5b5f; -[GHGlyph setRenderPoint:withPerpendicular:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc5b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _atan2(param_3,param_4);
  func_0x00010c1ee7c0(param_5);
  lVar1 = (long)_DAT_112718b48;
  *(undefined8 *)(param_5 + lVar1) = param_1;
  ((undefined8 *)(param_5 + lVar1))[1] = param_2;
  return;
}



/* Entry: 104fc5b60; end: 104fc5e33; +[GHGlyph rectForGlyphs:] */

undefined8
FUN_104fc5b60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 unaff_d12;
  double unaff_d13;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  double dStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  double dStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double dStack_258;
  double dStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  dVar13 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar14 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar7 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar1 = param_7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_150;
    uStack_1f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_200 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_208 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    dStack_210 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_218 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_220 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    do {
      lVar6 = 0;
      uVar8 = uVar12;
      dVar9 = dVar13;
      dVar10 = dVar14;
      uVar11 = uVar15;
      do {
        if (*plStack_150 != lVar5) {
          _objc_enumerationMutation(param_7);
        }
        uVar4 = *(ulong *)(lStack_158 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010bfb3a80();
        uVar3 = uVar4;
        func_0x00010bfcd200(uVar4);
        _CTFontCreatePathForGlyph(uVar2,uVar3,0);
        func_0x00010c12fee0(uVar4);
        uStack_1b8 = uStack_1f8;
        uStack_1c0 = uStack_200;
        uStack_1a8 = uStack_208;
        dStack_1b0 = dStack_210;
        uStack_198 = uStack_218;
        uStack_1a0 = uStack_220;
        unaff_d12 = uStack_200;
        _CGAffineTransformTranslate(&uStack_190,&uStack_1c0);
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_1d8 = uStack_178;
        dStack_1e0 = dStack_180;
        uStack_1c8 = uStack_168;
        uStack_1d0 = uStack_170;
        _CGAffineTransformScale(&uStack_1c0,0x3ff0000000000000,0xbff0000000000000,&uStack_1f0);
        uStack_188 = uStack_1b8;
        uStack_190 = uStack_1c0;
        uStack_178 = uStack_1a8;
        dStack_180 = dStack_1b0;
        uStack_168 = uStack_198;
        uStack_170 = uStack_1a0;
        func_0x00010c141ae0(uVar4);
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_1d8 = uStack_178;
        dStack_1e0 = dStack_180;
        uStack_1c8 = uStack_168;
        uStack_1d0 = uStack_170;
        _CGAffineTransformRotate(&uStack_1c0,&uStack_1f0);
        uStack_188 = uStack_1b8;
        uStack_190 = uStack_1c0;
        uStack_178 = uStack_1a8;
        dStack_180 = dStack_1b0;
        uStack_168 = uStack_198;
        uStack_170 = uStack_1a0;
        dVar13 = dStack_1b0;
        func_0x00010c0e1c40(uVar4);
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_1d8 = uStack_178;
        dStack_1e0 = dStack_180;
        uStack_1c8 = uStack_168;
        uStack_1d0 = uStack_170;
        unaff_d13 = dStack_180;
        _CGAffineTransformTranslate(&uStack_1c0,0,-dVar13,&uStack_1f0);
        uStack_188 = uStack_1b8;
        uStack_190 = uStack_1c0;
        uStack_178 = uStack_1a8;
        dStack_180 = dStack_1b0;
        uStack_168 = uStack_198;
        uStack_170 = uStack_1a0;
        uVar12 = uStack_1a0;
        dVar13 = dStack_1b0;
        _CGPathGetBoundingBox(uVar2);
        uStack_1b8 = uStack_188;
        uStack_1c0 = uStack_190;
        uStack_1a8 = uStack_178;
        dStack_1b0 = dStack_180;
        uStack_198 = uStack_168;
        uStack_1a0 = uStack_170;
        _CGRectApplyAffineTransform(&uStack_1c0);
        _CGPathRelease();
        uVar7 = uVar8;
        param_2 = dVar9;
        param_4 = uVar11;
        _CGRectIsEmpty(uVar8,dVar9,dVar10,uVar11);
        dVar14 = unaff_d13;
        uVar15 = unaff_d12;
        if ((uVar2 & 1) == 0) {
          _CGRectUnion();
          uVar7 = uVar8;
          param_2 = dVar9;
          param_4 = uVar11;
          uVar12 = uVar8;
          dVar13 = dVar9;
          dVar14 = dVar10;
          uVar15 = uVar11;
        }
        lVar6 = lVar6 + 1;
        uVar8 = uVar12;
        dVar9 = dVar13;
        dVar10 = dVar14;
        uVar11 = uVar15;
      } while (lVar1 != lVar6);
      lVar1 = param_7;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_7;
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    pcStack_228 = FUN_104fc5e34;
    lVar5 = lVar1;
    uVar8 = uVar7;
    dStack_270 = unaff_d13;
    uStack_268 = unaff_d12;
    uStack_260 = uVar15;
    dStack_258 = dVar14;
    dStack_250 = dVar13;
    uStack_248 = uVar12;
    uStack_240 = unaff_x20;
    lStack_238 = param_7;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x00010bfb3a80();
    lVar6 = lVar1;
    func_0x00010bfcd200(lVar1);
    _CTFontCreatePathForGlyph(lVar5,lVar6,0);
    func_0x00010c12fee0(lVar1);
    func_0x00010c12fee0(lVar1);
    uStack_2c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_2d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_2b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    dStack_2c0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_2a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_2b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformTranslate(&uStack_2a0,uVar8,&uStack_2d0);
    uStack_2f8 = uStack_298;
    uStack_300 = uStack_2a0;
    uStack_2e8 = uStack_288;
    dStack_2f0 = dStack_290;
    uStack_2d8 = uStack_278;
    uStack_2e0 = uStack_280;
    _CGAffineTransformScale(&uStack_2d0,0x3ff0000000000000,0xbff0000000000000,&uStack_300);
    uStack_298 = uStack_2c8;
    uStack_2a0 = uStack_2d0;
    uStack_288 = uStack_2b8;
    dStack_290 = dStack_2c0;
    uStack_278 = uStack_2a8;
    uStack_280 = uStack_2b0;
    func_0x00010c141ae0(lVar1);
    uStack_2f8 = uStack_298;
    uStack_300 = uStack_2a0;
    uStack_2e8 = uStack_288;
    dStack_2f0 = dStack_290;
    uStack_2d8 = uStack_278;
    uStack_2e0 = uStack_280;
    _CGAffineTransformRotate(&uStack_2d0,&uStack_300);
    uStack_298 = uStack_2c8;
    uStack_2a0 = uStack_2d0;
    uStack_288 = uStack_2b8;
    dStack_290 = dStack_2c0;
    uStack_278 = uStack_2a8;
    uStack_280 = uStack_2b0;
    dVar13 = dStack_2c0;
    func_0x00010c0e1c40(lVar1);
    uStack_2f8 = uStack_298;
    uStack_300 = uStack_2a0;
    uStack_2e8 = uStack_288;
    dStack_2f0 = dStack_290;
    uStack_2d8 = uStack_278;
    uStack_2e0 = uStack_280;
    dVar14 = dStack_290;
    _CGAffineTransformTranslate(&uStack_2d0,0,-dVar13,&uStack_300);
    uStack_298 = uStack_2c8;
    uStack_2a0 = uStack_2d0;
    uStack_288 = uStack_2b8;
    dStack_290 = dStack_2c0;
    uStack_278 = uStack_2a8;
    uStack_280 = uStack_2b0;
    uVar12 = uStack_2b0;
    dVar13 = dStack_2c0;
    _CGPathGetBoundingBox(lVar5);
    uStack_2c8 = uStack_298;
    uStack_2d0 = uStack_2a0;
    uStack_2b8 = uStack_288;
    dStack_2c0 = dStack_290;
    uStack_2a8 = uStack_278;
    uStack_2b0 = uStack_280;
    _CGRectApplyAffineTransform(&uStack_2d0);
    _CGPathRelease(lVar5);
    _CGRectContainsPoint(uVar12,dVar13,dVar14,param_4,uVar7,param_2);
    return uVar12;
  }
  return uVar12;
}



/* Entry: 104fc5e34; end: 104fc5fcf; -[GHGlyph isPointInBoundingBox:] */

void FUN_104fc5e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_5;
  uVar3 = param_1;
  func_0x00010bfb3a80();
  uVar2 = param_5;
  func_0x00010bfcd200(param_5);
  _CTFontCreatePathForGlyph(uVar1,uVar2,0);
  func_0x00010c12fee0(param_5);
  func_0x00010c12fee0(param_5);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dStack_a0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_80,uVar3,&uStack_b0);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  _CGAffineTransformScale(&uStack_b0,0x3ff0000000000000,0xbff0000000000000,&uStack_e0);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  dStack_70 = dStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  func_0x00010c141ae0(param_5);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  _CGAffineTransformRotate(&uStack_b0,&uStack_e0);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  dStack_70 = dStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  dVar4 = dStack_a0;
  func_0x00010c0e1c40(param_5);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  dVar5 = dStack_70;
  _CGAffineTransformTranslate(&uStack_b0,0,-dVar4,&uStack_e0);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  dStack_70 = dStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uVar2 = uStack_90;
  dVar4 = dStack_a0;
  _CGPathGetBoundingBox(uVar1);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  dStack_a0 = dStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  _CGRectApplyAffineTransform(&uStack_b0);
  _CGPathRelease(uVar1);
  _CGRectContainsPoint(uVar2,dVar4,dVar5,param_4,param_1,param_2);
  return;
}



/* Entry: 104fc5fd0; end: 104fc612f; -[GHGlyph addPathToContext:withSVGContext:] */

void FUN_104fc5fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c12fee0();
  func_0x00010c12fee0(param_2);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dStack_90 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_70,param_1,&uStack_a0);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  _CGAffineTransformScale(&uStack_a0,0x3ff0000000000000,0xbff0000000000000,&uStack_d0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  dStack_60 = dStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x00010c141ae0(param_2);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  _CGAffineTransformRotate(&uStack_a0,&uStack_d0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  dStack_60 = dStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  dVar2 = dStack_90;
  func_0x00010c0e1c40(param_2);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  _CGAffineTransformTranslate(&uStack_a0,0,-dVar2,&uStack_d0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  dStack_60 = dStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uVar1 = param_2;
  func_0x00010bfb3a80(param_2);
  func_0x00010bfcd200(param_2);
  _CTFontCreatePathForGlyph(uVar1,param_2,&uStack_70);
  _CGContextSaveGState(param_4);
  _CGContextAddPath(param_4,uVar1);
  _CGContextRestoreGState(param_4);
  _CGPathRelease(uVar1);
  return;
}



/* Entry: 104fc6130; end: 104fc613f; -[GHGlyph addGlyphsToArray:withSVGContext:] */

void FUN_104fc6130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_addObject__11259c1f0,param_1);
  return;
}



/* Entry: 104fc6140; end: 104fc6143; -[GHGlyph addGlyphsToContext:withSVGContext:] */

void FUN_104fc6140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addPathToContext_withSVGContext__11259c348);
  return;
}



/* Entry: 104fc6144; end: 104fc6147; -[GHGlyph renderIntoContext:withSVGContext:] */

void FUN_104fc6144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addGlyphsToContext_withSVGContex_11259bdc8);
  return;
}



/* Entry: 104fc6148; end: 104fc6157; -[GHGlyph font] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc6148(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b50);
}



/* Entry: 104fc6158; end: 104fc6167; -[GHGlyph glyph] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_104fc6158(long param_1)

{
  return *(undefined2 *)(param_1 + _DAT_112718b54);
}



/* Entry: 104fc6168; end: 104fc6177; -[GHGlyph textAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc6168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b64);
}



/* Entry: 104fc6178; end: 104fc618b; -[GHGlyph offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104fc6178(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112718b5c);
}



/* Entry: 104fc618c; end: 104fc619f; -[GHGlyph renderPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104fc618c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112718b48);
}



/* Entry: 104fc61a0; end: 104fc61af; -[GHGlyph rotationAngleInRadians] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc61a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b4c);
}



/* Entry: 104fc61b0; end: 104fc61bf; -[GHGlyph setRotationAngleInRadians:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc61b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112718b4c) = param_1;
  return;
}



/* Entry: 104fc61c0; end: 104fc61cf; -[GHGlyph width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc61c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b60);
}



/* Entry: 104fc61d0; end: 104fc61ef; -[GHGlyph transform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc61d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718b58);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fc61f0; end: 104fc61ff; -[GHGlyph fillDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc61f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b68);
}



/* Entry: 104fc6200; end: 104fc623f; -[GHGlyph setFillDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc6200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fc6240; end: 104fc624f; -[GHGlyph strokeDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc6240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b6c);
}



/* Entry: 104fc6250; end: 104fc628f; -[GHGlyph setStrokeDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc6250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fc6290; end: 104fc629f; -[GHGlyph strokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fc6290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b70);
}



/* Entry: 104fc62a0; end: 104fc62af; -[GHGlyph setStrokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc62a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112718b70) = param_1;
  return;
}



/* Entry: 104fc62b0; end: 104fc62ff; -[GHGlyph .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc62b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718b6c,0);
  _objc_storeStrong(param_1 + _DAT_112718b68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b64,0);
  return;
}



/* Entry: 104fc6300; end: 104fc636b; -[GHGradient useUserSpace] */

undefined8 FUN_104fc6300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104fc636c; end: 104fc68b7; -[GHGradient initWithDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104fc636c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double *pdVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1126e5728;
  puVar1 = &uStack_100;
  puVar26 = param_3;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDictionary__1125e0b28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(puVar2);
    func_0x00010bffc4a0();
    puVar26 = puVar1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar26;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    puVar26 = puVar1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar26;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar2);
    puVar26 = &uStack_140;
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar19 = *plStack_130;
      do {
        puVar26 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar19) {
            _objc_enumerationMutation(puVar2);
          }
          puVar28 = *(undefined **)(lStack_138 + (long)puVar26 * 8);
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar27 = puVar28;
          _objc_opt_isKindOfClass(puVar28,puVar7);
          if (((ulong)puVar27 & 1) != 0) {
            _objc_retain(puVar28);
            puVar7 = puVar28;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar7;
            func_0x00010c0720c0();
            puVar15 = puVar28;
            if ((int)puVar27 != 0) {
              puVar27 = puVar28;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain();
              puVar8 = puVar27;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar27;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar27;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010c08fa60();
              puVar13 = puVar9;
              puVar14 = puVar8;
              if (puVar11 != (undefined *)0x0) {
                puVar11 = PTR_PTR_1126b32a0;
                func_0x00010bf71f00();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar9;
                func_0x00010c08fa60();
                if (puVar12 == (undefined *)0x0) {
                  puVar13 = puVar11;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                }
                puVar9 = puVar8;
                func_0x00010c08fa60();
                if (puVar9 == (undefined *)0x0) {
                  puVar14 = puVar11;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar8);
                }
                _objc_release(puVar11);
              }
              puVar8 = puVar27;
              if ((puVar4 != (undefined8 *)0x0) &&
                 (puVar9 = puVar14, func_0x00010c0720c0(), (int)puVar9 != 0)) {
                puVar9 = puVar27;
                func_0x00010c0d3c80();
                _objc_release(puVar27);
                func_0x00010c220220(puVar9);
                puVar8 = puVar9;
                func_0x00010bf51e00();
                _objc_release(puVar9);
              }
              if ((puVar5 != (undefined8 *)0x0) &&
                 (puVar9 = puVar13, func_0x00010c0720c0(), (int)puVar9 != 0)) {
                puVar9 = puVar8;
                func_0x00010c0d3c80();
                _objc_release(puVar8);
                func_0x00010c220220(puVar9);
                puVar8 = puVar9;
                func_0x00010bf51e00();
                _objc_release(puVar9);
              }
              if (puVar8 != puVar27) {
                puVar9 = puVar28;
                func_0x00010c0d3c80();
                func_0x00010c220220();
                puVar15 = puVar9;
                func_0x00010bf51e00();
                _objc_release(puVar28);
                _objc_release(puVar9);
              }
              puVar28 = PTR_PTR_1126b3390;
              _objc_alloc(PTR_PTR_1126b3390);
              func_0x00010c00c560();
              func_0x00010befa120(puVar3);
              _objc_release(puVar28);
              _objc_release(puVar10);
              _objc_release(puVar13);
              _objc_release(puVar14);
              _objc_release(puVar8);
              _objc_release(puVar27);
            }
            _objc_release(puVar7);
            _objc_release(puVar15);
          }
          puVar26 = (undefined8 *)((long)puVar26 + 1);
        } while (puVar6 != puVar26);
        puVar26 = &uStack_140;
        puVar6 = puVar2;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    puVar7 = puVar3;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar3;
      func_0x00010bf51e00();
      uVar17 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718b74);
      *(undefined **)((long)puVar1 + (long)_DAT_112718b74) = puVar7;
      _objc_release(uVar17);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar26);
  uVar20 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar21 = (long)_DAT_112718b74;
  uVar17 = *(undefined8 *)((long)param_3 + lVar21);
  func_0x00010bf529e0(uVar17);
  _CFArrayCreateMutable(uVar20,uVar17,PTR__kCFTypeArrayCallBacks_11034ac10);
  lVar19 = *(long *)((long)param_3 + lVar21);
  func_0x00010bf529e0();
  lVar19 = lVar19 << 3;
  _malloc();
  puVar1 = puVar26;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c0720c0();
  if (((((ulong)puVar2 & 1) == 0) &&
      (puVar2 = puVar4, func_0x00010c08fa60(), puVar2 != (undefined8 *)0x0)) &&
     (puVar2 = puVar4, func_0x00010c08fa60(), puVar2 != (undefined8 *)0x0)) {
    puVar2 = puVar26;
    func_0x00010bf40f40(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1870c0(puVar26);
    _objc_release(puVar2);
  }
  dVar29 = 0.0;
  lVar22 = *(long *)((long)param_3 + lVar21);
  _objc_retain(lVar22);
  lVar16 = lVar22;
  func_0x00010bf52a60();
  lVar21 = lRam0000000000000000;
  if (lVar16 != 0) {
    lVar23 = 0;
    dVar30 = 0.0;
    do {
      lVar24 = 0;
      pdVar25 = (double *)(lVar19 + -8 + lVar23 * 8);
      dVar31 = dVar30;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(lVar22);
        }
        puVar27 = *(undefined **)(lVar24 * 8);
        puVar3 = puVar27;
        func_0x00010bf41640();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        _objc_release(puVar3);
        if (puVar7 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          _objc_retainAutorelease();
          func_0x00010bdc0fe0();
          _objc_release(puVar3);
        }
        _CFArrayAppendValue(uVar20,puVar7);
        func_0x00010c0e1c40(puVar27);
        dVar30 = 1.0;
        if ((dVar29 <= 1.0) && (dVar30 = dVar29, dVar29 < 0.0)) {
          dVar30 = 0.0;
        }
        if ((dVar30 < dVar31) && (dVar30 = dVar31, lVar23 + lVar24 != 0)) {
          dVar29 = *pdVar25 + -1e-12;
          *pdVar25 = dVar29;
        }
        pdVar25 = pdVar25 + 1;
        *pdVar25 = dVar30;
        lVar24 = lVar24 + 1;
        dVar31 = dVar30;
      } while (lVar16 != lVar24);
      lVar16 = lVar22;
      func_0x00010bf52a60();
      lVar23 = lVar23 + lVar24;
    } while (lVar16 != 0);
  }
  _objc_release(lVar22);
  func_0x00010c1870c0(puVar26);
  puVar2 = (undefined8 *)PTR_PTR_1126b3398;
  func_0x00010bf412e0(PTR_PTR_1126b3398);
  _CGGradientCreateWithColors();
  _CFRelease(uVar20);
  _free(lVar19);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar26);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar2;
  }
  ___stack_chk_fail();
  return puVar26;
}



/* Entry: 104fc68b8; end: 104fc6bfb; -[GHGradient newGradientRefWithSVGContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104fc68b8(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double *pdVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar11 = (long)_DAT_112718b74;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf529e0(uVar1);
  _CFArrayCreateMutable(uVar10,uVar1,PTR__kCFTypeArrayCallBacks_11034ac10);
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010bf529e0();
  lVar2 = lVar2 << 3;
  _malloc();
  puVar3 = param_3;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c0720c0();
  if ((((uVar4 & 1) == 0) && (uVar4 = uVar5, func_0x00010c08fa60(), uVar4 != 0)) &&
     (uVar4 = uVar5, func_0x00010c08fa60(), uVar4 != 0)) {
    puVar6 = param_3;
    func_0x00010bf40f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1870c0(param_3);
    _objc_release(puVar6);
  }
  dVar17 = 0.0;
  lVar12 = *(long *)(param_1 + lVar11);
  _objc_retain(lVar12);
  lVar7 = lVar12;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (lVar7 != 0) {
    lVar13 = 0;
    dVar18 = 0.0;
    do {
      lVar14 = 0;
      pdVar15 = (double *)(lVar2 + -8 + lVar13 * 8);
      dVar19 = dVar18;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        puVar16 = *(undefined **)(lVar14 * 8);
        puVar6 = puVar16;
        func_0x00010bf41640();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        _objc_release(puVar6);
        if (puVar8 == (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          _objc_retainAutorelease();
          func_0x00010bdc0fe0();
          _objc_release(puVar6);
        }
        _CFArrayAppendValue(uVar10,puVar8);
        func_0x00010c0e1c40(puVar16);
        dVar18 = 1.0;
        if ((dVar17 <= 1.0) && (dVar18 = dVar17, dVar17 < 0.0)) {
          dVar18 = 0.0;
        }
        if ((dVar18 < dVar19) && (dVar18 = dVar19, lVar13 + lVar14 != 0)) {
          dVar17 = *pdVar15 + -1e-12;
          *pdVar15 = dVar17;
        }
        pdVar15 = pdVar15 + 1;
        *pdVar15 = dVar18;
        lVar14 = lVar14 + 1;
        dVar19 = dVar18;
      } while (lVar7 != lVar14);
      lVar7 = lVar12;
      func_0x00010bf52a60();
      lVar13 = lVar13 + lVar14;
    } while (lVar7 != 0);
  }
  _objc_release(lVar12);
  func_0x00010c1870c0(param_3);
  puVar6 = PTR_PTR_1126b3398;
  func_0x00010bf412e0(PTR_PTR_1126b3398);
  _CGGradientCreateWithColors();
  _CFRelease(uVar10);
  _free(lVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar6;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 104fc6bfc; end: 104fc6bff; -[GHGradient fillPathToContext:withSVGContext:objectBoundingBox:] */

void FUN_104fc6bfc(void)

{
  return;
}



/* Entry: 104fc6c00; end: 104fc6c13; -[GHGradient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fc6c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b74,0);
  return;
}



/* Entry: 104fc6c14; end: 104fc6fbb; -[GHLinearGradient fillPathToContext:withSVGContext:objectBoundingBox:] */

void FUN_104fc6c14(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  dVar8 = 0.0;
  func_0x00010bf9ed40(PTR_PTR_1126b3398);
  dVar9 = 1.0;
  func_0x00010bf9ed40(PTR_PTR_1126b3398);
  dVar10 = 0.0;
  func_0x00010bf9ed40(PTR_PTR_1126b3398);
  dVar11 = 1.0;
  func_0x00010bf9ed40(PTR_PTR_1126b3398);
  _CGContextSaveGState(param_7);
  uVar1 = param_7;
  _CGContextIsPathEmpty();
  if ((uVar1 & 1) == 0) {
    _CGContextClip(param_7);
  }
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    if ((dVar9 - dVar8 == 0.0) || (dVar11 - dVar10 == 0.0)) {
      dVar8 = param_1 + param_3 * dVar8;
      dVar10 = param_2 + param_4 * dVar10;
      dVar9 = param_1 + param_3 * dVar9;
      dVar11 = param_2 + param_4 * dVar11;
    }
    else {
      _CGContextTranslateCTM(param_1,param_2,param_7);
      _CGContextScaleCTM(param_3,param_4,param_7);
    }
  }
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar6;
  func_0x00010c08fa60();
  if ((uVar1 == 0) || (uVar1 = uVar6, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    uVar1 = uVar5;
    func_0x00010c08fa60();
    dVar12 = dVar10;
    if (uVar1 != 0) {
      dVar12 = dVar11;
    }
  }
  else {
    uVar1 = uVar6;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      FUN_104fc1ca8(&uStack_e0,uVar6);
    }
    dVar11 = dVar11 - dVar10;
    _CGRectStandardize(dVar8,dVar10,dVar9 - dVar8,dVar11);
    uStack_108 = uStack_d8;
    uStack_110 = uStack_e0;
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    _CGRectApplyAffineTransform(&uStack_110);
    dVar9 = dVar8;
    dVar12 = dVar10 + dVar11;
  }
  func_0x00010c0d8960(param_5);
  _objc_release(param_8);
  _CGContextDrawLinearGradient(dVar8,dVar10,dVar9,dVar12,param_7,param_5,0);
  _CGGradientRelease(param_5);
  _CGContextRestoreGState(param_7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104fc6fbc; end: 104fc731f; -[GHRadialGradient fillPathToContext:withSVGContext:objectBoundingBox:] */

void FUN_104fc6fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    _objc_retain(uVar2);
    _objc_release(uVar5);
    uVar5 = uVar2;
  }
  uVar1 = uVar6;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    _objc_retain(uVar3);
    _objc_release(uVar6);
    uVar6 = uVar3;
  }
  uVar8 = 0x3fe0000000000000;
  func_0x00010bf9ed40(0x3fe0000000000000,PTR_PTR_1126b3398);
  uVar9 = 0x3fe0000000000000;
  func_0x00010bf9ed40(0x3fe0000000000000,PTR_PTR_1126b3398);
  uVar10 = 0x3fe0000000000000;
  func_0x00010bf9ed40(0x3fe0000000000000,PTR_PTR_1126b3398);
  uVar11 = 0x3fe0000000000000;
  func_0x00010bf9ed40(0x3fe0000000000000,PTR_PTR_1126b3398);
  uVar12 = 0x3fe0000000000000;
  func_0x00010bf9ed40(0x3fe0000000000000,PTR_PTR_1126b3398);
  _CGContextSaveGState(param_7);
  uVar1 = param_5;
  func_0x00010c290e20();
  if ((uVar1 & 1) == 0) {
    _CGContextTranslateCTM(param_1,param_2,param_7);
    _CGContextScaleCTM(param_3,param_4,param_7);
  }
  uVar1 = param_7;
  _CGContextIsPathEmpty();
  if ((uVar1 & 1) == 0) {
    _CGContextClip(param_7);
  }
  uVar1 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar7;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    FUN_104fc1ca8(&uStack_d8,uVar7);
    uStack_108 = uStack_d0;
    uStack_110 = uStack_d8;
    uStack_f8 = uStack_c0;
    uStack_100 = uStack_c8;
    uStack_e8 = uStack_b0;
    uStack_f0 = uStack_b8;
    _CGContextConcatCTM(param_7,&uStack_110);
  }
  func_0x00010c0d8960(param_5);
  _CGContextDrawRadialGradient(uVar8,uVar9,0,uVar11,uVar12,uVar10,param_7,param_5,3);
  _CGGradientRelease(param_5);
  _CGContextRestoreGState(param_7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  return;
}



/* Entry: 104fc7320; end: 104fc7513; -[GHGradientStop colorWithSVGContext:] */

void FUN_104fc7320(float param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar1;
  func_0x00010c08fa60();
  puVar6 = puVar2;
  puVar7 = puVar3;
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010bf71f00(PTR_PTR_1126b32a0,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = puVar4;
      func_0x00010c0dff20(puVar4,param_3,&PTR____CFConstantStringClassReference_110dbf9f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = puVar3;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puVar7 = puVar4;
      func_0x00010c0dff20(puVar4,param_3,&PTR____CFConstantStringClassReference_110dbf9d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
  uVar8 = param_4;
  func_0x00010bf40f40(param_4,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c08fa60();
  uVar9 = uVar8;
  if ((puVar2 != (undefined *)0x0) && (func_0x00010bfb2c80(puVar6), param_1 < 1.0)) {
    func_0x00010bfb2c80(puVar6);
    func_0x00010bf414e0((double)param_1,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 104fc7514; end: 104fc761b; -[GHGradientStop offset] */

double FUN_104fc7514(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfdcf80(uVar2,param_3,&PTR____CFConstantStringClassReference_110dbfef8);
  if (((int)uVar1 == 0) || (uVar1 = uVar2, func_0x00010c08fa60(), uVar1 < 2)) {
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar1);
  }
  else {
    uVar1 = uVar2;
    func_0x00010c08fa60(uVar2);
    param_2 = uVar2;
    func_0x00010c260c20(uVar2,param_3,uVar1 - 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = param_1 * 0.01;
  }
  _objc_release(param_2);
  _objc_release(uVar2);
  return (double)param_1;
}



/* Entry: 104fc761c; end: 104fc772b;  */

void FUN_104fc761c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11f340();
  lVar4 = param_2;
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  while (lVar5 = lVar4, uVar2 != 0x7fffffffffffffff) {
    func_0x00010c16b800(param_1);
    if (uVar3 <= param_2 + uVar2) break;
    uVar1 = param_1;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11f380();
    lVar4 = lVar5;
    _objc_release(uVar1);
    param_2 = lVar5;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fc772c; end: 104fc7827;  */

void FUN_104fc772c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c11f340();
  if (lVar1 == 0x7fffffffffffffff) {
    func_0x00010c0d3c80();
    func_0x00010c08fa60();
    lVar1 = param_1;
    func_0x00010c11f380();
    while ((lVar1 != 0x7fffffffffffffff && (func_0x00010c130d20(param_1), lVar1 != 0))) {
      lVar1 = param_1;
      func_0x00010c11f380();
    }
    lVar1 = param_1;
    func_0x00010bf51e00(param_1);
    _objc_release(param_1);
    param_1 = lVar1;
  }
  else {
    func_0x00010bf51e00(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104fc7828; end: 104fc7833; -[PathValidationResult rangeOfError] */

undefined1  [16] FUN_104fc7828(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 104fc7834; end: 104fc783b; -[PathValidationResult setRangeOfError:] */

void FUN_104fc7834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}



/* Entry: 104fc783c; end: 104fc7843; -[PathValidationResult errorCode] */

undefined4 FUN_104fc783c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104fc7844; end: 104fc784b; -[PathValidationResult setErrorCode:] */

void FUN_104fc7844(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


