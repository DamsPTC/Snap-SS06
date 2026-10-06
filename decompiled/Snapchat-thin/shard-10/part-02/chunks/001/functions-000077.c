/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b26d30; end: 107b26d37; -[SCOperaShareableMediaComponents remoteURL] */

undefined8 FUN_107b26d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b26d38; end: 107b26d3f; -[SCOperaShareableMediaComponents overlayImages] */

undefined8 FUN_107b26d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107b26d40; end: 107b26d47; -[SCOperaShareableMediaComponents firstImage] */

undefined8 FUN_107b26d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b26d48; end: 107b26d8f; -[SCOperaShareableMediaComponents .cxx_destruct] */

void FUN_107b26d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b26d90; end: 107b26f93;  */

void FUN_107b26d90(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf529e0();
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar5 = 0;
    do {
      uVar3 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0c6c20();
      uVar10 = uVar5;
      if (uVar4 == 1) {
        uVar5 = uVar3;
        func_0x00010c29bb40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        uVar8 = uVar5;
        uVar5 = uVar9;
LAB_107b26e30:
        _objc_release(uVar4);
        uVar9 = uVar5;
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0c6c20();
        if (uVar4 == 0) {
          uVar10 = uVar3;
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar11 == 0) {
LAB_107b26eb4:
            _objc_release(uVar5);
          }
          else {
            _objc_release(uVar10);
            bVar1 = uVar10 != 0;
            uVar10 = uVar5;
            if (bVar1) {
              uVar4 = uVar3;
              func_0x00010bfe6ac0(uVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              uVar5 = uVar4;
              goto LAB_107b26eb4;
            }
          }
          uVar5 = uVar3;
          func_0x00010c12a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar5 != 0) {
            uVar5 = uVar3;
            func_0x00010c12a520(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            goto LAB_107b26e30;
          }
        }
      }
      _objc_release(uVar3);
      uVar11 = uVar11 + 1;
      uVar3 = param_1;
      func_0x00010bf529e0();
      uVar5 = uVar10;
    } while (uVar11 < uVar3);
  }
  puVar6 = PTR_PTR_1126d6838;
  _objc_alloc(PTR_PTR_1126d6838);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c01f6e0(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107b26f94; end: 107b26fff;  */

undefined8 FUN_107b26f94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = 1;
  if ((param_1 != 0x65) && (param_1 != 0x62)) {
    if (param_1 == 0x46) {
      uVar1 = param_2;
      func_0x000108f4b648(param_2);
    }
    else {
      uVar1 = 0;
    }
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107b27000; end: 107b27783;  */

void FUN_107b27000(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf814c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2378;
  _objc_opt_class(PTR_PTR_1126b2378);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f3c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d5408;
  func_0x00010c11b1e0(param_2);
  func_0x00010c11b240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d5410;
  _objc_alloc();
  func_0x00010c04ef80();
  uVar2 = param_2;
  func_0x00010c07dec0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c25b720();
    if ((long)uVar2 < 0xb) {
      if (((long)uVar2 < 3) && ((uVar2 == 0 || (uVar2 == 2)))) {
        _objc_retain(param_1);
        uVar2 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bf1f3c0();
        if ((int)uVar4 == 0) {
          uVar4 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(uVar4);
          _objc_release(uVar2);
        }
        else {
          _objc_release(uVar2);
        }
        goto LAB_107b27270;
      }
    }
    else if ((1 < uVar2 - 0xe) && (uVar2 == 0xb)) goto LAB_107b2715c;
    _objc_retain(param_1);
  }
  else {
LAB_107b2715c:
    _objc_retain(param_1);
  }
LAB_107b27270:
  _objc_release(param_1);
  uVar2 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  FUN_107b26f94(uVar6,0);
  uVar2 = param_2;
  func_0x00010c07dec0();
  if ((int)uVar2 != 0) {
    func_0x00010c29d4e0(PTR_PTR_1126ce808);
  }
  puVar8 = PTR_PTR_1126b23a8;
  uVar2 = param_3;
  func_0x00010c24b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar9 = puVar7;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2370;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar6 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar11 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c22ed80();
  func_0x00010c01f560();
  uVar12 = uVar1;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar13 = PTR_PTR_1126b2398;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010c11b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  uVar16 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  puVar17 = PTR_PTR_1126ca6f0;
  _objc_alloc();
  func_0x00010c082620();
  func_0x00010c082620();
  uVar18 = param_2;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047c00();
  uVar19 = param_3;
  func_0x00010c082620();
  uVar20 = param_3;
  if ((int)uVar19 == 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0ed940();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar19 = param_3;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010b611778();
  func_0x00010c045140();
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar20);
  _objc_release(puVar17);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(puVar13);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107b27784; end: 107b27d63;  */

void FUN_107b27784(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d5408;
  func_0x00010c11b1e0(param_2);
  func_0x00010c11b240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5410;
  _objc_alloc();
  func_0x00010c04ef80();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  FUN_107b26f94(uVar5,param_4);
  func_0x00010c29d4e0(PTR_PTR_1126ce808);
  puVar8 = PTR_PTR_1126b23a8;
  uVar6 = param_2;
  func_0x00010c24b260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf82000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_107b27d64;
  uStack_78 = 0x107b27d74;
  uStack_70 = 0;
  uVar6 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bebc0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126b2390;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2370;
  _objc_alloc();
  uVar5 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar13 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar12);
  uVar2 = uVar5;
  if ((uVar13 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  func_0x00010bf1f3c0(uVar2);
  uVar5 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c01f560();
  puVar12 = PTR_PTR_1126b2398;
  _objc_alloc(PTR_PTR_1126b2398);
  uVar6 = param_2;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c11b6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010c116a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0(puVar12);
  uVar15 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  puVar16 = PTR_PTR_1126ca6f0;
  _objc_alloc();
  uVar17 = param_2;
  func_0x00010bf1f940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047c00();
  uVar18 = param_2;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010b611778();
  func_0x00010c045140(puVar9);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(puVar16);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(puVar12);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar11);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar10);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107b27d64; end: 107b27d7b;  */

void FUN_107b27d64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b27d7c; end: 107b27f13;  */

void FUN_107b27d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 107b27f14; end: 107b281fb;  */

ulong FUN_107b27f14(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    uVar8 = 0;
    goto LAB_107b281cc;
  }
  puVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06b5c0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
LAB_107b28168:
    puVar2 = puVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c06b5c0();
    if ((int)puVar3 == 0) {
      uVar8 = 0;
    }
    else {
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c0720c0(param_1);
LAB_107b281ac:
      _objc_release(puVar3);
    }
LAB_107b281bc:
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c22d420(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) {
      uVar8 = 1;
      goto LAB_107b281bc;
    }
    puVar3 = PTR_PTR_1126b2ea8;
    func_0x00010c22d440(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) {
LAB_107b28100:
      uVar8 = 1;
      goto LAB_107b281ac;
    }
    puVar4 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    if ((int)uVar8 != 0) {
LAB_107b280f8:
      _objc_release(puVar4);
      goto LAB_107b28100;
    }
    puVar5 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4d80(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) {
LAB_107b280f0:
      _objc_release(puVar5);
      goto LAB_107b280f8;
    }
    puVar6 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4e00(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) {
      _objc_release(puVar6);
      goto LAB_107b280f0;
    }
    puVar7 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4d60(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((uVar8 & 1) == 0) goto LAB_107b28168;
    uVar8 = 1;
  }
  _objc_release(puVar1);
LAB_107b281cc:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar8;
}



/* Entry: 107b281fc; end: 107b28473;  */

void FUN_107b281fc(ulong param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  func_0x00010c06f520();
  _objc_release(ppuVar1);
  if (((ulong)ppuVar8 & 1) == 0) {
    func_0x00010c1d0640(param_1);
    func_0x00010c1d0640(param_1);
    func_0x00010c1d0640(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar1 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b5c0();
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar1 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d7a0();
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    ppuVar1 = (undefined **)PTR_PTR_1126b2d20;
    func_0x00010c24c3e0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(ppuVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar4 & 1) == 0) {
      ppuVar1 = param_2;
      func_0x00010c25a6e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar1;
      func_0x00010c25b720();
      ppuVar8 = param_2;
      func_0x00010c25a6e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar8;
      func_0x00010c25b7c0();
      ppuVar7 = param_2;
      func_0x00010c29d360(param_2);
      FUN_107b2894c(ppuVar5,ppuVar6,ppuVar7);
    }
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    if ((uVar4 & 1) == 0) {
      _objc_release(ppuVar8);
      _objc_release(ppuVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b28474; end: 107b28537;  */

undefined8 FUN_107b28474(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (param_2 != 0xb) {
    if (param_2 != 10) {
LAB_107b28518:
      uVar4 = 0;
      goto LAB_107b2851c;
    }
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) goto LAB_107b28518;
    }
    else {
      _objc_release(uVar1);
    }
  }
  uVar4 = 1;
LAB_107b2851c:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107b28538; end: 107b28693;  */

void FUN_107b28538(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5b30;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bf52680(param_2);
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c005f80(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5b38;
  _objc_alloc(PTR_PTR_1126b5b38);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c04ee20(param_1 * 1000.0,0,puVar3);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b28694; end: 107b2883b;  */

void FUN_107b28694(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_107b28538(param_2,1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a0a0();
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2883c; end: 107b2894b;  */

void FUN_107b2883c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf82a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b2894c; end: 107b28a23;  */

uint FUN_107b2894c(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((0x26 < param_3 - 0x45U) || ((1L << (param_3 - 0x45U & 0x3f) & 0x75343681f1U) == 0)) &&
     (param_3 != 7)) {
    if ((param_1 + 1U < 0x13) &&
       (uVar2 = (uint)(param_1 + 1U), (0x43c23U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uVar2 = 0x3c00 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar2 = (uint)(param_3 != 0x5b && param_3 != 0x2b);
      if (param_2 != 0) {
        uVar2 = 0;
      }
      uVar1 = 1;
      if ((1L << (param_2 & 0x3f) & 0x131bddf0200cU) == 0) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (param_2 < 0x2d) {
        uVar2 = uVar1;
      }
    }
  }
  return uVar2 & 1;
}



/* Entry: 107b28a24; end: 107b28a8f; -[SCOperaAnimatedImageLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b28a24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a830);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a830) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b28a90; end: 107b28b4b; -[SCOperaAnimatedImageLayerView setUpAnimatedImage:operaSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b28a90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1a9f00();
  _objc_release(param_3);
  func_0x00010c16ce00(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c17d4c0(param_1,param_2,1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11276a830),param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b28b4c; end: 107b28d5f; -[SCOperaAnimatedImageLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b28b4c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_180 [16];
  double dStack_170;
  double dStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f9e60;
  lStack_108 = param_5;
  _objc_msgSendSuper2(&lStack_108,PTR_s_layoutSubviews_112600e60);
  dVar15 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar9 = (long)_DAT_11276a830;
  lVar2 = *(long *)(param_5 + lVar9);
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_148 + lVar11 * 8);
        uVar4 = *(undefined8 *)(param_5 + lVar9);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1281e0(uVar8);
        dVar12 = dVar15;
        func_0x00010c14e120(uVar8);
        dVar15 = dVar15 * dVar12;
        func_0x00010bf20c00(param_5);
        dVar15 = dVar15 * param_3;
        func_0x00010c1281e0(uVar8);
        func_0x00010c14e120(uVar8);
        func_0x00010bf20c00(param_5);
        dVar14 = param_2 * dVar12 * param_4;
        dVar12 = 0.0;
        dVar13 = 0.0;
        func_0x00010c1739e0(0,0,dVar15,dVar14,uVar4);
        func_0x00010bf20c00(param_5);
        param_3 = dVar15;
        func_0x00010bf345e0(uVar8);
        func_0x00010bf20c00(param_5);
        param_4 = dVar14;
        func_0x00010bf345e0(uVar8);
        func_0x00010c17a6a0(dVar15 * dVar12,dVar14 * dVar13,uVar4);
        func_0x00010c141a80(uVar8);
        _CGAffineTransformMakeRotation(auStack_180);
        dVar15 = dStack_160;
        param_2 = dStack_170;
        func_0x00010c219960(uVar4);
        _objc_release(uVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar2);
      }
      puVar5 = PTR_PTR_1126bb2a0;
      uVar7 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar7);
      _objc_opt_class(puVar5);
      uVar6 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar1 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      if ((uVar1 != 0) && (uVar6 = uVar7, func_0x00010c06c0e0(), (uVar6 & 1) == 0)) {
        func_0x00010c24dbc0(uVar7);
      }
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar2);
      }
      puVar5 = PTR_PTR_1126bb2a0;
      uVar7 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar7);
      _objc_opt_class(puVar5);
      uVar6 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar1 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      if ((uVar1 != 0) && (uVar6 = uVar7, func_0x00010c06c0e0(), (int)uVar6 != 0)) {
        func_0x00010c2558c0(uVar7);
      }
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(lVar2 + _DAT_11276a830);
  *(undefined **)(lVar2 + _DAT_11276a830) = puVar5;
  _objc_release(uVar4);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar11 * 8));
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_11276a830,0);
  return;
}



/* Entry: 107b28d60; end: 107b28eaf; -[SCOperaAnimatedImageLayerView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b28d60(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126bb2a0;
      uVar8 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar4);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      uVar1 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      if ((uVar1 != 0) && (uVar5 = uVar8, func_0x00010c06c0e0(), (uVar5 & 1) == 0)) {
        func_0x00010c24dbc0(uVar8);
      }
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126bb2a0;
      uVar8 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar4);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      uVar1 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      if ((uVar1 != 0) && (uVar5 = uVar8, func_0x00010c06c0e0(), (int)uVar5 != 0)) {
        func_0x00010c2558c0(uVar8);
      }
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276a830);
  *(undefined **)(param_1 + _DAT_11276a830) = puVar4;
  _objc_release(uVar7);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a830,0);
  return;
}



/* Entry: 107b28eb0; end: 107b28fff; -[SCOperaAnimatedImageLayerView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b28eb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126bb2a0;
      uVar8 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar4);
      uVar5 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar4);
      uVar1 = uVar8;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      if ((uVar1 != 0) && (uVar5 = uVar8, func_0x00010c06c0e0(), (int)uVar5 != 0)) {
        func_0x00010c2558c0(uVar8);
      }
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276a830);
  *(undefined **)(param_1 + _DAT_11276a830) = puVar4;
  _objc_release(uVar7);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a830,0);
  return;
}



/* Entry: 107b29000; end: 107b2911b; -[SCOperaAnimatedImageLayerView cleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29000(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276a830);
  *(undefined **)(param_1 + _DAT_11276a830) = puVar2;
  _objc_release(uVar5);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a830,0);
  return;
}



/* Entry: 107b2911c; end: 107b2912f; -[SCOperaAnimatedImageLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2911c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a830,0);
  return;
}



/* Entry: 107b29130; end: 107b2918b; -[SCOperaAnimatedImageViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29130(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6840;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a834;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b2918c; end: 107b2932f; -[SCOperaAnimatedImageViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2918c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar6 = *(undefined8 *)(lVar5 * 8);
      lVar3 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7fa0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe78a0(lVar3);
      _objc_release(uVar6);
      _objc_release(lVar3);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c21c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a834),
             PTR_s_setUpAnimatedImage_operaSticker__112664a80,param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b29330; end: 107b29347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29330(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a834),
             PTR_s_setUpAnimatedImage_operaSticker__112664a80,param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b29348; end: 107b29357; -[SCOperaAnimatedImageViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a834),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 107b29358; end: 107b29367; -[SCOperaAnimatedImageViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a834),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 107b29368; end: 107b2943b; -[SCOperaAnimatedImageViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29368(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276a834));
  return;
}



/* Entry: 107b2943c; end: 107b2948b; -[SCOperaAnimatedImageViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2943c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9e68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010bf39f80(*(undefined8 *)(param_1 + _DAT_11276a834));
  return;
}



/* Entry: 107b2948c; end: 107b2949f; -[SCOperaAnimatedImageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2948c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a834,0);
  return;
}



/* Entry: 107b294a0; end: 107b295ff; -[SCOperaDebugButtonLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b294a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f9e70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276a838;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,
                        *(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b29600; end: 107b29683; -[SCOperaDebugButtonLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29600(double param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9e70;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
  func_0x00010c19f0e0(param_1 + -40.0 + -10.0,0x4050000000000000,0x4044000000000000,
                      0x4044000000000000,*(undefined8 *)(param_2 + _DAT_11276a838));
  return;
}



/* Entry: 107b29684; end: 107b29707; -[SCOperaDebugButtonLayerView hitTest:withEvent:] */

void FUN_107b29684(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar3 = (undefined1 *)puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar4 = (undefined1 *)0x0;
  if ((((ulong)puVar3 & 1) != 0) && (puVar1 != (undefined8 *)0x0)) {
    _objc_retain(puVar1);
    puVar4 = (undefined1 *)puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b29708; end: 107b29743; -[SCOperaDebugButtonLayerView _debugButtonDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29708(long param_1)

{
  param_1 = param_1 + _DAT_11276a83c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ea2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b29744; end: 107b29763; -[SCOperaDebugButtonLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29744(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a83c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b29764; end: 107b29777; -[SCOperaDebugButtonLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29764(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a83c,param_3);
  return;
}



/* Entry: 107b29778; end: 107b297b3; -[SCOperaDebugButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29778(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a83c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a838,0);
  return;
}



/* Entry: 107b297b4; end: 107b2980f; -[SCOperaDebugButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b297b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6848;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a840;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b29810; end: 107b29863; -[SCOperaDebugButtonLayerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29810(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9e78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_11276a840));
  return;
}



/* Entry: 107b29864; end: 107b2986b; -[SCOperaDebugButtonLayerViewController isRecyclable] */

undefined8 FUN_107b29864(void)

{
  return 0;
}



/* Entry: 107b2986c; end: 107b298af; -[SCOperaDebugButtonLayerViewController operaDebugButtonLayerDidTapDebugButton:] */

void FUN_107b2986c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010bf66520(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b298b0; end: 107b298c3; -[SCOperaDebugButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b298b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a840,0);
  return;
}



/* Entry: 107b298c4; end: 107b299a7; -[SCOperaGestureToolTipView initWithImage:caption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b298c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9e80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a844);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a844) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11276a848;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b299a8; end: 107b29b7f; -[SCOperaGestureToolTipView resizeForContainerWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b299a8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_11276a848;
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&uStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(param_1 + -40.0,0x7fefffffffffffff,uVar1,param_6,1,puVar3,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar6 = 0.0;
  func_0x00010c1739e0(0,0,param_1 + -40.0,(long)param_4,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar5));
  dVar7 = dVar6 + 20.0;
  lVar4 = (long)_DAT_11276a844;
  func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar4));
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  func_0x00010c2256c0(param_5);
  func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar5));
  dVar7 = dVar6;
  func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar4));
  dVar6 = dVar6 + dVar7 + 10.0;
  func_0x00010c1a7d00(dVar6,param_5);
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c2172c0(dVar6 + 10.0,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar4 = *(long *)(param_5 + lVar5);
  func_0x00010c17a840();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar4;
  }
  ___stack_chk_fail();
  return *(long *)(lVar4 + _DAT_11276a848);
}



/* Entry: 107b29b80; end: 107b29b8f; -[SCOperaGestureToolTipView caption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b29b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a848);
}



/* Entry: 107b29b90; end: 107b29bcf; -[SCOperaGestureToolTipView setCaption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a848;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b29bd0; end: 107b29bdf; -[SCOperaGestureToolTipView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b29bd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a844);
}



/* Entry: 107b29be0; end: 107b29c1f; -[SCOperaGestureToolTipView setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a844;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b29c20; end: 107b29c5f; -[SCOperaGestureToolTipView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a844,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a848,0);
  return;
}



/* Entry: 107b29c60; end: 107b29e3b; -[SCOperaGestureToolTipsLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b29c60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_11276a84c;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
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
  lVar2 = param_3;
  func_0x00010c2631a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_1;
        func_0x00010bec8b80(param_1,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,lVar4);
        func_0x00010befa120(puVar1,param_2,lVar4);
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276a850);
  *(undefined **)(param_1 + _DAT_11276a850) = puVar5;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010befbb60(param_1,param_2,uVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  uVar6 = uVar7;
  func_0x00010bfc1d00(uVar7);
  lVar2 = param_3;
  func_0x00010be1c8e0(param_3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bfc1960(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010bddb480(0x4034000000000000,param_3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126d6850;
  _objc_alloc(PTR_PTR_1126d6850);
  func_0x00010c01bfa0();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b29e3c; end: 107b29efb; -[SCOperaGestureToolTipsLayerView _subviewForGesture:] */

void FUN_107b29e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc1d00(param_3);
  uVar2 = param_1;
  func_0x00010be1c8e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfc1960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bddb480(0x4034000000000000,param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d6850;
  _objc_alloc(PTR_PTR_1126d6850);
  func_0x00010c01bfa0();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b29efc; end: 107b29f33; -[SCOperaGestureToolTipsLayerView _gestureImageForGestureType:] */

void FUN_107b29efc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,(&PTR_PTR_1109fdba8)[param_3]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b29f34; end: 107b2a04f; -[SCOperaGestureToolTipsLayerView _captionWithText:fontSize:] */

void FUN_107b29f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c25cfc0(param_4,param_3,&PTR____CFConstantStringClassReference_110db2db8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c212f20();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_3,0);
  func_0x00010c1cfce0(puVar1,param_3,0);
  func_0x00010c213040(puVar1,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b2a050; end: 107b2a383; -[SCOperaGestureToolTipsLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b2a050(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = PTR_PTR_1126f9e88;
  lStack_1a8 = param_1;
  _objc_msgSendSuper2(&lStack_1a8,PTR_s_layoutSubviews_112600e60);
  dVar11 = 0.0;
  lVar7 = (long)_DAT_11276a850;
  lVar4 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  dVar13 = 0.0;
  dVar14 = 0.0;
  dVar12 = 0.0;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      dVar9 = dVar11;
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
        dVar9 = dVar11;
      }
      uVar5 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c2a5040(param_1);
      func_0x00010c13a1c0(uVar5);
      func_0x00010bfe0640(uVar5);
      uVar6 = uVar5;
      dVar10 = dVar9;
      func_0x00010bf2fba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar11 = dVar10;
      _objc_release(uVar6);
      if (60.0 < dVar10) {
        func_0x00010bf2fba0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        dVar11 = dVar11 + -60.0;
        dVar14 = dVar14 + dVar11;
        _objc_release(uVar5);
      }
      dVar12 = dVar12 + dVar9;
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0(lVar2);
    dVar12 = (dVar12 + (double)(lVar2 - 1) * 64.0) - dVar14;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0(lVar2);
    dVar13 = dVar14 / (double)(lVar2 - 1);
  }
  lVar2 = (long)_DAT_11276a84c;
  func_0x00010c1a7d00(dVar12,*(undefined8 *)(param_1 + lVar2));
  func_0x00010c2a5040(param_1);
  func_0x00010c2256c0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bf20c00(param_1);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bf20c00(param_1);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_1 + lVar2));
  lVar4 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 != 0) {
    dVar14 = 0.0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        dVar12 = dVar14;
        func_0x00010c2172c0(dVar14,uVar6);
        func_0x00010bf20c00(param_1);
        _CGRectGetMidX();
        func_0x00010c17a840(uVar6);
        func_0x00010bfe0640(uVar6);
        dVar14 = dVar14 + ((dVar12 + 64.0) - dVar13);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return lVar4;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 107b2a384; end: 107b2a38b; -[SCOperaGestureToolTipsLayerView isAccessibilityElement] */

undefined8 FUN_107b2a384(void)

{
  return 1;
}



/* Entry: 107b2a38c; end: 107b2a3cb; -[SCOperaGestureToolTipsLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a38c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a850,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a84c,0);
  return;
}



/* Entry: 107b2a3cc; end: 107b2a443; -[SCOperaGestureToolTipsLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a3cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6858;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a854;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c222380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be01870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didUpdateSubviewsVisible__11255dfb8,0);
  return;
}



/* Entry: 107b2a444; end: 107b2a4b3; -[SCOperaGestureToolTipsLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a444(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276a854);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b2a4b4; end: 107b2a51f; -[SCOperaGestureToolTipsLayerViewController viewDidFullyAppear] */

void FUN_107b2a4b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9e90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyAppear_112684c88);
  puVar1 = PTR_PTR_1126c9c10;
  func_0x00010c0e92a0(PTR_PTR_1126c9c10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107b2a520; end: 107b2a64f; -[SCOperaGestureToolTipsLayerViewController didTryPagingWhenPagingDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a520(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11276a858) = 1;
  lVar1 = param_1;
  func_0x00010bf1d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1da00();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107b2a5c0;
  puStack_40 = &UNK_110841f20;
  lStack_38 = param_1;
  func_0x00010bf02fc0(*(undefined8 *)(param_1 + _DAT_11276a854),param_2,&puStack_58);
  return;
}



/* Entry: 107b2a650; end: 107b2a667; -[SCOperaGestureToolTipsLayerViewController isBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b2a650(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276a858) ^ 0xff) & 1;
}



/* Entry: 107b2a668; end: 107b2a677; -[SCOperaGestureToolTipsLayerViewController isBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b2a668(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a858);
}



/* Entry: 107b2a678; end: 107b2a67f; -[SCOperaGestureToolTipsLayerViewController shouldBlockOtherLayersFromDisplayingWithCurrentPage:] */

undefined8 FUN_107b2a678(void)

{
  return 1;
}



/* Entry: 107b2a680; end: 107b2a687; -[SCOperaGestureToolTipsLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b2a680(void)

{
  return 1;
}



/* Entry: 107b2a688; end: 107b2a7cb; -[SCOperaGestureToolTipsLayerViewController _didUpdateSubviewsVisible:] */

undefined * FUN_107b2a688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf393e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  puStack_58 = puVar2;
  func_0x00010c2708e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c118dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107b2a7cc; end: 107b2a7d3; -[SCOperaGestureToolTipsLayerViewController isRecyclable] */

undefined8 FUN_107b2a7cc(void)

{
  return 0;
}



/* Entry: 107b2a7d4; end: 107b2a7f3; -[SCOperaGestureToolTipsLayerViewController blockingViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a7d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a85c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b2a7f4; end: 107b2a807; -[SCOperaGestureToolTipsLayerViewController setBlockingViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a85c,param_3);
  return;
}



/* Entry: 107b2a808; end: 107b2a843; -[SCOperaGestureToolTipsLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a808(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a85c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a854,0);
  return;
}



/* Entry: 107b2a844; end: 107b2a8fb; -[SCOperaGifLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b2a844(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9e98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a860);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a860) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b2a8fc; end: 107b2a903; -[SCOperaGifLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b2a8fc(void)

{
  return 0;
}



/* Entry: 107b2a904; end: 107b2a9d7; -[SCOperaGifLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d6860;
  _objc_alloc();
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a864);
  *(undefined **)(param_1 + _DAT_11276a864) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2a9d8; end: 107b2ab87; -[SCOperaGifLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2a9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcc920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfcc940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276a860);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfcc8c0(lVar3);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b2ab88; end: 107b2ac6f;  */

void FUN_107b2ab88(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b4690;
    _objc_alloc();
    func_0x00010bff2e60();
    if (puVar1 != (undefined *)0x0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_107b2ac70;
      puStack_50 = &UNK_110848218;
      _objc_copyWeak(auStack_38,param_1 + 0x28);
      _objc_retain(puVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_48 = puVar1;
      _objc_retain(uVar2);
      uStack_40 = uVar2;
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_release(uStack_40);
      _objc_release(puStack_48);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107b2ac70; end: 107b2adaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ac70(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11276a864;
    func_0x00010c167e80(*(undefined8 *)(lVar1 + lVar5),param_4,*(undefined8 *)(param_3 + 0x20));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    puVar4 = PTR_PTR_1126b2640;
    param_2 = param_2 / param_1;
    dVar6 = ABS(param_2);
    if ((dVar6 != INFINITY &&
        ((ulong)dVar6 < 0x7ff0000000000000 &&
        (dVar6 != 0.0 && (-1 < (long)param_2 || 0xffffffffffffe < (long)ABS(param_2) - 1U)))) &&
        (-1 < (long)param_2 || 0x3fe < (long)ABS(param_2) + 0xfff0000000000000U >> 0x35)) {
      if (param_2 <= 0.01) {
        param_2 = 0.01;
      }
      dVar6 = 100.0;
      if (param_2 <= 100.0) {
        dVar6 = param_2;
      }
      lVar2 = lVar1;
      func_0x00010c08c0e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf87840();
      func_0x00010c08cb40(dVar6,puVar4,param_4,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c08d120(lVar1,param_4,*(undefined8 *)(lVar1 + lVar5),puVar4,1);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b2adb0; end: 107b2adef; -[SCOperaGifLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2adb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a860,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a864,0);
  return;
}



/* Entry: 107b2adf0; end: 107b2af0b; -[SCOperaImageLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b2adf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9ea0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276a868) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276a86c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276a870) = 0;
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a874);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a874) = puVar2;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_11276a878) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107b2af0c; end: 107b2afaf; -[SCOperaImageLayerViewController _decodingPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2af0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276a87c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f445e60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x1f);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b2afb0; end: 107b2b013; -[SCOperaImageLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2afb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c90a8;
  _objc_alloc(PTR_PTR_1126c90a8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a880);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ae0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b2b014; end: 107b2b01b; -[SCOperaImageLayerViewController supportsShareableMediaSnapshot] */

undefined8 FUN_107b2b014(void)

{
  return 1;
}



/* Entry: 107b2b01c; end: 107b2b07b; -[SCOperaImageLayerViewController shareableMediaSnapshotWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2b01c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a880);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b2b07c; end: 107b2b083; -[SCOperaImageLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b2b07c(void)

{
  return 0;
}



/* Entry: 107b2b084; end: 107b2b1eb; -[SCOperaImageLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2b084(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0fc2c0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0fc2c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010be9aa40((double)param_1,param_2);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0c5840(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010bf73680(*(undefined8 *)(param_2 + _DAT_11276a884),param_3,uVar3 & 0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b2b1ec; end: 107b2b283; -[SCOperaImageLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_107b2b1ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  
  uVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e200(param_1);
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(auStack_60,param_1,param_1);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_2);
  return;
}



/* Entry: 107b2b284; end: 107b2b3ff; -[SCOperaImageLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107b2b284(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0827e0();
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bfe7fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe7fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar3);
    if (uVar1 == uVar3) {
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      if (uVar3 == 0) {
        _objc_release();
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar4 = uVar1;
        func_0x00010c071ae0(uVar1,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar1);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) goto LAB_107b2b3e8;
      }
      func_0x00010be4d880(param_1);
    }
  }
LAB_107b2b3e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2b400; end: 107b2b59f; -[SCOperaImageLayerViewController _loadImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2b400(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b2b5a0;
  puStack_70 = &UNK_110865e48;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar2);
  ppuVar3 = &puStack_88;
  lStack_68 = lVar2;
  _objc_retainBlock();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276a880));
  lVar1 = param_1;
  func_0x00010bfe8840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa560(param_1);
  *(undefined1 *)(param_1 + _DAT_11276a888) = 1;
  _objc_retain(ppuVar3);
  func_0x00010bfe78a0(lVar1);
  _objc_release(ppuVar3);
  _objc_release(lVar1);
  _objc_release(ppuVar3);
  _objc_release(lStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 107b2b5a0; end: 107b2b663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2b5a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe7fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      *(undefined1 *)(param_1 + _DAT_11276a888) = 0;
      if (param_2 != 0) {
        func_0x00010c288560(param_1);
        func_0x00010be786a0(param_1);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b2b664; end: 107b2b6ff;  */

void FUN_107b2b664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107b2b700;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 107b2b700; end: 107b2b70f;  */

void FUN_107b2b700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b2b70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107b2b710; end: 107b2b883; -[SCOperaImageLayerViewController _prepareImageForDisplay:imageKey:] */

void FUN_107b2b710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
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
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0713c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be698c0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107b2b884;
    puStack_70 = &UNK_1109fdbc8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uStack_68 = param_4;
    uStack_60 = param_1;
    _objc_retain(param_3);
    ppuVar3 = &puStack_88;
    uStack_58 = param_3;
    _objc_retainBlock(ppuVar3);
    func_0x00010bdf88e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c780(param_3);
    _objc_release(param_1);
    _objc_release(ppuVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b2b884; end: 107b2b977;  */

void FUN_107b2b884(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b2b978;
  puStack_60 = &UNK_11085ae98;
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107b2b978; end: 107b2b9cb;  */

void FUN_107b2b978(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be698c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2b9cc; end: 107b2bbab; -[SCOperaImageLayerViewController _onImageReadyToDisplay:imageKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2b9cc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfe7fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0720c0(param_6,param_4,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if ((int)uVar2 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_11276a880),param_4,param_5);
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    func_0x00010befa560(param_3,param_4,&PTR____CFConstantStringClassReference_110eae1b8);
    func_0x00010be9f4e0(param_3);
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    puVar3 = PTR_PTR_1126b2640;
    if (!NAN(param_2 / param_1)) {
      lVar5 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf87840();
      func_0x00010c08cb40(param_2 / param_1,puVar3,param_4,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11276a88c;
      func_0x00010c16e440(*(undefined8 *)(param_3 + lVar5),param_4,puVar4);
      _objc_release(puVar4);
      func_0x00010c08d120(param_3,param_4,*(undefined8 *)(param_3 + lVar5),puVar3,1);
      func_0x00010c0f3ca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar5);
      _objc_release(param_3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b2bbac; end: 107b2bc47; -[SCOperaImageLayerViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2bbac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9ea0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11276a880;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c288560(param_1);
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 107b2bc48; end: 107b2bcc7; -[SCOperaImageLayerViewController updateParentViewControllerWithImageForBackdrop:] */

void FUN_107b2bc48(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 != 0) && (uVar1 = param_1, func_0x00010c079780(), (uVar1 & 1) == 0)) {
    func_0x00010c0f2520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa300();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2bcc8; end: 107b2bdaf; -[SCOperaImageLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2bcc8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010bfe74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_48 = puVar1;
  func_0x00010beed820(*(undefined8 *)(param_2 + _DAT_11276a874));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b2bdb0; end: 107b2bdb3; -[SCOperaImageLayerViewController layerProgressTrackable] */

void FUN_107b2bdb0(void)

{
  return;
}



/* Entry: 107b2bdb4; end: 107b2c0b7; -[SCOperaImageLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2bdb4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  puVar1 = PTR_PTR_1126d6868;
  _objc_alloc();
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  lVar8 = (long)_DAT_11276a880;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8),param_2,
                      &PTR____CFConstantStringClassReference_110e877d8);
  puVar1 = PTR_PTR_1126d2b40;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  lVar9 = (long)_DAT_11276a88c;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf4dce0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar7);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107b2c0b8;
  puStack_80 = &UNK_1108471b0;
  uStack_78 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar8),param_2,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb4e0();
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8fc40();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) goto LAB_107b2c038;
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    uVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_107b2c038:
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  puVar1 = PTR_PTR_1126b2640;
  func_0x00010c08cb00(PTR_PTR_1126b2640);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d120(param_1,param_2,uVar7,puVar1,1);
  _objc_release(puVar1);
  return;
}


