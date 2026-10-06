/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045e7f00; end: 1045e7f0b;  */

bool FUN_1045e7f00(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar15 = *param_1;
  uVar14 = param_1[1];
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  lVar3 = param_2[2];
  uVar5 = param_2[3];
  if (uVar13 != uVar5) {
    _swift_retain(uVar13);
    _swift_retain(uVar5);
    uVar11 = uVar13;
    (*(code *)0x1045e71c8)(uVar13,uVar5);
    _swift_release(uVar5);
    _swift_release(uVar13);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  func_0x000100e25fcc(uVar15,uVar14,uVar2,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar3 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar1 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar13 * 8);
  FUN_104558b10(*(long *)(uVar1 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar1);
      return true;
    }
    uVar13 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar3 + 0x10) == 0) || (func_0x00010035a314(lVar8), (uVar13 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar1);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar7;
    }
    FUN_104558b10(*(long *)(lVar3 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    func_0x0001000a8868(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    func_0x0001000a8868(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar2 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar1);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar2,lVar8);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar1 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_104559bfc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 1045e7f0c; end: 1045e7fd3;  */

bool FUN_1045e7f0c(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar15 = *param_1;
  uVar14 = param_1[1];
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  lVar3 = param_2[2];
  uVar5 = param_2[3];
  if (uVar13 != uVar5) {
    _swift_retain(uVar13);
    _swift_retain(uVar5);
    uVar11 = uVar13;
    (*param_5)(uVar13,uVar5);
    _swift_release(uVar5);
    _swift_release(uVar13);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  func_0x000100e25fcc(uVar15,uVar14,uVar2,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar3 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar1 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar13 * 8);
  FUN_104558b10(*(long *)(uVar1 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar1);
      return true;
    }
    uVar13 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar3 + 0x10) == 0) || (func_0x00010035a314(lVar8), (uVar13 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar1);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar7;
    }
    FUN_104558b10(*(long *)(lVar3 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    func_0x0001000a8868(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    func_0x0001000a8868(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar2 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar1);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar2,lVar8);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar1 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_104559bfc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 1045e7fd4; end: 1045e8093;  */

void FUN_1045e7fd4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e110,0x1e,&uStack_48,&lStack_40);
  puRam0000000113814348 = puStack_38;
  lRam0000000113814340 = lStack_40;
  puRam0000000113814358 = puStack_28;
  puRam0000000113814350 = puStack_30;
  puRam0000000113814368 = puStack_18;
  puRam0000000113814360 = puStack_20;
  return;
}



/* Entry: 1045e8094; end: 1045e81d3;  */

void FUN_1045e8094(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fb8 != -1) {
    _swift_once(0x113087fb8,FUN_1045e7fd4);
  }
  uVar5 = uRam0000000113814368;
  uVar4 = uRam0000000113814360;
  uVar3 = uRam0000000113814358;
  uVar2 = uRam0000000113814350;
  uVar1 = uRam0000000113814348;
  *param_1 = uRam0000000113814340;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e81d4; end: 1045e8293;  */

void FUN_1045e81d4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e0e0,0x23,&uStack_48,&lStack_40);
  puRam0000000113814378 = puStack_38;
  lRam0000000113814370 = lStack_40;
  puRam0000000113814388 = puStack_28;
  puRam0000000113814380 = puStack_30;
  puRam0000000113814398 = puStack_18;
  puRam0000000113814390 = puStack_20;
  return;
}



/* Entry: 1045e8294; end: 1045e83d3;  */

void FUN_1045e8294(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fc0 != -1) {
    _swift_once(0x113087fc0,FUN_1045e81d4);
  }
  uVar5 = uRam0000000113814398;
  uVar4 = uRam0000000113814390;
  uVar3 = uRam0000000113814388;
  uVar2 = uRam0000000113814380;
  uVar1 = uRam0000000113814378;
  *param_1 = uRam0000000113814370;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e83d4; end: 1045e8493;  */

void FUN_1045e83d4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e0a0,0x3a,&uStack_48,&lStack_40);
  puRam00000001138143a8 = puStack_38;
  lRam00000001138143a0 = lStack_40;
  puRam00000001138143b8 = puStack_28;
  puRam00000001138143b0 = puStack_30;
  puRam00000001138143c8 = puStack_18;
  puRam00000001138143c0 = puStack_20;
  return;
}



/* Entry: 1045e8494; end: 1045e85d3;  */

void FUN_1045e8494(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fc8 != -1) {
    _swift_once(0x113087fc8,FUN_1045e83d4);
  }
  uVar5 = uRam00000001138143c8;
  uVar4 = uRam00000001138143c0;
  uVar3 = uRam00000001138143b8;
  uVar2 = uRam00000001138143b0;
  uVar1 = uRam00000001138143a8;
  *param_1 = uRam00000001138143a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e85d4; end: 1045e8693;  */

void FUN_1045e85d4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dfc0,0xd4,&uStack_48,&lStack_40);
  puRam00000001138143d8 = puStack_38;
  lRam00000001138143d0 = lStack_40;
  puRam00000001138143e8 = puStack_28;
  puRam00000001138143e0 = puStack_30;
  puRam00000001138143f8 = puStack_18;
  puRam00000001138143f0 = puStack_20;
  return;
}



/* Entry: 1045e8694; end: 1045e87d3;  */

void FUN_1045e8694(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fd0 != -1) {
    _swift_once(0x113087fd0,FUN_1045e85d4);
  }
  uVar5 = uRam00000001138143f8;
  uVar4 = uRam00000001138143f0;
  uVar3 = uRam00000001138143e8;
  uVar2 = uRam00000001138143e0;
  uVar1 = uRam00000001138143d8;
  *param_1 = uRam00000001138143d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e87d4; end: 1045e8803;  */

void FUN_1045e87d4(void)

{
  __sSS6appendyySSF(0x6e6f69746964452e,0xef746c7561666544);
  uRam0000000113814400 = 0xd00000000000001c;
  uRam0000000113814408 = 0x800000010f2085a0;
  return;
}



/* Entry: 1045e8804; end: 1045e8843;  */

undefined8 FUN_1045e8804(void)

{
  if (lRam0000000113087fd8 != -1) {
    _swift_once(0x113087fd8,FUN_1045e87d4);
  }
  return 0x113814400;
}



/* Entry: 1045e8844; end: 1045e8863;  */

undefined1  [16] FUN_1045e8844(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087fd8 != -1) {
    _swift_once(0x113087fd8,FUN_1045e87d4);
  }
  auVar1._8_8_ = uRam0000000113814408;
  auVar1._0_8_ = uRam0000000113814400;
  _swift_bridgeObjectRetain(uRam0000000113814408);
  return auVar1;
}



/* Entry: 1045e8864; end: 1045e8923;  */

void FUN_1045e8864(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1dfa0,0x12,&uStack_48,&lStack_40);
  puRam0000000113814418 = puStack_38;
  lRam0000000113814410 = lStack_40;
  puRam0000000113814428 = puStack_28;
  puRam0000000113814420 = puStack_30;
  puRam0000000113814438 = puStack_18;
  puRam0000000113814430 = puStack_20;
  return;
}



/* Entry: 1045e8924; end: 1045e89c3;  */

void FUN_1045e8924(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fe0 != -1) {
    _swift_once(0x113087fe0,FUN_1045e8864);
  }
  uVar5 = uRam0000000113814438;
  uVar4 = uRam0000000113814430;
  uVar3 = uRam0000000113814428;
  uVar2 = uRam0000000113814420;
  uVar1 = uRam0000000113814418;
  *param_1 = uRam0000000113814410;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e89c4; end: 1045e8a97;  */

/* WARNING: Removing unreachable block (ram,0x0001045e8a94) */

void FUN_1045e89c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 2) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_104603c94();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_11078cd58,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045e8a98; end: 1045e8b53;  */

void FUN_1045e8a98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = param_1;
  if (unaff_x20[4] != 0) {
    uVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[4],2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)(unaff_x20 + 2) != '\f') {
      pcVar2 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)(unaff_x20 + 2);
      FUN_104603c94();
      (*pcVar2)(&cStack_41,3,&UNK_11078cd58,uVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045e8b54; end: 1045e8b57;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045e8b54(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*(char *)(param_1 + 2) == '\f') {
    if ((char)param_2[2] != '\f') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)(param_1 + 2) != (char)param_2[2]) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar16 = param_2[4];
  if (lVar19 == 0) {
    if (lVar16 == 0) {
LAB_1045f4bec:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar22 >> 0x3e < 3 || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  else if (lVar16 != 0) {
    uVar22 = param_1[3];
    if (((uVar22 == param_2[3]) && (lVar19 == lVar16)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[3],lVar16,0), (uVar22 & 1) != 0)) goto LAB_1045f4bec;
  }
  return (byte *)0x0;
}



/* Entry: 1045e8b58; end: 1045e8b93;  */

void FUN_1045e8b58(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001045bf664(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e8b94; end: 1045e8bcf;  */

void FUN_1045e8b94(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0xc;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1045e8bd0; end: 1045e8bff;  */

undefined1  [16] FUN_1045e8bd0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045e8c00; end: 1045e8c33;  */

void FUN_1045e8c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045e8c34; end: 1045e8c47;  */

undefined8 FUN_1045e8c34(void)

{
  return 0x1045e8c44;
}



/* Entry: 1045e8c48; end: 1045e8c6f;  */

void FUN_1045e8c48(void)

{
  FUN_1045e89c4();
  return;
}



/* Entry: 1045e8c70; end: 1045e8d0f;  */

void FUN_1045e8c70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087fe0 != -1) {
    _swift_once(0x113087fe0,FUN_1045e8864);
  }
  uVar5 = uRam0000000113814438;
  uVar4 = uRam0000000113814430;
  uVar3 = uRam0000000113814428;
  uVar2 = uRam0000000113814420;
  uVar1 = uRam0000000113814418;
  *param_1 = uRam0000000113814410;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e8d10; end: 1045e8d4b;  */

void FUN_1045e8d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089368;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089368,&UNK_10dd1d878);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045e8d4c; end: 1045e8e1f;  */

void FUN_1045e8d4c(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  uStack_30 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  func_0x0001045bf664(auStack_98);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e8e20; end: 1045e8e67;  */

uint FUN_1045e8e20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1045f4b64(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045e8e68; end: 1045e8e97;  */

void FUN_1045e8e68(void)

{
  __sSS6appendyySSF(0x657275746165462e,0xef74726f70707553);
  uRam0000000113814440 = 0xd00000000000001c;
  uRam0000000113814448 = 0x800000010f2085a0;
  return;
}



/* Entry: 1045e8e98; end: 1045e8eff;  */

void FUN_1045e8e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  __sSS6appendyySSF(param_2,param_3);
  *param_4 = 0xd00000000000001c;
  *param_5 = 0x800000010f2085a0;
  return;
}



/* Entry: 1045e8f00; end: 1045e8f3f;  */

undefined8 FUN_1045e8f00(void)

{
  if (lRam0000000113087fe8 != -1) {
    _swift_once(0x113087fe8,FUN_1045e8e68);
  }
  return 0x113814440;
}



/* Entry: 1045e8f40; end: 1045e8f5f;  */

undefined1  [16] FUN_1045e8f40(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087fe8 != -1) {
    _swift_once(0x113087fe8,FUN_1045e8e68);
  }
  auVar1._8_8_ = uRam0000000113814448;
  auVar1._0_8_ = uRam0000000113814440;
  _swift_bridgeObjectRetain(uRam0000000113814448);
  return auVar1;
}



/* Entry: 1045e8f60; end: 1045e901f;  */

void FUN_1045e8f60(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1df50,0x4f,&uStack_48,&lStack_40);
  puRam0000000113814458 = puStack_38;
  lRam0000000113814450 = lStack_40;
  puRam0000000113814468 = puStack_28;
  puRam0000000113814460 = puStack_30;
  puRam0000000113814478 = puStack_18;
  puRam0000000113814470 = puStack_20;
  return;
}



/* Entry: 1045e9020; end: 1045e90bf;  */

void FUN_1045e9020(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ff0 != -1) {
    _swift_once(0x113087ff0,FUN_1045e8f60);
  }
  uVar5 = uRam0000000113814478;
  uVar4 = uRam0000000113814470;
  uVar3 = uRam0000000113814468;
  uVar2 = uRam0000000113814460;
  uVar1 = uRam0000000113814458;
  *param_1 = uRam0000000113814450;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e90c0; end: 1045e91db;  */

/* WARNING: Removing unreachable block (ram,0x0001045e91d8) */

void FUN_1045e90c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_104603c94();
          lVar2 = unaff_x20 + 0x10;
        }
        else {
          if (lVar1 != 2) goto LAB_1045e914c;
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_104603c94();
          lVar2 = unaff_x20 + 0x11;
        }
LAB_1045e9134:
        (*pcVar4)(lVar2,&UNK_11078cd58,lVar1,param_2,param_3);
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
      }
      else if (lVar1 == 4) {
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_104603c94();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_1045e9134;
      }
LAB_1045e914c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045e91dc; end: 1045e92db;  */

void FUN_1045e91dc(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(unaff_x20 + 2);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eac8 + (ulong)bVar1 * 8));
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x11);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eac8 + (ulong)bVar1 * 8));
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 5);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd1eac8 + (ulong)bVar1 * 8));
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045e92bc;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_1045e92bc:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045e92dc; end: 1045e9423;  */

void FUN_1045e92dc(char *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  
  pcVar1 = param_1;
  if (*(char *)(unaff_x20 + 2) != '\f') {
    pcVar3 = *(code **)(param_3 + 0x80);
    pcVar2 = param_1;
    cStack_43 = *(char *)(unaff_x20 + 2);
    FUN_104603c94();
    pcVar1 = &cStack_43;
    (*pcVar3)(pcVar1,1,&UNK_11078cd58,pcVar2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    pcVar2 = pcVar1;
    if (*(char *)((long)unaff_x20 + 0x11) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      cStack_42 = *(char *)((long)unaff_x20 + 0x11);
      FUN_104603c94();
      pcVar2 = &cStack_42;
      (*pcVar3)(pcVar2,2,&UNK_11078cd58,pcVar1,param_2,param_3);
    }
    if (unaff_x20[4] != 0) {
      pcVar2 = (char *)unaff_x20[3];
      (**(code **)(param_3 + 0x70))(pcVar2,unaff_x20[4],3,param_2,param_3);
    }
    if (*(char *)(unaff_x20 + 5) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)(unaff_x20 + 5);
      FUN_104603c94();
      (*pcVar3)(&cStack_41,4,&UNK_11078cd58,pcVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045e9424; end: 1045e9427;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045e9424(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*(char *)(param_1 + 2) == '\f') {
    if ((char)param_2[2] != '\f') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)(param_1 + 2) != (char)param_2[2]) {
    return (byte *)0x0;
  }
  if (*(char *)((long)param_1 + 0x11) == '\f') {
    if (*(char *)((long)param_2 + 0x11) != '\f') {
      return (byte *)0x0;
    }
  }
  else if (*(char *)((long)param_1 + 0x11) != *(char *)((long)param_2 + 0x11)) {
    return (byte *)0x0;
  }
  lVar19 = param_1[4];
  lVar16 = param_2[4];
  if (lVar19 == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar22 = param_1[3];
    if (((uVar22 != param_2[3]) || (lVar19 != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,lVar19,param_2[3],lVar16,0), (uVar22 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  if (*(char *)(param_1 + 5) == '\f') {
    if ((char)param_2[5] == '\f') {
LAB_1045f4ce8:
      pbVar10 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      lVar16 = *param_2;
      uVar22 = param_2[1];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar22 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar22 >> 0x3e < 3 || ((uVar21 = 0, lVar16 != 0 || (uVar22 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar22 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar22);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar22;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar16);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar19;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar19;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar22 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  else if (*(char *)(param_1 + 5) == (char)param_2[5]) goto LAB_1045f4ce8;
  return (byte *)0x0;
}



/* Entry: 1045e9428; end: 1045e94b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045e9478) */

void FUN_1045e9428(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045e91dc(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e94b8; end: 1045e94fb;  */

void FUN_1045e94b8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xc0c;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xc;
  return;
}



/* Entry: 1045e94fc; end: 1045e952b;  */

undefined1  [16] FUN_1045e94fc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045e952c; end: 1045e955f;  */

void FUN_1045e952c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045e9560; end: 1045e9573;  */

undefined8 FUN_1045e9560(void)

{
  return 0x1045e9570;
}



/* Entry: 1045e9574; end: 1045e959b;  */

void FUN_1045e9574(void)

{
  FUN_1045e90c0();
  return;
}



/* Entry: 1045e959c; end: 1045e963b;  */

void FUN_1045e959c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ff0 != -1) {
    _swift_once(0x113087ff0,FUN_1045e8f60);
  }
  uVar5 = uRam0000000113814478;
  uVar4 = uRam0000000113814470;
  uVar3 = uRam0000000113814468;
  uVar2 = uRam0000000113814460;
  uVar1 = uRam0000000113814458;
  *param_1 = uRam0000000113814450;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e963c; end: 1045e9677;  */

void FUN_1045e963c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089360;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089360,&UNK_10dd1d870);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045e9678; end: 1045e9843;  */

/* WARNING: Removing unreachable block (ram,0x0001045e96dc) */

void FUN_1045e9678(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = (undefined1)unaff_x20[3];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_1045e91dc(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e9844; end: 1045e988b;  */

uint FUN_1045e9844(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  func_0x0001045f4c0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045e988c; end: 1045e98b3;  */

undefined * FUN_1045e988c(void)

{
  return &UNK_11078b238;
}



/* Entry: 1045e98b4; end: 1045e9973;  */

void FUN_1045e98b4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1df20,0x23,&uStack_48,&lStack_40);
  puRam0000000113814488 = puStack_38;
  lRam0000000113814480 = lStack_40;
  puRam0000000113814498 = puStack_28;
  puRam0000000113814490 = puStack_30;
  puRam00000001138144a8 = puStack_18;
  puRam00000001138144a0 = puStack_20;
  return;
}



/* Entry: 1045e9974; end: 1045e9a13;  */

void FUN_1045e9974(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ff8 != -1) {
    _swift_once(0x113087ff8,FUN_1045e98b4);
  }
  uVar5 = uRam00000001138144a8;
  uVar4 = uRam00000001138144a0;
  uVar3 = uRam0000000113814498;
  uVar2 = uRam0000000113814490;
  uVar1 = uRam0000000113814488;
  *param_1 = uRam0000000113814480;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e9a14; end: 1045e9b43;  */

/* WARNING: Removing unreachable block (ram,0x0001045e9b40) */

void FUN_1045e9a14(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 999) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045f9190();
LAB_1045e9aa0:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
          goto LAB_1045e9aa0;
        }
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          func_0x000103a17e2c();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x18,&UNK_11078dd70,lVar2,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045e9b44; end: 1045e9c13;  */

void FUN_1045e9b44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_1045e9c14();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar3)(lVar2,999,&UNK_11078e0d8,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045e9c14; end: 1045e9c97;  */

void FUN_1045e9c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045fa968();
    (*pcVar1)(&uStack_60,1,&UNK_11078e1f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045e9c98; end: 1045e9c9b;  */

uint FUN_1045e9c98(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[5];
  uVar3 = param_1[4];
  uVar9 = param_1[7];
  uVar7 = param_1[6];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  uVar10 = param_2[7];
  lVar8 = param_2[6];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  lStack_90 = lVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar7 == 0) {
    if (lVar8 != 0) goto LAB_1045f7d48;
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar3,uVar5,0,uVar9);
LAB_1045f7e04:
    uVar3 = *param_1;
    func_0x0001045bbb80(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      func_0x000100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        FUN_104558fb4(uVar3,param_2[3]);
        uVar1 = (uint)uVar3;
        goto LAB_1045f7e38;
      }
    }
  }
  else if (lVar8 == 0) {
LAB_1045f7d48:
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar9);
    func_0x00010458a4f4(uVar4,uVar6,lVar8,uVar10);
  }
  else {
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    uVar2 = uVar3;
    FUN_1045f8100(uVar3,uVar5,uVar7,uVar9,uVar4,uVar6,lVar8,uVar10);
    func_0x00010458a4f4(uVar4,uVar6,lVar8,uVar10);
    func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar9);
    if ((uVar2 & 1) != 0) goto LAB_1045f7e04;
  }
  uVar1 = 0;
LAB_1045f7e38:
  return uVar1 & 1;
}



/* Entry: 1045e9c9c; end: 1045e9cd7;  */

void FUN_1045e9c9c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1045bfb8c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e9cd8; end: 1045e9d23;  */

void FUN_1045e9cd8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 1045e9d24; end: 1045e9dc3;  */

uint FUN_1045e9d24(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  FUN_104559288();
  if ((uVar4 & 1) == 0) {
LAB_1045e9dac:
    uVar3 = 0;
  }
  else {
    if (uVar2 != 0) {
      func_0x00010006c00c(uVar1,uVar5);
      uVar4 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar1,uVar5,uVar2,uVar7);
      if ((uVar4 & 1) == 0) goto LAB_1045e9dac;
    }
    func_0x0001045be170(uVar6);
    uVar5 = uVar6;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 1045e9dc4; end: 1045e9df3;  */

undefined1  [16] FUN_1045e9dc4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045e9df4; end: 1045e9e27;  */

void FUN_1045e9df4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045e9e28; end: 1045e9e3b;  */

undefined1  [16] FUN_1045e9e28(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045e9e38;
  return auVar1;
}



/* Entry: 1045e9e3c; end: 1045e9e4f;  */

void FUN_1045e9e3c(void)

{
  FUN_1045e9a14();
  return;
}



/* Entry: 1045e9e50; end: 1045e9e87;  */

void FUN_1045e9e50(void)

{
  FUN_1045e9b44();
  return;
}



/* Entry: 1045e9e88; end: 1045e9f27;  */

void FUN_1045e9e88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087ff8 != -1) {
    _swift_once(0x113087ff8,FUN_1045e98b4);
  }
  uVar5 = uRam00000001138144a8;
  uVar4 = uRam00000001138144a0;
  uVar3 = uRam0000000113814498;
  uVar2 = uRam0000000113814490;
  uVar1 = uRam0000000113814488;
  *param_1 = uRam0000000113814480;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e9f28; end: 1045e9f63;  */

void FUN_1045e9f28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089358;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089358,&UNK_10dd1d868);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045e9f64; end: 1045ea037;  */

void FUN_1045e9f64(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_28 = unaff_x20[7];
  uStack_30 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  FUN_1045bfb8c(auStack_a8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045ea038; end: 1045ea07f;  */

uint FUN_1045ea038(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x0001045f7c60(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045ea080; end: 1045ea0a7;  */

undefined * FUN_1045ea080(void)

{
  return &UNK_11078b248;
}



/* Entry: 1045ea0a8; end: 1045ea167;  */

void FUN_1045ea0a8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1deb0,0x69,&uStack_48,&lStack_40);
  puRam00000001138144b8 = puStack_38;
  lRam00000001138144b0 = lStack_40;
  puRam00000001138144c8 = puStack_28;
  puRam00000001138144c0 = puStack_30;
  puRam00000001138144d8 = puStack_18;
  puRam00000001138144d0 = puStack_20;
  return;
}



/* Entry: 1045ea168; end: 1045ea207;  */

void FUN_1045ea168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088000 != -1) {
    _swift_once(0x113088000,FUN_1045ea0a8);
  }
  uVar5 = uRam00000001138144d8;
  uVar4 = uRam00000001138144d0;
  uVar3 = uRam00000001138144c8;
  uVar2 = uRam00000001138144c0;
  uVar1 = uRam00000001138144b8;
  *param_1 = uRam00000001138144b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ea208; end: 1045ea38f;  */

/* WARNING: Removing unreachable block (ram,0x0001045ea330) */
/* WARNING: Removing unreachable block (ram,0x0001045ea38c) */

void FUN_1045ea208(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 6) {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 3) {
LAB_1045ea340:
            if (lVar1 - 1000U < 0x1ffffc18) {
              lVar2 = lVar1;
              FUN_1045f9ef4();
              (**(code **)(param_3 + 0x1d0))
                        (unaff_x20 + 0x18,&UNK_11078ddf8,lVar2,lVar1,param_2,param_3);
            }
            goto LAB_1045ea290;
          }
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x21;
        }
LAB_1045ea280:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 6) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x22;
          goto LAB_1045ea280;
        }
        if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
        }
        else {
          if (lVar1 != 999) goto LAB_1045ea340;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f9190();
        }
        (*pcVar4)();
      }
LAB_1045ea290:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045ea390; end: 1045ea557;  */

void FUN_1045ea390(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x21);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x22);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar6 = unaff_x20[7];
  if (lVar6 != 0) {
    lVar5 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar7 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(7);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00010006c00c(lVar5,lVar1);
    _swift_bridgeObjectRetain(lVar6);
    FUN_1045ee434(&uStack_a0,lVar5,lVar1,lVar6,lVar7);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    func_0x00010458a4f4(lVar5,lVar1,lVar6,lVar7);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460e87c(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_1045ae514(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar6 = unaff_x20[1];
  uVar3 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045ea54c;
    }
    lVar5 = (long)(int)lVar6;
    lVar6 = lVar6 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_1045ea54c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045ea558; end: 1045ea6a3;  */

void FUN_1045ea558(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 4) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)((long)unaff_x20 + 0x21) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x21) & 1,3,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x22) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x22) & 1,6,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_1045ec6cc();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar3)(lVar2,999,&UNK_11078e0d8,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045ea6a4; end: 1045ea733;  */

uint FUN_1045ea6a4(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x21);
  if (*(byte *)((long)param_1 + 0x21) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x21) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x22);
  if (*(byte *)((long)param_1 + 0x22) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x22) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_1045f7fdc;
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,0,uVar10);
LAB_1045f8090:
    uVar4 = *param_1;
    func_0x0001045bbb80(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      func_0x000100e25fcc(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_104558fb4(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_1045f80dc;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_1045f7fdc:
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x0001045f8fa8(&uStack_80,auStack_c0,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_a0,auStack_c0,0x113087928,&UNK_10dd19bf8);
    uVar3 = uVar4;
    FUN_1045f8100(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar5,uVar7,lVar9,uVar11);
    func_0x00010458a4f4(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_1045f8090;
  }
  uVar2 = 0;
LAB_1045f80dc:
  return uVar2 & 1;
}



/* Entry: 1045ea734; end: 1045ea747;  */

void FUN_1045ea734(void)

{
  FUN_1045ea208();
  return;
}



/* Entry: 1045ea748; end: 1045ea787;  */

void FUN_1045ea748(void)

{
  FUN_1045ea558();
  return;
}



/* Entry: 1045ea788; end: 1045ea827;  */

void FUN_1045ea788(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088000 != -1) {
    _swift_once(0x113088000,FUN_1045ea0a8);
  }
  uVar5 = uRam00000001138144d8;
  uVar4 = uRam00000001138144d0;
  uVar3 = uRam00000001138144c8;
  uVar2 = uRam00000001138144c0;
  uVar1 = uRam00000001138144b8;
  *param_1 = uRam00000001138144b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ea828; end: 1045ea83b;  */

void FUN_1045ea828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089350;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089350,&UNK_10dd1d860);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045ea83c; end: 1045eaa1f;  */

/* WARNING: Removing unreachable block (ram,0x0001045ea8a8) */

void FUN_1045ea83c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_1045ea390(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045eaa20; end: 1045eaa77;  */

uint FUN_1045eaa20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x0001045f7e5c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045eaa78; end: 1045eaa9f;  */

undefined * FUN_1045eaa78(void)

{
  return &UNK_11078b258;
}



/* Entry: 1045eaaa0; end: 1045eab5f;  */

void FUN_1045eaaa0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1de60,0x4e,&uStack_48,&lStack_40);
  puRam00000001138144e8 = puStack_38;
  lRam00000001138144e0 = lStack_40;
  puRam00000001138144f8 = puStack_28;
  puRam00000001138144f0 = puStack_30;
  puRam0000000113814508 = puStack_18;
  puRam0000000113814500 = puStack_20;
  return;
}



/* Entry: 1045eab60; end: 1045eabff;  */

void FUN_1045eab60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088008 != -1) {
    _swift_once(0x113088008,FUN_1045eaaa0);
  }
  uVar5 = uRam0000000113814508;
  uVar4 = uRam0000000113814500;
  uVar3 = uRam00000001138144f8;
  uVar2 = uRam00000001138144f0;
  uVar1 = uRam00000001138144e8;
  *param_1 = uRam00000001138144e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045eac00; end: 1045ead9b;  */

/* WARNING: Removing unreachable block (ram,0x0001045ead98) */
/* WARNING: Removing unreachable block (ram,0x0001045ead48) */

void FUN_1045eac00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
          goto LAB_1045ead38;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045fa968();
          goto LAB_1045eac88;
        }
LAB_1045ead4c:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_1045f9f58();
          (**(code **)(param_3 + 0x1d0))
                    (unaff_x20 + 0x18,&UNK_11078de90,lVar2,lVar1,param_2,param_3);
        }
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x140);
        lVar1 = unaff_x20 + 0x48;
LAB_1045ead38:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001045fbf44();
        }
        else {
          if (lVar1 != 999) goto LAB_1045ead4c;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f9190();
        }
LAB_1045eac88:
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045ead9c; end: 1045eb01b;  */

void FUN_1045ead9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  bVar3 = *(byte *)(unaff_x20 + 4);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[7];
  if (lVar8 != 0) {
    lVar7 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar9 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(2);
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_f0 = param_1[8];
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    func_0x00010006c00c(lVar7,lVar1);
    _swift_bridgeObjectRetain(lVar8);
    FUN_1045ee434(&uStack_130,lVar7,lVar1,lVar8,lVar9);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    func_0x00010458a4f4(lVar7,lVar1,lVar8,lVar9);
    param_1[5] = uStack_108;
    param_1[4] = uStack_110;
    param_1[7] = uStack_f8;
    param_1[6] = uStack_100;
    param_1[8] = uStack_f0;
    param_1[1] = uStack_128;
    *param_1 = uStack_130;
    param_1[3] = uStack_118;
    param_1[2] = uStack_120;
  }
  bVar3 = *(byte *)(unaff_x20 + 9);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[0xe];
  if (lVar8 != 1) {
    lVar7 = unaff_x20[10];
    lVar9 = unaff_x20[0xb];
    lVar1 = unaff_x20[0xc];
    lVar2 = unaff_x20[0xd];
    lVar5 = unaff_x20[0xf];
    uStack_88 = (undefined1)lVar1;
    uStack_87 = (undefined1)((ulong)lVar1 >> 8);
    lStack_98 = lVar7;
    lStack_90 = lVar9;
    lStack_80 = lVar2;
    lStack_78 = lVar8;
    uStack_70 = (char)lVar5;
    __ss6HasherV8_combineyySuF(4);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_a0 = param_1[8];
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    func_0x00010006c00c(lVar7,lVar9);
    _swift_bridgeObjectRetain(lVar8);
    FUN_1045e91dc(&uStack_e0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_10458a570(lVar7,lVar9,lVar1,lVar2,lVar8,(char)lVar5);
    param_1[5] = uStack_b8;
    param_1[4] = uStack_c0;
    param_1[7] = uStack_a8;
    param_1[6] = uStack_b0;
    param_1[8] = uStack_a0;
    param_1[1] = uStack_d8;
    *param_1 = uStack_e0;
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460e87c(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_1045ae514(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar8 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar6 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045eb008;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_1045eb008:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045eb01c; end: 1045eb153;  */

void FUN_1045eb01c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 4) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    FUN_1045eb154();
    if (*(byte *)(unaff_x20 + 9) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 9) & 1,3,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_1045eb1d8();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f9190();
      (*pcVar3)(lVar2,999,&UNK_11078e0d8,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045eb154; end: 1045eb1d7;  */

void FUN_1045eb154(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045fa968();
    (*pcVar1)(&uStack_60,2,&UNK_11078e1f8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045eb1d8; end: 1045eb263;  */

void FUN_1045eb1d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x70);
  if (lStack_50 != 1) {
    uStack_48 = *(undefined1 *)(param_1 + 0x78);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001045fbf44();
    (*pcVar1)(&uStack_70,4,&UNK_11078dce0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045eb264; end: 1045eb267;  */

uint FUN_1045eb264(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar11 = param_1[6];
  uVar8 = param_1[5];
  uVar17 = param_1[8];
  uVar14 = param_1[7];
  uVar12 = param_2[6];
  uVar9 = param_2[5];
  uVar10 = param_2[8];
  lVar15 = param_2[7];
  uStack_110 = uVar9;
  uStack_108 = uVar12;
  lStack_100 = lVar15;
  uStack_f8 = uVar10;
  uStack_f0 = uVar8;
  uStack_e8 = uVar11;
  uStack_e0 = uVar14;
  uStack_d8 = uVar17;
  if (uVar14 == 0) {
    if (lVar15 != 0) goto LAB_1045f66c8;
    func_0x0001045f8fa8(&uStack_f0,&uStack_98,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_110,&uStack_98,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar8,uVar11,0,uVar17);
LAB_1045f67a0:
    bVar1 = *(byte *)(param_2 + 9);
    if ((byte)param_1[9] == 2) {
      if (bVar1 != 2) goto LAB_1045f6728;
    }
    else {
      uVar5 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[9] ^ bVar1) & 1) != 0)) goto LAB_1045f672c;
    }
    uVar11 = param_1[0xb];
    uVar8 = param_1[10];
    uVar14 = param_1[0xc];
    uStack_128 = (undefined1)param_1[0xd];
    uStack_11f = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
    uStack_118 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
    uVar4 = uStack_118;
    uStack_127 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
    uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
    uVar13 = param_2[0xb];
    uVar10 = param_2[10];
    uVar16 = param_2[0xc];
    uStack_158 = (undefined1)param_2[0xd];
    uStack_14f = (undefined7)*(undefined8 *)((long)param_2 + 0x71);
    uStack_148 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x71) >> 0x38);
    uVar3 = uStack_148;
    uStack_157 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
    uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    uVar12 = CONCAT71(uStack_127,uStack_128);
    lVar2 = CONCAT71(uStack_11f,uStack_120);
    uVar9 = CONCAT71(uStack_157,uStack_158);
    lVar15 = CONCAT71(uStack_14f,uStack_150);
    uStack_170 = uVar10;
    uStack_168 = uVar13;
    uStack_160 = uVar16;
    uStack_140 = uVar8;
    uStack_138 = uVar11;
    uStack_130 = uVar14;
    if (lVar2 == 1) {
      if (lVar15 != 1) {
LAB_1045f6890:
        func_0x0001045f8fa8(&uStack_140,&uStack_98,0x113087c08,&UNK_10dd19c98);
        func_0x0001045f8fa8(&uStack_170,&uStack_98,0x113087c08,&UNK_10dd19c98);
        FUN_10458a570(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
        FUN_10458a570(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
        goto LAB_1045f6728;
      }
      func_0x0001045f8fa8(&uStack_140,&uStack_98,0x113087c08,&UNK_10dd19c98);
      func_0x0001045f8fa8(&uStack_170,&uStack_98,0x113087c08,&UNK_10dd19c98);
      FUN_10458a570(uVar8,uVar11,uVar14,uVar12,1,uVar4);
    }
    else {
      if (lVar15 == 1) goto LAB_1045f6890;
      uStack_88 = (undefined1)uVar16;
      uStack_87 = (undefined1)((ulong)uVar16 >> 8);
      uStack_70 = uStack_148;
      uStack_b8 = (undefined1)uVar14;
      uStack_b7 = (undefined1)(uVar14 >> 8);
      uStack_a0 = uStack_118;
      uStack_c8 = uVar8;
      uStack_c0 = uVar11;
      uStack_b0 = uVar12;
      lStack_a8 = lVar2;
      uStack_98 = uVar10;
      uStack_90 = uVar13;
      uStack_80 = uVar9;
      lStack_78 = lVar15;
      func_0x0001045f8fa8(&uStack_140,auStack_1a0,0x113087c08,&UNK_10dd19c98);
      func_0x0001045f8fa8(&uStack_170,auStack_1a0,0x113087c08,&UNK_10dd19c98);
      puVar7 = &uStack_c8;
      func_0x0001045f4c0c(puVar7,&uStack_98);
      FUN_10458a570(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
      FUN_10458a570(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
      if (((ulong)puVar7 & 1) == 0) goto LAB_1045f6728;
    }
    uVar8 = *param_1;
    func_0x0001045bbb80(uVar8,*param_2);
    if ((uVar8 & 1) != 0) {
      uVar8 = param_1[1];
      func_0x000100e25fcc(uVar8,param_1[2],param_2[1],param_2[2]);
      if ((uVar8 & 1) != 0) {
        uVar8 = param_1[3];
        FUN_104558fb4(uVar8,param_2[3]);
        uVar5 = (uint)uVar8;
        goto LAB_1045f672c;
      }
    }
  }
  else if (lVar15 == 0) {
LAB_1045f66c8:
    func_0x0001045f8fa8(&uStack_f0,&uStack_98,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_110,&uStack_98,0x113087928,&UNK_10dd19bf8);
    func_0x00010458a4f4(uVar8,uVar11,uVar14,uVar17);
    func_0x00010458a4f4(uVar9,uVar12,lVar15,uVar10);
  }
  else {
    func_0x0001045f8fa8(&uStack_f0,&uStack_98,0x113087928,&UNK_10dd19bf8);
    func_0x0001045f8fa8(&uStack_110,&uStack_98,0x113087928,&UNK_10dd19bf8);
    uVar6 = uVar8;
    FUN_1045f8100(uVar8,uVar11,uVar14,uVar17,uVar9,uVar12,lVar15,uVar10);
    func_0x00010458a4f4(uVar9,uVar12,lVar15,uVar10);
    func_0x00010458a4f4(uVar8,uVar11,uVar14,uVar17);
    if ((uVar6 & 1) != 0) goto LAB_1045f67a0;
  }
LAB_1045f6728:
  uVar5 = 0;
LAB_1045f672c:
  return uVar5 & 1;
}



/* Entry: 1045eb268; end: 1045eb2f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045eb2b8) */

void FUN_1045eb268(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045ead9c(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045eb2f8; end: 1045eb363;  */

void FUN_1045eb2f8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(param_1 + 4) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 1045eb364; end: 1045eb403;  */

uint FUN_1045eb364(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  FUN_104559288();
  if ((uVar5 & 1) == 0) {
LAB_1045eb3ec:
    uVar4 = 0;
  }
  else {
    if (uVar1 != 0) {
      func_0x00010006c00c(uVar6,uVar2);
      uVar5 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar6,uVar2,uVar1,uVar3);
      if ((uVar5 & 1) == 0) goto LAB_1045eb3ec;
    }
    func_0x0001045be170(uVar7);
    uVar6 = uVar7;
    FUN_10456cde8();
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = (uint)uVar6 & 1;
  }
  return uVar4;
}



/* Entry: 1045eb404; end: 1045eb433;  */

undefined1  [16] FUN_1045eb404(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045eb434; end: 1045eb467;  */

void FUN_1045eb434(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045eb468; end: 1045eb47b;  */

undefined1  [16] FUN_1045eb468(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045eb478;
  return auVar1;
}



/* Entry: 1045eb47c; end: 1045eb48f;  */

void FUN_1045eb47c(void)

{
  FUN_1045eac00();
  return;
}



/* Entry: 1045eb490; end: 1045eb4df;  */

void FUN_1045eb490(void)

{
  FUN_1045eb01c();
  return;
}



/* Entry: 1045eb4e0; end: 1045eb57f;  */

void FUN_1045eb4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113088008 != -1) {
    _swift_once(0x113088008,FUN_1045eaaa0);
  }
  uVar5 = uRam0000000113814508;
  uVar4 = uRam0000000113814500;
  uVar3 = uRam00000001138144f8;
  uVar2 = uRam00000001138144f0;
  uVar1 = uRam00000001138144e8;
  *param_1 = uRam00000001138144e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045eb580; end: 1045eb5bb;  */

void FUN_1045eb580(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089348;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089348,&UNK_10dd1d858);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045eb5bc; end: 1045eb7d3;  */

/* WARNING: Removing unreachable block (ram,0x0001045eb638) */

void FUN_1045eb5bc(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_50 = unaff_x20[0xc];
  uStack_48 = (undefined1)unaff_x20[0xd];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_1045ead9c(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}


