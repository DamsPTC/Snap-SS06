/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104567164; end: 104567213;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104567164(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRelease();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
    _swift_bridgeObjectRelease();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 104567214; end: 104567217;  */

undefined8 FUN_104567214(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 104567218; end: 104567293;  */

void FUN_104567218(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10457e0a0();
  lVar1 = param_1[2];
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return;
    }
  }
  else if (lVar1 == param_1[1] - lVar2) {
    return;
  }
  if (*(char *)(lVar2 + lVar1) == 'n') {
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_10457eae4();
  }
  return;
}



/* Entry: 104567294; end: 1045672a3;  */

undefined1  [16] FUN_104567294(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x6c6c756e;
  return auVar1;
}



/* Entry: 1045672a4; end: 1045672b7;  */

void FUN_1045672a4(void)

{
  FUN_104567218();
  return;
}



/* Entry: 1045672b8; end: 1045672c7;  */

void FUN_1045672b8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1045672c8; end: 10456730f;  */

undefined8 FUN_1045672c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000104568a90();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Entry: 104567310; end: 10456735f;  */

void FUN_104567310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000104568a90();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 104567360; end: 104567837;  */

undefined1  [16] FUN_104567360(uint param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long unaff_x21;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_138;
  undefined *puStack_118;
  undefined *puStack_100;
  undefined2 uStack_f8;
  undefined *apuStack_f0 [3];
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  ulong uStack_b0;
  undefined2 uStack_a8;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar9 = 0;
  func_0x0001014d97ac(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar19 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar19) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001014d97ac(uVar9,uVar19 + 1,1);
  }
  *(ulong *)(uVar9 + 0x10) = uVar19 + 1;
  *(undefined1 *)(uVar9 + uVar19 + 0x20) = 0x7b;
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0x100;
  uStack_a8 = 0x100;
  bStack_a6 = (byte)param_1 & 1;
  bStack_a5 = (byte)(param_1 >> 8) & 1;
  bStack_a4 = (byte)(param_1 >> 0x10) & 1;
  bStack_a3 = (byte)(param_1 >> 0x18) & 1;
  uVar15 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_2 + 0x40);
  uStack_b0 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(param_2);
  lVar20 = 0;
  puStack_118 = (undefined *)0x0;
  uStack_138 = 0;
  bVar14 = true;
  do {
    while (uVar19 == 0) {
      bVar8 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1045677d8);
        (*pcVar7)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
        _swift_release(param_2);
        uVar19 = uStack_b0;
        uVar15 = uStack_b0;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar16 = uVar19;
        if ((uVar15 & 1) == 0) {
          uVar16 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
        }
        uVar15 = *(ulong *)(uVar16 + 0x10);
        uVar19 = uVar15 + 1;
        uVar13 = uVar16;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar15) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
          func_0x0001014d97ac(uVar13,uVar19,1,uVar16);
        }
        *(ulong *)(uVar13 + 0x10) = uVar19;
        ppuVar12 = (undefined **)(uVar13 + 0x20);
        *(undefined1 *)((long)ppuVar12 + uVar15) = 0x7d;
        uStack_a8 = 0x2c;
        uStack_b0 = uVar13;
        _swift_bridgeObjectRetain(uVar13);
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(ppuVar12,uVar19);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar13);
        func_0x000104568d7c(&puStack_c8);
LAB_10456775c:
        auVar22._8_8_ = uVar19;
        auVar22._0_8_ = ppuVar12;
        return auVar22;
      }
      uVar19 = ((ulong *)(param_2 + 0x40))[lVar20];
    }
    uVar16 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar20 << 6;
    puVar17 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
    uVar18 = *puVar17;
    uVar3 = puVar17[1];
    puVar17 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar16 * 0x30);
    uVar1 = *puVar17;
    uVar4 = puVar17[1];
    uVar21 = puVar17[2];
    uVar6 = *(undefined1 *)(puVar17 + 3);
    uVar2 = puVar17[4];
    uVar5 = puVar17[5];
    if (bVar14) {
      puStack_c8 = &DAT_10f68e8ee;
      uStack_c0 = 1;
      uStack_b8 = 2;
      _swift_bridgeObjectRetain(uVar3);
      FUN_1045670a0(uVar1,uVar4,uVar21,uVar6);
      func_0x00010006c00c(uVar2,uVar5);
      puStack_118 = &DAT_10f68e8ee;
      uStack_138 = 1;
    }
    else {
      if (puStack_118 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1045677dc);
        (*pcVar7)();
      }
      _swift_bridgeObjectRetain(uVar3);
      FUN_1045670a0(uVar1,uVar4,uVar21,uVar6);
      func_0x00010006c00c(uVar2,uVar5);
      FUN_104540d74(&puStack_c8,puStack_118,uStack_138);
    }
    FUN_1045727d4(uVar18,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    FUN_104540d74(":",1);
    puStack_d8 = &UNK_11078f680;
    ppuStack_d0 = &PTR_DAT_110788398;
    puVar10 = &UNK_110788330;
    _swift_allocObject(&UNK_110788330,0x40,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar1;
    *(undefined8 *)(puVar10 + 0x18) = uVar4;
    *(undefined8 *)(puVar10 + 0x20) = uVar21;
    puVar10[0x28] = uVar6;
    *(undefined8 *)(puVar10 + 0x30) = uVar2;
    *(undefined8 *)(puVar10 + 0x38) = uVar5;
    ppuVar12 = apuStack_f0;
    apuStack_f0[0] = puVar10;
    func_0x0001000a8868(ppuVar12,&UNK_11078f680);
    puStack_98 = ppuVar12[1];
    puStack_a0 = *ppuVar12;
    puStack_88 = ppuVar12[3];
    puStack_90 = ppuVar12[2];
    puStack_78 = ppuVar12[5];
    puStack_80 = ppuVar12[4];
    puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_f8 = 0x100;
    FUN_1045670a0(uVar1,uVar4,uVar21,uVar6);
    func_0x00010006c00c(uVar2,uVar5);
    ppuVar12 = &puStack_a0;
    FUN_10456a514(&puStack_100,param_1 & 0x1010101);
    puVar10 = puStack_100;
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(puStack_100);
      FUN_104568db0(apuStack_f0);
      FUN_104567140(uVar1,uVar4,uVar21,uVar6);
      func_0x00010006c090(uVar2,uVar5);
      _swift_bridgeObjectRelease(uVar9);
      _swift_release(param_2);
      func_0x000104568d7c(&puStack_c8);
      goto LAB_10456775c;
    }
    uVar19 = uVar19 - 1 & uVar19;
    uVar18 = *(undefined8 *)(puStack_100 + 0x10);
    _swift_bridgeObjectRetain(puStack_100);
    puVar11 = puVar10 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar11,uVar18);
    _swift_bridgeObjectRelease_n(puVar10,2);
    FUN_104568db0(apuStack_f0);
    func_0x000104540f24(puVar11,uVar18);
    FUN_104567140(uVar1,uVar4,uVar21,uVar6);
    func_0x00010006c090(uVar2,uVar5);
    bVar14 = false;
  } while( true );
}



/* Entry: 104567838; end: 104567b23;  */

/* WARNING: Removing unreachable block (ram,0x000104567a48) */
/* WARNING: Removing unreachable block (ram,0x000104567a30) */
/* WARNING: Removing unreachable block (ram,0x000104567a34) */

void FUN_104567838(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 auStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar3 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar5 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104567ad0);
      (*pcVar2)();
    }
    param_1[0xb] = lVar5;
    if (lVar5 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar3,0,0);
      puVar3[1] = 0x13;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10457b120();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10457b090();
        do {
          FUN_10457ed38(0x3a);
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0x3000000000000000;
          uStack_98 = 0xff;
          uStack_88 = 0xc000000000000000;
          puStack_90 = (undefined8 *)0x0;
          FUN_10456a7f0(param_1);
          uStack_68 = CONCAT71(uStack_97,uStack_98);
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          uStack_70 = uStack_a0;
          uStack_58 = uStack_88;
          puStack_60 = puStack_90;
          FUN_104567028(&uStack_80,auStack_e0);
          uVar4 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native(uVar4);
          auStack_e0[0] = *unaff_x20;
          FUN_104568114(&uStack_80,puVar3,param_2,uVar4);
          _swift_bridgeObjectRelease(param_2);
          *unaff_x20 = auStack_e0[0];
          FUN_10457e0a0();
          uVar4 = uStack_88;
          puVar3 = puStack_90;
          uVar1 = param_1[2];
          lVar5 = *param_1;
          if (lVar5 == 0) {
            if (uVar1 != 0) goto LAB_1045679d8;
          }
          else if (uVar1 != param_1[1] - lVar5) {
LAB_1045679d8:
            if (*(char *)(lVar5 + uVar1) == '}') {
              if ((lVar5 == 0) || ((ulong)(param_1[1] - lVar5) <= uVar1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x104567ad4);
                (*pcVar2)();
              }
              param_1[2] = uVar1 + 1;
              lVar5 = param_1[0xb] + 1;
              if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x104567ad8);
                (*pcVar2)();
              }
              param_1[0xb] = lVar5;
              if (lVar5 <= param_1[4]) {
                FUN_104567140(uStack_b0,uStack_a8,uStack_a0,uStack_98);
                func_0x00010006c090(puVar3,uVar4);
                return;
              }
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104567b24);
              (*pcVar2)();
            }
          }
          FUN_10457ed38(0x2c);
          param_2 = uStack_88;
          puVar3 = puStack_90;
          FUN_104567140(uStack_b0,uStack_a8,uStack_a0,uStack_98);
          func_0x00010006c090();
          FUN_10457b090();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 104567b24; end: 104567b53;  */

void FUN_104567b24(uint param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104567360(param_1 & 0x1010101,*unaff_x20);
  return;
}



/* Entry: 104567b54; end: 104567bb3;  */

undefined8 FUN_104567b54(undefined8 param_1)

{
  FUN_10460c350(PTR___swiftEmptyArrayStorage_11034f1c8);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRetain(param_1);
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 104567bb4; end: 104567c9f;  */

void FUN_104567bb4(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0x2000000000000000;
    uVar1 = 0xff;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    func_0x000100029284();
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0x2000000000000000;
      uVar1 = 0xff;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_2 * 0x30);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar7 = puVar2[2];
      uVar5 = puVar2[4];
      uVar6 = puVar2[5];
      uVar1 = (ulong)*(byte *)(puVar2 + 3);
      FUN_1045670a0(uVar3,uVar4,uVar7);
      func_0x00010006c00c(uVar5,uVar6);
    }
    _swift_bridgeObjectRelease(param_4);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}



/* Entry: 104567ca0; end: 104567d7f;  */

void FUN_104567ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  char cStack_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((param_1[2] & 0x3000000000000000) == 0x2000000000000000) && (*(char *)(param_1 + 3) == -1)) {
    FUN_10456801c(&uStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_104568d14(uStack_60,uStack_58,uStack_50,CONCAT71(uStack_47,cStack_48),uStack_40,uStack_38,
                  FUN_104567140,&SUB_10006c090);
  }
  else {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_38 = param_1[5];
    uStack_40 = param_1[4];
    uVar1 = *unaff_x20;
    uStack_50 = param_1[2];
    cStack_48 = *(char *)(param_1 + 3);
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_104568114(&uStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 104567d80; end: 104567e03;  */

undefined1  [16] FUN_104567d80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0xa8;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0xa8,0x55c);
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x98) = param_3;
  *(undefined8 **)(lVar1 + 0xa0) = unaff_x20;
  *(undefined8 *)(lVar1 + 0x90) = param_2;
  FUN_104567bb4(lVar1 + 0x60,param_2,param_3,*unaff_x20);
  auVar2._8_8_ = lVar1 + 0x60;
  auVar2._0_8_ = FUN_104567e04;
  return auVar2;
}



/* Entry: 104567e04; end: 10456801b;  */

void FUN_104567e04(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((param_1[0xe] & 0x3000000000000000) != 0x2000000000000000) ||
       (*(char *)(param_1 + 0xf) != -1)) {
      param_1[7] = param_1[0xd];
      param_1[6] = param_1[0xc];
      param_1[8] = param_1[0xe];
      *(char *)(param_1 + 9) = *(char *)(param_1 + 0xf);
      param_1[0xb] = param_1[0x11];
      param_1[10] = param_1[0x10];
      _swift_bridgeObjectRetain(uVar8);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uStack_90 = *puVar4;
      FUN_104568114(param_1 + 6,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = uStack_90;
      goto LAB_104567ff8;
    }
    _swift_bridgeObjectRetain(uVar8);
    FUN_10456801c(&uStack_90,uVar9,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = uStack_90;
  }
  else {
    uVar1 = param_1[0xe];
    uVar3 = param_1[0xf];
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((uVar1 & 0x3000000000000000) == 0x2000000000000000) && ((uVar3 & 0xff) == 0xff)) {
      _swift_bridgeObjectRetain(uVar8);
      FUN_10456801c(&uStack_90,uVar9,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      FUN_104568d14(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,FUN_104567140,
                    &SUB_10006c090);
    }
    else {
      uVar7 = param_1[0x10];
      uVar5 = param_1[0x11];
      uVar2 = param_1[0xc];
      uVar6 = param_1[0xd];
      *param_1 = uVar2;
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      *(char *)(param_1 + 3) = (char)uVar3;
      param_1[4] = uVar7;
      param_1[5] = uVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_104568d14(uVar2,uVar6,uVar1,uVar3,uVar7,uVar5,FUN_1045670a0,&SUB_10006c00c);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uStack_90 = *puVar4;
      FUN_104568114(param_1,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = uStack_90;
    }
    uStack_88 = param_1[0xd];
    uStack_80 = param_1[0xe];
    uStack_78 = param_1[0xf];
    uStack_70 = param_1[0x10];
    uStack_68 = param_1[0x11];
    uVar8 = param_1[0xc];
  }
  FUN_104568d14(uVar8,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,FUN_104567140,&SUB_10006c090
               );
LAB_104567ff8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10456801c; end: 104568113;  */

void FUN_10456801c(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0xff;
    param_1[2] = 0x2000000000000000;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_10459468c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar5 + 0x30) + param_2 * 0x10 + 8));
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_2 * 0x30);
    uVar4 = puVar3[2];
    uVar1 = *(undefined1 *)(puVar3 + 3);
    uVar6 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar6;
    param_1[2] = uVar4;
    *(undefined1 *)(param_1 + 3) = uVar1;
    uVar4 = puVar3[4];
    param_1[5] = puVar3[5];
    param_1[4] = uVar4;
    FUN_10456875c(param_2,lVar5);
    *unaff_x20 = lVar5;
  }
  return;
}



/* Entry: 104568114; end: 10456822f;  */

ulong FUN_104568114(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045681ec);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_104594f60(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045681b4);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10459468c();
    lVar4 = *unaff_x20;
    goto joined_r0x000104568200;
  }
  lVar4 = *unaff_x20;
joined_r0x000104568200:
  if ((uVar3 & 1) != 0) {
    uVar3 = *(long *)(lVar4 + 0x38) + lVar2 * 0x30;
    (*(code *)(undefined *)0x10460cf8c)(uVar3,param_1);
    return uVar3;
  }
  FUN_104594494();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 104568230; end: 104568333;  */

undefined8 * FUN_104568230(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104568300);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x00010459527c(lVar4);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045682c0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000104594860();
    lVar4 = *unaff_x20;
    goto joined_r0x000104568314;
  }
  lVar4 = *unaff_x20;
joined_r0x000104568314:
  if ((uVar3 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
    FUN_104568db0(puVar8);
    uVar10 = param_1[1];
    uVar9 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[4] = param_1[4];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
    return puVar8;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  func_0x000100dbb438(param_1,*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045945f8);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return param_1;
}



/* Entry: 104568334; end: 10456855f;  */

void FUN_104568334(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar3 = param_3;
  uVar4 = param_4;
  func_0x000100029284();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10456840c);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    func_0x000104595500(lVar5,param_5 & 1);
    uVar7 = param_4;
    func_0x000100029284();
    lVar3 = param_3;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045683d8);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_1045949e0();
    lVar5 = *unaff_x20;
    goto joined_r0x000104568420;
  }
  lVar5 = *unaff_x20;
joined_r0x000104568420:
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    return;
  }
  FUN_1045945f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 104568560; end: 10456875b;  */

void FUN_104568560(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104568630);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000104595a3c(lVar4);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045685f0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000104594c98();
    lVar4 = *unaff_x20;
    goto joined_r0x000104568644;
  }
  lVar4 = *unaff_x20;
joined_r0x000104568644:
  if ((uVar3 & 1) != 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar6[1] = param_1[1];
    *puVar6 = uVar9;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    puVar6[4] = param_1[4];
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
  uVar9 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar6[1] = param_1[1];
  *puVar6 = uVar9;
  puVar6[3] = uVar11;
  puVar6[2] = uVar10;
  puVar6[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104594590);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 10456875c; end: 104568d13;  */

void FUN_10456875c(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar4 = ~uVar4;
    uVar9 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar4);
    uVar9 = uVar9 + 1 & uVar4;
    do {
      puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar6;
      uVar11 = puVar6[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar11);
      puVar3 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar3,uVar10,uVar11);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(uVar11);
      uVar5 = (ulong)puVar3 & uVar4;
      if ((long)param_1 < (long)uVar9) {
        if (uVar5 < uVar9) {
LAB_10456885c:
          if ((long)param_1 < (long)uVar5) goto LAB_1045687e4;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar7 + 2 <= puVar6 || param_1 != uVar8)) {
          uVar10 = *puVar7;
          puVar6[1] = puVar7[1];
          *puVar6 = uVar10;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x30);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x30);
        if ((((long)param_1 < (long)uVar8) || (puVar7 + 6 <= puVar6)) || (param_1 != uVar8)) {
          uVar11 = puVar7[1];
          uVar10 = *puVar7;
          uVar12 = puVar7[2];
          uVar14 = puVar7[5];
          uVar13 = puVar7[4];
          puVar6[3] = puVar7[3];
          puVar6[2] = uVar12;
          puVar6[5] = uVar14;
          puVar6[4] = uVar13;
          puVar6[1] = uVar11;
          *puVar6 = uVar10;
          param_1 = uVar8;
        }
      }
      else if (uVar9 <= uVar5) goto LAB_10456885c;
LAB_1045687e4:
      uVar8 = uVar8 + 1 & uVar4;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar4 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = *(ulong *)(lVar1 + uVar4) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104568918);
  (*pcVar2)();
}



/* Entry: 104568d14; end: 104568daf;  */

void FUN_104568d14(undefined8 param_1,undefined8 param_2,ulong param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,code *UNRECOVERED_JUMPTABLE)

{
  if (((param_3 & 0x3000000000000000) == 0x2000000000000000) && (param_4 == -1)) {
    return;
  }
  (*param_7)();
                    /* WARNING: Could not recover jumptable at 0x000104568d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_6);
  return;
}



/* Entry: 104568db0; end: 104568dcf;  */

void FUN_104568db0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104568dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 104568dd0; end: 104569003;  */

undefined * FUN_104568dd0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar4 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = uVar6;
    }
  }
  else {
    uVar4 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x000100dd4260(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104569004);
      (*pcVar3)();
    }
    uVar5 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0xf;
    do {
      while( true ) {
        uVar8 = uVar6;
        if ((uVar6 & 0xc) == 4L << uVar5) {
          func_0x000100e36e7c(uVar6,param_1,param_2);
        }
        uVar7 = uVar8 >> 0x10;
        if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104568fe0);
          (*pcVar3)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            uVar8 = (param_2 & 0xfffffffffffffff) + 0x20;
            if ((param_1 >> 0x3c & 1) == 0) {
              uVar8 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
            uVar8 = (ulong)*(byte *)(uVar8 + uVar7);
          }
          else {
            uStack_70 = param_1;
            uStack_68 = param_2 & 0xffffffffffffff;
            uVar8 = (ulong)*(byte *)((long)&uStack_70 + uVar7);
          }
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        }
        uVar7 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
          func_0x000100dd4260(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar7 + 1;
        *(ulong *)(puVar2 + uVar7 * 8 + 0x20) = uVar8 & 0xff;
        if ((uVar6 & 0xc) != 4L << uVar5) break;
        func_0x000100e36e7c(uVar6,param_1,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_104568e7c;
LAB_104568f24:
        if (uVar1 <= uVar6 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104568fe4);
          (*pcVar3)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar6,param_1,param_2);
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return puVar2;
        }
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_104568f24;
LAB_104568e7c:
      uVar6 = (uVar6 & 0xffffffffffff0000) + 0x10004;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return puVar2;
}



/* Entry: 104569004; end: 1045695d7;  */

undefined1  [16] FUN_104569004(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  FUN_104568dd0();
  uVar19 = param_1[2];
  if (uVar19 < 0x14) goto LAB_104569030;
  plVar7 = param_1 + 4;
  uVar17 = param_1[7] - 0x3a;
  bVar3 = *plVar7 - 0x3aU < 0xfffffffffffffff6;
  bVar4 = param_1[5] - 0x3a < 0xfffffffffffffff6;
  bVar5 = param_1[6] - 0x3a < 0xfffffffffffffff6;
  if ((((bVar3 || bVar4) || bVar5) || uVar17 < 0xfffffffffffffff5) ||
      ((!bVar3 && !bVar4) && !bVar5) && uVar17 == 0xfffffffffffffff5) {
LAB_1045690a0:
    puVar6 = param_1;
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,puVar6,0,0);
    puVar6[1] = 0xf;
    *puVar6 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(param_1);
    goto LAB_1045690dc;
  }
  if ((param_1[8] != 0x2d) ||
     (uVar17 = *plVar7 * 1000 + param_1[5] * 100 + param_1[6] * 10 + param_1[7], uVar17 < 0xd051))
  goto LAB_104569030;
  if ((param_1[9] - 0x3a < 0xfffffffffffffff6) || (param_1[10] - 0x3a < 0xfffffffffffffff6))
  goto LAB_1045690a0;
  if ((param_1[0xb] != 0x2d) ||
     (uVar12 = param_1[10] + param_1[9] * 10, uVar12 - 0x21d < 0xfffffffffffffff4))
  goto LAB_104569030;
  if ((param_1[0xc] - 0x3a < 0xfffffffffffffff6) || (param_1[0xd] - 0x3a < 0xfffffffffffffff6))
  goto LAB_1045690a0;
  if ((param_1[0xe] != 0x54) ||
     (lVar13 = param_1[0xd] + param_1[0xc] * 10, lVar13 - 0x230U < 0xffffffffffffffe1))
  goto LAB_104569030;
  if ((param_1[0xf] - 0x3a < 0xfffffffffffffff6) || (param_1[0x10] - 0x3a < 0xfffffffffffffff6))
  goto LAB_1045690a0;
  if ((param_1[0x11] != 0x3a) || (uVar11 = param_1[0x10] + param_1[0xf] * 10, 0x227 < uVar11))
  goto LAB_104569030;
  if ((param_1[0x12] - 0x3a < 0xfffffffffffffff6) || (param_1[0x13] - 0x3a < 0xfffffffffffffff6))
  goto LAB_1045690a0;
  if ((param_1[0x14] != 0x3a) || (uVar14 = param_1[0x13] + param_1[0x12] * 10, 0x24b < uVar14))
  goto LAB_104569030;
  if ((param_1[0x15] - 0x3a < 0xfffffffffffffff6) || (param_1[0x16] - 0x3a < 0xfffffffffffffff6))
  goto LAB_1045690a0;
  uVar15 = param_1[0x16] + param_1[0x15] * 10;
  if (uVar15 < 0x24e) {
    uVar1 = uVar17 - 0xd050;
    lVar18 = *(long *)(uVar12 * 8 + 0x113084d58);
    iVar16 = (int)uVar1;
    if ((((((uint)(iVar16 * -0x3d70a3d7) >> 4 | iVar16 * -0x70000000) < 0xa3d70b) ||
         (((uVar17 & 3) == 0 && (iVar16 + (int)((uVar1 & 0xffffffff) / 100) * -100 != 0)))) &&
        (0x212 < uVar12)) && (bVar3 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695bc);
      (*pcVar2)();
    }
    lVar13 = lVar13 + -0x211;
    lVar10 = lVar18 + lVar13;
    if (SCARRY8(lVar18,lVar13)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10456959c);
      (*pcVar2)();
    }
    lVar18 = uVar1 * 0x16d + -0xafaa7;
    lVar13 = lVar10 + lVar18;
    if (SCARRY8(lVar10,lVar18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695a0);
      (*pcVar2)();
    }
    uVar12 = uVar17 - 0xd051 >> 2;
    lVar18 = lVar13 + uVar12;
    if (SCARRY8(lVar13,uVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695a4);
      (*pcVar2)();
    }
    uVar8 = (uint)(uVar17 - 0xd051);
    uVar17 = (ulong)((uVar8 >> 2 & 0x3fff) / 0x19);
    lVar13 = lVar18 - uVar17;
    if (SBORROW8(lVar18,uVar17)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695a8);
      (*pcVar2)();
    }
    uVar17 = (ulong)((uVar8 >> 4 & 0xfff) / 0x19);
    lVar18 = lVar13 + uVar17;
    if (SCARRY8(lVar13,uVar17)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695ac);
      (*pcVar2)();
    }
    lVar13 = lVar18 * 0x15180;
    if (SUB168(SEXT816(lVar18) * SEXT816(0x15180),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695b0);
      (*pcVar2)();
    }
    lVar18 = uVar15 + (uVar14 + uVar11 * 0x3c) * 0x3c + -0x1d7ed0;
    unaff_x22 = lVar13 + lVar18;
    if (SCARRY8(lVar13,lVar18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695b4);
      (*pcVar2)();
    }
    if (param_1[0x17] == 0x2e) {
      if (uVar19 != 0x14) {
        unaff_x23 = 0;
        uVar17 = 0x14;
        lVar13 = 100000000;
        plVar9 = param_1 + 0x18;
        do {
          if (uVar19 == uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10456958c);
            (*pcVar2)();
          }
          if (9 < *plVar9 - 0x30U) goto LAB_10456940c;
          lVar18 = (*plVar9 - 0x30U) * lVar13;
          if (lVar18 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104569590);
            (*pcVar2)();
          }
          if (0x7fffffff < lVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104569594);
            (*pcVar2)();
          }
          iVar16 = (int)unaff_x23;
          unaff_x23 = (ulong)(uint)(iVar16 + (int)lVar18);
          if (SCARRY4(iVar16,(int)lVar18)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104569598);
            (*pcVar2)();
          }
          lVar13 = lVar13 / 10;
          uVar17 = uVar17 + 1;
          plVar9 = plVar9 + 1;
        } while (uVar19 != uVar17);
      }
      goto LAB_104569030;
    }
    unaff_x23 = 0;
    uVar17 = 0x13;
LAB_10456940c:
    if (uVar19 <= uVar17) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695b8);
      (*pcVar2)();
    }
    lVar13 = plVar7[uVar17];
    if ((lVar13 == 0x2d) || (lVar13 == 0x2b)) {
      uVar12 = uVar17 + 6;
      if (SCARRY8(uVar17,6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695c0);
        (*pcVar2)();
      }
      if ((long)uVar12 <= (long)uVar19) {
        if (uVar19 <= uVar17 + 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695c4);
          (*pcVar2)();
        }
        if (uVar19 <= uVar17 + 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695c8);
          (*pcVar2)();
        }
        if ((0xfffffffffffffff5 < plVar7[uVar17 + 1] - 0x3aU) &&
           (0xfffffffffffffff5 < plVar7[uVar17 + 2] - 0x3aU)) {
          if (uVar19 <= uVar17 + 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695cc);
            (*pcVar2)();
          }
          if (uVar19 <= uVar17 + 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695d0);
            (*pcVar2)();
          }
          if ((0xfffffffffffffff5 < plVar7[uVar17 + 4] - 0x3aU) &&
             (0xfffffffffffffff5 < plVar7[uVar17 + 5] - 0x3aU)) {
            uVar11 = plVar7[uVar17 + 2] + plVar7[uVar17 + 1] * 10;
            if ((uVar11 < 0x21e) &&
               (uVar14 = plVar7[uVar17 + 5] + plVar7[uVar17 + 4] * 10, uVar14 < 0x24c)) {
              lVar18 = (plVar7 + uVar17)[3];
              _swift_bridgeObjectRelease();
              if (lVar18 == 0x3a) {
                lVar18 = uVar14 - 0x210;
                lVar10 = uVar11 * 0xe10 + -0x1d0100;
                if (lVar13 == 0x2b) {
                  lVar13 = unaff_x22 - lVar10;
                  if (SBORROW8(unaff_x22,lVar10)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695d4);
                    (*pcVar2)();
                  }
                  unaff_x22 = lVar13 + lVar18 * -0x3c;
                  if (SBORROW8(lVar13,lVar18 * 0x3c)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10456956c);
                    (*pcVar2)();
                  }
                }
                else {
                  lVar13 = unaff_x22 + lVar10;
                  if (SCARRY8(unaff_x22,lVar10)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045695d8);
                    (*pcVar2)();
                  }
                  unaff_x22 = lVar13 + lVar18 * 0x3c;
                  if (SCARRY8(lVar13,lVar18 * 0x3c)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x104569588);
                    (*pcVar2)();
                  }
                }
                goto LAB_10456945c;
              }
              goto LAB_104569034;
            }
            goto LAB_104569030;
          }
        }
        goto LAB_1045690a0;
      }
      goto LAB_104569030;
    }
    _swift_bridgeObjectRelease();
    if (lVar13 == 0x5a) {
      uVar12 = uVar17 + 1;
LAB_10456945c:
      if ((uVar12 == uVar19) && (unaff_x22 + 0xe7791f700U < 0x4977863880)) goto LAB_1045690dc;
    }
  }
  else {
LAB_104569030:
    _swift_bridgeObjectRelease();
  }
LAB_104569034:
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,param_1,0,0);
  param_1[1] = 0xf;
  *param_1 = 0;
  _swift_willThrow();
LAB_1045690dc:
  auVar20._8_8_ = unaff_x23;
  auVar20._0_8_ = unaff_x22;
  return auVar20;
}



/* Entry: 1045695d8; end: 104569b47;  */

undefined1  [16] FUN_1045695d8(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  bVar3 = false;
  bVar4 = true;
  if (param_1 + 0xe7791f700U < 0x4977863880) {
    bVar4 = 0x3b9ac9fe < (uint)param_2;
    bVar3 = (uint)param_2 == 999999999;
  }
  if (!bVar4 || bVar3) {
    lVar5 = param_1;
    uVar11 = param_2;
    FUN_1045ad39c();
    iVar9 = (int)uVar11;
    func_0x0001045ad458();
    if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b1c);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 4) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(4,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b34);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,4 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b20);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b38);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b24);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b3c);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    if ((int)lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b28);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b40);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b2c);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b44);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if ((int)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b30);
      (*pcVar2)();
    }
    puVar6 = PTR___ss5Int32VN_11034ee20;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar12);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104569b48);
        (*pcVar2)();
      }
      puVar8 = (undefined *)0x30;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(puVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    puVar6 = puVar13;
    __sSS6appendyySSF(puVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    FUN_1045ad13c(param_2);
    __sSS6appendyySSF(0x54,0xe100000000000000);
    __sSS6appendyySSF(0,0xe000000000000000);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_2,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0x5a,0xe100000000000000);
    uVar10 = 0xe000000000000000;
  }
  else {
    uVar10 = 0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar10;
  return auVar1 << 0x40;
}



/* Entry: 104569b48; end: 104569b53;  */

void FUN_104569b48(void)

{
  return;
}



/* Entry: 104569b54; end: 104569bfb;  */

void FUN_104569b54(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)*unaff_x20;
  uVar2 = (ulong)*(uint *)(unaff_x20 + 1);
  FUN_1045695d8();
  if (uVar2 == 0) {
    func_0x0001045406b8();
    _swift_allocError(&UNK_110788dc0,puVar1,0,0);
    *puVar1 = 1;
    _swift_willThrow();
  }
  else {
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0x22,0xe100000000000000);
  }
  return;
}



/* Entry: 104569bfc; end: 104569c5f;  */

void FUN_104569bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10457b090();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    FUN_104569004();
    _swift_bridgeObjectRelease(param_2);
    *unaff_x20 = param_1;
    *(int *)(unaff_x20 + 1) = (int)uVar1;
  }
  return;
}



/* Entry: 104569c60; end: 104569ce3;  */

void FUN_104569c60(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0);
  FUN_10456a010(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 104569ce4; end: 104569d6b;  */

void FUN_104569ce4(undefined8 param_1,code *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0);
  (*param_2)(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 104569d6c; end: 104569d6f;  */

void FUN_104569d6c(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4ec);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f4);
    (*pcVar1)();
  }
  dVar7 = param_1 - (double)(long)param_1;
  dVar8 = dVar7 * 1000000000.0;
  dStack_68 = dVar8;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == *(int *)
                PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_11034ebc8)
  {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_11034ebd8) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_11034ebe0) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_11034ebb8) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_11034ebc0) {
    dVar7 = (double)(long)dVar8;
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    dVar8 = dStack_68;
  }
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  (**(code **)(lVar6 + 8))(param_2,lVar3);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f8);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4fc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a500);
    (*pcVar1)();
  }
  if (SCARRY8((long)param_1,(long)dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a504);
    (*pcVar1)();
  }
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a50c);
      (*pcVar1)();
    }
    if (dVar8 < 2147483648.0) {
      func_0x000104569c70((long)param_1 + (long)dVar7,(int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a510);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a508);
  (*pcVar1)();
}



/* Entry: 104569d70; end: 104569e4b;  */

undefined1 * FUN_104569d70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV026timeIntervalSinceReferenceB0Sdvg();
  (**(code **)(lVar3 + 0x68))
            (puVar2,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0
             ,lVar1);
  FUN_10456a26c(param_1,puVar2);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return puVar2;
}



/* Entry: 104569e4c; end: 104569e6b;  */

double FUN_104569e4c(long param_1,int param_2)

{
  return (double)param_2 / 1000000000.0 + (double)param_1;
}



/* Entry: 104569e6c; end: 104569eff;  */

double FUN_104569e6c(double param_1,long param_2,int param_3)

{
  code *pcVar1;
  
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569ef4);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569ef8);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569efc);
    (*pcVar1)();
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    return (double)param_3 / 1000000000.0 + (double)(param_2 - (long)param_1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104569f00);
  (*pcVar1)();
}



/* Entry: 104569f00; end: 104569fa3;  */

void FUN_104569f00(undefined8 param_1,double param_2,long param_3,int param_4)

{
  code *pcVar1;
  
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569f98);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569f9c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fa0);
    (*pcVar1)();
  }
  if (!SBORROW8(param_3,(long)param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb5114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4DateV026timeIntervalSinceReferenceB0ACSd_tcfC_110350b08)
              (param_1,(double)param_4 / 1000000000.0 + (double)(param_3 - (long)param_2));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fa4);
  (*pcVar1)();
}



/* Entry: 104569fa4; end: 104569fa7;  */

void FUN_104569fa4(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fd8);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000104569c70(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fdc);
  (*pcVar1)();
}



/* Entry: 104569fa8; end: 10456a00f;  */

void FUN_104569fa8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fd8);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000104569c70(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fdc);
  (*pcVar1)();
}



/* Entry: 10456a010; end: 10456a26b;  */

void FUN_10456a010(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_60 [8];
  double dStack_58;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a258);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a25c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a260);
    (*pcVar1)();
  }
  dVar7 = (param_1 - (double)(long)param_1) * 1000000000.0;
  dStack_58 = dVar7;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_11034ebc8)
       ) || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_11034ebd8)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_11034ebe0 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_11034ebb8)))) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_11034ebc0) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    pcVar1 = *(code **)(lVar6 + 8);
    (*pcVar1)(param_2,lVar3);
    (*pcVar1)(puVar5,lVar3);
    dVar7 = dStack_58;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a264);
    (*pcVar1)();
  }
  if (dVar7 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a268);
    (*pcVar1)();
  }
  if (dVar7 < 2147483648.0) {
    func_0x000104569c70((long)param_1,(int)dVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a26c);
  (*pcVar1)();
}



/* Entry: 10456a26c; end: 10456a50f;  */

void FUN_10456a26c(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4ec);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f4);
    (*pcVar1)();
  }
  dVar7 = param_1 - (double)(long)param_1;
  dVar8 = dVar7 * 1000000000.0;
  dStack_68 = dVar8;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == *(int *)
                PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_11034ebd0) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_11034ebc8)
  {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_11034ebd8) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_11034ebe0) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_11034ebb8) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_11034ebc0) {
    dVar7 = (double)(long)dVar8;
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    dVar8 = dStack_68;
  }
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  (**(code **)(lVar6 + 8))(param_2,lVar3);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4f8);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a4fc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a500);
    (*pcVar1)();
  }
  if (SCARRY8((long)param_1,(long)dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a504);
    (*pcVar1)();
  }
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a50c);
      (*pcVar1)();
    }
    if (dVar8 < 2147483648.0) {
      func_0x000104569c70((long)param_1 + (long)dVar7,(int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a510);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10456a508);
  (*pcVar1)();
}



/* Entry: 10456a510; end: 10456a513;  */

void FUN_10456a510(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fd8);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000104569c70(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104569fdc);
  (*pcVar1)();
}



/* Entry: 10456a514; end: 10456a7ef;  */

void FUN_10456a514(undefined1 *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  bVar4 = (byte)unaff_x20[3];
  if ((((uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar4 == 0xff)) {
    func_0x0001045406b8();
    _swift_allocError(&UNK_110788dc0,param_1,0,0);
    uVar11 = 5;
LAB_10456a57c:
    *param_1 = uVar11;
    _swift_willThrow();
  }
  else {
    uVar5 = (uint)(uVar12 >> 0x3c) & 0xfffffc03 | (bVar4 & 0x3f) << 2;
    if (uVar5 < 3) {
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          FUN_1045670c4(uVar1,uVar2,uVar12,bVar4);
          FUN_1045727d4(uVar1,uVar2);
          goto LAB_10456a788;
        }
        if (((uVar1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
          FUN_104573020(uVar1);
          return;
        }
        func_0x0001045406b8();
        _swift_allocError(&UNK_110788dc0,param_1,0,0);
        uVar11 = 6;
        goto LAB_10456a57c;
      }
      pcVar8 = "null";
      uVar9 = 4;
    }
    else {
      if (uVar5 != 3) {
        uStack_88 = uVar1;
        uStack_80 = uVar2;
        if (uVar5 == 4) {
          puStack_70 = &UNK_11078f600;
          ppuStack_68 = &PTR_DAT_110788300;
          puVar7 = &uStack_88;
          uStack_78 = uVar12;
          func_0x0001000a8868();
          uVar10 = *puVar7;
          uVar3 = puVar7[1];
          uVar13 = puVar7[2];
          FUN_1045670a0(uVar1,uVar2,uVar12,bVar4);
          FUN_1045670c4(uVar1,uVar2,uVar12,bVar4);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_104567360(uVar6,uVar10,uVar3,uVar13);
        }
        else {
          uStack_78 = uVar12 & 0xcfffffffffffffff;
          puStack_70 = &UNK_11078f790;
          ppuStack_68 = &PTR_DAT_110788298;
          puVar7 = &uStack_88;
          func_0x0001000a8868();
          uVar10 = *puVar7;
          uVar3 = puVar7[1];
          uVar13 = puVar7[2];
          FUN_1045670a0(uVar1,uVar2,uVar12,bVar4);
          FUN_1045670c4(uVar1,uVar2,uVar12,bVar4);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_1045667a0(uVar6,uVar10,uVar3,uVar13);
        }
        if (unaff_x21 != 0) {
          FUN_104567140(uVar1,uVar2,uVar12,bVar4);
          func_0x0001000834e4(&uStack_88);
          return;
        }
        func_0x0001000834e4(&uStack_88);
        func_0x000104540f24(uVar6,uVar10);
LAB_10456a788:
        FUN_104567140(uVar1,uVar2,uVar12,bVar4);
        return;
      }
      if ((uVar1 & 1) == 0) {
        pcVar8 = "false";
        uVar9 = 5;
      }
      else {
        pcVar8 = "true";
        uVar9 = 4;
      }
    }
    FUN_104540d74(pcVar8,uVar9);
  }
  return;
}



/* Entry: 10456a7f0; end: 10456abb7;  */

/* WARNING: Removing unreachable block (ram,0x00010456a95c) */
/* WARNING: Removing unreachable block (ram,0x00010456aa18) */
/* WARNING: Removing unreachable block (ram,0x00010456a96c) */

void FUN_10456a7f0(ulong param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  
  lVar1 = param_2;
  FUN_10457b3ac();
  if (unaff_x21 != 0) {
    return;
  }
  if ((lVar1 == 0x6e) && (param_3 == (undefined8 *)0xe100000000000000)) {
LAB_10456a878:
    _swift_bridgeObjectRelease();
    func_0x00010457b2d0();
    if (((ulong)param_3 & 1) == 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,param_3,0,0);
      *param_3 = 0;
      param_3[1] = 0;
      _swift_willThrow();
    }
    else {
      FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      unaff_x20[1] = 1;
      *unaff_x20 = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    return;
  }
  uVar2 = 0;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x6e,0xe100000000000000,lVar1,param_3,0);
  if ((uVar2 & 1) != 0) goto LAB_10456a878;
  if ((lVar1 != 0x5b) || (param_3 != (undefined8 *)0xe100000000000000)) {
    uVar2 = 0x5b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5b,0xe100000000000000,lVar1,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 != 0x7b) || (param_3 != (undefined8 *)0xe100000000000000)) {
        uVar2 = 0x7b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7b,0xe100000000000000,lVar1,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((lVar1 == 0x74) && (param_3 == (undefined8 *)0xe100000000000000)) {
LAB_10456aa5c:
            _swift_bridgeObjectRelease();
            FUN_10457ba98();
            FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
            *unaff_x20 = (ulong)param_3 & 1;
            uVar2 = 0x3000000000000000;
          }
          else {
            uVar2 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74,0xe100000000000000,lVar1,param_3,0);
            if (((uVar2 & 1) != 0) || (lVar1 == 0x66 && param_3 == (undefined8 *)0xe100000000000000)
               ) goto LAB_10456aa5c;
            uVar2 = 0;
            uVar4 = 0xe100000000000000;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x66,0xe100000000000000,lVar1,param_3,0);
            if ((uVar2 & 1) != 0) goto LAB_10456aa5c;
            if ((lVar1 == 0x22) && (param_3 == (undefined8 *)0xe100000000000000)) {
              _swift_bridgeObjectRelease();
LAB_10456ab3c:
              FUN_10457b090();
              FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
              *unaff_x20 = (ulong)param_3;
              unaff_x20[1] = uVar4;
              unaff_x20[2] = 0x2000000000000000;
              goto LAB_10456aaa0;
            }
            uVar2 = 0;
            uVar4 = 0xe100000000000000;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x22,0xe100000000000000,lVar1,param_3,0);
            _swift_bridgeObjectRelease();
            if ((uVar2 & 1) != 0) goto LAB_10456ab3c;
            FUN_10457b480();
            FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
            *unaff_x20 = param_1;
            uVar2 = 0x1000000000000000;
          }
          unaff_x20[2] = uVar2;
          unaff_x20[1] = 0;
LAB_10456aaa0:
          *(undefined1 *)(unaff_x20 + 3) = 0;
          return;
        }
      }
      _swift_bridgeObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10460c350();
      FUN_104567838(param_2);
      FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      *unaff_x20 = (ulong)puVar3;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0xc000000000000000;
      goto LAB_10456a994;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10456692c(param_2);
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
  *unaff_x20 = (ulong)puVar3;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0xd000000000000000;
LAB_10456a994:
  *(undefined1 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 10456abb8; end: 10456acfb;  */

void FUN_10456abb8(double *param_1,long param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(dVar1,0,0x1000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(dVar1,0,0x1000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = dVar1;
  param_1[2] = 1.2882297539194267e-231;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = -2.0;
  param_1[4] = 0.0;
  return;
}



/* Entry: 10456acfc; end: 10456ae23;  */

void FUN_10456acfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(uVar1,0,0x1000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(uVar1,0,0x1000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456ae24; end: 10456aebb;  */

void FUN_10456ae24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(uVar1,uVar2,0x2000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(uVar1,uVar2,0x2000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456aebc; end: 10456afdb;  */

void FUN_10456aebc(undefined8 *param_1)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(0,1,0,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(0,1,0,0);
  func_0x00010006c090(0,0xc000000000000000);
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456afdc; end: 10456b073;  */

undefined1  [16] FUN_10456afdc(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar3 [16];
  undefined *puStack_40;
  undefined2 uStack_38;
  
  puStack_40 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_38 = 0x100;
  FUN_10456a514(&puStack_40,param_1 & 0x1010101);
  puVar1 = puStack_40;
  if (unaff_x21 == 0) {
    unaff_x22 = *(undefined8 *)(puStack_40 + 0x10);
    puVar2 = puStack_40;
    _swift_bridgeObjectRetain();
    unaff_x20 = puVar2 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x20,unaff_x22);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    _swift_bridgeObjectRelease();
  }
  auVar3._8_8_ = unaff_x22;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}



/* Entry: 10456b074; end: 10456b0ab;  */

undefined1  [16] FUN_10456b074(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x21;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)(param_1 & 0x1010101);
  FUN_10456afdc(uVar1);
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    uVar1 = extraout_x8;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10456b0ac; end: 10456b143;  */

void FUN_10456b0ac(undefined8 *param_1)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(0,1,0,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(0,1,0,0);
  func_0x00010006c090(0,0xc000000000000000);
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 10456b144; end: 10456b147;  */

void FUN_10456b144(undefined8 *param_1,undefined8 param_2)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,0,0x1000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,0,0x1000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b148; end: 10456b1e7;  */

void FUN_10456b148(undefined8 *param_1,undefined8 param_2)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,0,0x1000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,0,0x1000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b1e8; end: 10456b1eb;  */

void FUN_10456b1e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,param_3,0x2000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,param_3,0x2000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b1ec; end: 10456b287;  */

void FUN_10456b1ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,param_3,0x2000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,param_3,0x2000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b288; end: 10456b28b;  */

void FUN_10456b288(ulong *param_1,ulong param_2)

{
  param_2 = param_2 & 1;
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,0,0x3000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,0,0x3000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x3000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b28c; end: 10456b31f;  */

void FUN_10456b28c(ulong *param_1,ulong param_2)

{
  param_2 = param_2 & 1;
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,0,0x3000000000000000,0);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,0,0x3000000000000000,0);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x3000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b320; end: 10456b46f;  */

void FUN_10456b320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104567140(0,0,0x3000000000000000,0xff);
  FUN_1045670a0(param_2,param_3,param_4,1);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_104567140(param_2,param_3,param_4,1);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 10456b470; end: 10456b497;  */

undefined * FUN_10456b470(void)

{
  return PTR___ss5Int64Vs35_ExpressibleByBuiltinIntegerLiteralsWP_11034ee70;
}



/* Entry: 10456b498; end: 10456b4d7;  */

void FUN_10456b498(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18158;
  _swift_getWitnessTable(&UNK_10dd18158,&UNK_11078f680);
  puRam0000000113085e40 = puVar1;
  return;
}



/* Entry: 10456b4d8; end: 10456b4e7;  */

undefined * FUN_10456b4d8(void)

{
  return PTR___sSSs34_ExpressibleByBuiltinStringLiteralsWP_11034dad8;
}



/* Entry: 10456b4e8; end: 10456b527;  */

void FUN_10456b4e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113085e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18198;
  _swift_getWitnessTable(&UNK_10dd18198,&UNK_11078f680);
  puRam0000000113085e48 = puVar1;
  return;
}



/* Entry: 10456b528; end: 10456b55f;  */

undefined * FUN_10456b528(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_11034dae8;
}



/* Entry: 10456b560; end: 10456b623;  */

void FUN_10456b560(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *unaff_x20;
  long unaff_x21;
  
  plVar2 = param_1;
  FUN_10457e0a0();
  bVar1 = (byte)plVar2;
  lVar4 = param_1[2];
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (lVar4 != 0) goto LAB_10456b5ac;
  }
  else if (lVar4 != param_1[1] - lVar5) {
LAB_10456b5ac:
    if (*(char *)(lVar5 + lVar4) == 'n') {
      uVar3 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      bVar1 = (byte)uVar3;
      if ((uVar3 & 1) != 0) {
        bVar1 = 0;
        goto LAB_10456b600;
      }
    }
  }
  if ((char)param_1[0xf] == '\x01') {
    FUN_10457c714();
  }
  else {
    FUN_10457ba98();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456b600:
  *unaff_x20 = bVar1 & 1;
  return;
}



/* Entry: 10456b624; end: 10456b6c7;  */

void FUN_10456b624(undefined4 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  FUN_10457e0a0();
  lVar2 = param_2[2];
  lVar3 = *param_2;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456b668;
  }
  else if (lVar2 != param_2[1] - lVar3) {
LAB_10456b668:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_10456b6b4;
    }
  }
  FUN_10457bb8c();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456b6b4:
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10456b6c8; end: 10456b7af;  */

void FUN_10456b6c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456b70c;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_10456b70c:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_10456b79c;
      }
    }
  }
  FUN_10457c1a4();
  if (unaff_x21 != 0) {
    return;
  }
  if (plVar1 != (long *)(long)(int)plVar1) {
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,plVar1,0,0);
    plVar1[1] = 2;
    *plVar1 = 0;
    _swift_willThrow();
    return;
  }
LAB_10456b79c:
  *unaff_x20 = (int)plVar1;
  return;
}



/* Entry: 10456b7b0; end: 10456b853;  */

void FUN_10456b7b0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10457e0a0();
  lVar2 = param_2[2];
  lVar3 = *param_2;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456b7f4;
  }
  else if (lVar2 != param_2[1] - lVar3) {
LAB_10456b7f4:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_10456b840;
    }
  }
  FUN_10457b480();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456b840:
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10456b854; end: 10456b93b;  */

void FUN_10456b854(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456b898;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_10456b898:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_10456b928;
      }
    }
  }
  func_0x00010457c1f4();
  if (unaff_x21 != 0) {
    return;
  }
  if ((ulong)plVar1 >> 0x20 != 0) {
    FUN_104540590();
    _swift_allocError(&UNK_110788c08,plVar1,0,0);
    plVar1[1] = 2;
    *plVar1 = 0;
    _swift_willThrow();
    return;
  }
LAB_10456b928:
  *unaff_x20 = (int)plVar1;
  return;
}



/* Entry: 10456b93c; end: 10456b9eb;  */

void FUN_10456b93c(long *param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_10457e0a0();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_10456b98c;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_10456b98c:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0x112d48d68;
      func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
      _swift_initStaticObject();
      FUN_10457eae4();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_10456b9d4;
      }
    }
  }
  (*param_3)();
  if (unaff_x21 != 0) {
    return;
  }
LAB_10456b9d4:
  *unaff_x20 = (ulong)plVar1;
  return;
}



/* Entry: 10456b9ec; end: 10456ba0f;  */

undefined1  [16] FUN_10456b9ec(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 10456ba10; end: 10456ba3f;  */

void FUN_10456ba10(void)

{
  undefined8 *unaff_x20;
  
  FUN_10456c1a4(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 10456ba40; end: 10456ba63;  */

undefined1  [16] FUN_10456ba40(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 10456ba64; end: 10456ba93;  */

void FUN_10456ba64(void)

{
  undefined4 *unaff_x20;
  
  FUN_10456c104(*unaff_x20,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4));
  return;
}



/* Entry: 10456ba94; end: 10456ba9f;  */

void FUN_10456ba94(void)

{
  return;
}



/* Entry: 10456baa0; end: 10456bb43;  */

void FUN_10456baa0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10456c2c8();
  __sSzsE11descriptionSSvg(PTR___ss5Int64VN_11034ee50,uVar1);
  if ((param_1 & 1) == 0) {
    __sSS6appendyySSF();
    _swift_bridgeObjectRetain(0xe100000000000000);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  return;
}



/* Entry: 10456bb44; end: 10456bb67;  */

void FUN_10456bb44(undefined8 param_1)

{
  FUN_10456b93c(param_1,0x113086168,FUN_10457c1a4);
  return;
}



/* Entry: 10456bb68; end: 10456bc0b;  */

void FUN_10456bb68(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_11034f048,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  if ((param_1 & 1) == 0) {
    __sSS6appendyySSF();
    _swift_bridgeObjectRetain(0xe100000000000000);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  return;
}



/* Entry: 10456bc0c; end: 10456bc2f;  */

void FUN_10456bc0c(undefined8 param_1)

{
  FUN_10456b93c(param_1,0x113086138,0x10457c1f4);
  return;
}



/* Entry: 10456bc30; end: 10456bc3b;  */

void FUN_10456bc30(void)

{
  return;
}



/* Entry: 10456bc3c; end: 10456bc83;  */

void FUN_10456bc3c(void)

{
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  return;
}



/* Entry: 10456bc84; end: 10456bc97;  */

void FUN_10456bc84(void)

{
  FUN_10456b6c8();
  return;
}



/* Entry: 10456bc98; end: 10456bcdf;  */

void FUN_10456bc98(void)

{
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_11034f020,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
  return;
}



/* Entry: 10456bce0; end: 10456bcf3;  */

void FUN_10456bce0(void)

{
  FUN_10456b854();
  return;
}



/* Entry: 10456bcf4; end: 10456bd4b;  */

uint FUN_10456bcf4(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 10456bd4c; end: 10456bd5f;  */

void FUN_10456bd4c(void)

{
  FUN_10456b560();
  return;
}



/* Entry: 10456bd60; end: 10456bd63;  */

undefined8 FUN_10456bd60(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 10456bd64; end: 10456bdbb;  */

undefined8 FUN_10456bd64(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 10456bdbc; end: 10456bddf;  */

void FUN_10456bdbc(void)

{
  undefined8 *unaff_x20;
  
  FUN_10456c244(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],FUN_1045727d4);
  return;
}



/* Entry: 10456bde0; end: 10456be47;  */

void FUN_10456bde0(ulong param_1,ulong param_2)

{
  ulong *unaff_x20;
  long unaff_x21;
  
  func_0x00010457b2d0();
  if ((param_1 & 1) == 0) {
    FUN_10457b090();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    param_1 = 0;
    param_2 = 0xe000000000000000;
  }
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10456be48; end: 10456bea7;  */

void FUN_10456be48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  func_0x00010006c00c(0,0xc000000000000000);
  _swift_bridgeObjectRelease(uVar2);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 10456bea8; end: 10456bf13;  */

undefined8 FUN_10456bea8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010006c090(0,0xc000000000000000);
  func_0x00010006c00c(param_1,param_2);
  func_0x00010006c00c(0,0xc000000000000000);
  func_0x00010006c090(param_1,param_2);
  func_0x00010006c090(0,0xc000000000000000);
  return param_1;
}



/* Entry: 10456bf14; end: 10456bf37;  */

void FUN_10456bf14(void)

{
  undefined8 *unaff_x20;
  
  FUN_10456c244(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],FUN_10457519c);
  return;
}



/* Entry: 10456bf38; end: 10456bf9f;  */

void FUN_10456bf38(ulong param_1,ulong param_2)

{
  ulong *unaff_x20;
  long unaff_x21;
  
  func_0x00010457b2d0();
  if ((param_1 & 1) == 0) {
    FUN_10457c864();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    param_1 = 0;
    param_2 = 0xc000000000000000;
  }
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10456bfa0; end: 10456c057;  */

undefined ** FUN_10456bfa0(void)

{
  return &PTR_DAT_113085860;
}



/* Entry: 10456c058; end: 10456c097;  */

void FUN_10456c058(void)

{
  undefined *puVar1;
  
  if (puRam0000000113086050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd184d0;
  _swift_getWitnessTable(&UNK_10dd184d0,&UNK_110790c80);
  puRam0000000113086050 = puVar1;
  return;
}



/* Entry: 10456c098; end: 10456c0a7;  */

undefined * FUN_10456c098(void)

{
  return PTR___sSSs34_ExpressibleByBuiltinStringLiteralsWP_11034dad8;
}



/* Entry: 10456c0a8; end: 10456c0e7;  */

void FUN_10456c0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113086058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18510;
  _swift_getWitnessTable(&UNK_10dd18510,&UNK_110790c80);
  puRam0000000113086058 = puVar1;
  return;
}



/* Entry: 10456c0e8; end: 10456c103;  */

undefined * FUN_10456c0e8(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_11034dae8;
}



/* Entry: 10456c104; end: 10456c1a3;  */

void FUN_10456c104(uint param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 & 0x7fffffff) < 0x7f800000) {
    __sSf11descriptionSSvg();
  }
  else {
    func_0x000104573090();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    _swift_bridgeObjectRetain(puVar1);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar1 + 0x20,uVar2);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  return;
}



/* Entry: 10456c1a4; end: 10456c243;  */

void FUN_10456c1a4(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    __sSd11descriptionSSvg();
  }
  else {
    FUN_104573020();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    _swift_bridgeObjectRetain(puVar1);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar1 + 0x20,uVar2);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  return;
}


