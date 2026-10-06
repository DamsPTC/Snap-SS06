/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084d22f0; end: 1084d24db;  */

void FUN_1084d22f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1084d2168;
  uStack_60 = 0x1084d2178;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c1340(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084d24dc; end: 1084d2667;  */

void FUN_1084d24dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084d2668; end: 1084d2763;  */

long FUN_1084d2668(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  uVar2 = param_4;
  dVar4 = param_1;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar5 = dVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 <= dVar4) {
    uVar1 = param_3;
    func_0x00010c26f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar2 = param_4;
    dVar4 = dVar5;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar3 = -(ulong)(dVar5 < dVar4);
  }
  else {
    lVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084d2764; end: 1084d2863;  */

ulong FUN_1084d2764(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  uVar2 = param_4;
  dVar4 = param_1;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar5 = dVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 <= dVar4) {
    uVar1 = param_3;
    func_0x00010c26f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar2 = param_4;
    dVar4 = dVar5;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar3 = (ulong)(dVar5 < dVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1084d2864; end: 1084d28f7;  */

bool FUN_1084d2864(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = param_2;
  dVar3 = param_1;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf9c720(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return dVar3 < param_1;
}



/* Entry: 1084d28f8; end: 1084d2a13;  */

void FUN_1084d28f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126cf3d0;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bf51c80(param_3);
  func_0x00010bf51c80(param_3);
  uVar3 = param_1;
  func_0x00010bf01f00(param_3);
  uVar4 = uVar3;
  func_0x00010bfe4080(param_3);
  uVar5 = uVar4;
  func_0x00010c298e00(param_3);
  uVar6 = uVar5;
  func_0x00010bf537c0(param_3);
  uVar7 = uVar6;
  func_0x00010c249ca0(param_3);
  lVar2 = param_3;
  uVar8 = uVar7;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    uVar8 = 0x10000000000000;
  }
  else {
    func_0x00010c26f320(lVar2);
  }
  func_0x00010c027c60(param_2,param_1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084d2a14; end: 1084d2b27;  */

void FUN_1084d2a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain();
  func_0x00010c08b3c0(param_2);
  uVar2 = param_1;
  func_0x00010c0b55a0(param_2);
  _CLLocationCoordinate2DMake(param_1,uVar2);
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  uVar3 = param_1;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010bf01f00(param_2);
  uVar4 = uVar3;
  func_0x00010bfe4080(param_2);
  uVar5 = uVar4;
  func_0x00010c298e00(param_2);
  uVar6 = uVar5;
  func_0x00010bf537c0(param_2);
  uVar7 = uVar6;
  func_0x00010c249ca0(param_2);
  uVar8 = uVar7;
  func_0x00010c2709c0(param_2);
  _objc_release(param_2);
  func_0x000109021670(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005aa0(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084d2b28; end: 1084d2cc3;  */

bool FUN_1084d2b28(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  puVar12 = PTR_PTR_1126b2378;
  if (lVar4 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010bf4e880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar12,param_2,lVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = puVar12;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfdb240();
  if ((int)puVar7 == 0) {
    bVar1 = false;
  }
  else {
    puVar7 = puVar12;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c1344a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c243400();
    if ((int)puVar9 == 1) {
      bVar1 = true;
    }
    else {
      puVar9 = puVar12;
      func_0x00010c27f9c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c1344a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c243400();
      bVar1 = (int)puVar11 == 2;
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1084d2cc4; end: 1084d2f53;  */

undefined * FUN_1084d2cc4(undefined *param_1,undefined *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined *puVar14;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = param_1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_1);
    puStack_140 = param_1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_140 = puVar3;
    _objc_retain(param_1);
    puVar3 = param_1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      unaff_x21 = *plStack_120;
      puStack_138 = param_1;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x21) {
            _objc_enumerationMutation(puStack_138);
          }
          lVar13 = *(long *)(lStack_128 + (long)puVar12 * 8);
          _objc_retain(lVar13);
          lVar4 = lVar13;
          func_0x00010bf4e880();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c11ff60();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c08fa60();
          puVar14 = PTR_PTR_1126b2378;
          if (lVar6 == 0) {
            puVar14 = (undefined *)0x0;
          }
          else {
            lVar6 = lVar13;
            func_0x00010bf4e880(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c11ff60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f40e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          _objc_release(lVar5);
          _objc_release(lVar4);
          puVar8 = puVar14;
          func_0x00010c27f9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bfdb240();
          if ((int)puVar9 == 0) {
            bVar2 = false;
          }
          else {
            puVar9 = puVar14;
            func_0x00010c27f9c0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c1344a0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c243400();
            bVar2 = (int)puVar11 == 2;
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          _objc_release(puVar8);
          _objc_release(puVar14);
          _objc_release(lVar13);
          if ((param_2 != (undefined *)0x0) || (!bVar2)) {
            puVar14 = param_2;
            if (!bVar2) {
              puVar14 = puStack_140;
            }
            func_0x00010befa120(puVar14);
          }
          param_1 = puStack_138;
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puStack_138;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
  puVar3 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
    return puStack_140;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1084d2f54;
  uStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  puStack_160 = param_2;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  puVar12 = puVar3;
  func_0x00010bf0e700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(puVar12);
  bVar1 = *(byte *)(puStack_188 + 3);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(puVar3);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 1084d2f54; end: 1084d3057;  */

undefined1 FUN_1084d2f54(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1084d3058; end: 1084d306b;  */

void FUN_1084d3058(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1084d306c; end: 1084d309b;  */

void FUN_1084d306c(long param_1,undefined1 param_2)

{
  func_0x00010c07f5e0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1084d309c; end: 1084d31c3;  */

void FUN_1084d309c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1084d2168;
  uStack_40 = 0x1084d2178;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084d31c4; end: 1084d3203;  */

void FUN_1084d31c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084d3204; end: 1084d3283;  */

void FUN_1084d3204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084d3284; end: 1084d3523;  */

void FUN_1084d3284(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c1584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0c5860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if ((((param_2 & 1) == 0) && (lVar3 == 0)) ||
     (lVar3 = lVar2, func_0x00010c08fa60(), puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     lVar3 == 0)) {
    puVar12 = (undefined *)0x0;
    goto LAB_1084d34e8;
  }
  lVar3 = param_1;
  func_0x00010c108540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_1;
  func_0x00010c108540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    puVar11 = (undefined *)0x0;
LAB_1084d345c:
    _objc_release(lVar3);
  }
  else {
    lVar8 = param_1;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    _objc_release(lVar3);
    if (lVar9 != 0) {
      puVar11 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      lVar3 = param_1;
      func_0x00010bf93ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf93e80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar11);
      _objc_release(lVar8);
      goto LAB_1084d345c;
    }
    puVar11 = (undefined *)0x0;
  }
  puVar10 = PTR_PTR_1126d9df8;
  _objc_alloc(PTR_PTR_1126d9df8);
  func_0x00010c0c6700(param_1);
  func_0x00010c02d100(puVar10);
  puVar12 = PTR_PTR_1126d9e00;
  _objc_alloc(PTR_PTR_1126d9e00);
  func_0x00010c02a120();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_1084d34e8:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1084d3524; end: 1084d3783; -[SCMyStoriesDatabaseStore fetchPlaybackSequencesForStoryWithIds:] */

undefined8 * FUN_1084d3524(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *apuStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    puVar2 = &uStack_191;
    func_0x0001008139c8(puVar2);
    _objc_retain(param_3);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b0 = 0;
    puVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x000107c281a4(&uStack_1b0,puVar1);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(undefined8 *)(lStack_118 + (long)puVar6 * 8);
          _objc_retain(uVar4);
          uStack_e0 = uVar4;
          func_0x000107c281a8(&uStack_1b0,&uStack_e0);
          _objc_release(uStack_e0);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar1 != puVar6);
        puVar1 = param_3;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    _objc_release(param_3);
    func_0x000107c281a0(appuStack_190,0xc,puVar2,&uStack_1b0);
    func_0x00010be11380(param_1);
    _objc_retainAutoreleasedReturnValue();
    plVar3 = plStack_128;
    appuStack_190[0] = &PTR_SUB_110862700;
    plStack_128 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    apuStack_d8[0] = auStack_148;
    func_0x000107c27dd4(apuStack_d8);
    apuStack_d8[0] = (undefined1 *)&uStack_1b0;
    func_0x000107c27dd4(apuStack_d8);
    unaff_x22 = &uStack_1b0;
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001050048c0(appuStack_190);
  apuStack_d8[0] = (undefined1 *)unaff_x22;
  func_0x000107c27dd4(apuStack_d8);
  _objc_release(param_3);
  __Unwind_Resume(puVar1);
  func_0x000104bd46a0();
  *puVar1 = &PTR_FUN_110a4fc60;
  plVar3 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 1084d3784; end: 1084d3863;  */

undefined8 * FUN_1084d3784(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a4fc60;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1084d3864; end: 1084d3b97; -[SCMyStoriesDatabaseStore _filterMyStorySnaps:newSnaps:] */

void FUN_1084d3864(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
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
  undefined auStack_170 [256];
  long lStack_70;
  
  puVar6 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_1a0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_1a8 + (long)puVar10 * 8);
        lVar11 = lVar8;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c08fa60();
        _objc_release(lVar11);
        if (lVar12 != 0) {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar8);
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_4);
  puVar2 = auStack_170;
  uVar7 = 0x10;
  lVar9 = param_4;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar11 = *plStack_1e0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        uVar7 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf4b900();
        _objc_release(uVar7);
        if (((ulong)puVar2 & 1) == 0) {
          func_0x00010befa120(puVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      puVar2 = auStack_170;
      uVar7 = 0x10;
      lVar9 = param_4;
      puVar6 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  _objc_retain(uVar7);
  puVar1 = puVar3;
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010bfb1920(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20ac0(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1338;
    _objc_alloc(PTR_PTR_1126b1338);
    func_0x00010c04dbe0();
    puVar3 = PTR_PTR_1126cf440;
    FUN_108519108(PTR_PTR_1126cf440,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar10 = puVar2;
LAB_1084d3d88:
    _objc_release(puVar3);
  }
  else {
    puVar10 = puVar1;
    func_0x00010c25b340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be161c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar10 = puVar3;
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c25b720(puVar1);
      puVar4 = puVar1;
      func_0x00010c25b340(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      func_0x00010befa160(puVar3);
      _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
      func_0x00010c246ba0(puVar3);
      _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
      puVar4 = PTR_PTR_1126cf440;
      FUN_10851930c(PTR_PTR_1126cf440,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf51e00(puVar3);
      if (puVar4 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar4);
      }
      _objc_release(puVar5);
      func_0x00010c25ed40(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_1084d3d88;
    }
  }
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1084d3b98; end: 1084d3e8f; -[SCMyStoriesDatabaseStore _insertMyStorySnapsWithStoryId:storySnaps:txContext:] */

void FUN_1084d3b98(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20ac0(param_1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1338;
    _objc_alloc(PTR_PTR_1126b1338);
    func_0x00010c04dbe0();
    puVar4 = PTR_PTR_1126cf440;
    FUN_108519108(PTR_PTR_1126cf440,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(param_4);
    param_1 = param_4;
  }
  else {
    puVar4 = puVar1;
    func_0x00010c25b340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be161c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) goto LAB_1084d3d90;
    func_0x00010c25b720(puVar1);
    puVar2 = puVar1;
    func_0x00010c25b340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    func_0x00010befa160(puVar4);
    _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
    func_0x00010c246ba0(puVar4);
    _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
    puVar2 = PTR_PTR_1126cf440;
    FUN_10851930c(PTR_PTR_1126cf440,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf51e00(puVar4);
    if (puVar2 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar2);
    }
    _objc_release(puVar3);
    func_0x00010c25ed40(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_1084d3d90:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1084d3e90; end: 1084d40af; -[SCMyStoriesDatabaseStore _insertMyStorySnaps:txContext:] */

void FUN_1084d3e90(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  uVar7 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010be3c640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar4;
        func_0x00010bf529e0();
        if (lVar3 != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      uVar7 = 0x10;
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_1084d422c;
  uStack_190 = 0x1084d423c;
  uStack_188 = 0;
  uVar8 = *(undefined8 *)(lVar2 + 8);
  _objc_retain(uVar7);
  _objc_retain(puVar6);
  func_0x00010c0f8500(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release(uVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 1084d40b0; end: 1084d422b; -[SCMyStoriesDatabaseStore insertMyStorySnaps:postingTime:completionQueue:completion:] */

void FUN_1084d40b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1084d422c;
  uStack_60 = 0x1084d423c;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d422c; end: 1084d4243;  */

void FUN_1084d422c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084d4244; end: 1084d4427;  */

void FUN_1084d4244(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be3c620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be23060();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      lVar3 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_1084da554(*(undefined8 *)(param_1 + 0x38),param_2,uVar7,lVar3);
      _objc_release(lVar3);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_2);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001084d443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x20) + 0x10))(*(long *)(lVar6 + 0x20));
  return;
}



/* Entry: 1084d4428; end: 1084d443f;  */

void FUN_1084d4428(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001084d443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1084d4440; end: 1084d4783; -[SCMyStoriesDatabaseStore _insertMyStorySnapIfMissingForStoryWithId:snapComponentId:creationBlock:txContext:] */

void FUN_1084d4440(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  puVar8 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 != (undefined8 *)0x0) {
    puStack_160 = param_1;
    puVar7 = param_3;
    func_0x00010bfa94a0();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_160 != (undefined8 *)0x0) {
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      unaff_x24 = puStack_160;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = &uStack_150;
      puVar8 = auStack_f0;
      puVar9 = (undefined8 *)0x10;
      puVar1 = unaff_x24;
      func_0x00010bf52a60();
      if (puVar1 != (undefined8 *)0x0) {
        lVar10 = *plStack_140;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_140 != lVar10) {
              _objc_enumerationMutation(unaff_x24);
            }
            uVar2 = *(ulong *)(lStack_148 + (long)puVar11 * 8);
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x000108ea5f00();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            puVar7 = param_4;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((uVar4 & 1) != 0) goto LAB_1084d4660;
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar1 != puVar11);
          puVar7 = &uStack_150;
          puVar8 = auStack_f0;
          puVar9 = (undefined8 *)0x10;
          puVar1 = unaff_x24;
          func_0x00010bf52a60();
        } while (puVar1 != (undefined8 *)0x0);
      }
      _objc_release(unaff_x24);
    }
    unaff_x24 = param_5;
    (*(code *)param_5[2])();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x24 != (undefined8 *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_108 = unaff_x24;
      puStack_100 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)0x1;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f8 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_6;
      func_0x00010be3c620(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar7 = unaff_x24;
      func_0x00010be20ac0();
      if ((long)param_1 - 1U < 4) {
        puVar7 = param_3;
        FUN_1084dabb8(param_6,param_4);
      }
    }
LAB_1084d4660:
    _objc_release(unaff_x24);
    _objc_release(puStack_160);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(puStack_160);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  uVar12 = puVar1[1];
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  func_0x00010c0f8500(uVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1084d4784; end: 1084d48bb; -[SCMyStoriesDatabaseStore insertMyStorySnapIfMissingForStoryWithId:snapComponentId:creationBlock:completionQueue:completion:] */

void FUN_1084d4784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1084d48bc;
  puStack_78 = &UNK_110a4fa80;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_90,param_6,param_7);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d48bc; end: 1084d48cf;  */

void FUN_1084d48bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3c610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__insertMyStorySnapIfMissingForSt_11256cb20,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),param_2);
  return;
}



/* Entry: 1084d48d0; end: 1084d49fb; -[SCMyStoriesDatabaseStore _insertPlaybackSequenceIfNeededForStoryWithId:storyType:txContext:] */

void FUN_1084d48d0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126b1338;
    _objc_alloc(PTR_PTR_1126b1338);
    func_0x00010c04dbe0();
    puVar1 = PTR_PTR_1126cf440;
    FUN_108519108(PTR_PTR_1126cf440,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010c25b720(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084d49fc; end: 1084d4ac7; -[SCMyStoriesDatabaseStore insertPlaybackSequenceIfNeededForStoryWithId:storyType:completionQueue:completion:] */

void FUN_1084d49fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084d4ac8;
  puStack_60 = &UNK_1108b27f8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_78,param_5,param_6);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d4ac8; end: 1084d4adb;  */

void FUN_1084d4ac8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__insertPlaybackSequenceIfNeededF_11256cb58,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 1084d4adc; end: 1084d4deb; -[SCMyStoriesDatabaseStore _getStoryIdsAndSnapComponentIdsFromStorySnaps:] */

void FUN_1084d4adc(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 *puStack_410;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar14 = &uStack_1b0;
  puVar15 = auStack_f0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar16 = *plStack_1a0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf52a60();
        lVar17 = lRam0000000000000000;
        while (puVar4 != (undefined *)0x0) {
          puVar19 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar17) {
              _objc_enumerationMutation(puVar3);
            }
            lVar5 = *(long *)((long)puVar19 * 8);
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x000108ea5f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            lVar5 = lVar6;
            func_0x00010c08fa60();
            if (lVar5 != 0) {
              puVar7 = puVar1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar7 == (undefined *)0x0) {
                puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar1);
                _objc_release(puVar7);
              }
              puVar7 = puVar1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar7);
            }
            _objc_release(lVar6);
            puVar19 = puVar19 + 1;
          } while (puVar4 != puVar19);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar2);
      puVar14 = &uStack_1b0;
      puVar15 = auStack_f0;
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(param_3);
    __Unwind_Resume();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar14);
    _objc_retain(puVar15);
    _objc_retain(puVar14);
    puVar8 = puVar14;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (puVar8 != (undefined8 *)0x0) {
      puStack_410 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(puVar14);
        }
        puVar1 = puVar2;
        func_0x00010bfa94a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 != (undefined *)0x0) {
          puVar9 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010050471c();
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          puVar3 = puVar1;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar3;
          func_0x00010bf52a60();
          lVar6 = lRam0000000000000000;
          while (puVar18 != (undefined *)0x0) {
            puVar19 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(puVar3);
              }
              uVar20 = *(undefined8 *)((long)puVar19 * 8);
              func_0x00010bf3cf60(uVar20);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar20;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c0b5ac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar11);
              _objc_release(uVar20);
              puVar13 = puVar10;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar13 == (undefined8 *)0x0) {
                func_0x00010befa120(puVar4);
              }
              else {
                puVar13 = puVar10;
                func_0x00010c0e00e0(puVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar2;
                func_0x00010be5f980();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4);
                _objc_release(puVar7);
                _objc_release(puVar13);
              }
              _objc_release(uVar12);
              puVar19 = puVar19 + 1;
            } while (puVar18 != puVar19);
            puVar18 = puVar3;
            func_0x00010bf52a60();
          }
          _objc_release(puVar3);
          _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
          func_0x00010c246ba0(puVar4);
          _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
          puVar18 = PTR_PTR_1126cf440;
          param_2 = puVar1;
          FUN_10851930c(PTR_PTR_1126cf440,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf51e00(puVar4);
          if (puVar18 != (undefined *)0x0) {
            _objc_setProperty_nonatomic_copy(puVar18);
          }
          _objc_release(puVar3);
          func_0x00010c25ed40(puVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar18);
          _objc_release(puVar4);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(puVar1);
        puStack_410 = (undefined8 *)((long)puStack_410 + 1);
      } while (puStack_410 != puVar8);
      puVar8 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
    _objc_release(puVar15);
    puVar8 = puVar14;
    _objc_release(puVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar14);
    _objc_release(puVar15);
    _objc_release(puVar14);
    __Unwind_Resume(puVar8);
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084d4dec; end: 1084d52b7; -[SCMyStoriesDatabaseStore _updateMyStorySnaps:txContext:] */

void FUN_1084d4dec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_200;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar2 != 0) {
    lStack_200 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = param_1;
      func_0x00010bfa94a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010050471c();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar7 = lVar3;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar8 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar7);
            }
            uVar18 = *(undefined8 *)(lVar17 * 8);
            func_0x00010bf3cf60(uVar18);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar18;
            func_0x000108ea5f00();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            _objc_release(uVar18);
            lVar11 = lVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar11 == 0) {
              func_0x00010befa120(puVar6);
            }
            else {
              lVar11 = lVar5;
              func_0x00010c0e00e0(lVar5);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = param_1;
              func_0x00010be5f980();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar6);
              _objc_release(lVar12);
              _objc_release(lVar11);
            }
            _objc_release(uVar10);
            lVar17 = lVar17 + 1;
          } while (lVar8 != lVar17);
          lVar8 = lVar7;
          func_0x00010bf52a60();
        }
        _objc_release(lVar7);
        _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
        func_0x00010c246ba0(puVar6);
        _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
        puVar13 = PTR_PTR_1126cf440;
        param_2 = lVar3;
        FUN_10851930c(PTR_PTR_1126cf440,lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar6;
        func_0x00010bf51e00(puVar6);
        if (puVar13 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar13);
        }
        _objc_release(puVar14);
        func_0x00010c25ed40(param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      lStack_200 = lStack_200 + 1;
    } while (lStack_200 != lVar2);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(lVar2);
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
  return;
}



/* Entry: 1084d52b8; end: 1084d5343;  */

void FUN_1084d52b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084d5344; end: 1084d536b;  */

void FUN_1084d5344(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1084d536c; end: 1084d5477; -[SCMyStoriesDatabaseStore updateMyStorySnaps:postedTime:grapheneEmitter:completionQueue:completion:] */

void FUN_1084d536c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1084d5478;
  puStack_78 = &UNK_11089ebb0;
  lStack_70 = param_2;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1,param_3,&puStack_90,param_6,param_7);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1084d5478; end: 1084d557f;  */

void FUN_1084d5478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bedbf80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be23060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084d5580; end: 1084d558f;  */

undefined * FUN_1084d5580(long param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *unaff_x22;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_198;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  double dStack_108;
  long lStack_80;
  
  dVar13 = *(double *)(param_1 + 0x30);
  puVar11 = *(undefined **)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar4 = param_3;
  dVar14 = dVar13;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  puVar3 = param_2;
  func_0x00010c08fa60();
  if ((puVar3 != (undefined *)0x0) &&
     (puVar3 = param_3, func_0x00010bf529e0(), puVar3 != (undefined *)0x0)) {
    puStack_198 = puVar11;
    FUN_1084d9ff0(puVar11,param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_198 == (undefined *)0x0) {
      func_0x00010c0ac920(uVar1);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc0000000;
      pcStack_118 = FUN_1084db740;
      puStack_110 = &UNK_110a4fd20;
      unaff_x24 = param_3;
      dStack_108 = dVar13;
      func_0x000100504554(param_3,&puStack_128);
      unaff_x23 = PTR_PTR_1126d9e08;
      _objc_alloc();
      func_0x00010c0472a0(dVar13,dVar13 + 86460.0);
      puVar3 = PTR_PTR_1126d9e10;
      puVar5 = unaff_x23;
      FUN_108505e44();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(unaff_x24);
    }
    else {
      unaff_x24 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      dVar14 = 0.0;
      puVar5 = puStack_198;
      func_0x00010c25a960();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(puVar5);
          }
          puVar12 = *(undefined **)((long)puVar10 * 8);
          _objc_retain(puVar12);
          puVar6 = puVar12;
          func_0x00010c259cc0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = unaff_x24;
          func_0x00010bf4b900();
          _objc_release(puVar6);
          if ((int)unaff_x22 != 0) {
            unaff_x22 = PTR_PTR_1126d9e18;
            _objc_alloc();
            puVar6 = puVar12;
            func_0x00010c259cc0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            dVar14 = dVar13;
            func_0x00010c04d9a0(dVar13);
            _objc_release(puVar12);
            _objc_release(puVar6);
            puVar12 = unaff_x22;
          }
          func_0x00010befa120(puVar4);
          _objc_release(puVar12);
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      puVar3 = PTR_PTR_1126d9e10;
      puVar5 = puStack_198;
      FUN_108506048();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined *)0x0;
      dVar13 = dVar14;
      if (puVar3 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar3);
        unaff_x23 = puVar3;
        dVar13 = dVar14;
      }
      _objc_release(puVar4);
      _objc_release(unaff_x24);
    }
    puVar4 = puVar3;
    func_0x00010c25ed40(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puStack_198);
    dVar14 = dVar13;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(puStack_198);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar11);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  puVar6 = puVar4;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  puVar10 = puVar5;
  func_0x00010c08fa60();
  if ((puVar10 != (undefined *)0x0) &&
     (puVar10 = puVar4, func_0x00010c08fa60(), puVar10 != (undefined *)0x0)) {
    unaff_x22 = puVar3;
    puVar11 = puVar5;
    FUN_1084d9ff0(puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 == (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new();
      if (puVar11 == (undefined *)0x0) {
        dVar14 = 2.2250738585072014e-308;
      }
      else {
        func_0x00010c26f320(puVar11);
      }
      _objc_release(puVar11);
      unaff_x23 = PTR_PTR_1126d9e18;
      _objc_alloc();
      func_0x00010c04d9a0(0);
      puVar10 = PTR_PTR_1126d9e08;
      _objc_alloc(PTR_PTR_1126d9e08);
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0472a0(dVar14,dVar14 + 86460.0,puVar10);
      _objc_release(puVar11);
      puVar12 = PTR_PTR_1126d9e10;
      puVar11 = puVar10;
      FUN_108505e44(PTR_PTR_1126d9e10,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(unaff_x23);
    }
    else {
      _objc_retain(unaff_x22);
      _objc_retain(puVar4);
      unaff_x23 = unaff_x22;
      func_0x00010c25a960();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = unaff_x23;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(unaff_x23);
          }
          uVar7 = *(ulong *)((long)puVar12 * 8);
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          puVar6 = puVar4;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((uVar8 & 1) != 0) {
            puVar12 = (undefined *)0x0;
            goto LAB_1084dad98;
          }
          puVar12 = puVar12 + 1;
        } while (puVar10 != puVar12);
        puVar10 = unaff_x23;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x23);
      puVar11 = unaff_x22;
      func_0x00010c25a960(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar11;
      func_0x00010c0d3c80();
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126d9e18;
      _objc_alloc(PTR_PTR_1126d9e18);
      func_0x00010c04d9a0(0);
      puVar6 = puVar11;
      func_0x00010befa120(unaff_x23);
      _objc_release(puVar11);
      puVar12 = PTR_PTR_1126d9e10;
      puVar11 = unaff_x22;
      FUN_108506048(PTR_PTR_1126d9e10,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        puVar6 = unaff_x23;
        _objc_setProperty_nonatomic_copy(puVar12);
      }
LAB_1084dad98:
      _objc_release(unaff_x23);
      _objc_release(puVar4);
      _objc_release(unaff_x22);
    }
    if (puVar12 != (undefined *)0x0) {
      puVar6 = puVar12;
      func_0x00010c25ed40(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(unaff_x22);
    _objc_release(puVar12);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar10 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar6);
  puVar3 = puVar10;
  FUN_1084d9ff0(puVar10,puVar11);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar3;
    FUN_1084db128(puVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c25ed40(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar11 = (undefined *)0x1;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar10);
  return puVar11;
}



/* Entry: 1084d5590; end: 1084d5b13; -[SCMyStoriesDatabaseStore _updateMyStorySnapForStoryWithId:snapIndex:clientId:serverId:txContext:] */

undefined8 *
FUN_1084d5590(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar21;
  undefined8 *puStack_10d0;
  undefined8 *puStack_10c0;
  undefined1 auStack_10a0 [8];
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined1 uStack_1068;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined1 auStack_1008 [1416];
  undefined8 uStack_a80;
  long lStack_a78;
  long *plStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  long lStack_a38;
  long *plStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  long lStack_9f8;
  long *plStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  long lStack_840;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined1 *puStack_7e0;
  code *pcStack_7d8;
  undefined8 *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 uStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar13 = param_5;
  _objc_retain(param_3);
  iVar12 = (int)puVar2;
  puStack_7b0 = param_5;
  _objc_retain(param_5);
  puStack_7a0 = param_6;
  _objc_retain(param_6);
  puStack_7c0 = param_7;
  _objc_retain(param_7);
  puVar20 = param_1;
  puVar2 = param_3;
  puStack_7c8 = param_3;
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_7b8 = puVar20;
  if (puVar20 == (undefined8 *)0x0) {
LAB_1084d5964:
    puVar20 = (undefined8 *)0x0;
  }
  else {
    param_3 = &uStack_200;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined8 *)0x0;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &uStack_1c0;
    puVar9 = auStack_f8;
    puVar13 = (undefined8 *)0x10;
    param_6 = puVar20;
    func_0x00010bf52a60();
    iVar12 = (int)puVar9;
    unaff_x27 = puVar20;
    if (param_6 != (undefined8 *)0x0) {
      param_5 = (undefined8 *)*puStack_1b0;
      puStack_7a8 = param_4;
LAB_1084d5668:
      puVar18 = (undefined8 *)0x0;
LAB_1084d566c:
      if ((undefined8 *)*puStack_1b0 != param_5) {
        _objc_enumerationMutation(puVar20);
      }
      param_4 = *(undefined8 **)(lStack_1b8 + (long)puVar18 * 8);
      puVar1 = param_4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = puVar1;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      param_7 = puStack_7b0;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      param_1 = unaff_x28;
      puVar2 = param_7;
      func_0x00010c0720c0();
      _objc_release(param_7);
      _objc_release(unaff_x28);
      _objc_release(puVar1);
      iVar12 = (int)puVar9;
      if (((ulong)param_1 & 1) == 0) goto code_r0x0001084d56f0;
      _objc_retain(param_4);
      _objc_release(puVar20);
      puVar20 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (param_4 != (undefined8 *)0x0) {
        puVar2 = puStack_7b8;
        func_0x00010c25b340(puStack_7b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_790 = puVar20;
        _objc_release(puVar2);
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        puVar2 = puStack_7b8;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        iVar12 = (int)auStack_178;
        puVar13 = (undefined8 *)0x10;
        puStack_798 = puVar2;
        func_0x00010bf52a60();
        puVar20 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          unaff_x28 = (undefined8 *)0x0;
          lVar14 = *plStack_1f0;
          do {
            puVar13 = (undefined8 *)0x0;
            do {
              if (*plStack_1f0 != lVar14) {
                _objc_enumerationMutation(puStack_798);
              }
              param_7 = *(undefined8 **)(lStack_1f8 + (long)puVar13 * 8);
              puVar18 = param_7;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              param_3 = param_4;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              param_5 = puVar18;
              func_0x00010c0720c0();
              _objc_release(param_3);
              _objc_release(puVar18);
              if ((int)param_5 == 0) {
                func_0x00010befa120(puStack_790);
              }
              else {
                func_0x00010b627f84(&uStack_788,param_4);
                puVar18 = puStack_7a0;
                _objc_retain(puStack_7a0);
                puVar1 = puStack_780;
                uStack_788._0_1_ = 0;
                puStack_780 = puVar18;
                _objc_release(puVar1);
                puVar18 = &uStack_788;
                func_0x00010b629614();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar20);
                func_0x00010befa120(puStack_790);
                if (puStack_7a8 != (undefined8 *)0x0) {
                  *puStack_7a8 = unaff_x28;
                }
                FUN_10805bacc(&uStack_788);
                puVar20 = puVar18;
              }
              unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
              puVar13 = (undefined8 *)((long)puVar13 + 1);
            } while (puVar2 != puVar13);
            iVar12 = (int)auStack_178;
            puVar13 = (undefined8 *)0x10;
            puVar2 = puStack_798;
            func_0x00010bf52a60();
          } while (puVar2 != (undefined8 *)0x0);
        }
        _objc_release(puStack_798);
        param_6 = (undefined8 *)PTR_PTR_1126cf440;
        FUN_10851930c(PTR_PTR_1126cf440,puStack_7b8);
        _objc_retainAutoreleasedReturnValue();
        param_1 = puStack_790;
        func_0x00010bf51e00();
        if (param_6 != (undefined8 *)0x0) {
          iVar12 = 0x28;
          _objc_setProperty_nonatomic_copy(param_6);
        }
        _objc_release(param_1);
        puVar2 = param_6;
        func_0x00010c25ed40(puStack_7c0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_retain(puVar20);
        _objc_release(param_6);
        _objc_release(puStack_790);
        _objc_release(puVar20);
        unaff_x27 = param_4;
        goto LAB_1084d5958;
      }
      goto LAB_1084d5964;
    }
LAB_1084d5718:
    puVar20 = (undefined8 *)0x0;
LAB_1084d5958:
    _objc_release(unaff_x27);
  }
  _objc_release(puStack_7b8);
  _objc_release(puStack_7c0);
  _objc_release(puStack_7a0);
  _objc_release(puStack_7b0);
  puVar18 = puStack_7c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return puVar20;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(puStack_790);
  _objc_release(puVar20);
  _objc_release(param_4);
  _objc_release(puStack_7b8);
  _objc_release(puStack_7c0);
  _objc_release(puStack_7a0);
  _objc_release(puStack_7b0);
  _objc_release(puStack_7c8);
  puVar1 = puVar18;
  __Unwind_Resume();
  pcStack_7d8 = FUN_1084d5b14;
  lStack_840 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_830 = unaff_x28;
  puStack_828 = unaff_x27;
  puStack_820 = puVar20;
  puStack_818 = puVar18;
  puStack_810 = param_4;
  puStack_808 = param_7;
  puStack_800 = param_6;
  puStack_7f8 = param_5;
  puStack_7f0 = param_3;
  puStack_7e8 = param_1;
  puStack_7e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4c20();
  _objc_retainAutoreleasedReturnValue();
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9e8 = 0;
  plStack_9f0 = (long *)0x0;
  lStack_9f8 = 0;
  uStack_a00 = 0;
  _objc_retain();
  puStack_10d0 = puVar1;
  func_0x00010bf52a60();
  if (puStack_10d0 != (undefined8 *)0x0) {
    lVar14 = *plStack_9f0;
    do {
      puStack_10c0 = (undefined8 *)0x0;
      do {
        if (*plStack_9f0 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar3 = *(long *)(lStack_9f8 + (long)puStack_10c0 * 8);
        lStack_a38 = 0;
        uStack_a40 = 0;
        uStack_a28 = 0;
        plStack_a30 = (long *)0x0;
        uStack_a18 = 0;
        uStack_a20 = 0;
        uStack_a08 = 0;
        uStack_a10 = 0;
        lVar4 = lVar3;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar15 = *plStack_a30;
          do {
            lVar16 = 0;
            do {
              if (*plStack_a30 != lVar15) {
                _objc_enumerationMutation(lVar4);
              }
              uVar21 = *(undefined8 *)(lStack_a38 + lVar16 * 8);
              uVar6 = uVar21;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar7;
              func_0x00010c0720c0();
              _objc_release(uVar7);
              _objc_release(uVar6);
              if ((int)uVar19 != 0) {
                uVar6 = uVar21;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010c083e00();
                _objc_release(uVar6);
                puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                if (iVar12 != (int)uVar7) {
                  lVar5 = lVar3;
                  func_0x00010c25b340(lVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf529e0();
                  func_0x00010bf0a0e0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar5);
                  uStack_a48 = 0;
                  uStack_a50 = 0;
                  uStack_a58 = 0;
                  uStack_a60 = 0;
                  uStack_a68 = 0;
                  plStack_a70 = (long *)0x0;
                  lStack_a78 = 0;
                  uStack_a80 = 0;
                  lVar5 = lVar3;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  lVar15 = lVar5;
                  func_0x00010bf52a60();
                  if (lVar15 != 0) {
                    lVar16 = *plStack_a70;
                    do {
                      lVar17 = 0;
                      do {
                        if (*plStack_a70 != lVar16) {
                          _objc_enumerationMutation(lVar5);
                        }
                        uVar19 = *(undefined8 *)(lStack_a78 + lVar17 * 8);
                        func_0x00010bf3cf60();
                        _objc_retainAutoreleasedReturnValue();
                        uVar6 = uVar21;
                        func_0x00010bf3cf60(uVar21);
                        _objc_retainAutoreleasedReturnValue();
                        uVar7 = uVar19;
                        func_0x00010c0720c0();
                        _objc_release(uVar6);
                        _objc_release(uVar19);
                        if ((int)uVar7 == 0) {
                          func_0x00010befa120(puVar8);
                        }
                        else {
                          func_0x00010b627f84(auStack_1008,uVar21);
                          uVar6 = uVar21;
                          func_0x00010c0c3fe0(uVar21);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010b627b0c(auStack_10a0,uVar6);
                          _objc_release(uVar6);
                          auStack_10a0[0] = 0;
                          uStack_1068 = (undefined1)iVar12;
                          puVar9 = auStack_10a0;
                          func_0x00010b627e08(puVar9);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010b62a51c(auStack_1008,puVar9);
                          _objc_release(puVar9);
                          puVar9 = auStack_1008;
                          func_0x00010b629614(puVar9);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar8);
                          _objc_release(puVar9);
                          _objc_release(uStack_1018);
                          _objc_release(uStack_1020);
                          _objc_release(uStack_1030);
                          _objc_release(uStack_1038);
                          _objc_release(uStack_1040);
                          _objc_release(uStack_1048);
                          _objc_release(uStack_1050);
                          _objc_release(uStack_1058);
                          _objc_release(uStack_1070);
                          _objc_release(uStack_1078);
                          _objc_release(uStack_1088);
                          _objc_release(uStack_1090);
                          _objc_release(uStack_1098);
                          FUN_10805bacc(auStack_1008);
                        }
                        lVar17 = lVar17 + 1;
                      } while (lVar15 != lVar17);
                      lVar15 = lVar5;
                      func_0x00010bf52a60();
                    } while (lVar15 != 0);
                  }
                  _objc_release(lVar5);
                  puVar10 = PTR_PTR_1126cf440;
                  FUN_10851930c(PTR_PTR_1126cf440,lVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar8;
                  func_0x00010bf51e00(puVar8);
                  if (puVar10 != (undefined *)0x0) {
                    _objc_setProperty_nonatomic_copy(puVar10);
                  }
                  _objc_release(puVar11);
                  func_0x00010c25ed40(puVar13);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(puVar10);
                  _objc_release(puVar8);
                }
                goto LAB_1084d5fa0;
              }
              lVar16 = lVar16 + 1;
            } while (lVar5 != lVar16);
            lVar5 = lVar4;
            func_0x00010bf52a60();
          } while (lVar5 != 0);
        }
LAB_1084d5fa0:
        _objc_release(lVar4);
        puStack_10c0 = (undefined8 *)((long)puStack_10c0 + 1);
      } while (puStack_10c0 != puStack_10d0);
      puStack_10d0 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_10d0 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar20 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_840) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar13);
    __Unwind_Resume();
    _objc_release(puVar20[0x11]);
    _objc_release(puVar20[0x10]);
    _objc_release(puVar20[0xe]);
    _objc_release(puVar20[0xd]);
    _objc_release(puVar20[0xc]);
    _objc_release(puVar20[0xb]);
    _objc_release(puVar20[10]);
    _objc_release(puVar20[9]);
    _objc_release(puVar20[6]);
    _objc_release(puVar20[5]);
    _objc_release(puVar20[3]);
    _objc_release(puVar20[2]);
    _objc_release(puVar20[1]);
    return puVar20;
  }
  return puVar20;
code_r0x0001084d56f0:
  puVar18 = (undefined8 *)((long)puVar18 + 1);
  if (param_6 == puVar18) goto code_r0x0001084d56fc;
  goto LAB_1084d566c;
code_r0x0001084d56fc:
  puVar2 = &uStack_1c0;
  puVar9 = auStack_f8;
  puVar13 = (undefined8 *)0x10;
  param_6 = puVar20;
  func_0x00010bf52a60();
  iVar12 = (int)puVar9;
  if (param_6 == (undefined8 *)0x0) goto LAB_1084d5718;
  goto LAB_1084d5668;
}



/* Entry: 1084d5b14; end: 1084d6203; -[SCMyStoriesDatabaseStore _updateMyStorySnapWithClientId:zipped:txContext:] */

long FUN_1084d5b14(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_900;
  long lStack_8f0;
  undefined1 auStack_8d0 [8];
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 auStack_838 [1416];
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4c20();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  lStack_228 = 0;
  uStack_230 = 0;
  _objc_retain();
  lStack_900 = param_1;
  func_0x00010bf52a60();
  if (lStack_900 != 0) {
    lVar10 = *plStack_220;
    do {
      lStack_8f0 = 0;
      do {
        if (*plStack_220 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        lVar1 = *(long *)(lStack_228 + lStack_8f0 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        lVar2 = lVar1;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar11 = *plStack_260;
          do {
            lVar12 = 0;
            do {
              if (*plStack_260 != lVar11) {
                _objc_enumerationMutation(lVar2);
              }
              uVar15 = *(undefined8 *)(lStack_268 + lVar12 * 8);
              uVar4 = uVar15;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar5;
              func_0x00010c0720c0();
              _objc_release(uVar5);
              _objc_release(uVar4);
              if ((int)uVar14 != 0) {
                uVar4 = uVar15;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                func_0x00010c083e00();
                _objc_release(uVar4);
                puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                if (param_4 != (int)uVar5) {
                  lVar3 = lVar1;
                  func_0x00010c25b340(lVar1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf529e0();
                  func_0x00010bf0a0e0(puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar3);
                  uStack_278 = 0;
                  uStack_280 = 0;
                  uStack_288 = 0;
                  uStack_290 = 0;
                  uStack_298 = 0;
                  plStack_2a0 = (long *)0x0;
                  lStack_2a8 = 0;
                  uStack_2b0 = 0;
                  lVar3 = lVar1;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar3;
                  func_0x00010bf52a60();
                  if (lVar11 != 0) {
                    lVar12 = *plStack_2a0;
                    do {
                      lVar13 = 0;
                      do {
                        if (*plStack_2a0 != lVar12) {
                          _objc_enumerationMutation(lVar3);
                        }
                        uVar14 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);
                        func_0x00010bf3cf60();
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = uVar15;
                        func_0x00010bf3cf60(uVar15);
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = uVar14;
                        func_0x00010c0720c0();
                        _objc_release(uVar4);
                        _objc_release(uVar14);
                        if ((int)uVar5 == 0) {
                          func_0x00010befa120(puVar6);
                        }
                        else {
                          func_0x00010b627f84(auStack_838,uVar15);
                          uVar4 = uVar15;
                          func_0x00010c0c3fe0(uVar15);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010b627b0c(auStack_8d0,uVar4);
                          _objc_release(uVar4);
                          auStack_8d0[0] = 0;
                          uStack_898 = (undefined1)param_4;
                          puVar7 = auStack_8d0;
                          func_0x00010b627e08(puVar7);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010b62a51c(auStack_838,puVar7);
                          _objc_release(puVar7);
                          puVar7 = auStack_838;
                          func_0x00010b629614(puVar7);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar6);
                          _objc_release(puVar7);
                          _objc_release(uStack_848);
                          _objc_release(uStack_850);
                          _objc_release(uStack_860);
                          _objc_release(uStack_868);
                          _objc_release(uStack_870);
                          _objc_release(uStack_878);
                          _objc_release(uStack_880);
                          _objc_release(uStack_888);
                          _objc_release(uStack_8a0);
                          _objc_release(uStack_8a8);
                          _objc_release(uStack_8b8);
                          _objc_release(uStack_8c0);
                          _objc_release(uStack_8c8);
                          FUN_10805bacc(auStack_838);
                        }
                        lVar13 = lVar13 + 1;
                      } while (lVar11 != lVar13);
                      lVar11 = lVar3;
                      func_0x00010bf52a60();
                    } while (lVar11 != 0);
                  }
                  _objc_release(lVar3);
                  puVar8 = PTR_PTR_1126cf440;
                  FUN_10851930c(PTR_PTR_1126cf440,lVar1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar6;
                  func_0x00010bf51e00(puVar6);
                  if (puVar8 != (undefined *)0x0) {
                    _objc_setProperty_nonatomic_copy(puVar8);
                  }
                  _objc_release(puVar9);
                  func_0x00010c25ed40(param_5);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(puVar8);
                  _objc_release(puVar6);
                }
                goto LAB_1084d5fa0;
              }
              lVar12 = lVar12 + 1;
            } while (lVar3 != lVar12);
            lVar3 = lVar2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
LAB_1084d5fa0:
        _objc_release(lVar2);
        lStack_8f0 = lStack_8f0 + 1;
      } while (lStack_8f0 != lStack_900);
      lStack_900 = param_1;
      func_0x00010bf52a60();
    } while (lStack_900 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  lVar10 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_5);
    __Unwind_Resume();
    _objc_release(*(undefined8 *)(lVar10 + 0x88));
    _objc_release(*(undefined8 *)(lVar10 + 0x80));
    _objc_release(*(undefined8 *)(lVar10 + 0x70));
    _objc_release(*(undefined8 *)(lVar10 + 0x68));
    _objc_release(*(undefined8 *)(lVar10 + 0x60));
    _objc_release(*(undefined8 *)(lVar10 + 0x58));
    _objc_release(*(undefined8 *)(lVar10 + 0x50));
    _objc_release(*(undefined8 *)(lVar10 + 0x48));
    _objc_release(*(undefined8 *)(lVar10 + 0x30));
    _objc_release(*(undefined8 *)(lVar10 + 0x28));
    _objc_release(*(undefined8 *)(lVar10 + 0x18));
    _objc_release(*(undefined8 *)(lVar10 + 0x10));
    _objc_release(*(undefined8 *)(lVar10 + 8));
    return lVar10;
  }
  return lVar10;
}



/* Entry: 1084d6204; end: 1084d628b;  */

long FUN_1084d6204(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x88));
  _objc_release(*(undefined8 *)(param_1 + 0x80));
  _objc_release(*(undefined8 *)(param_1 + 0x70));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1084d628c; end: 1084d6357; -[SCMyStoriesDatabaseStore updateMyStorySnapWithClientId:zipped:completionQueue:completion:] */

void FUN_1084d628c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084d6358;
  puStack_60 = &UNK_110a4fb40;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_78,param_5,param_6);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d6358; end: 1084d636b;  */

void FUN_1084d6358(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedbf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMyStorySnapWithClientId_z_112594980,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 1084d636c; end: 1084d6687; -[SCMyStoriesDatabaseStore _deleteMyStorySnapsForStoryWithId:snapComponentId:currentUserId:txContent:] */

void FUN_1084d636c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x27;
  undefined *puStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  uVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  lVar2 = param_3;
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    uVar11 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    unaff_x27 = lVar1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x27;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    uVar11 = 0;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(unaff_x27);
        }
        uVar13 = *(ulong *)(lVar12 * 8);
        uVar4 = uVar13;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        else {
          _objc_retain(uVar13);
          _objc_release(uVar11);
          uVar11 = uVar13;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = unaff_x27;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x27);
    puVar8 = puVar3;
    uVar9 = param_5;
    func_0x00010bedbfa0(param_1);
    lVar2 = param_3;
    FUN_1084db034(param_6,param_4);
    _objc_release(puVar3);
    puStack_138 = puVar3;
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x27);
  _objc_release(puStack_138);
  _objc_release(0);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(lVar2);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  uVar14 = *(undefined8 *)(lVar7 + 8);
  _objc_retain(uVar9);
  _objc_retain(puVar8);
  _objc_retain(lVar2);
  func_0x00010c0f8500(uVar14);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  return;
}



/* Entry: 1084d6688; end: 1084d67bf; -[SCMyStoriesDatabaseStore deleteMyStorySnapsForStoryWithId:snapComponentId:currentUserId:completionQueue:completion:] */

void FUN_1084d6688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1084d67c0;
  puStack_78 = &UNK_11092da98;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_90,param_6,param_7);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d67c0; end: 1084d67eb;  */

void FUN_1084d67c0(long param_1,undefined8 param_2)

{
  func_0x00010bdfa3a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1084d67ec; end: 1084d6923; -[SCMyStoriesDatabaseStore deleteMyStorySnapsForStoriesWithIds:snapComponentId:currentUserId:completionQueue:completion:] */

void FUN_1084d67ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1084d6924;
  puStack_78 = &UNK_11092da98;
  uStack_70 = param_3;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_90,param_6,param_7);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d6924; end: 1084d6a73;  */

void FUN_1084d6924(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *unaff_x23;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puStack_3d8;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined auStack_210 [128];
  long lStack_190;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  puVar8 = auStack_d8;
  uVar10 = 0x10;
  lVar11 = lVar12;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x23 = (undefined *)*puStack_110;
    do {
      lVar15 = 0;
      do {
        if ((undefined *)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010bdfa3a0(*(undefined8 *)(param_1 + 0x28));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      puVar8 = auStack_d8;
      uVar10 = 0x10;
      lVar11 = lVar12;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar12);
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar12);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar10);
  puVar2 = puVar1;
  func_0x00010bfa94c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  _objc_retain();
  puVar13 = &uStack_350;
  puVar9 = auStack_210;
  puVar17 = puVar2;
  func_0x00010bf52a60();
  puVar4 = puVar2;
  if (puVar17 == (undefined8 *)0x0) {
    puStack_3d8 = (undefined8 *)0x0;
    puVar18 = puVar2;
  }
  else {
    lVar11 = *plStack_340;
    puStack_3d8 = (undefined8 *)0x0;
    puVar14 = unaff_x23;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_340 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar19 = *(undefined8 **)(lStack_348 + (long)puVar13 * 8);
        puVar18 = puVar19;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar18;
        func_0x00010bf52a60();
        puVar9 = puRam0000000000000000;
        while (puVar3 != (undefined8 *)0x0) {
          puVar16 = (undefined8 *)0x0;
          do {
            if (puRam0000000000000000 != puVar9) {
              _objc_enumerationMutation(puVar18);
            }
            puVar4 = *(undefined8 **)((long)puVar16 * 8);
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            puVar14 = puVar9;
            if ((int)puVar5 != 0) {
              _objc_retain(puVar19);
              _objc_release(puStack_3d8);
              puStack_3d8 = puVar19;
              goto LAB_1084d6c20;
            }
            puVar16 = (undefined8 *)((long)puVar16 + 1);
          } while (puVar3 != puVar16);
          puVar3 = puVar18;
          func_0x00010bf52a60();
        }
LAB_1084d6c20:
        _objc_release(puVar18);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar13 != puVar17);
      puVar13 = &uStack_350;
      puVar9 = auStack_210;
      puVar17 = puVar2;
      func_0x00010bf52a60();
    } while (puVar17 != (undefined8 *)0x0);
    _objc_release(puVar2);
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puStack_3d8 == (undefined8 *)0x0) {
      puStack_3d8 = (undefined8 *)0x0;
      goto LAB_1084d6e10;
    }
    puVar13 = puStack_3d8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar4 = puStack_3d8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf52a60();
    puVar9 = puRam0000000000000000;
    puVar18 = (undefined8 *)0x0;
    while (puVar13 != (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
      do {
        if (puRam0000000000000000 != puVar9) {
          _objc_enumerationMutation(puVar4);
        }
        puVar16 = *(undefined8 **)((long)puVar17 * 8);
        puVar3 = puVar16;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if (((ulong)puVar19 & 1) == 0) {
          func_0x00010befa120(unaff_x23);
        }
        else {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar16;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar18);
          _objc_release(puVar16);
          puVar18 = puVar3;
        }
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar13 != puVar17);
      puVar13 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar9 = unaff_x23;
    func_0x00010bedbfa0(puVar1);
    puVar4 = puStack_3d8;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    FUN_1084db034(uVar10,puVar18);
    _objc_release(puVar4);
    _objc_release(unaff_x23);
  }
  _objc_release(puVar18);
  puVar14 = unaff_x23;
LAB_1084d6e10:
  _objc_release(puVar2);
  _objc_release(puStack_3d8);
  _objc_release(uVar10);
  _objc_release(puVar8);
  puVar6 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar18);
  _objc_release(puVar2);
  _objc_release(puStack_3d8);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  uVar10 = *(undefined8 *)(puVar6 + 8);
  _objc_retain(puVar9);
  _objc_retain(puVar13);
  func_0x00010c0f8500(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar13);
  return;
}



/* Entry: 1084d6a74; end: 1084d6f87; -[SCMyStoriesDatabaseStore _deleteOurStorySnapsForServerId:currentUserId:txContent:] */

void FUN_1084d6a74(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *unaff_x23;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puStack_2b8;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010bfa94c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain();
  puVar7 = &uStack_230;
  puVar5 = auStack_f0;
  puVar11 = puVar1;
  func_0x00010bf52a60();
  puVar3 = puVar1;
  if (puVar11 == (undefined8 *)0x0) {
    puStack_2b8 = (undefined8 *)0x0;
    puVar12 = puVar1;
  }
  else {
    lVar6 = *plStack_220;
    puStack_2b8 = (undefined8 *)0x0;
    puVar8 = unaff_x23;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_220 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        puVar13 = *(undefined8 **)(lStack_228 + (long)puVar7 * 8);
        puVar12 = puVar13;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar12;
        func_0x00010bf52a60();
        puVar5 = puRam0000000000000000;
        while (puVar2 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          do {
            if (puRam0000000000000000 != puVar5) {
              _objc_enumerationMutation(puVar12);
            }
            puVar3 = *(undefined8 **)((long)puVar9 * 8);
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            puVar8 = puVar5;
            if ((int)puVar4 != 0) {
              _objc_retain(puVar13);
              _objc_release(puStack_2b8);
              puStack_2b8 = puVar13;
              goto LAB_1084d6c20;
            }
            puVar9 = (undefined8 *)((long)puVar9 + 1);
          } while (puVar2 != puVar9);
          puVar2 = puVar12;
          func_0x00010bf52a60();
        }
LAB_1084d6c20:
        _objc_release(puVar12);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar7 != puVar11);
      puVar7 = &uStack_230;
      puVar5 = auStack_f0;
      puVar11 = puVar1;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined8 *)0x0);
    _objc_release(puVar1);
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puStack_2b8 == (undefined8 *)0x0) {
      puStack_2b8 = (undefined8 *)0x0;
      goto LAB_1084d6e10;
    }
    puVar7 = puStack_2b8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar3 = puStack_2b8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf52a60();
    puVar5 = puRam0000000000000000;
    puVar12 = (undefined8 *)0x0;
    while (puVar7 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (puRam0000000000000000 != puVar5) {
          _objc_enumerationMutation(puVar3);
        }
        puVar9 = *(undefined8 **)((long)puVar11 * 8);
        puVar2 = puVar9;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar13 & 1) == 0) {
          func_0x00010befa120(unaff_x23);
        }
        else {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar9;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar9);
          puVar12 = puVar2;
        }
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar7 != puVar11);
      puVar7 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar5 = unaff_x23;
    func_0x00010bedbfa0(param_1);
    puVar3 = puStack_2b8;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    FUN_1084db034(param_5,puVar12);
    _objc_release(puVar3);
    _objc_release(unaff_x23);
  }
  _objc_release(puVar12);
  puVar8 = unaff_x23;
LAB_1084d6e10:
  _objc_release(puVar1);
  _objc_release(puStack_2b8);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release(puStack_2b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  uVar10 = *(undefined8 *)(lVar6 + 8);
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  func_0x00010c0f8500(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar7);
  return;
}



/* Entry: 1084d6f88; end: 1084d7083; -[SCMyStoriesDatabaseStore deleteOurStorySnapsForServerId:currentUserId:completionQueue:completion:] */

void FUN_1084d6f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084d7084;
  puStack_60 = &UNK_1108b2888;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_78,param_5,param_6);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d7084; end: 1084d7097;  */

void FUN_1084d7084(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteOurStorySnapsForServerId__11255c2a8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 1084d7098; end: 1084d7187; -[SCMyStoriesDatabaseStore _deletePlaybackSequenceForStoryWithId:txContext:] */

void FUN_1084d7098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126cf440;
    FUN_108519710(PTR_PTR_1126cf440,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_1084db40c(param_4,param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084d7188; end: 1084d724b; -[SCMyStoriesDatabaseStore deletePlaybackSequenceForStoryWithId:completionQueue:completion:] */

void FUN_1084d7188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1084d724c;
  puStack_58 = &UNK_110897108;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_70,param_4,param_5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1084d724c; end: 1084d725b;  */

void FUN_1084d724c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deletePlaybackSequenceForStoryW_11255c2d0,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1084d725c; end: 1084d74ab; -[SCMyStoriesDatabaseStore _deletePlaybackSequencesForStoryType:storyIdsToKeep:txContext:] */

void FUN_1084d725c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfa94c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar6 = auStack_f0;
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_1);
      _objc_release(param_1);
      _objc_release(param_5);
      uVar4 = param_4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(param_1);
      _objc_release(param_1);
      _objc_release(param_5);
      _objc_release(param_4);
      __Unwind_Resume();
      _objc_retain(puVar6);
      uVar7 = *(undefined8 *)(uVar4 + 8);
      _objc_retain(puVar6);
      func_0x00010c0f8500(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar6);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      if (param_4 == 0) {
LAB_1084d7354:
        puVar5 = PTR_PTR_1126cf440;
        FUN_108519710(PTR_PTR_1126cf440,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        FUN_1084db40c(param_5,uVar7);
        _objc_release(uVar7);
        _objc_release(puVar5);
      }
      else {
        uVar3 = uVar7;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) goto LAB_1084d7354;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    puVar6 = auStack_f0;
    lVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1084d74ac; end: 1084d7577; -[SCMyStoriesDatabaseStore deletePlaybackSequencesForStoryType:storyIdsToKeep:completionQueue:completion:] */

void FUN_1084d74ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084d7578;
  puStack_60 = &UNK_1108b27f8;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1,param_2,&puStack_78,param_5,param_6);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 1084d7578; end: 1084d758b;  */

void FUN_1084d7578(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deletePlaybackSequencesForStory_11255c2d8,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1084d758c; end: 1084d75ab;  */

void FUN_1084d758c(undefined8 param_1,undefined8 param_2)

{
  FUN_1084d22f0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084d75ac; end: 1084d775f; -[SCMyStoriesDatabaseStore _deleteAllPlaybackSequences:] */

void FUN_1084d75ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfa4c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar3 = PTR_PTR_1126cf440;
      FUN_108519710(PTR_PTR_1126cf440,*(undefined8 *)(lVar5 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  FUN_1084db5bc(param_3);
  _objc_release(param_1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_3);
  __Unwind_Resume();
  func_0x00010c0f8500(*(undefined8 *)(lVar2 + 8));
  return;
}



/* Entry: 1084d7760; end: 1084d77c3; -[SCMyStoriesDatabaseStore deleteAllPlaybackSequences:completion:] */

void FUN_1084d7760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1084d77c4;
  puStack_20 = &UNK_11084f688;
  lStack_18 = param_1;
  func_0x00010c0f8500(*(undefined8 *)(param_1 + 8),param_2,&puStack_38,param_3,param_4);
  return;
}



/* Entry: 1084d77c4; end: 1084d77cf;  */

void FUN_1084d77c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteAllPlaybackSequences__11255c0e0,param_2);
  return;
}



/* Entry: 1084d77d0; end: 1084d78eb; +[SCMyStoriesDatabaseStore shouldKeepMyCustomStoryWhenEmpty:currentUserId:] */

bool FUN_1084d77d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((((uVar4 & 1) == 0) && (uVar2 = param_3, func_0x00010c27dd80(), uVar2 != 6)) &&
       (uVar2 = param_3, func_0x00010c27dd80(), uVar2 != 7)) {
      uVar2 = param_3;
      func_0x00010c27dd80(param_3);
      bVar1 = uVar2 == 10;
    }
    else {
      bVar1 = true;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1084d78ec; end: 1084d794f; -[SCMyStoriesDatabaseStore _checkStoryIdIsUUID:] */

bool FUN_1084d78ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x00010c057ea0();
  _objc_release();
  _objc_release(param_3);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1084d7950; end: 1084d7a87; -[SCMyStoriesDatabaseStore _getMyStoryTypeFromSnap:] */

undefined8 FUN_1084d7950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084d7a88; end: 1084d7ad3;  */

void FUN_1084d7a88(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1084d7ad4; end: 1084d7dbb; -[SCMyStoriesDatabaseStore _mergeLocalAndPostedSnapIds:postedSnapIdentifiers:] */

void FUN_1084d7ad4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c297e20(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c297e20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfc11c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = param_4;
    func_0x00010bfc11c0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_3;
    func_0x00010bfc11c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_4;
    func_0x00010c259b00(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_3;
    func_0x00010c259b00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c096600();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = param_4;
    func_0x00010c096600(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = param_3;
    func_0x00010c096600(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126cf3b0;
  _objc_alloc(PTR_PTR_1126cf3b0);
  func_0x00010c0607c0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084d7dbc; end: 1084d7f3f; -[SCMyStoriesDatabaseStore _mergeLocalAndPostedSnapCaptureInfo:postedCaptureInfo:] */

void FUN_1084d7dbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf93b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010bf93b00(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010bf93b00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_4;
    func_0x00010c1048c0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126cf3c8;
  _objc_alloc(PTR_PTR_1126cf3c8);
  lVar1 = param_3;
  func_0x00010bf28e60(param_3);
  lVar5 = param_3;
  func_0x00010c0ed100(param_3);
  func_0x00010bffafc0(puVar4,param_2,lVar1,lVar5,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084d7f40; end: 1084d8a9f; -[SCMyStoriesDatabaseStore _mergeLocalAndPostedMyStorySnap:postedSnap:] */

void FUN_1084d7f40(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf12320(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf12320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be5f9c0(param_1,param_2,lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf30da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf30da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5f9a0(param_1,param_2,lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  lVar1 = param_3;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0c5b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0c5b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,lVar1);
    _objc_release(lVar1);
  }
  puVar5 = puVar4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar1 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = lVar2;
  if (lVar2 == 0) {
    uStack_a8 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = param_4;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = lVar7;
  if (lVar7 == 0) {
    uStack_b0 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = lVar8;
  if (lVar8 == 0) {
    uStack_b8 = param_4;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar9 = param_3;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = lVar9;
  if (lVar9 == 0) {
    uStack_c0 = param_4;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar10 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = lVar10;
  if (lVar10 == 0) {
    uStack_c8 = param_3;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = param_4;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = lVar11;
  if (lVar11 == 0) {
    uStack_d0 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = param_4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = lVar13;
  if (lVar13 == 0) {
    uStack_d8 = param_4;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar14 = param_4;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = lVar15;
  if (lVar15 == 0) {
    uStack_e0 = param_4;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar16 = param_3;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = lVar16;
  if (lVar16 == 0) {
    uStack_e8 = param_4;
    func_0x00010bf4e880();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar17 = param_3;
  func_0x00010c094820();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = lVar17;
  if (lVar17 == 0) {
    uStack_f0 = param_4;
    func_0x00010c094820();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar18 = param_3;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = lVar18;
  if (lVar18 == 0) {
    uStack_f8 = param_4;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar19 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = lVar19;
  if (lVar19 == 0) {
    uStack_100 = param_4;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar20 = param_3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = lVar20;
  if (lVar20 == 0) {
    uStack_108 = param_4;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar21 = param_3;
  func_0x00010c141c40();
  lVar22 = param_3;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = lVar22;
  if (lVar22 == 0) {
    uStack_110 = param_4;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar23 = param_3;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  if (lVar23 == 0) {
    lVar24 = param_4;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar25 = param_3;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  if (lVar25 == 0) {
    lVar26 = param_4;
    func_0x00010bf5b3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar27 = param_3;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  if (lVar27 == 0) {
    lVar28 = param_4;
    func_0x00010bf42120();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c044c20(puVar6,param_2,lVar1,uStack_a8,uStack_b0,uVar3,uStack_b8,uStack_c0,uStack_c8,
                      uStack_d0,lVar12,param_1,uStack_d8,lVar14,uStack_e0,uStack_e8,uStack_f0,
                      uStack_f8,0,0,uStack_100,uStack_108,0,(char)lVar21);
  if (lVar27 == 0) {
    _objc_release(lVar28);
  }
  _objc_release(lVar27);
  if (lVar25 == 0) {
    _objc_release(lVar26);
  }
  _objc_release(lVar25);
  if (lVar23 == 0) {
    _objc_release(lVar24);
  }
  _objc_release(lVar23);
  if (lVar22 == 0) {
    _objc_release(uStack_110);
  }
  _objc_release(lVar22);
  if (lVar20 == 0) {
    _objc_release(uStack_108);
  }
  _objc_release(lVar20);
  if (lVar19 == 0) {
    _objc_release(uStack_100);
  }
  _objc_release(lVar19);
  if (lVar18 == 0) {
    _objc_release(uStack_f8);
  }
  _objc_release(lVar18);
  if (lVar17 == 0) {
    _objc_release(uStack_f0);
  }
  _objc_release(lVar17);
  if (lVar16 == 0) {
    _objc_release(uStack_e8);
  }
  _objc_release(lVar16);
  if (lVar15 == 0) {
    _objc_release(uStack_e0);
  }
  _objc_release(lVar15);
  _objc_release(lVar14);
  if (lVar13 == 0) {
    _objc_release(uStack_d8);
  }
  _objc_release(lVar13);
  _objc_release(lVar12);
  if (lVar11 == 0) {
    _objc_release(uStack_d0);
  }
  _objc_release(lVar11);
  if (lVar10 == 0) {
    _objc_release(uStack_c8);
  }
  _objc_release(lVar10);
  if (lVar9 == 0) {
    _objc_release(uStack_c0);
  }
  _objc_release(lVar9);
  if (lVar8 == 0) {
    _objc_release(uStack_b8);
  }
  _objc_release(lVar8);
  if (lVar7 == 0) {
    _objc_release(uStack_b0);
  }
  _objc_release(lVar7);
  if (lVar2 == 0) {
    _objc_release(uStack_a8);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1084d8aa0; end: 1084d8aab; -[SCMyStoriesDatabaseStore .cxx_destruct] */

void FUN_1084d8aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084d8aac; end: 1084d9167;  */

void FUN_1084d8aac(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084d910c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084d912c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084d912c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084d90a0:
                    /* WARNING: Could not recover jumptable at 0x0001084d90c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084d90a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084d912c;
    }
    goto code_r0x0001084d9120;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084d9120;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084d912c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084d912c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1084d913c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084d910c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084d9120:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084d912c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084d913c:
  return;
}



/* Entry: 1084d9168; end: 1084d91ef;  */

void FUN_1084d9168(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001084d91dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084d91f0; end: 1084d9323;  */

void FUN_1084d91f0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084d9318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084d9324; end: 1084d94b7;  */

undefined8 * FUN_1084d9324(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110a4fcc0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084d94b8; end: 1084d954f;  */

undefined8 * FUN_1084d94b8(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110a4fcc0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084d9550(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084d9550; end: 1084d95c7;  */

void FUN_1084d9550(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1084d95c8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1084d95c8; end: 1084d9603;  */

void FUN_1084d95c8(long *param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long alStack_e8 [2];
  char cStack_d1;
  undefined8 ******ppppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  
  if (param_2 >> 0x3d == 0) {
    plVar7 = param_1 + 2;
    FUN_1084d9618();
    *param_1 = (long)plVar7;
    param_1[1] = (long)plVar7;
    param_1[2] = (long)(plVar7 + param_2);
    return;
  }
  FUN_1084d9604();
  puVar6 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if ((puVar6[0x1b] & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(puVar6 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar7 = *(long **)(puVar6 + 0x38);
    goto code_r0x0001084d9cac;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") ISNULL";
    pcVar9 = (char *)0x8;
    goto code_r0x0001084d9ccc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") IS NOT NULL";
    pcVar9 = (char *)0xd;
    goto code_r0x0001084d9ccc;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar7 = *(long **)(puVar6 + 0x38);
    plVar4 = *(long **)(puVar6 + 0x40);
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar7 = plVar4;
code_r0x0001084d9c40:
                    /* WARNING: Could not recover jumptable at 0x0001084d9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
      goto code_r0x0001084d9c40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(puVar6 + 0x50) != *(long *)(puVar6 + 0x48)) {
      uVar10 = 0;
      pcVar9 = (char *)0x1;
      pcVar8 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_e8);
        pcVar2 = "?";
        if (uVar10 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar10 != 0) {
          uVar1 = 2;
        }
        plVar7 = alStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar7,0,pcVar2,uVar1);
        uStack_c8 = plVar7[1];
        ppppppuStack_d0 = (undefined8 ******)*plVar7;
        uStack_c0 = plVar7[2];
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = 0;
        uVar3 = uStack_c8;
        pppppppuVar5 = (undefined8 *******)ppppppuStack_d0;
        if (-1 < (long)uStack_c0) {
          uVar3 = uStack_c0 >> 0x38;
          pppppppuVar5 = &ppppppuStack_d0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppppppuVar5,uVar3);
        if ((long)uStack_c0 < 0) {
          __ZdlPv(ppppppuStack_d0);
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(alStack_e8[0]);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 3));
      goto code_r0x0001084d9ccc;
    }
    goto code_r0x0001084d9cc0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(puVar6 + 0x50) == *(long *)(puVar6 + 0x48)) goto code_r0x0001084d9cc0;
    uVar10 = 0;
    pcVar9 = (char *)0x1;
    pcVar8 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_e8);
      pcVar2 = "?";
      if (uVar10 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar10 != 0) {
        uVar1 = 2;
      }
      plVar7 = alStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar7,0,pcVar2,uVar1);
      uStack_c8 = plVar7[1];
      ppppppuStack_d0 = (undefined8 ******)*plVar7;
      uStack_c0 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      uVar3 = uStack_c8;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_d0;
      if (-1 < (long)uStack_c0) {
        uVar3 = uStack_c0 >> 0x38;
        pppppppuVar5 = &ppppppuStack_d0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppuVar5,uVar3);
      if ((long)uStack_c0 < 0) {
        __ZdlPv(ppppppuStack_d0);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(alStack_e8[0]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 3));
    goto code_r0x0001084d9ccc;
  case 0xe:
    pcVar8 = *(char **)(puVar6 + 0x10);
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    goto code_r0x0001084d9ccc;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_e8);
    plVar7 = alStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar7,0,"?",1);
    uStack_c8 = plVar7[1];
    ppppppuStack_d0 = (undefined8 ******)*plVar7;
    uStack_c0 = plVar7[2];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    uVar10 = uStack_c8;
    pppppppuVar5 = (undefined8 *******)ppppppuStack_d0;
    if (-1 < (long)uStack_c0) {
      uVar10 = uStack_c0 >> 0x38;
      pppppppuVar5 = &ppppppuStack_d0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppppppuVar5,uVar10);
    if ((long)uStack_c0 < 0) {
      __ZdlPv(ppppppuStack_d0);
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(alStack_e8[0]);
    }
  default:
    goto LAB_1084d9cdc;
  }
  plVar7 = *(long **)(puVar6 + 0x40);
code_r0x0001084d9cac:
  (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
code_r0x0001084d9cc0:
  pcVar8 = ")";
  pcVar9 = (char *)0x1;
code_r0x0001084d9ccc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar8,pcVar9);
LAB_1084d9cdc:
  return;
}



/* Entry: 1084d9604; end: 1084d9617;  */

void FUN_1084d9604(undefined8 param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long alStack_c8 [2];
  char cStack_b1;
  undefined8 ******ppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  
  puVar6 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if ((puVar6[0x1b] & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(puVar6 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar7 = *(long **)(puVar6 + 0x38);
    goto code_r0x0001084d9cac;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") ISNULL";
    pcVar9 = (char *)0x8;
    goto code_r0x0001084d9ccc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") IS NOT NULL";
    pcVar9 = (char *)0xd;
    goto code_r0x0001084d9ccc;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar7 = *(long **)(puVar6 + 0x38);
    plVar4 = *(long **)(puVar6 + 0x40);
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar7 = plVar4;
code_r0x0001084d9c40:
                    /* WARNING: Could not recover jumptable at 0x0001084d9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
      goto code_r0x0001084d9c40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(puVar6 + 0x50) != *(long *)(puVar6 + 0x48)) {
      uVar10 = 0;
      pcVar9 = (char *)0x1;
      pcVar8 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_c8);
        pcVar2 = "?";
        if (uVar10 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar10 != 0) {
          uVar1 = 2;
        }
        plVar7 = alStack_c8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar7,0,pcVar2,uVar1);
        uStack_a8 = plVar7[1];
        ppppppuStack_b0 = (undefined8 ******)*plVar7;
        uStack_a0 = plVar7[2];
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = 0;
        uVar3 = uStack_a8;
        pppppppuVar5 = (undefined8 *******)ppppppuStack_b0;
        if (-1 < (long)uStack_a0) {
          uVar3 = uStack_a0 >> 0x38;
          pppppppuVar5 = &ppppppuStack_b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppppppuVar5,uVar3);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(ppppppuStack_b0);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(alStack_c8[0]);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 3));
      goto code_r0x0001084d9ccc;
    }
    goto code_r0x0001084d9cc0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(puVar6 + 0x50) == *(long *)(puVar6 + 0x48)) goto code_r0x0001084d9cc0;
    uVar10 = 0;
    pcVar9 = (char *)0x1;
    pcVar8 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_c8);
      pcVar2 = "?";
      if (uVar10 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar10 != 0) {
        uVar1 = 2;
      }
      plVar7 = alStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar7,0,pcVar2,uVar1);
      uStack_a8 = plVar7[1];
      ppppppuStack_b0 = (undefined8 ******)*plVar7;
      uStack_a0 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      uVar3 = uStack_a8;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar3 = uStack_a0 >> 0x38;
        pppppppuVar5 = &ppppppuStack_b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppuVar5,uVar3);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppppppuStack_b0);
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(alStack_c8[0]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 3));
    goto code_r0x0001084d9ccc;
  case 0xe:
    pcVar8 = *(char **)(puVar6 + 0x10);
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    goto code_r0x0001084d9ccc;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_c8);
    plVar7 = alStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar7,0,"?",1);
    uStack_a8 = plVar7[1];
    ppppppuStack_b0 = (undefined8 ******)*plVar7;
    uStack_a0 = plVar7[2];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    uVar10 = uStack_a8;
    pppppppuVar5 = (undefined8 *******)ppppppuStack_b0;
    if (-1 < (long)uStack_a0) {
      uVar10 = uStack_a0 >> 0x38;
      pppppppuVar5 = &ppppppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppppppuVar5,uVar10);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(ppppppuStack_b0);
    }
    if (cStack_b1 < '\0') {
      __ZdlPv(alStack_c8[0]);
    }
  default:
    goto LAB_1084d9cdc;
  }
  plVar7 = *(long **)(puVar6 + 0x40);
code_r0x0001084d9cac:
  (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
code_r0x0001084d9cc0:
  pcVar8 = ")";
  pcVar9 = (char *)0x1;
code_r0x0001084d9ccc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar8,pcVar9);
LAB_1084d9cdc:
  return;
}



/* Entry: 1084d9618; end: 1084d964b;  */

void FUN_1084d9618(long param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_b8 [2];
  char cStack_a1;
  undefined8 *****pppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084d9cac;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084d9ccc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084d9ccc;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084d9c40:
                    /* WARNING: Could not recover jumptable at 0x0001084d9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084d9c40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_b8);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_98 = plVar6[1];
        pppppuStack_a0 = (undefined8 *****)*plVar6;
        uStack_90 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_98;
        ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
        if (-1 < (long)uStack_90) {
          uVar3 = uStack_90 >> 0x38;
          ppppppuVar5 = &pppppuStack_a0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_90 < 0) {
          __ZdlPv(pppppuStack_a0);
        }
        if (cStack_a1 < '\0') {
          __ZdlPv(alStack_b8[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084d9ccc;
    }
    goto code_r0x0001084d9cc0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084d9cc0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_b8);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_98 = plVar6[1];
      pppppuStack_a0 = (undefined8 *****)*plVar6;
      uStack_90 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_98;
      ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
      if (-1 < (long)uStack_90) {
        uVar3 = uStack_90 >> 0x38;
        ppppppuVar5 = &pppppuStack_a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppppuStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(alStack_b8[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084d9ccc;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084d9ccc;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_b8);
    plVar6 = alStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_98 = plVar6[1];
    pppppuStack_a0 = (undefined8 *****)*plVar6;
    uStack_90 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_98;
    ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar9 = uStack_90 >> 0x38;
      ppppppuVar5 = &pppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_90 < 0) {
      __ZdlPv(pppppuStack_a0);
    }
    if (cStack_a1 < '\0') {
      __ZdlPv(alStack_b8[0]);
    }
  default:
    goto LAB_1084d9cdc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084d9cac:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084d9cc0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084d9ccc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084d9cdc:
  return;
}



/* Entry: 1084d964c; end: 1084d9d07;  */

void FUN_1084d964c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084d9cac;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084d9ccc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084d9ccc;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084d9c40:
                    /* WARNING: Could not recover jumptable at 0x0001084d9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084d9c40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084d9ccc;
    }
    goto code_r0x0001084d9cc0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084d9cc0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084d9ccc;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084d9ccc;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1084d9cdc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084d9cac:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084d9cc0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084d9ccc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084d9cdc:
  return;
}



/* Entry: 1084d9d08; end: 1084d9d8f;  */

void FUN_1084d9d08(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001084d9d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084d9d90; end: 1084d9ec3;  */

void FUN_1084d9d90(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084d9eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084d9ec4; end: 1084d9f57;  */

undefined8 * FUN_1084d9ec4(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110a4fc60;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084d9f58; end: 1084d9fef;  */

undefined8 * FUN_1084d9f58(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110a4fc60;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084d9550(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084d9ff0; end: 1084da353;  */

void FUN_1084d9ff0(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x21;
  undefined8 *puVar5;
  undefined8 *unaff_x23;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined **appuStack_1f0 [9];
  undefined1 auStack_1a8 [24];
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126d9e08);
    if (param_1 == 0) {
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_180,param_1);
    }
    puVar2 = &uStack_1f1;
    FUN_108505908(puVar2);
    unaff_x21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_f0 = param_2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    puVar3 = unaff_x21;
    func_0x00010bf529e0(unaff_x21);
    func_0x000107c281a4(&uStack_210,puVar3);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(unaff_x21);
    puVar3 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar7 = *plStack_130;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar6 = *(undefined8 *)(lStack_138 + (long)puVar8 * 8);
          _objc_retain(uVar6);
          uStack_f8 = uVar6;
          func_0x000107c281a8(&uStack_210,&uStack_f8);
          _objc_release(uStack_f8);
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
    func_0x000107c281a0(appuStack_1f0,0xc,puVar2,&uStack_210);
    puStack_e8 = (undefined1 *)0x0;
    puStack_e0 = (undefined1 *)0x0;
    uStack_d8 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    unaff_x23 = &uStack_180;
    func_0x000107c310cc(unaff_x23,appuStack_1f0,&puStack_e8,&uStack_140);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    if (puStack_e8 != (undefined1 *)0x0) {
      puStack_e0 = puStack_e8;
      __ZdlPv();
    }
    plVar1 = plStack_188;
    appuStack_1f0[0] = &PTR_SUB_110862700;
    plStack_188 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_190;
    plStack_190 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_e8 = auStack_1a8;
    func_0x000107c27dd4(&puStack_e8);
    puStack_e8 = (undefined1 *)&uStack_210;
    func_0x000107c27dd4(&puStack_e8);
    _objc_release(unaff_x21);
    func_0x000107c27da8(&uStack_158);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
  }
  _objc_release(param_2);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(unaff_x23);
    if (puStack_e8 != (undefined1 *)0x0) {
      puStack_e0 = puStack_e8;
      __ZdlPv();
    }
    func_0x0001050048c0(appuStack_1f0);
    puStack_e8 = (undefined1 *)&uStack_210;
    func_0x000107c27dd4(&puStack_e8);
    _objc_release(unaff_x21);
    func_0x000104d96620(&uStack_180);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(lVar7);
    lVar4 = lVar7;
    func_0x000104bd46a0();
    pcStack_218 = FUN_1084da354;
    lStack_240 = lVar7;
    puStack_238 = unaff_x21;
    lStack_230 = param_2;
    lStack_228 = param_1;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d9e08);
    if (lVar4 == 0) {
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_280,lVar4);
    }
    lStack_298 = 0;
    lStack_290 = 0;
    uStack_288 = 0;
    uStack_29c = 0;
    puVar5 = &uStack_280;
    func_0x00010054c81c(puVar5,&lStack_298,&uStack_29c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_298 != 0) {
      lStack_290 = lStack_298;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_258);
    _objc_release(uStack_268);
    _objc_release(uStack_270);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084da354; end: 1084da42b;  */

void FUN_1084da354(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e08);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084da42c; end: 1084da553;  */

bool FUN_1084da42c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e08);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 1;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
  return puVar2 != (undefined8 *)0x0;
}



/* Entry: 1084da554; end: 1084da757;  */

void FUN_1084da554(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_2;
    FUN_1084d9ff0(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc0000000;
      pcStack_78 = FUN_1084db740;
      puStack_70 = &UNK_110a4fd20;
      uStack_68 = 0;
      lVar2 = param_4;
      func_0x000100504554(param_4,&puStack_88);
      puVar3 = PTR_PTR_1126d9e08;
      _objc_alloc(PTR_PTR_1126d9e08);
      func_0x00010c0472a0(param_1,param_1 + 86460.0);
      puVar4 = PTR_PTR_1126d9e10;
      FUN_108505e44(PTR_PTR_1126d9e10,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    else {
      puVar4 = PTR_PTR_1126d9e10;
      FUN_108506048(PTR_PTR_1126d9e10,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        *(double *)(puVar4 + 0x20) = param_1;
      }
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084da758; end: 1084dabb7;  */

undefined *
FUN_1084da758(double param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *puVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  undefined *puStack_198;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  double dStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  puVar3 = param_4;
  dVar12 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if ((puVar2 != (undefined *)0x0) &&
     (puVar2 = param_4, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    puStack_198 = param_2;
    FUN_1084d9ff0(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_198 == (undefined *)0x0) {
      func_0x00010c0ac920(param_5);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc0000000;
      pcStack_118 = FUN_1084db740;
      puStack_110 = &UNK_110a4fd20;
      unaff_x24 = param_4;
      dStack_108 = param_1;
      func_0x000100504554(param_4,&puStack_128);
      unaff_x23 = PTR_PTR_1126d9e08;
      _objc_alloc();
      func_0x00010c0472a0(param_1,param_1 + 86460.0);
      puVar2 = PTR_PTR_1126d9e10;
      puVar9 = unaff_x23;
      FUN_108505e44();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(unaff_x24);
    }
    else {
      unaff_x24 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      dVar12 = 0.0;
      puVar9 = puStack_198;
      func_0x00010c25a960();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(puVar9);
          }
          puVar10 = *(undefined **)((long)puVar8 * 8);
          _objc_retain(puVar10);
          puVar4 = puVar10;
          func_0x00010c259cc0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = unaff_x24;
          func_0x00010bf4b900();
          _objc_release(puVar4);
          if ((int)unaff_x22 != 0) {
            unaff_x22 = PTR_PTR_1126d9e18;
            _objc_alloc();
            puVar4 = puVar10;
            func_0x00010c259cc0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            dVar12 = param_1;
            func_0x00010c04d9a0(param_1);
            _objc_release(puVar10);
            _objc_release(puVar4);
            puVar10 = unaff_x22;
          }
          func_0x00010befa120(puVar3);
          _objc_release(puVar10);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
      puVar2 = PTR_PTR_1126d9e10;
      puVar9 = puStack_198;
      FUN_108506048();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined *)0x0;
      param_1 = dVar12;
      if (puVar2 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar2);
        unaff_x23 = puVar2;
        param_1 = dVar12;
      }
      _objc_release(puVar3);
      _objc_release(unaff_x24);
    }
    puVar3 = puVar2;
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puStack_198);
    dVar12 = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(puStack_198);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar10 = puVar3;
  _objc_retain();
  _objc_retain(puVar9);
  _objc_retain(puVar3);
  puVar4 = puVar9;
  func_0x00010c08fa60();
  if ((puVar4 != (undefined *)0x0) &&
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
    unaff_x22 = puVar2;
    puVar8 = puVar9;
    FUN_1084d9ff0(puVar2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new();
      if (puVar8 == (undefined *)0x0) {
        dVar12 = 2.2250738585072014e-308;
      }
      else {
        func_0x00010c26f320(puVar8);
      }
      _objc_release(puVar8);
      unaff_x23 = PTR_PTR_1126d9e18;
      _objc_alloc();
      func_0x00010c04d9a0(0);
      puVar4 = PTR_PTR_1126d9e08;
      _objc_alloc(PTR_PTR_1126d9e08);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0472a0(dVar12,dVar12 + 86460.0,puVar4);
      _objc_release(puVar8);
      puVar11 = PTR_PTR_1126d9e10;
      puVar8 = puVar4;
      FUN_108505e44(PTR_PTR_1126d9e10,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(unaff_x23);
    }
    else {
      _objc_retain(unaff_x22);
      _objc_retain(puVar3);
      unaff_x23 = unaff_x22;
      func_0x00010c25a960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x23;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x23);
          }
          uVar5 = *(ulong *)((long)puVar11 * 8);
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          puVar10 = puVar3;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) {
            puVar11 = (undefined *)0x0;
            goto LAB_1084dad98;
          }
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        puVar4 = unaff_x23;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x23);
      puVar8 = unaff_x22;
      func_0x00010c25a960(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar8;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126d9e18;
      _objc_alloc(PTR_PTR_1126d9e18);
      func_0x00010c04d9a0(0);
      puVar10 = puVar8;
      func_0x00010befa120(unaff_x23);
      _objc_release(puVar8);
      puVar11 = PTR_PTR_1126d9e10;
      puVar8 = unaff_x22;
      FUN_108506048(PTR_PTR_1126d9e10,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != (undefined *)0x0) {
        puVar10 = unaff_x23;
        _objc_setProperty_nonatomic_copy(puVar11);
      }
LAB_1084dad98:
      _objc_release(unaff_x23);
      _objc_release(puVar3);
      _objc_release(unaff_x22);
    }
    if (puVar11 != (undefined *)0x0) {
      puVar10 = puVar11;
      func_0x00010c25ed40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(unaff_x22);
    _objc_release(puVar11);
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar10);
  puVar2 = puVar4;
  FUN_1084d9ff0(puVar4,puVar8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    FUN_1084db128(puVar2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c25ed40(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar9 = (undefined *)0x1;
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar4);
  return puVar9;
}



/* Entry: 1084dabb8; end: 1084db033;  */

undefined * FUN_1084dabb8(double param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *unaff_x22;
  undefined *puVar8;
  undefined *unaff_x23;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar6 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if ((puVar2 != (undefined *)0x0) &&
     (puVar2 = param_4, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) {
    unaff_x22 = param_2;
    puVar8 = param_3;
    FUN_1084d9ff0(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new();
      if (puVar8 == (undefined *)0x0) {
        param_1 = 2.2250738585072014e-308;
      }
      else {
        func_0x00010c26f320(puVar8);
      }
      _objc_release(puVar8);
      unaff_x23 = PTR_PTR_1126d9e18;
      _objc_alloc();
      func_0x00010c04d9a0(0);
      puVar2 = PTR_PTR_1126d9e08;
      _objc_alloc(PTR_PTR_1126d9e08);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c0472a0(param_1,param_1 + 86460.0,puVar2);
      _objc_release(puVar8);
      puVar9 = PTR_PTR_1126d9e10;
      puVar8 = puVar2;
      FUN_108505e44(PTR_PTR_1126d9e10,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(unaff_x23);
    }
    else {
      _objc_retain(unaff_x22);
      _objc_retain(param_4);
      unaff_x23 = unaff_x22;
      func_0x00010c25a960();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x23;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x23);
          }
          uVar3 = *(ulong *)((long)puVar9 * 8);
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          puVar6 = param_4;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_1084dad98;
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = unaff_x23;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x23);
      puVar8 = unaff_x22;
      func_0x00010c25a960(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar8;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126d9e18;
      _objc_alloc(PTR_PTR_1126d9e18);
      func_0x00010c04d9a0(0);
      puVar6 = puVar8;
      func_0x00010befa120(unaff_x23);
      _objc_release(puVar8);
      puVar9 = PTR_PTR_1126d9e10;
      puVar8 = unaff_x22;
      FUN_108506048(PTR_PTR_1126d9e10,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 != (undefined *)0x0) {
        puVar6 = unaff_x23;
        _objc_setProperty_nonatomic_copy(puVar9);
      }
LAB_1084dad98:
      _objc_release(unaff_x23);
      _objc_release(param_4);
      _objc_release(unaff_x22);
    }
    if (puVar9 != (undefined *)0x0) {
      puVar6 = puVar9;
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(unaff_x22);
    _objc_release(puVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar6);
  puVar9 = puVar2;
  FUN_1084d9ff0(puVar2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar9;
    FUN_1084db128(puVar9,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c25ed40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined *)0x1;
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar2);
  return puVar8;
}



/* Entry: 1084db034; end: 1084db127;  */

undefined8 FUN_1084db034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_1084d9ff0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1084db128(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    if (lVar2 != 0) {
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar3 = 1;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1084db128; end: 1084db40b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084db1e8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084db128(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar7 = param_1;
  func_0x00010c25a960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar10 = param_1;
  func_0x00010c25a960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar10);
      }
      uVar8 = *(ulong *)((long)puVar11 * 8);
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      if ((uVar2 & 1) == 0) {
        func_0x00010befa120(puVar1);
      }
      puVar11 = puVar11 + 1;
    } while (puVar7 != puVar11);
    puVar7 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  puVar7 = puVar1;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126d9e10;
    puVar4 = param_1;
    FUN_108506454();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = puVar1;
    func_0x00010bf529e0();
    puVar10 = param_1;
    func_0x00010c25a960();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    if (puVar7 == puVar11) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126d9e10;
      puVar4 = param_1;
      FUN_108506048();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar7);
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  puVar10 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    puVar7 = puVar4;
    func_0x00010c08fa60();
    if (puVar7 != (undefined *)0x0) {
      puVar1 = puVar10;
      FUN_1084da354();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (puVar7 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(puVar1);
          }
          lVar3 = *(long *)((long)puVar9 * 8);
          puVar11 = puVar4;
          FUN_1084db128(lVar3,puVar4);
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010c25ed40(puVar10);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(lVar3);
          puVar9 = puVar9 + 1;
        } while (puVar7 != puVar9);
        puVar7 = puVar1;
        func_0x00010bf52a60();
      }
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
    puVar7 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar10);
    __Unwind_Resume();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar1 = puVar7;
    FUN_1084da354();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar1);
        }
        puVar11 = *(undefined **)((long)puVar10 * 8);
        puVar9 = PTR_PTR_1126d9e10;
        FUN_108506454(PTR_PTR_1126d9e10,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar1;
      func_0x00010bf52a60();
    }
    _objc_release(puVar1);
    puVar4 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar7);
    __Unwind_Resume();
    _objc_retain(puVar11);
    puVar7 = PTR_PTR_1126d9e18;
    _objc_alloc(PTR_PTR_1126d9e18);
    func_0x00010c04d9a0(*(undefined8 *)(puVar4 + 0x20));
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084db40c; end: 1084db5bb;  */

void FUN_1084db40c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    unaff_x21 = param_1;
    FUN_1084da354();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(unaff_x21);
        }
        lVar3 = *(long *)(lVar7 * 8);
        lVar5 = param_2;
        FUN_1084db128(lVar3,param_2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = unaff_x21;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar7 = lVar2;
  FUN_1084da354();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar5 = *(long *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126d9e10;
      FUN_108506454(PTR_PTR_1126d9e10,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar6 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain(lVar5);
  puVar4 = PTR_PTR_1126d9e18;
  _objc_alloc(PTR_PTR_1126d9e18);
  func_0x00010c04d9a0(*(undefined8 *)(lVar6 + 0x20));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084db5bc; end: 1084db73f;  */

void FUN_1084db5bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  FUN_1084da354();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      param_2 = *(undefined8 *)(lVar6 * 8);
      puVar4 = PTR_PTR_1126d9e10;
      FUN_108506454(PTR_PTR_1126d9e10,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126d9e18;
  _objc_alloc(PTR_PTR_1126d9e18);
  func_0x00010c04d9a0(*(undefined8 *)(lVar3 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084db740; end: 1084db7a3;  */

void FUN_1084db740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d9e18;
  _objc_alloc(PTR_PTR_1126d9e18);
  func_0x00010c04d9a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084db7a4; end: 1084db7bf;  */

undefined ** FUN_1084db7a4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3098;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee02f8;
  }
  return ppuVar1;
}



/* Entry: 1084db7c0; end: 1084db7f3;  */

void FUN_1084db7c0(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3098;
  if (param_2 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee02f8;
  }
  FUN_1084db7f4(param_1,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084db7f4; end: 1084dba4f;  */

void FUN_1084db7f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e20);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_108529b44();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x000107c310cc(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000107c27dd4(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000107c27dd4(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084dba50; end: 1084dbf1b;  */

void FUN_1084dba50(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong auStack_178 [17];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *apuStack_a8 [3];
  long *plStack_90;
  long *plStack_88;
  long lStack_70;
  
  puVar9 = &uStack_260;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf529e0();
  if (lVar14 == 0) {
    _objc_opt_class(PTR_PTR_1126d9e20);
    if (param_1 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_f0,param_1);
    }
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_1b8 = (undefined **)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_200 = (undefined **)((ulong)uStack_200._4_4_ << 0x20);
    pppuVar4 = &ppuStack_f0;
    pppuVar8 = &ppuStack_1c0;
    func_0x00010054c81c(pppuVar4,pppuVar8,&uStack_200);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_1c0 != (undefined **)0x0) {
      ppuStack_1b8 = ppuStack_1c0;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_c8);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d9e20);
    if (param_1 == 0) {
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1f8 = 0;
      uStack_200 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_200,param_1);
    }
    puVar3 = &uStack_201;
    FUN_108529b44(puVar3);
    _objc_retain(param_2);
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_220 = (undefined *)0x0;
    lVar14 = param_2;
    func_0x00010bf529e0(param_2);
    func_0x000107c281a4(&puStack_220,lVar14);
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_1c0 = (undefined **)0x0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(param_2);
    lVar14 = param_2;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar11 = *plStack_1b0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(param_2);
          }
          uVar10 = *(ulong *)((long)ppuStack_1b8 + lVar13 * 8);
          _objc_retain(uVar10);
          auStack_178[0] = uVar10;
          func_0x000107c281a8(&puStack_220,auStack_178);
          _objc_release(auStack_178[0]);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = param_2;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(param_2);
    _objc_release(param_2);
    func_0x000107c281a0(&ppuStack_f0,0xc,puVar3,&puStack_220);
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_1b8 = (undefined **)0x0;
    plStack_1b0 = (long *)0x0;
    auStack_178[0] = auStack_178[0] & 0xffffffff00000000;
    pppuVar4 = (undefined ***)&uStack_200;
    pppuVar8 = &ppuStack_f0;
    func_0x000107c310cc(pppuVar4,pppuVar8,&ppuStack_1c0,auStack_178);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_1c0 != (undefined **)0x0) {
      ppuStack_1b8 = ppuStack_1c0;
      __ZdlPv();
    }
    plVar2 = plStack_88;
    ppuStack_f0 = &PTR_SUB_110862700;
    plStack_88 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_1c0 = apuStack_a8;
    func_0x000107c27dd4(&ppuStack_1c0);
    ppuStack_1c0 = &puStack_220;
    func_0x000107c27dd4(&ppuStack_1c0);
    func_0x000107c27da8(&uStack_1d8);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain(pppuVar4);
  pppuVar6 = pppuVar4;
  func_0x00010bf52a60();
  if (pppuVar6 != (undefined ***)0x0) {
    lVar14 = *plStack_250;
    do {
      pppuVar15 = (undefined ***)0x0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(pppuVar4);
        }
        lVar12 = *(long *)(lStack_258 + (long)pppuVar15 * 8);
        lVar11 = lVar12;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar11;
        func_0x00010c08fa60();
        _objc_release(lVar11);
        if (lVar13 != 0) {
          func_0x00010c259cc0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(lVar12);
        }
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuVar6 != pppuVar15);
      pppuVar6 = pppuVar4;
      puVar9 = &uStack_260;
      func_0x00010bf52a60();
    } while (pppuVar6 != (undefined ***)0x0);
  }
  _objc_release(pppuVar4);
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  lVar14 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain(puVar9);
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea3098;
    if (pppuVar8 != (undefined ***)0x1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee02f8;
    }
    _objc_retain(ppuVar1);
    lVar11 = lVar14;
    FUN_1084db7f4(lVar14,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      puVar7 = PTR_PTR_1126d9e20;
      _objc_alloc(PTR_PTR_1126d9e20);
      func_0x00010c04d7a0();
      puVar5 = PTR_PTR_1126d9e28;
      FUN_108529f70(PTR_PTR_1126d9e28,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    else {
      puVar5 = PTR_PTR_1126d9e28;
      FUN_10852a1c0(PTR_PTR_1126d9e28,lVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    func_0x00010c25ed40(lVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar11);
    _objc_release(ppuVar1);
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084dbf1c; end: 1084dc0ab;  */

void FUN_1084dbf1c(long param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3098;
  if (param_2 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee02f8;
  }
  _objc_retain(ppuVar1);
  lVar2 = param_1;
  FUN_1084db7f4(param_1,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d9e20;
    _objc_alloc(PTR_PTR_1126d9e20);
    func_0x00010c04d7a0();
    puVar4 = PTR_PTR_1126d9e28;
    FUN_108529f70(PTR_PTR_1126d9e28,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar4 = PTR_PTR_1126d9e28;
    FUN_10852a1c0(PTR_PTR_1126d9e28,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar4);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084dc0ac; end: 1084dc183;  */

void FUN_1084dc0ac(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3098;
  if (param_2 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee02f8;
  }
  lVar2 = param_1;
  FUN_1084db7f4(param_1,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d9e28;
    FUN_10852a600(PTR_PTR_1126d9e28,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


