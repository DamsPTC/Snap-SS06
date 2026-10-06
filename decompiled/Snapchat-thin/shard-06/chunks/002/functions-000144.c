/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045a3830; end: 1045a390b;  */

void FUN_1045a3830(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  bVar3 = (param_1 & 1) == 0;
  pcVar2 = "true";
  if (bVar3) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar3) {
    uVar1 = 5;
  }
  FUN_104540d74(pcVar2,uVar1);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 10;
  *unaff_x20 = uVar6;
  return;
}



/* Entry: 1045a390c; end: 1045a39db;  */

void FUN_1045a390c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  FUN_1045a07b4(param_1,param_3,param_4);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a39dc; end: 1045a3e0f;  */

void FUN_1045a39dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  unkbyte9 Var13;
  unkbyte9 Var14;
  unkbyte9 Var15;
  unkbyte9 Var16;
  unkbyte9 Var17;
  unkbyte9 Var18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar25;
  long unaff_x21;
  long lVar26;
  undefined8 uVar27;
  code *pcVar28;
  long lVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar26 = *(long *)(param_3 + -8);
  lStack_130 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar29 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1045a23d0(param_2);
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)pVar1;
  Var16 = *pVar1;
  Var15 = *pVar1;
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)pVar1;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  Var14 = *pVar1;
  Var13 = *pVar1;
  pVar1 = (unkbyte9 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)pVar1;
  Var18 = *pVar1;
  Var17 = *pVar1;
  uVar25 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar21 = param_3;
  _swift_conformsToProtocol(param_3,&DAT_10e8147e0);
  if ((param_3 == 0) || (lVar21 == 0)) {
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar25);
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    auStack_90 = ZEXT216(0);
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    pcVar28 = *(code **)(lVar21 + 8);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar25);
    (*pcVar28)(auStack_a0,param_3,lVar21);
    uVar38 = (undefined1)auStack_a0._8_8_;
    uVar39 = SUB81(auStack_a0._8_8_,1);
    uVar40 = SUB81(auStack_a0._8_8_,2);
    uVar41 = SUB81(auStack_a0._8_8_,3);
    uVar42 = SUB81(auStack_a0._8_8_,4);
    uVar43 = SUB81(auStack_a0._8_8_,5);
    uVar44 = SUB81(auStack_a0._8_8_,6);
    uVar45 = SUB81(auStack_a0._8_8_,7);
    uVar30 = (undefined1)auStack_a0._0_8_;
    uVar31 = SUB81(auStack_a0._0_8_,1);
    uVar32 = SUB81(auStack_a0._0_8_,2);
    uVar33 = SUB81(auStack_a0._0_8_,3);
    uVar34 = SUB81(auStack_a0._0_8_,4);
    uVar35 = SUB81(auStack_a0._0_8_,5);
    uVar36 = SUB81(auStack_a0._0_8_,6);
    uVar37 = SUB81(auStack_a0._0_8_,7);
  }
  *(ulong *)(unaff_x20 + 0x18) =
       CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,CONCAT13(uVar41,CONCAT12(
                                                  uVar40,CONCAT11(uVar39,uVar38)))))));
  *(ulong *)(unaff_x20 + 0x10) =
       CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(uVar33,CONCAT12(
                                                  uVar32,CONCAT11(uVar31,uVar30)))))));
  *(long *)(unaff_x20 + 0x28) = auStack_90._8_8_;
  *(long *)(unaff_x20 + 0x20) = auStack_90._0_8_;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_80;
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10460d4c8();
  uStack_118 = uVar25;
  _swift_bridgeObjectRelease(uVar25);
  *(undefined **)(unaff_x20 + 0x40) = puVar22;
  pcVar28 = *(code **)(lVar26 + 0x10);
  (*pcVar28)(lVar29 - extraout_x12,param_1,param_3);
  uVar25 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar23 = &uStack_d0;
  _swift_dynamicCast(puVar23,lVar29 - extraout_x12,param_3,uVar25,0xe);
  lVar21 = lStack_b0;
  uVar25 = uStack_b8;
  if ((int)puVar23 == 0) {
    lStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x0001045a8630(&uStack_d0,0x113086678,&UNK_10dd18800);
    uVar25 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_d0,uStack_b8);
    (**(code **)(lVar21 + 0x10))(uVar25,lVar21);
    func_0x0001000834e4(&uStack_d0);
  }
  _swift_bridgeObjectRelease(uVar27);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar25;
  FUN_104540d74(" {\n",3);
  if (lRam0000000113087650 != -1) {
    _swift_once(0x113087650,FUN_1045a040c);
  }
  _swift_bridgeObjectRetain(uRam0000000113087648);
  func_0x000103ee3b44();
  (*pcVar28)(lVar29,param_1,param_3);
  puVar23 = &uStack_d0;
  _swift_dynamicCast(puVar23,lVar29,param_3,&UNK_11078ace8,6);
  uVar20 = uStack_c0;
  uVar19 = uStack_c8;
  uVar25 = uStack_d0;
  if ((int)puVar23 == 0) {
    (**(code **)(lStack_130 + 0x48))();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(uStack_118);
      _swift_bridgeObjectRelease(uVar27);
      _swift_unexpectedError(unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x121)
      ;
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x1045a3e10);
      (*pcVar28)();
    }
  }
  else {
    FUN_10453d538();
    FUN_1045bed7c();
    if (unaff_x21 != 0) {
      _swift_unexpectedError
                (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x1045a3ddc);
      (*pcVar28)();
    }
    func_0x00010006c090(uVar25,uVar19);
    _swift_release(uVar20);
  }
  uVar24 = *(ulong *)(*(long *)(unaff_x20 + 8) + 0x10);
  if (1 < uVar24) {
    uVar30 = (undefined1)((ulong)uVar12 >> 8);
    uVar31 = (undefined1)((ulong)uVar12 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar12 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar12 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar12 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar12 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar12 >> 0x38);
    auVar46[9] = uVar30;
    auVar46._0_9_ = Var13;
    auVar46[10] = uVar31;
    auVar46[0xb] = uVar32;
    auVar46[0xc] = uVar33;
    auVar46[0xd] = uVar34;
    auVar46[0xe] = uVar35;
    auVar46[0xf] = uVar36;
    auVar2[9] = uVar30;
    auVar2._0_9_ = Var14;
    auVar2[10] = uVar31;
    auVar2[0xb] = uVar32;
    auVar2[0xc] = uVar33;
    auVar2[0xd] = uVar34;
    auVar2[0xe] = uVar35;
    auVar2[0xf] = uVar36;
    auVar46 = NEON_ext(auVar46,auVar2,8,1);
    uStack_138 = auVar46._8_8_;
    uStack_140 = auVar46._0_8_;
    uVar30 = (undefined1)((ulong)uVar9 >> 8);
    uVar31 = (undefined1)((ulong)uVar9 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar9 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar9 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar9 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar9 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar9 >> 0x38);
    auVar3[9] = uVar30;
    auVar3._0_9_ = Var15;
    auVar3[10] = uVar31;
    auVar3[0xb] = uVar32;
    auVar3[0xc] = uVar33;
    auVar3[0xd] = uVar34;
    auVar3[0xe] = uVar35;
    auVar3[0xf] = uVar36;
    auVar4[9] = uVar30;
    auVar4._0_9_ = Var16;
    auVar4[10] = uVar31;
    auVar4[0xb] = uVar32;
    auVar4[0xc] = uVar33;
    auVar4[0xd] = uVar34;
    auVar4[0xe] = uVar35;
    auVar4[0xf] = uVar36;
    auVar46 = NEON_ext(auVar3,auVar4,8,1);
    uStack_128 = auVar46._8_8_;
    lStack_130 = auVar46._0_8_;
    uVar30 = (undefined1)((ulong)uVar10 >> 8);
    uVar31 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar32 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar33 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar34 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar35 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar36 = (undefined1)((ulong)uVar10 >> 0x38);
    auVar5[9] = uVar30;
    auVar5._0_9_ = Var17;
    auVar5[10] = uVar31;
    auVar5[0xb] = uVar32;
    auVar5[0xc] = uVar33;
    auVar5[0xd] = uVar34;
    auVar5[0xe] = uVar35;
    auVar5[0xf] = uVar36;
    auVar6[9] = uVar30;
    auVar6._0_9_ = Var18;
    auVar6[10] = uVar31;
    auVar6[0xb] = uVar32;
    auVar6[0xc] = uVar33;
    auVar6[0xd] = uVar34;
    auVar6[0xe] = uVar35;
    auVar6[0xf] = uVar36;
    auVar46 = NEON_ext(auVar5,auVar6,8,1);
    FUN_1045a8370(uVar24 - 2);
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
    func_0x000103ee3b44();
    FUN_104540d74(&DAT_10f38bf4b,2);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
    *(undefined8 *)(unaff_x20 + 0x48) = uVar27;
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
    *(undefined8 *)(unaff_x20 + 0x40) = uStack_118;
    FUN_104571bb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
    *(long *)(unaff_x20 + 0x28) = lStack_130;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_140;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
    *(long *)(unaff_x20 + 0x18) = auVar46._0_8_;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar28 = (code *)SoftwareBreakpoint(1,0x1045a3dbc);
  (*pcVar28)();
}



/* Entry: 1045a3e10; end: 1045a3fc3;  */

void FUN_1045a3e10(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  
  uVar8 = unaff_x20[1];
  func_0x0001045a2164(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pfVar5 = (float *)(param_1 + 0x20);
    do {
      fVar9 = *pfVar5;
      _swift_bridgeObjectRetain(uVar8);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar9 & 0x7fffff) == 0) {
          if (0.0 <= fVar9) {
            pcVar1 = "inf";
            goto LAB_1045a3f0c;
          }
          pcVar1 = "-inf";
          uVar4 = 4;
        }
        else {
          pcVar1 = "nan";
LAB_1045a3f0c:
          uVar4 = 3;
        }
        FUN_104540d74(pcVar1,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg(fVar9);
        func_0x000104540f24();
      }
      uVar6 = *unaff_x20;
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001014d97ac(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar6 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
      pfVar5 = pfVar5 + 1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a3fc4; end: 1045a4177;  */

void FUN_1045a3fc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double *pdVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  
  uVar8 = unaff_x20[1];
  func_0x0001045a2164(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pdVar5 = (double *)(param_1 + 0x20);
    do {
      dVar9 = *pdVar5;
      _swift_bridgeObjectRetain(uVar8);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar9 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar9) {
            pcVar1 = "inf";
            goto LAB_1045a40c0;
          }
          pcVar1 = "-inf";
          uVar4 = 4;
        }
        else {
          pcVar1 = "nan";
LAB_1045a40c0:
          uVar4 = 3;
        }
        FUN_104540d74(pcVar1,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg(dVar9);
        func_0x000104540f24();
      }
      uVar6 = *unaff_x20;
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001014d97ac(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar6 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
      pdVar5 = pdVar5 + 1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a4178; end: 1045a434b;  */

void FUN_1045a4178(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  func_0x0001045a2164(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    piVar7 = (int *)(param_1 + 0x20);
    do {
      iVar1 = *piVar7;
      lVar5 = (long)iVar1;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      if (iVar1 < 0) {
        uVar4 = *unaff_x20;
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x0001045a0584(lVar5);
      uVar4 = *unaff_x20;
      uVar2 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar4 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar4;
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar6 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a434c; end: 1045a451f;  */

void FUN_1045a434c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  func_0x0001045a2164(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    plVar6 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      if (lVar4 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        lVar4 = -lVar4;
      }
      func_0x0001045a0584(lVar4);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
      *unaff_x20 = uVar3;
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a4520; end: 1045a466f;  */

void FUN_1045a4520(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  func_0x0001045a2164(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      func_0x0001045a0584(uVar1);
      uVar4 = *unaff_x20;
      uVar2 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar4;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001014d97ac(uVar4,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar4 + uVar2 + 0x20) = 10;
      *unaff_x20 = uVar4;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a4670; end: 1045a47bf;  */

void FUN_1045a4670(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  func_0x0001045a2164(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar4 = *puVar6;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      func_0x0001045a0584(uVar4);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
      *unaff_x20 = uVar3;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a47c0; end: 1045a492f;  */

void FUN_1045a47c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  
  uVar9 = unaff_x20[1];
  func_0x0001045a2164(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    pcVar8 = (char *)(param_1 + 0x20);
    do {
      cVar3 = *pcVar8;
      _swift_bridgeObjectRetain(uVar9);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      pcVar2 = "true";
      if (cVar3 == '\0') {
        pcVar2 = "false";
      }
      uVar1 = 4;
      if (cVar3 == '\0') {
        uVar1 = 5;
      }
      FUN_104540d74(pcVar2,uVar1);
      uVar6 = *unaff_x20;
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001014d97ac(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined1 *)(uVar6 + uVar4 + 0x20) = 10;
      *unaff_x20 = uVar6;
      pcVar8 = pcVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a4930; end: 1045a4a97;  */

void FUN_1045a4930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = unaff_x20[1];
  func_0x0001045a2164(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar8);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      FUN_1045a0a64(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      uVar6 = *unaff_x20;
      uVar3 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar6 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x0001014d97ac(uVar6,uVar3 + 1,1,uVar4);
      }
      puVar5 = puVar5 + 2;
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar6 + uVar3 + 0x20) = 10;
      *unaff_x20 = uVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1045a4a98; end: 1045a4e97;  */

void FUN_1045a4a98(ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  ulong *unaff_x20;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar16;
  undefined1 auStack_1d0 [8];
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 uStack_160;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_70 = (undefined1)unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  puVar5 = &uStack_c0;
  uVar7 = param_2;
  func_0x0001045a2164();
  uVar6 = uStack_b8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    unaff_x24 = (ulong *)(param_1 + 0x28);
    do {
      unaff_x26 = unaff_x24[-1];
      unaff_x27 = *unaff_x24;
      func_0x00010006c00c(unaff_x26,unaff_x27);
      _swift_bridgeObjectRetain(uVar6);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      puVar12 = (ulong *)*unaff_x20;
      puVar5 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = (ulong *)0x0;
        func_0x0001014d97ac(0,puVar12[2] + 1,1);
        param_4 = puVar12;
        puVar12 = puVar5;
      }
      uVar7 = puVar12[2];
      if (puVar12[3] >> 1 <= uVar7) {
        puVar5 = (ulong *)(ulong)(1 < puVar12[3]);
        func_0x0001014d97ac(puVar5,uVar7 + 1,1);
        param_4 = puVar12;
        puVar12 = puVar5;
      }
      puVar12[2] = uVar7 + 1;
      *(undefined1 *)((long)puVar12 + uVar7 + 0x20) = 0x22;
      *unaff_x20 = (ulong)puVar12;
      uVar2 = (uint)(unaff_x27 >> 0x20);
      uVar9 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar9 == 0) {
          auStack_d0[0] = (undefined1)unaff_x26;
          auStack_d0[1] = (undefined1)(unaff_x26 >> 8);
          auStack_d0[2] = (undefined1)(unaff_x26 >> 0x10);
          auStack_d0[3] = (undefined1)(unaff_x26 >> 0x18);
          auStack_d0[4] = (undefined1)(unaff_x26 >> 0x20);
          auStack_d0[5] = (undefined1)(unaff_x26 >> 0x28);
          auStack_d0[6] = (undefined1)(unaff_x26 >> 0x30);
          auStack_d0[7] = (undefined1)(unaff_x26 >> 0x38);
          auStack_d0[8] = (undefined1)unaff_x27;
          auStack_d0[9] = (undefined1)(unaff_x27 >> 8);
          auStack_d0[10] = (undefined1)(unaff_x27 >> 0x10);
          auStack_d0[0xb] = (undefined1)(unaff_x27 >> 0x18);
          auStack_d0[0xc] = (undefined1)(unaff_x27 >> 0x20);
          auStack_d0[0xd] = (undefined1)(unaff_x27 >> 0x28);
          puVar8 = auStack_d0 + (unaff_x27 >> 0x30 & 0xff);
          puVar4 = auStack_d0;
        }
        else {
          lVar15 = (long)(int)unaff_x26;
          puVar12 = (ulong *)(((long)unaff_x26 >> 0x20) - lVar15);
          if ((long)unaff_x26 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a4e88);
            (*pcVar3)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar5 == (ulong *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            puVar4 = (undefined1 *)0x0;
          }
          else {
            puVar13 = puVar5;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar15,(long)puVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a4e94);
              (*pcVar3)();
            }
            puVar4 = (undefined1 *)((lVar15 - (long)puVar13) + (long)puVar5);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar4 != (undefined1 *)0x0) {
              if ((long)puVar12 <= (long)puVar13) {
                puVar13 = puVar12;
              }
              puVar8 = (undefined1 *)((long)puVar13 + (long)puVar4);
              goto LAB_1045a4d1c;
            }
          }
          puVar8 = (undefined1 *)0x0;
        }
      }
      else if (uVar9 == 2) {
        lVar15 = *(long *)(unaff_x26 + 0x10);
        lVar1 = *(long *)(unaff_x26 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        puVar12 = puVar5;
        if (puVar5 == (ulong *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar15,(long)puVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a4e90);
            (*pcVar3)();
          }
          puVar4 = (undefined1 *)((lVar15 - (long)puVar12) + (long)puVar5);
        }
        if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a4e8c);
          (*pcVar3)();
        }
        puVar5 = (ulong *)(lVar1 - lVar15);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (puVar4 == (undefined1 *)0x0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          if ((long)puVar5 <= (long)puVar12) {
            puVar12 = puVar5;
          }
          puVar8 = (undefined1 *)((long)puVar12 + (long)puVar4);
        }
      }
      else {
        auStack_d0[8] = 0;
        auStack_d0[9] = 0;
        auStack_d0[10] = 0;
        auStack_d0[0xb] = 0;
        auStack_d0[0xc] = 0;
        auStack_d0[0xd] = 0;
        auStack_d0[0] = 0;
        auStack_d0[1] = 0;
        auStack_d0[2] = 0;
        auStack_d0[3] = 0;
        auStack_d0[4] = 0;
        auStack_d0[5] = 0;
        auStack_d0[6] = 0;
        auStack_d0[7] = 0;
        puVar4 = auStack_d0;
        puVar8 = auStack_d0;
      }
LAB_1045a4d1c:
      param_3 = unaff_x20;
      FUN_1045a1540(puVar4,puVar8);
      puVar13 = (ulong *)*unaff_x20;
      puVar5 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar5 & 1) == 0) {
        puVar12 = (ulong *)0x0;
        param_3 = (ulong *)0x1;
        func_0x0001014d97ac(0,puVar13[2] + 1);
        param_4 = puVar13;
      }
      uVar7 = puVar12[2];
      uVar16 = puVar12[3];
      uVar10 = uVar16 >> 1;
      puVar13 = puVar12;
      if (uVar10 <= uVar7) {
        puVar13 = (ulong *)(ulong)(1 < uVar16);
        param_3 = (ulong *)0x1;
        func_0x0001014d97ac(puVar13,uVar7 + 1);
        uVar16 = puVar13[3];
        uVar10 = uVar16 >> 1;
        param_4 = puVar12;
      }
      puVar13[2] = uVar7 + 1;
      *(undefined1 *)((long)puVar13 + uVar7 + 0x20) = 0x22;
      param_1 = uVar7 + 2;
      puVar5 = puVar13;
      if ((long)uVar10 < (long)param_1) {
        puVar5 = (ulong *)(ulong)(1 < uVar16);
        param_3 = (ulong *)0x1;
        func_0x0001014d97ac(puVar5,param_1);
        param_4 = puVar13;
      }
      unaff_x24 = unaff_x24 + 2;
      puVar5[2] = param_1;
      *(undefined1 *)((long)puVar5 + uVar7 + 0x21) = 10;
      uVar7 = unaff_x27;
      func_0x00010006c090(unaff_x26,unaff_x27);
      *unaff_x20 = (ulong)puVar5;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar6 = param_2;
  _swift_bridgeObjectRelease();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = param_3[-1];
  puStack_1b8 = param_4;
  uStack_150 = param_2;
  uStack_140 = unaff_x27;
  uStack_138 = unaff_x26;
  uStack_130 = param_1;
  puStack_128 = unaff_x24;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar16 + 0x40));
  puVar8 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_148 = (long)puVar8 - extraout_x12;
  uStack_188 = puVar5[5];
  uStack_190 = puVar5[4];
  uStack_178 = puVar5[7];
  uStack_180 = puVar5[6];
  uStack_168 = puVar5[9];
  uStack_170 = puVar5[8];
  uStack_160 = (undefined1)puVar5[10];
  uStack_1a8 = puVar5[1];
  uStack_1b0 = *puVar5;
  uStack_198 = puVar5[3];
  uStack_1a0 = puVar5[2];
  func_0x0001045a2164(uVar7);
  uVar10 = uVar6;
  __sSa8endIndexSivg(uVar6,param_3);
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    lVar11 = 0;
    uStack_1c8 = uVar16;
    uStack_1c0 = uVar6;
    do {
      lVar15 = lStack_148;
      __sSayxSicig(lStack_148,lVar11,uVar6,param_3);
      uVar10 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a50bc);
        (*pcVar3)();
      }
      (**(code **)(uVar16 + 0x20))(puVar8,lVar15,param_3);
      _swift_bridgeObjectRetain(puVar5[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(uVar7);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      FUN_1045a07b4(puVar8,param_3,puStack_1b8);
      uVar14 = *puVar5;
      uVar6 = uVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = uVar14;
      if ((uVar6 & 1) == 0) {
        uVar16 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
      }
      uVar6 = *(ulong *)(uVar16 + 0x10);
      uVar14 = uVar16;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar6) {
        uVar14 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
        func_0x0001014d97ac(uVar14,uVar6 + 1,1,uVar16);
      }
      uVar16 = uStack_1c8;
      *(ulong *)(uVar14 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar14 + uVar6 + 0x20) = 10;
      (**(code **)(uStack_1c8 + 8))(puVar8,param_3);
      uVar6 = uStack_1c0;
      *puVar5 = uVar14;
      uVar14 = uStack_1c0;
      __sSa8endIndexSivg(uStack_1c0,param_3);
      lVar11 = lVar11 + 1;
    } while (uVar10 != uVar14);
    _swift_bridgeObjectRelease(uVar7);
  }
  return;
}



/* Entry: 1045a4e98; end: 1045a50bb;  */

void FUN_1045a4e98(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001045a2164(param_2);
  lVar6 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    lVar6 = 0;
    do {
      __sSayxSicig((long)puVar8 - extraout_x12,lVar6,param_1,param_3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a50bc);
        (*pcVar2)();
      }
      (**(code **)(lVar9 + 0x20))(puVar8,(long)puVar8 - extraout_x12,param_3);
      _swift_bridgeObjectRetain(unaff_x20[1]);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(param_2);
      func_0x000103ee3b44();
      FUN_104540d74(": ",2);
      FUN_1045a07b4(puVar8,param_3,param_4);
      uVar7 = *unaff_x20;
      uVar3 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar7;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001014d97ac(uVar7,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar7 + uVar3 + 0x20) = 10;
      (**(code **)(lVar9 + 8))(puVar8,param_3);
      *unaff_x20 = uVar7;
      lVar4 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar4);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1045a50bc; end: 1045a5677;  */

void FUN_1045a50bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1c0 [8];
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  lVar10 = *(long *)(param_3 + -8);
  lStack_1a8 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puStack_198 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)(auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x13;
  lStack_1a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_190 = lVar6 - extraout_x13_00;
  uVar12 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  uVar3 = unaff_x20[9];
  uVar8 = unaff_x20[8];
  *(undefined8 *)(extraout_x12 + 0x38) = uVar12;
  *(undefined8 *)(extraout_x12 + 0x30) = uVar11;
  *(undefined8 *)(extraout_x12 + 0x48) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x40) = uVar8;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  uVar3 = unaff_x20[5];
  uVar8 = unaff_x20[4];
  *(undefined8 *)(extraout_x12 + 0x28) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x20) = uVar8;
  uStack_c0 = *(undefined1 *)(unaff_x20 + 10);
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  *(undefined8 *)(extraout_x12 + 0x78) = uStack_f8;
  *(undefined8 *)(extraout_x12 + 0x70) = uStack_100;
  *(undefined8 *)(extraout_x12 + 0x88) = uVar3;
  *(undefined8 *)(extraout_x12 + 0x80) = uVar8;
  *(undefined8 *)(extraout_x12 + 0x98) = uVar12;
  *(undefined8 *)(extraout_x12 + 0x90) = uVar11;
  uStack_b0 = uStack_c8;
  uStack_a8 = uStack_d0;
  func_0x0001045a2164();
  lVar6 = param_3;
  uStack_188 = param_2;
  _swift_conformsToProtocol(param_3,&DAT_10e8147e0);
  if ((param_3 == 0) || (lVar6 == 0)) {
    FUN_1045a86bc(&uStack_a8,&uStack_140,0x113087670,&UNK_10dd194a8);
    FUN_1045a86bc(&uStack_b0,&uStack_140,0x113087678,&UNK_10dd194b0);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
  }
  else {
    pcVar9 = *(code **)(lVar6 + 8);
    FUN_1045a86bc(&uStack_a8,&uStack_140,0x113087670,&UNK_10dd194a8);
    FUN_1045a86bc(&uStack_b0,&uStack_140,0x113087678,&UNK_10dd194b0);
    (*pcVar9)(&uStack_140,param_3,lVar6);
  }
  unaff_x20[3] = uStack_138;
  unaff_x20[2] = uStack_140;
  unaff_x20[5] = uStack_128;
  unaff_x20[4] = uStack_130;
  unaff_x20[7] = uStack_118;
  unaff_x20[6] = uStack_120;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10460d4c8();
  func_0x0001045a8630(&uStack_a8,0x113087670,&UNK_10dd194a8);
  unaff_x20[8] = puVar2;
  uVar3 = 0;
  lStack_178 = param_1;
  __sSaMa(0,param_3);
  _swift_bridgeObjectRetain(param_1);
  uVar8 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar4 = &uStack_170;
  _swift_dynamicCast(puVar4,&lStack_178,uVar3,uVar8,0xe);
  lVar6 = lStack_150;
  uVar8 = uStack_158;
  if ((int)puVar4 == 0) {
    lStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    func_0x0001045a8630(&uStack_170,0x113086678,&UNK_10dd18800);
    func_0x0001045a8630(&uStack_b0,0x113087678,&UNK_10dd194b0);
    uVar8 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_170,uStack_158);
    (**(code **)(lVar6 + 0x10))(uVar8,lVar6);
    func_0x0001000834e4(&uStack_170);
    func_0x0001045a8630(&uStack_b0,0x113087678,&UNK_10dd194b0);
  }
  lVar6 = lStack_1a0;
  puStack_1b8 = unaff_x20 + 9;
  *puStack_1b8 = uVar8;
  lVar7 = param_1;
  __sSa8endIndexSivg(param_1,param_3);
  if (lVar7 != 0) {
    lVar7 = 0;
    uVar8 = uStack_108;
    lStack_1b0 = lVar10;
    do {
      lVar5 = lStack_190;
      __sSayxSicig(lStack_190,lVar7,param_1,param_3);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a55fc);
        (*pcVar9)();
      }
      lStack_180 = lVar7 + 1;
      (**(code **)(lVar10 + 0x20))(lVar6,lVar5,param_3);
      _swift_bridgeObjectRetain(uVar8);
      func_0x000103ee3b44();
      _swift_bridgeObjectRetain(uStack_188);
      func_0x000103ee3b44();
      FUN_104540d74(" {\n",3);
      if (lRam0000000113087650 != -1) {
        _swift_once(0x113087650,FUN_1045a040c);
      }
      _swift_bridgeObjectRetain(uRam0000000113087648);
      func_0x000103ee3b44();
      puVar1 = puStack_198;
      (**(code **)(lVar10 + 0x10))(puStack_198,lVar6,param_3);
      puVar4 = &uStack_170;
      _swift_dynamicCast(puVar4,puVar1,param_3,&UNK_11078ace8,6);
      uVar11 = uStack_160;
      uVar3 = uStack_168;
      uVar8 = uStack_170;
      if ((int)puVar4 == 0) {
        (**(code **)(lStack_1a8 + 0x48))(unaff_x20,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_3);
        if (unaff_x21 != 0) {
          func_0x0001045a8630(&uStack_b0,0x113087678,&UNK_10dd194b0);
          func_0x0001045a8630(&uStack_a8,0x113087670,&UNK_10dd194a8);
          _swift_bridgeObjectRelease(uStack_188);
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x1ed);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a5678);
          (*pcVar9)();
        }
      }
      else {
        FUN_10453d538(unaff_x20);
        FUN_1045bed7c(unaff_x20,uVar8,uVar3);
        if (unaff_x21 != 0) {
          _swift_unexpectedError
                    (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a5620);
          (*pcVar9)();
        }
        func_0x00010006c090(uVar8,uVar3);
        _swift_release(uVar11);
        lVar6 = lStack_1a0;
        lVar10 = lStack_1b0;
      }
      if (*(ulong *)(unaff_x20[1] + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a5600);
        (*pcVar9)();
      }
      FUN_1045a8370(*(ulong *)(unaff_x20[1] + 0x10) - 2);
      uVar8 = unaff_x20[1];
      _swift_bridgeObjectRetain(uVar8);
      func_0x000103ee3b44();
      FUN_104540d74(&DAT_10f38bf4b,2);
      (**(code **)(lVar10 + 8))(lVar6,param_3);
      lVar5 = param_1;
      __sSa8endIndexSivg(param_1,param_3);
      lVar7 = lVar7 + 1;
    } while (lStack_180 != lVar5);
  }
  _swift_bridgeObjectRelease(uStack_188);
  func_0x0001045a85a4(&uStack_b0,puStack_1b8,0x113087678,&UNK_10dd194b0);
  _swift_bridgeObjectRelease(unaff_x20[8]);
  unaff_x20[8] = uStack_a8;
  func_0x0001045a85a4(auStack_a0,unaff_x20 + 2,0x113087680,&UNK_10dd194b8);
  return;
}



/* Entry: 1045a5678; end: 1045a5957;  */

void FUN_1045a5678(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  
  lVar6 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar1 = param_1;
  __sSa8endIndexSivg(param_1,param_5);
  if (lVar1 != 0) {
    __sSayxSicig(lVar10,0,param_1,param_5);
    pcVar8 = *(code **)(lVar6 + 0x20);
    (*pcVar8)(puVar9,lVar10,param_5);
    (*param_3)(puVar9,unaff_x20);
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(puVar9,param_5);
    lVar6 = param_1;
    __sSa8endIndexSivg(param_1,param_5);
    if (lVar6 != 1) {
      lVar6 = 1;
      do {
        __sSayxSicig(lVar10,lVar6,param_1,param_5);
        lVar1 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1045a58b8);
          (*pcVar7)();
        }
        (*pcVar8)(puVar9,lVar10,param_5);
        FUN_104540d74(&DAT_10f68f19e,2);
        (*param_3)(puVar9,unaff_x20);
        (*pcVar7)(puVar9,param_5);
        lVar2 = param_1;
        __sSa8endIndexSivg(param_1,param_5);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar2);
    }
  }
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar10 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar10) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar4,lVar10,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar10;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 1045a5958; end: 1045a5be7;  */

void FUN_1045a5958(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar6,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_1045a5a40;
  fVar9 = *(float *)(param_1 + 0x20);
  if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
    if (((uint)fVar9 & 0x7fffff) == 0) {
      if (0.0 <= fVar9) {
        pcVar2 = "inf";
        goto LAB_1045a5a2c;
      }
      pcVar2 = "-inf";
      uVar5 = 4;
    }
    else {
      pcVar2 = "nan";
LAB_1045a5a2c:
      uVar5 = 3;
    }
    FUN_104540d74(pcVar2,uVar5);
  }
  else {
    __sSf16debugDescriptionSSvg();
    func_0x000104540f24();
  }
  if (lVar7 != 1) {
    lVar7 = lVar7 + -1;
    pfVar8 = (float *)(param_1 + 0x24);
    do {
      fVar9 = *pfVar8;
      FUN_104540d74(&DAT_10f68f19e,2);
      if ((((uint)fVar9 ^ 0xffffffff) & 0x7f800000) == 0) {
        pcVar2 = "nan";
        if ((((uint)fVar9 & 0x7fffff) != 0) || (pcVar2 = "inf", 0.0 <= fVar9)) {
          FUN_104540d74(pcVar2,3);
        }
        else {
          FUN_104540d74(&UNK_10f4fd3ce,4);
        }
      }
      else {
        __sSf16debugDescriptionSSvg(fVar9);
        func_0x000104540f24();
      }
      lVar7 = lVar7 + -1;
      pfVar8 = pfVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *unaff_x20;
LAB_1045a5a40:
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar7 = uVar4 + 1;
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar6,lVar7,1,uVar3);
  }
  *(long *)(uVar6 + 0x10) = lVar7;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar6;
  lVar1 = uVar4 + 2;
  uVar4 = uVar6;
  if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar4,lVar1,1,uVar6);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar7 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 1045a5be8; end: 1045a5e77;  */

void FUN_1045a5be8(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  double dVar9;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar6,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_1045a5cd0;
  dVar9 = *(double *)(param_1 + 0x20);
  if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    if (((ulong)dVar9 & 0xfffffffffffff) == 0) {
      if (0.0 <= dVar9) {
        pcVar2 = "inf";
        goto LAB_1045a5cbc;
      }
      pcVar2 = "-inf";
      uVar5 = 4;
    }
    else {
      pcVar2 = "nan";
LAB_1045a5cbc:
      uVar5 = 3;
    }
    FUN_104540d74(pcVar2,uVar5);
  }
  else {
    __sSd16debugDescriptionSSvg();
    func_0x000104540f24();
  }
  if (lVar7 != 1) {
    lVar7 = lVar7 + -1;
    pdVar8 = (double *)(param_1 + 0x28);
    do {
      dVar9 = *pdVar8;
      FUN_104540d74(&DAT_10f68f19e,2);
      if ((((ulong)dVar9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        pcVar2 = "nan";
        if ((((ulong)dVar9 & 0xfffffffffffff) != 0) || (pcVar2 = "inf", 0.0 <= dVar9)) {
          FUN_104540d74(pcVar2,3);
        }
        else {
          FUN_104540d74(&UNK_10f4fd3ce,4);
        }
      }
      else {
        __sSd16debugDescriptionSSvg(dVar9);
        func_0x000104540f24();
      }
      lVar7 = lVar7 + -1;
      pdVar8 = pdVar8 + 1;
    } while (lVar7 != 0);
  }
  uVar6 = *unaff_x20;
LAB_1045a5cd0:
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar7 = uVar4 + 1;
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar6,lVar7,1,uVar3);
  }
  *(long *)(uVar6 + 0x10) = lVar7;
  *(undefined1 *)(uVar6 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar6;
  lVar1 = uVar4 + 2;
  uVar4 = uVar6;
  if ((long)(*(ulong *)(uVar6 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar4,lVar1,1,uVar6);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar7 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 1045a5e78; end: 1045a6033;  */

void FUN_1045a5e78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar5,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5b;
  *unaff_x20 = uVar5;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    func_0x0001045a0584(*(undefined4 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined4 *)(param_1 + 0x24);
      do {
        uVar2 = *puVar7;
        FUN_104540d74(&DAT_10f68f19e,2);
        func_0x0001045a0584(uVar2);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar5 = *unaff_x20;
  }
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lVar6 = uVar4 + 1;
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar5,lVar6,1,uVar3);
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  *(undefined1 *)(uVar5 + uVar4 + 0x20) = 0x5d;
  *unaff_x20 = uVar5;
  lVar1 = uVar4 + 2;
  uVar4 = uVar5;
  if ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < lVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001014d97ac(uVar4,lVar1,1,uVar5);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar4;
  return;
}



/* Entry: 1045a6034; end: 1045a61ef;  */

void FUN_1045a6034(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5b;
  *unaff_x20 = uVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    func_0x0001045a0584(*(undefined8 *)(param_1 + 0x20));
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar5 = *puVar7;
        FUN_104540d74(&DAT_10f68f19e,2);
        func_0x0001045a0584(uVar5);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar4 = *unaff_x20;
  }
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  lVar6 = uVar3 + 1;
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,lVar6,1,uVar2);
  }
  *(long *)(uVar4 + 0x10) = lVar6;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5d;
  *unaff_x20 = uVar4;
  lVar1 = uVar3 + 2;
  uVar3 = uVar4;
  if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x0001014d97ac(uVar3,lVar1,1,uVar4);
  }
  *(long *)(uVar3 + 0x10) = lVar1;
  *(undefined1 *)(uVar3 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a61f0; end: 1045a64bf;  */

void FUN_1045a61f0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar4 = *unaff_x20;
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5b;
  *unaff_x20 = uVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < 0) {
      uVar3 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar4;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      }
      uVar3 = *(ulong *)(uVar2 + 0x10);
      uVar4 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x0001014d97ac(uVar4,uVar3 + 1,1,uVar2);
      }
      *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x2d;
      *unaff_x20 = uVar4;
      lVar5 = -lVar5;
    }
    func_0x0001045a0584(lVar5);
    lVar6 = lVar6 + -1;
    if (lVar6 != 0) {
      piVar7 = (int *)(param_1 + 0x24);
      do {
        iVar1 = *piVar7;
        lVar5 = (long)iVar1;
        FUN_104540d74(&DAT_10f68f19e,2);
        if (iVar1 < 0) {
          uVar4 = *unaff_x20;
          uVar3 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar4;
          if ((uVar3 & 1) == 0) {
            uVar2 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar3 = *(ulong *)(uVar2 + 0x10);
          uVar4 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            func_0x0001014d97ac(uVar4,uVar3 + 1,1,uVar2);
          }
          *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x2d;
          *unaff_x20 = uVar4;
          lVar5 = -lVar5;
        }
        func_0x0001045a0584(lVar5);
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 1;
      } while (lVar6 != 0);
    }
    uVar4 = *unaff_x20;
  }
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  lVar6 = uVar3 + 1;
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar4,lVar6,1,uVar2);
  }
  *(long *)(uVar4 + 0x10) = lVar6;
  *(undefined1 *)(uVar4 + uVar3 + 0x20) = 0x5d;
  *unaff_x20 = uVar4;
  lVar5 = uVar3 + 2;
  uVar3 = uVar4;
  if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < lVar5) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x0001014d97ac(uVar3,lVar5,1,uVar4);
  }
  *(long *)(uVar3 + 0x10) = lVar5;
  *(undefined1 *)(uVar3 + lVar6 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a64c0; end: 1045a678f;  */

void FUN_1045a64c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    func_0x0001014d97ac(uVar3,uVar2 + 1,1,uVar1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5b;
  *unaff_x20 = uVar3;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 < 0) {
      uVar2 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar2 = *(ulong *)(uVar1 + 0x10);
      uVar3 = uVar1;
      if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
        func_0x0001014d97ac(uVar3,uVar2 + 1,1,uVar1);
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
      *unaff_x20 = uVar3;
      lVar4 = -lVar4;
    }
    func_0x0001045a0584(lVar4);
    lVar5 = lVar5 + -1;
    if (lVar5 != 0) {
      plVar6 = (long *)(param_1 + 0x28);
      do {
        lVar4 = *plVar6;
        FUN_104540d74(&DAT_10f68f19e,2);
        if (lVar4 < 0) {
          uVar3 = *unaff_x20;
          uVar2 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar1 = uVar3;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
            func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar2 = *(ulong *)(uVar1 + 0x10);
          uVar3 = uVar1;
          if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
            func_0x0001014d97ac(uVar3,uVar2 + 1,1,uVar1);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x2d;
          *unaff_x20 = uVar3;
          lVar4 = -lVar4;
        }
        func_0x0001045a0584(lVar4);
        lVar5 = lVar5 + -1;
        plVar6 = plVar6 + 1;
      } while (lVar5 != 0);
    }
    uVar3 = *unaff_x20;
  }
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  lVar5 = uVar2 + 1;
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    func_0x0001014d97ac(uVar3,lVar5,1,uVar1);
  }
  *(long *)(uVar3 + 0x10) = lVar5;
  *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  lVar4 = uVar2 + 2;
  uVar2 = uVar3;
  if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001014d97ac(uVar2,lVar4,1,uVar3);
  }
  *(long *)(uVar2 + 0x10) = lVar4;
  *(undefined1 *)(uVar2 + lVar5 + 0x20) = 10;
  *unaff_x20 = uVar2;
  return;
}



/* Entry: 1045a6790; end: 1045a697f;  */

void FUN_1045a6790(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  uVar8 = *unaff_x20;
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar8,uVar7 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5b;
  *unaff_x20 = uVar8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    bVar5 = *(char *)(param_1 + 0x20) == '\0';
    pcVar9 = "true";
    if (bVar5) {
      pcVar9 = "false";
    }
    uVar2 = 4;
    if (bVar5) {
      uVar2 = 5;
    }
    FUN_104540d74(pcVar9,uVar2);
    lVar10 = lVar10 + -1;
    if (lVar10 != 0) {
      pcVar9 = (char *)(param_1 + 0x21);
      do {
        cVar4 = *pcVar9;
        FUN_104540d74(&DAT_10f68f19e,2);
        pcVar3 = "true";
        if (cVar4 == '\0') {
          pcVar3 = "false";
        }
        uVar2 = 4;
        if (cVar4 == '\0') {
          uVar2 = 5;
        }
        FUN_104540d74(pcVar3,uVar2);
        lVar10 = lVar10 + -1;
        pcVar9 = pcVar9 + 1;
      } while (lVar10 != 0);
    }
    uVar8 = *unaff_x20;
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  lVar10 = uVar7 + 1;
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001014d97ac(uVar8,lVar10,1,uVar6);
  }
  *(long *)(uVar8 + 0x10) = lVar10;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x5d;
  *unaff_x20 = uVar8;
  lVar1 = uVar7 + 2;
  uVar7 = uVar8;
  if ((long)(*(ulong *)(uVar8 + 0x18) >> 1) < lVar1) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001014d97ac(uVar7,lVar1,1,uVar8);
  }
  *(long *)(uVar7 + 0x10) = lVar1;
  *(undefined1 *)(uVar7 + lVar10 + 0x20) = 10;
  *unaff_x20 = uVar7;
  return;
}



/* Entry: 1045a6980; end: 1045a69af;  */

void FUN_1045a6980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_1045a5678(param_1,param_2,FUN_1045a857c,auStack_30,param_3);
  return;
}



/* Entry: 1045a69b0; end: 1045a7007;  */

void FUN_1045a69b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,long param_8,code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar17;
  long unaff_x20;
  long unaff_x21;
  long lVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  pcStack_e8 = param_9;
  lVar20 = *(long *)(param_8 + -8);
  lVar11 = param_7;
  lVar16 = param_8;
  uStack_160 = param_2;
  pcStack_158 = param_5;
  uStack_150 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar22 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar18 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar11,lVar16,"key value ",0);
  lVar11 = 0;
  lStack_120 = lVar10;
  __sSqMa();
  lStack_138 = *(long *)(lVar11 + -8);
  lStack_130 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar11 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_140 = lVar11 - extraout_x12;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x48);
  pcStack_80 = param_9;
  lStack_90 = param_7;
  lStack_88 = param_8;
  uStack_78 = param_3;
  uStack_70 = param_4;
  FUN_1045a84a8();
  uVar12 = 0;
  __sSDMa(0,param_7,param_8,pcStack_e8);
  uStack_128 = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uStack_118);
  puVar13 = PTR___sSDyxq_GSTsMc_11034d798;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_11034d798,uVar12);
  pcVar9 = FUN_1045a847c;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_1045a847c,auStack_a0,uVar12,puVar13);
  lStack_170 = unaff_x20 + 8;
  pcVar19 = (code *)0x0;
  lStack_198 = param_7;
  puStack_190 = puVar22;
  lStack_188 = lVar18;
  lStack_180 = lVar20;
  lStack_178 = param_8;
  puStack_168 = (undefined8 *)(unaff_x20 + 0x10);
  pcStack_148 = pcVar9;
  while( true ) {
    lVar11 = lStack_120;
    pcVar9 = pcStack_148;
    pcVar14 = pcStack_148;
    __sSa8endIndexSivg(pcStack_148,lStack_120);
    if (pcVar19 == pcVar14) {
      uVar15 = 1;
      pcStack_e8 = pcVar19;
    }
    else {
      __sSayxSicig(lStack_110,pcVar19,pcVar9,lVar11);
      if (SCARRY8((long)pcVar19,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a7004);
        (*pcVar9)();
      }
      uVar15 = 0;
      pcStack_e8 = pcVar19 + 1;
    }
    lVar10 = lStack_110;
    lVar17 = *(long *)(lVar11 + -8);
    (**(code **)(lVar17 + 0x38))(lStack_110,uVar15,1,lVar11);
    lVar16 = lStack_140;
    (**(code **)(lStack_138 + 0x20))(lStack_140,lVar10,lStack_130);
    lVar10 = lVar16;
    (**(code **)(lVar17 + 0x30))(lVar16,1,lVar11);
    if ((int)lVar10 == 1) break;
    iVar7 = *(int *)(lVar11 + 0x30);
    (**(code **)(lStack_e0 + 0x20))(lVar18,lVar16,param_7);
    (**(code **)(lVar20 + 0x20))(puVar22,lVar16 + iVar7,param_8);
    FUN_1045a23d0(uStack_160);
    FUN_104540d74(" {\n",3);
    if (lRam0000000113087650 != -1) {
      _swift_once(0x113087650,FUN_1045a040c);
    }
    _swift_bridgeObjectRetain(uRam0000000113087648);
    func_0x000103ee3b44();
    FUN_104571bb4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    uVar15 = uStack_128;
    puStack_168[3] = 0;
    puStack_168[2] = 0;
    puStack_168[5] = 0;
    puStack_168[4] = 0;
    puStack_168[1] = 0;
    *puStack_168 = 0;
    if (lRam0000000113087658 != -1) {
      _swift_once(0x113087658,FUN_1045a203c);
    }
    uVar12 = uRam0000000113087660;
    _swift_bridgeObjectRetain(uRam0000000113087660);
    uVar8 = uStack_118;
    _swift_bridgeObjectRelease(uStack_118);
    _swift_bridgeObjectRelease(uVar15);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    (*pcStack_158)();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(pcStack_148);
      FUN_104571bb4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar15);
      (**(code **)(lVar20 + 8))(puVar22,param_8);
      (**(code **)(lStack_e0 + 8))(lVar18,param_7);
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar8;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRelease(uVar12);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar15;
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_1045a84a8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    FUN_104571bb4(uStack_f0,uStack_f8,uVar15,uVar12,uStack_100,uStack_108);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
    lVar18 = *(long *)(unaff_x20 + 8);
    uVar21 = *(ulong *)(lVar18 + 0x10);
    if (uVar21 < 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1045a7008);
      (*pcVar9)();
    }
    lVar20 = lVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar20 == 0) || (*(ulong *)(lVar18 + 0x18) >> 1 < uVar21 - 2)) {
      func_0x0001014d97ac();
      lVar18 = lVar20;
    }
    lVar11 = lStack_e0;
    pcVar19 = pcStack_e8;
    puVar22 = puStack_190;
    param_7 = lStack_198;
    _memmove(lVar18 + uVar21 + 0x1e,lVar18 + uVar21 + 0x20,*(long *)(lVar18 + 0x10) - uVar21);
    *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + -2;
    *(long *)(unaff_x20 + 8) = lVar18;
    _swift_bridgeObjectRetain(lVar18);
    func_0x000103ee3b44();
    FUN_104540d74(&DAT_10f38bf4b,2);
    param_8 = lStack_178;
    lVar20 = lStack_180;
    (**(code **)(lStack_180 + 8))(puVar22,lStack_178);
    lVar18 = lStack_188;
    (**(code **)(lVar11 + 8))(lStack_188,param_7);
  }
  FUN_104571bb4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  _swift_bridgeObjectRelease(pcStack_148);
  _swift_bridgeObjectRelease(uStack_118);
  _swift_bridgeObjectRelease(uStack_128);
  return;
}



/* Entry: 1045a7008; end: 1045a7113;  */

void FUN_1045a7008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045a69b0(param_1,param_2,FUN_1045a8704,auStack_a0,0x1045a8560,auStack_d0,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1045a7114; end: 1045a71af;  */

void FUN_1045a7114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_5);
  }
  return;
}



/* Entry: 1045a71b0; end: 1045a7287;  */

void FUN_1045a71b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  lStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045a69b0(param_1,param_2,FUN_1045a8514,auStack_90,FUN_1045a8544,auStack_c0,uVar1,param_4,
                uVar2);
  return;
}



/* Entry: 1045a7288; end: 1045a730b;  */

void FUN_1045a7288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_4);
  if (unaff_x21 == 0) {
    FUN_1045a390c(param_3,2,param_5,param_7);
  }
  return;
}



/* Entry: 1045a730c; end: 1045a73e7;  */

void FUN_1045a730c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045a69b0(param_1,param_2,FUN_1045a842c,auStack_90,FUN_1045a845c,auStack_d0,uVar1,param_4,
                uVar2);
  return;
}



/* Entry: 1045a73e8; end: 1045a746b;  */

void FUN_1045a73e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_11078a7a0,&PTR_DAT_11078a7c8,param_4);
  if (unaff_x21 == 0) {
    FUN_1045a39dc(param_3,2,param_5,param_8);
  }
  return;
}



/* Entry: 1045a746c; end: 1045a752f;  */

void FUN_1045a746c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0();
  FUN_104540d74(": ",2);
  FUN_1045a08a4(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a7530; end: 1045a75f3;  */

void FUN_1045a7530(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0();
  FUN_104540d74(": ",2);
  func_0x0001045a090c(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a75f4; end: 1045a7607;  */

void FUN_1045a75f4(void)

{
  FUN_1045a36ec();
  return;
}



/* Entry: 1045a7608; end: 1045a76c7;  */

void FUN_1045a7608(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_2);
  FUN_104540d74(": ",2);
  func_0x0001045a0584(param_1);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a76c8; end: 1045a7713;  */

void FUN_1045a76c8(void)

{
  FUN_1045a3830();
  return;
}



/* Entry: 1045a7714; end: 1045a77df;  */

void FUN_1045a7714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  FUN_1045a23d0(param_3);
  FUN_104540d74(": ",2);
  (*param_6)(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x0001014d97ac(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001014d97ac(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 10;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 1045a77e0; end: 1045a7943;  */

void FUN_1045a77e0(void)

{
  FUN_1045a390c();
  return;
}



/* Entry: 1045a7944; end: 1045a7b0f;  */

void FUN_1045a7944(undefined6 *param_1,undefined6 *param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined6 *puVar5;
  undefined6 *puVar6;
  undefined6 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  uint uVar9;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined2 uStack_da;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    iVar4 = (int)param_1;
    if (uVar9 == 0) {
      uStack_11e = SUB81(param_1,0);
      uStack_11d = (undefined1)((ulong)param_1 >> 8);
      uStack_11c = (undefined1)((ulong)param_1 >> 0x10);
      uStack_11b = (undefined1)((ulong)param_1 >> 0x18);
      uStack_11a = (undefined1)((ulong)param_1 >> 0x20);
      uStack_119 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_118 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_117 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_116 = SUB81(param_2,0);
      uStack_115 = (undefined1)((ulong)param_2 >> 8);
      uStack_114 = (undefined1)((ulong)param_2 >> 0x10);
      uStack_113 = (undefined1)((ulong)param_2 >> 0x18);
      uStack_112 = (undefined1)((ulong)param_2 >> 0x20);
      uVar8 = (ulong)param_2 >> 0x30 & 0xff;
      uStack_111 = (undefined1)((ulong)param_2 >> 0x28);
      puVar7 = param_2;
      if (uVar8 != 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_c8 = 1;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_60 = 0xf000000000000000;
        uStack_68 = 0;
        uStack_50 = 0xf000000000000000;
        uStack_58 = 0;
        puStack_d8 = &uStack_11e;
        uStack_f0 = 0;
        uStack_e8 = SUB86(puStack_d8,0);
        uStack_e2 = (undefined2)((ulong)puStack_d8 >> 0x30);
        uStack_e0 = (undefined6)uVar8;
        uStack_da = 0;
        uStack_d0 = 0;
        param_4 = &UNK_10d90fde0;
        func_0x0001045a85a4(&uStack_110,&uStack_b8,0x112d49548,&UNK_10d90fde0);
        uStack_80 = 100;
        uStack_78 = 1;
        uStack_70 = 100;
        puVar7 = (undefined6 *)0xa;
        FUN_1045a26f0(&uStack_e8);
        param_1 = &uStack_e8;
        func_0x00010006c134();
      }
      goto LAB_1045a7ad8;
    }
    puVar7 = (undefined6 *)((long)param_1 >> 0x20);
    param_1 = (undefined6 *)(long)iVar4;
    if ((long)puVar7 < (long)iVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a7b0c);
      (*pcVar3)();
    }
  }
  else {
    if (uVar9 != 2) {
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_e2 = 0;
      param_1 = &uStack_e8;
      puVar7 = &uStack_e8;
      FUN_1045a2628(param_1,puVar7,param_3);
      goto LAB_1045a7ad8;
    }
    puVar7 = *(undefined6 **)(param_1 + 3);
    param_1 = *(undefined6 **)(param_1 + 2);
  }
  FUN_1045a7b10(param_1,puVar7,(ulong)param_2 & 0x3fffffffffffffff,param_3);
  param_4 = param_3;
LAB_1045a7ad8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = param_1;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  puVar6 = puVar5;
  if (puVar5 != (undefined6 *)0x0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8((long)param_1,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a7bb0);
      (*pcVar3)();
    }
    puVar5 = (undefined6 *)(((long)param_1 - (long)puVar6) + (long)puVar5);
  }
  if (!SBORROW8((long)puVar7,(long)param_1)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar7 - (long)param_1 <= (long)puVar6) {
      puVar6 = (undefined6 *)((long)puVar7 - (long)param_1);
    }
    lVar1 = 0;
    if (puVar5 != (undefined6 *)0x0) {
      lVar1 = (long)puVar6 + (long)puVar5;
    }
    FUN_1045a2628(extraout_x8,puVar5,lVar1,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a7bac);
  (*pcVar3)();
}



/* Entry: 1045a7b10; end: 1045a7baf;  */

void FUN_1045a7b10(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    __s10Foundation13__DataStorageC7_offsetSivg();
    if (SBORROW8(param_2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a7bb0);
      (*pcVar2)();
    }
    lVar3 = (param_2 - lVar4) + lVar3;
  }
  if (!SBORROW8(param_3,param_2)) {
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_3 - param_2 <= lVar4) {
      lVar4 = param_3 - param_2;
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 + lVar3;
    }
    FUN_1045a2628(param_1,lVar3,lVar1,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a7bac);
  (*pcVar2)();
}



/* Entry: 1045a7bb0; end: 1045a7f9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045a7f50) */
/* WARNING: Removing unreachable block (ram,0x0001045a7f70) */

void FUN_1045a7bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  unkbyte9 *pVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  unkbyte9 Var13;
  unkbyte9 Var14;
  unkbyte9 Var15;
  unkbyte9 Var16;
  unkbyte9 Var17;
  unkbyte9 Var18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 auVar63 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lStack_90 = param_5;
  lStack_88 = param_6;
  func_0x0001000c5db4(auStack_a8);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  FUN_1045a044c(param_2,param_3);
  FUN_104540d74(" {\n",3);
  if (lRam0000000113087650 != -1) {
    _swift_once(0x113087650,FUN_1045a040c);
  }
  _swift_bridgeObjectRetain(uRam0000000113087648);
  func_0x000103ee3b44();
  pVar1 = (unkbyte9 *)(param_4 + 0x20);
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  uVar6 = *(undefined8 *)pVar1;
  Var16 = *pVar1;
  Var15 = *pVar1;
  pVar1 = (unkbyte9 *)(param_4 + 0x30);
  uVar11 = *(undefined8 *)pVar1;
  uVar12 = *(undefined8 *)(param_4 + 0x38);
  Var18 = *pVar1;
  Var17 = *pVar1;
  pVar1 = (unkbyte9 *)(param_4 + 0x10);
  uVar9 = *(undefined8 *)(param_4 + 0x18);
  uVar7 = *(undefined8 *)pVar1;
  Var14 = *pVar1;
  Var13 = *pVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = *(undefined8 *)(param_4 + 0x48);
  puVar21 = auStack_a8;
  func_0x0001000a8868(puVar21,lStack_90);
  _swift_getDynamicType();
  puVar22 = puVar21;
  _swift_conformsToProtocol();
  if ((puVar22 == (undefined1 *)0x0) || (puVar21 == (undefined1 *)0x0)) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    auStack_70 = ZEXT216(0);
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0;
    uVar61 = 0;
    uVar62 = 0;
  }
  else {
    pcVar28 = *(code **)(puVar22 + 8);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar28)(auStack_80,puVar21,puVar22);
    uVar37 = (undefined1)auStack_80._8_8_;
    uVar38 = SUB81(auStack_80._8_8_,1);
    uVar39 = SUB81(auStack_80._8_8_,2);
    uVar40 = SUB81(auStack_80._8_8_,3);
    uVar41 = SUB81(auStack_80._8_8_,4);
    uVar42 = SUB81(auStack_80._8_8_,5);
    uVar43 = SUB81(auStack_80._8_8_,6);
    uVar44 = SUB81(auStack_80._8_8_,7);
    uVar29 = (undefined1)auStack_80._0_8_;
    uVar30 = SUB81(auStack_80._0_8_,1);
    uVar31 = SUB81(auStack_80._0_8_,2);
    uVar32 = SUB81(auStack_80._0_8_,3);
    uVar33 = SUB81(auStack_80._0_8_,4);
    uVar34 = SUB81(auStack_80._0_8_,5);
    uVar35 = SUB81(auStack_80._0_8_,6);
    uVar36 = SUB81(auStack_80._0_8_,7);
    uVar55 = (undefined1)uStack_58;
    uVar56 = (undefined1)((ulong)uStack_58 >> 8);
    uVar57 = (undefined1)((ulong)uStack_58 >> 0x10);
    uVar58 = (undefined1)((ulong)uStack_58 >> 0x18);
    uVar59 = (undefined1)((ulong)uStack_58 >> 0x20);
    uVar60 = (undefined1)((ulong)uStack_58 >> 0x28);
    uVar61 = (undefined1)((ulong)uStack_58 >> 0x30);
    uVar62 = (undefined1)((ulong)uStack_58 >> 0x38);
    uVar47 = (undefined1)uStack_60;
    uVar48 = (undefined1)((ulong)uStack_60 >> 8);
    uVar49 = (undefined1)((ulong)uStack_60 >> 0x10);
    uVar50 = (undefined1)((ulong)uStack_60 >> 0x18);
    uVar51 = (undefined1)((ulong)uStack_60 >> 0x20);
    uVar52 = (undefined1)((ulong)uStack_60 >> 0x28);
    uVar53 = (undefined1)((ulong)uStack_60 >> 0x30);
    uVar54 = (undefined1)((ulong)uStack_60 >> 0x38);
  }
  *(ulong *)(param_4 + 0x18) =
       CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,CONCAT12(
                                                  uVar39,CONCAT11(uVar38,uVar37)))))));
  *(ulong *)(param_4 + 0x10) =
       CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(uVar33,CONCAT13(uVar32,CONCAT12(
                                                  uVar31,CONCAT11(uVar30,uVar29)))))));
  *(long *)(param_4 + 0x28) = auStack_70._8_8_;
  *(long *)(param_4 + 0x20) = auStack_70._0_8_;
  *(ulong *)(param_4 + 0x38) =
       CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(uVar58,CONCAT12(
                                                  uVar57,CONCAT11(uVar56,uVar55)))))));
  *(ulong *)(param_4 + 0x30) =
       CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,CONCAT13(uVar50,CONCAT12(
                                                  uVar49,CONCAT11(uVar48,uVar47)))))));
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10460d4c8();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined **)(param_4 + 0x40) = puVar23;
  func_0x0001045a85ec(auStack_a8,&uStack_f8);
  uVar24 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  uVar27 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar25 = &uStack_d0;
  _swift_dynamicCast(puVar25,&uStack_f8,uVar24,uVar27,0xe);
  lVar19 = lStack_b0;
  uVar27 = uStack_b8;
  if ((int)puVar25 == 0) {
    lStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x0001045a8630(&uStack_d0,0x113086678,&UNK_10dd18800);
    _swift_bridgeObjectRelease(uVar3);
    uVar27 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_d0,uStack_b8);
    (**(code **)(lVar19 + 0x10))(uVar27,lVar19);
    func_0x0001000834e4(&uStack_d0);
    _swift_bridgeObjectRelease(uVar3);
  }
  *(undefined8 *)(param_4 + 0x48) = uVar27;
  func_0x0001045a85ec(auStack_a8,&uStack_d0);
  puVar25 = &uStack_f8;
  _swift_dynamicCast(puVar25,&uStack_d0,uVar24,&UNK_11078ace8,6);
  lVar20 = lStack_88;
  lVar19 = lStack_90;
  if ((int)puVar25 == 0) {
    func_0x0001000a8868(auStack_a8,lStack_90);
    (**(code **)(lVar20 + 0x48))(param_4,&UNK_11078a7a0,&PTR_DAT_11078a7c8,lVar19,lVar20);
  }
  else {
    FUN_10453d538(param_4);
    FUN_1045bed7c(param_4,uStack_f8,uStack_f0);
    func_0x00010006c090(uStack_f8,uStack_f0);
    _swift_release(uStack_e8);
  }
  uVar29 = (undefined1)((ulong)uVar8 >> 8);
  uVar30 = (undefined1)((ulong)uVar8 >> 0x10);
  uVar31 = (undefined1)((ulong)uVar8 >> 0x18);
  uVar32 = (undefined1)((ulong)uVar8 >> 0x20);
  uVar33 = (undefined1)((ulong)uVar8 >> 0x28);
  uVar34 = (undefined1)((ulong)uVar8 >> 0x30);
  uVar35 = (undefined1)((ulong)uVar8 >> 0x38);
  uVar36 = (undefined1)((ulong)uVar12 >> 8);
  uVar37 = (undefined1)((ulong)uVar12 >> 0x10);
  uVar38 = (undefined1)((ulong)uVar12 >> 0x18);
  uVar39 = (undefined1)((ulong)uVar12 >> 0x20);
  uVar40 = (undefined1)((ulong)uVar12 >> 0x28);
  uVar41 = (undefined1)((ulong)uVar12 >> 0x30);
  uVar42 = (undefined1)((ulong)uVar12 >> 0x38);
  auVar63[9] = uVar36;
  auVar63._0_9_ = Var17;
  auVar63[10] = uVar37;
  auVar63[0xb] = uVar38;
  auVar63[0xc] = uVar39;
  auVar63[0xd] = uVar40;
  auVar63[0xe] = uVar41;
  auVar63[0xf] = uVar42;
  auVar10[9] = uVar36;
  auVar10._0_9_ = Var18;
  auVar10[10] = uVar37;
  auVar10[0xb] = uVar38;
  auVar10[0xc] = uVar39;
  auVar10[0xd] = uVar40;
  auVar10[0xe] = uVar41;
  auVar10[0xf] = uVar42;
  auVar63 = NEON_ext(auVar63,auVar10,8,1);
  auVar45[9] = uVar29;
  auVar45._0_9_ = Var15;
  auVar45[10] = uVar30;
  auVar45[0xb] = uVar31;
  auVar45[0xc] = uVar32;
  auVar45[0xd] = uVar33;
  auVar45[0xe] = uVar34;
  auVar45[0xf] = uVar35;
  auVar46[9] = uVar29;
  auVar46._0_9_ = Var16;
  auVar46[10] = uVar30;
  auVar46[0xb] = uVar31;
  auVar46[0xc] = uVar32;
  auVar46[0xd] = uVar33;
  auVar46[0xe] = uVar34;
  auVar46[0xf] = uVar35;
  auVar45 = NEON_ext(auVar45,auVar46,8,1);
  uVar29 = (undefined1)((ulong)uVar9 >> 8);
  uVar30 = (undefined1)((ulong)uVar9 >> 0x10);
  uVar31 = (undefined1)((ulong)uVar9 >> 0x18);
  uVar32 = (undefined1)((ulong)uVar9 >> 0x20);
  uVar33 = (undefined1)((ulong)uVar9 >> 0x28);
  uVar34 = (undefined1)((ulong)uVar9 >> 0x30);
  uVar35 = (undefined1)((ulong)uVar9 >> 0x38);
  auVar4[9] = uVar29;
  auVar4._0_9_ = Var13;
  auVar4[10] = uVar30;
  auVar4[0xb] = uVar31;
  auVar4[0xc] = uVar32;
  auVar4[0xd] = uVar33;
  auVar4[0xe] = uVar34;
  auVar4[0xf] = uVar35;
  auVar5[9] = uVar29;
  auVar5._0_9_ = Var14;
  auVar5[10] = uVar30;
  auVar5[0xb] = uVar31;
  auVar5[0xc] = uVar32;
  auVar5[0xd] = uVar33;
  auVar5[0xe] = uVar34;
  auVar5[0xf] = uVar35;
  auVar46 = NEON_ext(auVar4,auVar5,8,1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x48));
  *(undefined8 *)(param_4 + 0x48) = uVar3;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x40));
  *(undefined8 *)(param_4 + 0x40) = uVar2;
  FUN_104571bb4(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),
                *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
  *(long *)(param_4 + 0x28) = auVar45._0_8_;
  *(undefined8 *)(param_4 + 0x20) = uVar6;
  *(long *)(param_4 + 0x38) = auVar63._0_8_;
  *(undefined8 *)(param_4 + 0x30) = uVar11;
  *(long *)(param_4 + 0x18) = auVar46._0_8_;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  uVar26 = *(ulong *)(*(long *)(param_4 + 8) + 0x10);
  if (uVar26 < 2) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x1045a7f50);
    (*pcVar28)();
  }
  FUN_1045a8370(uVar26 - 2);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_4 + 8));
  func_0x000103ee3b44();
  FUN_104540d74(&DAT_10f38bf4b,2);
  func_0x0001000834e4(auStack_a8);
  return;
}



/* Entry: 1045a7fa0; end: 1045a82cf;  */

void FUN_1045a7fa0(undefined8 *param_1,undefined8 param_2,byte param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lStack_d0 = param_4;
  uStack_c8 = param_5;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  func_0x0001045a85ec(auStack_e8,&puStack_1c0);
  uVar6 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  uVar7 = 0x113087688;
  func_0x0001000285a8(0x113087688,&UNK_10dd194c8);
  puVar3 = &uStack_220;
  _swift_dynamicCast(puVar3,&puStack_1c0,uVar6,uVar7,6);
  if ((int)puVar3 == 0) {
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x0001045a8630(&uStack_220,0x113087690,&UNK_10dd194d0);
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    FUN_1045a86a4(&uStack_220,&puStack_168);
    func_0x0001000a8868(&puStack_168,uStack_150);
    _swift_getDynamicType();
    (**(code **)(lStack_148 + 8))(&uStack_c0);
    func_0x0001000834e4(&puStack_168);
    uStack_78 = uStack_b0;
    auStack_70[0] = uStack_b8;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_90 = uStack_98;
    _swift_retain(uStack_c0);
    FUN_1045a86bc(auStack_70,&puStack_1c0,0x113085000,&UNK_10dd187f0);
    FUN_1045a86bc(&uStack_78,&puStack_1c0,0x113085008,&UNK_10dd18d40);
    FUN_1045a86bc(&uStack_80,&puStack_1c0,0x113085008,&UNK_10dd18d40);
    FUN_1045a86bc(&uStack_88,&puStack_1c0,0x112d38270,&UNK_10d905a20);
    FUN_1045a86bc(&uStack_90,&puStack_1c0,0x113085010,&UNK_10dd18d50);
    uVar7 = uStack_c0;
    uVar8 = uStack_b8;
    uVar9 = uStack_b0;
    uVar10 = uStack_a8;
    uVar11 = uStack_a0;
    uVar12 = uStack_98;
  }
  func_0x0001045a85ec(auStack_e8,&puStack_168);
  uVar4 = 0x113086670;
  func_0x0001000285a8(0x113086670,&UNK_10dd187f8);
  puVar3 = &uStack_110;
  _swift_dynamicCast(puVar3,&puStack_168,uVar6,uVar4,0xe);
  lVar2 = lStack_f0;
  uVar6 = uStack_f8;
  if ((int)puVar3 == 0) {
    lStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x0001045a8630(&uStack_110,0x113086678,&UNK_10dd18800);
    uVar6 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_110,uStack_f8);
    (**(code **)(lVar2 + 0x10))(uVar6,lVar2);
    func_0x0001000834e4(&uStack_110);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10460d4c8();
  FUN_104571bb4(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  func_0x0001000834e4(auStack_e8);
  bStack_170 = param_3 & 1;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar1;
  puStack_168 = puVar1;
  puStack_160 = puVar1;
  uStack_1b0 = uVar7;
  uStack_1a8 = uVar8;
  uStack_1a0 = uVar9;
  uStack_198 = uVar10;
  uStack_190 = uVar11;
  uStack_188 = uVar12;
  puStack_180 = puVar5;
  uStack_178 = uVar6;
  uStack_158 = uVar7;
  uStack_150 = uVar8;
  lStack_148 = uVar9;
  uStack_140 = uVar10;
  uStack_138 = uVar11;
  uStack_130 = uVar12;
  puStack_128 = puVar5;
  uStack_120 = uVar6;
  bStack_118 = bStack_170;
  func_0x0001045a8670(&puStack_1c0,&uStack_220);
  FUN_1045836d0(&puStack_168);
  param_1[5] = uStack_198;
  param_1[4] = uStack_1a0;
  param_1[7] = uStack_188;
  param_1[6] = uStack_190;
  param_1[9] = uStack_178;
  param_1[8] = puStack_180;
  *(byte *)(param_1 + 10) = bStack_170;
  param_1[1] = puStack_1b8;
  *param_1 = puStack_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_1b0;
  return;
}



/* Entry: 1045a82d0; end: 1045a836f;  */

void FUN_1045a82d0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a8360);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a8364);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a8368);
      (*pcVar5)();
    }
    uVar1 = lVar6 + 0x20 + param_1 + param_3;
    uVar2 = lVar6 + 0x20 + param_2;
    if (uVar1 != uVar2 || uVar2 + lVar4 <= uVar1) {
      _memmove(uVar1,uVar2,lVar4);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a836c);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a8370);
  (*pcVar5)();
}



/* Entry: 1045a8370; end: 1045a842b;  */

void FUN_1045a8370(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a841c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a8420);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a8424);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        func_0x0001014d97ac();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1045a82d0(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a842c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045a8428);
  (*pcVar2)();
}



/* Entry: 1045a842c; end: 1045a845b;  */

uint FUN_1045a842c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 1045a845c; end: 1045a847b;  */

void FUN_1045a845c(void)

{
  FUN_1045a73e8();
  return;
}



/* Entry: 1045a847c; end: 1045a84a7;  */

uint FUN_1045a847c(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 1045a84a8; end: 1045a8513;  */

void FUN_1045a84a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
    return;
  }
  return;
}



/* Entry: 1045a8514; end: 1045a8543;  */

uint FUN_1045a8514(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 1045a8544; end: 1045a857b;  */

void FUN_1045a8544(void)

{
  FUN_1045a7288();
  return;
}



/* Entry: 1045a857c; end: 1045a86a3;  */

void FUN_1045a857c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1045a07b4(param_2,param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Entry: 1045a86a4; end: 1045a86bb;  */

undefined8 * FUN_1045a86a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1045a86bc; end: 1045a8703;  */

undefined8 FUN_1045a86bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1045a8704; end: 1045a8707;  */

uint FUN_1045a8704(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 1045a8708; end: 1045a8897;  */

void FUN_1045a8708(void)

{
  func_0x000100dbb5c4();
  return;
}



/* Entry: 1045a8898; end: 1045a89a7;  */

void FUN_1045a8898(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x50) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045a89a8);
    (*pcVar5)();
  }
  *(long *)(unaff_x20 + 0x50) = lVar4;
  if (lVar4 < 0) {
    uVar8 = 0xb;
    goto LAB_1045a8960;
  }
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar7 != pbVar1) {
    pbVar6 = pbVar7 + 1;
    bVar2 = *pbVar7;
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
    do {
      if ((pbVar6 == pbVar1) || (bVar3 = *pbVar6, 0x23 < bVar3)) goto LAB_1045a893c;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x23) goto LAB_1045a893c;
        pbVar7 = pbVar6 + 1;
        do {
          pbVar6 = pbVar1;
          if (pbVar7 == pbVar1) break;
          pbVar6 = pbVar7 + 1;
          bVar3 = *pbVar7;
          pbVar7 = pbVar6;
        } while (bVar3 != 10 && bVar3 != 0xd);
      }
      else {
        pbVar6 = pbVar6 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
    } while( true );
  }
  goto LAB_1045a895c;
LAB_1045a893c:
  if (bVar2 == 0x3c) {
    return;
  }
  if (bVar2 == 0x7b) {
    return;
  }
LAB_1045a895c:
  uVar8 = 0;
LAB_1045a8960:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = uVar8;
  _swift_willThrow();
  return;
}



/* Entry: 1045a89a8; end: 1045a908b;  */

undefined1  [16] FUN_1045a89a8(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  byte bVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_x28;
  undefined1 auVar13 [16];
  byte abStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  uVar2 = param_4 >> 8 & 0xff;
  pbVar11 = *(byte **)(unaff_x20 + 0x30);
  pbVar4 = param_1;
  pbVar5 = param_2;
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
LAB_1045a89fc:
  if ((pbVar12 != pbVar11) && (bVar1 = *pbVar12, bVar1 < 0x24)) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x23) goto LAB_1045a8a54;
      pbVar6 = pbVar12 + 1;
      do {
        if (pbVar6 == pbVar11) {
          *(byte **)(unaff_x20 + 0x28) = pbVar11;
          pbVar12 = pbVar11;
          goto LAB_1045a89fc;
        }
        pbVar12 = pbVar6 + 1;
        bVar1 = *pbVar6;
      } while ((bVar1 != 10) && (pbVar6 = pbVar12, bVar1 != 0xd));
    }
    else {
      pbVar12 = pbVar12 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar12;
    goto LAB_1045a89fc;
  }
LAB_1045a8a54:
  if (pbVar12 == pbVar11) {
    if (uVar2 != 1) {
LAB_1045a8fe0:
      bVar9 = 0;
      goto LAB_1045a8fe4;
    }
LAB_1045a8fd4:
    unaff_x28 = (byte *)0x0;
    pbVar12 = (byte *)0x1;
LAB_1045a9010:
    auVar13._8_8_ = pbVar12;
    auVar13._0_8_ = unaff_x28;
    return auVar13;
  }
  bVar1 = *pbVar12;
  pbVar6 = pbVar12;
  if ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a) {
    do {
      bVar1 = *pbVar6;
      if ((0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
         (unaff_x28 = pbVar6, bVar1 != 0x5f && 9 < bVar1 - 0x30)) break;
      pbVar6 = pbVar6 + 1;
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      unaff_x28 = pbVar6;
    } while (pbVar6 != pbVar11);
    do {
      if ((pbVar6 == pbVar11) || (bVar1 = *pbVar6, 0x23 < bVar1)) goto LAB_1045a8bb0;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x23) goto LAB_1045a8bb0;
        pbVar7 = pbVar6 + 1;
        while (pbVar6 = pbVar11, pbVar7 != pbVar11) {
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          if ((bVar1 == 10) || (pbVar7 = pbVar6, bVar1 == 0xd)) break;
        }
      }
      else {
        pbVar6 = pbVar6 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
    } while( true );
  }
  if (bVar1 == 0x5b) {
    FUN_1045ac3dc();
    pbVar12 = param_1;
    if (unaff_x21 == 0) {
      pbVar12 = abStack_88;
      func_0x000104540540();
      lVar3 = lStack_68;
      lVar10 = lStack_70;
      if (lStack_70 == 0) {
        _swift_bridgeObjectRelease(pbVar5);
        pbVar4 = abStack_88;
        func_0x000100ee9068();
        unaff_x28 = (byte *)0x0;
        pbVar5 = pbVar12;
      }
      else {
        func_0x0001000a8868(abStack_88,lStack_70);
        unaff_x28 = param_2;
        pbVar12 = param_3;
        (**(code **)(lVar3 + 0x10))(param_2,param_3,pbVar4,pbVar5,lVar10,lVar3);
        pbVar6 = pbVar12;
        _swift_bridgeObjectRelease(pbVar5);
        pbVar4 = abStack_88;
        func_0x0001000834e4();
        pbVar5 = pbVar6;
        if (((uint)pbVar12 & 0xff) != 1) goto LAB_1045a9010;
      }
      pbVar6 = pbVar4;
      if ((*(byte *)(unaff_x20 + 0x49) & 1) != 0) goto LAB_1045a8e04;
      goto LAB_1045a8fc0;
    }
    goto LAB_1045a9010;
  }
  if (8 < (bVar1 - 0x31 & 0xff)) {
    bVar9 = 0;
    if ((uVar2 != 1) && (pbVar4 = (byte *)(ulong)param_4, (uint)bVar1 == (param_4 & 0xff))) {
      FUN_1045a9adc();
      goto LAB_1045a8fd4;
    }
    goto LAB_1045a8fe4;
  }
  unaff_x28 = (byte *)((ulong)bVar1 - 0x30);
  pbVar6 = pbVar12 + 1;
  pbVar7 = pbVar11;
  if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
    unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
    pbVar6 = pbVar12 + 2;
    pbVar7 = pbVar11;
    if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
      unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
      pbVar6 = pbVar12 + 3;
      pbVar7 = pbVar11;
      if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
        unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
        pbVar6 = pbVar12 + 4;
        pbVar7 = pbVar11;
        if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
          unaff_x28 = (byte *)((ulong)*pbVar6 + (long)(int)unaff_x28 * 10 + -0x30);
          pbVar6 = pbVar12 + 5;
          pbVar7 = pbVar11;
          if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
            unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
            pbVar6 = pbVar12 + 6;
            pbVar7 = pbVar11;
            if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
              unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
              pbVar6 = pbVar12 + 7;
              pbVar7 = pbVar11;
              if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
                pbVar6 = pbVar12 + 8;
                pbVar7 = pbVar11;
                if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                  unaff_x28 = (byte *)((ulong)*pbVar6 + (long)unaff_x28 * 10 + -0x30);
                  pbVar6 = pbVar12 + 9;
                  pbVar7 = pbVar11;
                  if ((pbVar6 != pbVar11) && (pbVar7 = pbVar6, *pbVar6 - 0x30 < 10)) {
                    bVar9 = 0;
                    *(byte **)(unaff_x20 + 0x28) = pbVar12 + 10;
                    goto LAB_1045a8fe4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar7;
  FUN_1045ab5a4();
  if ((*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) &&
     (pbVar4 = unaff_x28, func_0x00010035a314(), ((ulong)pbVar5 & 1) != 0)) {
    pbVar12 = (byte *)0x0;
    goto LAB_1045a9010;
  }
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) goto LAB_1045a8e04;
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  pbVar6 = pbVar4;
  if (lVar10 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0x28) + 0x24);
    while ((int)unaff_x28 < piVar8[-1] || *piVar8 <= (int)unaff_x28) {
      piVar8 = piVar8 + 2;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) goto LAB_1045a8fc0;
    }
    goto LAB_1045a8e04;
  }
LAB_1045a8fc0:
  bVar9 = 7;
  pbVar4 = pbVar6;
LAB_1045a8fe4:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,pbVar4,0,0);
  *pbVar4 = bVar9;
  _swift_willThrow();
  pbVar12 = param_1;
  goto LAB_1045a9010;
LAB_1045a8bb0:
  lVar10 = *(long *)(param_1 + 0x10);
  if ((*(long *)(lVar10 + 0x10) != 0) &&
     (pbVar4 = pbVar12, pbVar5 = unaff_x28, FUN_104559588(), ((ulong)pbVar5 & 1) != 0)) {
    unaff_x28 = *(byte **)(*(long *)(lVar10 + 0x38) + (long)pbVar4 * 8);
    pbVar12 = (byte *)0x0;
    goto LAB_1045a9010;
  }
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
LAB_1045a8e04:
    pbVar12 = *(byte **)(unaff_x20 + 0x28);
    do {
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) goto LAB_1045a8e10;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x23) goto LAB_1045a8e10;
        pbVar6 = pbVar12 + 1;
        do {
          if (pbVar6 == pbVar11) {
            *(byte **)(unaff_x20 + 0x28) = pbVar11;
            pbVar12 = pbVar11;
            goto LAB_1045a8e10;
          }
          pbVar12 = pbVar6 + 1;
          bVar1 = *pbVar6;
        } while ((bVar1 != 10) && (pbVar6 = pbVar12, bVar1 != 0xd));
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
    } while( true );
  }
  pbVar6 = pbVar4;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
    pbVar4 = unaff_x28 + -(long)pbVar12;
    FUN_104596000();
    pbVar6 = pbVar12;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = pbVar4;
      func_0x000100077018();
      _swift_bridgeObjectRelease();
      pbVar6 = pbVar4;
      if (((ulong)pbVar12 & 1) != 0) goto LAB_1045a8e04;
    }
  }
  goto LAB_1045a8fc0;
LAB_1045a8e10:
  if ((pbVar12 != pbVar11) && (*pbVar12 == 0x3a)) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_1045a8e28:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) {
LAB_1045a8ef0:
        if (pbVar12 == pbVar11) goto LAB_1045a8fe0;
        if ((*pbVar12 == 0x3c) || (*pbVar12 == 0x7b)) goto LAB_1045a8f0c;
        pbVar4 = (byte *)0x1;
        FUN_1045ac4e8();
        goto joined_r0x0001045a8fb8;
      }
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_1045a8ef0;
    pbVar6 = pbVar12 + 1;
    while (pbVar12 = pbVar11, pbVar6 != pbVar11) {
      pbVar12 = pbVar6 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 10) || (pbVar6 = pbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_1045a8e28;
  }
LAB_1045a8f0c:
  FUN_1045ac7cc();
joined_r0x0001045a8fb8:
  pbVar12 = param_1;
  if (unaff_x21 != 0) goto LAB_1045a9010;
  pbVar12 = *(byte **)(unaff_x20 + 0x28);
  pbVar11 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar12 != pbVar11) && ((*pbVar12 == 0x3b || (*pbVar12 == 0x2c)))) {
    do {
      pbVar12 = pbVar12 + 1;
LAB_1045a8f44:
      *(byte **)(unaff_x20 + 0x28) = pbVar12;
      if ((pbVar12 == pbVar11) || (bVar1 = *pbVar12, 0x23 < bVar1)) goto LAB_1045a89fc;
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar1 != 0x23) goto LAB_1045a89fc;
    pbVar6 = pbVar12 + 1;
    while (pbVar12 = pbVar11, pbVar6 != pbVar11) {
      pbVar12 = pbVar6 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 10) || (pbVar6 = pbVar12, bVar1 == 0xd)) break;
    }
    goto LAB_1045a8f44;
  }
  goto LAB_1045a89fc;
}



/* Entry: 1045a908c; end: 1045a9147;  */

void FUN_1045a908c(undefined1 *param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  long unaff_x20;
  long unaff_x21;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  if (pbVar1 != *(byte **)(unaff_x20 + 0x30)) {
    pbVar3 = pbVar1 + 1;
    if (*pbVar1 == 0x2d) {
      *(byte **)(unaff_x20 + 0x28) = pbVar3;
      if ((pbVar3 != *(byte **)(unaff_x20 + 0x30)) && (0xfffffff5 < *pbVar3 - 0x3a)) {
        FUN_1045a9148();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)param_1) {
          return;
        }
        bVar2 = param_1 == (undefined1 *)0x8000000000000000;
        param_1 = (undefined1 *)0x8000000000000000;
        if (bVar2) {
          return;
        }
      }
    }
    else {
      FUN_1045a9148();
      if (unaff_x21 != 0) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = 1;
  _swift_willThrow();
  return;
}



/* Entry: 1045a9148; end: 1045a92ef;  */

ulong FUN_1045a9148(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong unaff_x22;
  
  pbVar5 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar5 == pbVar1) {
LAB_1045a92a0:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,param_1,0,0);
    *param_1 = 1;
    _swift_willThrow();
  }
  else {
    pbVar4 = pbVar5 + 1;
    bVar2 = *pbVar5;
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    uVar6 = bVar2 - 0x30;
    if (uVar6 == 0) {
      if (pbVar4 == pbVar1) {
        return 0;
      }
      if (*pbVar4 == 0x78) {
        pbVar5 = pbVar5 + 2;
        *(byte **)(unaff_x20 + 0x28) = pbVar5;
        if (pbVar5 == pbVar1) {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = 0;
          do {
            bVar2 = *pbVar5;
            uVar6 = bVar2 - 0x30;
            if (9 < uVar6) {
              uVar6 = (uint)bVar2;
              if (bVar2 - 0x61 < 6) {
                uVar6 = uVar6 - 0x57;
              }
              else {
                if (5 < uVar6 - 0x41) break;
                uVar6 = uVar6 - 0x37;
              }
            }
            if (unaff_x22 >> 0x3c != 0) goto LAB_1045a92a0;
            pbVar5 = pbVar5 + 1;
            *(byte **)(unaff_x20 + 0x28) = pbVar5;
            unaff_x22 = unaff_x22 * 0x10 + (ulong)(byte)uVar6;
          } while (pbVar5 != pbVar1);
        }
      }
      else {
        unaff_x22 = 0;
        do {
          pbVar5 = pbVar4 + 1;
          bVar2 = *pbVar4;
          if ((byte)(bVar2 - 0x38) < 0xf8) break;
          if (unaff_x22 >> 0x3d != 0) goto LAB_1045a92a0;
          *(byte **)(unaff_x20 + 0x28) = pbVar5;
          unaff_x22 = (ulong)(byte)(bVar2 - 0x30) | unaff_x22 << 3;
          pbVar4 = pbVar5;
        } while (pbVar5 != pbVar1);
      }
    }
    else {
      if (8 < bVar2 - 0x31) goto LAB_1045a92a0;
      unaff_x22 = (ulong)uVar6 & 0xff;
      while (pbVar4 != pbVar1) {
        if ((byte)(*pbVar4 - 0x3a) < 0xf6) break;
        if (0x1999999999999999 < unaff_x22) goto LAB_1045a92a0;
        uVar7 = (ulong)(byte)(*pbVar4 - 0x30);
        uVar8 = unaff_x22 * 10;
        if (CARRY8(uVar7,uVar8)) goto LAB_1045a92a0;
        *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
        unaff_x22 = uVar8 + uVar7;
        pbVar4 = pbVar4 + 1;
        if (CARRY8(uVar8,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a925c);
          (*pcVar3)();
        }
      }
    }
    FUN_1045ab5a4();
  }
  return unaff_x22;
}



/* Entry: 1045a92f0; end: 1045a9543;  */

uint FUN_1045a92f0(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long unaff_x20;
  uint unaff_w23;
  uint uVar8;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar3 == pbVar1) || (bVar2 = *pbVar3, 0x23 < bVar2)) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) break;
      pbVar4 = pbVar3 + 1;
      do {
        pbVar3 = pbVar1;
        if (pbVar4 == pbVar1) break;
        pbVar3 = pbVar4 + 1;
        bVar2 = *pbVar4;
        pbVar4 = pbVar3;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar3 = pbVar3 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
  } while( true );
  if (pbVar3 != pbVar1) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    if (bVar2 < 0x54) {
      if (bVar2 != 0x30) {
        if (bVar2 != 0x31) {
          if (bVar2 == 0x46) goto LAB_1045a942c;
          goto LAB_1045a9500;
        }
        goto LAB_1045a949c;
      }
LAB_1045a94b4:
      unaff_w23 = 0;
      uVar8 = 0;
    }
    else {
      if (bVar2 != 0x54) {
        if (bVar2 == 0x66) {
LAB_1045a942c:
          if (pbVar4 != pbVar1) {
            param_1 = (undefined1 *)0x112d48d68;
            func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
            _swift_initStaticObject();
            pbVar3 = *(byte **)(unaff_x20 + 0x28);
            lVar6 = *(long *)(param_1 + 0x10);
            pbVar4 = pbVar3;
            if (lVar6 != 0) {
              pbVar5 = pbVar3;
              pbVar7 = param_1 + 0x20;
              do {
                if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) {
LAB_1045a94ac:
                  *(byte **)(unaff_x20 + 0x28) = pbVar3;
                  pbVar4 = pbVar3;
                  break;
                }
                pbVar4 = pbVar5 + 1;
                if (*pbVar5 != *pbVar7) goto LAB_1045a94ac;
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                lVar6 = lVar6 + -1;
                pbVar5 = pbVar4;
                pbVar7 = pbVar7 + 1;
              } while (lVar6 != 0);
            }
          }
          goto LAB_1045a94b4;
        }
        if (bVar2 != 0x74) goto LAB_1045a9500;
      }
      if (pbVar4 != pbVar1) {
        param_1 = (undefined1 *)0x112d48d68;
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        _swift_initStaticObject();
        pbVar3 = *(byte **)(unaff_x20 + 0x28);
        lVar6 = *(long *)(param_1 + 0x10);
        pbVar4 = pbVar3;
        if (lVar6 != 0) {
          pbVar5 = pbVar3;
          pbVar7 = param_1 + 0x20;
          do {
            if (pbVar5 == *(byte **)(unaff_x20 + 0x30)) {
LAB_1045a9494:
              *(byte **)(unaff_x20 + 0x28) = pbVar3;
              pbVar4 = pbVar3;
              break;
            }
            pbVar4 = pbVar5 + 1;
            if (*pbVar5 != *pbVar7) goto LAB_1045a9494;
            *(byte **)(unaff_x20 + 0x28) = pbVar4;
            lVar6 = lVar6 + -1;
            pbVar5 = pbVar4;
            pbVar7 = pbVar7 + 1;
          } while (lVar6 != 0);
        }
      }
LAB_1045a949c:
      unaff_w23 = 1;
      uVar8 = 1;
    }
    if (pbVar4 == pbVar1) goto LAB_1045a952c;
    bVar2 = *pbVar4;
    if (((bVar2 < 0x3f && (1L << ((ulong)bVar2 & 0x3f) & 0x4800100900002600U) != 0) ||
        (bVar2 == 0x7d)) || (bVar2 == 0x5d)) {
      FUN_1045ab5a4();
      uVar8 = unaff_w23;
      goto LAB_1045a952c;
    }
  }
LAB_1045a9500:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  uVar8 = unaff_w23;
LAB_1045a952c:
  return uVar8 & 1;
}



/* Entry: 1045a9544; end: 1045a9727;  */

void FUN_1045a9544(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_1045ab5a4();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar7 != pbVar1) {
    bVar2 = *pbVar7;
    param_1 = (undefined1 *)(ulong)bVar2;
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_1045ac010();
      if (param_2 != 0) {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          return;
        }
LAB_1045a95b0:
        bVar2 = *pbVar7;
        if ((bVar2 != 0x22) && (bVar2 != 0x27)) {
          return;
        }
        bVar10 = false;
        pbVar4 = pbVar7 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar4;
        pbVar6 = pbVar4;
        do {
          pbVar5 = pbVar6 + ~(ulong)pbVar7;
          do {
            pbVar8 = pbVar6;
            pbVar9 = pbVar1;
            if (pbVar8 == pbVar1) goto LAB_1045a96ec;
            bVar3 = *pbVar8;
            if (bVar3 == bVar2) {
              FUN_104596000();
              *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
              pbVar7 = pbVar4;
              FUN_1045ab5a4();
              if (pbVar5 == (byte *)0x0) goto LAB_1045a96f0;
              pbVar6 = pbVar5;
              if (bVar10) {
                FUN_1045a9edc(pbVar4);
                _swift_bridgeObjectRelease();
                pbVar7 = pbVar5;
                if (pbVar6 == (byte *)0x0) goto LAB_1045a96f0;
              }
              __sSS6appendyySSF(pbVar4,pbVar6);
              _swift_bridgeObjectRelease(pbVar6);
              pbVar7 = *(byte **)(unaff_x20 + 0x28);
              if (pbVar7 == pbVar1) {
                return;
              }
              goto LAB_1045a95b0;
            }
            pbVar9 = pbVar8 + 1;
            if (bVar3 == 10 || bVar3 == 0xd) goto LAB_1045a96ec;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar9;
          } while (bVar3 != 0x5c);
          pbVar6 = pbVar8 + 2;
          bVar10 = true;
        } while (pbVar9 != pbVar1);
LAB_1045a96ec:
        *(byte **)(unaff_x20 + 0x28) = pbVar9;
        pbVar7 = pbVar4;
LAB_1045a96f0:
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,pbVar7,0,0);
        *pbVar7 = 0;
        _swift_willThrow();
        _swift_bridgeObjectRelease(param_2);
        return;
      }
    }
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 1045a9728; end: 1045a99df;  */

/* WARNING: Removing unreachable block (ram,0x0001045a99c8) */

void FUN_1045a9728(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  long unaff_x20;
  char *pcVar9;
  long unaff_x21;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x28;
  long lStack_80;
  ulong uStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char cStack_52;
  char cStack_51;
  
  FUN_1045ab5a4();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar8 != pbVar1) {
    bVar2 = *pbVar8;
    pcVar10 = (char *)(ulong)bVar2;
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      cStack_51 = '\0';
      pcVar4 = &cStack_51;
      FUN_1045ab6e0();
      if (unaff_x21 != 0) {
        return;
      }
      if (cStack_51 == '\x01') {
        func_0x000100076320();
        pcStack_70 = pcVar10;
        pcStack_68 = pcVar4;
        FUN_1045acb08(&pcStack_70);
      }
      else {
        pcVar9 = *(char **)(unaff_x20 + 0x28);
        pcVar4 = pcVar9;
        pcVar7 = pcVar10;
        func_0x0001008aa3d0();
        pcStack_70 = pcVar4;
        pcStack_68 = pcVar7;
        if (SCARRY8((long)pcVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a99e0);
          (*pcVar3)();
        }
        *(char **)(unaff_x20 + 0x28) = pcVar9 + (long)(pcVar10 + 1);
      }
      FUN_1045ab5a4();
      pbVar8 = *(byte **)(unaff_x20 + 0x28);
      while( true ) {
        if (pbVar8 == pbVar1) {
          return;
        }
        bVar2 = *pbVar8;
        uVar11 = (ulong)bVar2;
        if ((bVar2 != 0x27) && (bVar2 != 0x22)) break;
        *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
        cStack_52 = '\0';
        FUN_1045ab6e0(uVar11,&cStack_52);
        if (cStack_52 == '\x01') {
          if (uVar11 == 0) {
            lVar5 = 0;
            uStack_78 = 0xc000000000000000;
          }
          else if ((long)uVar11 < 0xf) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a99dc);
              (*pcVar3)();
            }
            lVar5 = 0;
            uStack_78 = unaff_x28 & 0xf00000000000000 | (uVar11 & 0xff) << 0x30;
            unaff_x28 = uStack_78;
          }
          else {
            __s10Foundation13__DataStorageCMa();
            _swift_allocObject();
            uVar6 = uVar11;
            __s10Foundation13__DataStorageC6lengthACSi_tcfc();
            if (uVar11 < 0x7fffffff) {
              lVar5 = uVar11 << 0x20;
              uStack_78 = uVar6 | 0x4000000000000000;
            }
            else {
              lVar5 = 0;
              __s10Foundation4DataV14RangeReferenceCMa();
              _swift_allocObject();
              *(undefined8 *)(lVar5 + 0x10) = 0;
              *(ulong *)(lVar5 + 0x18) = uVar11;
              uStack_78 = uVar6 | 0x8000000000000000;
            }
          }
          lStack_80 = lVar5;
          FUN_1045acb08(&lStack_80);
          uVar11 = uStack_78;
          lVar5 = lStack_80;
          __s10Foundation4DataV6appendyyACF(lStack_80,uStack_78);
          func_0x00010006c090(lVar5,uVar11);
        }
        else {
          lVar12 = *(long *)(unaff_x20 + 0x28);
          lVar5 = lVar12;
          uVar6 = uVar11;
          func_0x0001008aa3d0(lVar12,uVar11);
          __s10Foundation4DataV6appendyyACF();
          func_0x00010006c090(lVar5,uVar6);
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a99d8);
            (*pcVar3)();
          }
          *(ulong *)(unaff_x20 + 0x28) = lVar12 + uVar11 + 1;
        }
        FUN_1045ab5a4();
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
      }
      return;
    }
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 1045a99e0; end: 1045a9adb;  */

void FUN_1045a99e0(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar4 == pbVar1) || (bVar2 = *pbVar4, 0x23 < bVar2)) goto LAB_1045a9a60;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
LAB_1045a9a60:
        if (pbVar4 == pbVar1) {
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,param_1,0,0);
          *param_1 = 0;
          _swift_willThrow();
        }
        else if ((*pbVar4 & 0xffffffdf) - 0x41 < 0x1a) {
          func_0x0001045ab61c();
        }
        return;
      }
      pbVar3 = pbVar4 + 1;
      do {
        pbVar4 = pbVar1;
        if (pbVar3 == pbVar1) break;
        pbVar4 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar4;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
  } while( true );
}



/* Entry: 1045a9adc; end: 1045a9bf7;  */

undefined8 FUN_1045a9adc(byte param_1)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 == pbVar2) || (pbVar5 = pbVar6 + 1, *pbVar6 != param_1)) {
    return 0;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar5;
  do {
    if ((pbVar5 == pbVar2) || (bVar3 = *pbVar5, 0x23 < bVar3)) goto LAB_1045a9b7c;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar3 != 0x23) {
LAB_1045a9b7c:
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1045a9bac);
          (*pcVar4)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return 1;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x800000010f208260,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045a9bf8);
        (*pcVar4)();
      }
      pbVar6 = pbVar5 + 1;
      do {
        pbVar5 = pbVar2;
        if (pbVar6 == pbVar2) break;
        pbVar5 = pbVar6 + 1;
        bVar3 = *pbVar6;
        pbVar6 = pbVar5;
      } while (bVar3 != 10 && bVar3 != 0xd);
    }
    else {
      pbVar5 = pbVar5 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar5;
  } while( true );
}



/* Entry: 1045a9bf8; end: 1045a9edb;  */

void FUN_1045a9bf8(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if ((pbVar6 == pbVar1) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_1045a9c80;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
LAB_1045a9c80:
        if (pbVar6 != pbVar1) {
          bVar2 = *pbVar6;
          if (bVar2 == 0x5b) {
            if (((ulong)param_1 & 1) != 0) {
              FUN_1045ac3dc();
              if (unaff_x21 != 0) {
                return;
              }
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(param_2);
              __sSS6appendyySSF(0x5d,0xe100000000000000);
              return;
            }
            FUN_1045407b0();
            _swift_allocError(&UNK_11078a540,param_1,0,0);
            *param_1 = 7;
          }
          else {
            if ((bVar2 & 0xffffffdf) - 0x41 < 0x1a) {
              func_0x0001045ab61c();
              if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a9ed4);
                (*pcVar3)();
              }
              param_2 = param_2 - (long)param_1;
              FUN_104596000();
              if (param_2 != 0) {
                return;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a9ed8);
              (*pcVar3)();
            }
            if (bVar2 - 0x31 < 9) {
              pbVar5 = pbVar6 + 1;
              pbVar4 = pbVar1;
              if (((((((pbVar5 == pbVar1) || (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                     (pbVar5 = pbVar6 + 2, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 3, pbVar4 = pbVar1, pbVar5 == pbVar1)))) ||
                   ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                    ((pbVar5 = pbVar6 + 4, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))))) ||
                  (pbVar5 = pbVar6 + 5, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                 (((((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                     (pbVar5 = pbVar6 + 6, pbVar4 = pbVar1, pbVar5 == pbVar1)) ||
                    (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                   (((pbVar5 = pbVar6 + 7, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)) ||
                    ((pbVar5 = pbVar6 + 8, pbVar4 = pbVar1, pbVar5 == pbVar1 ||
                     ((pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6 ||
                      (pbVar5 = pbVar6 + 9, pbVar4 = pbVar1, pbVar5 == pbVar1)))))))) ||
                  (pbVar4 = pbVar5, *pbVar5 - 0x3a < 0xfffffff6)))) {
                *(byte **)(unaff_x20 + 0x28) = pbVar4;
                lVar7 = (long)pbVar4 - (long)pbVar6;
                func_0x0001045ab5a4();
                FUN_104596000(pbVar6);
                if (lVar7 != 0) {
                  return;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1045a9edc);
                (*pcVar3)();
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar6 + 10;
            }
            FUN_1045407b0();
            _swift_allocError(&UNK_11078a540,param_1,0,0);
            *param_1 = 0;
          }
          _swift_willThrow();
        }
        return;
      }
      pbVar5 = pbVar6 + 1;
      do {
        pbVar6 = pbVar1;
        if (pbVar5 == pbVar1) break;
        pbVar6 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar6;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar6;
  } while( true );
}



/* Entry: 1045a9edc; end: 1045ab5a3;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1045a9edc(undefined8 *******param_1,ulong param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  pppppppuStack_78 = param_1;
  uStack_70 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar2 != 0) {
    uVar21 = uVar2 << 2;
    uVar11 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar11 = 1;
    }
    uVar22 = 4L << uVar11;
    uVar14 = param_2 & 0xffffffffffffff;
    pppppppuVar1 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
    uVar7 = 0xf;
    do {
      uVar17 = uVar7 & 0xc;
      uVar13 = uVar7;
      if (uVar17 == uVar22) {
        func_0x000100e36e7c(uVar7,param_1,param_2);
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1045aaff8);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar6 = pppppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppppuStack_88 = param_1;
          uStack_80 = uVar14;
          pppppppuVar6 = &pppppppuStack_88;
        }
        uVar11 = (uint)*(byte *)((long)pppppppuVar6 + (uVar13 >> 0x10));
        if (uVar17 == uVar22) goto LAB_1045aa050;
LAB_1045aa000:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1045aa060;
LAB_1045aa004:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar11 = (uint)uVar13;
        if (uVar17 != uVar22) goto LAB_1045aa000;
LAB_1045aa050:
        func_0x000100e36e7c(uVar7,param_1,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_1045aa004;
LAB_1045aa060:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1045aaffc);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      uStack_68 = uVar7;
      if ((uVar11 & 0xff) != 0x5c) {
        puVar15 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar15 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar7 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
        puVar9[uVar7 + 0x20] = (char)uVar11;
        goto LAB_1045a9f94;
      }
      if (uVar21 == uVar7 >> 0xe) goto LAB_1045aafb4;
      uVar17 = uVar7 & 0xc;
      uVar13 = uVar7;
      if (uVar17 == uVar22) {
        func_0x000100e36e7c();
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab000);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar6 = pppppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pppppppuStack_88 = param_1;
          uStack_80 = uVar14;
          pppppppuVar6 = &pppppppuStack_88;
        }
        bVar3 = *(byte *)((long)pppppppuVar6 + (uVar13 >> 0x10));
        uVar16 = (uint)bVar3;
        uVar11 = (uint)bVar3;
        if (uVar17 != uVar22) goto LAB_1045aa124;
LAB_1045aa14c:
        uVar16 = uVar11;
        func_0x000100e36e7c();
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_1045aa128;
LAB_1045aa15c:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab004);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar16 = (uint)uVar13;
        uVar11 = uVar16;
        if (uVar17 == uVar22) goto LAB_1045aa14c;
LAB_1045aa124:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1045aa15c;
LAB_1045aa128:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      uStack_68 = uVar7;
      if ((uVar16 & 0xf8) == 0x30) {
        cVar4 = (char)uVar16 + -0x30;
        if (uVar21 != uVar7 >> 0xe) {
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            func_0x000100e36e7c(uVar7,param_1,param_2);
          }
          uVar17 = uVar13 >> 0x10;
          if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab008);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              pppppppuVar6 = pppppppuVar1;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                pppppppuVar6 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
              }
              uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
            }
            else {
              pppppppuStack_88 = param_1;
              uStack_80 = uVar14;
              uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
            }
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar11 = (uint)uVar13;
          }
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            func_0x000100e36e7c(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto LAB_1045aa2c8;
LAB_1045aa7c0:
            if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab00c);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
          }
          else {
            if ((param_2 >> 0x3c & 1) != 0) goto LAB_1045aa7c0;
LAB_1045aa2c8:
            uVar13 = (uVar13 & 0xffffffffffff0000) + 0x10004;
          }
          if ((uVar11 & 0xf8) == 0x30) {
            bVar3 = (char)uVar11 - 0x30;
            if (uVar21 != uVar13 >> 0xe) {
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                func_0x000100e36e7c(uVar13,param_1,param_2);
              }
              uVar17 = uVar7 >> 0x10;
              if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab010);
                (*pcVar5)();
              }
              if ((param_2 >> 0x3c & 1) == 0) {
                if ((param_2 >> 0x3d & 1) == 0) {
                  pppppppuVar6 = pppppppuVar1;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    pppppppuVar6 = param_1;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                  }
                  uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
                }
                else {
                  pppppppuStack_88 = param_1;
                  uStack_80 = uVar14;
                  uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
                }
              }
              else {
                __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
                uVar11 = (uint)uVar7;
              }
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                func_0x000100e36e7c(uVar13,param_1,param_2);
                if ((param_2 >> 0x3c & 1) == 0) goto LAB_1045aa8ac;
LAB_1045aa95c:
                if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab01c);
                  (*pcVar5)();
                }
                __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
              }
              else {
                if ((param_2 >> 0x3c & 1) != 0) goto LAB_1045aa95c;
LAB_1045aa8ac:
                uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
              }
              uStack_68 = uVar7;
              if ((uVar11 & 0xf8) == 0x30) {
                _swift_bridgeObjectRetain(param_2);
                puVar15 = puVar9;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar8 = puVar9;
                if (((ulong)puVar15 & 1) == 0) {
                  puVar8 = (undefined *)0x0;
                  func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
                }
                uVar7 = *(ulong *)(puVar8 + 0x10);
                puVar9 = puVar8;
                if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
                  puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                  func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
                }
                *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
                puVar9[uVar7 + 0x20] = (char)uVar11 + (bVar3 * '\b' | (byte)(uVar16 << 6)) + -0x30;
                _swift_bridgeObjectRelease(param_2);
                goto LAB_1045a9f94;
              }
            }
            _swift_bridgeObjectRetain(param_2);
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = bVar3 | cVar4 * '\b';
            _swift_bridgeObjectRelease(param_2);
            pppppppuStack_78 = param_1;
            uStack_70 = param_2;
            uStack_68 = uVar13;
            goto LAB_1045a9f94;
          }
        }
        _swift_bridgeObjectRetain(param_2);
        puVar15 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar15 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar13 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x0001014d97ac(puVar9,uVar13 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar13 + 1;
        puVar9[uVar13 + 0x20] = cVar4;
        _swift_bridgeObjectRelease(param_2);
        pppppppuStack_78 = param_1;
        uStack_70 = param_2;
        uStack_68 = uVar7;
      }
      else {
        switch(uVar16 & 0xff) {
        case 0x22:
        case 0x27:
        case 0x3f:
        case 0x5c:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = (char)uVar16;
          break;
        default:
LAB_1045aafb4:
          _swift_bridgeObjectRelease(puVar9);
          _swift_bridgeObjectRelease(param_2);
          puVar15 = (undefined *)0x0;
          uVar10 = 0;
          goto LAB_1045aafcc;
        case 0x55:
        case 0x75:
          pppppppuVar6 = &pppppppuStack_78;
          func_0x0001045ab02c();
          if (((ulong)pppppppuVar6 & 0xff00000000) == 0x100000000) goto LAB_1045aafb4;
          uVar11 = (uint)pppppppuVar6;
          if ((uVar16 & 0xff) == 0x55) {
            pppppppuVar6 = &pppppppuStack_78;
            func_0x0001045ab02c();
            if (((ulong)pppppppuVar6 & 0xff00000000) == 0x100000000) goto LAB_1045aafb4;
            uVar16 = uVar11 * 0x10000;
            uVar11 = (uint)pppppppuVar6 + uVar16;
            if (CARRY4((uint)pppppppuVar6,uVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab018);
              (*pcVar5)();
            }
          }
          if (uVar11 < 0x80) {
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = (byte)uVar11;
            break;
          }
          if (uVar11 < 0x800) {
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            uVar13 = *(ulong *)(puVar8 + 0x18);
            uVar17 = uVar13 >> 1;
            lVar19 = uVar7 + 1;
            puVar9 = puVar8;
            if (uVar17 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              func_0x0001014d97ac(puVar9,lVar19,1,puVar8);
              uVar13 = *(ulong *)(puVar9 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar9 + 0x10) = lVar19;
            puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 6) | 0xc0;
            lVar20 = uVar7 + 2;
            if ((long)uVar17 < lVar20) {
              puVar15 = (undefined *)(ulong)(1 < uVar13);
              func_0x0001014d97ac(puVar15,lVar20,1,puVar9);
              puVar9 = puVar15;
            }
code_r0x0001045aa6f4:
            *(long *)(puVar9 + 0x10) = lVar20;
            puVar15 = puVar9 + lVar19;
          }
          else {
            if (uVar11 >> 0x10 != 0) {
              if (0x10ffff < uVar11) goto LAB_1045aafb4;
              puVar15 = puVar9;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar8 = puVar9;
              if (((ulong)puVar15 & 1) == 0) {
                puVar8 = (undefined *)0x0;
                func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
              }
              uVar7 = *(ulong *)(puVar8 + 0x10);
              uVar13 = *(ulong *)(puVar8 + 0x18);
              uVar17 = uVar13 >> 1;
              puVar9 = puVar8;
              if (uVar17 <= uVar7) {
                puVar9 = (undefined *)(ulong)(1 < uVar13);
                func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
                uVar13 = *(ulong *)(puVar9 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
              puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 0x12) | 0xf0;
              lVar19 = uVar7 + 2;
              puVar15 = puVar9;
              if ((long)uVar17 < lVar19) {
                puVar15 = (undefined *)(ulong)(1 < uVar13);
                func_0x0001014d97ac(puVar15,lVar19,1,puVar9);
                uVar13 = *(ulong *)(puVar15 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar15 + 0x10) = lVar19;
              puVar15[uVar7 + 0x21] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
              lVar19 = uVar7 + 3;
              puVar8 = puVar15;
              if ((long)uVar17 < lVar19) {
                puVar8 = (undefined *)(ulong)(1 < uVar13);
                func_0x0001014d97ac(puVar8,lVar19,1,puVar15);
                uVar13 = *(ulong *)(puVar8 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar8 + 0x10) = lVar19;
              puVar8[uVar7 + 0x22] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
              lVar20 = uVar7 + 4;
              puVar9 = puVar8;
              if ((long)uVar17 < lVar20) {
                puVar9 = (undefined *)(ulong)(1 < uVar13);
                func_0x0001014d97ac(puVar9,lVar20,1,puVar8);
              }
              goto code_r0x0001045aa6f4;
            }
            puVar15 = puVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar9;
            if (((ulong)puVar15 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
            }
            uVar7 = *(ulong *)(puVar8 + 0x10);
            uVar13 = *(ulong *)(puVar8 + 0x18);
            uVar17 = uVar13 >> 1;
            puVar9 = puVar8;
            if (uVar17 <= uVar7) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
              uVar13 = *(ulong *)(puVar9 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
            puVar9[uVar7 + 0x20] = (byte)(uVar11 >> 0xc) | 0xe0;
            lVar19 = uVar7 + 2;
            puVar15 = puVar9;
            if ((long)uVar17 < lVar19) {
              puVar15 = (undefined *)(ulong)(1 < uVar13);
              func_0x0001014d97ac(puVar15,lVar19,1,puVar9);
              uVar13 = *(ulong *)(puVar15 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar15 + 0x10) = lVar19;
            puVar15[uVar7 + 0x21] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
            lVar20 = uVar7 + 3;
            puVar9 = puVar15;
            if ((long)uVar17 < lVar20) {
              puVar9 = (undefined *)(ulong)(1 < uVar13);
              func_0x0001014d97ac(puVar9,lVar20,1,puVar15);
            }
            *(long *)(puVar9 + 0x10) = lVar20;
            puVar15 = puVar9 + lVar19;
          }
          puVar15[0x20] = (byte)uVar11 & 0x3f | 0x80;
          break;
        case 0x61:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 7;
          break;
        case 0x62:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 8;
          break;
        case 0x66:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xc;
          break;
        case 0x6e:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 10;
          break;
        case 0x72:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xd;
          break;
        case 0x74:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 9;
          break;
        case 0x76:
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = 0xb;
          break;
        case 0x78:
          if (uVar21 == uVar7 >> 0xe) goto LAB_1045aafb4;
          uVar17 = uVar7 & 0xc;
          uVar13 = uVar7;
          if (uVar17 == uVar22) {
            func_0x000100e36e7c(uVar7,param_1,param_2);
          }
          uVar18 = uVar13 >> 0x10;
          if (uVar2 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab014);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) != 0) {
              pppppppuStack_88 = param_1;
              uStack_80 = uVar14;
              uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar18);
              goto joined_r0x0001045aa4ec;
            }
            pppppppuVar6 = pppppppuVar1;
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppppppuVar6 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
            uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar18);
            if (uVar17 == uVar22) goto code_r0x0001045aa598;
code_r0x0001045aa4f0:
            if ((param_2 >> 0x3c & 1) != 0) goto code_r0x0001045aa5b0;
code_r0x0001045aa4f4:
            uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar11 = (uint)uVar13;
joined_r0x0001045aa4ec:
            if (uVar17 != uVar22) goto code_r0x0001045aa4f0;
code_r0x0001045aa598:
            func_0x000100e36e7c(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto code_r0x0001045aa4f4;
code_r0x0001045aa5b0:
            if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab020);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar7,param_1,param_2);
          }
          uVar16 = uVar11 - 0x30;
          if (9 < (uVar16 & 0xff)) {
            if ((uVar11 - 0x41 & 0xff) < 6) {
              uVar16 = uVar11 - 0x37;
            }
            else {
              if ((uVar11 - 0x67 & 0xff) < 0xfa) goto LAB_1045aafb4;
              uVar16 = uVar11 - 0x57;
            }
          }
          pppppppuVar6 = param_1;
          uVar13 = param_2;
          if (uVar21 != uVar7 >> 0xe) {
            uVar13 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              func_0x000100e36e7c(uVar7,param_1,param_2);
            }
            uVar17 = uVar13 >> 0x10;
            if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab024);
              (*pcVar5)();
            }
            if ((param_2 >> 0x3c & 1) == 0) {
              if ((param_2 >> 0x3d & 1) == 0) {
                pppppppuVar6 = pppppppuVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  pppppppuVar6 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
                uVar11 = (uint)*(byte *)((long)pppppppuVar6 + uVar17);
              }
              else {
                pppppppuStack_88 = param_1;
                uStack_80 = uVar14;
                uVar11 = (uint)*(byte *)((long)&pppppppuStack_88 + uVar17);
              }
            }
            else {
              __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
              uVar11 = (uint)uVar13;
            }
            uVar17 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              func_0x000100e36e7c(uVar7,param_1,param_2);
              if ((param_2 >> 0x3c & 1) == 0) goto code_r0x0001045aa730;
code_r0x0001045aace8:
              if (uVar2 <= uVar17 >> 0x10) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab02c);
                (*pcVar5)();
              }
              __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
            }
            else {
              if ((param_2 >> 0x3c & 1) != 0) goto code_r0x0001045aace8;
code_r0x0001045aa730:
              uVar17 = (uVar17 & 0xffffffffffff0000) + 0x10004;
            }
            uVar12 = uVar11 - 0x30;
            if (9 < (uVar12 & 0xff)) {
              if ((uVar11 - 0x41 & 0xff) < 6) {
                uVar12 = uVar11 - 0x37;
              }
              else {
                pppppppuVar6 = param_1;
                uVar13 = param_2;
                if ((uVar11 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045aad48;
                uVar12 = uVar11 - 0x57;
              }
            }
            uVar16 = (uVar16 & 0xf) * 0x10 + (uVar12 & 0xff);
            pppppppuVar6 = pppppppuStack_78;
            uVar13 = uStack_70;
            uVar7 = uVar17;
            if (uVar16 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1045ab028);
              uStack_68 = uVar17;
              (*pcVar5)();
            }
          }
code_r0x0001045aad48:
          uStack_68 = uVar7;
          uStack_70 = uVar13;
          pppppppuStack_78 = pppppppuVar6;
          _swift_bridgeObjectRetain(param_2);
          puVar15 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar15 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x0001014d97ac(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar7 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x0001014d97ac(puVar9,uVar7 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar7 + 1;
          puVar9[uVar7 + 0x20] = (char)uVar16;
          _swift_bridgeObjectRelease(param_2);
        }
      }
LAB_1045a9f94:
      uVar7 = uStack_68;
    } while (uVar21 != uStack_68 >> 0xe);
  }
  uVar10 = *(undefined8 *)(puVar9 + 0x10);
  puVar15 = puVar9 + 0x20;
  FUN_104596000(puVar15,uVar10);
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(param_2);
LAB_1045aafcc:
  auVar23._8_8_ = uVar10;
  auVar23._0_8_ = puVar15;
  return auVar23;
}



/* Entry: 1045ab5a4; end: 1045ab6df;  */

void FUN_1045ab5a4(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if (pbVar4 == pbVar1) {
      return;
    }
    bVar2 = *pbVar4;
    if (0x23 < bVar2) {
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
        return;
      }
      pbVar3 = pbVar4 + 1;
      do {
        pbVar4 = pbVar1;
        if (pbVar3 == pbVar1) break;
        pbVar4 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar4;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
  } while( true );
}



/* Entry: 1045ab6e0; end: 1045abb6b;  */

void FUN_1045ab6e0(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long unaff_x20;
  uint uVar15;
  byte *pbVar11;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar1 == pbVar2) {
    bVar5 = false;
LAB_1045abaf4:
    *param_2 = bVar5;
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    return;
  }
  bVar5 = false;
  uVar9 = (uint)param_1;
  param_1 = (undefined1 *)0x0;
  pbVar11 = pbVar1;
LAB_1045ab73c:
  pbVar10 = pbVar11 + 1;
  bVar3 = *pbVar11;
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  if ((uint)bVar3 == (uVar9 & 0xff)) {
    *param_2 = bVar5;
    *(byte **)(unaff_x20 + 0x28) = pbVar1;
    return;
  }
  if (bVar3 != 0x5c) {
    if (bVar3 == 10 || bVar3 == 0xd) goto LAB_1045abaf4;
    bVar6 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb54);
      (*pcVar4)();
    }
    goto LAB_1045ab730;
  }
  if (pbVar10 != pbVar2) {
    bVar3 = pbVar11[1];
    pbVar10 = pbVar11 + 2;
    *(byte **)(unaff_x20 + 0x28) = pbVar10;
    if ((bVar3 & 0xf8) != 0x30) {
      bVar5 = true;
      lVar13 = 4;
      switch(bVar3) {
      case 0x22:
      case 0x27:
      case 0x3f:
      case 0x5c:
      case 0x61:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
      case 0x76:
        bVar6 = SCARRY8((long)param_1,1);
        param_1 = param_1 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb5c);
          (*pcVar4)();
        }
        goto LAB_1045ab730;
      default:
        goto LAB_1045abaf4;
      case 0x55:
        goto code_r0x0001045ab898;
      case 0x75:
        goto code_r0x0001045ab8a0;
      case 0x78:
        if (pbVar10 != pbVar2) {
          if (9 < (*pbVar10 - 0x30 & 0xff)) {
            bVar5 = true;
            uVar14 = *pbVar10 - 0x41;
            if ((0x25 < uVar14) || ((1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) == 0))
            goto LAB_1045abaf4;
          }
          pbVar10 = pbVar11 + 3;
          *(byte **)(unaff_x20 + 0x28) = pbVar10;
          if ((pbVar10 != pbVar2) &&
             (((*pbVar10 - 0x30 & 0xff) < 10 ||
              ((uVar14 = *pbVar10 - 0x41, uVar14 < 0x26 &&
               ((1L << ((ulong)uVar14 & 0x3f) & 0x3f0000003fU) != 0)))))) {
            pbVar10 = pbVar11 + 4;
            *(byte **)(unaff_x20 + 0x28) = pbVar10;
          }
          bVar5 = SCARRY8((long)param_1,1);
          param_1 = param_1 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb60);
            (*pcVar4)();
          }
          goto LAB_1045ab72c;
        }
        goto LAB_1045abaf4;
      }
    }
    if ((pbVar10 != pbVar2) && ((*pbVar10 & 0xf8) == 0x30)) {
      pbVar10 = pbVar11 + 3;
      *(byte **)(unaff_x20 + 0x28) = pbVar10;
      if ((pbVar10 != pbVar2) && ((*pbVar10 & 0xf8) == 0x30)) {
        if (0x33 < bVar3) goto LAB_1045abb48;
        pbVar10 = pbVar11 + 4;
        *(byte **)(unaff_x20 + 0x28) = pbVar10;
      }
    }
    bVar5 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb58);
      (*pcVar4)();
    }
  }
LAB_1045ab72c:
  bVar5 = true;
LAB_1045ab730:
  pbVar11 = pbVar10;
  if (pbVar10 == pbVar2) goto LAB_1045abaf4;
  goto LAB_1045ab73c;
code_r0x0001045ab898:
  bVar5 = false;
  lVar13 = 8;
code_r0x0001045ab8a0:
  if ((long)pbVar2 - (long)pbVar10 < lVar13) goto LAB_1045abb48;
  bVar3 = *pbVar10;
  uVar14 = bVar3 - 0x30;
  if (9 < uVar14) {
    uVar14 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar14 = uVar14 - 0x37;
    }
    else {
      if (5 < uVar14 - 0x61) goto LAB_1045abb48;
      uVar14 = uVar14 - 0x57;
    }
  }
  bVar3 = pbVar11[3];
  uVar15 = bVar3 - 0x30;
  if (9 < uVar15) {
    uVar15 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar15 = uVar15 - 0x37;
    }
    else {
      if (5 < uVar15 - 0x61) goto LAB_1045abb48;
      uVar15 = uVar15 - 0x57;
    }
  }
  bVar3 = pbVar11[4];
  uVar7 = bVar3 - 0x30;
  if (9 < uVar7) {
    uVar7 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar7 = uVar7 - 0x37;
    }
    else {
      if (5 < uVar7 - 0x61) goto LAB_1045abb48;
      uVar7 = uVar7 - 0x57;
    }
  }
  bVar3 = pbVar11[5];
  uVar8 = bVar3 - 0x30;
  if (9 < uVar8) {
    uVar8 = (uint)bVar3;
    if (bVar3 - 0x41 < 6) {
      uVar8 = uVar8 - 0x37;
    }
    else {
      if (5 < uVar8 - 0x61) goto LAB_1045abb48;
      uVar8 = uVar8 - 0x57;
    }
  }
  uVar14 = ((uVar14 & 0xff) * 0x100 + (uVar15 & 0xff) * 0x10 + (uVar7 & 0xff)) * 0x10 +
           (uVar8 & 0xff);
  if (!bVar5) {
    bVar3 = pbVar11[6];
    uVar15 = bVar3 - 0x30;
    if (9 < uVar15) {
      uVar15 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar15 = uVar15 - 0x37;
      }
      else {
        if (5 < uVar15 - 0x61) goto LAB_1045abb48;
        uVar15 = uVar15 - 0x57;
      }
    }
    bVar3 = pbVar11[7];
    uVar7 = bVar3 - 0x30;
    if (9 < uVar7) {
      uVar7 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar7 = uVar7 - 0x37;
      }
      else {
        if (5 < uVar7 - 0x61) goto LAB_1045abb48;
        uVar7 = uVar7 - 0x57;
      }
    }
    bVar3 = pbVar11[8];
    uVar8 = bVar3 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (5 < uVar8 - 0x61) goto LAB_1045abb48;
        uVar8 = uVar8 - 0x57;
      }
    }
    bVar3 = pbVar11[9];
    uVar12 = bVar3 - 0x30;
    if (9 < uVar12) {
      uVar12 = (uint)bVar3;
      if (bVar3 - 0x41 < 6) {
        uVar12 = uVar12 - 0x37;
      }
      else {
        if (5 < uVar12 - 0x61) goto LAB_1045abb48;
        uVar12 = uVar12 - 0x57;
      }
    }
    uVar14 = (uVar14 * 0x100 + (uVar15 & 0xff) * 0x10 + (uVar7 & 0xff)) * 0x100 +
             (uVar8 & 0xff) * 0x10 + (uVar12 & 0xff);
  }
  pbVar10 = pbVar10 + lVar13;
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  if (uVar14 < 0x80) {
    bVar5 = SCARRY8((long)param_1,1);
    param_1 = param_1 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb64);
      (*pcVar4)();
    }
  }
  else if (uVar14 < 0x800) {
    bVar5 = SCARRY8((long)param_1,2);
    param_1 = param_1 + 2;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb68);
      (*pcVar4)();
    }
  }
  else {
    if (uVar14 >> 0xb == 0x1b) {
LAB_1045abb48:
      bVar5 = true;
      goto LAB_1045abaf4;
    }
    if (uVar14 >> 0x10 == 0) {
      bVar5 = SCARRY8((long)param_1,3);
      param_1 = param_1 + 3;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abb6c);
        (*pcVar4)();
      }
    }
    else {
      if (0x10 < uVar14 >> 0x10) goto LAB_1045abb48;
      bVar5 = SCARRY8((long)param_1,4);
      param_1 = param_1 + 4;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1045abaf0);
        (*pcVar4)();
      }
    }
  }
  goto LAB_1045ab72c;
}



/* Entry: 1045abb6c; end: 1045ac00f;  */

void FUN_1045abb6c(byte *param_1,byte *param_2,long param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  
  if ((param_1 != (byte *)0x0) && (param_2 != param_1)) {
    pbVar11 = *(byte **)(param_3 + 0x28);
    bVar4 = *pbVar11;
    while (bVar4 != param_4) {
      *(byte **)(param_3 + 0x28) = pbVar11 + 1;
      if (bVar4 != 0x5c) {
LAB_1045abe54:
        *param_1 = bVar4;
        goto LAB_1045abe58;
      }
      bVar4 = pbVar11[1];
      uVar5 = (uint)bVar4;
      pbVar1 = pbVar11 + 2;
      *(byte **)(param_3 + 0x28) = pbVar1;
      if ((bVar4 & 0xf8) == 0x30) {
        bVar9 = *pbVar1;
        if ((bVar9 & 0xf8) == 0x30) {
          *(byte **)(param_3 + 0x28) = pbVar11 + 3;
          bVar9 = bVar9 - 0x30;
          bVar2 = pbVar11[3];
          if ((bVar2 & 0xf8) == 0x30) {
            *(byte **)(param_3 + 0x28) = pbVar11 + 4;
            bVar9 = (bVar2 + (bVar9 * '\b' | bVar4 << 6)) - 0x30;
          }
          else {
            bVar9 = bVar9 | (bVar4 - 0x30) * '\b';
          }
          *param_1 = bVar9;
        }
        else {
          *param_1 = bVar4 - 0x30;
        }
        goto LAB_1045abe58;
      }
      bVar6 = true;
      lVar12 = 4;
      switch(bVar4) {
      case 0x55:
        bVar6 = false;
        lVar12 = 8;
      case 0x75:
        bVar4 = *pbVar1;
        uVar5 = bVar4 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if ((uVar5 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = pbVar11[3];
        uVar7 = bVar4 - 0x30;
        if (9 < uVar7) {
          uVar7 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar7 = uVar7 - 0x37;
          }
          else {
            if ((uVar7 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
            uVar7 = uVar7 - 0x57;
          }
        }
        bVar4 = pbVar11[4];
        uVar8 = bVar4 - 0x30;
        if (9 < uVar8) {
          uVar8 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar8 = uVar8 - 0x37;
          }
          else {
            if ((uVar8 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
            uVar8 = uVar8 - 0x57;
          }
        }
        bVar4 = pbVar11[5];
        uVar13 = bVar4 - 0x30;
        if (9 < uVar13) {
          uVar13 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar13 = uVar13 - 0x37;
          }
          else {
            if ((uVar13 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
            uVar13 = uVar13 - 0x57;
          }
        }
        uVar5 = ((uVar5 & 0xff) * 0x100 + (uVar7 & 0xff) * 0x10 + (uVar8 & 0xff)) * 0x10 +
                (uVar13 & 0xff);
        if (!bVar6) {
          bVar4 = pbVar11[6];
          uVar7 = bVar4 - 0x30;
          if (9 < uVar7) {
            uVar7 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar7 = uVar7 - 0x37;
            }
            else {
              if ((uVar7 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
              uVar7 = uVar7 - 0x57;
            }
          }
          bVar4 = pbVar11[7];
          uVar8 = bVar4 - 0x30;
          if (9 < uVar8) {
            uVar8 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar8 = uVar8 - 0x37;
            }
            else {
              if ((uVar8 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
              uVar8 = uVar8 - 0x57;
            }
          }
          bVar4 = pbVar11[8];
          uVar13 = bVar4 - 0x30;
          if (9 < uVar13) {
            uVar13 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar13 = uVar13 - 0x37;
            }
            else {
              if ((uVar13 - 0x67 & 0xff) < 0xfa) goto code_r0x0001045ac004;
              uVar13 = uVar13 - 0x57;
            }
          }
          bVar4 = pbVar11[9];
          uVar10 = bVar4 - 0x30;
          if (9 < uVar10) {
            uVar10 = (uint)bVar4;
            if (bVar4 - 0x41 < 6) {
              uVar10 = uVar10 - 0x37;
            }
            else {
              if ((uVar10 - 0x67 & 0xff) < 0xfa) {
code_r0x0001045ac004:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ac008);
                (*pcVar3)();
              }
              uVar10 = uVar10 - 0x57;
            }
          }
          uVar5 = (uVar5 * 0x100 + (uVar7 & 0xff) * 0x10 + (uVar8 & 0xff)) * 0x100 +
                  (uVar13 & 0xff) * 0x10 + (uVar10 & 0xff);
        }
        *(byte **)(param_3 + 0x28) = pbVar1 + lVar12;
        if (uVar5 < 0x80) {
LAB_1045abf60:
          *param_1 = (byte)uVar5;
          break;
        }
        bVar4 = (byte)uVar5;
        if (uVar5 < 0x800) {
          *param_1 = (byte)(uVar5 >> 6) | 0xc0;
          param_1[1] = bVar4 & 0x3f | 0x80;
          lVar12 = 2;
        }
        else if (uVar5 >> 0x10 == 0) {
          *param_1 = (byte)(uVar5 >> 0xc) | 0xe0;
          param_1[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar4 & 0x3f | 0x80;
          lVar12 = 3;
        }
        else {
          if (0x10 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ac010);
            (*pcVar3)();
          }
          *param_1 = (byte)(uVar5 >> 0x12) | 0xf0;
          param_1[1] = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          param_1[3] = bVar4 & 0x3f | 0x80;
          lVar12 = 4;
        }
        goto code_r0x0001045abe5c;
      default:
        goto LAB_1045abf60;
      case 0x61:
        *param_1 = 7;
        break;
      case 0x62:
        *param_1 = 8;
        break;
      case 0x66:
        *param_1 = 0xc;
        break;
      case 0x6e:
        *param_1 = 10;
        break;
      case 0x72:
        *param_1 = 0xd;
        break;
      case 0x74:
        *param_1 = 9;
        break;
      case 0x76:
        *param_1 = 0xb;
        break;
      case 0x78:
        bVar4 = *pbVar1;
        uVar5 = bVar4 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar4;
          if (bVar4 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if ((uVar5 - 0x67 & 0xff) < 0xfa) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ac00c);
              (*pcVar3)();
            }
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = (byte)uVar5;
        *(byte **)(param_3 + 0x28) = pbVar11 + 3;
        bVar9 = pbVar11[3];
        uVar5 = bVar9 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar9;
          if (bVar9 - 0x41 < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else {
            if (5 < uVar5 - 0x61) goto LAB_1045abe54;
            uVar5 = uVar5 - 0x57;
          }
        }
        bVar4 = (char)uVar5 + bVar4 * '\x10';
        *(byte **)(param_3 + 0x28) = pbVar11 + 4;
        goto LAB_1045abe54;
      }
LAB_1045abe58:
      lVar12 = 1;
code_r0x0001045abe5c:
      param_1 = param_1 + lVar12;
      pbVar11 = *(byte **)(param_3 + 0x28);
      bVar4 = *pbVar11;
    }
    *(byte **)(param_3 + 0x28) = pbVar11 + 1;
  }
  return;
}



/* Entry: 1045ac010; end: 1045ac293;  */

undefined1  [16] FUN_1045ac010(char param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  bVar5 = 0;
  pcVar2 = *(char **)(unaff_x20 + 0x28);
  pcVar6 = pcVar2;
  while( true ) {
    lVar3 = (long)pcVar6 - (long)pcVar2;
    do {
      pcVar7 = pcVar6;
      if (pcVar7 == *(char **)(unaff_x20 + 0x30)) goto LAB_1045ac088;
      cVar1 = *pcVar7;
      if (cVar1 == param_1) {
        FUN_104596000();
        *(char **)(unaff_x20 + 0x28) = pcVar7 + 1;
        FUN_1045ab5a4();
        lVar4 = lVar3;
        if (lVar3 != 0 && !(bool)(bVar5 ^ 1)) {
          FUN_1045a9edc(pcVar2);
          _swift_bridgeObjectRelease(lVar3);
        }
        goto LAB_1045ac090;
      }
      pcVar6 = pcVar7 + 1;
      *(char **)(unaff_x20 + 0x28) = pcVar6;
      if (cVar1 == '\n' || cVar1 == '\r') goto LAB_1045ac088;
      lVar3 = lVar3 + 1;
    } while (cVar1 != '\\');
    if (pcVar6 == *(char **)(unaff_x20 + 0x30)) break;
    pcVar6 = pcVar7 + 2;
    *(char **)(unaff_x20 + 0x28) = pcVar6;
    bVar5 = 1;
  }
LAB_1045ac088:
  pcVar2 = (char *)0x0;
  lVar4 = 0;
LAB_1045ac090:
  auVar8._8_8_ = lVar4;
  auVar8._0_8_ = pcVar2;
  return auVar8;
}



/* Entry: 1045ac294; end: 1045ac323;  */

undefined8 FUN_1045ac294(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  pbVar5 = pbVar1;
  if (lVar3 != 0) {
    pbVar4 = pbVar1;
    pbVar6 = (byte *)(param_1 + 0x20);
    do {
      if (pbVar4 == *(byte **)(unaff_x20 + 0x30)) goto LAB_1045ac304;
      pbVar5 = pbVar4 + 1;
      bVar2 = *pbVar4;
      uVar7 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar7 = (uint)bVar2;
      }
      if (uVar7 != *pbVar6) goto LAB_1045ac304;
      *(byte **)(unaff_x20 + 0x28) = pbVar5;
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar5;
      pbVar6 = pbVar6 + 1;
    } while (lVar3 != 0);
  }
  if (pbVar5 != *(byte **)(unaff_x20 + 0x30)) {
    if ((*pbVar5 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_1045ac304:
      *(byte **)(unaff_x20 + 0x28) = pbVar1;
      return 0;
    }
    FUN_1045ab5a4();
  }
  return 1;
}



/* Entry: 1045ac324; end: 1045ac3db;  */

undefined8 FUN_1045ac324(void)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if (pcVar1 != *(char **)(unaff_x20 + 0x30)) {
    cVar2 = *pcVar1;
    if (cVar2 == '-') {
      *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    }
    uVar3 = 0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    uVar4 = uVar3;
    _swift_initStaticObject();
    _swift_initStaticObject(uVar3,0x113087700);
    FUN_1045ac294();
    if (((uVar4 & 1) != 0) || (FUN_1045ac294(), (uVar3 & 1) != 0)) {
      if (cVar2 == '-') {
        return 0xff800000;
      }
      return 0x7f800000;
    }
    *(char **)(unaff_x20 + 0x28) = pcVar1;
  }
  return 0x100000000;
}



/* Entry: 1045ac3dc; end: 1045ac4e7;  */

undefined1  [16] FUN_1045ac3dc(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  byte *unaff_x22;
  long unaff_x23;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  pbVar3 = (byte *)(lVar4 + 1);
  *(byte **)(unaff_x20 + 0x28) = pbVar3;
  if ((pbVar3 != pbVar1) && ((*pbVar3 & 0xffffffdf) - 0x41 < 0x1a)) {
    for (pbVar6 = (byte *)(lVar4 + 2); *(byte **)(unaff_x20 + 0x28) = pbVar6, pbVar6 != pbVar1;
        pbVar6 = pbVar6 + 1) {
      bVar2 = *pbVar6;
      if (((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) &&
          (uVar5 = (uint)bVar2, 1 < uVar5 - 0x2e)) && (uVar5 != 0x5f)) {
        if (uVar5 != 0x5d) goto LAB_1045ac4a0;
        break;
      }
    }
    if ((pbVar6 != pbVar1) && (*pbVar6 == 0x5d)) {
      lVar4 = (long)pbVar6 - (long)pbVar3;
      FUN_104596000();
      if (lVar4 != 0) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_1045ab5a4();
        unaff_x22 = pbVar3;
        unaff_x23 = lVar4;
        goto LAB_1045ac4cc;
      }
    }
  }
LAB_1045ac4a0:
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,pbVar3,0,0);
  *pbVar3 = 0;
  _swift_willThrow();
LAB_1045ac4cc:
  auVar7._8_8_ = unaff_x23;
  auVar7._0_8_ = unaff_x22;
  return auVar7;
}



/* Entry: 1045ac4e8; end: 1045ac7cb;  */

void FUN_1045ac4e8(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar6;
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  bVar1 = *pbVar3;
  if ((bVar1 == 0x27) || (bVar1 == 0x22)) {
    FUN_1045a9728();
    if (unaff_x21 != 0) {
      return;
    }
    func_0x00010006c090();
    return;
  }
  pbVar6 = *(byte **)(unaff_x20 + 0x30);
  if (bVar1 == 0x5b && pbVar3 != pbVar6) {
    *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
    puVar2 = param_1;
    FUN_1045ab5a4();
    if ((((ulong)param_1 & 1) != 0) && (pbVar3 = *(byte **)(unaff_x20 + 0x28), pbVar3 != pbVar6)) {
      bVar1 = *pbVar3;
      if (bVar1 == 0x5d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
        goto LAB_1045ac5a0;
      }
joined_r0x0001045ac5bc:
      if ((bVar1 == 0x3c) || (bVar1 == 0x7b)) {
        FUN_1045ac7cc();
      }
      else {
        puVar2 = (undefined1 *)0x0;
        FUN_1045ac4e8();
      }
      if (unaff_x21 != 0) {
        return;
      }
      pbVar3 = *(byte **)(unaff_x20 + 0x28);
      pbVar6 = *(byte **)(unaff_x20 + 0x30);
      if (pbVar3 != pbVar6) {
        bVar1 = *pbVar3;
        if (bVar1 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
          goto LAB_1045ac5a0;
        }
        if (bVar1 < 0x24) {
          do {
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar1 != 0x23) break;
              pbVar4 = pbVar3 + 1;
              while (pbVar3 = pbVar6, pbVar4 != pbVar6) {
                pbVar3 = pbVar4 + 1;
                bVar1 = *pbVar4;
                if ((bVar1 == 10) || (pbVar4 = pbVar3, bVar1 == 0xd)) break;
              }
            }
            else {
              pbVar3 = pbVar3 + 1;
            }
            *(byte **)(unaff_x20 + 0x28) = pbVar3;
            if ((pbVar3 == pbVar6) || (bVar1 = *pbVar3, 0x23 < bVar1)) break;
          } while( true );
        }
      }
      if ((pbVar3 != pbVar6) && (*pbVar3 == 0x2c)) {
        do {
          pbVar3 = pbVar3 + 1;
LAB_1045ac67c:
          *(byte **)(unaff_x20 + 0x28) = pbVar3;
          if ((pbVar3 == pbVar6) || (bVar1 = *pbVar3, 0x23 < bVar1)) {
LAB_1045ac6dc:
            if (pbVar3 == pbVar6) goto LAB_1045ac6f4;
            bVar1 = *pbVar3;
            goto joined_r0x0001045ac5bc;
          }
        } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar1 != 0x23) goto LAB_1045ac6dc;
        pbVar4 = pbVar3 + 1;
        while (pbVar3 = pbVar6, pbVar4 != pbVar6) {
          pbVar3 = pbVar4 + 1;
          bVar1 = *pbVar4;
          if ((bVar1 == 10) || (pbVar4 = pbVar3, bVar1 == 0xd)) break;
        }
        goto LAB_1045ac67c;
      }
    }
LAB_1045ac6f4:
    uVar5 = 0;
  }
  else {
    FUN_1045a99e0();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_3 & 0xff) != 1) {
LAB_1045ac5a0:
      FUN_1045ab5a4();
      return;
    }
    FUN_1045acaa0();
    if (((ulong)param_1 & 1) != 0) {
      if (bVar1 == 0x2d) {
        FUN_1045a908c();
        return;
      }
      FUN_1045a9148();
      return;
    }
    func_0x0001045ac0f8();
    if ((param_2 & 0xff) != 1) {
      return;
    }
    pbVar3 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar3 != pbVar6) && (*pbVar3 == 0x2d)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar3 + 1;
    }
    puVar2 = (undefined1 *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    _swift_initStaticObject();
    FUN_1045ac294();
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
    FUN_1045ac324();
    if (((ulong)puVar2 & 0xff00000000) != 0x100000000) {
      return;
    }
    uVar5 = 1;
  }
  FUN_1045407b0();
  _swift_allocError(&UNK_11078a540,puVar2,0,0);
  *puVar2 = uVar5;
  _swift_willThrow();
  return;
}



/* Entry: 1045ac7cc; end: 1045aca9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045ac9d8) */

void FUN_1045ac7cc(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar8;
  
  FUN_1045a8898();
  if (unaff_x21 == 0) {
    pbVar6 = *(byte **)(unaff_x20 + 0x28);
    pbVar8 = *(byte **)(unaff_x20 + 0x30);
    puVar4 = param_1;
    if (pbVar6 != pbVar8) {
LAB_1045ac814:
      if ((uint)*pbVar6 == ((uint)param_1 & 0xff)) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_1045ab5a4();
        lVar1 = *(long *)(unaff_x20 + 0x50) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + 0x50),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1045acaa0);
          (*pcVar3)();
        }
        *(long *)(unaff_x20 + 0x50) = lVar1;
        if (lVar1 <= *(long *)(unaff_x20 + 0x40)) {
          return;
        }
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd00000000000003f,0x800000010f208260,
                   "SwiftProtobuf/TextFormatScanner.swift",0x25,2,0x119,0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aca9c);
        (*pcVar3)();
      }
      puVar4 = (undefined1 *)0x1;
      FUN_1045a9bf8();
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = param_2;
        _swift_bridgeObjectRelease();
        pbVar6 = *(byte **)(unaff_x20 + 0x28);
        do {
          if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_1045ac8b0;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar2 != 0x23) goto LAB_1045ac8b0;
            pbVar7 = pbVar6 + 1;
            do {
              if (pbVar7 == pbVar8) {
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                pbVar6 = pbVar8;
                goto LAB_1045ac8b0;
              }
              pbVar6 = pbVar7 + 1;
              bVar2 = *pbVar7;
              pbVar7 = pbVar6;
            } while (bVar2 != 10 && bVar2 != 0xd);
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
          *(byte **)(unaff_x20 + 0x28) = pbVar6;
        } while( true );
      }
    }
LAB_1045ac9dc:
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
LAB_1045ac8b0:
  if ((pbVar6 != pbVar8) && (*pbVar6 == 0x3a)) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_1045ac8c8:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) {
LAB_1045ac924:
        puVar4 = param_2;
        if (pbVar6 == pbVar8) goto LAB_1045ac9dc;
        if ((*pbVar6 == 0x3c) || (*pbVar6 == 0x7b)) goto LAB_1045ac940;
        param_2 = (undefined1 *)0x1;
        FUN_1045ac4e8();
        goto LAB_1045ac948;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_1045ac924;
    pbVar7 = pbVar6 + 1;
    do {
      pbVar6 = pbVar8;
      if (pbVar7 == pbVar8) break;
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar6;
    } while (bVar2 != 10 && bVar2 != 0xd);
    goto LAB_1045ac8c8;
  }
LAB_1045ac940:
  FUN_1045ac7cc();
LAB_1045ac948:
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar8 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar6 != pbVar8) && ((*pbVar6 == 0x3b || (*pbVar6 == 0x2c)))) {
    do {
      pbVar6 = pbVar6 + 1;
LAB_1045ac96c:
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if ((pbVar6 == pbVar8) || (bVar2 = *pbVar6, 0x23 < bVar2)) goto LAB_1045ac80c;
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
    if ((ulong)bVar2 != 0x23) goto LAB_1045ac80c;
    pbVar7 = pbVar6 + 1;
    while (pbVar6 = pbVar8, pbVar7 != pbVar8) {
      pbVar6 = pbVar7 + 1;
      bVar2 = *pbVar7;
      if ((bVar2 == 10) || (pbVar7 = pbVar6, bVar2 == 0xd)) break;
    }
    goto LAB_1045ac96c;
  }
LAB_1045ac80c:
  puVar4 = param_2;
  param_2 = puVar5;
  if (pbVar6 == pbVar8) goto LAB_1045ac9dc;
  goto LAB_1045ac814;
}



/* Entry: 1045acaa0; end: 1045acb07;  */

bool FUN_1045acaa0(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  long unaff_x20;
  
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  cVar1 = *pcVar3;
  if (cVar1 == '-') {
    pcVar3 = pcVar3 + 1;
    if (pcVar3 == *(char **)(unaff_x20 + 0x30)) {
      return false;
    }
    cVar1 = *pcVar3;
  }
  if (cVar1 != '0') {
    return false;
  }
  if (((byte *)(pcVar3 + 1) != *(byte **)(unaff_x20 + 0x30)) && (bVar2 = pcVar3[1], bVar2 != 0x78))
  {
    return (bVar2 & 0xf8) == 0x30;
  }
  return true;
}



/* Entry: 1045acb08; end: 1045acd9f;  */

void FUN_1045acb08(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  abStack_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  abStack_78[1] = uVar3;
  abStack_78[2] = uVar4;
  abStack_78[3] = uVar5;
  abStack_78[4] = uVar6;
  abStack_78[5] = uVar7;
  abStack_78[6] = uVar8;
  abStack_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      func_0x00010006c090(lVar15,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_1045abb6c(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4 & 0xffffffff);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = (ulong)CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8]))))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      func_0x00010006c090(lVar15,uVar18);
      abStack_78[8] = (byte)uVar19;
      abStack_78[9] = (byte)(uVar19 >> 8);
      abStack_78[10] = (byte)(uVar19 >> 0x10);
      abStack_78[0xb] = (byte)(uVar19 >> 0x18);
      abStack_78[0xc] = (byte)(uVar19 >> 0x20);
      abStack_78[0xd] = (byte)(uVar19 >> 0x28);
      abStack_78[0xe] = (byte)(uVar19 >> 0x30);
      uStack_69 = (undefined1)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      FUN_1045acda0(param_1,abStack_78,param_3,param_4);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(abStack_78[0xe],
                                 CONCAT15(abStack_78[0xd],
                                          CONCAT14(abStack_78[0xc],
                                                   CONCAT13(abStack_78[0xb],
                                                            CONCAT12(abStack_78[10],
                                                                     CONCAT11(abStack_78[9],
                                                                              abStack_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    func_0x00010006c090(lVar15,uVar18);
    abStack_78[8] = (byte)uVar19;
    abStack_78[9] = (byte)(uVar19 >> 8);
    abStack_78[10] = (byte)(uVar19 >> 0x10);
    abStack_78[0xb] = (byte)(uVar19 >> 0x18);
    abStack_78[0xc] = (byte)(uVar19 >> 0x20);
    abStack_78[0xd] = (byte)(uVar19 >> 0x28);
    abStack_78[0xe] = (byte)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) goto LAB_1045acd9c;
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1045acd94);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1045acd98);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_1045abb6c(param_1,lVar15,lVar15 + lVar16,param_3,param_4);
    *param_2 = lVar13;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_1045abb6c(abStack_78,abStack_78,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1045acd9c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1045acda0);
  (*pcVar14)();
}



/* Entry: 1045acda0; end: 1045ace67;  */

void FUN_1045acda0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ace60);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_1045abb6c(param_1,lVar4,lVar4 + lVar5,param_3,param_4);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ace64);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ace68);
  (*pcVar3)();
}



/* Entry: 1045ace68; end: 1045acf43;  */

long FUN_1045ace68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1045acf44; end: 1045ad013;  */

undefined8 * FUN_1045acf44(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_1045acfb8;
    }
  }
  else {
    if (lVar1 != 0) {
      func_0x000100083374(param_1,param_2);
      goto LAB_1045acfb8;
    }
    func_0x0001000834e4(param_1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
LAB_1045acfb8:
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar2);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 1045ad014; end: 1045ad08f;  */

undefined8 * FUN_1045ad014(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    func_0x0001000834e4(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 1045ad090; end: 1045ad13b;  */

int FUN_1045ad090(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045ad13c; end: 1045ad39b;  */

undefined1  [16] FUN_1045ad13c(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  
  if (param_1 == 0) {
    uVar2 = 0;
    uVar5 = 0xe000000000000000;
    goto LAB_1045ad36c;
  }
  puVar4 = PTR___ss5Int32VN_11034ee20;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  if ((param_1 * 0x68c26139 + 0x218c0U >> 6 | param_1 * -0x1c000000) < 0x10c7) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad394);
        (*pcVar1)();
      }
      if (-param_1 < -999999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad388);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 3) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 3 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(3,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad298);
        (*pcVar1)();
      }
      goto LAB_1045ad310;
    }
  }
  else if ((param_1 * 0x26e978d5 + 0x10624d8U >> 3 | param_1 * -0x60000000) < 0x418937) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad39c);
        (*pcVar1)();
      }
      if (-param_1 < -999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad38c);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 6) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 6 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(6,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad398);
        (*pcVar1)();
      }
      goto LAB_1045ad310;
    }
  }
  else {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad390);
        (*pcVar1)();
      }
      if (-param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad384);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_11034ee20,PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 9) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 9 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(9,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045ad208);
        (*pcVar1)();
      }
LAB_1045ad310:
      puVar4 = (undefined *)0x30;
      puVar6 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,lVar7);
      _swift_bridgeObjectRetain(puVar6);
      __sSS6appendyySSF(puVar9,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  __sSS6appendyySSF(puVar4,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  uVar2 = 0x2e;
  uVar5 = 0xe100000000000000;
LAB_1045ad36c:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar2;
  return auVar10;
}



/* Entry: 1045ad39c; end: 1045ad6a7;  */

undefined1  [16] FUN_1045ad39c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar6 = param_1 % 0x15180;
  uVar3 = uVar6 + 0x15180;
  if (-1 < (long)uVar6) {
    uVar3 = uVar6;
  }
  iVar7 = (int)((uVar3 & 0xffffffff) / 0x3c);
  uVar4 = ~(uint)uVar3;
  uVar8 = uVar4 / 0x3c + 1;
  uVar8 = uVar8 + ((uVar8 & 0xffff) / 0x3c) * -0x3c;
  iVar1 = 0;
  if ((uVar8 & 0xffff) != 0) {
    iVar1 = 0x3c - uVar8;
  }
  bVar5 = (uVar3 & 0x8000000000000000) != 0;
  iVar2 = iVar7 + (((uint)((uVar3 & 0xffffffff) / 0x3c) & 0xffff) / 0x3c) * -0x3c;
  if (bVar5) {
    iVar2 = iVar1;
  }
  uVar8 = (uint)((uVar3 & 0xffffffff) / 0xe10);
  if (bVar5) {
    uVar8 = ~(uVar4 / 0xe10);
  }
  auVar9._0_8_ = CONCAT44(iVar2,uVar8) & 0xffffffffffff;
  auVar9._8_4_ = (uint)uVar3 + iVar7 * -0x3c;
  auVar9._12_4_ = 0;
  return auVar9;
}



/* Entry: 1045ad6a8; end: 1045ad6d3;  */

undefined1  [16] FUN_1045ad6a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1045ad6d4; end: 1045ad703;  */

undefined1  [16] FUN_1045ad6d4(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 1045ad704; end: 1045ad747;  */

undefined8 * FUN_1045ad704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 1045ad748; end: 1045ad77f;  */

undefined8 * FUN_1045ad748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1045ad780; end: 1045ad93b;  */

int FUN_1045ad780(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045ad93c; end: 1045ada17;  */

void FUN_1045ad93c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  puVar4 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  puRam0000000113813dd8 = puVar2;
  puRam0000000113813de0 = puVar3;
  return;
}



/* Entry: 1045ada18; end: 1045ada57;  */

undefined8 FUN_1045ada18(void)

{
  if (lRam0000000113087788 != -1) {
    _swift_once(0x113087788,FUN_1045ad93c);
  }
  return 0x113813dd8;
}



/* Entry: 1045ada58; end: 1045adab3;  */

undefined1  [16] FUN_1045ada58(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087788 != -1) {
    _swift_once(0x113087788,FUN_1045ad93c);
  }
  auVar1._8_8_ = uRam0000000113813de0;
  auVar1._0_8_ = uRam0000000113813dd8;
  _swift_bridgeObjectRetain(uRam0000000113813de0);
  return auVar1;
}



/* Entry: 1045adab4; end: 1045adac3;  */

undefined1  [16] FUN_1045adab4(void)

{
  return ZEXT816(0x11078aae8);
}



/* Entry: 1045adac4; end: 1045add57;  */

/* WARNING: Removing unreachable block (ram,0x0001045add08) */

void FUN_1045adac4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045add40);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045add58);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045add44);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045add48);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045add4c);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_11078a7a0,&PTR_DAT_11078a7c8,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045add58; end: 1045adfeb;  */

/* WARNING: Removing unreachable block (ram,0x0001045adf9c) */

void FUN_1045add58(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045adfd4);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045adfec);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045adfd8);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045adfdc);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045adfe0);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110786a78,&PTR_DAT_110786a90,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045adfec; end: 1045ae27f;  */

/* WARNING: Removing unreachable block (ram,0x0001045ae230) */

void FUN_1045adfec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae268);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae280);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae26c);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae270);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae274);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110786ed0,&PTR_DAT_110786ee8,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045ae280; end: 1045ae513;  */

/* WARNING: Removing unreachable block (ram,0x0001045ae4c4) */

void FUN_1045ae280(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae4fc);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae514);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae500);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae504);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae508);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110788f20,&PTR_DAT_110788f40,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045ae514; end: 1045ae7a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045ae758) */

void FUN_1045ae514(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae790);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae7a8);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae794);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae798);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045ae79c);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110788708,&PTR_DAT_110788720,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045ae7a8; end: 1045aea3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045ae9ec) */

void FUN_1045ae7a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aea24);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aea3c);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aea28);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aea2c);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aea30);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110786c68,&PTR_DAT_110786c90,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045aea3c; end: 1045aeccf;  */

/* WARNING: Removing unreachable block (ram,0x0001045aec80) */

void FUN_1045aea3c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar10 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar10 = uVar10 & *puVar11;
  _swift_bridgeObjectRetain(param_4);
  lVar6 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = lVar6;
  while( true ) {
    while (uVar10 != 0) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar6 * 0x200);
      lVar7 = lVar6;
      if ((param_2 <= lVar9) && (lVar9 < param_3)) {
        puVar5 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_88[0] = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100dd4260(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
          func_0x000100dd4260(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_88[0] + 0x10) = uVar1 + 1;
        *(long *)(apuStack_88[0] + uVar1 * 8 + 0x20) = lVar9;
        puVar8 = apuStack_88[0];
      }
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aecb8);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar6) break;
    uVar10 = puVar11[lVar6];
  }
  FUN_104558f08(param_4,puVar11,~uVar12,lVar7,0);
  apuStack_88[0] = puVar8;
  _swift_retain(puVar8);
  func_0x0001038fcb9c(apuStack_88);
  if (unaff_x21 != 0) {
    _swift_release(apuStack_88[0]);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aecd0);
    (*pcVar3)();
  }
  _swift_release(puVar8);
  puVar8 = apuStack_88[0];
  uVar10 = *(ulong *)(apuStack_88[0] + 0x10);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aecbc);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aecc0);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar8 + uVar12 * 8 + 0x20);
      func_0x00010035a314(lVar6);
      if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1045aecc4);
        (*pcVar3)();
      }
      FUN_104558b10(*(long *)(param_4 + 0x38) + lVar6 * 0x28,apuStack_88);
      lVar6 = lStack_68;
      uVar2 = uStack_70;
      func_0x0001000a8868(apuStack_88,uStack_70);
      puVar11 = (ulong *)0x0;
      (**(code **)(lVar6 + 0x30))(param_1,&UNK_110787118,&PTR_DAT_110787140,uVar2,lVar6);
      uVar12 = uVar12 + 1;
      func_0x0001000834e4(apuStack_88);
    } while (uVar10 != uVar12);
  }
  _swift_release(puVar8);
  return;
}



/* Entry: 1045aecd0; end: 1045aed0f;  */

void FUN_1045aecd0(void)

{
  FUN_1045add58();
  return;
}


