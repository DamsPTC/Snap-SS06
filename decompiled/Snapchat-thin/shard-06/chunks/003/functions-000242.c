/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047ec794; end: 1047ec7f7; -[SCAdMediaInstantPage matchProduct:collection:shop:] */

void FUN_1047ec794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1047ec630(0x1047ee210,auStack_40,FUN_1047ee234,auStack_60,FUN_1047ee23c,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 1047ec7f8; end: 1047ec8bf;  */

void FUN_1047ec7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar1 = 0;
  FUN_1047f42fc(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,uVar1);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_4,param_5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  (**(code **)(param_9 + 0x10))(param_9,param_1,param_3,param_4,param_6,param_8);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1047ec8c0; end: 1047ec947;  */

void FUN_1047ec8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1047ea798(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1047ec948; end: 1047ec97b;  */

void FUN_1047ec948(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1047ec97c; end: 1047eca47; -[SCAdMediaInstantPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ec97c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fee8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fef0));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11308fef8),
                      ((undefined8 *)(param_1 + _DAT_11308fef8))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ff00 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ff08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ff10));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11308ff18),
                      ((undefined8 *)(param_1 + _DAT_11308ff18))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ff20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ff28 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ff30));
  return;
}



/* Entry: 1047eca48; end: 1047edccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ** FUN_1047eca48(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined **ppuVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long **pplVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 *puVar39;
  long lVar40;
  undefined *puVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long *plStack_298;
  long *plStack_290;
  long lStack_288;
  long lStack_280;
  undefined1 auStack_278 [192];
  undefined *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar28 = *param_1;
  lVar8 = param_1[1];
  pbVar1 = (byte *)(param_1 + 2);
  bVar14 = *pbVar1;
  bVar15 = *(byte *)((long)param_1 + 0x11);
  bVar16 = *(byte *)((long)param_1 + 0x12);
  bVar17 = *(byte *)((long)param_1 + 0x13);
  bVar18 = *(byte *)((long)param_1 + 0x14);
  lVar40 = *(long *)pbVar1;
  lVar32 = *(long *)pbVar1;
  bVar19 = *(byte *)(param_1 + 3);
  bVar20 = *(byte *)((long)param_1 + 0x19);
  bVar21 = *(byte *)((long)param_1 + 0x1a);
  bVar22 = *(byte *)((long)param_1 + 0x1b);
  bVar23 = *(byte *)((long)param_1 + 0x3c);
  bVar25 = bVar23 >> 6;
  bVar24 = *(byte *)((long)param_1 + 0x1c);
  if (bVar25 == 0) {
    lVar32 = param_1[4];
    lVar27 = param_1[5];
    lVar38 = param_1[6];
    bVar14 = *(byte *)((long)param_1 + 0x3b);
    bVar15 = *(byte *)((long)param_1 + 0x3a);
    bVar16 = *(byte *)((long)param_1 + 0x39);
    bVar17 = *(byte *)(param_1 + 7);
    lVar29 = CONCAT35(*(undefined3 *)((long)param_1 + 0x1d),*(undefined5 *)(param_1 + 3));
    lVar42 = *(long *)(lVar40 + 0x10);
    if (lVar42 == 0) {
      _swift_bridgeObjectRetain(lVar8);
      func_0x00010006c00c(lVar29,lVar32);
      _swift_bridgeObjectRetain(lVar38);
      puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(lVar8);
      func_0x00010006c00c(lVar29,lVar32);
      puStack_1b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(lVar38);
      func_0x0001046c7448(0,lVar42,0);
      puVar41 = puStack_1b8;
      puVar39 = (undefined8 *)(lVar40 + 0x20);
      uVar30 = 0;
      FUN_1047f42fc(0);
      do {
        uStack_148 = puVar39[1];
        puStack_150 = (undefined *)*puVar39;
        uStack_138 = puVar39[3];
        uStack_140 = puVar39[2];
        uStack_128 = puVar39[5];
        uStack_130 = puVar39[4];
        uStack_118 = puVar39[7];
        uStack_120 = puVar39[6];
        uStack_108 = puVar39[9];
        uStack_110 = puVar39[8];
        uStack_f8 = puVar39[0xb];
        uStack_100 = puVar39[10];
        uStack_e8 = puVar39[0xd];
        uStack_f0 = puVar39[0xc];
        uStack_d8 = puVar39[0xf];
        uStack_e0 = puVar39[0xe];
        uStack_c8 = puVar39[0x11];
        uStack_d0 = puVar39[0x10];
        uStack_b8 = puVar39[0x13];
        uStack_c0 = puVar39[0x12];
        uStack_a8 = puVar39[0x15];
        uStack_b0 = puVar39[0x14];
        uStack_98 = puVar39[0x17];
        uStack_a0 = puVar39[0x16];
        _objc_allocWithZone(uVar30);
        func_0x00010470dc20(&puStack_150,auStack_278);
        ppuVar31 = &puStack_150;
        FUN_1047f2068();
        uVar7 = *(ulong *)(puVar41 + 0x10);
        puStack_1b8 = puVar41;
        if (*(ulong *)(puVar41 + 0x18) >> 1 <= uVar7) {
          func_0x0001046c7448(1 < *(ulong *)(puVar41 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_1b8 + 0x10) = uVar7 + 1;
        *(undefined ***)(puStack_1b8 + uVar7 * 8 + 0x20) = ppuVar31;
        puVar39 = puVar39 + 0x18;
        lVar42 = lVar42 + -1;
        puVar41 = puStack_1b8;
      } while (lVar42 != 0);
    }
    lVar42 = 0;
    FUN_1047eeb2c();
    lVar40 = lVar42;
    _objc_allocWithZone();
    *(byte *)(lVar40 + _DAT_11308ff78) = bVar17 & 1;
    *(byte *)(lVar40 + _DAT_11308ff80) = bVar16 & 1;
    *(byte *)(lVar40 + _DAT_11308ff88) = bVar15 & 1;
    *(byte *)(lVar40 + _DAT_11308ff90) = bVar14 & 1;
    *(byte *)(lVar40 + _DAT_11308ff98) = bVar23 & 1;
    plVar33 = &lStack_288;
    lStack_288 = lVar40;
    lStack_280 = lVar42;
    _objc_msgSendSuper2(plVar33,PTR_s_init_1125d9248);
    plVar34 = plVar33;
    FUN_1047ee048();
    plVar35 = plVar34;
    _objc_allocWithZone();
    *(undefined1 *)((long)plVar35 + _DAT_11308fee0) = 0;
    *(long *)((long)plVar35 + _DAT_11308fee8) = lVar28;
    ((long *)((long)plVar35 + _DAT_11308fee8))[1] = lVar8;
    *(undefined **)((long)plVar35 + _DAT_11308fef0) = puVar41;
    *(long *)((long)plVar35 + _DAT_11308fef8) = lVar29;
    ((long *)((long)plVar35 + _DAT_11308fef8))[1] = lVar32;
    *(long *)((long)plVar35 + _DAT_11308ff00) = lVar27;
    ((long *)((long)plVar35 + _DAT_11308ff00))[1] = lVar38;
    *(long **)((long)plVar35 + _DAT_11308ff08) = plVar33;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff10) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308ff18))[1] = 0xf000000000000000;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff18) = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff20) = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff28) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308ff28))[1] = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff30) = 0;
    func_0x00010006c00c(lVar29,lVar32);
    puVar41 = PTR_s_init_1125d9248;
    plStack_298 = plVar35;
    plStack_290 = plVar34;
    _objc_retain(plVar33);
    pplVar36 = &plStack_298;
    _objc_msgSendSuper2(pplVar36,puVar41);
    func_0x0001017b670c(param_1);
    _objc_release(plVar33);
  }
  else {
    if (bVar25 != 1) {
      lVar40 = 0;
      FUN_1047eeb2c();
      lVar32 = lVar40;
      _objc_allocWithZone();
      *(byte *)(lVar32 + _DAT_11308ff78) = bVar14 & 1;
      *(byte *)(lVar32 + _DAT_11308ff80) = bVar15 & 1;
      *(byte *)(lVar32 + _DAT_11308ff88) = bVar16 & 1;
      *(byte *)(lVar32 + _DAT_11308ff90) = bVar17 & 1;
      *(byte *)(lVar32 + _DAT_11308ff98) = bVar18 & 1;
      puVar41 = PTR_s_init_1125d9248;
      lStack_160 = lVar32;
      lStack_158 = lVar40;
      _swift_bridgeObjectRetain(lVar8);
      plVar33 = &lStack_160;
      _objc_msgSendSuper2(plVar33,puVar41);
      plVar34 = plVar33;
      FUN_1047ee048();
      plVar35 = plVar34;
      _objc_allocWithZone();
      puVar41 = PTR_s_init_1125d9248;
      *(undefined1 *)((long)plVar35 + _DAT_11308fee0) = 2;
      *(undefined8 *)((long)plVar35 + _DAT_11308fee8) = 0;
      ((undefined8 *)((long)plVar35 + _DAT_11308fee8))[1] = 0;
      *(undefined8 *)((long)plVar35 + _DAT_11308fef0) = 0;
      ((undefined8 *)((long)plVar35 + _DAT_11308fef8))[1] = 0xf000000000000000;
      *(undefined8 *)((long)plVar35 + _DAT_11308fef8) = 0;
      *(undefined8 *)((long)plVar35 + _DAT_11308ff00) = 0;
      ((undefined8 *)((long)plVar35 + _DAT_11308ff00))[1] = 0;
      *(undefined8 *)((long)plVar35 + _DAT_11308ff08) = 0;
      *(undefined8 *)((long)plVar35 + _DAT_11308ff10) = 0;
      ((undefined8 *)((long)plVar35 + _DAT_11308ff18))[1] = 0xf000000000000000;
      *(undefined8 *)((long)plVar35 + _DAT_11308ff18) = 0;
      *(undefined8 *)((long)plVar35 + _DAT_11308ff20) = 0;
      *(long *)((long)plVar35 + _DAT_11308ff28) = lVar28;
      ((long *)((long)plVar35 + _DAT_11308ff28))[1] = lVar8;
      *(long **)((long)plVar35 + _DAT_11308ff30) = plVar33;
      plStack_170 = plVar35;
      plStack_168 = plVar34;
      _objc_retain(plVar33);
      pplVar36 = &plStack_170;
      _objc_msgSendSuper2(pplVar36,puVar41);
      func_0x0001017b670c(param_1);
      _objc_release(plVar33);
      return pplVar36;
    }
    lVar40 = *(long *)(lVar28 + 0x10);
    if (lVar40 == 0) {
      func_0x00010006c00c(lVar8,lVar32);
      puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x00010006c00c(lVar8,lVar32);
      puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c7414(0,lVar40,0);
      puVar41 = puStack_150;
      lVar27 = 0;
      FUN_1047ea798();
      puVar39 = (undefined8 *)(lVar28 + 0x48);
      do {
        uVar30 = puVar39[-5];
        uVar9 = puVar39[-4];
        uVar3 = puVar39[-3];
        uVar10 = puVar39[-2];
        uVar4 = puVar39[-1];
        uVar11 = *puVar39;
        uVar5 = puVar39[1];
        uVar12 = puVar39[2];
        uVar6 = puVar39[3];
        uVar13 = puVar39[4];
        uVar37 = puVar39[5];
        uVar43 = puVar39[6];
        uVar44 = puVar39[7];
        uVar45 = puVar39[8];
        lVar28 = lVar27;
        _objc_allocWithZone();
        *(undefined8 *)(lVar28 + _DAT_11308fe90) = uVar30;
        puVar2 = (undefined8 *)(lVar28 + _DAT_11308fe98);
        *puVar2 = uVar9;
        puVar2[1] = uVar3;
        puVar2 = (undefined8 *)(lVar28 + _DAT_11308fea0);
        *puVar2 = uVar10;
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)(lVar28 + _DAT_11308fea8);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        lVar29 = 0;
        FUN_1047ef78c();
        lVar42 = lVar29;
        _objc_allocWithZone();
        *(undefined8 *)(lVar42 + _DAT_11308ffc8) = uVar12;
        puVar2 = (undefined8 *)(lVar42 + _DAT_11308ffd0);
        *puVar2 = uVar6;
        puVar2[1] = uVar13;
        *(undefined8 *)(lVar42 + _DAT_11308ffd8) = uVar37;
        *(undefined8 *)(lVar42 + _DAT_11308ffe0) = uVar43;
        *(undefined8 *)(lVar42 + _DAT_11308ffe8) = uVar44;
        *(undefined8 *)(lVar42 + _DAT_11308fff0) = uVar45;
        puVar26 = PTR_s_init_1125d9248;
        lStack_180 = lVar42;
        lStack_178 = lVar29;
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar13);
        plVar33 = &lStack_180;
        _objc_msgSendSuper2(plVar33,puVar26);
        *(long **)(lVar28 + _DAT_11308feb0) = plVar33;
        plVar33 = &lStack_190;
        lStack_190 = lVar28;
        lStack_188 = lVar27;
        _objc_msgSendSuper2(plVar33,PTR_s_init_1125d9248);
        uVar7 = *(ulong *)(puVar41 + 0x10);
        puStack_150 = puVar41;
        if (*(ulong *)(puVar41 + 0x18) >> 1 <= uVar7) {
          func_0x0001046c7414(1 < *(ulong *)(puVar41 + 0x18),uVar7 + 1,1);
        }
        puVar39 = puVar39 + 0xe;
        *(ulong *)(puStack_150 + 0x10) = uVar7 + 1;
        *(long **)(puStack_150 + uVar7 * 8 + 0x20) = plVar33;
        lVar40 = lVar40 + -1;
        puVar41 = puStack_150;
      } while (lVar40 != 0);
    }
    lVar40 = 0;
    FUN_1047eeb2c();
    lVar28 = lVar40;
    _objc_allocWithZone();
    *(byte *)(lVar28 + _DAT_11308ff78) = bVar19 & 1;
    *(byte *)(lVar28 + _DAT_11308ff80) = bVar20 & 1;
    *(byte *)(lVar28 + _DAT_11308ff88) = bVar21 & 1;
    *(byte *)(lVar28 + _DAT_11308ff90) = bVar22 & 1;
    *(byte *)(lVar28 + _DAT_11308ff98) = bVar24 & 1;
    plVar33 = &lStack_1a0;
    lStack_1a0 = lVar28;
    lStack_198 = lVar40;
    _objc_msgSendSuper2(plVar33,PTR_s_init_1125d9248);
    plVar34 = plVar33;
    FUN_1047ee048();
    plVar35 = plVar34;
    _objc_allocWithZone();
    *(undefined1 *)((long)plVar35 + _DAT_11308fee0) = 1;
    *(undefined8 *)((long)plVar35 + _DAT_11308fee8) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308fee8))[1] = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308fef0) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308fef8))[1] = 0xf000000000000000;
    *(undefined8 *)((long)plVar35 + _DAT_11308fef8) = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff00) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308ff00))[1] = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff08) = 0;
    *(undefined **)((long)plVar35 + _DAT_11308ff10) = puVar41;
    *(long *)((long)plVar35 + _DAT_11308ff18) = lVar8;
    ((long *)((long)plVar35 + _DAT_11308ff18))[1] = lVar32;
    *(long **)((long)plVar35 + _DAT_11308ff20) = plVar33;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff28) = 0;
    ((undefined8 *)((long)plVar35 + _DAT_11308ff28))[1] = 0;
    *(undefined8 *)((long)plVar35 + _DAT_11308ff30) = 0;
    func_0x00010006c00c(lVar8,lVar32);
    puVar41 = PTR_s_init_1125d9248;
    plStack_1b0 = plVar35;
    plStack_1a8 = plVar34;
    _objc_retain(plVar33);
    pplVar36 = &plStack_1b0;
    _objc_msgSendSuper2(pplVar36,puVar41);
    func_0x0001017b670c(param_1);
    _objc_release(plVar33);
    lVar29 = lVar8;
  }
  func_0x00010006c090(lVar29,lVar32);
  return pplVar36;
}



/* Entry: 1047edcd0; end: 1047ede1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047edcd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_1047ee048();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308fee0) = 0;
  plVar1 = (long *)(lVar5 + _DAT_11308fee8);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_11308fef0) = param_3;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308fef8);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308ff00);
  *puVar2 = param_6;
  puVar2[1] = param_7;
  *(undefined8 *)(lVar5 + _DAT_11308ff08) = param_8;
  *(undefined8 *)(lVar5 + _DAT_11308ff10) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308ff18);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  *(undefined8 *)(lVar5 + _DAT_11308ff20) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11308ff28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11308ff30) = 0;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  func_0x00010006c00c(param_4,param_5);
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1047ede20; end: 1047edf43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ede20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_1047ee048();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308fee0) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308fee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11308fef0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308fef8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308ff00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11308ff08) = 0;
  *(long *)(lVar4 + _DAT_11308ff10) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308ff18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar4 + _DAT_11308ff20) = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308ff28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11308ff30) = 0;
  _swift_bridgeObjectRetain(param_1);
  func_0x00010006c00c(param_2,param_3);
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1047edf44; end: 1047ee047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047edf44(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1047ee048();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11308fee0) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308fee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11308fef0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308fef8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308ff00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11308ff08) = 0;
  *(undefined8 *)(lVar5 + _DAT_11308ff10) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11308ff18);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar5 + _DAT_11308ff20) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11308ff28);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_11308ff30) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1047ee048; end: 1047ee067;  */

void FUN_1047ee048(void)

{
  _objc_opt_self(&PTR_PTR_1129d6970);
  return;
}



/* Entry: 1047ee068; end: 1047ee1cf;  */

int FUN_1047ee068(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1047ee0e4;
        goto LAB_1047ee0c8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1047ee0c8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1047ee0e4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1047ee1d0; end: 1047ee233;  */

void FUN_1047ee1d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ff70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35d9c;
  _swift_getWitnessTable(&UNK_10dd35d9c,&UNK_1107a1af8);
  puRam000000011308ff70 = puVar1;
  return;
}



/* Entry: 1047ee234; end: 1047ee23b;  */

void FUN_1047ee234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1047ea798(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1047ee23c; end: 1047ee283;  */

void FUN_1047ee23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047ee284; end: 1047ee3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ee284(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_11308ff78) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_11308ff80) = (byte)((ulong)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_11308ff88) = (byte)((ulong)param_1 >> 0x10) & 1;
  *(byte *)(unaff_x20 + _DAT_11308ff90) = (byte)((ulong)param_1 >> 0x18) & 1;
  *(byte *)(unaff_x20 + _DAT_11308ff98) = (byte)((ulong)param_1 >> 0x20) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ee3ac; end: 1047ee4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1047ee3ac(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long unaff_x20;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar11 & 1) != 0) {
      bVar12 = *(byte *)(unaff_x20 + _DAT_11308ff78);
      bVar1 = *(byte *)(lStack_88 + _DAT_11308ff78);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11308ff80);
      bVar3 = *(byte *)(lStack_88 + _DAT_11308ff80);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11308ff88);
      bVar5 = *(byte *)(lStack_88 + _DAT_11308ff88);
      bVar6 = *(byte *)(unaff_x20 + _DAT_11308ff90);
      bVar7 = *(byte *)(lStack_88 + _DAT_11308ff90);
      bVar8 = *(byte *)(unaff_x20 + _DAT_11308ff98);
      bVar9 = *(byte *)(lStack_88 + _DAT_11308ff98);
      _objc_release();
      bVar12 = (bVar12 ^ bVar1 | bVar2 ^ bVar3 | bVar4 ^ bVar5 | bVar6 ^ bVar7 | bVar8 ^ bVar9) ^ 1;
      goto LAB_1047ee4a4;
    }
  }
  bVar12 = 0;
LAB_1047ee4a4:
  return bVar12 & 1;
}



/* Entry: 1047ee4c8; end: 1047ee4d7; -[SCAdMediaInstantShopConfiguration adsInstantShopEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047ee4c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ff78);
}



/* Entry: 1047ee4d8; end: 1047ee4e7; -[SCAdMediaInstantShopConfiguration unifiedCollectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047ee4d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ff80);
}



/* Entry: 1047ee4e8; end: 1047ee4f7; -[SCAdMediaInstantShopConfiguration instantPageIconEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047ee4e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ff88);
}



/* Entry: 1047ee4f8; end: 1047ee507; -[SCAdMediaInstantShopConfiguration storeFrontEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047ee4f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ff90);
}



/* Entry: 1047ee508; end: 1047ee517; -[SCAdMediaInstantShopConfiguration instantPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047ee508(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ff98);
}



/* Entry: 1047ee518; end: 1047ee5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ee518(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308ff78) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11308ff80) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308ff88) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11308ff90) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11308ff98) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ee5b4; end: 1047ee64f; -[SCAdMediaInstantShopConfiguration initWithAdsInstantShopEnabled:unifiedCollectionEnabled:instantPageIconEnabled:storeFrontEnabled:instantPageEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ee5b4(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11308ff78) = param_3;
  *(undefined1 *)(param_1 + _DAT_11308ff80) = param_4;
  *(undefined1 *)(param_1 + _DAT_11308ff88) = param_5;
  *(undefined1 *)(param_1 + _DAT_11308ff90) = param_6;
  *(undefined1 *)(param_1 + _DAT_11308ff98) = param_7;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ee650; end: 1047ee66f; -[SCAdMediaInstantShopConfiguration hash] */

void FUN_1047ee650(void)

{
  func_0x0001047ee314();
  return;
}



/* Entry: 1047ee670; end: 1047ee6ef; -[SCAdMediaInstantShopConfiguration isEqual:] */

uint FUN_1047ee670(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047ee3ac(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ee6f0; end: 1047ee6f3; -[SCAdMediaInstantShopConfiguration copyWithZone:] */

void FUN_1047ee6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ee6f4; end: 1047ee867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ee6f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20ef70);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef90);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20efb0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20efd0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20eff0);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047ee868; end: 1047ee8b7; -[SCAdMediaInstantShopConfiguration encodeWithCoder:] */

void FUN_1047ee868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047ee6f4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047ee8b8; end: 1047ee8f7;  */

undefined8 FUN_1047ee8b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047ee9d0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ee8f8; end: 1047ee933; -[SCAdMediaInstantShopConfiguration initWithCoder:] */

undefined8 FUN_1047ee8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047ee9d0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047ee934; end: 1047ee94f; -[SCAdMediaInstantShopConfiguration description] */

void FUN_1047ee934(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ee950; end: 1047ee9cb; -[SCAdMediaInstantShopConfiguration init] */

void FUN_1047ee950(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaInstantShopConfigurationWrapper.swift",0x38,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ee998);
  (*pcVar1)();
}



/* Entry: 1047ee9cc; end: 1047ee9cf; -[SCAdMediaInstantShopConfiguration .cxx_destruct] */

void FUN_1047ee9cc(void)

{
  return;
}



/* Entry: 1047ee9d0; end: 1047eeb2b;  */

void FUN_1047ee9d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20ef70);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20ef90);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20efb0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20efd0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20eff0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bff2710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1047eeb2c; end: 1047eeb4b;  */

void FUN_1047eeb2c(void)

{
  _objc_opt_self(&PTR_PTR_1129d6a88);
  return;
}



/* Entry: 1047eeb4c; end: 1047eebe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eeb4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ffc8) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ffd0);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ffd8) = param_1[3];
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11308ffe0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11308ffe8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fff0) = param_1[6];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047eebe8; end: 1047eeceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eebe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ffc8));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ffd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308ffd0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308ffd8));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308ffe0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308ffe0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308ffe8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308ffe8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308fff0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308fff0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047eecec; end: 1047eee4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047eecec(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar3 = &lStack_98;
    _swift_dynamicCast(plVar3,auStack_90,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_11308ffc8);
      lVar5 = *(long *)(lStack_98 + _DAT_11308ffc8);
      lVar6 = *(long *)(unaff_x20 + _DAT_11308ffd0);
      if (lVar6 == *(long *)(lStack_98 + _DAT_11308ffd0) &&
          ((long *)(unaff_x20 + _DAT_11308ffd0))[1] == ((long *)(lStack_98 + _DAT_11308ffd0))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar6;
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308ffd8);
      lVar7 = *(long *)(lStack_98 + _DAT_11308ffd8);
      dVar8 = *(double *)(unaff_x20 + _DAT_11308ffe0);
      dVar9 = *(double *)(lStack_98 + _DAT_11308ffe0);
      dVar10 = *(double *)(unaff_x20 + _DAT_11308ffe8);
      dVar11 = *(double *)(lStack_98 + _DAT_11308ffe8);
      dVar12 = *(double *)(unaff_x20 + _DAT_11308fff0);
      dVar13 = *(double *)(lStack_98 + _DAT_11308fff0);
      _objc_release(lStack_98);
      uVar1 = 0;
      if (lVar6 == lVar7) {
        uVar1 = lVar4 == lVar5 & uVar2;
      }
      uVar2 = 0;
      if (dVar8 == dVar9) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (dVar10 == dVar11) {
        uVar1 = uVar2;
      }
      if (dVar12 != dVar13) {
        return 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1047eee4c; end: 1047eee5b; -[SCAdMediaPriceInfo micro] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047eee4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ffc8);
}



/* Entry: 1047eee5c; end: 1047eeea7; -[SCAdMediaPriceInfo currency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eee5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308ffd0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308ffd0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047eeea8; end: 1047eeeb7; -[SCAdMediaPriceInfo salePriceMicro] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047eeea8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ffd8);
}



/* Entry: 1047eeeb8; end: 1047eeec7; -[SCAdMediaPriceInfo discount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047eeeb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ffe0);
}



/* Entry: 1047eeec8; end: 1047eeed7; -[SCAdMediaPriceInfo saleStartTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047eeec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ffe8);
}



/* Entry: 1047eeed8; end: 1047eeee7; -[SCAdMediaPriceInfo saleEndTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047eeed8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fff0);
}



/* Entry: 1047eeee8; end: 1047eefab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eeee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ffc8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ffd0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308ffd8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308ffe0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ffe8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fff0) = param_3;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047eefac; end: 1047ef077; -[SCAdMediaPriceInfo initWithMicro:currency:salePriceMicro:discount:saleStartTimeMs:saleEndTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047eefac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_4;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_4 + _DAT_11308ffc8) = param_6;
  puVar1 = (undefined8 *)(param_4 + _DAT_11308ffd0);
  *puVar1 = param_7;
  puVar1[1] = param_5;
  *(undefined8 *)(param_4 + _DAT_11308ffd8) = param_8;
  *(undefined8 *)(param_4 + _DAT_11308ffe0) = param_1;
  *(undefined8 *)(param_4 + _DAT_11308ffe8) = param_2;
  *(undefined8 *)(param_4 + _DAT_11308fff0) = param_3;
  lStack_70 = param_4;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ef078; end: 1047ef0ab; -[SCAdMediaPriceInfo hash] */

undefined8 FUN_1047ef078(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047eebe8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047ef0ac; end: 1047ef12b; -[SCAdMediaPriceInfo isEqual:] */

uint FUN_1047ef0ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047eecec(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ef12c; end: 1047ef12f; -[SCAdMediaPriceInfo copyWithZone:] */

void FUN_1047ef12c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ef130; end: 1047ef2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4f5243494d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5243494d,0xe500000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308ffd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308ffd0))[1]);
  uVar2 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f050);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ffe0);
  uVar1 = 0x544e554f43534944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e554f43534944,0xe800000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ffe8);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f070);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fff0);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f090);
  func_0x00010bf92e80(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047ef300; end: 1047ef34f; -[SCAdMediaPriceInfo encodeWithCoder:] */

void FUN_1047ef300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047ef130(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047ef350; end: 1047ef37f;  */

void FUN_1047ef350(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047ef380(param_1);
  return;
}



/* Entry: 1047ef380; end: 1047ef607;  */

undefined8 FUN_1047ef380(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar3 = 0;
  uVar1 = 0x4f5243494d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5243494d,0xe500000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xe800000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    uVar1 = uStack_a0;
    _swift_dynamicCast(&uStack_c0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar4 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f050);
      func_0x00010bf66f40(param_1);
      _objc_release(uVar4);
      uVar4 = 0x544e554f43534944;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e554f43534944,0xe800000000000000);
      func_0x00010bf66da0(param_1);
      uVar5 = uVar1;
      _objc_release(uVar4);
      uVar4 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20f070);
      func_0x00010bf66da0(param_1);
      uVar6 = uVar5;
      _objc_release(uVar4);
      uVar4 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20f090);
      func_0x00010bf66da0(param_1);
      _objc_release(uVar4);
      uVar4 = uStack_c0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,uStack_b8);
      _swift_bridgeObjectRelease(uStack_b8);
      func_0x00010c02bf40(uVar1,uVar5,uVar6);
      _objc_release(uVar4);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047ef608; end: 1047ef62f; -[SCAdMediaPriceInfo initWithCoder:] */

void FUN_1047ef608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047ef380();
  return;
}



/* Entry: 1047ef630; end: 1047ef663; -[SCAdMediaPriceInfo description] */

void FUN_1047ef630(void)

{
  undefined1 auStack_48 [56];
  
  func_0x0001047ef6f4(auStack_48);
  FUN_1047ef758(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047ef664; end: 1047ef6df; -[SCAdMediaPriceInfo init] */

void FUN_1047ef664(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaPriceInfoWrapper.swift",
             0x29,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047ef6ac);
  (*pcVar1)();
}



/* Entry: 1047ef6e0; end: 1047ef757; -[SCAdMediaPriceInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308ffd0 + 8))
  ;
  return;
}



/* Entry: 1047ef758; end: 1047ef78b;  */

undefined8 FUN_1047ef758(undefined8 param_1)

{
  FUN_10473c924();
  return param_1;
}



/* Entry: 1047ef78c; end: 1047ef7ab;  */

void FUN_1047ef78c(void)

{
  _objc_opt_self(&PTR_PTR_1129d6b78);
  return;
}



/* Entry: 1047ef7ac; end: 1047ef807; -[SCAdMediaProductOption name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef7ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090020))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090020);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047ef808; end: 1047ef857; -[SCAdMediaProductOption values] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef808(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090028);
  FUN_1047f0e80(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047ef858; end: 1047ef8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090020);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090028) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ef8c4; end: 1047ef967; -[SCAdMediaProductOption initWithName:values:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef8c4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  uVar3 = 0;
  FUN_1047f0e80(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  plVar1 = (long *)(param_1 + _DAT_113090020);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113090028) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ef968; end: 1047ef9af;  */

void FUN_1047ef968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1047ef9b0(param_1,param_2,param_3);
  return;
}



/* Entry: 1047ef9b0; end: 1047efb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ef9b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090020);
  *puVar13 = param_1;
  puVar13[1] = param_2;
  lVar14 = *(long *)(param_3 + 0x10);
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001046c74e4(0,lVar14,0);
    puVar12 = puStack_68;
    lVar9 = 0;
    FUN_1047f0e80();
    puVar13 = (undefined8 *)(param_3 + 0x40);
    do {
      uVar2 = puVar13[-4];
      uVar5 = puVar13[-3];
      uVar7 = *(undefined1 *)(puVar13 + -2);
      uVar3 = puVar13[-1];
      uVar6 = *puVar13;
      lVar10 = lVar9;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar10 + _DAT_113090060);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      *(undefined1 *)(lVar10 + _DAT_113090068) = uVar7;
      puVar1 = (undefined8 *)(lVar10 + _DAT_113090070);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      puVar8 = PTR_s_init_1125d9248;
      lStack_78 = lVar10;
      lStack_70 = lVar9;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      plVar11 = &lStack_78;
      _objc_msgSendSuper2(plVar11,puVar8);
      uVar4 = *(ulong *)(puVar12 + 0x10);
      puStack_68 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar4) {
        func_0x0001046c74e4(1 < *(ulong *)(puVar12 + 0x18),uVar4 + 1,1);
      }
      puVar12 = puStack_68;
      puVar13 = puVar13 + 5;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(long **)(puStack_68 + uVar4 * 8 + 0x20) = plVar11;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_113090028) = puVar12;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047efb84; end: 1047efbb7; -[SCAdMediaProductOption hash] */

undefined8 FUN_1047efb84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047efbb8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047efbb8; end: 1047efd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047efbb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090020))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090020);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090028);
  uVar2 = 0;
  FUN_1047f0e80(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047efd94; end: 1047efe13; -[SCAdMediaProductOption isEqual:] */

uint FUN_1047efd94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001047efc78(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047efe14; end: 1047efe17; -[SCAdMediaProductOption copyWithZone:] */

void FUN_1047efe14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047efe18; end: 1047efeef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047efe18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090020))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090020);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090028);
  uVar1 = 0;
  FUN_1047f0e80(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x5345554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345554c4156,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047efef0; end: 1047eff3f; -[SCAdMediaProductOption encodeWithCoder:] */

void FUN_1047efef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047efe18(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047eff40; end: 1047eff6f;  */

void FUN_1047eff40(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047eff70(param_1);
  return;
}



/* Entry: 1047eff70; end: 1047f01bf;  */

undefined8 FUN_1047eff70(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar2 = (int)&uStack_a0;
  uVar7 = 0;
  uVar3 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar4 = 0;
    uVar3 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_98;
    uVar3 = uStack_a0;
    if (iVar2 == 0) {
      uVar3 = 0;
      lVar4 = 0;
    }
  }
  uVar5 = 0x5345554c4156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345554c4156,0xe600000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar5 = 0x113090030;
    func_0x0001000285a8(0x113090030,&UNK_10dd35e88);
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
    if ((uVar7 & 1) != 0) {
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
        _swift_bridgeObjectRelease(lVar4);
      }
      uVar8 = 0;
      FUN_1047f0e80(0);
      uVar5 = uStack_a0;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a0,uVar8);
      _swift_bridgeObjectRelease(uStack_a0);
      func_0x00010c02dc60();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f01c0; end: 1047f01e7; -[SCAdMediaProductOption initWithCoder:] */

void FUN_1047f01c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047eff70();
  return;
}



/* Entry: 1047f01e8; end: 1047f023f; -[SCAdMediaProductOption description] */

void FUN_1047f01e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1047f02f8();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f0240; end: 1047f02bb; -[SCAdMediaProductOption init] */

void FUN_1047f0240(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaProductOptionWrapper.swift",0x2d,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f0288);
  (*pcVar1)();
}



/* Entry: 1047f02bc; end: 1047f02f7; -[SCAdMediaProductOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f02bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090020 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090028));
  return;
}



/* Entry: 1047f02f8; end: 1047f04c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047f02f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090020);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113090020))[1];
  uVar10 = *(ulong *)(param_1 + _DAT_113090028);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar11 == 0) {
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    func_0x000101552a24(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1047f04c8);
      (*pcVar8)();
    }
    uVar12 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar9 = uVar12;
        func_0x0001030b63ec();
      }
      uVar3 = *(undefined8 *)(uVar9 + _DAT_113090060);
      uVar4 = ((undefined8 *)(uVar9 + _DAT_113090060))[1];
      uVar6 = *(undefined1 *)(uVar9 + _DAT_113090068);
      uVar2 = *(undefined8 *)(uVar9 + _DAT_113090070);
      uVar5 = ((undefined8 *)(uVar9 + _DAT_113090070))[1];
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(uVar9);
      uVar9 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
        func_0x000101552a24(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x20) = uVar3;
      *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x28) = uVar4;
      puVar7[uVar9 * 0x28 + 0x30] = uVar6;
      *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x38) = uVar2;
      *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x40) = uVar5;
    } while (uVar11 != uVar12);
  }
  return uVar1;
}



/* Entry: 1047f04c8; end: 1047f04e7;  */

void FUN_1047f04c8(void)

{
  _objc_opt_self(&PTR_PTR_1129d6c70);
  return;
}



/* Entry: 1047f04e8; end: 1047f0557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f04e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090060);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_113090068) = *(undefined1 *)(param_1 + 2);
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090070);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f0558; end: 1047f0563; -[SCAdMediaProductOptionValue variantId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090060);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090060))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f0564; end: 1047f0573; -[SCAdMediaProductOptionValue available] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047f0564(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090068);
}



/* Entry: 1047f0574; end: 1047f057f; -[SCAdMediaProductOptionValue name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090070);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090070))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047f0580; end: 1047f05c7;  */

void FUN_1047f0580(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1047f05c8; end: 1047f0653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f05c8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090060);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113090068) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090070);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f0654; end: 1047f06f3; -[SCAdMediaProductOptionValue initWithVariantId:available:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0654(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113090060);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_113090068) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113090070);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047f06f4; end: 1047f0727; -[SCAdMediaProductOptionValue hash] */

undefined8 FUN_1047f06f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047f0728();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047f0728; end: 1047f07df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0728(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090060);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090060))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090068));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090070);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090070))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047f07e0; end: 1047f0907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047f07e0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar6 = &lStack_68;
    _swift_dynamicCast(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_113090060);
      if (lVar5 == *(long *)(lStack_68 + _DAT_113090060) &&
          ((long *)(unaff_x20 + _DAT_113090060))[1] == ((long *)(lStack_68 + _DAT_113090060))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar5;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113090068);
      bVar2 = *(byte *)(lStack_68 + _DAT_113090068);
      lVar5 = *(long *)(unaff_x20 + _DAT_113090070);
      if (lVar5 == *(long *)(lStack_68 + _DAT_113090070) &&
          ((long *)(unaff_x20 + _DAT_113090070))[1] == ((long *)(lStack_68 + _DAT_113090070))[1]) {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar5;
      }
      _objc_release(lStack_68);
      uVar3 = uVar3 & uVar4 & ((bVar1 ^ bVar2) ^ 1);
      goto LAB_1047f08ec;
    }
  }
  uVar3 = 0;
LAB_1047f08ec:
  return uVar3 & 1;
}



/* Entry: 1047f0908; end: 1047f0987; -[SCAdMediaProductOptionValue isEqual:] */

uint FUN_1047f0908(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047f07e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047f0988; end: 1047f098b; -[SCAdMediaProductOptionValue copyWithZone:] */

void FUN_1047f0988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047f098c; end: 1047f0a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f098c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090060);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090060))[1]);
  uVar1 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4c42414c49415641;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c42414c49415641,0xe900000000000045);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090070);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090070))[1]);
  uVar1 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047f0a94; end: 1047f0ae3; -[SCAdMediaProductOptionValue encodeWithCoder:] */

void FUN_1047f0a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047f098c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047f0ae4; end: 1047f0b13;  */

void FUN_1047f0ae4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047f0b14(param_1);
  return;
}



/* Entry: 1047f0b14; end: 1047f0d7f;  */

undefined8 FUN_1047f0b14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x5f544e4149524156;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4149524156,0xea00000000004449);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_98;
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1047f0d30;
    }
    uVar5 = 0x4c42414c49415641;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c42414c49415641,0xe900000000000045);
    func_0x00010bf66ce0(param_1);
    _objc_release(uVar5);
    uVar5 = 0x454d414e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar7);
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c060620();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_1047f0d30;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar7);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1047f0d30:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047f0d80; end: 1047f0da7; -[SCAdMediaProductOptionValue initWithCoder:] */

void FUN_1047f0d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047f0b14();
  return;
}



/* Entry: 1047f0da8; end: 1047f0dc3; -[SCAdMediaProductOptionValue description] */

void FUN_1047f0da8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047f0dc4; end: 1047f0e3f; -[SCAdMediaProductOptionValue init] */

void FUN_1047f0dc4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaProductOptionValueWrapper.swift",0x32,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047f0e0c);
  (*pcVar1)();
}



/* Entry: 1047f0e40; end: 1047f0e7f; -[SCAdMediaProductOptionValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047f0e40(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090060 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090070 + 8))
  ;
  return;
}



/* Entry: 1047f0e80; end: 1047f0e9f;  */

void FUN_1047f0e80(void)

{
  _objc_opt_self(&PTR_PTR_1129d6d48);
  return;
}


