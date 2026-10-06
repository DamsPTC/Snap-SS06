/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10640a24c; end: 10640a253; -[SCAdDataSourceDependencies promotedStoryLogger] */

undefined8 FUN_10640a24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 10640a254; end: 10640a50b; -[SCAdDataSourceDependencies .cxx_destruct] */

void FUN_10640a254(long param_1)

{
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10640a50c; end: 10640a52b;  */

undefined8 FUN_10640a50c(ulong param_1)

{
  if (param_1 < 0x10) {
    return *(undefined8 *)(&UNK_10dddbe68 + param_1 * 8);
  }
  return 0;
}



/* Entry: 10640a52c; end: 10640a69f;  */

bool FUN_10640a52c(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  puVar2 = PTR_PTR_1126b5bc0;
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar3 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar4 = uVar3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    if (uVar6 == 0) {
      bVar1 = false;
    }
    else {
      uVar6 = uVar3;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c24a0e0();
      if ((int)uVar7 == 5) {
        bVar1 = true;
      }
      else {
        uVar7 = uVar3;
        func_0x00010c24a0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c24a0e0();
        if ((int)uVar8 == 2) {
          bVar1 = true;
        }
        else {
          uVar8 = uVar3;
          func_0x00010c24a0a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c24a0e0();
          bVar1 = (int)uVar9 == 1;
          _objc_release(uVar8);
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10640a6a0; end: 10640a74b;  */

bool FUN_10640a6a0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126b5bc0;
  if ((uVar2 & 1) == 0) {
    bVar4 = false;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bfa0a00(uVar2);
    _objc_release(uVar2);
    bVar4 = 0 < (long)uVar3;
  }
  _objc_release(param_1);
  return bVar4;
}



/* Entry: 10640a74c; end: 10640a91b;  */

void FUN_10640a74c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126b5bc0;
  uVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c9a80;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_10640a8e4;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10640a91c;
    uStack_40 = 0x10640a92c;
    uStack_38 = 0;
    func_0x00010c0bebc0(uVar2);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010c15f2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_10640a8e4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10640a91c; end: 10640a933;  */

void FUN_10640a91c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10640a934; end: 10640a9ab;  */

void FUN_10640a934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10640a9ac; end: 10640a9eb;  */

void FUN_10640a9ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640a9ec; end: 10640aa6f;  */

void FUN_10640a9ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10640a74c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_1;
      FUN_10643e418(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10640aa70; end: 10640b153;  */

uint FUN_10640aa70(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  _objc_retain();
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c082b20();
  if ((int)lVar1 == 0) {
    uVar6 = 0;
    goto LAB_10640ab58;
  }
  lVar1 = param_1;
  func_0x00010bef60a0();
  if (lVar1 != 5) {
    lVar1 = param_1;
    func_0x00010bef60a0(param_1);
    uVar6 = (uint)(param_2 == 5 || lVar1 != 0x12);
    goto LAB_10640ab58;
  }
  uVar2 = param_5;
  if (param_2 == 2) {
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
LAB_10640ab24:
    uVar6 = (uint)uVar2;
    func_0x00010c0ec0c0();
    uVar7 = 0;
LAB_10640ab30:
    _objc_release(uVar2);
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    if (param_2 == 5) {
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10640ab24;
    }
    uVar6 = (uint)(param_2 == 6);
    uVar4 = (uint)(param_2 == 0xd);
    uVar5 = (uint)(param_2 == 7);
    if (param_2 == 0x11) {
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0ec0c0();
      uVar7 = (uint)uVar3;
      uVar6 = 0;
      goto LAB_10640ab30;
    }
    uVar7 = 0;
  }
  uVar6 = (uint)(param_2 == 0x15) | uVar5 | uVar7 | uVar4 | uVar6;
LAB_10640ab58:
  _objc_release(param_5);
  _objc_release(param_1);
  return uVar6 & 1;
}



/* Entry: 10640b154; end: 10640b273;  */

void FUN_10640b154(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ca218;
  _objc_retain();
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10640b274; end: 10640b337;  */

void FUN_10640b274(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        func_0x00010c242500(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c245680(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x0001085367d4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10640b338; end: 10640b4eb;  */

ulong FUN_10640b338(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c2118;
    uVar3 = 0xffffffffffffffff;
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0xffffffffffffffff;
      func_0x00010c0bdf40(uVar2);
      uVar3 = puStack_48[3];
      __Block_object_dispose(&uStack_50,8);
      _objc_release(uVar2);
    }
  }
  else {
    uVar3 = param_1;
    func_0x00010c29d360(param_1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10640b4ec; end: 10640b54b;  */

void FUN_10640b4ec(long param_1,undefined8 param_2)

{
  func_0x00010c29d360();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10640b54c; end: 10640b55b;  */

void FUN_10640b54c(void)

{
  return;
}



/* Entry: 10640b55c; end: 10640b58b;  */

void FUN_10640b55c(long param_1,undefined8 param_2)

{
  func_0x00010c29d360();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10640b58c; end: 10640b58f;  */

void FUN_10640b58c(void)

{
  return;
}



/* Entry: 10640b590; end: 10640b5b7;  */

undefined8 FUN_10640b590(ulong param_1)

{
  FUN_10643d634();
  if (param_1 < 0x10) {
    return *(undefined8 *)(&UNK_10dddbe68 + param_1 * 8);
  }
  return 0;
}



/* Entry: 10640b5b8; end: 10640b8b7;  */

ulong FUN_10640b5b8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfecde0();
  _objc_release(uVar4);
  _objc_retain(uVar2);
  uVar4 = uVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c0720c0();
  puVar7 = PTR_PTR_1126b8e08;
  if ((uVar10 & 1) == 0) {
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_class(puVar7);
    uVar8 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar7);
    uVar10 = uVar2;
    if ((uVar8 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar2);
    uVar8 = uVar10;
    func_0x00010bef4240();
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (uVar8 != 4) {
      if (0 < (long)uVar5) {
        uVar4 = uVar3;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        if (uVar5 - 1 < uVar10) {
          uVar4 = uVar3;
          func_0x00010bfcf800(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          goto LAB_10640b7a4;
        }
      }
      uVar5 = 0;
      goto LAB_10640b7a4;
    }
  }
  _objc_retain(uVar1);
  uVar5 = uVar1;
LAB_10640b7a4:
  uVar4 = param_2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = uVar4;
    FUN_10640b8b8(uVar4);
  }
  puVar7 = PTR_PTR_1126b8e08;
  _objc_retain(uVar2);
  _objc_opt_class(puVar7);
  uVar9 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar7);
  uVar8 = uVar2;
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar2);
  uVar9 = uVar8;
  func_0x00010bef4240();
  _objc_release(uVar8);
  uVar8 = 7;
  if (uVar9 != 4) {
    uVar8 = uVar10;
  }
  uVar10 = param_1;
  FUN_106441c8c(param_1,param_2);
  _objc_release(param_1);
  if ((int)uVar10 != 0) {
    uVar10 = uVar4;
    func_0x00010643e29c();
    uVar8 = 10;
    if ((int)uVar10 != 0) {
      uVar8 = 0xb;
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 10640b8b8; end: 10640ba1b;  */

ulong FUN_10640b8b8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar5 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar5 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      uVar5 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      puVar1 = PTR_PTR_1126b8e08;
      if ((uVar5 & 1) == 0) {
        _objc_retain(param_1);
        _objc_opt_class(puVar1);
        uVar4 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar1);
        uVar5 = param_1;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(param_1);
        uVar4 = uVar5;
        func_0x00010bef4240();
        _objc_release(uVar5);
        uVar5 = 7;
        if (uVar4 != 4) {
          uVar5 = 0xffffffffffffffff;
        }
      }
      else {
        uVar4 = param_1;
        func_0x0001085367d4(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf0e700();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x000108532b98();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar4);
      }
    }
    else {
      uVar4 = param_1;
      func_0x00010643e29c();
      uVar5 = 10;
      if ((int)uVar4 != 0) {
        uVar5 = 0xb;
      }
    }
  }
  else {
    uVar5 = 0xb;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10640ba1c; end: 10640bb7b;  */

void FUN_10640ba1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain();
    lVar1 = param_1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf5ee40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar6;
    func_0x00010bfecde0();
    _objc_release(lVar6);
    if (lVar3 == 0x7fffffffffffffff) {
      lVar6 = 0;
    }
    else {
      func_0x00010bf529e0(lVar1);
      lVar3 = lVar1;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c25e980(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      lVar6 = lVar5;
      func_0x00010c25e980(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10640bb7c; end: 10640bc93;  */

void FUN_10640bb7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    FUN_10643f30c();
    lVar3 = lVar4;
    if ((int)lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010bfce580(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    lVar4 = param_1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfecde0();
    _objc_release(lVar4);
    if (lVar2 == 0x7fffffffffffffff) {
      lVar4 = 0;
    }
    else {
      func_0x00010bf529e0();
      lVar4 = lVar1;
      func_0x00010c25e980(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10640bc94; end: 10640bd67;  */

void FUN_10640bc94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  do {
    lVar1 = param_1;
    func_0x00010bfce660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
  } while ((int)lVar4 != 0 && lVar1 != 0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10640bd68; end: 10640c3db;  */

void FUN_10640bd68(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
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
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  lVar1 = param_1;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if ((uVar5 & 1) == 0) {
      lVar1 = param_1;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10640c3dc;
      puStack_88 = &UNK_110921618;
      _objc_retain(param_7);
      lVar2 = lVar1;
      uStack_80 = param_7;
      func_0x000100504554(lVar1,&puStack_a0);
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010bf529e0();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (lVar1 != 0) {
        uVar3 = param_2;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar4 = PTR____NSArray0__struct_11034ab48;
        if (uVar5 != 0) {
          func_0x00010c125be0(param_4);
          puVar6 = param_9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_9);
          }
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f8 = 0xc2000000;
          uStack_f0 = 0x10640c460;
          puStack_e8 = &UNK_110921678;
          _objc_retain(param_6);
          puStack_e0 = puVar4;
          puStack_d8 = puVar7;
          puStack_d0 = puVar8;
          uStack_b8 = param_6;
          _objc_retain(param_7);
          uStack_b0 = param_7;
          _objc_retain(param_8);
          uStack_a8 = param_8;
          _objc_retain(puVar6);
          puStack_c8 = puVar6;
          _objc_retain(param_11);
          uStack_c0 = param_11;
          func_0x00010bf97e80(lVar2);
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_10640c6a0;
          puStack_110 = &UNK_1109216a8;
          _objc_retain(param_7);
          puVar10 = puVar7;
          uStack_108 = param_7;
          func_0x00010bd86870(puVar7,puVar9,&puStack_128);
          _objc_release(puVar9);
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
          puStack_150 = puVar12;
          uStack_148 = 0xc2000000;
          uStack_140 = 0x10640c75c;
          puStack_138 = &UNK_1109216a8;
          _objc_retain(param_7);
          puVar11 = puVar8;
          uStack_130 = param_7;
          func_0x00010bd86870(puVar8,puVar9,&puStack_150);
          _objc_release(puVar9);
          puStack_178 = puVar12;
          uStack_170 = 0xc2000000;
          uStack_168 = 0x10640c818;
          puStack_160 = &UNK_1109216d8;
          _objc_retain(param_8);
          puVar9 = puVar10;
          uStack_158 = param_8;
          func_0x000100504554(puVar10,&puStack_178);
          puStack_1a0 = puVar12;
          uStack_198 = 0xc2000000;
          uStack_190 = 0x10640c8c4;
          puStack_188 = &UNK_1109216d8;
          _objc_retain(param_8);
          puVar12 = puVar11;
          uStack_180 = param_8;
          func_0x000100504554(puVar11,&puStack_1a0);
          puVar13 = puVar9;
          func_0x000100504554(puVar9,&PTR___NSConcreteGlobalBlock_110921708);
          puVar14 = puVar12;
          func_0x000100504554(puVar12,&PTR___NSConcreteGlobalBlock_110921728);
          puVar15 = puVar9;
          func_0x00010bf529e0();
          if (puVar15 != (undefined *)0x0) {
            func_0x00010c066c20(param_14);
          }
          puVar15 = puVar11;
          func_0x00010bf529e0();
          if (puVar15 != (undefined *)0x0) {
            uVar3 = param_2;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar3 != 0) {
              puVar15 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
              func_0x00010c0ecd40(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_2;
              func_0x00010be36bc0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(param_10);
              _objc_release(uVar3);
              _objc_release(puVar15);
            }
          }
          _objc_retain(puVar4);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(uStack_180);
          _objc_release(puVar9);
          _objc_release(uStack_158);
          _objc_release(puVar11);
          _objc_release(uStack_130);
          _objc_release(puVar10);
          _objc_release(uStack_108);
          _objc_release(uStack_c0);
          _objc_release(puStack_c8);
          _objc_release(uStack_a8);
          _objc_release(uStack_b0);
          _objc_release(uStack_b8);
          _objc_release(puVar4);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(uVar5);
      }
      _objc_release(lVar2);
      _objc_release(uStack_80);
    }
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10640c3dc; end: 10640c62b;  */

void FUN_10640c3dc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (**(code **)(uVar1 + 0x10))(uVar1,param_2);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = 0;
    if (uVar1 <= uVar3) {
      uVar4 = param_2;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10640c62c; end: 10640c69f;  */

void FUN_10640c62c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  return;
}



/* Entry: 10640c6a0; end: 10640c96f;  */

void FUN_10640c6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  pcVar4 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar4)(lVar3,param_2);
  uVar1 = param_2;
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c25e980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf09f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10640c970; end: 10640c97f;  */

void FUN_10640c970(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_ID_11254df68);
  return;
}



/* Entry: 10640c980; end: 10640ca4b;  */

void FUN_10640c980(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ca5f0;
  _objc_retain();
  _objc_opt_self(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca5f0;
  _objc_opt_new(PTR_PTR_1126ca5f0);
  lVar3 = param_1;
  func_0x00010c119620(param_1,param_2,&PTR____CFConstantStringClassReference_110e4e338,puVar1,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((lVar3 == 0) ||
     ((lVar4 = lVar3, func_0x00010bf60300(), (int)lVar4 < 1 &&
      (lVar4 = lVar3, func_0x00010bfda6c0(), (int)lVar4 == 0)))) {
    lVar4 = 0;
  }
  else {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10640ca4c; end: 10640cbf3;  */

void FUN_10640ca4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = lVar1;
      FUN_10640bb7c(lVar1,param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010640cb0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10640cbf4; end: 10640d3e3;  */

undefined * FUN_10640cbf4(long param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  puVar3 = param_2;
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10640d38c;
  }
  puVar3 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  func_0x0001006372a4(puVar2,&PTR___NSConcreteGlobalBlock_110921798);
  _objc_release(puVar3);
  puVar3 = *(undefined **)(param_1 + 0x28);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 == puVar3) {
    puVar3 = param_2;
    func_0x00010bf5f0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bfecde0();
    _objc_release(puVar3);
    if (puVar9 != (undefined *)0x7fffffffffffffff) {
LAB_10640ce0c:
      func_0x00010bf529e0();
      goto LAB_10640ce24;
    }
    puVar3 = param_2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    if (puVar9 != (undefined *)0x0) {
      puVar3 = param_2;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010bf5f0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010bfecde0();
      _objc_release(puVar9);
      _objc_release(puVar3);
      puVar3 = param_2;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar14 + 1 < puVar9) {
        puVar3 = param_2;
        func_0x00010c084fc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010bfecde0();
        _objc_release(puVar9);
        _objc_release(puVar3);
        if (puVar14 != (undefined *)0x7fffffffffffffff) goto LAB_10640ce0c;
      }
    }
    puStack_160 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    func_0x00010bf529e0();
LAB_10640ce24:
    puStack_160 = puVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_10643d634();
  FUN_10640a50c();
  uVar4 = uVar1;
  func_0x00010643d740();
  func_0x00010bb1577c();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x40) == 1) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    _objc_retain(puStack_160);
    _objc_retain(uVar13);
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
    _objc_retain(puStack_160);
    puVar9 = puStack_160;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puStack_160);
          }
          uVar5 = uVar13;
          func_0x00010bf63e60();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126b5bc0;
          _objc_opt_class(PTR_PTR_1126b5bc0);
          uVar12 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar11);
          if ((uVar12 & 1) != 0) {
            _objc_retain(uVar5);
            uVar12 = uVar5;
            func_0x00010bf0e700(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108532b98();
            FUN_10640a50c();
            _objc_release(uVar12);
            uVar12 = uVar5;
            func_0x00010bf0e700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            uVar6 = uVar12;
            func_0x0001085330a8();
            func_0x00010bb1577c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar12);
            puVar11 = PTR_PTR_1126bdc38;
            _objc_alloc(PTR_PTR_1126bdc38);
            func_0x00010c04e340();
            func_0x00010befa120(puVar3);
            _objc_release(puVar11);
            _objc_release(uVar6);
          }
          _objc_release(uVar5);
          puVar14 = puVar14 + 1;
        } while (puVar9 != puVar14);
        puVar9 = puStack_160;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puStack_160);
    _objc_release(uVar13);
    _objc_release(puStack_160);
    _objc_retain(puVar3);
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar3);
    puVar14 = puVar3;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar10 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
          func_0x00010c25b720();
          func_0x00010c25b7c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          func_0x00010befa120(puVar9);
          _objc_release(puVar7);
          puVar11 = puVar11 + 1;
        } while (puVar14 != puVar11);
        puVar14 = puVar3;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar14 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar9);
    _objc_release(puVar3);
    puVar11 = PTR_PTR_1126bdc38;
    _objc_alloc(PTR_PTR_1126bdc38);
    if (puVar14 < (undefined *)0x2) {
      func_0x00010c04e340();
      puVar14 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      func_0x00010c04e340();
      puVar14 = puVar3;
      func_0x000100504554(puVar3,&PTR___NSConcreteGlobalBlock_110921808);
    }
LAB_10640d254:
    _objc_release(puVar3);
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
      puVar11 = PTR_PTR_1126bdc38;
      _objc_alloc(PTR_PTR_1126bdc38);
      func_0x00010c04e340();
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x10640d460;
      puStack_140 = &UNK_1109217b8;
      puVar3 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar3);
      puVar14 = puStack_160;
      puStack_138 = puVar3;
      func_0x000100504554(puStack_160,&puStack_158);
      puVar3 = puStack_138;
      goto LAB_10640d254;
    }
    puVar11 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR_PTR_1126bdd28;
  _objc_opt_class();
  uVar13 = uVar1;
  _objc_opt_isKindOfClass();
  uVar5 = uVar1;
  if ((uVar13 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd30;
    _objc_opt_class();
    uVar13 = uVar1;
    _objc_opt_isKindOfClass();
    if ((uVar13 & 1) != 0) {
      func_0x00010bf45500();
      _objc_retainAutoreleasedReturnValue();
LAB_10640d300:
      uVar13 = uVar5;
      func_0x000108f51d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar13;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      goto LAB_10640d32c;
    }
    puVar3 = PTR_PTR_1126c2118;
    _objc_opt_class();
    uVar13 = uVar1;
    _objc_opt_isKindOfClass();
    if ((uVar13 & 1) != 0) {
      func_0x00010853723c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10640d300;
    }
    uVar12 = 0;
  }
  else {
    func_0x00010bf454e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
LAB_10640d32c:
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126bdc40;
  _objc_alloc(PTR_PTR_1126bdc40);
  func_0x00010c0472c0();
  _objc_release(uVar12);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(puStack_160);
  _objc_release(puVar2);
LAB_10640d38c:
  _objc_release(uVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  if (puVar3 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x00010c27dd80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c0720c0(puVar3);
    puVar9 = (undefined *)(ulong)((uint)puVar9 ^ 1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return puVar9;
}



/* Entry: 10640d3e4; end: 10640d4eb;  */

uint FUN_10640d3e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0720c0(param_2);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(puVar1);
    _objc_release(param_2);
  }
  return uVar3;
}



/* Entry: 10640d4ec; end: 10640d53b;  */

void FUN_10640d4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca5f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c047c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10640d53c; end: 10640d5cf;  */

void FUN_10640d53c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  FUN_10640c980();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) || (uVar1 = param_2, func_0x00010bf60300(), (int)uVar1 < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    FUN_10640ca4c(param_1,1,uVar1 & 0xffffffff,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10640d5d0; end: 10640d6b7;  */

void FUN_10640d5d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  FUN_10640c980();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar1 = param_2;
    func_0x00010c104fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbc4a0();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010bf60300(param_2);
    uVar3 = param_2;
    func_0x00010c104fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfbc4c0();
    _objc_release(uVar3);
    if (0 < (int)uVar2) {
      uVar5 = param_1;
      FUN_10640ca4c(param_1,uVar2 & 0xffffffff,
                    (uint)uVar1 & ((int)(uint)uVar1 >> 0x1f ^ 0xffffffffU),
                    (uint)uVar4 & ((int)(uint)uVar4 >> 0x1f ^ 0xffffffffU),0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10640d690;
    }
  }
  uVar5 = 0;
LAB_10640d690:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10640d6b8; end: 10640d7e3;  */

void FUN_10640d6b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f480();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    FUN_10640d53c(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10640d7e4; end: 10640d8e7; -[SCAdMidrollDynamicInsertionManager initWithRuleTrackerFactory:adConfigProvider:crossInventoryInsertionRuleTracker:] */

undefined1 *
FUN_10640d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10640d8e8; end: 10640da5b; -[SCAdMidrollDynamicInsertionManager subscribeToDatasource:] */

void FUN_10640d8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 8,param_3);
  uVar8 = param_3;
  func_0x00010c101620(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c260240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c101340(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c260220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c0f7300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010c260200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  iVar6 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010befa160(uVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar2 = lVar1;
  func_0x00010bdf6b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = param_5;
    _objc_retain(puVar5);
    uVar8 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined **)(lVar1 + 0x48) = puVar5;
    _objc_release(uVar8);
    func_0x00010c286980(lVar2);
    func_0x00010bdf6b20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (iVar6 == 0) {
      func_0x00010c164460();
    }
    else {
      func_0x00010c164440();
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10640da5c; end: 10640db0f; -[SCAdMidrollDynamicInsertionManager updateCurrentInsertionRuleConfiguration:isFirstSessionAd:adProductType:] */

void FUN_10640da5c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf6b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x50) = param_5;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    func_0x00010c286980(lVar1,param_2,param_3);
    func_0x00010bdf6b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      func_0x00010c164460();
    }
    else {
      func_0x00010c164440();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10640db10; end: 10640dbdf; -[SCAdMidrollDynamicInsertionManager subscribeToPlaylistGroupChange:] */

void FUN_10640db10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10640dbe0; end: 10640dc27;  */

void FUN_10640dbe0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1013a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10640dc28; end: 10640de43; -[SCAdMidrollDynamicInsertionManager playlistGroupOnNext:] */

void FUN_10640dc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c101360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c101360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar6 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf57180(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_3;
    func_0x00010c101360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar5);
    lVar6 = param_1;
    func_0x00010bdf6b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164440();
    _objc_release(lVar6);
    func_0x00010bdf6b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0ec620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c113cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1647a0(param_1);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(param_1);
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e4e3b8;
  uVar5 = param_3;
  func_0x00010c0ec620();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e4e3d8;
  uVar7 = param_3;
  uStack_58 = uVar5;
  func_0x00010c113cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_58;
  uStack_50 = uVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  _objc_release(uVar5);
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10640de44;
  uStack_a0 = uVar1;
  uStack_98 = uVar7;
  uStack_90 = uVar5;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_a8,uVar2);
  _objc_copyWeak(auStack_b0,auStack_a8);
  puVar3 = puVar4;
  func_0x00010c25ff60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10640de44; end: 10640df13; -[SCAdMidrollDynamicInsertionManager subscribeToPendingAdSlotObservable:] */

void FUN_10640de44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10640df14; end: 10640df3f;  */

void FUN_10640df14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f7320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10640df40; end: 10640df47; -[SCAdMidrollDynamicInsertionManager pendingAdSlotOnNext] */

void FUN_10640df40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptInsert__112551ca8,3);
  return;
}



/* Entry: 10640df48; end: 10640e15b; -[SCAdMidrollDynamicInsertionManager subscribeToPlaylistItemView:] */

void FUN_10640df48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10640e15c;
  puStack_88 = &UNK_110921888;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = param_3;
  func_0x00010bfad7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10640e1b8;
  puStack_b0 = &UNK_110921888;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10640e214;
  puStack_d8 = &UNK_1109218b8;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar4 = uVar3;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_f8);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10640e15c; end: 10640e277;  */

long FUN_10640e15c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101660();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10640e278; end: 10640e2bf;  */

void FUN_10640e278(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067420();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10640e2c0; end: 10640e3c7; -[SCAdMidrollDynamicInsertionManager playlistItemViewUniqueFilter:] */

undefined8 FUN_10640e2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c101540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8fe0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdf6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1013c0(param_3);
  func_0x00010c1b9020(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdf6b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0760c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bdf6b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c1016a0(param_3);
    func_0x00010c206320(param_1,param_2,uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10640e3c8; end: 10640e447; -[SCAdMidrollDynamicInsertionManager playlistItemViewNonAdFilter:] */

uint FUN_10640e3c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  func_0x00010c06b7e0();
  uVar1 = param_1;
  func_0x00010bdf6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bfec880();
    _objc_release(uVar1);
    func_0x00010bdf6b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250880();
  }
  else {
    func_0x00010c2569e0();
    param_1 = uVar1;
  }
  _objc_release(param_1);
  return param_3 ^ 1;
}



/* Entry: 10640e448; end: 10640e51f; -[SCAdMidrollDynamicInsertionManager playlistItemViewToInsertionOpportunitySwitchMap:] */

void FUN_10640e448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10640e520; end: 10640e587;  */

void FUN_10640e520(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea9500();
  _objc_release(param_1);
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 10640e588; end: 10640e64f; -[SCAdMidrollDynamicInsertionManager _setUpInsertionRetryTimerIfNeededWithObserver:] */

void FUN_10640e588(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bdf6b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96200();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bdf6b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f240();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126bc890;
    func_0x00010c1503c0(param_1,PTR_PTR_1126bc890,param_3,param_4,PTR_s_next__112614028,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5c98,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10640e650; end: 10640e67b; -[SCAdMidrollDynamicInsertionManager insertionOpportunityOnNext:] */

void FUN_10640e650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd0c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptInsert__112551ca8,param_3);
  return;
}



/* Entry: 10640e67c; end: 10640e8cb; -[SCAdMidrollDynamicInsertionManager _attemptInsert:] */

/* WARNING: Possible PIC construction at 0x00010640e85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010640e820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010640e860) */
/* WARNING: Removing unreachable block (ram,0x00010640e824) */
/* WARNING: Removing unreachable block (ram,0x00010640e894) */

void FUN_10640e67c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010bf90d40();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c0f72a0();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf546c0();
        goto LAB_10640e89c;
      }
    }
  }
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0f72e0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
    goto code_r0x00010be54da0;
  }
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0f72c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar7 = 1;
    goto code_r0x00010be54da0;
  }
  uVar3 = param_1;
  func_0x00010bdf6b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067460();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c230360();
  _objc_release(uVar4);
  if ((int)uVar7 == 0) {
LAB_10640e7bc:
    if ((uVar2 & 1) != 0) {
      lVar6 = param_1 + 8;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c066500();
      _objc_release(lVar6);
      uVar2 = param_1;
      func_0x00010bdf6b20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139560();
      _objc_release(uVar2);
      func_0x00010bdf6b20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164460();
LAB_10640e89c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else if ((int)uVar2 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c245cc0();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    FUN_1063fdab4(uVar2,uVar4);
    _objc_release(uVar5);
    _objc_release(uVar7);
    goto LAB_10640e7bc;
  }
  uVar7 = 1;
code_r0x00010be54da0:
                    /* WARNING: Could not recover jumptable at 0x00010be54db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logInsertionRuleStatusWithAdRea_112572d08,uVar7);
  return;
}



/* Entry: 10640e8cc; end: 10640e997; -[SCAdMidrollDynamicInsertionManager _logInsertionRuleStatusWithAdReady:] */

void FUN_10640e8cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf51e00(puVar3);
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,
             *(undefined8 *)(puVar3 + 0x28));
  return;
}



/* Entry: 10640e998; end: 10640e9a3; -[SCAdMidrollDynamicInsertionManager _currentInsertionRuleTracker] */

void FUN_10640e998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10640e9a4; end: 10640ea23; -[SCAdMidrollDynamicInsertionManager .cxx_destruct] */

void FUN_10640e9a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10640ea24; end: 10640edb3; -[SCAdPreparationManager initWithAdPodManager:adProvider:adConfigProvider:adConfigProviderV2:dpaConfigProvider:viewLocation:operaNavigationStyle:mediaFetcher:adMediaManager:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:mediaMetricsManager:mediaCoordinator:p2pDataSource:skOverlayPreloader:skOverlayParamsBuilder:watermarkEventsTracker:] */

undefined8 *
FUN_10640ea24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
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
  puStack_70 = PTR_PTR_1126f1258;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_19;
    _objc_release(uVar2);
    func_0x00010c222620(puVar1);
    puVar1[0x10] = param_9;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
  }
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10640edb4; end: 10640eed7; -[SCAdPreparationManager requestAdWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:] */

void FUN_10640edb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdba8;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2808e0();
  func_0x00010c134820(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1
                      ,param_10,param_11,param_12,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10640eed8; end: 10640f163; -[SCAdPreparationManager requestAdWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:] */

void FUN_10640eed8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = &UNK_10f37b495;
  func_0x0001000ba800(&UNK_10f37b495);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == 0) {
LAB_10640efb8:
    lVar2 = param_1;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010c06a3c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar2 = param_3;
        func_0x00010bef4240();
        if (lVar2 == 7) goto LAB_10640efd4;
      }
      else {
        _objc_release();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7ba80();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126ca600;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar4;
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126afeb0;
      _objc_alloc(PTR_PTR_1126afeb0);
      uVar3 = param_6;
      func_0x00010c25b040(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e220(param_6);
      func_0x00010c04e0a0(puVar4);
      _objc_release(uVar3);
      func_0x00010be0f2c0(param_1);
      _objc_release(puVar4);
      goto LAB_10640f0e4;
    }
  }
  else {
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      _objc_release(uVar3);
      goto LAB_10640efb8;
    }
  }
LAB_10640efd4:
  if (in_stack_00000028 != 0) {
    (**(code **)(in_stack_00000028 + 0x10))(in_stack_00000028,0);
  }
LAB_10640f0e4:
  func_0x0001000e2a84(puVar1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10640f164; end: 10640f6cb; -[SCAdPreparationManager _fetchAdsWithTargetingParameters:adsPreferences:adProductType:loggingContext:engagement:adOrganicSignals:upcomingStoriesContext:unviewedEligibleStoryCount:requestTriggerType:brandSafetyInventoryType:willMakeRequest:completionBlock:] */

void FUN_10640f164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  FUN_1063fc8d0();
  _objc_release(uVar1);
  if ((int)uVar6 == 0) {
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR_PTR_1126ca610;
    _objc_alloc(PTR_PTR_1126ca610);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10640f93c;
    puStack_f8 = &UNK_110921948;
    _objc_copyWeak(auStack_e8,auStack_80);
    _objc_retain(in_stack_00000028);
    uStack_f0 = in_stack_00000028;
    _objc_copyWeak(auStack_118,auStack_80);
    _objc_retain(in_stack_00000028);
    func_0x00010c0596e0(puVar2);
    puVar3 = PTR_PTR_1126bdc50;
    func_0x00010bef3e60(PTR_PTR_1126bdc50);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29d360();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c0d90(lVar4,uVar1);
    func_0x00010bef66c0(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(in_stack_00000028);
    _objc_destroyWeak(auStack_118);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_80);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0xa8);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_alloc();
      func_0x00010bff4000();
    }
    else {
      func_0x00010c0ceca0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_initWeak(auStack_80,param_1);
    puVar5 = PTR_PTR_1126ca608;
    _objc_alloc(PTR_PTR_1126ca608);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010beffb60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    func_0x00010bf09f80(PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10640f6cc;
    puStack_98 = &UNK_1109218e8;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(in_stack_00000028);
    uStack_90 = in_stack_00000028;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10640f810;
    puStack_c8 = &UNK_110921918;
    _objc_copyWeak(auStack_b8,auStack_80);
    _objc_retain(in_stack_00000028);
    uStack_c0 = in_stack_00000028;
    func_0x00010c046ce0(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126bdc50;
    func_0x00010bef3e80(PTR_PTR_1126bdc50);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29d360();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c0d90(lVar4,uVar1);
    func_0x00010bef66c0(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar2);
  }
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10640f6cc; end: 10640f7a7;  */

void FUN_10640f6cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10640f7a8;
  puStack_58 = &UNK_110849230;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  uStack_38 = param_3;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10640f7a8; end: 10640f80f;  */

void FUN_10640f7a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be67860();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd3ec0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010640f800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,(uint)uVar1 ^ 1);
    return;
  }
  return;
}



/* Entry: 10640f810; end: 10640f8e3;  */

void FUN_10640f810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10640f8e4;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10640f8e4; end: 10640f93b;  */

void FUN_10640f8e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be67840();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010640f92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10640f93c; end: 10640fa0f;  */

void FUN_10640f93c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10640fa10;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10640fa10; end: 10640fa6f;  */

void FUN_10640fa10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be67840();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010640fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20) != 0);
    return;
  }
  return;
}



/* Entry: 10640fa70; end: 10640fb43;  */

void FUN_10640fa70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10640fb44;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10640fb44; end: 10640fb9b;  */

void FUN_10640fb44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be67840();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010640fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10640fb9c; end: 10640fd3f; -[SCAdPreparationManager _onAdTransformComplete:] */

void FUN_10640fb9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c082b20();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73dc0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010bef4240();
    lVar3 = param_1;
    func_0x00010c29d360(param_1);
    param_4 = *(long *)(param_1 + 0x18);
    lVar4 = param_3;
    FUN_10640aa70(param_3,lVar1,lVar3,param_4,*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28));
    if ((int)lVar4 != 0) {
      puVar5 = PTR_PTR_1126bdb78;
      _objc_alloc();
      puVar6 = puVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b480(puVar5);
      func_0x00010c1da300(param_1);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      param_4 = param_3;
      func_0x00010bf73da0(lVar1);
      _objc_release(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bef4c60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bfe5ec0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bdf1120(param_3);
  _objc_release(param_4);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10640fd40; end: 10640fddf; -[SCAdPreparationManager _onAdPodTransformComplete:error:] */

void FUN_10640fd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef4c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdf1120(param_1,param_2,uVar1,uVar2,param_4,0);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640fde0; end: 10640ffd7; -[SCAdPreparationManager _createPendingAdPodWithAdResponses:identifier:error:cacheUnusedAds:] */

void FUN_10640fde0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x98),param_2,param_5);
  }
  else {
    lVar1 = param_1;
    if ((param_6 & 1) == 0) {
      func_0x00010bee7700(param_1,param_2,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
    }
    else {
      uStack_78 = 0;
      func_0x00010bee7700(param_1,param_2,param_3,&uStack_78);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uStack_78;
      _objc_retain(uStack_78);
    }
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126bdb78;
      _objc_alloc(PTR_PTR_1126bdb78);
      if (param_4 == 0) {
        puVar3 = puVar6;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b480(puVar6,param_2,puVar3,lVar1);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c01b480(puVar6,param_2,param_4,lVar1);
      }
    }
    func_0x00010c1da300(param_1,param_2,puVar6);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10640ffd8;
    puStack_88 = &UNK_1109208a8;
    lStack_80 = param_1;
    func_0x00010bf97e80(lVar1,param_2,&puStack_a0);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10641007c;
    puStack_b0 = &UNK_1109208a8;
    lStack_a8 = param_1;
    func_0x00010bf97e80(uVar5,param_2,&puStack_c8);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10640ffd8; end: 10641007b;  */

void FUN_10640ffd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73dc0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f7700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73da0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10641007c; end: 1064100cf;  */

void FUN_10641007c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064100d0; end: 106410243; -[SCAdPreparationManager _validAdResponsesFromAdResponses:unviewedAdResponses:] */

void FUN_1064100d0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_b0;
  puVar8 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106410244;
  puStack_70 = &UNK_110921488;
  uStack_68 = param_1;
  func_0x000100504554(param_3,&puStack_88);
  ppuVar3 = &PTR___NSConcreteGlobalBlock_110921978;
  ppuVar1 = param_3;
  func_0x0001006372a4();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    _objc_retain(param_3);
    ppuVar1 = param_3;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_60 = ppuVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != (undefined8 *)0x0) {
      puStack_b0 = puVar6;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x1064102e0;
      puStack_98 = &UNK_1108af068;
      _objc_retain(ppuVar2);
      ppuVar3 = param_3;
      ppuStack_90 = ppuVar2;
      func_0x0001006372a4();
      _objc_retainAutorelease();
      *param_4 = ppuVar3;
      _objc_release();
      _objc_release(ppuStack_90);
      ppuVar3 = ppuVar4;
    }
  }
  _objc_release(ppuVar2);
  ppuVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcVar9 = FUN_106410244;
    _objc_retain(ppuVar3);
    ppuVar5 = ppuVar3;
    func_0x00010bef4240(ppuVar3);
    puVar6 = ppuVar4[4];
    func_0x00010c29d360(puVar6);
    puVar7 = ppuVar4[4];
    ppuVar4 = ppuVar3;
    FUN_10640aa70(ppuVar3,ppuVar5,puVar6,*(undefined8 *)(puVar7 + 0x18),
                  *(undefined8 *)(puVar7 + 0x20),*(undefined8 *)(puVar7 + 0x28),param_7,param_8,
                  ppuVar1,ppuVar2,param_3,param_4,puVar8,pcVar9);
    ppuVar1 = ppuVar3;
    if ((int)ppuVar4 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106410244; end: 1064102bf;  */

void FUN_106410244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef4240(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29d360(uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = param_2;
  FUN_10640aa70(param_2,uVar1,uVar2,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
                *(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064102c0; end: 1064102ff;  */

bool FUN_1064102c0(undefined8 param_1,long param_2)

{
  func_0x00010bef60a0(param_2);
  return param_2 == 0x12;
}



/* Entry: 106410300; end: 1064104fb; -[SCAdPreparationManager _onAdPodsTransformComplete:needRefresh:error:] */

void FUN_106410300(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
LAB_1064103b4:
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  else {
    if (param_4 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f480();
      _objc_release(uVar3);
      if (param_3 == 0) {
        if ((uVar4 & 1) != 0) goto LAB_1064103d0;
      }
      else {
        lVar2 = param_3;
        func_0x00010bfd3ec0();
        if (((uint)lVar2 & (uint)uVar4 & 1) != 0) goto LAB_1064103d0;
      }
      goto LAB_1064103b4;
    }
    func_0x00010c0cad20(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar2;
  _objc_release(uVar11);
LAB_1064103d0:
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010bf006c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  uVar4 = 0;
  lVar5 = lVar2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bdf56a0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar12 * 8),param_5,0);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      puVar8 = auStack_d8;
      uVar4 = 0;
      lVar5 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,puVar8);
    } while (lVar5 != 0);
  }
  _objc_release(lVar2);
  lVar5 = *(long *)(param_1 + 0xa8);
  func_0x00010bf006e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c1da300(param_1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(lVar5);
    _objc_retain(puVar8);
    lVar2 = lVar5;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      func_0x00010c196ee0(*(undefined8 *)(param_3 + 0x98),param_2,puVar8);
    }
    else {
      lVar10 = param_3;
      if ((uVar4 & 1) == 0) {
        func_0x00010bee7700(param_3,param_2,lVar2,0);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0;
      }
      else {
        uStack_198 = 0;
        func_0x00010bee7700(param_3,param_2,lVar2,&uStack_198);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uStack_198;
        _objc_retain(uStack_198);
      }
      lVar12 = lVar10;
      func_0x00010bf529e0();
      if (lVar12 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126bdb78;
        _objc_alloc();
        lVar12 = lVar5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) {
          lVar6 = lVar12;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b480(puVar13,param_2,lVar6,lVar10);
          _objc_release(lVar6);
        }
        else {
          func_0x00010c01b480(puVar13,param_2,lVar12,lVar10);
        }
        _objc_release(lVar12);
      }
      uVar7 = *(undefined8 *)(param_3 + 0xa8);
      func_0x00010c130fa0(uVar7,param_2,lVar5,puVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_3 + 0xa8);
      *(undefined8 *)(param_3 + 0xa8) = uVar7;
      _objc_release(uVar9);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_106410748;
      puStack_1b0 = &UNK_1109213d8;
      lStack_1a8 = param_3;
      puStack_1a0 = puVar13;
      _objc_retain(puVar13);
      func_0x00010bf97e80(lVar10,param_2,&puStack_1c8);
      puStack_1f0 = puVar1;
      uStack_1e8 = 0xc2000000;
      pcStack_1e0 = FUN_1064107cc;
      puStack_1d8 = &UNK_1109208a8;
      lStack_1d0 = param_3;
      func_0x00010bf97e80(uVar11,param_2,&puStack_1f0);
      uVar7 = *(undefined8 *)(param_3 + 0x98);
      *(undefined8 *)(param_3 + 0x98) = 0;
      _objc_release(uVar7);
      _objc_release(puStack_1a0);
      _objc_release(puVar13);
      _objc_release(lVar10);
      _objc_release(uVar11);
    }
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(lVar5);
    return;
  }
  return;
}



/* Entry: 1064104fc; end: 106410747; -[SCAdPreparationManager _createValidAdPodsWith:error:cacheUnusedAds:] */

void FUN_1064104fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x98),param_2,param_4);
  }
  else {
    lVar3 = param_1;
    if ((param_5 & 1) == 0) {
      func_0x00010bee7700(param_1,param_2,lVar2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
    }
    else {
      uStack_78 = 0;
      func_0x00010bee7700(param_1,param_2,lVar2,&uStack_78);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uStack_78;
      _objc_retain(uStack_78);
    }
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126bdb78;
      _objc_alloc();
      lVar4 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar5 = lVar4;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b480(puVar9,param_2,lVar5,lVar3);
        _objc_release(lVar5);
      }
      else {
        func_0x00010c01b480(puVar9,param_2,lVar4,lVar3);
      }
      _objc_release(lVar4);
    }
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c130fa0(uVar6,param_2,param_3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    _objc_release(uVar7);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106410748;
    puStack_90 = &UNK_1109213d8;
    lStack_88 = param_1;
    puStack_80 = puVar9;
    _objc_retain(puVar9);
    func_0x00010bf97e80(lVar3,param_2,&puStack_a8);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1064107cc;
    puStack_b8 = &UNK_1109208a8;
    lStack_b0 = param_1;
    func_0x00010bf97e80(uVar8,param_2,&puStack_d0);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar6);
    _objc_release(puStack_80);
    _objc_release(puVar9);
    _objc_release(lVar3);
    _objc_release(uVar8);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106410748; end: 1064107cb;  */

void FUN_106410748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73dc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064107cc; end: 10641081f;  */

void FUN_1064107cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106410820; end: 1064108f7; -[SCAdPreparationManager _getSmartAdPodForOrganicGarmBrandSafety:] */

void FUN_106410820(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if ((long)param_3 < 3) {
    if (param_3 < 2) {
LAB_106410888:
      lVar1 = *(long *)(param_1 + 0xa8);
      func_0x00010bf006e0();
      _objc_retainAutoreleasedReturnValue();
LAB_106410898:
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto joined_r0x000106410880;
    }
    if (param_3 == 2) {
      lVar1 = *(long *)(param_1 + 0xa8);
      func_0x00010c24d740();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106410898;
    }
  }
  else {
    if (param_3 == 4) goto LAB_106410888;
    if (param_3 != 3) goto LAB_1064108b8;
    lVar2 = *(long *)(param_1 + 0xa8);
    func_0x00010bfbbb00();
    _objc_retainAutoreleasedReturnValue();
joined_r0x000106410880:
    if (lVar2 != 0) goto LAB_1064108e4;
  }
LAB_1064108b8:
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bf006e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_1064108e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1064108f8; end: 1064109af; -[SCAdPreparationManager replacePendingInsertAdPodForOrganicGarmBrandSafety:adInsertionMetricsManager:adProductType:] */

bool FUN_1064108f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be22a20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0a04e0(uVar2,param_2,param_5,param_3,*(undefined8 *)(param_1 + 0xa8),lVar1);
  _objc_release(uVar2);
  if (lVar1 != 0) {
    func_0x00010c1da300(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 1064109b0; end: 106410b4b; -[SCAdPreparationManager reusePendingAdPod:] */

void FUN_1064109b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_PTR_1126bdb80;
  if (*(long *)(param_1 + 0xa0) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf21060();
  lVar1 = param_3;
  if (lVar6 != 1) {
    lVar1 = 0;
  }
  lVar7 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf21060();
  lVar6 = param_3;
  if (lVar9 != 2) {
    lVar6 = 0;
  }
  lVar10 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf21060();
  lVar9 = param_3;
  if (lVar12 != 3) {
    lVar9 = 0;
  }
  func_0x00010c01b6c0(puVar2,param_2,puVar3,lVar1,lVar6,lVar9);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0cad20(uVar13,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar13;
  _objc_release(uVar14);
  func_0x00010c1da300(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106410b4c; end: 10641109f; -[SCAdPreparationManager fetchMediaForPendingInsertAdWithSnapCount:mediaLoadContexts:playbackConfig:didDispatchAllFetches:completion:] */

void FUN_106410b4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1063fc8d0();
  _objc_release();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uStack_130 = 0;
    uStack_120 = 0x2020000000;
    uStack_118 = (code *)((ulong)uStack_118._4_4_ << 0x20);
    uVar2 = uVar1;
    puStack_128 = &uStack_130;
    _dispatch_group_create();
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bef4c60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_10641124c;
    puStack_258 = &UNK_1109219c8;
    _objc_retain(uVar2);
    uStack_250 = uVar2;
    lStack_248 = param_1;
    _objc_retain(param_4);
    uStack_240 = param_4;
    _objc_retain(param_5);
    uStack_238 = param_5;
    _objc_retain(param_3);
    lStack_230 = param_3;
    puStack_228 = &uStack_130;
    func_0x00010bf97e80(uVar6);
    _objc_release(uVar6);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))();
    }
    uVar6 = uVar1;
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_2a0 = puVar3;
    uStack_298 = 0xc2000000;
    uStack_290 = 0x10641133c;
    puStack_288 = &UNK_1108647e8;
    puStack_278 = &uStack_130;
    uStack_280 = param_7;
    _objc_retain();
    func_0x000100bc0718(uVar2,uVar6,&puStack_2a0);
    _objc_release(uVar6);
    _objc_release(uStack_280);
    _objc_release(lStack_230);
    _objc_release(uStack_238);
    _objc_release(uStack_240);
    _objc_release(uStack_250);
    _objc_release(param_7);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_130,8);
  }
  else {
    uVar2 = uVar1;
    _dispatch_group_create();
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    uStack_118 = FUN_1064110a0;
    uStack_110 = 0x1064110b0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    puStack_108 = puVar3;
    func_0x00010bf006c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lVar5 = *(long *)(param_1 + 0xa8);
    uStack_138 = uVar6;
    func_0x00010bf006c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar8 = *plStack_180;
      do {
        lVar9 = 0;
        do {
          if (*plStack_180 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          uVar4 = *(undefined8 *)(lStack_188 + lVar9 * 8);
          uVar6 = uVar4;
          func_0x00010bef4c60(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_1064110b8;
          puStack_1d0 = &UNK_110921998;
          _objc_retain(uVar2);
          uStack_1c8 = uVar2;
          lStack_1c0 = param_1;
          _objc_retain(param_4);
          uStack_1b8 = param_4;
          _objc_retain(param_5);
          uStack_1b0 = param_5;
          _objc_retain(param_3);
          puStack_198 = &uStack_130;
          uStack_1a8 = uVar4;
          lStack_1a0 = param_3;
          func_0x00010bf97e80(uVar6);
          _objc_release(uVar6);
          _objc_release(lStack_1a0);
          _objc_release(uStack_1b0);
          _objc_release(uStack_1b8);
          _objc_release(uStack_1c8);
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = lVar5;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar5);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))();
    }
    uVar6 = uVar1;
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_1064111f8;
    puStack_208 = &UNK_110849cb0;
    puStack_1f8 = &uStack_130;
    puStack_1f0 = &uStack_150;
    uStack_200 = param_7;
    _objc_retain();
    func_0x000100bc0718(uVar2,uVar6,&puStack_220);
    _objc_release(uVar6);
    _objc_release(uStack_200);
    __Block_object_dispose(&uStack_150,8);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
    _objc_release(param_7);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_150,8);
  lVar7 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 1064110a0; end: 1064110b7;  */

void FUN_1064110a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064110b8; end: 106411197;  */

void FUN_1064110b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010be125e0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106411198; end: 1064111f7;  */

void FUN_106411198(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064111f8; end: 10641124b;  */

void FUN_1064111f8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106411244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),
               lVar1 == *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
    return;
  }
  return;
}



/* Entry: 10641124c; end: 10641131f;  */

void FUN_10641124c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010be125e0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106411320; end: 106411367;  */

void FUN_106411320(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106411368; end: 10641141b; -[SCAdPreparationManager fetchMediaForAdDataModel:mediaLoadContexts:playbackConfig:completion:] */

void FUN_106411368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  func_0x00010be125e0(param_1,param_2,param_3,param_4,param_5,uVar2,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10641141c; end: 106411983; -[SCAdPreparationManager _fetchMediaForAdDataModel:mediaLoadContexts:playbackConfig:snapCount:completion:] */

void FUN_10641141c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  uint uStack_154;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if ((uVar2 < param_6) || (param_3 == 0)) {
    if (param_7 == 0) goto LAB_106411918;
    pcVar12 = *(code **)(param_7 + 0x10);
    uVar11 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bef60a0();
    if (uVar1 != 7) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 1;
      uVar2 = uVar1;
      _dispatch_group_create();
      if (param_6 != 0) {
        uStack_154 = 0;
        uVar13 = 0;
        do {
          uVar3 = param_3;
          func_0x00010bef52c0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = uVar4;
          func_0x00010c242040();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c274c60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bfe5ec0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x0001084c506c(uVar5,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _dispatch_group_enter(uVar2);
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4240(param_3);
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0xc2000000;
          pcStack_d0 = FUN_106411984;
          puStack_c8 = &UNK_1109219f8;
          lStack_c0 = param_1;
          _objc_retain(uVar4);
          uStack_b8 = uVar4;
          _objc_retain(uVar7);
          uStack_b0 = uVar7;
          puStack_a0 = &uStack_98;
          _objc_retain(uVar2);
          uStack_a8 = uVar2;
          func_0x00010bfa87a0(uVar11);
          _objc_release(uVar11);
          uVar3 = uVar4;
          func_0x00010bef60a0();
          if (uVar3 == 3) {
            uVar3 = uVar4;
            func_0x00010c242040();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bf20540();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c2a4740();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1d600();
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            func_0x00010bef5840();
            _dispatch_group_enter(uVar2);
            uVar11 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            func_0x00010bf5ac40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef60a0(param_3);
            uVar5 = uVar4;
            func_0x00010c242040(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf20540();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar6;
            func_0x00010c2a4740();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_100 = 0xc2000000;
            uStack_f8 = 0x10641199c;
            puStack_f0 = &UNK_110842e18;
            _objc_retain(uVar2);
            uStack_e8 = uVar2;
            func_0x00010c109d60(uVar11);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            _objc_release(uVar11);
            _objc_release(uStack_e8);
          }
          if ((uStack_154 & 1) == 0) {
            lVar10 = param_1;
            func_0x00010be77aa0();
            uStack_154 = (uint)lVar10;
          }
          else {
            uStack_154 = 1;
          }
          _objc_release(uStack_a8);
          _objc_release(uStack_b0);
          _objc_release(uStack_b8);
          _objc_release(uVar7);
          _objc_release(uVar4);
          uVar13 = uVar13 + 1;
        } while (param_6 != uVar13);
      }
      uVar13 = uVar1;
      func_0x00010c11de00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x1064119a4;
      puStack_120 = &UNK_1108647e8;
      _objc_retain(param_7);
      puStack_110 = &uStack_98;
      lStack_118 = param_7;
      func_0x000100bc0718(uVar2,uVar13,&puStack_138);
      _objc_release(uVar13);
      _objc_release(lStack_118);
      _objc_release(uVar2);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(uVar1);
      goto LAB_106411918;
    }
    if (param_7 == 0) goto LAB_106411918;
    pcVar12 = *(code **)(param_7 + 0x10);
    uVar11 = 1;
  }
  (*pcVar12)(param_7,uVar11);
LAB_106411918:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106411984; end: 1064119c7;  */

void FUN_106411984(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1064119c8; end: 106411b9f; -[SCAdPreparationManager _preloadSKOverlayForAd:adSnap:playbackConfig:mediaFetchGroup:] */

bool FUN_1064119c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x70) == 0) {
    bVar1 = false;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x78);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29d360(param_1);
    lVar3 = lVar9;
    func_0x00010bf22620(lVar9,param_2,param_3,param_4,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(lVar9);
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      _dispatch_group_enter(param_6);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c1089a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c270520(0x3f847ae147ae147b);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106411ba0;
      puStack_70 = &UNK_110849f28;
      _objc_retain(param_6);
      uVar8 = uVar7;
      uStack_68 = param_6;
      func_0x00010c25ff60(uVar7,param_2,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uStack_68);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  return bVar1;
}



/* Entry: 106411ba0; end: 106411ba7;  */

void FUN_106411ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106411ba8; end: 106411c27; -[SCAdPreparationManager currentPendingPodFirstAdLoadStatusWithSnapCount:] */

long FUN_106411ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bef4c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63ea0(param_1,param_2,uVar1,uVar3,param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106411c28; end: 106411d5f; -[SCAdPreparationManager dataModelLoadStatus:adData:snapCount:] */

ulong FUN_106411c28(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = (ulong)(param_3 != 0 || param_4 != 0);
    if (param_4 != 0) {
      func_0x00010c09c2e0(param_1,param_2,param_4,param_5);
      uVar3 = param_1;
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf98ec0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = 9;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf98ec0();
      _objc_release(lVar1);
      if (lVar2 == 3) {
        uVar3 = 10;
      }
      else {
        lVar1 = param_3;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf98ec0();
        _objc_release(lVar1);
        uVar3 = 0xb;
        if (lVar2 != 5) {
          uVar3 = 2;
        }
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}


