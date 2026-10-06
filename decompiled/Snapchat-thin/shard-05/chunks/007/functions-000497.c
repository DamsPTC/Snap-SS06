/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10408e488; end: 10408e863;  */

undefined * FUN_10408e488(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uStack_70;
  undefined *puStack_68;
  
  puVar4 = param_2;
  if ((ulong)param_2 >> 0x3e == 0) {
    puStack_68 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puStack_68 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puStack_68 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uStack_70 = (ulong)param_2 & 0xffffffffffffff8;
  puVar8 = (undefined *)0x0;
  while( true ) {
    if (puStack_68 == puVar8) {
      puVar8 = PTR_PTR_1126b0820;
      _objc_allocWithZone(PTR_PTR_1126b0820);
      func_0x00010bfee200();
      puVar2 = param_1;
      func_0x000107c4b1dc();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar4);
      }
      puVar4 = puVar8;
      func_0x000107c5e650(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar8 = param_1;
      func_0x000107c4d3e4(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x000107c5e6f0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar4 = param_1;
      func_0x00010bfe5b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x000107c5e59c(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
      puVar2 = param_1;
      func_0x00010bf07540();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR___sSSSHsWP_11034da90;
      puVar4 = PTR___sSSN_11034da80;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar2;
        __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
        _objc_release(puVar2);
        puVar2 = puVar6;
        __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(puVar6,puVar4,puVar8);
        _swift_bridgeObjectRelease(puVar6);
      }
      puVar4 = puVar5;
      func_0x000107c5e440(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar2);
      func_0x00010beec6c0(param_1);
      puVar8 = puVar4;
      func_0x000107c5e414(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf3ec40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x000107c5e4b8(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar4);
      func_0x000107c5d0f0(param_1);
      puVar4 = puVar2;
      func_0x000107c5e848(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar8 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      return puVar8;
    }
    if (((ulong)param_2 & 0xc000000000000001) == 0) {
      if (*(undefined **)(uStack_70 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408e848);
        (*pcVar1)();
      }
      puVar2 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
      _objc_retain();
      puVar5 = puVar4;
    }
    else {
      puVar2 = puVar8;
      puVar5 = param_2;
      func_0x000100ff3f88();
    }
    if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10408e844);
      (*pcVar1)();
    }
    puVar4 = puVar2;
    func_0x000107c4b1dc();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar7 = puVar5;
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x000107c4b1dc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar4);
    if ((puVar6 == puVar3) && (puVar5 == puVar7)) break;
    puVar4 = puVar5;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar6,puVar5,puVar3,puVar7,0);
    _objc_release(puVar2);
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(puVar7);
    puVar8 = puVar8 + 1;
    if (((ulong)puVar6 & 1) != 0) {
LAB_10408e724:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(param_1);
      return param_1;
    }
  }
  _objc_release(puVar2);
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(puVar7);
  goto LAB_10408e724;
}



/* Entry: 10408e864; end: 10408e897;  */

void FUN_10408e864(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408e898; end: 10408e8cf; -[_TtC35SCLensCollectionsMockImplementation32LensCollectionsMokedDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408e898(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130590d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130590e0));
  return;
}



/* Entry: 10408e8d0; end: 10408e98b;  */

undefined8 FUN_10408e8d0(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010408eadc();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x00010408eee8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10408e98c; end: 10408ec4b;  */

void FUN_10408e98c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10408ea64);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10408ec4c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10408ea2c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010408eadc();
    lVar6 = *unaff_x20;
    goto joined_r0x00010408ea78;
  }
  lVar6 = *unaff_x20;
joined_r0x00010408ea78:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10408eadc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10408ec4c; end: 10408f097;  */

void FUN_10408ec4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x113059110;
  func_0x0001000285a8(0x113059110,&UNK_10dccef58);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10408eeb4:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10408eee4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10408eeb4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10408eee8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10408f098; end: 10408f0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f098(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_10408e2e0:
    _swift_beginAccess(lVar6 + _DAT_1130590e0,auStack_60,0x21,0);
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    lVar3 = 0x6c6f632d736e656c;
    uVar8 = 0;
    func_0x000100029284(0x6c6f632d736e656c);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
      goto LAB_10408e2e0;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar3 * 0x20,auStack_60);
    _swift_bridgeObjectRelease(lVar2);
    uVar4 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    plVar5 = &lStack_68;
    _swift_dynamicCast(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
    lVar2 = lStack_68;
    if (((ulong)plVar5 & 1) == 0) goto LAB_10408e2e0;
    plVar5 = (long *)(lVar6 + _DAT_1130590e0);
    _swift_beginAccess(plVar5,auStack_60,0x21,0);
    if (lVar2 != 0) {
      _swift_bridgeObjectRetain(uVar1);
      lVar6 = *plVar5;
      _swift_isUniquelyReferenced_nonNull_native(lVar6);
      lStack_68 = *plVar5;
      *plVar5 = -0x8000000000000000;
      FUN_10408e98c(lVar2,uVar7,uVar1,lVar6);
      _swift_bridgeObjectRelease(uVar1);
      *plVar5 = lStack_68;
      goto LAB_10408e32c;
    }
  }
  _swift_bridgeObjectRetain(uVar1);
  FUN_10408e8d0(uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
LAB_10408e32c:
  _swift_endAccess(auStack_60);
  return;
}



/* Entry: 10408f0a4; end: 10408f0c3;  */

void FUN_10408f0a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10408f0c4; end: 10408f0df;  */

void FUN_10408f0c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10408f0e0; end: 10408f0ff;  */

void FUN_10408f0e0(void)

{
  _objc_opt_self(&PTR_PTR_112987160);
  return;
}



/* Entry: 10408f100; end: 10408f13f;  */

void FUN_10408f100(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10408f140; end: 10408f15b;  */

void FUN_10408f140(void)

{
  long unaff_x20;
  
  FUN_10408e3c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10408f15c; end: 10408f16b;  */

undefined1  [16] FUN_10408f15c(void)

{
  return ZEXT816(0x11073f270);
}



/* Entry: 10408f16c; end: 10408f1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f16c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100093e80();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113059128) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10408f1d8; end: 10408f1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f1d8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100093e80();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_113059128) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10408f1e0; end: 10408f22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f1e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113059128) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408f22c; end: 10408f28b; -[_TtC36SCLensFavoritesMockedServiceProvider36SCLensFavoritesMockedServicesWrapper init] */

void FUN_10408f22c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensFavoritesMockedServiceProvider.SCLensFavoritesMockedServicesWrapper",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408f258);
  (*pcVar1)();
}



/* Entry: 10408f28c; end: 10408f29b;  */

undefined1  [16] FUN_10408f28c(void)

{
  return ZEXT816(0x11073f310);
}



/* Entry: 10408f29c; end: 10408f2bb; -[_TtC36SCLensFavoritesMockedServiceProvider36SCLensFavoritesMockedServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059128));
  return;
}



/* Entry: 10408f2bc; end: 10408f33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f2bc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100096cd4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113059168) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113059170) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _swift_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10408f340; end: 10408f347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f340(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  func_0x000100096cd4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(long *)(lVar5 + _DAT_113059168) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113059170) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_retain(lVar1);
  _swift_retain(uVar2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10408f348; end: 10408f3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f348(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113059168) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113059170) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408f3ac; end: 10408f40b; -[_TtC33SCLensUnlockerMockServiceProvider33SCLensUnlockerMockServicesWrapper init] */

void FUN_10408f3ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensUnlockerMockServiceProvider.SCLensUnlockerMockServicesWrapper",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408f3d8);
  (*pcVar1)();
}



/* Entry: 10408f40c; end: 10408f41b;  */

undefined1  [16] FUN_10408f40c(void)

{
  return ZEXT816(0x11073f400);
}



/* Entry: 10408f41c; end: 10408f453; -[_TtC33SCLensUnlockerMockServiceProvider33SCLensUnlockerMockServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f41c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113059170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059168));
  return;
}



/* Entry: 10408f454; end: 10408f473;  */

undefined1  [16] FUN_10408f454(void)

{
  return ZEXT816(0x11073f420);
}



/* Entry: 10408f474; end: 10408f4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10408f474(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a1ffe0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130591b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130591b8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408f4fc);
  (*pcVar1)();
}



/* Entry: 10408f4fc; end: 10408f55b; -[_TtC26MapsSystemScopeGraphBridge41MapsSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10408f4fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapsSystemScopeGraphBridge.MapsSystemScopeGraphBridgeSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408f528);
  (*pcVar1)();
}



/* Entry: 10408f55c; end: 10408f593; -[_TtC26MapsSystemScopeGraphBridge41MapsSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f55c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130591b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130591b8));
  return;
}



/* Entry: 10408f594; end: 10408f5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f594(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130591b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130591b0));
  return;
}



/* Entry: 10408f5bc; end: 10408f61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10408f5bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113059398);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10408f620; end: 10408f627;  */

void FUN_10408f620(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10408f628; end: 10408f6c7;  */

void FUN_10408f628(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10408f6c8; end: 10408f6e7;  */

void FUN_10408f6c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10408f6e8; end: 10408f74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10408f6e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130593a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10408f74c; end: 10408f753;  */

void FUN_10408f74c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10408f754; end: 10408f7f3;  */

void FUN_10408f754(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10408f7f4; end: 10408f813;  */

void FUN_10408f7f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10408f814; end: 10408f877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f814(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113059398) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130593a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10408f878; end: 10408f8d7; -[_TtC26MapsSystemScopeGraphBridge34MapsSystemScopeGraphBridgeServices init] */

void FUN_10408f878(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapsSystemScopeGraphBridge.MapsSystemScopeGraphBridgeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408f8a4);
  (*pcVar1)();
}



/* Entry: 10408f8d8; end: 10408f96b; -[_TtC26MapsSystemScopeGraphBridge34MapsSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408f8d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113059398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130593a0));
  return;
}



/* Entry: 10408f96c; end: 10408f9a3;  */

undefined1  [16] FUN_10408f96c(void)

{
  return ZEXT816(0x11073f598);
}



/* Entry: 10408f9a4; end: 10408f9e7; -[SCMapsSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_10408f9a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408f9e8; end: 10408fa1b;  */

void FUN_10408f9e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10408fa1c; end: 10408fa63; -[SCMapsSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408fa1c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130593f8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113059400));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113059408));
  return;
}



/* Entry: 10408fa64; end: 10408fa83;  */

void FUN_10408fa64(void)

{
  _objc_opt_self(&PTR_PTR_112987538);
  return;
}



/* Entry: 10408fa84; end: 10408fa8f; -[SCNextGenLocationSystemServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408fa84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113059438;
  _swift_beginAccess(param_1 + _DAT_113059438,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408fa90; end: 10408fa9b; -[SCNextGenLocationSystemServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408fa90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113059438;
  _swift_beginAccess(param_1 + _DAT_113059438,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408fa9c; end: 10408faa7; -[SCNextGenLocationSystemServicesSaberServiceProvider mapsSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408fa9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113059440;
  _swift_beginAccess(param_1 + _DAT_113059440,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408faa8; end: 10408faeb;  */

void FUN_10408faa8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408faec; end: 10408faf7; -[SCNextGenLocationSystemServicesSaberServiceProvider setMapsSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408faec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113059440;
  _swift_beginAccess(param_1 + _DAT_113059440,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408faf8; end: 10408fb4b;  */

void FUN_10408faf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10408fb4c; end: 10408fd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10408fb4c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408f64c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113059398);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113059448);
      *(long *)(unaff_x20 + _DAT_113059448) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MapsSystemScopeGraphBridge/SCNextGenLocationSystemServicesSaberServiceProvider.swift",
             0x54,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10408fc78);
  (*pcVar1)();
}



/* Entry: 10408fd60; end: 10408fd93; -[SCNextGenLocationSystemServicesSaberServiceProvider provide] */

void FUN_10408fd60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10408fb4c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408fd94; end: 10408fdc7; -[SCNextGenLocationSystemServicesSaberServiceProvider __safeProvide] */

void FUN_10408fd94(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010408fc78();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10408fdc8; end: 10408fe0b; -[SCNextGenLocationSystemServicesSaberServiceProvider end] */

void FUN_10408fdc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10408fe0c; end: 10408ffa3;  */

void FUN_10408fe0c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17120)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8ee0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MapsSystemScopeGraphBridge/SCNextGenLocationSystemServicesSaberServiceProvider.swift"
                   ,0x54,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10408ffa4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c562d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10408ffa4; end: 10409004f; -[SCNextGenLocationSystemServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10408ffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_10408fe0c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104090050; end: 1040900c3; -[SCNextGenLocationSystemServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090050(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113059438,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113059440,0);
  *(undefined8 *)(param_1 + _DAT_113059448) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040900c4; end: 1040900f7;  */

void FUN_1040900c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040900f8; end: 10409013f; -[SCNextGenLocationSystemServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040900f8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113059438);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113059440);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059448));
  return;
}



/* Entry: 104090140; end: 10409015f;  */

void FUN_104090140(void)

{
  _objc_opt_self(&PTR_PTR_113059490);
  return;
}



/* Entry: 104090160; end: 10409016b; -[SCSCSystemLocationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090160(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130594f8;
  _swift_beginAccess(param_1 + _DAT_1130594f8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409016c; end: 104090177; -[SCSCSystemLocationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409016c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130594f8;
  _swift_beginAccess(param_1 + _DAT_1130594f8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104090178; end: 104090183; -[SCSCSystemLocationServicesSaberServiceProvider mapsSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113059500;
  _swift_beginAccess(param_1 + _DAT_113059500,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104090184; end: 1040901c7;  */

void FUN_104090184(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040901c8; end: 1040901d3; -[SCSCSystemLocationServicesSaberServiceProvider setMapsSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040901c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113059500;
  _swift_beginAccess(param_1 + _DAT_113059500,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040901d4; end: 104090227;  */

void FUN_1040901d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104090228; end: 10409043b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104090228(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c484();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408f778();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_1130593a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113059508);
      *(long *)(unaff_x20 + _DAT_113059508) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MapsSystemScopeGraphBridge/SCSCSystemLocationServicesSaberServiceProvider.swift",0x4f,
             2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104090354);
  (*pcVar1)();
}



/* Entry: 10409043c; end: 10409046f; -[SCSCSystemLocationServicesSaberServiceProvider provide] */

void FUN_10409043c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104090228();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104090470; end: 1040904a3; -[SCSCSystemLocationServicesSaberServiceProvider __safeProvide] */

void FUN_104090470(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104090354();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040904a4; end: 1040904e7; -[SCSCSystemLocationServicesSaberServiceProvider end] */

void FUN_1040904a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040904e8; end: 10409067f;  */

void FUN_1040904e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17120)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8ee0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MapsSystemScopeGraphBridge/SCSCSystemLocationServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104090680);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c562d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104090680; end: 10409072b; -[SCSCSystemLocationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104090680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_1040904e8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409072c; end: 10409079f; -[SCSCSystemLocationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409072c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130594f8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113059500,0);
  *(undefined8 *)(param_1 + _DAT_113059508) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040907a0; end: 1040907d3;  */

void FUN_1040907a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040907d4; end: 10409081b; -[SCSCSystemLocationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040907d4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130594f8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113059500);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059508));
  return;
}



/* Entry: 10409081c; end: 10409083b;  */

void FUN_10409081c(void)

{
  _objc_opt_self(&PTR_PTR_113059550);
  return;
}



/* Entry: 10409083c; end: 10409084b; -[NextGenLocationSystemServices locationOperationUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409083c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130595c0));
  return;
}



/* Entry: 10409084c; end: 1040908af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409084c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130595b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130595c0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040908b0; end: 1040908e3;  */

void FUN_1040908b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040908e4; end: 10409091b; -[NextGenLocationSystemServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040908e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130595b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130595c0));
  return;
}



/* Entry: 10409091c; end: 1040909a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409091c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a20628();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130595f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130595f8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040909a4);
  (*pcVar1)();
}



/* Entry: 1040909a4; end: 104090a03; -[_TtC25MauSystemScopeGraphBridge40MauSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_1040909a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MauSystemScopeGraphBridge.MauSystemScopeGraphBridgeSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040909d0);
  (*pcVar1)();
}



/* Entry: 104090a04; end: 104090a3b; -[_TtC25MauSystemScopeGraphBridge40MauSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090a04(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130595f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130595f8));
  return;
}



/* Entry: 104090a3c; end: 104090a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090a3c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130595f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130595f0));
  return;
}



/* Entry: 104090a64; end: 104090ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104090a64(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113059708);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104090ac8; end: 104090acf;  */

void FUN_104090ac8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104090ad0; end: 104090b6f;  */

void FUN_104090ad0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104090b70; end: 104090bdb;  */

void FUN_104090b70(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104090bdc; end: 104090c3b; -[_TtC25MauSystemScopeGraphBridge33MauSystemScopeGraphBridgeServices init] */

void FUN_104090bdc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MauSystemScopeGraphBridge.MauSystemScopeGraphBridgeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104090c08);
  (*pcVar1)();
}



/* Entry: 104090c3c; end: 104090c4b; -[_TtC25MauSystemScopeGraphBridge33MauSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113059708));
  return;
}



/* Entry: 104090c4c; end: 104090ca7;  */

void FUN_104090c4c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130596f8,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x1130596f8,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 104090ca8; end: 104090cdf;  */

undefined1  [16] FUN_104090ca8(void)

{
  return ZEXT816(0x11073f7a8);
}



/* Entry: 104090ce0; end: 104090d23; -[SCMauSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104090ce0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104090d24; end: 104090d57;  */

void FUN_104090d24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104090d58; end: 104090d9f; -[SCMauSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090d58(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113059760);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113059768));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113059770));
  return;
}



/* Entry: 104090da0; end: 104090dbf;  */

void FUN_104090da0(void)

{
  _objc_opt_self(&PTR_PTR_1129878e0);
  return;
}



/* Entry: 104090dc0; end: 104090dcb; -[SCSCSystemLaunchTabServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130597a0;
  _swift_beginAccess(param_1 + _DAT_1130597a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104090dcc; end: 104090dd7; -[SCSCSystemLaunchTabServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104090dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130597a0;
  _swift_beginAccess(param_1 + _DAT_1130597a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


