/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e9628c; end: 103e964c7;  */

undefined * FUN_103e9628c(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  
  func_0x000107c4fe18();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (unaff_x20 != 0) {
    lVar8 = unaff_x20;
    func_0x000107c4fe2c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (lVar8 != 0) {
      lVar3 = lVar8;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
                (lVar8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _objc_release();
      func_0x0001044e3d50();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar9 = *(long *)(lVar8 + 0x10);
      if (lVar9 != 0) {
        pbVar10 = (byte *)(lVar8 + 0x20);
        do {
          bVar2 = *pbVar10;
          if (0x12 < bVar2 - 0x25) {
            puVar4 = puVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar4 & 1) == 0) {
              FUN_103e97c34(0,*(long *)(puVar6 + 0x10) + 1,1);
            }
            uVar1 = *(ulong *)(puVar6 + 0x10);
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
              FUN_103e97c34(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
            puVar6[uVar1 + 0x20] = bVar2;
          }
          lVar9 = lVar9 + -1;
          pbVar10 = pbVar10 + 1;
        } while (lVar9 != 0);
      }
      _swift_bridgeObjectRelease(lVar8);
      lVar8 = *(long *)(puVar6 + 0x10);
      if (lVar8 == 0) {
        _swift_release(puVar6);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        lVar7 = lVar8;
        func_0x000100403514(0,lVar8,0);
        lVar9 = 0x20;
        do {
          uVar5 = (ulong)(byte)puVar6[lVar9];
          func_0x0001044e388c();
          uVar1 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
          *(ulong *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar5;
          *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar7;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        _swift_release(puVar6);
      }
      puVar4 = puVar6;
      func_0x000100403a6c(puVar6);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = puVar4;
      func_0x000101157854(puVar4,lVar3);
      _swift_bridgeObjectRelease(puVar4);
    }
  }
  return puVar6;
}



/* Entry: 103e964c8; end: 103e966d7;  */

undefined * FUN_103e964c8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    func_0x000100403514(0,lVar9,0);
    uVar1 = param_1 + 0x38;
    uVar6 = ~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
    uVar11 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg();
    lVar15 = 0;
    do {
      if (uVar11 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e966c8);
        (*pcVar4)();
      }
      uVar8 = uVar11 >> 6;
      uVar13 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar8 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e966cc);
        (*pcVar4)();
      }
      uVar2 = *(uint *)(param_1 + 0x24);
      uVar10 = (ulong)uVar2;
      uVar5 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + uVar11);
      func_0x0001044e388c();
      uVar12 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar12) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar3 + uVar12 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar3 + uVar12 * 0x10 + 0x28) = uVar6;
      uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar12 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e966d0);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar1 + uVar8 * 8);
      if ((uVar5 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e966d4);
        (*pcVar4)();
      }
      if (uVar2 != *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e966d8);
        (*pcVar4)();
      }
      uVar5 = uVar5 & -2L << (uVar11 & 0x3f);
      if (uVar5 == 0) {
        lVar14 = uVar8 << 6;
        puVar7 = (ulong *)(param_1 + 0x40 + uVar8 * 8);
        do {
          uVar8 = uVar8 + 1;
          if (uVar12 + 0x3f >> 6 <= uVar8) {
            FUN_103e983b4(uVar11,uVar10,0);
            uVar6 = uVar10;
            uVar11 = uVar12;
            goto LAB_103e96560;
          }
          uVar6 = *puVar7;
          lVar14 = lVar14 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar6 == 0);
        FUN_103e983b4(uVar11,uVar10,0);
        uVar11 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar14;
      }
      else {
        uVar8 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_103e96560:
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar9);
  }
  return puVar3;
}



/* Entry: 103e966d8; end: 103e96757;  */

undefined * FUN_103e966d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x11302a468;
    func_0x0001000285a8(0x11302a468,&UNK_10dca5780);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  return puVar2;
}



/* Entry: 103e96758; end: 103e9692f;  */

undefined8 FUN_103e96758(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_103e96828;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_103e96930(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_103e96828:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 103e96930; end: 103e96b8f;  */

void FUN_103e96930(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_103e96fb0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_103e96b90(uVar3 + 1);
    }
    else {
      FUN_103e97230();
    }
    lVar5 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11077d9b0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103e96a60);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e96a50);
  (*pcVar1)();
}



/* Entry: 103e96b90; end: 103e96faf;  */

void FUN_103e96b90(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x11302a4b8;
  func_0x0001000285a8(0x11302a4b8,&UNK_10dca57a0);
  lVar6 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_103e96d68:
    _swift_release(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103e96d9c);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_103e96d68;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar14 >> 6;
    uVar7 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar14 = uVar9 + 1;
        if ((uVar14 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103e96da0);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar14 != uVar7) {
          uVar9 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar7 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 103e96fb0; end: 103e9722f;  */

void FUN_103e96fb0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x11302a4b8,&UNK_10dca57a0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      _memmove(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e970f0);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_103e970d0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_103e970d0:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 103e97230; end: 103e976d7;  */

void FUN_103e97230(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x11302a4b8;
  func_0x0001000285a8(0x11302a4b8,&UNK_10dca57a0);
  lVar6 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_103e97450:
    _swift_release(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103e97480);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_103e97450;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103e97484);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 103e976d8; end: 103e97997;  */

void FUN_103e976d8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103e977b0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103e97998(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e97778);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103e97828();
    lVar6 = *unaff_x20;
    goto joined_r0x000103e977c4;
  }
  lVar6 = *unaff_x20;
joined_r0x000103e977c4:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103e97828);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103e97998; end: 103e97c33;  */

void FUN_103e97998(long param_1,ulong param_2)

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
  uVar6 = 0x11302a478;
  func_0x0001000285a8(0x11302a478,&UNK_10dca5790);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103e97c00:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103e97c30);
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
          goto LAB_103e97c00;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103e97c34);
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



/* Entry: 103e97c34; end: 103e97c4f;  */

void FUN_103e97c34(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103e97c50();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103e97c50; end: 103e97d3f;  */

undefined * FUN_103e97c50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e97d40);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11302a4b0;
    func_0x0001000285a8(0x11302a4b0,&UNK_10dca5798);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103e97d40; end: 103e97e33;  */

long FUN_103e97d40(long *param_1,undefined4 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x38);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined4 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e97e34);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e97e30);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_103e97e14;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined4 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 4 +
                  lVar7 * 0x100);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_103e97e14:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 103e97e34; end: 103e97f33;  */

undefined * FUN_103e97e34(long param_1)

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
    func_0x0001000285a8(0x11302a478,&UNK_10dca5790);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e97f30);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e97f34);
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



/* Entry: 103e97f34; end: 103e9823b;  */

ulong FUN_103e97f34(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_78;
  ulong uStack_68;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x38);
  _swift_bridgeObjectRetain();
  uStack_78 = 0;
  bVar3 = false;
  bVar4 = false;
  bVar12 = false;
  uStack_68 = 0;
  lVar13 = 0;
joined_r0x000103e97fd4:
  do {
    while( true ) {
      while (uVar14 == 0) {
        bVar6 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9823c);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
          _swift_release(param_1);
          uVar14 = 0x1000000;
          if (!bVar12) {
            uVar14 = 0;
          }
          uVar10 = 0x10000;
          if (!bVar3) {
            uVar10 = 0;
          }
          uVar2 = 0x100;
          if (!bVar4) {
            uVar2 = 0;
          }
          return uVar14 | uStack_78 | uVar10 | uVar2 | uStack_68;
        }
        uVar14 = ((ulong *)(param_1 + 0x38))[lVar13];
      }
      uVar2 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                        lVar13 * 0x400);
      uVar2 = *puVar1;
      uVar11 = puVar1[1];
      uVar7 = 1;
      func_0x0001044e388c();
      uVar9 = param_2;
      if (uVar7 != uVar2 || param_2 != uVar11) break;
LAB_103e98150:
      _swift_bridgeObjectRelease(param_2);
      uStack_68 = 1;
      param_2 = uVar9;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRelease(param_2);
    param_2 = uVar11;
    if ((uVar7 & 1) != 0) goto LAB_103e98150;
    uVar8 = 4;
    func_0x0001044e388c();
    uVar7 = uVar9;
    if (uVar8 == uVar2 && uVar9 == uVar11) {
      _swift_bridgeObjectRelease(uVar11);
      uVar11 = uVar9;
LAB_103e98174:
      _swift_bridgeObjectRelease(uVar11);
      bVar4 = true;
      param_2 = uVar7;
      goto joined_r0x000103e97fd4;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar9);
    if ((uVar8 & 1) != 0) goto LAB_103e98174;
    uVar9 = 0x19;
    func_0x0001044e388c();
    param_2 = uVar7;
    if (uVar9 == uVar2 && uVar7 == uVar11) {
      _swift_bridgeObjectRelease(uVar11);
      uVar11 = uVar7;
LAB_103e98198:
      _swift_bridgeObjectRelease(uVar11);
      bVar3 = true;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar7);
      if ((uVar9 & 1) != 0) goto LAB_103e98198;
      uVar7 = 0x1e;
      func_0x0001044e388c();
      uVar9 = param_2;
      if ((uVar7 != uVar2) || (param_2 != uVar11)) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(param_2);
        if ((uVar7 & 1) != 0) goto LAB_103e981bc;
        uVar7 = 0x1f;
        func_0x0001044e388c();
        param_2 = uVar9;
        if ((uVar7 != uVar2) || (uVar9 != uVar11)) break;
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(uVar9);
        goto LAB_103e98140;
      }
      _swift_bridgeObjectRelease(uVar11);
      uVar11 = param_2;
LAB_103e981bc:
      _swift_bridgeObjectRelease(uVar11);
      bVar12 = true;
      param_2 = uVar9;
    }
  } while( true );
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar9);
  if ((uVar7 & 1) != 0) {
LAB_103e98140:
    uStack_78 = 0x100000000;
  }
  goto joined_r0x000103e97fd4;
}



/* Entry: 103e9823c; end: 103e98253;  */

void FUN_103e9823c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103e96128(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103e98254; end: 103e9825b;  */

void FUN_103e98254(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103e9825c; end: 103e9827b;  */

void FUN_103e9825c(void)

{
  _objc_opt_self(&PTR_PTR_11295dcf0);
  return;
}



/* Entry: 103e9827c; end: 103e983b3;  */

undefined * FUN_103e9827c(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x11302a4b8,&UNK_10dca57a0);
    puVar3 = puVar9;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar11 = (undefined *)0x0;
    do {
      bVar1 = puVar11[param_1 + 0x20];
      uVar10 = (ulong)bVar1;
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar10 & 0x3f);
      lVar4 = *(long *)(puVar3 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(byte *)(lVar4 + uVar10) == bVar1) goto LAB_103e98300;
          uVar10 = uVar10 + 1 & ~uVar8;
          uVar5 = uVar10 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar10 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(byte *)(lVar4 + uVar10) = bVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e983b4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_103e98300:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 103e983b4; end: 103e983c7;  */

void FUN_103e983b4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 103e983c8; end: 103e9847b;  */

void FUN_103e983c8(void)

{
  FUN_103e9823c();
  return;
}



/* Entry: 103e9847c; end: 103e984c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9847c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a4c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e984c8; end: 103e985f7; -[_TtC33SCLensProcessingPluginsScopeProxy36SCLensProcessingPluginsScopeServices buildWithLocationDataPluginRegistry:compassDataPluginRegistry:geoDataPluginRegistry:lensApplicator:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e984c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a7950;
  _objc_allocWithZone();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain();
  func_0x000107c474d4(puVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  _swift_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_unknownObjectRelease(apuStack_68[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103e985f8; end: 103e98627;  */

void FUN_103e985f8(void)

{
  func_0x0001001dd4d0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e98628; end: 103e98657; -[_TtC33SCLensProcessingPluginsScopeProxy36SCLensProcessingPluginsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a4c8));
  return;
}



/* Entry: 103e98658; end: 103e986a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98658(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a518) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e986a4; end: 103e9872b; -[_TtC33SCLensProcessingTouchesScopeProxy36SCLensProcessingTouchesScopeServices buildWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e986a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  auStack_48[0] = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010008a7c8(&uStack_38,auStack_48);
  func_0x000100083b20(auStack_48);
  _swift_release(uStack_38);
  _objc_release(param_1);
  _swift_unknownObjectRelease(auStack_48[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e9872c; end: 103e9875f;  */

void FUN_103e9872c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e98760; end: 103e9878f; -[_TtC33SCLensProcessingTouchesScopeProxy36SCLensProcessingTouchesScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a518));
  return;
}



/* Entry: 103e98790; end: 103e988eb;  */

void FUN_103e98790(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 103e988ec; end: 103e988fb; -[PreviewMediaPlaybackServices viewportController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e988ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a560));
  return;
}



/* Entry: 103e988fc; end: 103e9890b; -[PreviewMediaPlaybackServices legacyImagePlaybackProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e988fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a568));
  return;
}



/* Entry: 103e9890c; end: 103e9891b; -[PreviewMediaPlaybackServices legacyVideoPlaybackProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9890c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a570));
  return;
}



/* Entry: 103e9891c; end: 103e98a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9891c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a568) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302a570) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e98a04; end: 103e98a63; -[PreviewMediaPlaybackServices init] */

void FUN_103e98a04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PreviewMediaPlaybackAPI.PreviewMediaPlaybackServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e98a30);
  (*pcVar1)();
}



/* Entry: 103e98a64; end: 103e98aab; -[PreviewMediaPlaybackServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98a64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a560));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a568));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a570));
  return;
}



/* Entry: 103e98aac; end: 103e98acb;  */

void FUN_103e98aac(void)

{
  _objc_opt_self(&PTR_PTR_11295df48);
  return;
}



/* Entry: 103e98acc; end: 103e98adb; -[SCPreviewGradientColors topColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a5a0));
  return;
}



/* Entry: 103e98adc; end: 103e98aef; -[SCPreviewGradientColors bottomColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a5a8));
  return;
}



/* Entry: 103e98af0; end: 103e98bcb; -[SCPreviewGradientColors initWithTopColor:bottomColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302a5a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302a5a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103e98bcc; end: 103e98bcf; -[SCPreviewGradientColors copyWithZone:] */

void FUN_103e98bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e98bd0; end: 103e98beb; -[SCPreviewGradientColors description] */

void FUN_103e98bd0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e98bec; end: 103e98c67; -[SCPreviewGradientColors init] */

void FUN_103e98bec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PreviewMediaPlaybackAPI/PreviewGradientColorsWrapper.swift",0x3a,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e98c34);
  (*pcVar1)();
}



/* Entry: 103e98c68; end: 103e98c9f; -[SCPreviewGradientColors .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98c68(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a5a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a5a8));
  return;
}



/* Entry: 103e98ca0; end: 103e98cbf;  */

void FUN_103e98ca0(void)

{
  _objc_opt_self(&PTR_PTR_11295e018);
  return;
}



/* Entry: 103e98cc0; end: 103e98cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98cc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a5a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a5a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e98cc4; end: 103e98d07; -[SCLensProcessingLensMode isEffectApplied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e98cc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a5d8;
  _swift_beginAccess(param_1 + _DAT_11302a5d8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103e98d08; end: 103e98d57; -[SCLensProcessingLensMode setIsEffectApplied:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98d08(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a5d8;
  _swift_beginAccess(param_1 + _DAT_11302a5d8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103e98d58; end: 103e98d9b; -[SCLensProcessingLensMode isEffectLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e98d58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a5e0;
  _swift_beginAccess(param_1 + _DAT_11302a5e0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103e98d9c; end: 103e98deb; -[SCLensProcessingLensMode setIsEffectLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98d9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a5e0;
  _swift_beginAccess(param_1 + _DAT_11302a5e0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103e98dec; end: 103e98e33; -[SCLensProcessingLensMode effect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98dec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a5e8;
  _swift_beginAccess(param_1 + _DAT_11302a5e8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103e98e34; end: 103e98e3f; -[SCLensProcessingLensMode setEffect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a5e8;
  _swift_beginAccess(param_1 + _DAT_11302a5e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103e98e40; end: 103e98e87; -[SCLensProcessingLensMode effectId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98e40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a5f0;
  _swift_beginAccess(param_1 + _DAT_11302a5f0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103e98e88; end: 103e98e93; -[SCLensProcessingLensMode setEffectId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a5f0;
  _swift_beginAccess(param_1 + _DAT_11302a5f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103e98e94; end: 103e98ef3;  */

void FUN_103e98e94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 103e98ef4; end: 103e98f03; -[SCLensProcessingLensMode identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a5f8));
  return;
}



/* Entry: 103e98f04; end: 103e98f13; -[SCLensProcessingLensMode didDeactivateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a600));
  return;
}



/* Entry: 103e98f14; end: 103e9988f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103e98f14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auStack_e8 [24];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [32];
  
  _objc_allocWithZone();
  lVar5 = _DAT_11302a5e8;
  *(undefined8 *)(unaff_x20 + _DAT_11302a5e8) = 0;
  lVar2 = _DAT_11302a5f0;
  *(undefined8 *)(unaff_x20 + _DAT_11302a5f0) = 0;
  lVar6 = _DAT_11302a600;
  puVar4 = PTR_PTR_1126ae568;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar4;
  lVar6 = _DAT_11302a608;
  puVar4 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_11302a610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302a618) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302a620,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302a5f8) = param_1;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_90,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  *(long *)(unaff_x20 + lVar5) = param_2;
  _objc_retain();
  lVar5 = param_2;
  _objc_retain();
  _objc_release(uVar12);
  if (param_2 != 0) {
    lVar6 = lVar5;
    _objc_retain();
    lVar7 = lVar6;
    func_0x000107c4b1dc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e993d0);
      (*pcVar3)();
    }
    _objc_release(lVar6);
    _swift_beginAccess(unaff_x20 + lVar2,auStack_e8,1,0);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar7;
    _objc_release(uVar12);
  }
  *(undefined8 *)(unaff_x20 + _DAT_11302a628) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302a630) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302a638) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302a640) = param_6;
  puVar4 = PTR_PTR_1126ae560;
  _objc_allocWithZone();
  _objc_retain();
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_11302a648) = puVar4;
  puVar4 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_11302a650) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_11302a5d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302a5e0) = 0;
  puVar8 = auStack_a0;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar12 = param_5;
  func_0x000107c419d0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &UNK_11071b740;
  puVar9 = puVar4;
  _swift_allocObject(&UNK_11071b740,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,puVar8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = FUN_103e99994;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10083fefc;
  puStack_b8 = &UNK_11071b758;
  ppuVar10 = &puStack_d0;
  puStack_a8 = puVar9;
  __Block_copy(ppuVar10);
  _swift_release(puStack_a8);
  uVar11 = uVar12;
  func_0x000107c5c320(uVar12);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar10);
  _objc_release(uVar12);
  func_0x000107c3e924(uVar11);
  _objc_release(uVar11);
  uVar12 = param_5;
  func_0x000107c41cb0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  _swift_allocObject(&UNK_11071b740,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,puVar8);
  pcStack_b0 = FUN_103e99b28;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10083fefc;
  puStack_b8 = &UNK_11071b780;
  ppuVar10 = &puStack_d0;
  puStack_a8 = puVar9;
  __Block_copy(ppuVar10);
  _swift_release(puStack_a8);
  uVar11 = uVar12;
  func_0x000107c5c320(uVar12);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar10);
  _objc_release(uVar12);
  func_0x000107c3e924(uVar11);
  _objc_release(uVar11);
  uVar12 = param_5;
  func_0x000107c41c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _swift_allocObject(&UNK_11071b740,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,puVar8);
  _objc_release(puVar8);
  pcStack_b0 = FUN_103e99ca4;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_10083fefc;
  puStack_b8 = &UNK_11071b7a8;
  ppuVar10 = &puStack_d0;
  puStack_a8 = puVar4;
  __Block_copy(ppuVar10);
  _swift_release(puStack_a8);
  uVar11 = uVar12;
  func_0x000107c5c320(uVar12);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar10);
  _objc_release(uVar12);
  func_0x000107c3e924(uVar11);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(uVar11);
  return puVar8;
}



/* Entry: 103e99890; end: 103e99993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e99890(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  uVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_11302a5f0;
  if (uVar1 != 0) {
    _swift_beginAccess(uVar1 + _DAT_11302a5f0,auStack_60,0,0);
    uVar6 = *(ulong *)(uVar1 + lVar3);
    uVar5 = uVar1;
    if (uVar6 != 0) {
      FUN_103e9b894(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain();
      uVar2 = uVar6;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      lVar3 = _DAT_11302a620;
      uVar4 = uVar6;
      if ((uVar2 & 1) != 0) {
        _swift_beginAccess(uVar1 + _DAT_11302a620,auStack_78,0,0);
        lVar3 = uVar1 + lVar3;
        _swift_unknownObjectWeakLoadStrong();
        uVar4 = uVar1;
        uVar5 = uVar6;
        if (lVar3 != 0) {
          func_0x000107c41b58();
          _swift_unknownObjectRelease(lVar3);
          uVar4 = uVar6;
          uVar5 = uVar1;
        }
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 103e99994; end: 103e999b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e99994(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  uVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_11302a5f0;
  if (uVar1 != 0) {
    _swift_beginAccess(uVar1 + _DAT_11302a5f0,auStack_60,0,0);
    uVar6 = *(ulong *)(uVar1 + lVar3);
    uVar5 = uVar1;
    if (uVar6 != 0) {
      FUN_103e9b894(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain();
      uVar2 = uVar6;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      lVar3 = _DAT_11302a620;
      uVar4 = uVar6;
      if ((uVar2 & 1) != 0) {
        _swift_beginAccess(uVar1 + _DAT_11302a620,auStack_78,0,0);
        lVar3 = uVar1 + lVar3;
        _swift_unknownObjectWeakLoadStrong();
        uVar4 = uVar1;
        uVar5 = uVar6;
        if (lVar3 != 0) {
          func_0x000107c41b58();
          _swift_unknownObjectRelease(lVar3);
          uVar4 = uVar6;
          uVar5 = uVar1;
        }
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 103e999b8; end: 103e99b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e999b8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_11302a5f0;
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + _DAT_11302a5f0,auStack_60,0,0);
    uVar4 = *(ulong *)(param_2 + lVar2);
    if (uVar4 != 0) {
      FUN_103e9b894(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain();
      uVar1 = uVar4;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      if ((uVar1 & 1) == 0) {
        _objc_release(uVar4);
      }
      else {
        FUN_103e99b30();
        lVar2 = _DAT_11302a620;
        _swift_beginAccess(param_2 + _DAT_11302a620,auStack_78,0,0);
        lVar2 = param_2 + lVar2;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar2 != 0) {
          func_0x000107c41af0();
          _swift_unknownObjectRelease(lVar2);
        }
        uVar3 = *(undefined8 *)(param_2 + _DAT_11302a600);
        _objc_retain(uVar3);
        func_0x000107c4d664();
        _objc_release(uVar3);
        _objc_release(uVar4);
        lVar2 = _DAT_11302a5d8;
        _swift_beginAccess(param_2 + _DAT_11302a5d8,auStack_90,1,0);
        *(undefined1 *)(param_2 + lVar2) = 0;
        lVar2 = _DAT_11302a5e0;
        _swift_beginAccess(param_2 + _DAT_11302a5e0,auStack_a8,1,0);
        *(undefined1 *)(param_2 + lVar2) = 0;
      }
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103e99b28; end: 103e99b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e99b28(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_11302a5f0;
  if (lVar1 != 0) {
    _swift_beginAccess(lVar1 + _DAT_11302a5f0,auStack_60,0,0);
    uVar5 = *(ulong *)(lVar1 + lVar3);
    if (uVar5 != 0) {
      FUN_103e9b894(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain();
      uVar2 = uVar5;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar5);
      }
      else {
        FUN_103e99b30();
        lVar3 = _DAT_11302a620;
        _swift_beginAccess(lVar1 + _DAT_11302a620,auStack_78,0,0);
        lVar3 = lVar1 + lVar3;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar3 != 0) {
          func_0x000107c41af0();
          _swift_unknownObjectRelease(lVar3);
        }
        uVar4 = *(undefined8 *)(lVar1 + _DAT_11302a600);
        _objc_retain(uVar4);
        func_0x000107c4d664();
        _objc_release(uVar4);
        _objc_release(uVar5);
        lVar3 = _DAT_11302a5d8;
        _swift_beginAccess(lVar1 + _DAT_11302a5d8,auStack_90,1,0);
        *(undefined1 *)(lVar1 + lVar3) = 0;
        lVar3 = _DAT_11302a5e0;
        _swift_beginAccess(lVar1 + _DAT_11302a5e0,auStack_a8,1,0);
        *(undefined1 *)(lVar1 + lVar3) = 0;
      }
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103e99b30; end: 103e99ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e99b30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302a608);
  func_0x000107c4b940(uVar4);
  puVar2 = PTR_PTR_1126ae560;
  _objc_allocWithZone();
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302a648);
  *(undefined **)(unaff_x20 + _DAT_11302a648) = puVar2;
  _objc_release(uVar3);
  lVar1 = _DAT_11302a618;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_11302a618) != 0) {
    func_0x000107c4218c();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_11302a610) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103e99ca4; end: 103e99cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e99ca4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_11302a5f0;
  if (lVar2 != 0) {
    _swift_beginAccess(lVar2 + _DAT_11302a5f0,auStack_60,0,0);
    uVar4 = *(ulong *)(lVar2 + lVar1);
    if (uVar4 != 0) {
      FUN_103e9b894(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      _objc_retain();
      uVar3 = uVar4;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar4);
      lVar1 = _DAT_11302a5e0;
      if ((uVar3 & 1) != 0) {
        _swift_beginAccess(lVar2 + _DAT_11302a5e0,auStack_78,1,0);
        *(undefined1 *)(lVar2 + lVar1) = 1;
      }
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 103e99cac; end: 103e99d4b; -[SCLensProcessingLensMode initWithIdentifier:effect:lensObservable:lensEffectFetcher:lensModeApplicator:performer:] */

void FUN_103e99cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  func_0x000103e993d0(param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103e99d4c; end: 103e99fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e99d4c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_11302a5e8;
  _swift_beginAccess(param_2 + _DAT_11302a5e8,auStack_78,0,0);
  uVar4 = *(undefined8 *)(param_2 + lVar2);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11302a628);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11302a630);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302a638);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11302a640);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar8);
  func_0x000107c46d64();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _swift_unknownObjectRelease(uVar6);
  _swift_unknownObjectRelease(uVar7);
  _swift_unknownObjectRelease(uVar8);
  _objc_release(param_1);
  lVar2 = _DAT_11302a5e0;
  _swift_beginAccess(param_2 + _DAT_11302a5e0,auStack_90,0,0);
  lVar3 = _DAT_11302a5e0;
  uVar1 = *(undefined1 *)(param_2 + lVar2);
  _swift_beginAccess(unaff_x20 + _DAT_11302a5e0,auStack_a8,1,0);
  *(undefined1 *)(unaff_x20 + lVar3) = uVar1;
  lVar2 = _DAT_11302a5d8;
  _swift_beginAccess(param_2 + _DAT_11302a5d8,auStack_c0,0,0);
  lVar3 = _DAT_11302a5d8;
  uVar1 = *(undefined1 *)(param_2 + lVar2);
  _swift_beginAccess(unaff_x20 + _DAT_11302a5d8,auStack_d8,1,0);
  *(undefined1 *)(unaff_x20 + lVar3) = uVar1;
  lVar2 = _DAT_11302a5f0;
  _swift_beginAccess(param_2 + _DAT_11302a5f0,auStack_f0,0,0);
  lVar3 = _DAT_11302a5f0;
  uVar4 = *(undefined8 *)(param_2 + lVar2);
  _swift_beginAccess(unaff_x20 + _DAT_11302a5f0,auStack_108,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  _objc_retain();
  _objc_retain(uVar4);
  _objc_release(uVar5);
  lVar2 = _DAT_11302a610;
  if (*(char *)(param_2 + _DAT_11302a610) == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302a648);
    *(undefined8 *)(unaff_x20 + _DAT_11302a648) = *(undefined8 *)(param_2 + _DAT_11302a648);
    _objc_retain();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302a618);
    *(undefined8 *)(unaff_x20 + _DAT_11302a618) = *(undefined8 *)(param_2 + _DAT_11302a618);
    _objc_retain();
    _objc_release(uVar4);
    uVar1 = *(undefined1 *)(param_2 + lVar2);
    _objc_release(param_2);
    *(undefined1 *)(unaff_x20 + _DAT_11302a610) = uVar1;
  }
  else {
    _objc_release(param_2);
  }
  _objc_release(unaff_x20);
  return unaff_x20;
}



/* Entry: 103e99fb8; end: 103e99fff; -[SCLensProcessingLensMode initWithIdentifier:lensMode:] */

void FUN_103e99fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_103e99d4c(param_3,param_4);
  return;
}



/* Entry: 103e9a000; end: 103e9a0ab; -[SCLensProcessingLensMode initWithIdentifier:effectId:lensObservable:lensEffectFetcher:lensModeApplicator:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e9a000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  _objc_retain();
  func_0x000107c46d64();
  lVar1 = _DAT_11302a5f0;
  _swift_beginAccess(param_1 + _DAT_11302a5f0,auStack_68,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_4;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 103e9a0ac; end: 103e9a0f3; -[SCLensProcessingLensMode delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9a0ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a620;
  _swift_beginAccess(param_1 + _DAT_11302a620,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e9a0f4; end: 103e9a22b; -[SCLensProcessingLensMode setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9a0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a620;
  _swift_beginAccess(param_1 + _DAT_11302a620,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e9a22c; end: 103e9a413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e9a22c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302a648);
  _objc_retain();
  uVar4 = uVar3;
  func_0x000107c43bf4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = _DAT_11302a618;
  lVar1 = _DAT_11302a5f0;
  if (*(long *)(unaff_x20 + _DAT_11302a618) == 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11302a5f8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11302a630);
    _swift_beginAccess(unaff_x20 + _DAT_11302a5f0,auStack_78,0,0);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302a628);
    uVar5 = uVar12;
    _objc_retain(uVar12);
    func_0x000107c5c6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &UNK_11071b740;
    _swift_allocObject(&UNK_11071b740,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    puVar7 = &UNK_11071b948;
    _swift_allocObject(&UNK_11071b948,0x38,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar12;
    *(undefined8 *)(puVar7 + 0x18) = uVar10;
    *(undefined8 *)(puVar7 + 0x20) = uVar3;
    *(undefined **)(puVar7 + 0x28) = puVar6;
    *(undefined8 *)(puVar7 + 0x30) = uVar9;
    uStack_88 = 0x103e9b820;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x103e9b94c;
    puStack_90 = &UNK_11071b960;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    __Block_copy(ppuVar8);
    puVar6 = puStack_80;
    _objc_retain(uVar3);
    _objc_retain(uVar5);
    _objc_retain(uVar10);
    _swift_unknownObjectRetain(uVar9);
    _swift_release(puVar6);
    uVar9 = uVar11;
    func_0x000107c5c320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    __Block_release(ppuVar8);
    _objc_release(uVar11);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = uVar9;
  }
  _objc_release(uVar3);
  return uVar4;
}



/* Entry: 103e9a414; end: 103e9a447; -[SCLensProcessingLensMode prepareLensMode] */

void FUN_103e9a414(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e9a14c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9a448; end: 103e9a667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103e9a448(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11302a5f8);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11302a638);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11302a608);
  func_0x000107c4b940(uVar8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302a648);
  _objc_retain(uVar2);
  uVar3 = uVar2;
  FUN_103e9a22c();
  puVar4 = &UNK_11071b740;
  _swift_allocObject(&UNK_11071b740,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x103e9b950;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010186a8;
  puStack_88 = &UNK_11071b870;
  puStack_78 = puVar4;
  __Block_copy(&puStack_a0);
  _swift_release(puStack_78);
  func_0x000107c5dc64(uVar3);
  __Block_release(ppuVar5);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126ae560;
  _objc_allocWithZone();
  func_0x000107c453e4();
  uVar3 = uVar2;
  func_0x000107c43bf4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &UNK_11071b8a8;
  _swift_allocObject(&UNK_11071b8a8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  puVar4[0x20] = param_1;
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  *(long *)(puVar4 + 0x30) = unaff_x20;
  pcStack_80 = FUN_103e9b804;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010186a8;
  puStack_88 = &UNK_11071b8c0;
  puStack_78 = puVar4;
  __Block_copy(&puStack_a0);
  puVar4 = puStack_78;
  _objc_retain(puVar6);
  _objc_retain(uVar10);
  _swift_unknownObjectRetain(uVar9);
  _objc_retain();
  _swift_release(puVar4);
  func_0x000107c5dc64(uVar3);
  __Block_release(ppuVar7);
  _objc_release(uVar3);
  puVar4 = puVar6;
  func_0x000107c43bf4(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar6);
  func_0x000107c5d278(uVar8);
  return puVar4;
}



/* Entry: 103e9a668; end: 103e9a69f; -[SCLensProcessingLensMode forceActivateLensMode] */

void FUN_103e9a668(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 1;
  FUN_103e9a448(1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9a6a0; end: 103e9a6d7; -[SCLensProcessingLensMode activateLensMode] */

void FUN_103e9a6a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0;
  FUN_103e9a448(0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9a6d8; end: 103e9a9d3;  */

void FUN_103e9a6d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_1 == 0) {
    if (param_2 != 0) {
      _swift_errorRetain(param_2);
      lVar4 = param_2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
      func_0x000107c3fef8(param_3);
      _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
      return;
    }
  }
  else {
    _objc_retain();
    func_0x000107c5915c();
    puVar1 = &UNK_11071b740;
    _swift_allocObject(&UNK_11071b740,0x18,7);
    _swift_unknownObjectWeakInit(puVar1 + 0x10,param_7);
    puVar2 = &UNK_11071b8f8;
    _swift_allocObject(&UNK_11071b8f8,0x30,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined **)(puVar2 + 0x28) = puVar1;
    uStack_50 = 0x103e9b814;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1024fca8c;
    puStack_58 = &UNK_11071b910;
    puStack_48 = puVar2;
    __Block_copy(&puStack_70);
    puVar1 = puStack_48;
    _objc_retain(param_1);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _swift_release(puVar1);
    func_0x000107c3e00c(param_6);
    __Block_release(ppuVar3);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103e9a9d4; end: 103e9aa2b; -[SCLensProcessingLensMode deactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9a9d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302a638);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a5f8);
  _objc_retain();
  func_0x000107c4fea4(uVar1,param_2,uVar2);
  FUN_103e99b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e9aa2c; end: 103e9af3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9aa2c(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,char *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_80 [2];
  
  lStack_88 = 0;
  alStack_80[0] = 0;
  puVar3 = &UNK_11071b998;
  _swift_allocObject(&UNK_11071b998,0x18,7);
  *(long **)(puVar3 + 0x10) = alStack_80;
  puVar4 = &UNK_11071b9c0;
  _swift_allocObject(&UNK_11071b9c0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103e9b830;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x103e9b85c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10311b81c;
  puStack_a0 = &UNK_11071b9d8;
  ppuVar5 = &puStack_b8;
  puStack_90 = puVar4;
  __Block_copy(ppuVar5);
  puVar6 = puStack_90;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  puVar6 = &UNK_11071ba10;
  _swift_allocObject(&UNK_11071ba10,0x28,7);
  *(long **)(puVar6 + 0x10) = &lStack_88;
  *(char **)(puVar6 + 0x18) = param_2;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  puVar7 = &UNK_11071ba38;
  _swift_allocObject(&UNK_11071ba38,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103e9b87c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_98 = 0x103e9b93c;
  puStack_b8 = puVar14;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100e27b38;
  puStack_a0 = &UNK_11071ba50;
  ppuVar8 = &puStack_b8;
  puStack_90 = puVar7;
  __Block_copy(ppuVar8);
  puVar14 = puStack_90;
  pcVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_retain(puVar7);
  _swift_release(puVar14);
  func_0x000107c4c754(param_1);
  __Block_release(ppuVar8);
  __Block_release(ppuVar5);
  lVar10 = alStack_80[0];
  lVar11 = lStack_88;
  if (lStack_88 == 0) {
    if (alStack_80[0] == 0) {
      pcVar16 = pcVar9;
      if (param_2 == (char *)0x0) {
        FUN_103e9b894(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
        pcVar16 = "No Effect Id";
        __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("No Effect Id",0xc,2);
      }
      _objc_retain(pcVar9);
      pcVar9 = pcVar16;
      FUN_103e9b320(pcVar16);
      _objc_release(pcVar16);
      param_6 = pcVar9;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(pcVar9);
      _objc_release(pcVar9);
      func_0x000107c3fef8(param_4);
    }
    else {
      _swift_beginAccess(param_5 + 0x10,auStack_d0,0,0);
      lVar11 = param_5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      lVar12 = lVar10;
      _objc_retain();
      if (lVar11 != 0) {
        lVar13 = lVar12;
        func_0x000107c4b1dc();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = _DAT_11302a5f0;
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9af3c);
          (*pcVar2)();
        }
        _swift_beginAccess(lVar11 + _DAT_11302a5f0,auStack_e8,1,0);
        uVar17 = *(undefined8 *)(lVar11 + lVar1);
        *(long *)(lVar11 + lVar1) = lVar13;
        _objc_release(lVar11);
        _objc_release(uVar17);
      }
      _swift_beginAccess(param_5 + 0x10,auStack_100,0,0);
      lVar11 = param_5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      lVar1 = _DAT_11302a5e8;
      if (lVar11 != 0) {
        _swift_beginAccess(lVar11 + _DAT_11302a5e8,auStack_118,1,0);
        uVar17 = *(undefined8 *)(lVar11 + lVar1);
        *(long *)(lVar11 + lVar1) = lVar10;
        _objc_retain(lVar12);
        _objc_release(lVar11);
        _objc_release(uVar17);
      }
      func_0x000107c43320(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = &UNK_11071b740;
      _swift_allocObject(&UNK_11071b740,0x18,7);
      _swift_beginAccess(param_5 + 0x10,auStack_130,0,0);
      param_5 = param_5 + 0x10;
      _swift_unknownObjectWeakLoadStrong(param_5);
      _swift_unknownObjectWeakInit(puVar14 + 0x10,param_5);
      _objc_release(param_5);
      puVar15 = &UNK_11071ba88;
      _swift_allocObject(&UNK_11071ba88,0x28,7);
      *(long *)(puVar15 + 0x10) = lVar12;
      *(undefined8 *)(puVar15 + 0x18) = param_4;
      *(undefined **)(puVar15 + 0x20) = puVar14;
      uStack_98 = 0x103e9b888;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1010186a8;
      puStack_a0 = &UNK_11071baa0;
      ppuVar5 = &puStack_b8;
      puStack_90 = puVar15;
      __Block_copy(ppuVar5);
      puVar14 = puStack_90;
      _objc_retain(lVar12);
      _objc_retain(param_4);
      _swift_release(puVar14);
      func_0x000107c5dc64(param_6);
      __Block_release(ppuVar5);
      _objc_release(lVar12);
    }
    _objc_release(param_6);
  }
  else {
    _swift_errorRetain(lStack_88);
    lVar10 = lVar11;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar11);
    func_0x000107c3fef8(param_4);
    _objc_release(lVar10);
    _swift_errorRelease(lVar11);
  }
  _swift_errorRelease(lStack_88);
  lVar11 = alStack_80[0];
  _swift_release(puVar3);
  _objc_release(lVar11);
  puVar3 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x51,0xf6,0x25,1);
  _swift_release(puVar6);
  _swift_release(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0x51,0xfd,0x18,1);
    _swift_release(puVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9af38);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9af34);
  (*pcVar2)();
}



/* Entry: 103e9af3c; end: 103e9b1cf;  */

void FUN_103e9af3c(long param_1,long *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
    pcVar1 = param_3;
    if (param_3 == (char *)0x0) {
      FUN_103e9b894(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar1 = "No Effect Id";
      __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("No Effect Id",0xc,2);
    }
    _objc_retain(param_3);
    pcVar2 = pcVar1;
    func_0x000103e9b4e4();
    _objc_release(pcVar1);
    lVar3 = *param_2;
    *param_2 = (long)pcVar2;
  }
  else {
    lVar3 = *param_2;
    *param_2 = param_1;
    _swift_errorRetain();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(lVar3);
  return;
}



/* Entry: 103e9b1d0; end: 103e9b1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9b1d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      _swift_errorRetain(param_2);
      FUN_103e99b30();
      lVar2 = _DAT_11302a620;
      _swift_beginAccess(lVar1 + _DAT_11302a620,auStack_60,0,0);
      lVar2 = lVar1 + lVar2;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar2 == 0) {
        _objc_release(lVar1);
        _swift_errorRelease(param_2);
        return;
      }
      lVar3 = param_2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
      func_0x000107c41bb0(lVar2);
      _objc_release(lVar1);
      _swift_errorRelease(param_2);
      _swift_unknownObjectRelease(lVar2);
      lVar1 = lVar3;
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103e9b1d8; end: 103e9b237; -[SCLensProcessingLensMode init] */

void FUN_103e9b1d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLensMode.LensProcessingLensMode",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9b204);
  (*pcVar1)();
}



/* Entry: 103e9b238; end: 103e9b31f; -[SCLensProcessingLensMode .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e9b238(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a5e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a5f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a5f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a600));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a608));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a648));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a618));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a650));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a640));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a628));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a630));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a638));
  param_1 = param_1 + _DAT_11302a620;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103e9b320; end: 103e9b6ab;  */

undefined * FUN_103e9b320(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x52);
  uVar7 = 0x800000010f1cb610;
  __sSS6appendyySSF(0xd00000000000004f,0x800000010f1cb610);
  func_0x000107c417f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  __sSS6appendyySSF(uVar3,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f14b540);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x000107c466bc(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 103e9b6ac; end: 103e9b6cf;  */

undefined8 FUN_103e9b6ac(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103e9b6d0; end: 103e9b6ef;  */

void FUN_103e9b6d0(void)

{
  _objc_opt_self(&PTR_PTR_11295e0e8);
  return;
}



/* Entry: 103e9b6f0; end: 103e9b717;  */

undefined * FUN_103e9b6f0(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x11302a688);
    puVar3 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar9[-1];
      uVar1 = *puVar9;
      _objc_retain();
      _swift_bridgeObjectRetain(uVar1);
      uVar5 = uVar4;
      func_0x000101913e60();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9b800);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9b804);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 103e9b718; end: 103e9b803;  */

undefined * FUN_103e9b718(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(param_2);
    puVar3 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar8[-1];
      uVar1 = *puVar8;
      _objc_retain();
      _swift_bridgeObjectRetain(uVar1);
      uVar5 = uVar4;
      func_0x000101913e60();
      if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9b800);
        (*pcVar2)();
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9b804);
        (*pcVar2)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 103e9b804; end: 103e9b82f;  */

void FUN_103e9b804(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar7 = &puStack_70;
  if (param_1 == 0) {
    if (param_2 != 0) {
      _swift_errorRetain(param_2);
      lVar8 = param_2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
      func_0x000107c3fef8(uVar1);
      _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
      return;
    }
  }
  else {
    _objc_retain();
    func_0x000107c5915c();
    puVar5 = &UNK_11071b740;
    _swift_allocObject(&UNK_11071b740,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,uVar4);
    puVar6 = &UNK_11071b8f8;
    _swift_allocObject(&UNK_11071b8f8,0x30,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = uVar3;
    *(undefined8 *)(puVar6 + 0x20) = uVar1;
    *(undefined **)(puVar6 + 0x28) = puVar5;
    uStack_50 = 0x103e9b814;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1024fca8c;
    puStack_58 = &UNK_11071b910;
    puStack_48 = puVar6;
    __Block_copy(&puStack_70);
    puVar5 = puStack_48;
    _objc_retain(param_1);
    _objc_retain(uVar3);
    _objc_retain(uVar1);
    _swift_release(puVar5);
    func_0x000107c3e00c(uVar2);
    __Block_release(ppuVar7);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103e9b830; end: 103e9b87b;  */

void FUN_103e9b830(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  _objc_retain();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e9b87c; end: 103e9b893;  */

void FUN_103e9b87c(long param_1)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  pcVar3 = *(char **)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    pcVar2 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      FUN_103e9b894(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0,
                    *(undefined8 *)(unaff_x20 + 0x20));
      pcVar2 = "No Effect Id";
      __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("No Effect Id",0xc,2);
    }
    _objc_retain(pcVar3);
    pcVar3 = pcVar2;
    func_0x000103e9b4e4();
    _objc_release(pcVar2);
    lVar4 = *plVar1;
    *plVar1 = (long)pcVar3;
  }
  else {
    lVar4 = *plVar1;
    *plVar1 = param_1;
    _swift_errorRetain();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(lVar4);
  return;
}



/* Entry: 103e9b894; end: 103e9b8d3;  */

void FUN_103e9b894(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103e9b8d4; end: 103e9b953;  */

void FUN_103e9b8d4(long param_1,long param_2)

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



/* Entry: 103e9b954; end: 103e9bc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9b954(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 auStack_e8 [72];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  pcVar2 = FUN_103e9d894;
  FUN_103e9c31c(FUN_103e9d894,0x11302a6e0,&UNK_10dca5b10);
  _swift_allocObject();
  *(undefined8 *)(pcVar2 + 0x18) = 9;
  *(undefined8 *)(pcVar2 + 0x10) = 4;
  pcVar3 = pcVar2;
  FUN_103f6c9ac();
  uVar9 = *(undefined8 *)pcVar3;
  uVar1 = *(undefined8 *)(pcVar3 + 8);
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  lVar4 = 0;
  FUN_103e9d894();
  lVar7 = lVar4;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_11302a6e8) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302a6f0) = uVar9;
  plVar5 = &lStack_70;
  lStack_70 = lVar7;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(pcVar2 + 0x20) = plVar5;
  FUN_103f6c974();
  lVar7 = *plVar5;
  lVar6 = plVar5[1];
  _swift_bridgeObjectRetain(lVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = lVar4;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302a6e8) = 0;
  *(long *)(lVar6 + _DAT_11302a6f0) = lVar7;
  plVar5 = &lStack_80;
  lStack_80 = lVar6;
  lStack_78 = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(pcVar2 + 0x28) = plVar5;
  FUN_103f6c93c();
  lVar7 = *plVar5;
  lVar6 = plVar5[1];
  _swift_bridgeObjectRetain(lVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = lVar4;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302a6e8) = 0;
  *(long *)(lVar6 + _DAT_11302a6f0) = lVar7;
  plVar5 = &lStack_90;
  lStack_90 = lVar6;
  lStack_88 = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(pcVar2 + 0x30) = plVar5;
  FUN_103f6ca1c();
  lVar7 = *plVar5;
  lVar6 = plVar5[1];
  _swift_bridgeObjectRetain(lVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = lVar4;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302a6e8) = 0;
  *(long *)(lVar6 + _DAT_11302a6f0) = lVar7;
  plVar5 = &lStack_a0;
  lStack_a0 = lVar6;
  lStack_98 = lVar4;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(pcVar2 + 0x38) = plVar5;
  lVar7 = _DAT_11302a690;
  *(code **)(unaff_x20 + _DAT_11302a690) = pcVar2;
  FUN_103e9c294();
  _swift_initStackObject();
  plVar5[3] = 5;
  plVar5[2] = 2;
  if (((ulong)pcVar2 & 0xc000000000000001) == 0) {
    if (*(long *)(pcVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9bc94);
      (*pcVar2)();
    }
    lVar6 = *(long *)(pcVar2 + 0x20);
    _objc_retain();
  }
  else {
    lVar6 = 0;
    FUN_103e9c568(0,pcVar2);
  }
  lVar4 = *(long *)(lVar6 + _DAT_11302a6f0);
  _objc_retain();
  _objc_release(lVar6);
  plVar5[4] = lVar4;
  _swift_beginAccess(unaff_x20 + lVar7,auStack_e8,0x20,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar7);
  if ((uVar10 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9bc98);
      (*pcVar2)();
    }
    lVar7 = *(long *)(uVar10 + 0x28);
    _objc_retain();
  }
  else {
    lVar7 = 1;
    FUN_103e9c568();
  }
  _swift_endAccess(auStack_e8);
  lVar6 = *(long *)(lVar7 + _DAT_11302a6f0);
  _objc_retain();
  _objc_release(lVar7);
  plVar5[5] = lVar6;
  plVar8 = plVar5;
  FUN_103e9c710();
  _swift_setDeallocating(plVar5);
  lVar7 = plVar5[2];
  uVar9 = 0;
  FUN_103e9d738(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  _swift_arrayDestroy(plVar5 + 4,lVar7,uVar9);
  *(long **)(unaff_x20 + _DAT_11302a698) = plVar8;
  _objc_msgSendSuper2(&stack0xffffffffffffff08,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9bc98; end: 103e9bcb7; -[SCLensModeExludeMultiCameraSortingStrategy init] */

void FUN_103e9bc98(void)

{
  FUN_103e9b954();
  return;
}



/* Entry: 103e9bcb8; end: 103e9bceb;  */

void FUN_103e9bcb8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e9bcec; end: 103e9bd23; -[SCLensModeExludeMultiCameraSortingStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9bcec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a690));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302a698));
  return;
}



/* Entry: 103e9bd24; end: 103e9c147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103e9bd24(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_11302a690;
  _swift_beginAccess(unaff_x20 + _DAT_11302a690,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  uVar9 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    uVar7 = uVar9;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar6);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9beb4);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar4 = uVar8;
          FUN_103e9c568(uVar8,uVar6);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9beb0);
          (*pcVar3)();
        }
        uVar10 = uVar8 + 1;
        if (*(long *)(uVar4 + _DAT_11302a6e8) == 0) break;
        puVar5 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          FUN_103ea2740(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar8 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar8) {
          FUN_103ea2740(1 < *(ulong *)(puVar1 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar8 + 1;
        *(ulong *)(puVar1 + uVar8 * 8 + 0x20) = uVar4;
        uVar8 = uVar10;
        if (uVar10 == uVar7) goto LAB_103e9be80;
      }
      _objc_release();
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar7);
  }
LAB_103e9be80:
  _swift_bridgeObjectRelease(uVar6);
  return puVar1;
}



/* Entry: 103e9c148; end: 103e9c1ff; -[SCLensModeExludeMultiCameraSortingStrategy lensModeEffectsWithApplying:for:effectLayerType:] */

void FUN_103e9c148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x000103e9ca08(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e9c200; end: 103e9c293; -[SCLensModeExludeMultiCameraSortingStrategy lensModeEffectsWithRemoving:effectLayerType:] */

void FUN_103e9c200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x000103e9d1ec(param_3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e9c294; end: 103e9c2ff;  */

void FUN_103e9c294(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103e9d738(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11302a6d8;
  plVar5 = (long *)&UNK_10dca5b08;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}


