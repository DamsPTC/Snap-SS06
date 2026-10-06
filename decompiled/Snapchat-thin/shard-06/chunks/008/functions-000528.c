/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e1506c; end: 104e1512b;  */

void FUN_104e1506c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010bfb2040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e1512c; end: 104e15173;  */

undefined8 FUN_104e1512c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104e15174; end: 104e152c3;  */

void FUN_104e15174(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b0cb8;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    lVar7 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c008360();
    _objc_release(lVar7);
    puVar2 = puVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd8f20();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar4 != 0) {
      puVar2 = PTR_PTR_1126b0cc0;
      _objc_opt_new(PTR_PTR_1126b0cc0);
      func_0x00010c1b5d40();
      lVar7 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar7);
      lVar5 = lVar7;
      func_0x00010bee5d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e152c4; end: 104e15343;  */

void FUN_104e152c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bee5d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e15344; end: 104e15347; -[SCCTPCustomStickerMessagePresendUploadPlugin sendCompletedForMediaReference:] */

void FUN_104e15344(void)

{
  return;
}



/* Entry: 104e15348; end: 104e1534f; -[SCCTPCustomStickerMessagePresendUploadPlugin uploadMethod] */

undefined8 FUN_104e15348(void)

{
  return 2;
}



/* Entry: 104e15350; end: 104e1545b; -[SCCTPCustomStickerMessagePresendUploadPlugin _uploadResultFromItemInstance:] */

void FUN_104e15350(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 7;
  }
  else {
    puVar4 = PTR_PTR_1126b0cc8;
    func_0x00010bf5cd80(PTR_PTR_1126b0cc8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
  }
  puVar1 = PTR_PTR_1126b0cd0;
  _objc_alloc(PTR_PTR_1126b0cd0);
  puVar3 = PTR_PTR_1126b0cd8;
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c280(puVar1,param_2,uVar5,0,0,0,0,PTR____NSDictionary0__struct_11034ab58,0,0,puVar3
                      ,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b0ce0;
  _objc_alloc(PTR_PTR_1126b0ce0);
  func_0x00010c059be0();
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e1545c; end: 104e15467; -[SCCTPCustomStickerMessagePresendUploadPlugin .cxx_destruct] */

void FUN_104e1545c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e15468; end: 104e158b3; -[SCCTPCustomojiMessagePresendUploadPlugin uploadMediaReference:] */

void FUN_104e15468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x000107d6b14c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar16 & 1) == 0) {
      lVar4 = lVar2;
      func_0x00010bf0bec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lStack_70 = 0;
      puVar5 = PTR_PTR_1126b0cc0;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_70;
      _objc_retain(lStack_70);
      puVar16 = (undefined *)0x0;
      if (lVar1 == 0) {
        puVar16 = puVar5;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar16;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf1c2e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar16);
        puVar16 = puVar7;
        func_0x00010bfd61c0();
        if ((int)puVar16 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar5;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar16;
          func_0x00010bf1c360();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar16);
          puVar16 = puVar5;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar16;
          func_0x00010bf1c360();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          func_0x00010bfb7be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar16);
          puVar6 = puVar7;
          func_0x00010bf41a00();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar7;
          func_0x00010bf62ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar16;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar16 = puVar7;
          func_0x00010bf62ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar16;
          func_0x00010c1306a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar12 = PTR_PTR_1126ae560;
          _objc_opt_new();
          _objc_initWeak(auStack_78,param_1);
          puStack_a0 = &uStack_a8;
          uStack_a8 = 0;
          uStack_98 = 0x3032000000;
          pcStack_90 = FUN_104e158b4;
          uStack_88 = 0x104e158c4;
          uStack_80 = 0;
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010bfa6220();
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_b0,auStack_78);
          _objc_retain(puVar12);
          _objc_retain(lVar3);
          _objc_retain(puVar5);
          uVar14 = uVar13;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = puStack_a0[5];
          puStack_a0[5] = uVar14;
          _objc_release(uVar15);
          _objc_release(uVar13);
          puVar16 = puVar12;
          func_0x00010bfbc3e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(lVar3);
          _objc_release(puVar12);
          _objc_destroyWeak(auStack_b0);
          __Block_object_dispose(&uStack_a8,8);
          _objc_release(uStack_80);
          _objc_destroyWeak(auStack_78);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
      }
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(lVar4);
    }
    else {
      puVar16 = (undefined *)0x0;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 104e158b4; end: 104e158cb;  */

void FUN_104e158b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e158cc; end: 104e15a23;  */

void FUN_104e158cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104e15a24; end: 104e15a7b;  */

void FUN_104e15a24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee56c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e15a7c; end: 104e15a87;  */

void FUN_104e15a7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 104e15a88; end: 104e15bff; -[SCCTPCustomojiMessagePresendUploadPlugin _uploadBoltContentWithPromise:itemId:imageData:itemInstance:] */

void FUN_104e15a88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4ca20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010c28e7e0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e15c00; end: 104e15c6b;  */

void FUN_104e15c00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be26860();
    _objc_release(param_1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e15c6c; end: 104e15d7b; -[SCCTPCustomojiMessagePresendUploadPlugin _handleBoltUploadResultWithPromise:contentURL:itemInstance:] */

void FUN_104e15c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0ce8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c182a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0cc0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1c360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bee5d00(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf43d60(param_3,param_2,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e15d7c; end: 104e15d7f; -[SCCTPCustomojiMessagePresendUploadPlugin sendCompletedForMediaReference:] */

void FUN_104e15d7c(void)

{
  return;
}



/* Entry: 104e15d80; end: 104e15d87; -[SCCTPCustomojiMessagePresendUploadPlugin uploadMethod] */

undefined8 FUN_104e15d80(void)

{
  return 4;
}



/* Entry: 104e15d88; end: 104e15e93; -[SCCTPCustomojiMessagePresendUploadPlugin _uploadResultFromItemInstance:] */

void FUN_104e15d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 7;
  }
  else {
    puVar4 = PTR_PTR_1126b0cc8;
    func_0x00010bf5cd80(PTR_PTR_1126b0cc8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
  }
  puVar1 = PTR_PTR_1126b0cd0;
  _objc_alloc(PTR_PTR_1126b0cd0);
  puVar3 = PTR_PTR_1126b0cd8;
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c280(puVar1,param_2,uVar5,0,0,0,0,PTR____NSDictionary0__struct_11034ab58,0,0,puVar3
                      ,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b0ce0;
  _objc_alloc(PTR_PTR_1126b0ce0);
  func_0x00010c059be0();
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e15e94; end: 104e15ec3; -[SCCTPCustomojiMessagePresendUploadPlugin .cxx_destruct] */

void FUN_104e15e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e15ec4; end: 104e15f13; -[SCCTPItemMessagePresendUploadPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e15ec4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713b4c);
  _objc_destroyWeak(param_1 + _DAT_112713b48);
  _objc_destroyWeak(param_1 + _DAT_112713b44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713b50);
  return;
}



/* Entry: 104e15f14; end: 104e15fbb; -[SCPreviewFeatureCustomStickerPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e15f14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112713b5c;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c110ce0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112713b54;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c1018e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e15fbc; end: 104e15fff; -[SCPreviewFeatureCustomStickerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e15fbc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713b5c);
  _objc_destroyWeak(param_1 + _DAT_112713b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713b54);
  return;
}



/* Entry: 104e16000; end: 104e161db; -[SCDefaultEmojiSkinToneSelectionCell initWithFrame:] */

undefined1 * FUN_104e16000(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e4600;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3a420(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c16e9a0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x3ff0000000000000);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e161dc; end: 104e162e7; -[SCDefaultEmojiSkinToneSelectionCell traitCollectionDidChange:] */

void FUN_104e161dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e4600;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_1;
  func_0x00010bf14800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e162e8; end: 104e1639f; -[SCDefaultEmojiSkinToneSelectionCell setSkinToneSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e162e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined8 *)(param_1 + _DAT_112713b60) = param_3;
  puVar1 = PTR_PTR_1126b0d00;
  func_0x00010bfc50e0(PTR_PTR_1126b0d00,param_2,&PTR____CFConstantStringClassReference_110db6858,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0d08;
  _objc_alloc(PTR_PTR_1126b0d08);
  func_0x00010c00f540();
  puStack_38 = PTR_PTR_1126e4600;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSticker_presentationModelProv_112660428,puVar2,0,0,0,0,0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e163a0; end: 104e1640f; -[SCDefaultEmojiSkinToneSelectionCell setSelected:] */

void FUN_104e163a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c159320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e4600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setSelected__11265c598,param_3);
  return;
}



/* Entry: 104e16410; end: 104e1641f; -[SCDefaultEmojiSkinToneSelectionCell skinTone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e16410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713b60);
}



/* Entry: 104e16420; end: 104e1642b; -[SCDefaultEmojiSkinToneSelectionCell emojiFontSize] */

undefined8 FUN_104e16420(void)

{
  return 0x4040800000000000;
}



/* Entry: 104e1642c; end: 104e165cb; -[SCDefaultEmojiSkinToneSelectionCell _initSelectedBackgroundView] */

void FUN_104e1642c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4000000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110db6878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c19f0e0(0x4018000000000000,0x4018000000000000,0x4028000000000000,0x4028000000000000,
                      puVar2);
  func_0x00010befbb60(puVar1,param_2,puVar2);
  func_0x00010c1faee0(param_1,param_2,puVar1);
  func_0x00010c159320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e165cc; end: 104e165db; -[SCDefaultEmojiSkinToneSelectionCell setSkinTone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e165cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112713b60) = param_3;
  return;
}



/* Entry: 104e165dc; end: 104e1666b; -[SCDefaultEmojiSkinToneViewController initWithSkinToneSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e165dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112713b64;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e1666c; end: 104e166b3; -[SCDefaultEmojiSkinToneViewController loadView] */

void FUN_104e1666c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4608;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010be39840(param_1);
  return;
}



/* Entry: 104e166b4; end: 104e166b7; -[SCDefaultEmojiSkinToneViewController getTitle] */

void FUN_104e166b4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8178;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc8178,
                      &PTR____CFConstantStringClassReference_110f2c6b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e166b8; end: 104e166bb; -[SCDefaultEmojiSkinToneViewController collectionView:numberOfItemsInSection:] */

void FUN_104e166b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be655d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfItemsInView_112576f10);
  return;
}



/* Entry: 104e166bc; end: 104e16807; -[SCDefaultEmojiSkinToneViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e166bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_112713b68);
  func_0x00010bf6e0c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110db6898,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c142240();
  lVar6 = param_1;
  func_0x00010be655c0();
  if (lVar2 <= lVar6) {
    puVar3 = PTR_PTR_1126b0d00;
    func_0x00010bf8e8c0(PTR_PTR_1126b0d00);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c142240(param_4);
    puVar4 = puVar3;
    func_0x00010c0dfd20(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c067ec0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c202f00(lVar1,param_2,(long)(int)puVar5);
    lVar2 = lVar1;
    func_0x00010c23dec0();
    lVar6 = *(long *)(param_1 + _DAT_112713b64);
    func_0x00010c159560();
    func_0x00010c1fadc0(lVar1,param_2,lVar2 == lVar6);
    if (lVar2 == lVar6) {
      func_0x00010c158b60(param_3,param_2,param_4,0,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e16808; end: 104e16983; -[SCDefaultEmojiSkinToneViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e16808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  lVar6 = (long)_DAT_112713b6c;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    func_0x00010bf6e120(param_3,param_2,
                        *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,
                        &PTR____CFConstantStringClassReference_110db68b8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = param_3;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar1);
    puStack_48 = PTR_PTR_1126e4608;
    plVar2 = &lStack_50;
    lStack_50 = param_1;
    _objc_msgSendSuper2(plVar2,PTR_s_class_1125ac0b8);
    plVar3 = plVar2;
    func_0x000109201958();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
    _objc_retain(plVar2);
    func_0x00010c0bbfc0(plVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar5);
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104e16984; end: 104e16cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e16984(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e16cd4; end: 104e16d73; -[SCDefaultEmojiSkinToneViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e16cd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112713b68;
  lVar1 = *(long *)(param_1 + lVar3);
  if (param_3 == lVar1) {
    func_0x00010bf33b60(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c158b60(*(undefined8 *)(param_1 + lVar3),param_2,param_4,0,0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112713b64);
      lVar3 = lVar1;
      func_0x00010c23dec0(lVar1);
      func_0x00010c285080(uVar2,param_2,lVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e16d74; end: 104e16dd3; -[SCDefaultEmojiSkinToneViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_104e16d74(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c2a5f80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 104e16dd4; end: 104e16e33; -[SCDefaultEmojiSkinToneViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_104e16dd4(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf75820(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 104e16e34; end: 104e16e43; -[SCDefaultEmojiSkinToneViewController collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_104e16e34(void)

{
  return;
}



/* Entry: 104e16e44; end: 104e16e4b; -[SCDefaultEmojiSkinToneViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_104e16e44(void)

{
  return 0x4000000000000000;
}



/* Entry: 104e16e4c; end: 104e16e53; -[SCDefaultEmojiSkinToneViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104e16e4c(void)

{
  return 0;
}



/* Entry: 104e16e54; end: 104e16f17; -[SCDefaultEmojiSkinToneViewController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_104e16e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar4 = param_1;
  _objc_release(uVar1);
  puStack_48 = PTR_PTR_1126e4608;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  puVar3 = (undefined1 *)puVar2;
  func_0x000109201958();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(puVar2);
  _objc_release(param_4);
  _objc_release(puVar3);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 104e16f18; end: 104e17273; -[SCDefaultEmojiSkinToneViewController _initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e16f18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f93e0(0,0x4014000000000000,0,0x4014000000000000);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar5 = (long)_DAT_112713b68;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c1c9b40(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126b0d18;
  _objc_opt_class(PTR_PTR_1126b0d18);
  func_0x00010c126000(uVar4,param_2,puVar2,&PTR____CFConstantStringClassReference_110db6898);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
  func_0x00010c126060(uVar4,param_2,puVar2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,
                      &PTR____CFConstantStringClassReference_110db68b8);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104e17104;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e17274; end: 104e172b7; -[SCDefaultEmojiSkinToneViewController _numberOfItemsInView] */

undefined * FUN_104e17274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d00;
  func_0x00010bf8e8c0(PTR_PTR_1126b0d00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104e172b8; end: 104e172c7; -[SCDefaultEmojiSkinToneViewController skinToneSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e172b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713b64);
}



/* Entry: 104e172c8; end: 104e17307; -[SCDefaultEmojiSkinToneViewController setSkinToneSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e172c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713b64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e17308; end: 104e17317; -[SCDefaultEmojiSkinToneViewController defaultEmojiSkinTonePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e17308(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713b68);
}



/* Entry: 104e17318; end: 104e17357; -[SCDefaultEmojiSkinToneViewController setDefaultEmojiSkinTonePicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e17318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713b68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e17358; end: 104e17367; -[SCDefaultEmojiSkinToneViewController headerCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e17358(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713b6c);
}



/* Entry: 104e17368; end: 104e173a7; -[SCDefaultEmojiSkinToneViewController setHeaderCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e17368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713b6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e173a8; end: 104e173f7; -[SCDefaultEmojiSkinToneViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e173a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713b6c,0);
  _objc_storeStrong(param_1 + _DAT_112713b68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713b64,0);
  return;
}



/* Entry: 104e173f8; end: 104e174c7; -[SCEmojiSkinToneSettingsBusinessLogic initWithUIContainer:emojiSkinToneSettingViewController:emojiSkinToneSettingScopeDelegate:] */

undefined1 *
FUN_104e173f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4610;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c1fe4c0(param_4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e174c8; end: 104e174d3; -[SCEmojiSkinToneSettingsBusinessLogic begin] */

void FUN_104e174c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_attachUI__1125a0c08,*(undefined8 *)(param_1 + 0x10))
  ;
  return;
}



/* Entry: 104e174d4; end: 104e174df; -[SCEmojiSkinToneSettingsBusinessLogic end] */

void FUN_104e174d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104e174e0; end: 104e1751b; -[SCEmojiSkinToneSettingsBusinessLogic settingFinished] */

void FUN_104e174e0(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8e880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e1751c; end: 104e1751f; -[SCEmojiSkinToneSettingsBusinessLogic settingDismissed] */

void FUN_104e1751c(void)

{
  return;
}



/* Entry: 104e17520; end: 104e17557; -[SCEmojiSkinToneSettingsBusinessLogic .cxx_destruct] */

void FUN_104e17520(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e17558; end: 104e1766b; -[SCEmojiSkinToneSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e17558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b0d28;
  _objc_alloc_init(PTR_PTR_1126b0d28);
  puVar2 = PTR_PTR_1126b0d30;
  _objc_alloc(PTR_PTR_1126b0d30);
  func_0x00010c046c20();
  puVar3 = PTR_PTR_1126b0d38;
  _objc_alloc();
  lVar8 = (long)_DAT_112713b7c;
  lVar4 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar6 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056b40(puVar3,param_2,lVar5,puVar2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf17a60(puVar3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112713b80);
  *(undefined **)(param_1 + _DAT_112713b80) = puVar3;
  _objc_release(uVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e1766c; end: 104e176c3; -[SCEmojiSkinToneSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e1766c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112713b80));
  puStack_28 = PTR_PTR_1126e4618;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e176c4; end: 104e1770b; -[SCEmojiSkinToneSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e176c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713b84);
  _objc_destroyWeak(param_1 + _DAT_112713b7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713b80,0);
  return;
}



/* Entry: 104e1770c; end: 104e1777f; -[SCGrapheneCustomStickerMetric2 init] */

undefined1 * FUN_104e1770c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e17780; end: 104e178f3;  */

undefined ** FUN_104e17780(long param_1,undefined **param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110851c10,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110db68d8;
}



/* Entry: 104e178f4; end: 104e178ff; +[SCCMemoriesQuickCutSelectionFactory modulePath] */

undefined ** FUN_104e178f4(void)

{
  return &PTR____CFConstantStringClassReference_110db68d8;
}



/* Entry: 104e17900; end: 104e17907; +[SCCMemoriesQuickCutSelectionFactory asyncStrictMode] */

undefined8 FUN_104e17900(void)

{
  return 0;
}



/* Entry: 104e17908; end: 104e17977; -[SCCMemoriesQuickCutSelectionFactory createQuickCutSelectionServiceWithCameraRollProvider:] */

void FUN_104e17908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e17978; end: 104e17ae7; +[SCCMemoriesQuickCutSelectionFactory invokeWithJSRuntimeProvider:cameraRollProvider:completionHandler:] */

void FUN_104e17978(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104e17a5c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e17ae8; end: 104e17b0b; +[SCCMemoriesQuickCutSelectionFactory valdiMarshallableObjectDescriptor] */

void FUN_104e17ae8(undefined8 *param_1)

{
  *param_1 = &PTR_s_createQuickCutSelectionService_110851c70;
  param_1[1] = &PTR_s_SCCMemoriesDirectCameraRollProvi_110851ca0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 104e17b0c; end: 104e17b2f; +[SCCMemoriesQuickCutSelectionService valdiMarshallableObjectDescriptor] */

void FUN_104e17b0c(undefined8 *param_1)

{
  *param_1 = &PTR_s_selectItems_110851cb8;
  param_1[1] = &PTR_s_SCCMemoriesQuickCutSelectionResu_110851ce8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104e17b30; end: 104e17b37; -[SCCMemoriesQuickCutSelectionErrorCode__Enum init] */

void FUN_104e17b30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 104e17b38; end: 104e17b7f; -[SCCMemoriesQuickCutSelectionResult initWithItemIds:itemsRequested:errorCode:] */

void FUN_104e17b38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4628;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104e17b80; end: 104e17b9f; +[SCCMemoriesQuickCutSelectionResult valdiMarshallableObjectDescriptor] */

void FUN_104e17b80(undefined8 *param_1)

{
  *param_1 = &PTR_s_itemIds_110851cf8;
  param_1[1] = &PTR_s_SCCMemoriesQuickCutSelectionErro_110851d88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e17ba0; end: 104e17c13; -[SCGrapheneQuickCutMetric2 init] */

undefined1 * FUN_104e17ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e17c14; end: 104e17c8b;  */

void FUN_104e17c14(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110851d98,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e17c8c; end: 104e17e1f;  */

/* WARNING: Removing unreachable block (ram,0x000104e1854c) */

void FUN_104e17c8c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *unaff_x25;
  double dVar14;
  double dVar15;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 *****pppppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 *puStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 *****pppppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *****pppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined1 *****pppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  char acStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  char acStack_270 [23];
  char cStack_259;
  long lStack_258;
  undefined1 ****ppppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  dVar14 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    dVar14 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar14;
    pcVar2 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar3;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    param_3 = pcVar2;
    __Unwind_Resume();
    pcVar5 = acStack_100;
    pcStack_88 = FUN_104e17e20;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar2 = param_3;
    dVar15 = dVar14;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(param_3);
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e0,pcVar2);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      dVar15 = dVar14 * 1000.0;
      param_5 = (char *)(long)dVar15;
      pcVar2 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      param_4 = pcVar5;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        param_4 = pcVar5;
      }
      pcVar3 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      __Unwind_Resume();
      pcVar6 = acStack_180;
      pcStack_108 = FUN_104e17fb4;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar2;
      pcVar5 = param_4;
      ppuStack_110 = &puStack_90;
      _objc_retain(pcVar2);
      if (pcVar3 != (char *)0x0) {
        plVar10 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_160,pcVar1);
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        acStack_180[8] = '\0';
        acStack_180[9] = '\0';
        acStack_180[10] = '\0';
        acStack_180[0xb] = '\0';
        acStack_180[0xc] = '\0';
        acStack_180[0xd] = '\0';
        acStack_180[0xe] = '\0';
        acStack_180[0xf] = '\0';
        acStack_180[0x10] = '\0';
        acStack_180[0x11] = '\0';
        acStack_180[0x12] = '\0';
        acStack_180[0x13] = '\0';
        acStack_180[0x14] = '\0';
        acStack_180[0x15] = '\0';
        acStack_180[0x16] = '\0';
        acStack_180[0x17] = '\0';
        func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
        pcVar1 = "";
        (**(code **)(*plVar10 + 0x18))(plVar10);
        puStack_168 = acStack_180;
        func_0x00010007e5dc(&puStack_168);
        pcVar5 = pcVar6;
        param_5 = param_4;
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
          pcVar5 = pcVar6;
          param_5 = param_4;
        }
      }
      pcVar3 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcVar7 = acStack_200;
      pcStack_188 = FUN_104e18128;
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar1;
      pcVar6 = pcVar5;
      pppuStack_190 = &ppuStack_110;
      _objc_retain(pcVar1);
      if (pcVar3 != (char *)0x0) {
        plVar10 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_1e0,pcVar2);
        acStack_200[0] = '\0';
        acStack_200[1] = '\0';
        acStack_200[2] = '\0';
        acStack_200[3] = '\0';
        acStack_200[4] = '\0';
        acStack_200[5] = '\0';
        acStack_200[6] = '\0';
        acStack_200[7] = '\0';
        acStack_200[8] = '\0';
        acStack_200[9] = '\0';
        acStack_200[10] = '\0';
        acStack_200[0xb] = '\0';
        acStack_200[0xc] = '\0';
        acStack_200[0xd] = '\0';
        acStack_200[0xe] = '\0';
        acStack_200[0xf] = '\0';
        acStack_200[0x10] = '\0';
        acStack_200[0x11] = '\0';
        acStack_200[0x12] = '\0';
        acStack_200[0x13] = '\0';
        acStack_200[0x14] = '\0';
        acStack_200[0x15] = '\0';
        acStack_200[0x16] = '\0';
        acStack_200[0x17] = '\0';
        func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
        pcVar2 = "";
        (**(code **)(*plVar10 + 0x18))(plVar10);
        puStack_1e8 = acStack_200;
        func_0x00010007e5dc(&puStack_1e8);
        pcVar6 = pcVar7;
        param_5 = pcVar5;
        if (cStack_1c9 < '\0') {
          __ZdlPv(auStack_1e0[0]);
          pcVar6 = pcVar7;
          param_5 = pcVar5;
        }
      }
      pcVar3 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcStack_208 = FUN_104e1829c;
      lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar2;
      pcVar5 = pcVar6;
      pcVar7 = param_5;
      ppppuStack_210 = &pppuStack_190;
      _objc_retain(pcVar2);
      _objc_retain(pcVar6);
      _objc_retain(param_5);
      if (pcVar3 != (char *)0x0) {
        plVar10 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(acStack_2b8,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_2a0,pcVar1);
        _objc_retain(param_5);
        if (param_5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(param_5);
          pcVar1 = param_5;
          func_0x00010bdc3520(param_5);
        }
        _objc_release(param_5);
        func_0x00010002b838(auStack_288,pcVar1);
        unaff_x25 = acStack_270;
        pcVar1 = "true";
        if ((int)param_6 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(unaff_x25,pcVar1);
        acStack_2d8[0] = '\0';
        acStack_2d8[1] = '\0';
        acStack_2d8[2] = '\0';
        acStack_2d8[3] = '\0';
        acStack_2d8[4] = '\0';
        acStack_2d8[5] = '\0';
        acStack_2d8[6] = '\0';
        acStack_2d8[7] = '\0';
        acStack_2d8[8] = '\0';
        acStack_2d8[9] = '\0';
        acStack_2d8[10] = '\0';
        acStack_2d8[0xb] = '\0';
        acStack_2d8[0xc] = '\0';
        acStack_2d8[0xd] = '\0';
        acStack_2d8[0xe] = '\0';
        acStack_2d8[0xf] = '\0';
        acStack_2d8[0x10] = '\0';
        acStack_2d8[0x11] = '\0';
        acStack_2d8[0x12] = '\0';
        acStack_2d8[0x13] = '\0';
        acStack_2d8[0x14] = '\0';
        acStack_2d8[0x15] = '\0';
        acStack_2d8[0x16] = '\0';
        acStack_2d8[0x17] = '\0';
        func_0x00010007e1e8(acStack_2d8,acStack_2b8,&lStack_258,4);
        pcVar1 = "";
        param_6 = acStack_2d8;
        pcVar5 = acStack_2d8;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851f28,pcVar5,param_7);
        pcStack_2c0 = param_6;
        func_0x00010007e5dc(&pcStack_2c0);
        lVar11 = 0;
        pcVar7 = param_7;
        do {
          if ((&cStack_259)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)(acStack_270 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x60);
      }
      _objc_release(param_5);
      _objc_release(pcVar6);
      pcVar3 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(param_5);
      pcVar13 = acStack_2b8;
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != pcVar13);
      _objc_release(param_5);
      _objc_release(pcVar6);
      _objc_release(pcVar2);
      pcVar4 = pcVar3;
      __Unwind_Resume();
      pcStack_2e8 = FUN_104e18584;
      lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
      param_3 = pcVar1;
      pcVar8 = pcVar5;
      pcVar9 = pcVar7;
      pcStack_320 = param_6;
      pcStack_318 = pcVar13;
      pcStack_310 = pcVar3;
      pcStack_308 = param_5;
      pcStack_300 = pcVar6;
      pcStack_2f8 = pcVar2;
      pppppuStack_2f0 = &ppppuStack_210;
      _objc_retain(pcVar1);
      _objc_retain(pcVar5);
      puVar12 = (undefined8 *)0x0;
      if (pcVar4 != (char *)0x0) {
        plVar10 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        param_6 = (char *)auStack_358;
        func_0x00010002b838(auStack_358,pcVar2);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar2 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_340,pcVar2);
        acStack_378[0] = '\0';
        acStack_378[1] = '\0';
        acStack_378[2] = '\0';
        acStack_378[3] = '\0';
        acStack_378[4] = '\0';
        acStack_378[5] = '\0';
        acStack_378[6] = '\0';
        acStack_378[7] = '\0';
        acStack_378[8] = '\0';
        acStack_378[9] = '\0';
        acStack_378[10] = '\0';
        acStack_378[0xb] = '\0';
        acStack_378[0xc] = '\0';
        acStack_378[0xd] = '\0';
        acStack_378[0xe] = '\0';
        acStack_378[0xf] = '\0';
        acStack_378[0x10] = '\0';
        acStack_378[0x11] = '\0';
        acStack_378[0x12] = '\0';
        acStack_378[0x13] = '\0';
        acStack_378[0x14] = '\0';
        acStack_378[0x15] = '\0';
        acStack_378[0x16] = '\0';
        acStack_378[0x17] = '\0';
        func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
        param_3 = "";
        pcVar13 = acStack_378;
        pcVar8 = acStack_378;
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851f78,pcVar8,pcVar7);
        pcStack_360 = pcVar13;
        func_0x00010007e5dc(&pcStack_360);
        lVar11 = 0;
        puVar12 = auStack_358;
        pcVar9 = pcVar7;
        do {
          if ((&cStack_329)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x30);
      }
      _objc_release(pcVar5);
      pcVar2 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      if (cStack_341 < '\0') {
        __ZdlPv(auStack_358[0]);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      pcVar3 = pcVar2;
      __Unwind_Resume();
      pcVar6 = acStack_400;
      pcStack_388 = FUN_104e187b4;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = param_3;
      pcVar1 = param_3;
      pppppuStack_390 = &pppppuStack_2f0;
      _objc_retain();
      pcStack_428 = pcVar2;
      if (pcVar3 != (char *)0x0) {
        _objc_retain(param_3);
        plVar10 = *(long **)(pcVar3 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        puVar12 = auStack_3e0;
        func_0x00010002b838(auStack_3e0,pcVar2);
        acStack_400[0] = '\0';
        acStack_400[1] = '\0';
        acStack_400[2] = '\0';
        acStack_400[3] = '\0';
        acStack_400[4] = '\0';
        acStack_400[5] = '\0';
        acStack_400[6] = '\0';
        acStack_400[7] = '\0';
        acStack_400[8] = '\0';
        acStack_400[9] = '\0';
        acStack_400[10] = '\0';
        acStack_400[0xb] = '\0';
        acStack_400[0xc] = '\0';
        acStack_400[0xd] = '\0';
        acStack_400[0xe] = '\0';
        acStack_400[0xf] = '\0';
        acStack_400[0x10] = '\0';
        acStack_400[0x11] = '\0';
        acStack_400[0x12] = '\0';
        acStack_400[0x13] = '\0';
        acStack_400[0x14] = '\0';
        acStack_400[0x15] = '\0';
        acStack_400[0x16] = '\0';
        acStack_400[0x17] = '\0';
        func_0x00010007e1e8(acStack_400,auStack_3e0,&lStack_3c8,1);
        pcVar9 = (char *)(long)(dVar15 * 1000.0);
        pcVar1 = "\x01";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851fc8,acStack_400,pcVar9);
        puStack_3e8 = acStack_400;
        func_0x00010007e5dc(&puStack_3e8);
        pcVar8 = pcVar6;
        if (cStack_3c9 < '\0') {
          __ZdlPv(auStack_3e0[0]);
          pcVar8 = pcVar6;
        }
        pcVar5 = param_3;
        _objc_release();
        pcStack_428 = acStack_400;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
        ___stack_chk_fail();
        _objc_release(param_3);
        _objc_release(param_3);
        _objc_release(param_3);
        pcVar3 = pcVar5;
        __Unwind_Resume();
        pcStack_408 = FUN_104e18948;
        lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar1;
        pcStack_440 = param_6;
        pcStack_438 = pcVar13;
        puStack_430 = puVar12;
        pcStack_420 = pcVar5;
        pcStack_418 = param_3;
        pppppuStack_410 = &pppppuStack_390;
        _objc_retain(pcVar1);
        _objc_retain(pcVar8);
        if (pcVar3 != (char *)0x0) {
          plVar10 = *(long **)(pcVar3 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_478,pcVar2);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(pcVar8);
            pcVar2 = pcVar8;
            func_0x00010bdc3520(pcVar8);
          }
          _objc_release(pcVar8);
          func_0x00010002b838(auStack_460,pcVar2);
          uStack_498 = 0;
          uStack_490 = 0;
          uStack_488 = 0;
          func_0x00010007e1e8(&uStack_498,auStack_478,&lStack_448,2);
          pcVar2 = "\x02";
          (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110852018,&uStack_498,pcVar9);
          puStack_480 = &uStack_498;
          func_0x00010007e5dc(&puStack_480);
          lVar11 = 0;
          do {
            if ((&cStack_449)[lVar11] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar11));
            }
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != -0x30);
        }
        _objc_release(pcVar8);
        pcVar3 = pcVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar8);
        if (cStack_461 < '\0') {
          __ZdlPv(auStack_478[0]);
        }
        _objc_release(pcVar8);
        _objc_release(pcVar1);
        __Unwind_Resume();
        puStack_4c8 = (undefined1 *)&uStack_4e0;
        pcStack_4a8 = FUN_104e18b78;
        if (pcVar3 != (char *)0x0) {
          uStack_4e0 = 0;
          uStack_4d8 = 0;
          uStack_4d0 = 0;
          pcStack_4c0 = pcVar8;
          pcStack_4b8 = pcVar1;
          pppppuStack_4b0 = &pppppuStack_410;
          (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                    (*(long **)(pcVar3 + 8),&UNK_110852068,&uStack_4e0,pcVar2);
          func_0x00010007e5dc(&puStack_4c8);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e17e20; end: 104e17fb3;  */

/* WARNING: Removing unreachable block (ram,0x000104e1854c) */

void FUN_104e17e20(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *unaff_x25;
  double dVar14;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 *****pppppuStack_430;
  code *pcStack_428;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *****pppppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  char acStack_2f8 [24];
  char *pcStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ****ppppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  char acStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  char acStack_1f0 [23];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar4 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  dVar14 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    dVar14 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar14;
    pcVar2 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = pcVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar4;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcVar6 = acStack_100;
    pcStack_88 = FUN_104e17fb4;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar2;
    pcVar5 = param_4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    if (pcVar1 != (char *)0x0) {
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_e0,pcVar1);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      pcVar4 = "";
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      pcVar5 = pcVar6;
      param_5 = param_4;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar5 = pcVar6;
        param_5 = param_4;
      }
    }
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar7 = acStack_180;
    pcStack_108 = FUN_104e18128;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar4;
    pcVar6 = pcVar5;
    ppuStack_110 = &puStack_90;
    _objc_retain(pcVar4);
    if (pcVar1 != (char *)0x0) {
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_160,pcVar2);
      acStack_180[0] = '\0';
      acStack_180[1] = '\0';
      acStack_180[2] = '\0';
      acStack_180[3] = '\0';
      acStack_180[4] = '\0';
      acStack_180[5] = '\0';
      acStack_180[6] = '\0';
      acStack_180[7] = '\0';
      acStack_180[8] = '\0';
      acStack_180[9] = '\0';
      acStack_180[10] = '\0';
      acStack_180[0xb] = '\0';
      acStack_180[0xc] = '\0';
      acStack_180[0xd] = '\0';
      acStack_180[0xe] = '\0';
      acStack_180[0xf] = '\0';
      acStack_180[0x10] = '\0';
      acStack_180[0x11] = '\0';
      acStack_180[0x12] = '\0';
      acStack_180[0x13] = '\0';
      acStack_180[0x14] = '\0';
      acStack_180[0x15] = '\0';
      acStack_180[0x16] = '\0';
      acStack_180[0x17] = '\0';
      func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
      pcVar2 = "";
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puStack_168 = acStack_180;
      func_0x00010007e5dc(&puStack_168);
      pcVar6 = pcVar7;
      param_5 = pcVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        pcVar6 = pcVar7;
        param_5 = pcVar5;
      }
    }
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcStack_188 = FUN_104e1829c;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar2;
    pcVar5 = pcVar6;
    pcVar7 = param_5;
    pppuStack_190 = &ppuStack_110;
    _objc_retain(pcVar2);
    _objc_retain(pcVar6);
    _objc_retain(param_5);
    if (pcVar1 != (char *)0x0) {
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_238,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_220,pcVar1);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_208,pcVar1);
      unaff_x25 = acStack_1f0;
      pcVar1 = "true";
      if ((int)param_6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x25,pcVar1);
      acStack_258[0] = '\0';
      acStack_258[1] = '\0';
      acStack_258[2] = '\0';
      acStack_258[3] = '\0';
      acStack_258[4] = '\0';
      acStack_258[5] = '\0';
      acStack_258[6] = '\0';
      acStack_258[7] = '\0';
      acStack_258[8] = '\0';
      acStack_258[9] = '\0';
      acStack_258[10] = '\0';
      acStack_258[0xb] = '\0';
      acStack_258[0xc] = '\0';
      acStack_258[0xd] = '\0';
      acStack_258[0xe] = '\0';
      acStack_258[0xf] = '\0';
      acStack_258[0x10] = '\0';
      acStack_258[0x11] = '\0';
      acStack_258[0x12] = '\0';
      acStack_258[0x13] = '\0';
      acStack_258[0x14] = '\0';
      acStack_258[0x15] = '\0';
      acStack_258[0x16] = '\0';
      acStack_258[0x17] = '\0';
      func_0x00010007e1e8(acStack_258,acStack_238,&lStack_1d8,4);
      pcVar4 = "";
      param_6 = acStack_258;
      pcVar5 = acStack_258;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851f28,pcVar5,param_7);
      pcStack_240 = param_6;
      func_0x00010007e5dc(&pcStack_240);
      lVar11 = 0;
      pcVar7 = param_7;
      do {
        if ((&cStack_1d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)(acStack_1f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x60);
    }
    _objc_release(param_5);
    _objc_release(pcVar6);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_5);
    pcVar13 = acStack_238;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcVar13);
    _objc_release(param_5);
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_268 = FUN_104e18584;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_3 = pcVar4;
    pcVar8 = pcVar5;
    pcVar9 = pcVar7;
    pcStack_2a0 = param_6;
    pcStack_298 = pcVar13;
    pcStack_290 = pcVar1;
    pcStack_288 = param_5;
    pcStack_280 = pcVar6;
    pcStack_278 = pcVar2;
    ppppuStack_270 = &pppuStack_190;
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    puVar12 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar10 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      param_6 = (char *)auStack_2d8;
      func_0x00010002b838(auStack_2d8,pcVar2);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar2 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_2c0,pcVar2);
      acStack_2f8[0] = '\0';
      acStack_2f8[1] = '\0';
      acStack_2f8[2] = '\0';
      acStack_2f8[3] = '\0';
      acStack_2f8[4] = '\0';
      acStack_2f8[5] = '\0';
      acStack_2f8[6] = '\0';
      acStack_2f8[7] = '\0';
      acStack_2f8[8] = '\0';
      acStack_2f8[9] = '\0';
      acStack_2f8[10] = '\0';
      acStack_2f8[0xb] = '\0';
      acStack_2f8[0xc] = '\0';
      acStack_2f8[0xd] = '\0';
      acStack_2f8[0xe] = '\0';
      acStack_2f8[0xf] = '\0';
      acStack_2f8[0x10] = '\0';
      acStack_2f8[0x11] = '\0';
      acStack_2f8[0x12] = '\0';
      acStack_2f8[0x13] = '\0';
      acStack_2f8[0x14] = '\0';
      acStack_2f8[0x15] = '\0';
      acStack_2f8[0x16] = '\0';
      acStack_2f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_2f8,auStack_2d8,&lStack_2a8,2);
      param_3 = "";
      pcVar13 = acStack_2f8;
      pcVar8 = acStack_2f8;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851f78,pcVar8,pcVar7);
      pcStack_2e0 = pcVar13;
      func_0x00010007e5dc(&pcStack_2e0);
      lVar11 = 0;
      puVar12 = auStack_2d8;
      pcVar9 = pcVar7;
      do {
        if ((&cStack_2a9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(pcVar5);
    pcVar2 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_2c1 < '\0') {
      __ZdlPv(auStack_2d8[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    pcVar4 = pcVar2;
    __Unwind_Resume();
    pcVar6 = acStack_380;
    pcStack_308 = FUN_104e187b4;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = param_3;
    pcVar1 = param_3;
    pppppuStack_310 = &ppppuStack_270;
    _objc_retain();
    pcStack_3a8 = pcVar2;
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      plVar10 = *(long **)(pcVar4 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      puVar12 = auStack_360;
      func_0x00010002b838(auStack_360,pcVar2);
      acStack_380[0] = '\0';
      acStack_380[1] = '\0';
      acStack_380[2] = '\0';
      acStack_380[3] = '\0';
      acStack_380[4] = '\0';
      acStack_380[5] = '\0';
      acStack_380[6] = '\0';
      acStack_380[7] = '\0';
      acStack_380[8] = '\0';
      acStack_380[9] = '\0';
      acStack_380[10] = '\0';
      acStack_380[0xb] = '\0';
      acStack_380[0xc] = '\0';
      acStack_380[0xd] = '\0';
      acStack_380[0xe] = '\0';
      acStack_380[0xf] = '\0';
      acStack_380[0x10] = '\0';
      acStack_380[0x11] = '\0';
      acStack_380[0x12] = '\0';
      acStack_380[0x13] = '\0';
      acStack_380[0x14] = '\0';
      acStack_380[0x15] = '\0';
      acStack_380[0x16] = '\0';
      acStack_380[0x17] = '\0';
      func_0x00010007e1e8(acStack_380,auStack_360,&lStack_348,1);
      pcVar9 = (char *)(long)(dVar14 * 1000.0);
      pcVar1 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851fc8,acStack_380,pcVar9);
      puStack_368 = acStack_380;
      func_0x00010007e5dc(&puStack_368);
      pcVar8 = pcVar6;
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
        pcVar8 = pcVar6;
      }
      pcVar5 = param_3;
      _objc_release();
      pcStack_3a8 = acStack_380;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      pcVar4 = pcVar5;
      __Unwind_Resume();
      pcStack_388 = FUN_104e18948;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar1;
      pcStack_3c0 = param_6;
      pcStack_3b8 = pcVar13;
      puStack_3b0 = puVar12;
      pcStack_3a0 = pcVar5;
      pcStack_398 = param_3;
      pppppuStack_390 = &pppppuStack_310;
      _objc_retain(pcVar1);
      _objc_retain(pcVar8);
      if (pcVar4 != (char *)0x0) {
        plVar10 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_3f8,pcVar2);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar2 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_3e0,pcVar2);
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_408 = 0;
        func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
        pcVar2 = "\x02";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110852018,&uStack_418,pcVar9);
        puStack_400 = &uStack_418;
        func_0x00010007e5dc(&puStack_400);
        lVar11 = 0;
        do {
          if ((&cStack_3c9)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x30);
      }
      _objc_release(pcVar8);
      pcVar4 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_3e1 < '\0') {
        __ZdlPv(auStack_3f8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_448 = (undefined1 *)&uStack_460;
      pcStack_428 = FUN_104e18b78;
      if (pcVar4 != (char *)0x0) {
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        pcStack_440 = pcVar8;
        pcStack_438 = pcVar1;
        pppppuStack_430 = &pppppuStack_390;
        (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                  (*(long **)(pcVar4 + 8),&UNK_110852068,&uStack_460,pcVar2);
        func_0x00010007e5dc(&puStack_448);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e17fb4; end: 104e18127;  */

/* WARNING: Removing unreachable block (ram,0x000104e1854c) */

void FUN_104e17fb4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *unaff_x25;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 *****pppppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 *puStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  char acStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  char acStack_170 [23];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar8 = acStack_100;
  pcStack_88 = FUN_104e18128;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar8;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar8;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_104e1829c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pcVar8 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  _objc_retain(param_5);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(acStack_1b8,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1a0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_188,pcVar1);
    unaff_x25 = acStack_170;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,acStack_1b8,&lStack_158,4);
    pcVar1 = "";
    param_6 = acStack_1d8;
    pcVar2 = acStack_1d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f28,pcVar2,param_7);
    pcStack_1c0 = param_6;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    pcVar8 = param_7;
    do {
      if ((&cStack_159)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_170 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_5);
    pcVar14 = acStack_1b8;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcVar14);
    _objc_release(param_5);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_1e8 = FUN_104e18584;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar1;
    pcVar9 = pcVar2;
    pcVar10 = pcVar8;
    pcStack_220 = param_6;
    pcStack_218 = pcVar14;
    pcStack_210 = pcVar3;
    pcStack_208 = param_5;
    pcStack_200 = pcVar6;
    pcStack_1f8 = pcVar5;
    pppuStack_1f0 = &ppuStack_110;
    _objc_retain(pcVar1);
    _objc_retain(pcVar2);
    puVar13 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar11 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      param_6 = (char *)auStack_258;
      func_0x00010002b838(auStack_258,pcVar3);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar3 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_240,pcVar3);
      acStack_278[0] = '\0';
      acStack_278[1] = '\0';
      acStack_278[2] = '\0';
      acStack_278[3] = '\0';
      acStack_278[4] = '\0';
      acStack_278[5] = '\0';
      acStack_278[6] = '\0';
      acStack_278[7] = '\0';
      acStack_278[8] = '\0';
      acStack_278[9] = '\0';
      acStack_278[10] = '\0';
      acStack_278[0xb] = '\0';
      acStack_278[0xc] = '\0';
      acStack_278[0xd] = '\0';
      acStack_278[0xe] = '\0';
      acStack_278[0xf] = '\0';
      acStack_278[0x10] = '\0';
      acStack_278[0x11] = '\0';
      acStack_278[0x12] = '\0';
      acStack_278[0x13] = '\0';
      acStack_278[0x14] = '\0';
      acStack_278[0x15] = '\0';
      acStack_278[0x16] = '\0';
      acStack_278[0x17] = '\0';
      func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
      pcVar7 = "";
      pcVar14 = acStack_278;
      pcVar9 = acStack_278;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f78,pcVar9,pcVar8);
      pcStack_260 = pcVar14;
      func_0x00010007e5dc(&pcStack_260);
      lVar12 = 0;
      puVar13 = auStack_258;
      pcVar10 = pcVar8;
      do {
        if ((&cStack_229)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar3 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      pcVar2 = pcVar3;
      __Unwind_Resume();
      pcVar6 = acStack_300;
      pcStack_288 = FUN_104e187b4;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar7;
      pcVar1 = pcVar7;
      ppppuStack_290 = &pppuStack_1f0;
      _objc_retain();
      if (pcVar2 != (char *)0x0) {
        _objc_retain(pcVar7);
        plVar11 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        puVar13 = auStack_2e0;
        func_0x00010002b838(auStack_2e0,pcVar1);
        acStack_300[0] = '\0';
        acStack_300[1] = '\0';
        acStack_300[2] = '\0';
        acStack_300[3] = '\0';
        acStack_300[4] = '\0';
        acStack_300[5] = '\0';
        acStack_300[6] = '\0';
        acStack_300[7] = '\0';
        acStack_300[8] = '\0';
        acStack_300[9] = '\0';
        acStack_300[10] = '\0';
        acStack_300[0xb] = '\0';
        acStack_300[0xc] = '\0';
        acStack_300[0xd] = '\0';
        acStack_300[0xe] = '\0';
        acStack_300[0xf] = '\0';
        acStack_300[0x10] = '\0';
        acStack_300[0x11] = '\0';
        acStack_300[0x12] = '\0';
        acStack_300[0x13] = '\0';
        acStack_300[0x14] = '\0';
        acStack_300[0x15] = '\0';
        acStack_300[0x16] = '\0';
        acStack_300[0x17] = '\0';
        func_0x00010007e1e8(acStack_300,auStack_2e0,&lStack_2c8,1);
        pcVar10 = (char *)(long)(param_1 * 1000.0);
        pcVar1 = "\x01";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851fc8,acStack_300,pcVar10);
        puStack_2e8 = acStack_300;
        func_0x00010007e5dc(&puStack_2e8);
        pcVar9 = pcVar6;
        if (cStack_2c9 < '\0') {
          __ZdlPv(auStack_2e0[0]);
          pcVar9 = pcVar6;
        }
        pcVar5 = pcVar7;
        _objc_release();
        pcVar3 = acStack_300;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar6 = pcVar5;
        __Unwind_Resume();
        pcStack_308 = FUN_104e18948;
        lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar1;
        pcStack_340 = param_6;
        pcStack_338 = pcVar14;
        puStack_330 = puVar13;
        pcStack_328 = pcVar3;
        pcStack_320 = pcVar5;
        pcStack_318 = pcVar7;
        pppppuStack_310 = &ppppuStack_290;
        _objc_retain(pcVar1);
        _objc_retain(pcVar9);
        if (pcVar6 != (char *)0x0) {
          plVar11 = *(long **)(pcVar6 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_378,pcVar3);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar9);
            pcVar3 = pcVar9;
            func_0x00010bdc3520(pcVar9);
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_360,pcVar3);
          uStack_398 = 0;
          uStack_390 = 0;
          uStack_388 = 0;
          func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
          pcVar2 = "\x02";
          (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110852018,&uStack_398,pcVar10);
          puStack_380 = &uStack_398;
          func_0x00010007e5dc(&puStack_380);
          lVar12 = 0;
          do {
            if ((&cStack_349)[lVar12] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
            }
            lVar12 = lVar12 + -0x18;
          } while (lVar12 != -0x30);
        }
        _objc_release(pcVar9);
        pcVar3 = pcVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
          ___stack_chk_fail();
          _objc_release(pcVar9);
          if (cStack_361 < '\0') {
            __ZdlPv(auStack_378[0]);
          }
          _objc_release(pcVar9);
          _objc_release(pcVar1);
          __Unwind_Resume();
          puStack_3c8 = (undefined1 *)&uStack_3e0;
          pcStack_3a8 = FUN_104e18b78;
          if (pcVar3 != (char *)0x0) {
            uStack_3e0 = 0;
            uStack_3d8 = 0;
            uStack_3d0 = 0;
            pcStack_3c0 = pcVar9;
            pcStack_3b8 = pcVar1;
            pppppuStack_3b0 = &pppppuStack_310;
            (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                      (*(long **)(pcVar3 + 8),&UNK_110852068,&uStack_3e0,pcVar2);
            func_0x00010007e5dc(&puStack_3c8);
          }
          return;
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 104e18128; end: 104e1829b;  */

/* WARNING: Removing unreachable block (ram,0x000104e1854c) */

void FUN_104e18128(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *unaff_x25;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined1 *****pppppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  char acStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  char acStack_f0 [23];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar7 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar7 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104e1829c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar5 = pcVar7;
  pcVar9 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(param_5);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_108,pcVar2);
    unaff_x25 = acStack_f0;
    pcVar2 = "true";
    if ((int)param_6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,acStack_138,&lStack_d8,4);
    pcVar4 = "";
    param_6 = acStack_158;
    pcVar5 = acStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f28,pcVar5,param_7);
    pcStack_140 = param_6;
    func_0x00010007e5dc(&pcStack_140);
    lVar12 = 0;
    pcVar9 = param_7;
    do {
      if ((&cStack_d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcVar14 = acStack_138;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcVar14);
  _objc_release(param_5);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_104e18584;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar4;
  pcVar8 = pcVar5;
  pcVar10 = pcVar9;
  pcStack_1a0 = param_6;
  pcStack_198 = pcVar14;
  pcStack_190 = pcVar2;
  pcStack_188 = param_5;
  pcStack_180 = pcVar7;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_90;
  _objc_retain(pcVar4);
  _objc_retain(pcVar5);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    param_6 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    pcVar6 = "";
    pcVar14 = acStack_1f8;
    pcVar8 = acStack_1f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f78,pcVar8,pcVar9);
    pcStack_1e0 = pcVar14;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar12 = 0;
    puVar13 = auStack_1d8;
    pcVar10 = pcVar9;
    do {
      if ((&cStack_1a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcVar5 = acStack_280;
    pcStack_208 = FUN_104e187b4;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar6;
    pcVar7 = pcVar6;
    pppuStack_210 = &ppuStack_170;
    _objc_retain();
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar6);
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      puVar13 = auStack_260;
      func_0x00010002b838(auStack_260,pcVar1);
      acStack_280[0] = '\0';
      acStack_280[1] = '\0';
      acStack_280[2] = '\0';
      acStack_280[3] = '\0';
      acStack_280[4] = '\0';
      acStack_280[5] = '\0';
      acStack_280[6] = '\0';
      acStack_280[7] = '\0';
      acStack_280[8] = '\0';
      acStack_280[9] = '\0';
      acStack_280[10] = '\0';
      acStack_280[0xb] = '\0';
      acStack_280[0xc] = '\0';
      acStack_280[0xd] = '\0';
      acStack_280[0xe] = '\0';
      acStack_280[0xf] = '\0';
      acStack_280[0x10] = '\0';
      acStack_280[0x11] = '\0';
      acStack_280[0x12] = '\0';
      acStack_280[0x13] = '\0';
      acStack_280[0x14] = '\0';
      acStack_280[0x15] = '\0';
      acStack_280[0x16] = '\0';
      acStack_280[0x17] = '\0';
      func_0x00010007e1e8(acStack_280,auStack_260,&lStack_248,1);
      pcVar10 = (char *)(long)(param_1 * 1000.0);
      pcVar7 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851fc8,acStack_280,pcVar10);
      puStack_268 = acStack_280;
      func_0x00010007e5dc(&puStack_268);
      pcVar8 = pcVar5;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        pcVar8 = pcVar5;
      }
      pcVar4 = pcVar6;
      _objc_release();
      pcVar1 = acStack_280;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_288 = FUN_104e18948;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcStack_2c0 = param_6;
    pcStack_2b8 = pcVar14;
    puStack_2b0 = puVar13;
    pcStack_2a8 = pcVar1;
    pcStack_2a0 = pcVar4;
    pcStack_298 = pcVar6;
    ppppuStack_290 = &pppuStack_210;
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    if (pcVar5 != (char *)0x0) {
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_2f8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_2e0,pcVar1);
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
      pcVar2 = "\x02";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110852018,&uStack_318,pcVar10);
      puStack_300 = &uStack_318;
      func_0x00010007e5dc(&puStack_300);
      lVar12 = 0;
      do {
        if ((&cStack_2c9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_2e1 < '\0') {
        __ZdlPv(auStack_2f8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      __Unwind_Resume();
      puStack_348 = (undefined1 *)&uStack_360;
      pcStack_328 = FUN_104e18b78;
      if (pcVar1 != (char *)0x0) {
        uStack_360 = 0;
        uStack_358 = 0;
        uStack_350 = 0;
        pcStack_340 = pcVar8;
        pcStack_338 = pcVar7;
        pppppuStack_330 = &ppppuStack_290;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_110852068,&uStack_360,pcVar2);
        func_0x00010007e5dc(&puStack_348);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 104e1829c; end: 104e18583;  */

/* WARNING: Removing unreachable block (ram,0x000104e1854c) */

void FUN_104e1829c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  char *pcVar12;
  char *unaff_x25;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_178 [24];
  char *pcStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  char acStack_70 [23];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x25 = acStack_70;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    param_6 = acStack_d8;
    pcVar5 = acStack_d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f28,pcVar5,param_7);
    pcStack_c0 = param_6;
    func_0x00010007e5dc(&pcStack_c0);
    lVar9 = 0;
    pcVar4 = param_7;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcVar12 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcVar12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_104e18584;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  pcVar8 = pcVar4;
  pcStack_120 = param_6;
  pcStack_118 = pcVar12;
  pcStack_110 = pcVar2;
  pcStack_108 = param_5;
  pcStack_100 = param_4;
  pcStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar10 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    param_6 = (char *)auStack_158;
    func_0x00010002b838(auStack_158,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_140,pcVar2);
    acStack_178[0] = '\0';
    acStack_178[1] = '\0';
    acStack_178[2] = '\0';
    acStack_178[3] = '\0';
    acStack_178[4] = '\0';
    acStack_178[5] = '\0';
    acStack_178[6] = '\0';
    acStack_178[7] = '\0';
    acStack_178[8] = '\0';
    acStack_178[9] = '\0';
    acStack_178[10] = '\0';
    acStack_178[0xb] = '\0';
    acStack_178[0xc] = '\0';
    acStack_178[0xd] = '\0';
    acStack_178[0xe] = '\0';
    acStack_178[0xf] = '\0';
    acStack_178[0x10] = '\0';
    acStack_178[0x11] = '\0';
    acStack_178[0x12] = '\0';
    acStack_178[0x13] = '\0';
    acStack_178[0x14] = '\0';
    acStack_178[0x15] = '\0';
    acStack_178[0x16] = '\0';
    acStack_178[0x17] = '\0';
    func_0x00010007e1e8(acStack_178,auStack_158,&lStack_128,2);
    pcVar6 = "";
    pcVar12 = acStack_178;
    pcVar7 = acStack_178;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851f78,pcVar7,pcVar4);
    pcStack_160 = pcVar12;
    func_0x00010007e5dc(&pcStack_160);
    lVar9 = 0;
    puVar10 = auStack_158;
    pcVar8 = pcVar4;
    do {
      if ((&cStack_129)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_141 < '\0') {
      __ZdlPv(auStack_158[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcVar3 = acStack_200;
    pcStack_188 = FUN_104e187b4;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar6;
    pcVar1 = pcVar6;
    ppuStack_190 = &puStack_f0;
    _objc_retain();
    if (pcVar5 != (char *)0x0) {
      _objc_retain(pcVar6);
      plVar11 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      puVar10 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,pcVar1);
      acStack_200[0] = '\0';
      acStack_200[1] = '\0';
      acStack_200[2] = '\0';
      acStack_200[3] = '\0';
      acStack_200[4] = '\0';
      acStack_200[5] = '\0';
      acStack_200[6] = '\0';
      acStack_200[7] = '\0';
      acStack_200[8] = '\0';
      acStack_200[9] = '\0';
      acStack_200[10] = '\0';
      acStack_200[0xb] = '\0';
      acStack_200[0xc] = '\0';
      acStack_200[0xd] = '\0';
      acStack_200[0xe] = '\0';
      acStack_200[0xf] = '\0';
      acStack_200[0x10] = '\0';
      acStack_200[0x11] = '\0';
      acStack_200[0x12] = '\0';
      acStack_200[0x13] = '\0';
      acStack_200[0x14] = '\0';
      acStack_200[0x15] = '\0';
      acStack_200[0x16] = '\0';
      acStack_200[0x17] = '\0';
      func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
      pcVar8 = (char *)(long)(param_1 * 1000.0);
      pcVar1 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110851fc8,acStack_200,pcVar8);
      puStack_1e8 = acStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      pcVar7 = pcVar3;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        pcVar7 = pcVar3;
      }
      pcVar2 = pcVar6;
      _objc_release();
      pcVar4 = acStack_200;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_208 = FUN_104e18948;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar1;
    pcStack_240 = param_6;
    pcStack_238 = pcVar12;
    puStack_230 = puVar10;
    pcStack_228 = pcVar4;
    pcStack_220 = pcVar2;
    pcStack_218 = pcVar6;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(pcVar1);
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      plVar11 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_278,pcVar5);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar5 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_260,pcVar5);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
      pcVar5 = "\x02";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110852018,&uStack_298,pcVar8);
      puStack_280 = &uStack_298;
      func_0x00010007e5dc(&puStack_280);
      lVar9 = 0;
      do {
        if ((&cStack_249)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar4 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      pcStack_2a8 = FUN_104e18b78;
      if (pcVar4 != (char *)0x0) {
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        pcStack_2c0 = pcVar7;
        pcStack_2b8 = pcVar1;
        ppppuStack_2b0 = &pppuStack_210;
        (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                  (*(long **)(pcVar4 + 8),&UNK_110852068,&uStack_2e0,pcVar5);
        func_0x00010007e5dc(&puStack_2c8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 104e18584; end: 104e187b3;  */

void FUN_104e18584(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  lVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851f78,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    lVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar7 = acStack_120;
  pcStack_a8 = FUN_104e187b4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  pcStack_148 = pcVar2;
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    puVar11 = auStack_100;
    func_0x00010002b838(auStack_100,pcVar5);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    lVar8 = (long)(param_1 * 1000.0);
    pcVar6 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851fc8,acStack_120,lVar8);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar5 = pcVar7;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar5 = pcVar7;
    }
    pcVar4 = pcVar1;
    _objc_release();
    pcStack_148 = acStack_120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_104e18948;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar11;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    pcVar2 = "\x02";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110852018,&uStack_1b8,lVar8);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar8 = 0;
    do {
      if ((&cStack_169)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar6);
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_104e18b78;
  if (pcVar1 != (char *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    pcStack_1e0 = pcVar5;
    pcStack_1d8 = pcVar6;
    pppuStack_1d0 = &ppuStack_130;
    (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
              (*(long **)(pcVar1 + 8),&UNK_110852068,&uStack_200,pcVar2);
    func_0x00010007e5dc(&puStack_1e8);
  }
  return;
}



/* Entry: 104e187b4; end: 104e18947;  */

void FUN_104e187b4(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar4 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    param_5 = (long)(param_1 * 1000.0);
    pcVar2 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110851fc8,acStack_80,param_5);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar3;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104e18948;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(param_4);
  if (pcVar1 != (char *)0x0) {
    plVar4 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_f8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_e0,pcVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    pcVar3 = "\x02";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110852018,&uStack_118,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar5 = 0;
    do {
      if ((&cStack_c9)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_4);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(param_4);
  _objc_release(pcVar2);
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_104e18b78;
  if (pcVar1 != (char *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    pcStack_140 = param_4;
    pcStack_138 = pcVar2;
    ppuStack_130 = &puStack_90;
    (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
              (*(long **)(pcVar1 + 8),&UNK_110852068,&uStack_160,pcVar3);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 104e18948; end: 104e18b77;  */

void FUN_104e18948(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x02";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110852018,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_104e18b78;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_110852068,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 104e18b78; end: 104e18bef;  */

void FUN_104e18b78(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110852068,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e18bf0; end: 104e18c67;  */

void FUN_104e18bf0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108520b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e18c68; end: 104e18cdf;  */

void FUN_104e18c68(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110852108,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e18ce0; end: 104e18ec7;  */

char * FUN_104e18ce0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  char *unaff_x23;
  undefined1 *unaff_x24;
  char *pcStack_230;
  undefined *puStack_228;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  char *pcStack_158;
  char *pcStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_2;
  pcVar4 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_2);
  puVar18 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar5 = "true";
    if ((int)param_3 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar5);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar5 = "\x01";
    param_3 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_80 = param_3;
    func_0x00010007e5dc(&pcStack_80);
    lVar16 = 0;
    puVar18 = auStack_78;
    pcVar3 = param_4;
    do {
      if ((&cStack_49)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar13 = acStack_120;
  pcStack_a8 = FUN_104e18ec8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar5;
  pcVar12 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = param_3;
  puStack_c8 = puVar18;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  plVar17 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar11 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar12 = pcVar13;
    pcVar3 = pcVar4;
    param_3 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar12 = pcVar13;
      pcVar3 = pcVar4;
      param_3 = acStack_120;
    }
  }
  pcVar4 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_104e1903c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar12;
  pcVar13 = pcVar3;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  pcStack_150 = param_3;
  plStack_148 = plVar17;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar11);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_198,pcVar5);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar5 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_180,pcVar5);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar1 = acStack_1b8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1108521f8);
    pcStack_1a0 = acStack_1b8;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar16 = 0;
    pcVar13 = pcVar3;
    do {
      if ((&cStack_169)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar5 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar11);
  __Unwind_Resume();
  ppcVar6 = &pcStack_230;
  _objc_retain(pcVar1);
  _objc_retain(pcVar13);
  _objc_retain(param_5);
  puStack_228 = PTR_PTR_1126e4638;
  pcStack_230 = pcVar5;
  _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar4 = pcVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    pcVar3 = pcVar4;
    _objc_opt_isKindOfClass(pcVar4,puVar7);
    pcVar5 = pcVar4;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar5 = (char *)0x0;
    }
    _objc_retain(pcVar5);
    _objc_release(pcVar4);
    uVar8 = *(undefined8 *)((long)ppcVar6 + 8);
    *(char **)((long)ppcVar6 + 8) = pcVar5;
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x48);
    *(undefined8 *)((long)ppcVar6 + 0x48) = uVar8;
    _objc_release(uVar14);
    _objc_retain(pcVar13);
    uVar8 = *(undefined8 *)((long)ppcVar6 + 0x28);
    *(char **)((long)ppcVar6 + 0x28) = pcVar13;
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)ppcVar6 + 0x20);
    *(undefined **)((long)ppcVar6 + 0x20) = puVar7;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar8 = *(undefined8 *)((long)ppcVar6 + 0x38);
    *(undefined8 *)((long)ppcVar6 + 0x38) = param_5;
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126b0078;
    _objc_alloc_init(PTR_PTR_1126b0078);
    puVar9 = PTR_PTR_1126b0080;
    _objc_alloc_init(PTR_PTR_1126b0080);
    pcVar5 = (char *)ppcVar6;
    func_0x00010becc900(ppcVar6);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216940(puVar9);
    _objc_release(pcVar4);
    _objc_release(pcVar5);
    puVar10 = PTR_PTR_1126b0088;
    _objc_alloc();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x28);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar15 = *(undefined8 *)((long)ppcVar6 + 0x30);
    *(undefined **)((long)ppcVar6 + 0x30) = puVar10;
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)ppcVar6 + 0x30));
    func_0x00010bec8140(ppcVar6);
    _objc_release(puVar9);
    _objc_release(puVar7);
  }
  _objc_release(param_5);
  _objc_release(pcVar13);
  _objc_release(pcVar1);
  return (char *)ppcVar6;
}



/* Entry: 104e18ec8; end: 104e1903b;  */

char * FUN_104e18ec8(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  char *pcStack_190;
  undefined *puStack_188;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  pcVar10 = param_4;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar9 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108521f8);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    pcVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_190;
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  _objc_retain(param_5);
  puStack_188 = PTR_PTR_1126e4638;
  pcStack_190 = pcVar2;
  _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar4 = pcVar9;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    pcVar2 = pcVar4;
    _objc_opt_isKindOfClass(pcVar4,puVar5);
    pcVar1 = pcVar4;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar1 = (char *)0x0;
    }
    _objc_retain(pcVar1);
    _objc_release(pcVar4);
    uVar6 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar1;
    _objc_release(uVar6);
    uVar6 = param_5;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppcVar3 + 0x48);
    *(undefined8 *)((long)ppcVar3 + 0x48) = uVar6;
    _objc_release(uVar11);
    _objc_retain(pcVar10);
    uVar6 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(char **)((long)ppcVar3 + 0x28) = pcVar10;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined **)((long)ppcVar3 + 0x20) = puVar5;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)ppcVar3 + 0x38);
    *(undefined8 *)((long)ppcVar3 + 0x38) = param_5;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b0078;
    _objc_alloc_init(PTR_PTR_1126b0078);
    puVar7 = PTR_PTR_1126b0080;
    _objc_alloc_init(PTR_PTR_1126b0080);
    pcVar1 = (char *)ppcVar3;
    func_0x00010becc900(ppcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216940(puVar7);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    puVar8 = PTR_PTR_1126b0088;
    _objc_alloc();
    uVar11 = *(undefined8 *)((long)ppcVar3 + 0x28);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar12 = *(undefined8 *)((long)ppcVar3 + 0x30);
    *(undefined **)((long)ppcVar3 + 0x30) = puVar8;
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)ppcVar3 + 0x30));
    func_0x00010bec8140(ppcVar3);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  return (char *)ppcVar3;
}



/* Entry: 104e1903c; end: 104e1926b;  */

char * FUN_104e1903c(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  char *pcStack_110;
  undefined *puStack_108;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108521f8);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_110;
  _objc_retain(pcVar1);
  _objc_retain(uVar10);
  _objc_retain(param_5);
  puStack_108 = PTR_PTR_1126e4638;
  pcStack_110 = pcVar2;
  _objc_msgSendSuper2(&pcStack_110,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar4 = pcVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    pcVar6 = pcVar4;
    _objc_opt_isKindOfClass(pcVar4,puVar5);
    pcVar2 = pcVar4;
    if (((ulong)pcVar6 & 1) == 0) {
      pcVar2 = (char *)0x0;
    }
    _objc_retain(pcVar2);
    _objc_release(pcVar4);
    uVar7 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar2;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppcVar3 + 0x48);
    *(undefined8 *)((long)ppcVar3 + 0x48) = uVar7;
    _objc_release(uVar11);
    _objc_retain(uVar10);
    uVar7 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(undefined8 *)((long)ppcVar3 + 0x28) = uVar10;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined **)((long)ppcVar3 + 0x20) = puVar5;
    _objc_release(uVar7);
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)ppcVar3 + 0x38);
    *(undefined8 *)((long)ppcVar3 + 0x38) = param_5;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126b0078;
    _objc_alloc_init(PTR_PTR_1126b0078);
    puVar8 = PTR_PTR_1126b0080;
    _objc_alloc_init(PTR_PTR_1126b0080);
    pcVar2 = (char *)ppcVar3;
    func_0x00010becc900(ppcVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216940(puVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar2);
    puVar9 = PTR_PTR_1126b0088;
    _objc_alloc();
    uVar11 = *(undefined8 *)((long)ppcVar3 + 0x28);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar12 = *(undefined8 *)((long)ppcVar3 + 0x30);
    *(undefined **)((long)ppcVar3 + 0x30) = puVar9;
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)ppcVar3 + 0x30));
    func_0x00010bec8140(ppcVar3);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar10);
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 104e1926c; end: 104e194b3; -[SCRemixSnapEditorEventListener initWithPreviewScope:valdiRuntimeProvider:previewScopeServices:] */

undefined1 *
FUN_104e1926c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e4638;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = uVar1;
    _objc_release(uVar6);
    uVar6 = param_5;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = uVar6;
    _objc_release(uVar11);
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_4;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar4;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_5;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b0078;
    _objc_alloc_init(PTR_PTR_1126b0078);
    puVar7 = PTR_PTR_1126b0080;
    _objc_alloc_init(PTR_PTR_1126b0080);
    puVar8 = (undefined1 *)puVar2;
    func_0x00010becc900(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216940(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar10 = PTR_PTR_1126b0088;
    _objc_alloc();
    uVar11 = *(undefined8 *)((long)puVar2 + 0x28);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar12 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar10;
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + 0x30));
    func_0x00010bec8140(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104e194b4; end: 104e19503; -[SCRemixSnapEditorEventListener teardown] */

void FUN_104e194b4(long param_1)

{
  long lVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 104e19504; end: 104e195af; -[SCRemixSnapEditorEventListener _subscribeToPreviewConfig] */

void FUN_104e19504(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa300(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e195b0; end: 104e195eb;  */

void FUN_104e195b0(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bec8740(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e195ec; end: 104e19667; -[SCRemixSnapEditorEventListener _shouldBlockSendButton] */

bool FUN_104e195ec(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c27dd80();
  if (lVar2 == 1) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c26fea0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x000109018844();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c27dd80(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104e19668; end: 104e197bb; -[SCRemixSnapEditorEventListener sendActionGuard] */

void FUN_104e19668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010beb2ae0();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104e1972c;
  puStack_50 = &UNK_110852368;
  uStack_38 = (undefined1)lVar1;
  uStack_48 = uVar4;
  lStack_40 = param_1;
  _objc_retain(uVar4);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126afee8;
  func_0x00010c113ca0(PTR_PTR_1126afee8,param_2,3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e197bc; end: 104e19b73; -[SCRemixSnapEditorEventListener _subscribeToTimelineConfigurationStatusObservable] */

void FUN_104e197bc(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined **unaff_x23;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf86d40();
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 != 0) {
      func_0x00010befbb60(lVar3);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010bf493c0(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uStack_80 = uVar15;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf4b2a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uStack_78 = uVar17;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010bf4b2a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010bf493e0(0x3fe8000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar12);
      _objc_release(uVar13);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(uVar9);
      _objc_release(uVar17);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(uVar15);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(uVar5);
      _objc_initWeak(auStack_88,param_1);
      uVar13 = *(undefined8 *)(param_1 + 8);
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar13;
      func_0x00010c270020();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_104e19b74;
      puStack_a0 = &UNK_110852398;
      unaff_x23 = &puStack_b8;
      param_2 = auStack_88;
      _objc_copyWeak(auStack_90);
      _objc_retain(lVar3);
      uVar17 = uVar15;
      lStack_98 = lVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = (undefined8 *)(param_1 + 0x18);
      uVar5 = *puVar16;
      *puVar16 = uVar17;
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(uVar13);
      func_0x00010bf1a3e0(*puVar16);
      _objc_release(lStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar2 = lVar3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar14 = param_2;
    func_0x00010c27dd80();
    uVar15 = *(undefined8 *)(lVar3 + 0x20);
    func_0x00010c15b700(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x3ff0000000000000;
    if (puVar14 != (undefined1 *)0x0) {
      uVar17 = 0x3fe0000000000000;
    }
    func_0x00010c1677c0(uVar17);
    _objc_release(uVar15);
    _objc_retain(param_2);
    uVar15 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined1 **)(lVar2 + 0x10) = param_2;
    _objc_release(uVar15);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e19b74; end: 104e19c0f;  */

void FUN_104e19b74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c27dd80();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3ff0000000000000;
    if (lVar2 != 0) {
      uVar4 = 0x3fe0000000000000;
    }
    func_0x00010c1677c0(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = param_2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e19c10; end: 104e19c5f; -[SCRemixSnapEditorEventListener _toastMessageObservable] */

void FUN_104e19c10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e19c60; end: 104e19ce3; -[SCRemixSnapEditorEventListener .cxx_destruct] */

void FUN_104e19c60(long param_1)

{
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


