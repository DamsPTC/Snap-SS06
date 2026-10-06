/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104847c4c; end: 104847c73; -[SCWebView prepareForReuse] */

void FUN_104847c4c(undefined8 param_1)

{
  _objc_retain();
  FUN_104847a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104847c74; end: 104847dc7; -[SCWebView loadRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104847c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (lVar6,param_3);
  _objc_retain();
  __s10Foundation10URLRequestV3urlAA3URLVSgvg(puVar3);
  lVar1 = _DAT_113815398;
  _swift_beginAccess(param_1 + _DAT_113815398,auStack_58,0x21,0);
  func_0x0001014522e4(puVar3,param_1 + lVar1);
  puVar3 = auStack_58;
  _swift_endAccess(puVar3);
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  uVar4 = 0;
  FUN_104848678();
  plVar5 = &lStack_68;
  lStack_68 = param_1;
  uStack_60 = uVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_loadRequest__112604a28,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 104847dc8; end: 104847dfb;  */

void FUN_104847dc8(void)

{
  FUN_104848678();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104847dfc; end: 10484801b; -[SCWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104847dfc(long param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130919c0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130919c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130919d0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130919d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130919e0));
  param_1 = param_1 + _DAT_113815398;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10484801c; end: 1048482db;  */

void FUN_10484801c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048480f4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1048482dc(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048480bc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010484816c();
    lVar6 = *unaff_x20;
    goto joined_r0x000104848108;
  }
  lVar6 = *unaff_x20;
joined_r0x000104848108:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10484816c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1048482dc; end: 104848577;  */

void FUN_1048482dc(long param_1,ulong param_2)

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
  uVar6 = 0x113091a20;
  func_0x0001000285a8(0x113091a20,&UNK_10dd36ef0);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_104848544:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104848574);
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
          goto LAB_104848544;
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
      _objc_retain(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104848578);
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



/* Entry: 104848578; end: 104848677;  */

undefined * FUN_104848578(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x113091a20,&UNK_10dd36ef0);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104848674);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104848678);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 104848678; end: 1048486af;  */

void FUN_104848678(undefined8 param_1)

{
  if (lRam0000000113091a10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81d6c8);
  return;
}



/* Entry: 1048486b0; end: 1048486b7;  */

void FUN_1048486b0(void)

{
  if (lRam0000000113091a10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81d6c8);
  return;
}



/* Entry: 1048486b8; end: 10484874b;  */

void FUN_1048486b8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = &UNK_10dd36eb8;
  puStack_48 = &UNK_10dd36ed0;
  puStack_38 = PTR___sBbWV_11034d660 + 0x40;
  puStack_40 = &UNK_10dd36ed0;
  lVar1 = 0x13f;
  puStack_30 = puStack_38;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 10484874c; end: 104848753;  */

void FUN_10484874c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104848754; end: 10484875f; -[SCWebViewScript name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091a28);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091a28))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104848760; end: 10484876b; -[SCWebViewScript scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848760(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091a30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091a30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10484876c; end: 1048487b3;  */

void FUN_10484876c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048487b4; end: 1048487fb; -[SCWebViewScript callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048487b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091a38);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048487fc; end: 10484880b; -[SCWebViewScript forMainFrameOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048487fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113091a40);
}



/* Entry: 10484880c; end: 10484881b; -[SCWebViewScript injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484880c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091a48);
}



/* Entry: 10484881c; end: 10484887b; -[SCWebViewScript messageHandlers] */

void FUN_10484881c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10484887c();
  _objc_release(param_1);
  uVar2 = 0x113091a80;
  func_0x0001000285a8(0x113091a80,&UNK_10dd36f10);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10484887c; end: 104848c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10484887c(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_113091a50);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  _objc_release(uVar2);
  uVar2 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar2 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar2;
    if (0x7fffffffffffffff < uVar3) {
      uVar7 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar2 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104848a2c);
            (*pcVar1)();
          }
          uVar10 = *(ulong *)(uVar3 + uVar9 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar10);
        }
        else {
          uVar10 = uVar9;
          func_0x00010125fef0(uVar9,uVar3);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104848a28);
          (*pcVar1)();
        }
        uVar11 = uVar9 + 1;
        uVar4 = uVar10;
        puStack_68 = PTR_DAT_11269e7f0;
        _swift_dynamicCastObjCProtocolConditional(uVar10,1,&puStack_68);
        if (uVar4 == 0) break;
        puVar5 = puVar8;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar5 == 0) || ((long)puVar8 < 0)) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar5 = puVar8;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
          }
          puVar6 = (undefined *)0x0;
          FUN_104848e54(0,puVar5 + 1,1,puVar8);
          puVar8 = puVar6;
        }
        uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar10 + 0x10);
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_104848e54(puVar5,uVar9 + 1,1,puVar8);
          uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
          puVar8 = puVar5;
        }
        *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
        *(ulong *)(uVar10 + uVar9 * 8 + 0x20) = uVar4;
        uVar9 = uVar11;
        if (uVar11 == uVar7) goto LAB_104848a48;
      }
      _swift_unknownObjectRelease(uVar10);
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar7);
  }
LAB_104848a48:
  _swift_bridgeObjectRelease(uVar3);
  return puVar8;
}



/* Entry: 104848c34; end: 104848d3b; -[SCWebViewScript initWithName:scriptString:forMainFrameOnly:injectionTime:callbackNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848c34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined *puStack_68;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_7,PTR___sSSN_11034da80);
  lVar2 = _DAT_113091a50;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  _objc_opt_self();
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091a28);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091a30);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined1 *)(param_1 + _DAT_113091a40) = param_5;
  *(undefined8 *)(param_1 + _DAT_113091a48) = param_6;
  *(undefined8 *)(param_1 + _DAT_113091a38) = param_7;
  FUN_104848f7c();
  lStack_70 = param_1;
  puStack_68 = puVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104848d3c; end: 104848d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848d3c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_113091a50),PTR_s_addObject__11259c1f0,param_1);
  return;
}



/* Entry: 104848d50; end: 104848d73; -[SCWebViewScript addMessageHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_113091a50),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 104848d74; end: 104848d83; -[SCWebViewScript removeMessageHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_113091a50),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 104848d84; end: 104848ddf; -[SCWebViewScript init] */

void FUN_104848d84(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCWebView.SCWebViewScript",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104848db0);
  (*pcVar1)();
}



/* Entry: 104848de0; end: 104848e3f; -[SCWebViewScript .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104848de0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091a28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091a30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091a38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091a50));
  return;
}



/* Entry: 104848e40; end: 104848e53;  */

void FUN_104848e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091a88 == (undefined *)0x0 || ((ulong)puRam0000000113091a88 & 1) != 0) {
    puVar1 = &UNK_10ea10456;
    func_0x000107c61518(&UNK_10ea10456,0x23,0,0);
    puRam0000000113091a88 = puVar1;
  }
  return;
}



/* Entry: 104848e54; end: 104848f7b;  */

ulong FUN_104848e54(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104848f7c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104848f9c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104848f78);
      (*pcVar1)();
    }
    FUN_10484901c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104848f7c; end: 104848f9b;  */

void FUN_104848f7c(void)

{
  _objc_opt_self(&PTR_PTR_1129db8e8);
  return;
}



/* Entry: 104848f9c; end: 10484901b;  */

undefined * FUN_104848f9c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_104848e40();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10484901c; end: 10484913f;  */

long FUN_10484901c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10484913c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104849140);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x113091a80;
        func_0x0001000285a8(0x113091a80,&UNK_10dd36f10);
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x113091a80;
      func_0x0001000285a8(0x113091a80,&UNK_10dd36f10);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104849138);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104849140; end: 1048492c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849140(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_68;
  
  lVar2 = unaff_x20 + _DAT_113091a98;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_113091a90);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(uVar3);
    if (uVar4 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar3 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar3 == 0) {
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
      return;
    }
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048492c8);
      (*pcVar1)();
    }
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar7);
      }
      else {
        uVar7 = uVar6;
        func_0x00010125fef0(uVar6,uVar4);
      }
      puStack_68 = PTR_DAT_11269e7f0;
      uVar5 = uVar7;
      _swift_dynamicCastObjCProtocolConditional(uVar7,1,&puStack_68);
      if (uVar5 != 0) {
        func_0x00010c291780();
      }
      uVar6 = uVar6 + 1;
      _swift_unknownObjectRelease(uVar7);
    } while (uVar3 != uVar6);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return;
}



/* Entry: 1048492c8; end: 104849333; -[_TtC9SCWebView25ScriptMessageRelayHandler userContentController:didReceiveScriptMessage:] */

void FUN_1048492c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_104849140(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104849334; end: 104849393; -[_TtC9SCWebView25ScriptMessageRelayHandler init] */

void FUN_104849334(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCWebView.ScriptMessageRelayHandler",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104849360);
  (*pcVar1)();
}



/* Entry: 104849394; end: 1048493cb; -[_TtC9SCWebView25ScriptMessageRelayHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849394(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091a90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_113091a98);
  return;
}



/* Entry: 1048493cc; end: 1048493eb;  */

void FUN_1048493cc(void)

{
  _objc_opt_self(&PTR_PTR_1129db9e8);
  return;
}



/* Entry: 1048493ec; end: 1048494bf;  */

void FUN_1048493ec(undefined1 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048494c0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048494c0; end: 1048494eb;  */

ushort FUN_1048494c0(ushort param_1)

{
  if ((param_1 & 0xfffc) != 0) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1048494ec; end: 10484952b;  */

void FUN_1048494ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36f3c;
  _swift_getWitnessTable(&UNK_10dd36f3c,&UNK_1107a20f8);
  puRam0000000113091ac8 = puVar1;
  return;
}



/* Entry: 10484952c; end: 10484952f;  */

void FUN_10484952c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36fdc;
  _swift_getWitnessTable(&UNK_10dd36fdc,&UNK_1107a2188);
  puRam0000000113091ad0 = puVar1;
  return;
}



/* Entry: 104849530; end: 10484956f;  */

void FUN_104849530(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36fdc;
  _swift_getWitnessTable(&UNK_10dd36fdc,&UNK_1107a2188);
  puRam0000000113091ad0 = puVar1;
  return;
}



/* Entry: 104849570; end: 10484984f;  */

int FUN_104849570(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048495ec;
        goto LAB_1048495d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048495d0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1048495ec:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104849850; end: 104849897; -[_TtC18SCUserSessionScope18SCUserSessionScope userSessionWorkflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849850(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113091ae8;
  _swift_beginAccess(param_1 + _DAT_113091ae8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104849898; end: 1048498ef; -[_TtC18SCUserSessionScope18SCUserSessionScope setUserSessionWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113091ae8;
  _swift_beginAccess(param_1 + _DAT_113091ae8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1048498f0; end: 104849937; -[_TtC18SCUserSessionScope18SCUserSessionScope logout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048498f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113091af0;
  _swift_beginAccess(param_1 + _DAT_113091af0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104849938; end: 10484999b; -[_TtC18SCUserSessionScope18SCUserSessionScope setLogout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113091af0;
  _swift_beginAccess(param_1 + _DAT_113091af0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10484999c; end: 104849a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10484999c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113091ae8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113091ae8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113091af0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113091ad8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091ae0) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 104849a8c; end: 104849b2f; -[_TtC18SCUserSessionScope18SCUserSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849a8c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ad8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ae0));
  func_0x000100ecd784(param_1 + _DAT_113091ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091af0));
  return;
}



/* Entry: 104849b30; end: 104849b33;  */

void FUN_104849b30(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104849b34; end: 104849b67;  */

void FUN_104849b34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104849b68; end: 104849b77;  */

undefined1  [16] FUN_104849b68(void)

{
  return ZEXT816(0x1107a2288);
}



/* Entry: 104849b78; end: 104849b8b; -[_TtC18SCUserSessionScope26SCUserSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113091b00));
  return;
}



/* Entry: 104849b8c; end: 104849b9b; -[_TtC13SCSystemScope13SCSystemScope notificationCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091b60));
  return;
}



/* Entry: 104849b9c; end: 104849bab; -[_TtC13SCSystemScope13SCSystemScope notificationAPNSTokenEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091b98));
  return;
}



/* Entry: 104849bac; end: 104849bbb; -[_TtC13SCSystemScope13SCSystemScope notificationVOIPTokenEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091ba0));
  return;
}



/* Entry: 104849bbc; end: 104849bcb; -[_TtC13SCSystemScope13SCSystemScope notificationProcessingStepEvents_DEPRECATED] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bc0));
  return;
}



/* Entry: 104849bcc; end: 104849bdb; -[_TtC13SCSystemScope13SCSystemScope notificationProcessingStepEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bd0));
  return;
}



/* Entry: 104849bdc; end: 104849bfb; -[_TtC13SCSystemScope13SCSystemScope systemNotificationInteractionEventHandlingPluginRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104849bdc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113091be0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104849bfc; end: 104849c6f; -[_TtC13SCSystemScope13SCSystemScope isForegroundingApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104849bfc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_113091b78;
  lVar4 = *(long *)(param_1 + _DAT_113091b78);
  lVar2 = param_1;
  _objc_retain();
  func_0x00010bf07b60();
  if (lVar4 == 2) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c0d9860(lVar3);
    _objc_release(lVar2);
    bVar1 = lVar3 == 0;
  }
  else {
    _objc_release(lVar2);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104849c70; end: 10484a18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104849c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091b60) = param_10;
  puVar1 = PTR_PTR_1126ae568;
  _objc_allocWithZone();
  _objc_retain();
  _objc_retain();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_113091bd8) = puVar1;
  puVar2 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  _objc_retain();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_113091bf8) = puVar2;
  func_0x0001000285a8(0x113091c00,&UNK_10dd37130);
  puVar3 = &UNK_1107a2330;
  _swift_allocObject(&UNK_1107a2330,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_17;
  *(undefined8 *)(puVar3 + 0x18) = param_18;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _swift_retain(param_18);
  puVar4 = &UNK_1000b9ae0;
  func_0x0001000823a8(&UNK_1000b9ae0,puVar3);
  func_0x000100082720("UIWindow",8,2);
  *(undefined **)(unaff_x20 + _DAT_113091b68) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113091b70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091b78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113091b80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091b88) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113091b90) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113091b98) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113091ba0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113091ba8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113091bb0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113091bb8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113091bc0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113091bc8) = param_13;
  puVar5 = PTR_PTR_1126a9780;
  _objc_opt_self();
  _objc_retain();
  _objc_retain();
  _swift_retain(puVar4);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010bf3c5e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + _DAT_113091bd0) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_113091be0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113091be8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113091bf0) = param_16;
  puVar3 = PTR_s_init_1125d9248;
  _objc_retain();
  _swift_unknownObjectRetain(param_14);
  _swift_unknownObjectRetain(param_15);
  _objc_retain();
  puVar6 = auStack_78;
  _objc_msgSendSuper2(puVar6,puVar3);
  puVar3 = &UNK_1107a2358;
  _swift_allocObject(&UNK_1107a2358,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  uStack_88 = 0x10484a39c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101225480;
  puStack_90 = &UNK_1107a2370;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar3;
  __Block_copy(ppuVar7);
  puVar3 = puStack_80;
  _objc_retain();
  _objc_retain(puVar6);
  _swift_release(puVar3);
  uVar8 = param_13;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar7);
  func_0x00010bf1a3e0(uVar8);
  _objc_release(puVar6);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_12);
  _objc_release(param_13);
  _swift_unknownObjectRelease(param_14);
  _swift_unknownObjectRelease(param_15);
  _objc_release(param_16);
  _swift_release(param_18);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _swift_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uVar8);
  return puVar6;
}



/* Entry: 10484a190; end: 10484a1db;  */

void FUN_10484a190(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10484a1dc; end: 10484a20f;  */

void FUN_10484a1dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484a210; end: 10484a377; -[_TtC13SCSystemScope13SCSystemScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484a210(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b60));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113091b70));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113091b78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091b98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ba0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ba8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bb0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bd0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113091be0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113091be8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bf0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113091b68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091bd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091bf8));
  return;
}



/* Entry: 10484a378; end: 10484a39f;  */

void FUN_10484a378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10484a3a0; end: 10484a44b;  */

void FUN_10484a3a0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10484a44c; end: 10484a483;  */

void FUN_10484a44c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10484a484; end: 10484a4cb; -[SCBackgroundPrefetchHandler init] */

void FUN_10484a484(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCBackgroundPrefetchHandler.swift",0x30,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484a4cc);
  (*pcVar1)();
}



/* Entry: 10484a4cc; end: 10484a54f; +[SCBackgroundPrefetchHandler taskStartedWithTriggerSource:completionHandler:] */

void FUN_10484a4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1107a2650;
    _swift_allocObject(&UNK_1107a2650,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x10484ad7c;
  }
  FUN_10484a88c(param_3,uVar2,puVar1);
  func_0x000101eb882c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484a550; end: 10484a5e3; +[SCBackgroundPrefetchHandler taskStartedFromNotificationWithContext:completionHandler:] */

void FUN_10484a550(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1107a2628;
    _swift_allocObject(&UNK_1107a2628,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar3 = 0x10484ad6c;
  }
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010484a95c();
  func_0x000101eb882c(uVar3,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484a5e4; end: 10484a5fb; +[SCBackgroundPrefetchHandler taskExpiredWithTriggerSource:] */

void FUN_10484a5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10484aa34(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484a5fc; end: 10484a6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484a5fc(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113091c30) == '\0') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113091c50) + 1) != '\x01') {
      (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113091c50),
                 *(undefined8 *)(unaff_x20 + _DAT_113091c58),
                 ((undefined8 *)(unaff_x20 + _DAT_113091c58))[1]);
    }
  }
  else if (*(char *)(unaff_x20 + _DAT_113091c30) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_113091c40);
    if (lVar1 != 0) {
      _objc_retain();
      (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  else if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113091c38) + 1) != '\x01') {
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113091c38));
  }
  return;
}



/* Entry: 10484a6f8; end: 10484a75b; -[SCBackgroundPrefetchHandler matchTaskStarted:taskStartedFromNotification:taskExpired:] */

void FUN_10484a6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10484a5fc(0x10484ad00,auStack_40,0x10484ad20,auStack_60,FUN_10484ad40,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10484a75c; end: 10484a807;  */

void FUN_10484a75c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  if (param_2 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101228174;
    uStack_58 = param_5;
    lStack_50 = param_2;
    uStack_48 = param_3;
    __Block_copy(&puStack_70);
    uVar1 = uStack_48;
    _swift_retain(param_3);
    _swift_release(uVar1);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,ppuVar2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 10484a808; end: 10484a83b;  */

void FUN_10484a808(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484a83c; end: 10484a88b; -[SCBackgroundPrefetchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010484a85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010484a860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484a83c(long param_1)

{
  if (*(long *)(param_1 + _DAT_113091c58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113091c58))[1]);
    return;
  }
  return;
}



/* Entry: 10484a88c; end: 10484aa33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484a88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_10484aae0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113091c30) = 0;
  plVar1 = (long *)(lVar4 + _DAT_113091c50);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113091c58);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(lVar4 + _DAT_113091c40) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113091c48);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113091c38);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000101eb8fc4(param_2,param_3);
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484aa34; end: 10484aadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484aa34(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10484aae0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113091c30) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091c50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091c58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113091c40) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091c48);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar4 + _DAT_113091c38);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484aae0; end: 10484aaff;  */

void FUN_10484aae0(void)

{
  _objc_opt_self(&PTR_PTR_1129dbda8);
  return;
}



/* Entry: 10484ab00; end: 10484ab13;  */

void FUN_10484ab00(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107a2528;
  if (lRam0000000113091c88 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113091c88 = param_1;
  }
  return;
}



/* Entry: 10484ab14; end: 10484ab57;  */

void FUN_10484ab14(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10484ab58; end: 10484acbf;  */

int FUN_10484ab58(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10484abd4;
        goto LAB_10484abb8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10484abb8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10484abd4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10484acc0; end: 10484ad3f;  */

void FUN_10484acc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd371d4;
  _swift_getWitnessTable(&UNK_10dd371d4,&UNK_1107a25b8);
  puRam0000000113091c90 = puVar1;
  return;
}



/* Entry: 10484ad40; end: 10484ad93;  */

void FUN_10484ad40(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010484ad4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10484ad94; end: 10484ae6b;  */

void FUN_10484ad94(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10484ae6c; end: 10484ae8b;  */

void FUN_10484ae6c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10484ae8c; end: 10484aecb;  */

void FUN_10484ae8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37280;
  _swift_getWitnessTable(&UNK_10dd37280,&UNK_1107a26d0);
  puRam0000000113091c98 = puVar1;
  return;
}



/* Entry: 10484aecc; end: 10484aedb;  */

undefined1  [16] FUN_10484aecc(void)

{
  return ZEXT816(0x1107a26d0);
}



/* Entry: 10484aedc; end: 10484af43; -[SCNotificationProcessingEvent userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484aedc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113091ca0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10484af44; end: 10484af53; -[SCNotificationProcessingEvent source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484af44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091ca8);
}



/* Entry: 10484af54; end: 10484af63; -[SCNotificationProcessingEvent clientReceiveTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484af54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091cb0);
}



/* Entry: 10484af64; end: 10484afff; -[SCNotificationProcessingEvent completionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484af64(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113091cb8);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113091cb8))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101228174;
    puStack_48 = &UNK_1107a2760;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10484b000; end: 10484b093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091ca0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091ca8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091cb0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091cb8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b094; end: 10484b117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113091ca0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091ca8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091cb0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091cb8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x00010484b0f8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b118; end: 10484b20b; -[SCNotificationProcessingEvent initWithUserInfo:source:clientReceiveTimestampMs:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b118(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lStack_50;
  undefined *puStack_48;
  
  __Block_copy();
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_6 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1107a2748;
    _swift_allocObject(&UNK_1107a2748,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_10484b2a4;
  }
  *(long *)(param_1 + _DAT_113091ca0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091ca8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113091cb0) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091cb8);
  *puVar1 = pcVar3;
  puVar1[1] = puVar2;
  func_0x00010484b0f8();
  lStack_50 = param_1;
  puStack_48 = puVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b20c; end: 10484b267; -[SCNotificationProcessingEvent init] */

void FUN_10484b20c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSystemModels.NotificationProcessingEvent",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484b238);
  (*pcVar1)();
}



/* Entry: 10484b268; end: 10484b2a3; -[SCNotificationProcessingEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b268(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091ca0));
  if (*(long *)(param_1 + _DAT_113091cb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113091cb8))[1]);
    return;
  }
  return;
}



/* Entry: 10484b2a4; end: 10484b2c7;  */

void FUN_10484b2a4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100dbf138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10484b2c8; end: 10484b32f; -[SCPushNotificationEvent userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b2c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113091ce8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10484b330; end: 10484b33f; -[SCPushNotificationEvent source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484b330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091cf0);
}



/* Entry: 10484b340; end: 10484b34f; -[SCPushNotificationEvent clientReceiveTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484b340(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091cf8);
}



/* Entry: 10484b350; end: 10484b3eb; -[SCPushNotificationEvent completionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b350(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113091d00);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113091d00))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101228174;
    puStack_48 = &UNK_1107a27b0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


