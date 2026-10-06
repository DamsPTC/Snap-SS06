/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10903f5a8; end: 10903f5af; -[SCImageProcessLensCommandV2 appliesInputTransform] */

undefined8 FUN_10903f5a8(void)

{
  return 1;
}



/* Entry: 10903f5b0; end: 10903f5b7; -[SCImageProcessLensCommandV2 appliesInputOrientation] */

undefined8 FUN_10903f5b0(void)

{
  return 1;
}



/* Entry: 10903f5b8; end: 10903f5bf; -[SCImageProcessLensCommandV2 isResourcesDownloaded] */

undefined8 FUN_10903f5b8(void)

{
  return 1;
}



/* Entry: 10903f5c0; end: 10903f5c7; -[SCImageProcessLensCommandV2 inputConstraint] */

undefined8 FUN_10903f5c0(void)

{
  return 0;
}



/* Entry: 10903f5c8; end: 10903f7d7; -[SCImageProcessLensCommandV2 loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10903f5c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1126ffff8;
  plVar2 = &lStack_100;
  lStack_100 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  func_0x00010bdfcf60(param_1);
  if (((int)plVar2 != 0) && (lVar7 = (long)_DAT_112780138, param_3 != *(long *)(param_1 + lVar7))) {
    param_4 = param_1;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar3 = param_4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010c11c120(*(undefined8 *)(param_1 + _DAT_112780118));
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_4;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = param_3;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_11278011c;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    if ((*(byte *)(param_1 + _DAT_11278012c) & 1) == 0) {
      func_0x00010c1fda20(uVar6);
    }
    else {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fda20(uVar6);
      _objc_release(uVar4);
    }
    func_0x00010c1eab40(*(undefined8 *)(param_1 + lVar7));
    _objc_release(param_4);
  }
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar2;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10903f7d8;
  puStack_178 = PTR_PTR_1126ffff8;
  plVar5 = &lStack_180;
  lStack_180 = lVar7;
  lStack_170 = param_4;
  lStack_168 = param_1;
  plStack_160 = plVar2;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(plVar5,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar7 + _DAT_112780138);
    *(undefined8 *)(lVar7 + _DAT_112780138) = 0;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)(lVar7 + _DAT_112780130);
    _CMTimeMake(&uStack_198,0,600);
    puVar1[1] = uStack_190;
    *puVar1 = uStack_198;
    puVar1[2] = uStack_188;
  }
  return plVar5;
}



/* Entry: 10903f7d8; end: 10903f86b; -[SCImageProcessLensCommandV2 unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10903f7d8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffff8;
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112780138);
    *(undefined8 *)(param_1 + _DAT_112780138) = 0;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)(param_1 + _DAT_112780130);
    _CMTimeMake(&uStack_58,0,600);
    puVar1[1] = uStack_50;
    *puVar1 = uStack_58;
    puVar1[2] = uStack_48;
  }
  return plVar2;
}



/* Entry: 10903f86c; end: 10904030b; -[SCImageProcessLensCommandV2 runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903f86c(double param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  ulong in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined *puStack_1e8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(in_stack_00000010);
  puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    if (in_stack_00000018 != (long *)0x0) {
      lVar7 = 7;
      FUN_10903caf4(7,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *in_stack_00000018 = lVar7;
    }
    func_0x00010bdfcf60(param_3);
    param_3 = (undefined *)0x0;
    goto LAB_10903fda8;
  }
  puVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain();
  _objc_release(puVar4);
  if ((param_3[_DAT_112780128] == '\x01') &&
     (puVar4 = param_3, func_0x00010c071300(), ((ulong)puVar4 & 1) == 0)) {
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_d8 = (undefined8 *)in_stack_00000008[1];
    uStack_e0 = *in_stack_00000008;
    pcStack_c8 = (code *)in_stack_00000008[3];
    uStack_d0 = in_stack_00000008[2];
    uStack_b8 = in_stack_00000008[5];
    uStack_c0 = in_stack_00000008[4];
    func_0x00010be0e4a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_1e8 = &UNK_10f548f89;
    func_0x000107c31820();
    puVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = param_5;
    puStack_e8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_e8 == (undefined *)0x0) {
      if (puVar5 == (undefined *)0x0) {
        puVar4 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 == (undefined *)0x0) goto LAB_10903f9c4;
        puVar4 = PTR_PTR_1126b26c8;
        func_0x00010c22b820();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c09c860();
        if (((ulong)puVar9 & 1) == 0) {
          param_3 = (undefined *)0x0;
        }
        else {
          puStack_d8 = (undefined8 *)in_stack_00000008[1];
          uStack_e0 = *in_stack_00000008;
          pcStack_c8 = (code *)in_stack_00000008[3];
          uStack_d0 = in_stack_00000008[2];
          uStack_b8 = in_stack_00000008[5];
          uStack_c0 = in_stack_00000008[4];
          param_3 = puVar4;
          func_0x00010c142ba0(param_1,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
      }
      else {
        puVar4 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c2827c0();
        _objc_release(puVar4);
        puVar4 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c2827c0();
        _objc_release(puVar4);
        puVar4 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c2827c0();
        _objc_release(puVar4);
        puVar4 = puVar5;
        _CFDataGetBytePtr(puVar5);
        iVar2 = 0;
        _CVPixelBufferCreateWithBytes(0,puVar9,puVar10,0x42475241,puVar4,puVar8,0,0,0,&puStack_e8);
        if ((iVar2 == 0) && (puStack_e8 != (undefined *)0x0)) goto LAB_10903f9c4;
        if (in_stack_00000018 != (long *)0x0) {
          lVar7 = 6;
          FUN_10903caf4(6,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *in_stack_00000018 = lVar7;
        }
        func_0x00010bdfcf60(param_3);
        param_3 = (undefined *)0x0;
      }
    }
    else {
      _CVPixelBufferRetain();
LAB_10903f9c4:
      puVar4 = puStack_e8;
      _CVPixelBufferGetWidth();
      puVar9 = puStack_e8;
      _CVPixelBufferGetHeight();
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3032000000;
      pcStack_c8 = FUN_10904030c;
      uStack_c0 = 0x10904031c;
      uStack_128 = 3;
      if (puVar4 <= puVar9 || (in_stack_00000000 & 0xffffffffffffffeb) != 3) {
        uStack_128 = 0;
      }
      uStack_b8 = 0;
      puStack_110 = &uStack_118;
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      pcStack_100 = FUN_10904030c;
      uStack_f8 = 0x10904031c;
      uStack_f0 = 0;
      puVar4 = &UNK_10f54840d;
      func_0x000107c31820(&UNK_10f54840d);
      uVar6 = *(undefined8 *)(param_3 + _DAT_112780120);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      dVar12 = 1.60807493534087e-314;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_109040324;
      puStack_150 = &UNK_110ad5ee8;
      puStack_148 = param_3;
      _objc_retain(param_5);
      puStack_138 = &uStack_e0;
      puStack_130 = &uStack_118;
      puStack_120 = puStack_e8;
      puStack_140 = param_5;
      func_0x000107c27da4(uVar6,&puStack_168);
      _objc_release(puStack_140);
      _objc_release(uVar6);
      func_0x000107c31828(puVar4);
      lVar7 = puStack_d8[5];
      if (((lVar7 == 0) || (func_0x00010c111940(), lVar7 == 0)) || (puStack_110[5] != 0)) {
        if (in_stack_00000018 != (long *)0x0) {
          lVar7 = puStack_110[5];
          if (lVar7 == 0) {
            lVar7 = 5;
            FUN_10903caf4(5,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            *in_stack_00000018 = lVar7;
            _objc_release();
          }
          else {
            _objc_retainAutorelease();
            *in_stack_00000018 = lVar7;
          }
        }
        func_0x00010bdfcf60(param_3);
        uStack_198 = in_stack_00000008[1];
        uStack_1a0 = *in_stack_00000008;
        uStack_188 = in_stack_00000008[3];
        uStack_190 = in_stack_00000008[2];
        uStack_178 = in_stack_00000008[5];
        uStack_180 = in_stack_00000008[4];
        func_0x00010be0e4a0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        _CVPixelBufferRelease(puStack_e8);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
        func_0x00010bf5e500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != puVar4) {
          func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
        }
        puVar4 = puStack_e8;
        puVar10 = (undefined *)puStack_d8[5];
        func_0x00010c111940();
        puStack_e8 = puVar10;
        _CVPixelBufferGetWidth();
        puVar9 = puStack_e8;
        _CVPixelBufferGetHeight(puStack_e8);
        lVar7 = (long)_DAT_112780138;
        uVar6 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c26ce80(uVar6);
        uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        _CVOpenGLESTextureCacheCreateTextureFromImage
                  (uVar11,uVar6,puStack_e8,0,0xde1,0x1908,puVar10,puVar9,0x1401000080e1,0,
                   &lStack_1a8);
        if ((lStack_1a8 != 0) && ((int)uVar11 == 0)) {
          lVar7 = *(long *)(param_3 + lVar7);
          func_0x00010c26ce80();
          if (lVar7 != 0) {
            _CVOpenGLESTextureGetName();
            _CVPixelBufferRelease(puVar4);
            puVar4 = &UNK_10f548fb0;
            func_0x000107c31820();
            _CACurrentMediaTime();
            uVar6 = *(undefined8 *)(param_3 + _DAT_112780108);
            puVar9 = param_3;
            dVar13 = dVar12;
            func_0x00010c117700(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = param_3;
            func_0x00010c094660(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar10;
            func_0x00010bf04a20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9b0c0(uVar6);
            _objc_release(puVar8);
            _objc_release(puVar10);
            _objc_release(puVar9);
            puVar9 = puVar1;
            func_0x00010bf1f3c0();
            if ((int)puVar9 == 0) {
LAB_109040060:
              if (((param_3[_DAT_11278012c] & 1) == 0) &&
                 (puVar9 = param_3, func_0x00010c071320(), (int)puVar9 != 0)) {
                uVar6 = *(undefined8 *)(param_3 + _DAT_112780110);
                puVar9 = param_3;
                func_0x00010c094660(param_3);
                _objc_retainAutoreleasedReturnValue();
                _CACurrentMediaTime();
                func_0x00010bf755e0(dVar13 - dVar12,uVar6);
                _objc_release(puVar9);
              }
              lVar7 = (long)_DAT_112780114;
              func_0x00010c06fb80(*(undefined8 *)(param_3 + lVar7));
              puVar9 = param_3;
              func_0x00010bf6b020(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0918a0();
              _objc_release(puVar9);
              func_0x00010c0bb440(*(undefined8 *)(param_3 + lVar7));
              _CVPixelBufferRelease(puStack_e8);
              _CFRelease(lStack_1a8);
              ppuStack_a8 = &PTR____CFConstantStringClassReference_110f1e758;
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820();
              _objc_retainAutoreleasedReturnValue();
              param_3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_a0 = puVar9;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
            }
            else {
              uStack_198 = in_stack_00000008[1];
              uStack_1a0 = *in_stack_00000008;
              uStack_188 = in_stack_00000008[3];
              uStack_190 = in_stack_00000008[2];
              uStack_178 = in_stack_00000008[5];
              uStack_180 = in_stack_00000008[4];
              puVar9 = param_3;
              func_0x00010bf89d00(param_1,param_2);
              dVar13 = param_1;
              if (((ulong)puVar9 & 1) != 0) goto LAB_109040060;
              _CVPixelBufferRelease(puStack_e8);
              _CFRelease(lStack_1a8);
              func_0x00010bdfcf60(param_3);
              param_3 = (undefined *)0x0;
            }
            func_0x000107c31828(puVar4);
            goto LAB_10903fd68;
          }
        }
        if (in_stack_00000018 != (long *)0x0) {
          lVar7 = 4;
          FUN_10903caf4(4,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *in_stack_00000018 = lVar7;
        }
        func_0x00010bdfcf60(param_3);
        uStack_198 = in_stack_00000008[1];
        uStack_1a0 = *in_stack_00000008;
        uStack_188 = in_stack_00000008[3];
        uStack_190 = in_stack_00000008[2];
        uStack_178 = in_stack_00000008[5];
        uStack_180 = in_stack_00000008[4];
        func_0x00010be0e4a0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        _CVPixelBufferRelease(puVar4);
      }
LAB_10903fd68:
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(uStack_b8);
    }
    _objc_release(puVar5);
    func_0x000107c31828(puStack_1e8);
  }
  _objc_release(puVar1);
LAB_10903fda8:
  _objc_release(puVar3);
  _objc_release(in_stack_00000010);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_118,8);
  lVar7 = 8;
  __Block_object_dispose(&uStack_e0);
  func_0x000107c31828(puStack_1e8);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 10904030c; end: 109040323;  */

void FUN_10904030c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109040324; end: 10904058f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040324(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  double dVar13;
  double dStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  double dStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11278010c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar12 = (long)_DAT_112780128;
  lVar1 = (long)_DAT_11278012c;
  uVar3 = 7;
  if (*(char *)(lVar5 + lVar12) != '\0') {
    uVar3 = 8;
  }
  if ((*(byte *)(lVar5 + lVar1) & 1) == 0) {
    func_0x00010c0710e0();
    uVar11 = (uint)lVar5 ^ 1;
  }
  else {
    uVar11 = 1;
  }
  func_0x00010c21d960(uVar4,param_3,uVar11);
  func_0x00010c1d6440(uVar4,param_3,*(undefined8 *)(param_2 + 0x40));
  func_0x00010c1e38c0(uVar4,param_3,1);
  func_0x00010c1b51c0(uVar4,param_3,*(undefined1 *)(*(long *)(param_2 + 0x20) + lVar1));
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar6,param_3,&PTR____CFConstantStringClassReference_110f1e6f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar7,param_3,&PTR____CFConstantStringClassReference_110f1e718);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar5 = 0;
    dStack_88 = 0.0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010be7f880(&dStack_88,*(long *)(param_2 + 0x20),param_3,uVar6,uVar7);
    if ((uStack_80 & 0x100000000) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + lVar12) & 1) == 0) {
        func_0x00010c06c040();
      }
      else {
        lVar5 = 1;
      }
    }
  }
  func_0x00010c21dbc0(uVar4,param_3,lVar5);
  iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c071320();
  _CACurrentMediaTime();
  lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  uStack_90 = *(undefined8 *)(lVar12 + 0x28);
  uStack_a8 = uStack_80;
  dStack_b0 = dStack_88;
  uStack_a0 = uStack_78;
  uVar8 = uVar4;
  dVar13 = dStack_88;
  func_0x00010c115100(uVar4,param_3,*(undefined8 *)(param_2 + 0x48),uVar3,&dStack_b0,&uStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uStack_90;
  _objc_retain(uStack_90);
  uVar9 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar10;
  _objc_release(uVar9);
  lVar12 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar10 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar8;
  _objc_release(uVar10);
  lVar12 = *(long *)(param_2 + 0x20);
  if (((*(byte *)(lVar12 + lVar1) & 1) == 0) && (iVar2 != 0)) {
    uVar10 = *(undefined8 *)(lVar12 + _DAT_112780110);
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf78c00(dVar13 - param_1,uVar10,param_3,lVar12,uVar3);
    _objc_release(lVar12);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 109040590; end: 1090405b3; -[SCImageProcessLensCommandV2 copyWithZone:] */

undefined8 FUN_109040590(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090405b4; end: 109040673; -[SCImageProcessLensCommandV2 isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1090405b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126c40e0;
  _objc_opt_class(PTR_PTR_1126c40e0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    _objc_opt_class(param_3);
    lVar6 = param_1;
    func_0x00010c077980();
    if ((int)lVar6 != 0) {
      iVar3 = (int)*(undefined8 *)(param_3 + (long)_DAT_112780124);
      func_0x00010c0720c0();
      if (iVar3 != 0) {
        bVar2 = *(char *)(param_3 + (long)_DAT_11278012c) == *(char *)(param_1 + _DAT_11278012c);
        goto LAB_109040650;
      }
    }
  }
  bVar2 = false;
LAB_109040650:
  _objc_release(uVar1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 109040674; end: 109040693; -[SCImageProcessLensCommandV2 _didCompleteTaskWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040674(long param_1,undefined8 param_2,long *param_3)

{
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c132cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112780134),PTR_s_reportError__11262a558);
    return;
  }
  return;
}



/* Entry: 109040694; end: 10904080b; -[SCImageProcessLensCommandV2 _presentationTimeWithValue:offset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040694(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_70;
  byte bStack_64;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lStack_58 = 0;
    lStack_50 = 0;
    lStack_48 = 0;
  }
  else {
    func_0x00010bdc1140(&lStack_58,param_4);
  }
  lVar4 = (long)_DAT_112780128;
  if (*(char *)(param_2 + lVar4) == '\x01') {
    lVar5 = (long)_DAT_11278012c;
    bVar2 = *(byte *)(param_2 + lVar5);
    plVar3 = (long *)PTR__kCMTimeInvalid_110348648;
    if ((param_5 != 0) && (bVar2 != 0)) {
      func_0x00010bdc1140(&uStack_70,param_5);
      if ((bStack_64 & 1) != 0) {
        lStack_88 = lStack_50;
        lStack_90 = lStack_58;
        lStack_80 = lStack_48;
        auStack_b0[0] = uStack_70;
        uStack_a0 = uStack_60;
        _CMTimeAdd(param_1,&lStack_90,auStack_b0);
        goto LAB_1090407e4;
      }
      if (*(char *)(param_2 + lVar4) != '\x01') goto LAB_1090407d4;
      bVar2 = *(byte *)(param_2 + lVar5) & 1;
      plVar3 = (long *)PTR__kCMTimeInvalid_110348648;
    }
    PTR__kCMTimeInvalid_110348648 = (undefined *)plVar3;
    if ((bVar2 == 0) &&
       (plVar1 = (long *)(param_2 + _DAT_112780130), (*(byte *)((long)plVar1 + 0xc) & 1) != 0)) {
      if (lStack_58 != 0) {
        lVar4 = *plVar1;
        param_1[1] = plVar1[1];
        *param_1 = lVar4;
        param_1[2] = plVar1[2];
        *plVar1 = (long)((double)*plVar1 + 20.0);
        goto LAB_1090407e4;
      }
      lVar4 = *plVar3;
      plVar1[1] = plVar3[1];
      *plVar1 = lVar4;
      plVar1[2] = plVar3[2];
    }
  }
LAB_1090407d4:
  param_1[1] = lStack_50;
  *param_1 = lStack_58;
  param_1[2] = lStack_48;
LAB_1090407e4:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10904080c; end: 1090409b7; -[SCImageProcessLensCommandV2 _fallbackCommandIfNeededWithPixelBuffer:context:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10904080c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 *param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_6);
  _objc_retain(param_15);
  if (*(char *)(param_3 + _DAT_112780128) == '\x01') {
    puVar1 = &UNK_10f548fd8;
    func_0x000107c31820();
    if ((param_5 == 0) ||
       (_CVPixelBufferGetPixelFormatType(), ((uint)param_5 & 0xffffffef) != 0x34323066)) {
      ppuVar3 = &PTR_PTR_1126b26c8;
    }
    else {
      ppuVar3 = &PTR_PTR_1126bf440;
    }
    puVar2 = *ppuVar3;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c09c860();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uStack_a8 = param_14[1];
      uStack_b0 = *param_14;
      uStack_98 = param_14[3];
      uStack_a0 = param_14[2];
      uStack_88 = param_14[5];
      uStack_90 = param_14[4];
      puVar4 = puVar2;
      func_0x00010c142ba0(param_1,param_2,puVar2,param_4,param_6,param_7,param_8,param_9,param_11,
                          param_12,param_13,&uStack_b0,param_15,param_16);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    func_0x000107c31828(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_15);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1090409b8; end: 1090409c7; -[SCImageProcessLensCommandV2 sessionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090409b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780134);
}



/* Entry: 1090409c8; end: 1090409e7; -[SCImageProcessLensCommandV2 delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090409c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278013c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090409e8; end: 1090409fb; -[SCImageProcessLensCommandV2 setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090409e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278013c,param_3);
  return;
}



/* Entry: 1090409fc; end: 109040ac7; -[SCImageProcessLensCommandV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090409fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278013c);
  _objc_storeStrong(param_1 + _DAT_112780124,0);
  _objc_storeStrong(param_1 + _DAT_112780134,0);
  _objc_storeStrong(param_1 + _DAT_112780108,0);
  _objc_storeStrong(param_1 + _DAT_112780138,0);
  _objc_storeStrong(param_1 + _DAT_112780120,0);
  _objc_storeStrong(param_1 + _DAT_11278011c,0);
  _objc_storeStrong(param_1 + _DAT_112780118,0);
  _objc_storeStrong(param_1 + _DAT_112780114,0);
  _objc_storeStrong(param_1 + _DAT_112780110,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278010c,0);
  return;
}



/* Entry: 109040ac8; end: 109040b73; -[SCImageProcessLensStackCommandV2 initWithCommands:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109040ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112700000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCommand_isExportMode__1125dd910,uVar2,param_4);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112780140;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109040b74; end: 109040cc7; -[SCImageProcessLensStackCommandV2 lensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040b74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  lVar6 = *(long *)(param_1 + _DAT_112780140);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    puVar7 = puVar2;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c094660(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010c174c00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
      puVar7 = puVar2;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar6 + _DAT_112780140),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110ad5f38);
  return;
}



/* Entry: 109040cc8; end: 109040ce7; -[SCImageProcessLensStackCommandV2 isDynamicLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112780140),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110ad5f38);
  return;
}



/* Entry: 109040ce8; end: 109040d07; -[SCImageProcessLensStackCommandV2 isAnimatedLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109040ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112780140),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110ad5f58);
  return;
}



/* Entry: 109040d08; end: 109040e13; -[SCImageProcessLensStackCommandV2 isEffectLoaded] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001090410d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_109040d08(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 **ppuVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 **ppuVar16;
  undefined1 *puStack_548;
  undefined *puStack_540;
  long lStack_4b8;
  ulong uStack_418;
  undefined *puStack_410;
  long lStack_388;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + _DAT_112780140);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar9);
      }
      iVar1 = (int)*(undefined8 *)(lVar14 * 8);
      func_0x00010c071320();
      if (iVar1 == 0) {
        uVar11 = 0;
        goto LAB_109040dd4;
      }
      lVar14 = lVar14 + 1;
    } while (lVar13 != lVar14);
    lVar13 = lVar9;
    func_0x00010bf52a60();
  }
  uVar11 = 1;
LAB_109040dd4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(lVar9 + _DAT_112780140);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar9);
      }
      iVar1 = (int)*(undefined8 *)(lVar14 * 8);
      func_0x00010c071300();
      if (iVar1 == 0) {
        uVar11 = 0;
        goto LAB_109040ee0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar13 != lVar14);
    lVar13 = lVar9;
    func_0x00010bf52a60();
  }
  uVar11 = 1;
LAB_109040ee0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar11;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_330;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uVar10 = *(ulong *)(lVar9 + _DAT_112780140);
  _objc_retain(uVar10);
  puVar6 = auStack_2e8;
  uVar11 = uVar10;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    lVar13 = *plStack_320;
    do {
      uVar15 = 0;
      do {
        if (*plStack_320 != lVar13) {
          _objc_enumerationMutation(uVar10);
        }
        iVar1 = (int)*(undefined8 *)(lStack_328 + uVar15 * 8);
        func_0x00010c076b80();
        if (iVar1 == 0) {
          uVar11 = 0;
          goto LAB_109040fec;
        }
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
      puVar6 = auStack_2e8;
      uVar11 = uVar10;
      puVar4 = &uStack_330;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  uVar11 = 1;
LAB_109040fec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return uVar11;
  }
  ___stack_chk_fail();
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puStack_410 = PTR_PTR_112700000;
  puVar3 = &uStack_418;
  uStack_418 = uVar10;
  _objc_msgSendSuper2(puVar3,PTR_s_loadWithContext_error__112604c28,puVar4,puVar6);
  if ((int)puVar3 == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = *(long *)(uVar10 + (long)_DAT_112780140);
    _objc_retain(lVar9);
    lVar13 = lVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c09c860(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar13 != lVar7);
      lVar13 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    func_0x00010c076b80();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return uVar10;
  }
  ___stack_chk_fail();
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_540 = PTR_PTR_112700000;
  ppuVar12 = &puStack_548;
  puStack_548 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(ppuVar12,PTR_s_unloadWithError__11267dcf0);
  if ((int)ppuVar12 == 0) {
    uVar11 = 0;
  }
  else {
    ppuVar12 = *(undefined1 ***)((long)puVar4 + (long)_DAT_112780140);
    _objc_retain(ppuVar12);
    ppuVar5 = ppuVar12;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    if (ppuVar5 == (undefined1 **)0x0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      do {
        ppuVar16 = (undefined1 **)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(ppuVar12);
          }
          uVar2 = (uint)*(undefined8 *)((long)ppuVar16 * 8);
          func_0x00010c280b20();
          uVar11 = (ulong)((uint)uVar11 & uVar2);
          ppuVar16 = (undefined1 **)((long)ppuVar16 + 1);
        } while (ppuVar5 != ppuVar16);
        ppuVar5 = ppuVar12;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined1 **)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)((long)ppuVar12 + (long)_DAT_112780140);
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar11 != 0) {
    uVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar10);
      }
      func_0x00010bf3b260(*(undefined8 *)(uVar15 * 8));
      uVar15 = uVar15 + 1;
    } while (uVar11 != uVar15);
    uVar11 = uVar10;
    func_0x00010bf52a60();
  }
  _objc_release(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  return uVar10;
}



/* Entry: 109040e14; end: 109040f1f; -[SCImageProcessLensStackCommandV2 isEffectApplied] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001090410d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_109040e14(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 **ppuVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 **ppuVar16;
  undefined1 *puStack_438;
  undefined *puStack_430;
  long lStack_3a8;
  ulong uStack_308;
  undefined *puStack_300;
  long lStack_278;
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
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + _DAT_112780140);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar9);
      }
      iVar1 = (int)*(undefined8 *)(lVar14 * 8);
      func_0x00010c071300();
      if (iVar1 == 0) {
        uVar11 = 0;
        goto LAB_109040ee0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar13 != lVar14);
    lVar13 = lVar9;
    func_0x00010bf52a60();
  }
  uVar11 = 1;
LAB_109040ee0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar11;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uVar10 = *(ulong *)(lVar9 + _DAT_112780140);
  _objc_retain(uVar10);
  puVar6 = auStack_1d8;
  uVar11 = uVar10;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    lVar13 = *plStack_210;
    do {
      uVar15 = 0;
      do {
        if (*plStack_210 != lVar13) {
          _objc_enumerationMutation(uVar10);
        }
        iVar1 = (int)*(undefined8 *)(lStack_218 + uVar15 * 8);
        func_0x00010c076b80();
        if (iVar1 == 0) {
          uVar11 = 0;
          goto LAB_109040fec;
        }
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
      puVar6 = auStack_1d8;
      uVar11 = uVar10;
      puVar4 = &uStack_220;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  uVar11 = 1;
LAB_109040fec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return uVar11;
  }
  ___stack_chk_fail();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puStack_300 = PTR_PTR_112700000;
  puVar3 = &uStack_308;
  uStack_308 = uVar10;
  _objc_msgSendSuper2(puVar3,PTR_s_loadWithContext_error__112604c28,puVar4,puVar6);
  if ((int)puVar3 == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = *(long *)(uVar10 + (long)_DAT_112780140);
    _objc_retain(lVar9);
    lVar13 = lVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c09c860(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar13 != lVar7);
      lVar13 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    func_0x00010c076b80();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar10;
  }
  ___stack_chk_fail();
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_430 = PTR_PTR_112700000;
  ppuVar12 = &puStack_438;
  puStack_438 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(ppuVar12,PTR_s_unloadWithError__11267dcf0);
  if ((int)ppuVar12 == 0) {
    uVar11 = 0;
  }
  else {
    ppuVar12 = *(undefined1 ***)((long)puVar4 + (long)_DAT_112780140);
    _objc_retain(ppuVar12);
    ppuVar5 = ppuVar12;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    if (ppuVar5 == (undefined1 **)0x0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      do {
        ppuVar16 = (undefined1 **)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(ppuVar12);
          }
          uVar2 = (uint)*(undefined8 *)((long)ppuVar16 * 8);
          func_0x00010c280b20();
          uVar11 = (ulong)((uint)uVar11 & uVar2);
          ppuVar16 = (undefined1 **)((long)ppuVar16 + 1);
        } while (ppuVar5 != ppuVar16);
        ppuVar5 = ppuVar12;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined1 **)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)((long)ppuVar12 + (long)_DAT_112780140);
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar11 != 0) {
    uVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar10);
      }
      func_0x00010bf3b260(*(undefined8 *)(uVar15 * 8));
      uVar15 = uVar15 + 1;
    } while (uVar11 != uVar15);
    uVar11 = uVar10;
    func_0x00010bf52a60();
  }
  _objc_release(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  return uVar10;
}



/* Entry: 109040f20; end: 10904102b; -[SCImageProcessLensStackCommandV2 isLoaded] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001090410d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_109040f20(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 **ppuVar14;
  long lVar15;
  undefined1 *puStack_328;
  undefined *puStack_320;
  long lStack_298;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  long lStack_168;
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar8 = *(ulong *)(param_1 + _DAT_112780140);
  _objc_retain(uVar8);
  puVar6 = auStack_c8;
  uVar9 = uVar8;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar11 = *plStack_100;
    do {
      uVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(uVar8);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + uVar12 * 8);
        func_0x00010c076b80();
        if (iVar1 == 0) {
          uVar9 = 0;
          goto LAB_109040fec;
        }
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
      puVar6 = auStack_c8;
      uVar9 = uVar8;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (uVar9 != 0);
  }
  uVar9 = 1;
LAB_109040fec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar9;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puStack_1f0 = PTR_PTR_112700000;
  puVar3 = &uStack_1f8;
  uStack_1f8 = uVar8;
  _objc_msgSendSuper2(puVar3,PTR_s_loadWithContext_error__112604c28,puVar4,puVar6);
  if ((int)puVar3 == 0) {
    uVar8 = 0;
  }
  else {
    lVar13 = *(long *)(uVar8 + (long)_DAT_112780140);
    _objc_retain(lVar13);
    lVar11 = lVar13;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c09c860(*(undefined8 *)(lVar15 * 8));
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    func_0x00010c076b80();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar8;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_320 = PTR_PTR_112700000;
  ppuVar10 = &puStack_328;
  puStack_328 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(ppuVar10,PTR_s_unloadWithError__11267dcf0);
  if ((int)ppuVar10 == 0) {
    uVar9 = 0;
  }
  else {
    ppuVar10 = *(undefined1 ***)((long)puVar4 + (long)_DAT_112780140);
    _objc_retain(ppuVar10);
    ppuVar5 = ppuVar10;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    if (ppuVar5 == (undefined1 **)0x0) {
      uVar9 = 1;
    }
    else {
      uVar9 = 1;
      do {
        ppuVar14 = (undefined1 **)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(ppuVar10);
          }
          uVar2 = (uint)*(undefined8 *)((long)ppuVar14 * 8);
          func_0x00010c280b20();
          uVar9 = (ulong)((uint)uVar9 & uVar2);
          ppuVar14 = (undefined1 **)((long)ppuVar14 + 1);
        } while (ppuVar5 != ppuVar14);
        ppuVar5 = ppuVar10;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined1 **)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return uVar9;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(ulong *)((long)ppuVar10 + (long)_DAT_112780140);
  _objc_retain(uVar8);
  uVar9 = uVar8;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (uVar9 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(uVar8);
      }
      func_0x00010bf3b260(*(undefined8 *)(uVar12 * 8));
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
    uVar9 = uVar8;
    func_0x00010bf52a60();
  }
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  return uVar8;
}



/* Entry: 10904102c; end: 10904118f; -[SCImageProcessLensStackCommandV2 loadWithContext:error:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001090410d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_10904102c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lStack_218;
  undefined *puStack_210;
  long lStack_188;
  ulong uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_e0 = PTR_PTR_112700000;
  puVar2 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)puVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + (long)_DAT_112780140);
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c09c860(*(undefined8 *)(lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    func_0x00010c076b80();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_210 = PTR_PTR_112700000;
  plVar7 = &lStack_218;
  lStack_218 = param_3;
  _objc_msgSendSuper2(plVar7,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar7 == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = *(long **)(param_3 + _DAT_112780140);
    _objc_retain(plVar7);
    plVar4 = plVar7;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (plVar4 == (long *)0x0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 1;
      do {
        plVar11 = (long *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(plVar7);
          }
          uVar1 = (uint)*(undefined8 *)((long)plVar11 * 8);
          func_0x00010c280b20();
          uVar8 = (ulong)((uint)uVar8 & uVar1);
          plVar11 = (long *)((long)plVar11 + 1);
        } while (plVar4 != plVar11);
        plVar4 = plVar7;
        func_0x00010bf52a60();
      } while (plVar4 != (long *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ulong *)((long)plVar7 + (long)_DAT_112780140);
  _objc_retain(uVar6);
  uVar8 = uVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar6);
      }
      func_0x00010bf3b260(*(undefined8 *)(uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
    uVar8 = uVar6;
    func_0x00010bf52a60();
  }
  _objc_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  return uVar6;
}



/* Entry: 109041190; end: 1090412d7; -[SCImageProcessLensStackCommandV2 unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_109041190(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_112700000;
  plVar6 = &lStack_e8;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(plVar6,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar6 == 0) {
    uVar7 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + _DAT_112780140);
    _objc_retain(plVar6);
    plVar3 = plVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (plVar3 == (long *)0x0) {
      uVar7 = 1;
    }
    else {
      uVar7 = 1;
      do {
        plVar9 = (long *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(plVar6);
          }
          uVar2 = (uint)*(undefined8 *)((long)plVar9 * 8);
          func_0x00010c280b20();
          uVar7 = (ulong)((uint)uVar7 & uVar2);
          plVar9 = (long *)((long)plVar9 + 1);
        } while (plVar3 != plVar9);
        plVar3 = plVar6;
        func_0x00010bf52a60();
      } while (plVar3 != (long *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ulong *)((long)plVar6 + (long)_DAT_112780140);
  _objc_retain(uVar5);
  uVar7 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar7 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      func_0x00010bf3b260(*(undefined8 *)(uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    uVar7 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  return uVar5;
}



/* Entry: 1090412d8; end: 1090413cf; -[SCImageProcessLensStackCommandV2 clearEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1090412d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lVar2 = *(long *)(param_1 + _DAT_112780140);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf3b260(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  return lVar2;
}



/* Entry: 1090413d0; end: 1090413f3; -[SCImageProcessLensStackCommandV2 copyWithZone:] */

undefined8 FUN_1090413d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090413f4; end: 109041483; -[SCImageProcessLensStackCommandV2 isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090413f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d9660;
  _objc_opt_class(PTR_PTR_1126d9660);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112780140);
    func_0x00010c071b60(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 109041484; end: 109041493; -[SCImageProcessLensStackCommandV2 commands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109041484(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780140);
}



/* Entry: 109041494; end: 1090414a7; -[SCImageProcessLensStackCommandV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109041494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780140,0);
  return;
}



/* Entry: 1090414a8; end: 10904152b; -[SCLensCommandSessionTracker init] */

undefined1 * FUN_1090414a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR_PTR_1126dd0a8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10904152c; end: 1090415b7; -[SCLensCommandSessionTracker startSessionWithIsTranscoding:lensId:isVideo:] */

void FUN_10904152c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined1 param_5
                  )

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  *(char *)(param_1 + 0x18) = (char)param_3;
  *(undefined1 *)(param_1 + 0x28) = 0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x19) = param_5;
  if (param_3 != 0) {
    func_0x00010be90540(param_1);
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1090415b8; end: 109041627; -[SCLensCommandSessionTracker reportError:] */

void FUN_1090415b8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
      func_0x00010be8f880(param_1);
    }
    _os_unfair_lock_unlock(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109041628; end: 109041657; -[SCLensCommandSessionTracker _reportTrascodingAttempt] */

/* WARNING: Removing unreachable block (ram,0x000109042cc0) */

void FUN_109041628(long param_1)

{
  undefined **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined8 in_x4;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de7678;
  if (*(char *)(param_1 + 0x19) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  pcVar4 = *(char **)(param_1 + 0x20);
  pcVar6 = (char *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  ppuVar5 = ppuVar1;
  _objc_retain(pcVar4);
  _objc_retain(ppuVar1);
  if (lVar7 != 0) {
    plVar8 = *(long **)(lVar7 + 8);
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
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar2);
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar1);
      pcVar2 = (char *)ppuVar1;
      func_0x00010bdc3520(ppuVar1);
    }
    _objc_release(ppuVar1);
    func_0x000107c278b8(auStack_60,pcVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&puStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    ppuVar5 = &puStack_98;
    pcVar6 = (char *)0x1;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    ppuStack_80 = &puStack_98;
    func_0x000107c278ac(&ppuStack_80);
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(ppuVar1);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(ppuVar1);
  _objc_release(pcVar4);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar2);
  _objc_retain(ppuVar5);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_140,pcVar4);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar5);
      pcVar4 = (char *)ppuVar5;
      func_0x00010bdc3520(ppuVar5);
    }
    _objc_release(ppuVar5);
    func_0x000107c278b8(auStack_128,pcVar4);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar4 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_110,pcVar4);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x000107c27984(&uStack_160,auStack_140,&lStack_f8,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110ad60b8,&uStack_160,in_x4);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x000107c278ac(&puStack_148);
    lVar7 = 0;
    do {
      if ((&cStack_f9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = &uStack_160;
    } while (lVar7 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(ppuVar5);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_140);
    _objc_release(pcVar6);
    _objc_release(ppuVar5);
    _objc_release(pcVar2);
    __Unwind_Resume();
    _os_unfair_lock_lock(pcVar4 + 8);
    pcVar4[0x30] = '\0';
    pcVar4[0x31] = '\0';
    pcVar4[0x32] = '\0';
    pcVar4[0x33] = '\0';
    pcVar4[0x34] = '\0';
    pcVar4[0x35] = '\0';
    pcVar4[0x36] = '\0';
    pcVar4[0x37] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(pcVar4 + 8);
    return;
  }
  return;
}



/* Entry: 109041658; end: 109041697; -[SCLensCommandSessionTracker _reportFailedTrascoding] */

/* WARNING: Removing unreachable block (ram,0x000109042b48) */
/* WARNING: Removing unreachable block (ram,0x000109042cc0) */

void FUN_109041658(long param_1)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de7678;
  if (*(char *)(param_1 + 0x19) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f1c9b8;
  pcVar4 = *(char **)(param_1 + 0x20);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar4);
  _objc_retain(ppuVar1);
  _objc_retain(&PTR____CFConstantStringClassReference_110f1c9b8);
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 8);
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
    func_0x000107c278b8(auStack_a0,pcVar2);
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar1);
      pcVar2 = (char *)ppuVar1;
      func_0x00010bdc3520(ppuVar1);
    }
    _objc_release(ppuVar1);
    func_0x000107c278b8(auStack_88,pcVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110f1c9b8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110f1c9b8);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110f1c9b8);
    _objc_release(&PTR____CFConstantStringClassReference_110f1c9b8);
    func_0x000107c278b8(auStack_70,ppuVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110ad60b8,&uStack_c0,1);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110f1c9b8);
  _objc_release(ppuVar1);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110f1c9b8);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(&PTR____CFConstantStringClassReference_110f1c9b8);
    _objc_release(ppuVar1);
    _objc_release(pcVar4);
    __Unwind_Resume();
    _os_unfair_lock_lock(pcVar2 + 8);
    pcVar2[0x30] = '\0';
    pcVar2[0x31] = '\0';
    pcVar2[0x32] = '\0';
    pcVar2[0x33] = '\0';
    pcVar2[0x34] = '\0';
    pcVar2[0x35] = '\0';
    pcVar2[0x36] = '\0';
    pcVar2[0x37] = '\0';
    pcVar2[0x28] = '\0';
    pcVar2[0x29] = '\0';
    pcVar2[0x2a] = '\0';
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\0';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = '\0';
    pcVar2[0x28] = '\0';
    pcVar2[0x29] = '\0';
    pcVar2[0x2a] = '\0';
    pcVar2[0x2b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[0x18] = '\0';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(pcVar2 + 8);
    return;
  }
  return;
}



/* Entry: 109041698; end: 1090416c7; -[SCLensCommandSessionTracker .cxx_destruct] */

void FUN_109041698(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1090416c8; end: 1090416d3;  */

void FUN_1090416c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d10,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1090416d4; end: 1090417df; -[SCLookseryAudioProcessingWrapper init] */

undefined1 * FUN_1090416d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 8;
    __Znwm();
    func_0x00010ad07d68();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090417e0; end: 109041843; -[SCLookseryAudioProcessingWrapper dealloc] */

void FUN_1090417e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      func_0x00010ad09c98(plVar2);
    }
    __ZdlPv(plVar2);
  }
  puStack_28 = PTR_PTR_112700010;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109041844; end: 10904192f; -[SCLookseryAudioProcessingWrapper setupWithFormat:] */

void FUN_109041844(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(long *)(param_1 + 8) != 0) {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_40 = param_3[4];
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_98,auStack_68);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    func_0x00010c0f7fc0(uVar1);
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010bedcba0(param_1);
    }
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 109041930; end: 10904198b;  */

void FUN_109041930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010ad073d4(**(undefined8 **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x44),
                        (int)*(double *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904198c; end: 1090419ff; -[SCLookseryAudioProcessingWrapper setParametersWithAudioFilterStyleId:] */

void FUN_10904198c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0 || *(long *)(param_1 + 0x10) != 0) &&
     (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    func_0x00010bedcba0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109041a00; end: 109041c93; -[SCLookseryAudioProcessingWrapper _updateParametersWithCurrentAudioFilterStyleId] */

void FUN_109041a00(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  float fVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined1 uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f1c9d8,param_2,
                      *(undefined8 *)(param_1 + 0x10));
  if ((uVar2 & 1) != 0) {
    puVar6 = (undefined *)0x0;
    fVar8 = -6.0;
    goto LAB_109041b00;
  }
  uVar2 = 0;
  func_0x00010c0720c0();
  if ((uVar2 & 1) != 0) {
    puVar6 = (undefined *)0x0;
    fVar8 = 12.0;
    goto LAB_109041b00;
  }
  iVar1 = 0x10f1ca18;
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    iVar1 = 0x10f1ca38;
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0f5960();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109041ae8;
    }
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
LAB_109041ae8:
    _objc_release(puVar3);
  }
  fVar8 = 0.0;
LAB_109041b00:
  if (*(long *)(param_1 + 8) != 0) {
    if (fVar8 == 0.0 && puVar6 == (undefined *)0x0) {
      _objc_initWeak(auStack_48,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_109041c94;
      puStack_58 = &UNK_110876b10;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0f7fc0(uVar7);
      puVar5 = auStack_50;
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_109041ce8;
      puStack_90 = &UNK_110ad5fa8;
      _objc_copyWeak(auStack_80,auStack_48);
      _objc_retain(puVar6);
      uStack_74 = 0;
      ppuVar4 = &puStack_a8;
      puStack_88 = puVar6;
      fStack_78 = fVar8;
      _objc_retainBlock(ppuVar4);
      if (puVar6 == (undefined *)0x0) {
        func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18));
      }
      else {
        func_0x00010be4e4a0(param_1);
      }
      _objc_release(ppuVar4);
      _objc_release(puStack_88);
      puVar5 = auStack_80;
    }
    _objc_destroyWeak(puVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 109041c94; end: 109041ce7;  */

void FUN_109041c94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010ad0775c(0,**(undefined8 **)(param_1 + 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109041ce8; end: 109041e3f;  */

void FUN_109041ce8(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar2 = (undefined4 *)**(undefined8 **)(lVar1 + 8);
      func_0x00010ad073d4(puVar2,*puVar2,puVar2[1]);
    }
    func_0x00010ad0775c(0x3f800000,**(undefined8 **)(lVar1 + 8),1);
    if (*(char *)(param_1 + 0x34) == '\x01') {
      func_0x00010ad0775c(0x3f800000,**(undefined8 **)(lVar1 + 8),0x20001);
      func_0x00010ad0775c(0x40800000,**(undefined8 **)(lVar1 + 8),0x20004);
    }
    if (*(float *)(param_1 + 0x30) != 0.0) {
      func_0x00010ad0775c(0x3f800000,**(undefined8 **)(lVar1 + 8),0xe0001);
      func_0x00010ad0775c(0xc25c0000,**(undefined8 **)(lVar1 + 8),0xe0007);
      func_0x00010ad0775c(0x44800000,**(undefined8 **)(lVar1 + 8),0xe0002);
      func_0x00010ad0775c(0x3f400000,**(undefined8 **)(lVar1 + 8),0xe0003);
      func_0x00010ad0775c(0x40000000,**(undefined8 **)(lVar1 + 8),0xe0004);
      func_0x00010bea3580(lVar1);
      func_0x00010ad0775c(*(undefined4 *)(param_1 + 0x30),**(undefined8 **)(lVar1 + 8),0xe0006);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109041e40; end: 109041edf; -[SCLookseryAudioProcessingWrapper _setDenoiseParameters] */

/* WARNING: Possible PIC construction at 0x000109041e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109041e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109041ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109041e9c) */
/* WARNING: Removing unreachable block (ram,0x000109041e6c) */
/* WARNING: Removing unreachable block (ram,0x000109041ec4) */

undefined8 FUN_109041e40(long param_1)

{
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x00010ad0d164(0x3f800000,**(long **)(param_1 + 8) + 0xa3ef0,0xe0001,
                      *(undefined4 *)(**(long **)(param_1 + 8) + 4));
  return 0;
}



/* Entry: 109041ee0; end: 109042007; -[SCLookseryAudioProcessingWrapper _loadPresetFromPath:completion:] */

void FUN_109041ee0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_109042008;
    puStack_58 = &UNK_110ad6008;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109042008; end: 1090421ab;  */

void FUN_109042008(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_50 [8];
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25ce00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _fopen();
    _objc_release(uVar2);
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_48 = &uStack_40;
    func_0x00010ad09fd0(&puStack_48,uVar3);
    _fclose(uVar3);
    _objc_initWeak(auStack_50,lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_70,auStack_50);
    FUN_109042428(auStack_68,&puStack_48);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar3);
    FUN_1090425c8(uStack_60);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_50);
    FUN_1090425c8(uStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1090421ac; end: 10904221b;  */

void FUN_1090421ac(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)**(undefined8 **)(lVar1 + 8);
    func_0x00010ad073d4(puVar2,*puVar2,puVar2[1]);
    func_0x00010ad0a3dc(param_1 + 0x30,*(undefined8 *)(lVar1 + 8));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904221c; end: 109042283;  */

void FUN_10904221c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  FUN_109042428(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 109042284; end: 1090422b3;  */

void FUN_109042284(long param_1)

{
  FUN_1090425c8(*(undefined8 *)(param_1 + 0x38));
  _objc_destroyWeak(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1090422b4; end: 10904236f; -[SCLookseryAudioProcessingWrapper processBufferList:] */

undefined4 FUN_1090422b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    puStack_50 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_109042370;
    puStack_60 = &UNK_110ad6038;
    lStack_58 = param_1;
    uStack_48 = param_3;
    puStack_38 = puStack_50;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_78);
    uVar1 = *(undefined4 *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  return uVar1;
}



/* Entry: 109042370; end: 1090423f7;  */

void FUN_109042370(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = *(uint **)(param_1 + 0x30);
  if (*puVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar2 = *(undefined8 *)((long)puVar3 + lVar5 + 0x10);
      uVar1 = *(uint *)((long)puVar3 + lVar5 + 0xc);
      func_0x00010ad07008(**(undefined8 **)(*(long *)(param_1 + 0x20) + 8),uVar2,0,uVar2,uVar1 >> 2)
      ;
      puVar3 = *(uint **)(param_1 + 0x30);
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + (uVar1 >> 2);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < *puVar3);
  }
  return;
}



/* Entry: 1090423f8; end: 109042427; -[SCLookseryAudioProcessingWrapper .cxx_destruct] */

void FUN_1090423f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109042428; end: 1090425c7;  */

long * FUN_109042428(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  
  plVar9 = param_1 + 1;
  *plVar9 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar9;
  plVar10 = (long *)*param_2;
  do {
    if (plVar10 == param_2 + 1) {
      return param_1;
    }
    uVar12 = *(undefined8 *)((long)plVar10 + 0x1c);
    plVar11 = (long *)*param_1;
    plVar1 = (long *)param_1[1];
    plVar8 = plVar9;
    plVar14 = plVar9;
    plVar13 = plVar9;
    if (plVar9 == plVar11) {
LAB_109042508:
      if (plVar1 != (long *)0x0) {
        plVar14 = plVar8 + 1;
        plVar13 = plVar8;
      }
      if (*plVar14 == 0) goto LAB_109042520;
    }
    else {
      iVar2 = *(int *)((long)plVar10 + 0x1c);
      plVar7 = plVar9;
      plVar3 = plVar1;
      if (plVar1 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar4 = plVar7 == (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar4);
        if (*(int *)((long)plVar8 + 0x1c) < iVar2) goto LAB_109042508;
      }
      else {
        do {
          plVar8 = plVar3;
          plVar3 = (long *)plVar8[1];
        } while ((long *)plVar8[1] != (long *)0x0);
        if (*(int *)((long)plVar8 + 0x1c) < iVar2) goto LAB_109042508;
        do {
          while (plVar13 = plVar1, *(int *)((long)plVar13 + 0x1c) <= iVar2) {
            if (iVar2 <= *(int *)((long)plVar13 + 0x1c)) goto LAB_10904255c;
            plVar1 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar14 = plVar13 + 1;
              goto LAB_109042520;
            }
          }
          plVar1 = (long *)*plVar13;
          plVar14 = plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
LAB_109042520:
      puVar5 = (undefined8 *)0x28;
      __Znwm();
      *(undefined8 *)((long)puVar5 + 0x1c) = uVar12;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = plVar13;
      *plVar14 = (long)puVar5;
      lVar6 = *plVar11;
      if (lVar6 != 0) {
        *param_1 = lVar6;
      }
      func_0x000107c27be4(param_1[1]);
      param_1[2] = param_1[2] + 1;
    }
LAB_10904255c:
    plVar14 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar4 = plVar11 != (long *)*plVar10;
        plVar11 = plVar10;
      } while (bVar4);
    }
    else {
      do {
        plVar10 = plVar14;
        plVar14 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 1090425c8; end: 1090425ff;  */

void FUN_1090425c8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1090425c8(*param_1);
    FUN_1090425c8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109042600; end: 109042663; -[SCLensEffectContentPathCacheImpl init] */

undefined1 * FUN_109042600(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700018;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109042664; end: 1090426f3; -[SCLensEffectContentPathCacheImpl cacheContentPath:forEffectId:] */

void FUN_109042664(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090426f4; end: 109042787; -[SCLensEffectContentPathCacheImpl cachedContentPathForEffectId:] */

void FUN_1090426f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109042788; end: 109042793; -[SCLensEffectContentPathCacheImpl .cxx_destruct] */

void FUN_109042788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109042794; end: 109042807; -[SCGrapheneLensTranscodingMetric2 init] */

undefined1 * FUN_109042794(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109042808; end: 109042a37;  */

/* WARNING: Removing unreachable block (ram,0x000109042cc0) */

void FUN_109042808(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
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
    func_0x000107c278b8(auStack_60,pcVar1);
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
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar3 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcStack_80 = acStack_98;
    func_0x000107c278ac(&pcStack_80);
    lVar5 = 0;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    _objc_retain(pcVar4);
    if (pcVar2 != (char *)0x0) {
      plVar6 = *(long **)(pcVar2 + 8);
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
      func_0x000107c278b8(auStack_140,pcVar2);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_128,pcVar2);
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
      func_0x000107c278b8(auStack_110,pcVar2);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110ad60b8,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      lVar5 = 0;
      do {
        if ((&cStack_f9)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar5 != -0x48);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar4);
      _objc_release(pcVar3);
      _objc_release(pcVar1);
      __Unwind_Resume();
      _os_unfair_lock_lock(pcVar2 + 8);
      pcVar2[0x30] = '\0';
      pcVar2[0x31] = '\0';
      pcVar2[0x32] = '\0';
      pcVar2[0x33] = '\0';
      pcVar2[0x34] = '\0';
      pcVar2[0x35] = '\0';
      pcVar2[0x36] = '\0';
      pcVar2[0x37] = '\0';
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = '\0';
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x20] = '\0';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      pcVar2[0x18] = '\0';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      pcVar2[0x10] = '\0';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(pcVar2 + 8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 109042a38; end: 109042cf7;  */

/* WARNING: Removing unreachable block (ram,0x000109042cc0) */

void FUN_109042a38(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
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
    func_0x000107c278b8(auStack_a0,pcVar1);
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
    func_0x000107c278b8(auStack_88,pcVar1);
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
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110ad60b8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar2 = 0;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    _os_unfair_lock_lock(pcVar1 + 8);
    pcVar1[0x30] = '\0';
    pcVar1[0x31] = '\0';
    pcVar1[0x32] = '\0';
    pcVar1[0x33] = '\0';
    pcVar1[0x34] = '\0';
    pcVar1[0x35] = '\0';
    pcVar1[0x36] = '\0';
    pcVar1[0x37] = '\0';
    pcVar1[0x28] = '\0';
    pcVar1[0x29] = '\0';
    pcVar1[0x2a] = '\0';
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\0';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = '\0';
    pcVar1[0x28] = '\0';
    pcVar1[0x29] = '\0';
    pcVar1[0x2a] = '\0';
    pcVar1[0x2b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x20] = '\0';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1[0x10] = '\0';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(pcVar1 + 8);
    return;
  }
  return;
}



/* Entry: 109042cf8; end: 109042d2f; -[SCRuntimeStatistics reset] */

void FUN_109042cf8(long param_1)

{
  _os_unfair_lock_lock(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 109042d30; end: 109042d83; -[SCRuntimeStatistics mean] */

double FUN_109042d30(long param_1)

{
  double dVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x10) / (double)*(int *)(param_1 + 0xc);
  }
  _os_unfair_lock_unlock(param_1 + 8);
  return dVar1;
}



/* Entry: 109042d84; end: 109042ddb; -[SCRuntimeStatistics variance] */

double FUN_109042d84(long param_1)

{
  double dVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  dVar1 = 0.0;
  if (1 < *(int *)(param_1 + 0xc)) {
    dVar1 = *(double *)(param_1 + 0x20) / (double)(*(int *)(param_1 + 0xc) - 1);
  }
  _os_unfair_lock_unlock(param_1 + 8);
  return dVar1;
}



/* Entry: 109042ddc; end: 109042df3; -[SCRuntimeStatistics standardDeviation] */

double FUN_109042ddc(double param_1)

{
  func_0x00010c297420();
  return SQRT(param_1);
}



/* Entry: 109042df4; end: 109042e6b;  */

bool FUN_109042df4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bfe8980(param_4);
  dVar2 = 0.5625;
  func_0x00010bfe8980(param_4);
  if (param_1 * 0.5625 == dVar2) {
    func_0x00010bfe8980(param_4);
    bVar1 = dVar2 == 720.0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 109042e6c; end: 109042f9b;  */

long FUN_109042e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  _objc_opt_class();
  func_0x00010c263360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = param_1;
        func_0x00010c14d240(param_1,param_2,uVar4);
        if ((int)uVar2 != 0) {
          func_0x00010c221720(param_3,param_2,uVar4);
          goto LAB_109042f58;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
LAB_109042f58:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010c14c900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      _objc_opt_class(lVar1);
      func_0x00010c080420();
    }
    _objc_release(lVar1);
    return lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 109042f9c; end: 109042fef;  */

long FUN_109042f9c(long param_1)

{
  long lVar1;
  
  func_0x00010c14c900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c080420();
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 109042ff0; end: 1090430fb;  */

void FUN_109042ff0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___ARFaceTrackingConfiguration_1126dd0b0;
    _objc_alloc_init(PTR__OBJC_CLASS___ARFaceTrackingConfiguration_1126dd0b0);
    func_0x00010c1c3c40();
  }
  else {
    puVar3 = PTR_PTR_1126aff08;
    func_0x00010c06cea0();
    if ((int)puVar3 == 0) {
      param_1 = 0;
      goto LAB_1090430e4;
    }
    puVar3 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
    _objc_alloc_init(PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018);
    func_0x00010c1dcf20();
    func_0x00010c1bd9c0(puVar3,param_2,0);
    if ((param_4 >> 0x20 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
      func_0x00010c2637a0(PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018,param_2,8);
      if ((int)puVar2 != 0) {
        puVar2 = puVar3;
        func_0x00010bfb6fe0(puVar3);
        func_0x00010c19f4a0(puVar3,param_2,(ulong)puVar2 | 8);
      }
    }
    if (((uint)param_4 >> 0x10 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
      func_0x00010c263bc0(PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018,param_2,1);
      if ((int)puVar2 != 0) {
        uVar1 = 3;
        if ((param_4 & 0x1000000) == 0) {
          uVar1 = 1;
        }
        func_0x00010c1f6720(puVar3,param_2,uVar1);
      }
    }
  }
  func_0x00010c14dbc0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_1090430e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090430fc; end: 1090431a7; -[SCCameraCapturerDebugViewTableViewCellModel initWithType:content:title:] */

undefined1 *
FUN_1090430fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1090431a8; end: 1090431d7; -[SCCameraCapturerDebugViewTableViewCellModel updateContent:] */

void FUN_1090431a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090431d8; end: 1090431df; -[SCCameraCapturerDebugViewTableViewCellModel logType] */

undefined8 FUN_1090431d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090431e0; end: 1090431e7; -[SCCameraCapturerDebugViewTableViewCellModel title] */

undefined8 FUN_1090431e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090431e8; end: 1090431ef; -[SCCameraCapturerDebugViewTableViewCellModel content] */

undefined8 FUN_1090431e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090431f0; end: 10904321f; -[SCCameraCapturerDebugViewTableViewCellModel .cxx_destruct] */

void FUN_1090431f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109043220; end: 10904326f; -[SCCameraCapturerDebugViewTableViewCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_109043220(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0d80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109043270; end: 10904340f; -[SCCameraCapturerDebugViewTableViewCell configWithCellModel:] */

/* WARNING: Possible PIC construction at 0x0001090433e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090433ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109043270(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c2711a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127801b4;
  func_0x00010c212f20(*(undefined8 *)(param_4 + lVar6));
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010bf4bc60(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar5 = (long)_DAT_1127801b8;
  func_0x00010c212f20(*(undefined8 *)(param_4 + lVar5));
  _objc_release(uVar1);
  lVar4 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar4);
  dVar7 = 50.0;
  func_0x00010c23d5a0(param_3 * 0.5,*(undefined8 *)(param_4 + lVar6));
  dVar8 = 50.0;
  func_0x00010c23d5a0(param_3 * 0.5,*(undefined8 *)(param_4 + lVar5));
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  uVar2 = *(undefined8 *)(param_4 + lVar6);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf49420(dVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127801bc;
  uVar3 = *(undefined8 *)(param_4 + lVar4);
  *(undefined8 *)(param_4 + lVar4) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_4 + lVar5);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf49420(dVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + _DAT_1127801c0);
  *(undefined8 *)(param_4 + _DAT_1127801c0) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + lVar4),PTR_s_setActive__112636340,1);
  return;
}



/* Entry: 109043410; end: 109043afb; -[SCCameraCapturerDebugViewTableViewCell _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109043410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
  lVar14 = (long)_DAT_1127801b4;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar14),param_2,4);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar14),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar14),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_alloc();
  func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
  lVar15 = (long)_DAT_1127801b8;
  uVar16 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar16);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar15),param_2,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar15),param_2,0);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar19 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_b0 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf49500(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_a8 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_a0 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar18);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(uVar10);
  _objc_release(uVar17);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar19 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_d0 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf49500(uVar4,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  uStack_c0 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar13);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar14);
  _objc_release(lVar11);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar19);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 109043afc; end: 109043b0f; +[SCCameraCapturerDebugViewTableViewCell identifier] */

void FUN_109043afc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 109043b10; end: 109043b6f; -[SCCameraCapturerDebugViewTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109043b10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127801c0,0);
  _objc_storeStrong(param_1 + _DAT_1127801bc,0);
  _objc_storeStrong(param_1 + _DAT_1127801b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127801b4,0);
  return;
}



/* Entry: 109043b70; end: 109043b77; +[SCCameraCapturerDebugLoggerView shared] */

undefined8 FUN_109043b70(void)

{
  return 0;
}



/* Entry: 109043b78; end: 109043bc7; -[SCCameraCapturerDebugLoggerView init] */

undefined1 * FUN_109043b78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700040;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be39360(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109043bc8; end: 109043bcb; -[SCCameraCapturerDebugLoggerView show] */

void FUN_109043bc8(void)

{
  return;
}



/* Entry: 109043bcc; end: 109043bd3; -[SCCameraCapturerDebugLoggerView hide] */

void FUN_109043bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 109043bd4; end: 109043c1f; -[SCCameraCapturerDebugLoggerView updateLogWithType:sizeInfo:] */

void FUN_109043bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be18b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedaf80(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109043c20; end: 109043c77; +[SCCameraCapturerDebugLoggerView updateLogWithType:sizeInfo:] */

void FUN_109043c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd0b8;
  func_0x00010c22b6a0(PTR_PTR_1126dd0b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109043c78; end: 109043d97; -[SCCameraCapturerDebugLoggerView _init] */

void FUN_109043c78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bec8fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_109043d98;
  puStack_50 = &UNK_110a086f8;
  lStack_48 = param_1;
  puStack_40 = puVar2;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010bf97e80(lVar3,param_2,&puStack_68);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar5);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar4;
  _objc_release(uVar5);
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 109043d98; end: 109043e87;  */

void FUN_109043d98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dd0c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c067fc0(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(param_2);
  func_0x00010becc500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0559a0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109043e88; end: 109043f17; -[SCCameraCapturerDebugLoggerView _supportedLogTypes] */

void FUN_109043e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  iVar3 = 0;
  do {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,iVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 7);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109043f18; end: 109043f3b; -[SCCameraCapturerDebugLoggerView _titleFromLogType:] */

undefined ** FUN_109043f18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return (undefined **)(&PTR_PTR_110ad6158)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 109043f3c; end: 109044003; -[SCCameraCapturerDebugLoggerView _toggleSize] */

void FUN_109043f3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x4073600000000000;
  uVar2 = 0x4034000000000000;
  uVar3 = uVar1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar3 = 0x4034000000000000;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 8));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109044004;
  puStack_60 = &UNK_110870f70;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x109044018;
  puStack_88 = &UNK_110841f20;
  lStack_80 = param_1;
  lStack_58 = param_1;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar3;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78,
                      &puStack_a0);
  return;
}



/* Entry: 109044004; end: 10904402b;  */

void FUN_109044004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10904402c; end: 1090440e7; -[SCCameraCapturerDebugLoggerView _formatSizeToString:] */

void FUN_10904402c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((double)(long)(param_1 * 1000.0) / 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((double)(long)(param_2 * 1000.0) / 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_4,&PTR____CFConstantStringClassReference_110f1cb98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090440e8; end: 1090440f7; -[SCCameraCapturerDebugLoggerView _indexPathWithIndex:] */

void FUN_1090440e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForRow_inSection__1125d8de0,
             param_3,0);
  return;
}



/* Entry: 1090440f8; end: 1090440fb; -[SCCameraCapturerDebugLoggerView _updateLogWithLogType:content:] */

void FUN_1090440f8(void)

{
  return;
}



/* Entry: 1090440fc; end: 1090441f7; -[SCCameraCapturerDebugLoggerView tableView:cellForRowAtIndexPath:] */

void FUN_1090440fc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126dd0c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfe5ec0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dd0c0;
  _objc_opt_class(PTR_PTR_1126dd0c0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c14da60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46420(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


