/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c6b62c; end: 106c6b69f;  */

void FUN_106c6b62c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d1d38;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c0df580(param_1);
  lVar3 = param_1;
  func_0x00010c2807a0();
  _objc_release(param_1);
  if (2 < lVar3 - 1U) {
    lVar3 = 0;
  }
  func_0x00010c030620(puVar1,param_2,lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c6b6a0; end: 106c6bc9f;  */

void FUN_106c6b6a0(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = PTR_PTR_1126d1d50;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    uVar2 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c112a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d1d20;
    _objc_alloc(PTR_PTR_1126d1d20);
    uVar5 = uVar3;
    func_0x00010c0cd460(uVar3);
    uVar6 = uVar3;
    func_0x00010bf5de80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c09e220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bf80(puVar4,param_2,uVar5,uVar6,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c2608a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_106c6b62c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0df100(param_1);
    uVar5 = param_1;
    func_0x00010c0f6960();
    _objc_release(param_1);
    if (uVar5 != 2) {
      uVar5 = (ulong)(uVar5 == 1);
    }
    func_0x00010c01b880(puVar1,param_2,uVar2,puVar4,uVar7,uVar8,uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c6bca0; end: 106c6c0bf;  */

void FUN_106c6bca0(undefined *param_1,undefined8 param_2)

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
  undefined8 uVar15;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c71d0;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c115f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0cd460();
  puVar5 = param_1;
  func_0x00010c115f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf5de80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf5de80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000106c6aa80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bf60((double)(long)puVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2608a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_106c6afc8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c115f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e7a0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d1d40;
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010c124e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072980();
  puVar6 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f280();
  puVar7 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fb60();
  func_0x00010c03d8a0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c1daa80(puVar2);
  uVar15 = param_2;
  func_0x00010bf8d460();
  if ((int)uVar15 != 0) {
    puVar3 = param_1;
    func_0x00010c115f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c1183e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    FUN_106c6ac4c(puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_106c6adc4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ee40(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf81300();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar15 = param_2;
    func_0x00010bf8d3e0();
    if ((int)uVar15 == 0) goto LAB_106c6c078;
    puVar3 = param_1;
    func_0x00010c115f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c069aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_106c6adc4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ee40(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
LAB_106c6c078:
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c6c0c0; end: 106c6c20b;  */

void FUN_106c6c0c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c116760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0fe140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c6c20c;
    puStack_50 = &UNK_11096ca10;
    _objc_retain(param_1);
    lVar2 = lVar1;
    lStack_48 = param_1;
    func_0x000100504554(lVar1,&puStack_68);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d1d48;
    _objc_alloc(PTR_PTR_1126d1d48);
    lVar1 = param_1;
    func_0x00010c116760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c117000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c260040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a9e0(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c6c20c; end: 106c6c27b;  */

void FUN_106c6c20c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf8d500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c6bca0(param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c6c27c; end: 106c6c5d7;  */

undefined * FUN_106c6c27c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_140,auStack_100,0x10);
  if (lVar1 != 0) {
    uVar18 = 0;
    lVar14 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        uVar16 = *(ulong *)(lStack_138 + lVar15 * 8);
        uVar2 = uVar16;
        func_0x00010c115f60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c07fb60();
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          if (uVar18 != 0) {
            uVar2 = uVar16;
            func_0x00010c115f60();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c112a80();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0cd460();
            uVar5 = uVar18;
            func_0x00010c115f60();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c112a80();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0cd460();
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((long)uVar7 <= (long)uVar4) goto LAB_106c6c3e8;
          }
          _objc_retain(uVar16);
          _objc_release(uVar18);
          uVar18 = uVar16;
        }
LAB_106c6c3e8:
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar1 != 0);
    if (uVar18 != 0) {
      puVar17 = PTR_PTR_1126c71d0;
      _objc_alloc(PTR_PTR_1126c71d0);
      uVar2 = uVar18;
      func_0x00010c115f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar3;
      func_0x00010c0cd460();
      uVar4 = uVar18;
      func_0x00010c115f60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar18;
      func_0x00010c115f60(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x000106c6aa80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar18;
      func_0x00010c115f60(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02bf60((double)(long)uVar16,puVar17,param_2,uVar6,uVar10,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar18);
      goto LAB_106c6c58c;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_106c6c58c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  if (param_1 - 1U < 8) {
    return (undefined *)(ulong)*(uint *)(&UNK_10ddea01c + (param_1 - 1U) * 4);
  }
  return (undefined *)0x2;
}



/* Entry: 106c6c5d8; end: 106c6c613;  */

undefined4 FUN_106c6c5d8(long param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined4 *)(&UNK_10ddea01c + (param_1 - 1U) * 4);
  }
  return 2;
}



/* Entry: 106c6c614; end: 106c6cbef;  */

void FUN_106c6c614(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf6a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c257f60();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar15;
  func_0x00010c08fa60();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar15);
  uVar5 = param_1;
  puVar3 = puVar4;
  FUN_106c773c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3488;
  _objc_alloc();
  func_0x00010c03fc80();
  _objc_retain(uVar5);
  if (uVar5 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf87dc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(uVar5);
    func_0x00010c0df780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar3);
    uVar7 = uVar5;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    _objc_release(uVar7);
    if (uVar8 != 0) {
      uVar7 = uVar5;
      func_0x00010c09e4e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(uVar7);
    }
    uVar7 = uVar5;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class();
    uVar7 = uVar8;
    _objc_opt_isKindOfClass();
    if ((uVar7 & 1) != 0) {
      uVar7 = uVar8;
      func_0x00010bf87dc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(uVar7);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf3ec40(uVar8);
      func_0x00010c0df780(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar15);
      uVar7 = uVar8;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c08fa60();
      _objc_release(uVar7);
      if (uVar9 != 0) {
        uVar7 = uVar8;
        func_0x00010c09e4e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar7);
      }
    }
    uVar7 = uVar5;
    FUN_106c77340();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf529e0();
    if (uVar9 != 0) {
      puVar15 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar7);
      uVar9 = uVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar9 != 0) {
        uVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar7);
          }
          puVar10 = puVar15;
          func_0x00010bf4b900();
          if (((ulong)puVar10 & 1) == 0) {
            uVar11 = uVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c082de0();
            _objc_release(puVar12);
            if ((int)puVar10 != 0) {
              func_0x00010c1d0640(puVar6);
            }
            _objc_release(uVar11);
          }
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
        uVar9 = uVar7;
        func_0x00010bf52a60();
      }
      _objc_release(uVar7);
      _objc_release(puVar15);
    }
    puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 == (undefined *)0x0) {
      uVar9 = uVar5;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
    else {
      _objc_alloc();
      func_0x00010c008340();
    }
    _objc_release(puVar10);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar6);
  }
  _objc_release(uVar5);
  func_0x00010c197240(puVar4);
  _objc_release(puVar15);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar15 = PTR_PTR_1126d1d50;
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      _objc_retain(puVar3);
      _objc_alloc(puVar15);
      puVar4 = puVar3;
      func_0x00010bfe5ec0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c112a80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126d1d20;
      _objc_alloc(PTR_PTR_1126d1d20);
      func_0x00010c0cd460(puVar6);
      puVar12 = puVar6;
      func_0x00010bf5de80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c09e220(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02bf80(puVar10);
      _objc_release(puVar2);
      _objc_release(puVar12);
      puVar12 = puVar3;
      func_0x00010c2608a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar12;
      FUN_106c6b62c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df100(puVar3);
      func_0x00010c0f6960();
      _objc_release(puVar3);
      func_0x00010c01b880(puVar15);
      _objc_release(puVar2);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar4);
      puVar4 = puVar15;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c6cbf0; end: 106c6cbf7;  */

void FUN_106c6cbf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d1d50;
  puVar4 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    lVar2 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c112a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d1d20;
    _objc_alloc(PTR_PTR_1126d1d20);
    func_0x00010c0cd460(lVar3);
    lVar5 = lVar3;
    func_0x00010bf5de80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c09e220(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bf80(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010c2608a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    FUN_106c6b62c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df100(param_2);
    func_0x00010c0f6960();
    _objc_release(param_2);
    func_0x00010c01b880(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c6cbf8; end: 106c6d2a3; -[SCCPlusProductImpl initWithPlanRefId:productHandler:eligibleOfferInfo:promotionalOffer:requiresEmail:performer:delegate:] */

undefined8 *
FUN_106c6cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,long param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_100 = PTR_PTR_1126f5fc0;
  puVar2 = &uStack_108;
  uStack_108 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 3) = param_7;
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 5,param_9);
    _objc_retain(param_3);
    uVar3 = puVar2[7];
    puVar2[7] = param_3;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c2608a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    FUN_106c6afc8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[8];
    puVar2[8] = uVar5;
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126c71d0;
    _objc_alloc();
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010c0cd460();
    uVar7 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010bfed8e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x000106c6aa80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_4;
    func_0x00010bfed8e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bf60((double)(long)uVar5);
    uVar3 = puVar2[9];
    puVar2[9] = puVar6;
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar17);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c26e7a0();
    uVar1 = (undefined4)uVar17;
    if (3 < uVar17) {
      uVar1 = 1;
    }
    *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c06f280();
    *(char *)(puVar2 + 6) = (char)uVar17;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c072980();
    *(char *)((long)puVar2 + 0x31) = (char)uVar17;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c07fb60();
    *(char *)((long)puVar2 + 0x32) = (char)uVar17;
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_4;
    func_0x00010bfed8e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf018a0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar6;
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010bfa0840();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar17 == 0) {
      uVar17 = puVar2[0xd];
      puVar2[0xd] = 0;
    }
    else {
      uVar17 = param_4;
      func_0x00010bfed8e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa0840();
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar2[0xd];
      puVar2[0xd] = puVar6;
      _objc_release(uVar3);
    }
    _objc_release(uVar17);
    _objc_release(uVar4);
    if ((param_6 != 0) && (uVar3 = param_5, func_0x00010bf8d460(), (int)uVar3 != 0)) {
      uVar4 = param_4;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      puStack_d8 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_106c6d6c0;
      uStack_88 = 0x106c6d6d0;
      uStack_80 = 0;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106c6d6d8;
      puStack_b8 = &UNK_110842b58;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x106c6d710;
      puStack_e0 = &UNK_11096caa0;
      puStack_b0 = puStack_d8;
      puStack_a0 = puStack_d8;
      func_0x00010c0bf820(param_6);
      uVar3 = puStack_a0[5];
      _objc_retain(uVar3);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
      _objc_release(param_6);
      uVar17 = uVar4;
      FUN_106c6ac4c(uVar4,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
      if (uVar17 != 0) {
        _objc_retain(param_6);
        uVar3 = puVar2[2];
        puVar2[2] = param_6;
        _objc_release(uVar3);
        uVar4 = uVar17;
        FUN_106c6adc4();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar2[10];
        puVar2[10] = uVar4;
        _objc_release(uVar3);
      }
      _objc_release(uVar17);
    }
    if ((puVar2[10] == 0) && (uVar3 = param_5, func_0x00010bf8d3e0(), (int)uVar3 != 0)) {
      uVar4 = param_4;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar4;
      func_0x00010c069aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar17;
      FUN_106c6adc4();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar2[10];
      puVar2[10] = uVar5;
      _objc_release(uVar3);
      _objc_release(uVar17);
      _objc_release(uVar4);
    }
    uVar4 = param_4;
    func_0x00010c11e080();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0xb];
    puVar2[0xb] = uVar7;
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar17);
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106c6d2a4; end: 106c6d2e3;  */

void FUN_106c6d2a4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0();
  uVar1 = 2;
  if (param_2 != 2) {
    uVar1 = param_2 == 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_numberWithInt__1126157f0,uVar1);
  return;
}



/* Entry: 106c6d2e4; end: 106c6d487; -[SCCPlusProductImpl purchaseWithCallback:] */

void FUN_106c6d2e4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) goto LAB_106c6d3d4;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10bfc0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_106c6d368;
    puVar3 = PTR_PTR_1126b3488;
    _objc_alloc(PTR_PTR_1126b3488);
    func_0x00010c03fc80();
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
  }
  else {
LAB_106c6d368:
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11bca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c297260(uVar4);
    _objc_release(uVar4);
    puVar3 = param_3;
  }
  _objc_release(puVar3);
LAB_106c6d3d4:
  _objc_release(param_3);
  return;
}



/* Entry: 106c6d488; end: 106c6d48f; -[SCCPlusProductImpl refId] */

undefined8 FUN_106c6d488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106c6d490; end: 106c6d497; -[SCCPlusProductImpl setRefId:] */

void FUN_106c6d490(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c6d498; end: 106c6d49f; -[SCCPlusProductImpl period] */

undefined8 FUN_106c6d498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106c6d4a0; end: 106c6d4cf; -[SCCPlusProductImpl setPeriod:] */

void FUN_106c6d4a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c6d4d0; end: 106c6d4d7; -[SCCPlusProductImpl price] */

undefined8 FUN_106c6d4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106c6d4d8; end: 106c6d507; -[SCCPlusProductImpl setPrice:] */

void FUN_106c6d4d8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c6d508; end: 106c6d50f; -[SCCPlusProductImpl discount] */

undefined8 FUN_106c6d508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106c6d510; end: 106c6d53f; -[SCCPlusProductImpl setDiscount:] */

void FUN_106c6d510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c6d540; end: 106c6d547; -[SCCPlusProductImpl queueStateObservable] */

undefined8 FUN_106c6d540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106c6d548; end: 106c6d577; -[SCCPlusProductImpl setQueueStateObservable:] */

void FUN_106c6d548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c6d578; end: 106c6d57f; -[SCCPlusProductImpl tier] */

undefined4 FUN_106c6d578(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* Entry: 106c6d580; end: 106c6d587; -[SCCPlusProductImpl setTier:] */

void FUN_106c6d580(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 106c6d588; end: 106c6d58f; -[SCCPlusProductImpl isConsumable] */

undefined1 FUN_106c6d588(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 106c6d590; end: 106c6d597; -[SCCPlusProductImpl setIsConsumable:] */

void FUN_106c6d590(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106c6d598; end: 106c6d59f; -[SCCPlusProductImpl isFamilyPlan] */

undefined1 FUN_106c6d598(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 106c6d5a0; end: 106c6d5a7; -[SCCPlusProductImpl setIsFamilyPlan:] */

void FUN_106c6d5a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 106c6d5a8; end: 106c6d5af; -[SCCPlusProductImpl isStorage] */

undefined1 FUN_106c6d5a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 106c6d5b0; end: 106c6d5b7; -[SCCPlusProductImpl setIsStorage:] */

void FUN_106c6d5b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 106c6d5b8; end: 106c6d5bf; -[SCCPlusProductImpl allowedMemoriesStorageGb] */

undefined8 FUN_106c6d5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106c6d5c0; end: 106c6d5ef; -[SCCPlusProductImpl setAllowedMemoriesStorageGb:] */

void FUN_106c6d5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c6d5f0; end: 106c6d5f7; -[SCCPlusProductImpl familyPlanMaxParticipants] */

undefined8 FUN_106c6d5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106c6d5f8; end: 106c6d627; -[SCCPlusProductImpl setFamilyPlanMaxParticipants:] */

void FUN_106c6d5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c6d628; end: 106c6d6bf; -[SCCPlusProductImpl .cxx_destruct] */

void FUN_106c6d628(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6d6c0; end: 106c6d6d7;  */

void FUN_106c6d6c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c6d6d8; end: 106c6d74f;  */

void FUN_106c6d6d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c6d750; end: 106c6d8bb; -[SCPlusSyncStoreKitProductHandler initWithProductInfo:storeKitService:grpcClient:] */

undefined8 *
FUN_106c6d750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5fc8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2798a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c6d8bc; end: 106c6da0b;  */

void FUN_106c6d8bc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106c6d99c;
  puStack_40 = &UNK_110860928;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x0001006372a4(param_2,&puStack_58);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0705e0();
  }
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c6da0c; end: 106c6db4b; -[SCPlusSyncStoreKitProductHandler purchaseWithPromotionalOffer:] */

void FUN_106c6da0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c124f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c247520();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296a40(uVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c6db4c;
  puStack_88 = &UNK_11096cb00;
  uStack_80 = uVar3;
  uStack_78 = uVar2;
  uStack_70 = param_3;
  uStack_68 = uVar1;
  uStack_60 = uVar6;
  uStack_58 = uVar4;
  _objc_retain(param_3);
  uVar4 = uVar5;
  func_0x00010bfb2660(uVar5,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c6db4c; end: 106c6de6f;  */

void FUN_106c6db4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantDictionary_111174c48;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174c48);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c1d0640(ppuVar8);
    }
    ppuVar3 = ppuVar8;
    func_0x00010c1d0640(ppuVar8);
    FUN_106c776b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar8);
    _objc_release(ppuVar3);
    ppuVar4 = (undefined **)PTR_PTR_1126ae558;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e389b8;
    FUN_106c77258(&PTR____CFConstantStringClassReference_110e389b8,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x30);
    _objc_retain(uVar6);
    _objc_retain(lVar2);
    _objc_retain(lVar7);
    ppuVar8 = (undefined **)PTR_PTR_1126ae558;
    if (lVar7 == 0) {
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_106c6df48;
      uStack_88 = 0x106c6df58;
      puStack_80 = (undefined *)0x0;
      _objc_retain(uVar6);
      _objc_retain(lVar2);
      func_0x00010c0bf820(lVar7);
      ppuVar8 = (undefined **)puStack_a0[5];
      _objc_retain(ppuVar8);
      _objc_release(lVar2);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_a8,8);
      puVar5 = puStack_80;
    }
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(lVar2);
    ppuVar4 = ppuVar8;
    func_0x00010bfb2660(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar8);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106c6de70; end: 106c6deef;  */

void FUN_106c6de70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c6def0; end: 106c6def7; -[SCPlusSyncStoreKitProductHandler info] */

undefined8 FUN_106c6def0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c6def8; end: 106c6deff; -[SCPlusSyncStoreKitProductHandler queueStateObservable] */

undefined8 FUN_106c6def8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c6df00; end: 106c6df47; -[SCPlusSyncStoreKitProductHandler .cxx_destruct] */

void FUN_106c6df00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6df48; end: 106c6df5f;  */

void FUN_106c6df48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c6df60; end: 106c6e22f;  */

void FUN_106c6df60(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x28);
  _objc_retain(uVar9);
  _objc_retain(lVar11);
  _objc_retain(param_2);
  lVar1 = lVar11;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar8 = PTR_PTR_1126ae558;
    puVar7 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR_PTR_1126d1d58;
    _objc_opt_new();
    func_0x00010c1e3bc0();
    func_0x00010c1e4c00(puVar7);
    puVar2 = PTR_PTR_1126d1d60;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c0d3c80();
    func_0x00010c1e4c20(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_retain(param_2);
    _objc_opt_class(PTR_PTR_1126d1d68);
    func_0x00010c0199c0(puVar4);
    uVar5 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(uVar5);
    puVar8 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar7);
  _objc_release(param_2);
  _objc_release(lVar11);
  _objc_release(uVar9);
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar8;
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126ae558;
  puVar7 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar8;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106c6e230; end: 106c6e2a7;  */

void FUN_106c6e230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c6e2a8; end: 106c6e4d3;  */

undefined1 * FUN_106c6e2a8(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *unaff_x19;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  if (param_3 == (undefined *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c118400();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          lVar7 = *(long *)(lStack_128 + (long)puVar9 * 8);
          lVar2 = lVar7;
          func_0x00010c1183e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c1183c0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0720c0();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar4 != 0) {
            func_0x00010c1183a0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar7;
            FUN_106c6b090();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            if (lVar2 != 0) {
              param_1 = *(undefined **)(param_1 + 0x20);
              puVar1 = PTR_PTR_1126ae750;
              func_0x00010c0ec800();
              _objc_retainAutoreleasedReturnValue();
              param_3 = puVar1;
              func_0x00010bf43d60(param_1);
              _objc_release(puVar1);
              _objc_release(lVar2);
              unaff_x19 = param_2;
              goto LAB_106c6e494;
            }
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = param_2;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_2);
    unaff_x19 = *(undefined **)(param_1 + 0x20);
    param_2 = PTR_PTR_1126ae750;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_2;
    func_0x00010bf43d60(unaff_x19);
    param_1 = param_2;
LAB_106c6e494:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_2;
    }
  }
  else {
    param_2 = *(undefined **)(param_1 + 0x20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_completeWithError__1125ae8d0);
      return param_2;
    }
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_160;
  pcStack_138 = FUN_106c6e4d4;
  puStack_150 = param_1;
  puStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_158 = PTR_PTR_1126f5fd0;
  puStack_160 = param_2;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = param_3;
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106c6e4d4; end: 106c6e547; -[SCCPlusBillboardStringsServiceImpl initWithBillboardStringsServices:] */

undefined1 * FUN_106c6e4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5fd0;
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



/* Entry: 106c6e548; end: 106c6e64b; -[SCCPlusBillboardStringsServiceImpl getStringsWithKeys:callback:] */

void FUN_106c6e548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c25d220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106c6e64c;
  puStack_50 = &UNK_11096cb60;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(uVar2,param_2,&puStack_68,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106c6e64c; end: 106c6e6ab;  */

void FUN_106c6e64c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    FUN_106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106c6e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 106c6e6ac; end: 106c6e857; -[SCCPlusBillboardStringsServiceImpl getStringsSyncWithKeys:] */

void FUN_106c6e6ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c25d220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = lVar3;
      func_0x00010c25da40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 != 0) {
        func_0x00010c1d0640(puVar4);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106c6e858; end: 106c6e863; -[SCCPlusBillboardStringsServiceImpl .cxx_destruct] */

void FUN_106c6e858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6e864; end: 106c6e8e7; -[SCCPlusDeeplinkHandlerImpl initWithDeepLinkHandlingServices:sourceType:] */

undefined1 *
FUN_106c6e864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5fd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c6e8e8; end: 106c6ea73; -[SCCPlusDeeplinkHandlerImpl openWithUrl:] */

void FUN_106c6e8e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x00010c13b080(PTR_PTR_1126b3540);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b1588;
    _objc_opt_new();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x106c6e9c4;
    puStack_50 = &UNK_110848ba8;
    uStack_48 = param_1;
    puStack_40 = puVar1;
    puStack_38 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_retain(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c6ea74; end: 106c6eb27;  */

void FUN_106c6ea74(long param_1,undefined8 param_2)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c6eb28;
  puStack_20 = &UNK_110842e18;
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106c6eb38;
  puStack_48 = &UNK_1108480f8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106c6eb48;
  puStack_70 = &UNK_110849810;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106c6eb54;
  puStack_98 = &UNK_110842e18;
  uStack_68 = uStack_90;
  uStack_40 = uStack_90;
  uStack_18 = uStack_90;
  func_0x00010c0be280(param_2,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 106c6eb28; end: 106c6eb63;  */

void FUN_106c6eb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 106c6eb64; end: 106c6eb6f; -[SCCPlusDeeplinkHandlerImpl .cxx_destruct] */

void FUN_106c6eb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6eb70; end: 106c6ec73; -[SCCPlusGiftingPagePresenterImpl initWithUIContainer:giftingScopeExposer:context:loggingContext:presentationType:] */

undefined1 *
FUN_106c6eb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5fe0;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c6ec74; end: 106c6eceb; -[SCCPlusGiftingPagePresenterImpl presentGiftingPage] */

void FUN_106c6ec74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126d1d70;
  _objc_alloc(PTR_PTR_1126d1d70);
  func_0x00010c056ee0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c6ecec; end: 106c6ed33; -[SCCPlusGiftingPagePresenterImpl plusGiftingPageDidDismiss] */

void FUN_106c6ecec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c6ed34; end: 106c6ed7b; -[SCCPlusGiftingPagePresenterImpl .cxx_destruct] */

void FUN_106c6ed34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6ed7c; end: 106c6ee57; -[SCCPlusInAppBrowserPresenterImpl initWithSimpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:presentedModally:uiContainer:] */

undefined1 *
FUN_106c6ed7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5fe8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c6ee58; end: 106c6ee63; -[SCCPlusInAppBrowserPresenterImpl initWithSimpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:uiContainer:] */

void FUN_106c6ee58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c046950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSimpleWebBrowserScopeExp_1125ef450,param_3,param_4,1,param_5);
  return;
}



/* Entry: 106c6ee64; end: 106c6eeeb; -[SCCPlusInAppBrowserPresenterImpl presentWithUrl:] */

void FUN_106c6ee64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106c6eeec;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 106c6eeec; end: 106c6ef9f;  */

void FUN_106c6eeec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar2 = *(long *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010bf24600(uVar3,param_2,puVar1,*(undefined8 *)(lVar2 + 0x18),lVar2,
                        *(undefined1 *)(lVar2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c6efa0; end: 106c6f047; -[SCCPlusInAppBrowserPresenterImpl presentSystemBrowserWithUrl:] */

void FUN_106c6efa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_106c6f048;
      puStack_30 = &UNK_110842e18;
      puStack_28 = puVar2;
      func_0x000100162d98("APPSTORE",&puStack_48);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c6f048; end: 106c6f0d7;  */

void FUN_106c6f048(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf2cf00();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106c6f0d8; end: 106c6f11f; -[SCCPlusInAppBrowserPresenterImpl didDismiss] */

void FUN_106c6f0d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c6f120; end: 106c6f15b; -[SCCPlusInAppBrowserPresenterImpl .cxx_destruct] */

void FUN_106c6f120(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c6f15c; end: 106c6f2cf; -[SCCPlusLocalInAppPurchaseServiceSyncImpl initWithSyncServices:performerProvider:circumstanceEngine:grpcClient:bypassCache:delegate:attributedPage:] */

undefined1 *
FUN_106c6f15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f5ff0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c6f2d0; end: 106c6f3db; -[SCCPlusLocalInAppPurchaseServiceSyncImpl getAvailibilityWithCallback:] */

void FUN_106c6f2d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106c6f364;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c6f3dc; end: 106c6f5ab; -[SCCPlusLocalInAppPurchaseServiceSyncImpl fetchProductsWithCallback:] */

void FUN_106c6f3dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = uVar5;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010c2665c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfaabc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2665c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfaabe0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c297260(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c6f5ac; end: 106c6f7cf;  */

void FUN_106c6f5ac(long param_1,undefined **param_2,undefined **param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    lVar5 = param_1 + 0x40;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7d178;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7d178);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      FUN_106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar4);
      _objc_release(ppuVar4);
    }
    else {
      uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bf1f440();
      ppuVar3 = param_2;
      func_0x00010c0fe140(param_2);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106c6f7d0;
      puStack_80 = &UNK_11096cb90;
      _objc_retain(param_2);
      ppuStack_78 = param_2;
      uStack_58 = uVar1;
      _objc_copyWeak(auStack_60,param_1 + 0x40);
      uStack_68 = *(undefined8 *)(param_1 + 0x30);
      uStack_70 = *(undefined8 *)(param_1 + 0x28);
      ppuVar4 = ppuVar3;
      func_0x000100504554(ppuVar3,&puStack_98);
      _objc_release(ppuVar3);
      puVar2 = PTR_PTR_1126d1d78;
      _objc_alloc(PTR_PTR_1126d1d78);
      ppuVar3 = param_2;
      func_0x00010c260040(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03aa20(puVar2);
      _objc_release(ppuVar3);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar2,0);
      _objc_release(puVar2);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_60);
      ppuVar3 = ppuStack_78;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x38);
    ppuVar3 = param_3;
    FUN_106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar3);
  }
  _objc_release(ppuVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106c6f7d0; end: 106c6f86f;  */

void FUN_106c6f7d0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf8d500(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = param_2;
  FUN_106c6f870(param_2,uVar4,uVar1,lVar2,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c6f870; end: 106c6fa37;  */

void FUN_106c6f870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c1162a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c115f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfd32e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  lVar2 = param_1;
  func_0x00010c1183e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b34a0;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c1183e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c124f20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b34a8;
  _objc_alloc(PTR_PTR_1126b34a8);
  lVar2 = param_1;
  func_0x00010c124e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0369e0(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c6fa38; end: 106c6fc77; -[SCCPlusLocalInAppPurchaseServiceSyncImpl fetchReferralProductsWithReferralId:] */

void FUN_106c6fa38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  uStack_70 = uVar9;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_opt_class(PTR_PTR_1126d1d90);
  func_0x00010c0199c0(puVar2);
  puVar3 = PTR_PTR_1126d1d98;
  _objc_opt_new(PTR_PTR_1126d1d98);
  func_0x00010c1e9440();
  func_0x00010c1dcf40(puVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c6fc78; end: 106c6fdeb;  */

void FUN_106c6fc78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1162a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8d540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_58,param_1 + 0x48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  else {
    func_0x00010bfbb6e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106c6fdec; end: 106c6ffe7;  */

void FUN_106c6fdec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf07440(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0fe160();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x106c6fff0;
    puStack_70 = &UNK_11096cc30;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar3 = uVar2;
    uStack_68 = uVar5;
    func_0x00010050471c(uVar2,&PTR___NSConcreteGlobalBlock_11096cc10,&puStack_88);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c1162a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfa9760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_copyWeak(auStack_90,param_1 + 0x50);
    func_0x00010c297260(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uStack_68);
  }
  else {
    func_0x00010bfbb6e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106c6ffe8; end: 106c6ffff;  */

void FUN_106c6ffe8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_productId_1126231b8);
  return;
}



/* Entry: 106c70000; end: 106c701c7;  */

void FUN_106c70000(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1f440();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf07440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0fe160();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106c701c8;
    puStack_88 = &UNK_11096cc60;
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = param_2;
    _objc_retain(uVar5);
    uStack_78 = uVar5;
    uStack_58 = uVar1;
    _objc_copyWeak(auStack_60,param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = uVar4;
    func_0x000100504554(uVar4,&puStack_a0);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1d88;
    _objc_alloc(PTR_PTR_1126d1d88);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf63640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03aa00(puVar3);
    _objc_release(uVar4);
    func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  else {
    func_0x00010bfbb6e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106c701c8; end: 106c70357;  */

void FUN_106c701c8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar8 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8d460();
    if (iVar2 == 0) {
      lVar7 = 0;
    }
    else {
      uVar8 = param_2;
      func_0x00010c1183c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      FUN_106c6ac4c(lVar5,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    puVar3 = PTR_PTR_1126d1d80;
    _objc_alloc(PTR_PTR_1126d1d80);
    uVar8 = param_2;
    func_0x00010c124dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bfe5ec0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d940(puVar3);
    _objc_release(lVar4);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x48);
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    puVar6 = puVar3;
    FUN_106c6f870(puVar3,uVar8,uVar1,lVar4,*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar7);
  }
  _objc_release(lVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c70358; end: 106c7043f; -[SCCPlusLocalInAppPurchaseServiceSyncImpl restorePurchasesWithCallback:] */

void FUN_106c70358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1162a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13c640();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106c70440;
  puStack_50 = &UNK_11096cd20;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar3,param_2,&puStack_68,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106c70440; end: 106c70503;  */

void FUN_106c70440(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) goto LAB_106c70484;
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c27dd80();
    if (lVar1 < 2) {
      if (lVar1 != 0) {
        if (lVar1 != 1) goto LAB_106c70484;
        lVar1 = *(long *)(param_1 + 0x20);
        goto LAB_106c70478;
      }
      lVar1 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar1 + 0x10);
      uVar2 = 0;
    }
    else if (lVar1 == 2) {
      lVar1 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar1 + 0x10);
      uVar2 = 2;
    }
    else {
      if (lVar1 != 3) goto LAB_106c70484;
      lVar1 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar1 + 0x10);
      uVar2 = 3;
    }
  }
  else {
LAB_106c70478:
    pcVar3 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_106c70484:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c70504; end: 106c7053b; -[SCCPlusLocalInAppPurchaseServiceSyncImpl presentEmailRequiredDialogIfNeeded] */

long FUN_106c70504(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10bfc0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106c7053c; end: 106c70597; -[SCCPlusLocalInAppPurchaseServiceSyncImpl .cxx_destruct] */

void FUN_106c7053c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c70598; end: 106c706d3; -[SCCPlusLocalSubscriptionStoreImpl initWithPlusServices:storeKitServices:] */

undefined1 *
FUN_106c70598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f5ff8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c706d4; end: 106c706db;  */

void FUN_106c706d4(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126d1cf0;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c080120(param_3);
  func_0x00010c260980(param_3);
  dVar4 = param_1 * 1000.0;
  func_0x00010c2607a0(param_3);
  lVar2 = param_3;
  func_0x00010c252d60(param_3);
  lVar3 = param_3;
  func_0x00010c119b40(param_3);
  func_0x00010c080140(param_3);
  func_0x00010bfa08a0(param_3);
  func_0x00010c260a00(param_3);
  func_0x00010c080180(param_3);
  _objc_release(param_3);
  func_0x00010c01f860(dVar4,param_1 * 1000.0,(double)lVar2,(double)lVar3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c706dc; end: 106c707db; -[SCCPlusLocalSubscriptionStoreImpl forceSyncWithCallback:] */

void FUN_106c706dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c293720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb5020();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c707dc;
    puStack_50 = &UNK_110843510;
    lVar4 = param_3;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3,param_2,&puStack_68,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c707dc; end: 106c7083b;  */

void FUN_106c707dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    FUN_106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106c70838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 106c7083c; end: 106c7093b; -[SCCPlusLocalSubscriptionStoreImpl isLinkedToDeviceAccountWithCallback:] */

void FUN_106c7083c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c257940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076aa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c7093c;
    puStack_50 = &UNK_110881a90;
    lVar4 = param_3;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3,param_2,&puStack_68,lVar4);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c7093c; end: 106c709cf;  */

void FUN_106c7093c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf1f3c0(param_2);
  if (param_3 == 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,0);
  }
  else {
    lVar1 = param_3;
    FUN_106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c709d0; end: 106c70a93; -[SCCPlusLocalSubscriptionStoreImpl mockSubscriptionStatusWithTier:provider:] */

void FUN_106c709d0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0cf680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0cf680(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 < 5) {
      uVar5 = *(undefined8 *)(&UNK_10ddea040 + (ulong)param_3 * 8);
    }
    else {
      uVar5 = 0;
    }
    uVar4 = param_4;
    func_0x00010c067fc0(param_4);
    func_0x00010c0cf640(uVar3,param_2,uVar5,&PTR____CFConstantStringClassReference_110e7d1b8,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c70a94; end: 106c70acb; -[SCCPlusLocalSubscriptionStoreImpl isMock] */

bool FUN_106c70a94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0cf680(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106c70acc; end: 106c70ad3; -[SCCPlusLocalSubscriptionStoreImpl subscriptionInfoObservable] */

undefined8 FUN_106c70acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c70ad4; end: 106c70b03; -[SCCPlusLocalSubscriptionStoreImpl setSubscriptionInfoObservable:] */

void FUN_106c70ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c70b04; end: 106c70b3f; -[SCCPlusLocalSubscriptionStoreImpl .cxx_destruct] */

void FUN_106c70b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c70b40; end: 106c70bcb; -[SCCPlusNativeCameraPresenterImpl initWithViewController:] */

undefined1 * FUN_106c70b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6000;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    uVar2 = param_3;
    func_0x000106c733fc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c70bcc; end: 106c70d33; -[SCCPlusNativeCameraPresenterImpl _presentWithSourceType:promise:] */

void FUN_106c70bcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar4 = 0;
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(lVar3);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
  _objc_opt_new();
  uStack_50 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c54e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c207200(puVar1);
  func_0x00010c18b5e0(puVar1);
  puVar2 = puVar1;
  func_0x00010c10f380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(puVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106c70d34;
  puVar2 = PTR_PTR_1126b1588;
  lStack_70 = param_1;
  uStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c70dbc;
  puStack_88 = &UNK_110841f80;
  puStack_80 = puVar1;
  puStack_78 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_retain(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


