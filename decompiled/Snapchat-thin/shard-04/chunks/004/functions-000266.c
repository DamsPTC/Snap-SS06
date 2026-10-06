/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103420acc; end: 103420b97;  */

long FUN_103420acc(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f14be30);
    func_0x000107c6142c(0xe100000000000000);
  }
  return param_1;
}



/* Entry: 103420b98; end: 103420bbb;  */

void FUN_103420b98(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5ce40(param_1);
      func_0x000107c61180();
    }
    FUN_1034202d8(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c3dfe4(param_1);
      func_0x000107c61180();
    }
    FUN_103420538(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 103420bbc; end: 103420c87;  */

long FUN_103420bbc(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000016,0x800000010f14be10);
    func_0x000107c6142c(0xe100000000000000);
  }
  return param_1;
}



/* Entry: 103420c88; end: 103420c9f;  */

undefined8 * FUN_103420c88(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103420ca0; end: 103420d2f;  */

undefined8 FUN_103420ca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103420d30; end: 103420ed7;  */

long FUN_103420d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = param_5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = lVar2;
  FUN_103420acc();
  func_0x000107c615f0();
  func_0x000107c615e8(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61574();
    unaff_x20 = 0;
  }
  else {
    lVar2 = 0;
    FUN_10341f770();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x20) = 1;
    *(undefined8 *)(lVar2 + 0x10) = param_6;
    *(undefined1 *)(lVar2 + 0x18) = 0;
    lVar3 = 0;
    FUN_103421e24();
    func_0x000107c613fc();
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(lVar2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010341f4b4();
    *(long *)(lVar3 + 0x10) = lVar1;
    *(long *)(lVar3 + 0x18) = lVar2;
    *(undefined ***)(lVar3 + 0x20) = &PTR_DAT_1106534e8;
    *(undefined **)(lVar3 + 0x28) = puVar4;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar3;
    func_0x000107c61574(uVar5);
    uVar5 = param_3;
    func_0x000107c61174(param_3);
    FUN_10341f87c(param_4,param_2,param_3);
    func_0x000107c61170(uVar5);
    FUN_10341fbc4(param_1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar2);
  }
  return unaff_x20;
}



/* Entry: 103420ed8; end: 10342122b;  */

long FUN_103420ed8(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x20) = uVar1;
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined ***)(param_4 + 0x18) = &PTR_DAT_1106535f0;
  puVar3 = &UNK_1106535d8;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_1106535d8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_4);
  pcVar7 = *(code **)(*param_2 + 0x60);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  pcVar6 = FUN_10342128c;
  puVar4 = puVar2;
  (*pcVar7)(FUN_10342128c);
  func_0x000107c61574(puVar2);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  pcVar7 = *(code **)(puVar4 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c613fc(&UNK_1106535d8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_4);
  func_0x000107c61574(param_4);
  uVar1 = 0x103421294;
  puVar2 = puVar3;
  (**(code **)(*param_3 + 0x60))(0x103421294);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(uVar1);
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  pcVar6 = *(code **)(puVar2 + 0x10);
  func_0x000107c6157c(uVar5);
  (*pcVar6)();
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar5);
  return param_4;
}



/* Entry: 10342122c; end: 10342128b;  */

void FUN_10342122c(void)

{
  func_0x000103420718();
  return;
}



/* Entry: 10342128c; end: 1034212bf;  */

void FUN_10342128c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c8c00;
    func_0x000107c610f8(PTR_PTR_1126c8c00);
    func_0x000107c453e4();
    func_0x000107c4ca50();
    func_0x000107c61170(puVar2);
    FUN_10341c2b8(param_1,uVar3);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1034212c0; end: 1034218f7;  */

void FUN_1034212c0(long param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x20;
  long lVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_69 [9];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100bc7fa4();
  func_0x000107c61428(unaff_x20 + 0x28,&puStack_c8,0x20,0);
  lVar26 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar26 + 0x10) != 0) {
    func_0x000107c61434(lVar26);
    lVar19 = param_2;
    uVar31 = param_3;
    func_0x000100029284();
    if ((uVar31 & 1) != 0) {
      lVar19 = *(long *)(lVar26 + 0x38) + lVar19 * 0x18;
      uVar32 = *(undefined8 *)(lVar19 + 8);
      uVar6 = *(undefined8 *)(lVar19 + 0x10);
      func_0x000107c61434(uVar32);
      func_0x000107c61434(uVar6);
      func_0x000107c614a8(&puStack_c8);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar32);
      func_0x000107c6142c(lVar26);
      bVar10 = true;
      goto LAB_103421394;
    }
    func_0x000107c6142c(lVar26);
  }
  func_0x000107c614a8(&puStack_c8);
  bVar10 = false;
LAB_103421394:
  lVar20 = *(long *)(param_1 + 0x10);
  lVar26 = lVar20 + 1;
  lVar19 = 0x38;
  do {
    lVar26 = lVar26 + -1;
    if (lVar26 == 0) {
      auStack_69[0] = 2;
      if (!bVar10) {
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101438ce4();
        if (lVar20 == 0) {
LAB_103421694:
          func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
          puVar28 = puVar13;
          func_0x000107c6048c();
          lVar26 = 0;
          uVar25 = 1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
          uVar31 = 0xffffffffffffffff;
          if ((puVar13[0x20] & 0x3f) < 6) {
            uVar31 = ~(-1L << (uVar25 & 0x3f));
          }
          uVar31 = uVar31 & *(ulong *)(puVar13 + 0x40);
          if (uVar31 == 0) goto LAB_103421718;
          do {
            uVar22 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
            uVar31 = uVar31 - 1 & uVar31;
            while( true ) {
              uVar22 = LZCOUNT(uVar22);
              uVar21 = uVar22 | lVar26 << 6;
              lVar19 = uVar21 * 0x10;
              puVar5 = (undefined8 *)(*(long *)(puVar13 + 0x30) + lVar19);
              uVar32 = *puVar5;
              uVar6 = puVar5[1];
              puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8();
              func_0x000107c61434(uVar6);
              func_0x000107c47580();
              uVar23 = (uVar22 & 0xffffffffffffffc0 | lVar26 << 6) >> 3;
              *(ulong *)(puVar28 + uVar23 + 0x40) =
                   *(ulong *)(puVar28 + uVar23 + 0x40) | 1L << (uVar22 & 0x3f);
              puVar5 = (undefined8 *)(*(long *)(puVar28 + 0x30) + lVar19);
              *puVar5 = uVar32;
              puVar5[1] = uVar6;
              *(undefined **)(*(long *)(puVar28 + 0x38) + uVar21 * 8) = puVar15;
              if (SCARRY8(*(long *)(puVar28 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218e8);
                (*pcVar9)();
              }
              *(long *)(puVar28 + 0x10) = *(long *)(puVar28 + 0x10) + 1;
              if (uVar31 != 0) break;
LAB_103421718:
              do {
                lVar19 = lVar26 + 1;
                if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218e4);
                  (*pcVar9)();
                }
                if ((long)(uVar25 + 0x3f >> 6) <= lVar19) {
                  func_0x000107c61574(puVar28);
                  func_0x000107c6142c(puVar13);
                  return;
                }
                uVar31 = *(ulong *)((long)(puVar13 + 0x40) + lVar19 * 8);
                lVar26 = lVar26 + 1;
              } while (uVar31 == 0);
              uVar22 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
              uVar31 = uVar31 - 1 & uVar31;
              lVar26 = lVar19;
            }
          } while( true );
        }
        lVar26 = 0;
LAB_103421494:
        plVar3 = (long *)(param_1 + 0x20 + lVar26 * 0x20);
        lVar19 = *plVar3;
        lVar7 = plVar3[1];
        lVar29 = plVar3[2];
        uVar8 = (undefined1)plVar3[3];
        lVar26 = lVar26 + 1;
        FUN_10341f5d0(lVar19,lVar7,lVar29,uVar8);
        lVar14 = lVar19;
        FUN_103424bac(lVar19,lVar7,lVar29,uVar8);
        puVar28 = puVar13;
        func_0x000107c61558();
        puVar30 = (ulong *)(lVar14 + 0x40);
        uVar25 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
        uVar31 = 0xffffffffffffffff;
        if (-uVar25 < 0x40) {
          uVar31 = ~(-1L << (-uVar25 & 0x3f));
        }
        uVar31 = uVar31 & *puVar30;
        puStack_c8 = puVar13;
        func_0x000107c61434(lVar14);
        lVar18 = 0;
        do {
          lVar2 = lVar18;
          while (uVar31 == 0) {
            bVar10 = SCARRY8(lVar2,1);
            lVar2 = lVar2 + 1;
            if (bVar10) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218d8);
              (*pcVar9)();
            }
            if ((long)(0x3f - uVar25 >> 6) <= lVar2) {
              func_0x00010143ab2c(lVar14,puVar30,~uVar25,lVar18,0);
              func_0x000107c6142c(lVar14);
              func_0x00010341f5ec(lVar19,lVar7,lVar29,uVar8);
              if (lVar26 == lVar20) goto LAB_103421694;
              goto LAB_103421494;
            }
            uVar31 = puVar30[lVar2];
          }
          uVar22 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar21 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) | lVar2 << 6;
          puVar4 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar21 * 0x10);
          uVar22 = *puVar4;
          uVar23 = puVar4[1];
          uVar32 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar21 * 8);
          func_0x000107c61434(uVar23);
          uVar21 = uVar22;
          uVar17 = uVar23;
          func_0x000100029284();
          uVar24 = (ulong)~(uint)uVar17 & 1;
          lVar18 = *(long *)(puVar13 + 0x10) + uVar24;
          if (SCARRY8(*(long *)(puVar13 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218dc);
            (*pcVar9)();
          }
          if (*(long *)(puVar13 + 0x18) < lVar18) {
            func_0x00010143a4f4(lVar18,(uint)puVar28 & 1);
            uVar21 = uVar22;
            uVar24 = uVar23;
            func_0x000100029284();
            if (((uint)uVar17 & 1) != ((uint)uVar24 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218f8);
              (*pcVar9)();
            }
          }
          else if (((ulong)puVar28 & 1) == 0) {
            func_0x00010143a38c();
          }
          puVar13 = puStack_c8;
          uVar31 = uVar31 - 1 & uVar31;
          if ((uVar17 & 1) == 0) {
            *(ulong *)(puStack_c8 + (uVar21 >> 6) * 8 + 0x40) =
                 *(ulong *)(puStack_c8 + (uVar21 >> 6) * 8 + 0x40) | 1L << (uVar21 & 0x3f);
            puVar4 = (ulong *)(*(long *)(puStack_c8 + 0x30) + uVar21 * 0x10);
            *puVar4 = uVar22;
            puVar4[1] = uVar23;
            *(undefined8 *)(*(long *)(puStack_c8 + 0x38) + uVar21 * 8) = uVar32;
            if (SCARRY8(*(long *)(puStack_c8 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1034218e0);
              (*pcVar9)();
            }
            *(long *)(puStack_c8 + 0x10) = *(long *)(puStack_c8 + 0x10) + 1;
          }
          else {
            func_0x000107c6142c(uVar23);
            *(undefined8 *)(*(long *)(puVar13 + 0x38) + uVar21 * 8) = uVar32;
          }
          puVar28 = (undefined *)0x1;
          lVar18 = lVar2;
        } while( true );
      }
      goto LAB_103421810;
    }
    pcVar1 = (char *)(param_1 + lVar19);
    lVar19 = lVar19 + 0x20;
  } while (*pcVar1 != '\0');
  auStack_69[0] = 2;
  lVar26 = *(long *)(unaff_x20 + 0x28);
  ppuVar27 = *(undefined ***)(lVar26 + 0x10);
  ppuVar11 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar27 != (undefined **)0x0) {
    func_0x000107c61434(lVar26);
    ppuVar11 = ppuVar27;
    func_0x00010109b448(ppuVar27,0);
    ppuVar12 = &puStack_c8;
    FUN_103422574(ppuVar12,ppuVar11 + 4,ppuVar27,lVar26);
    func_0x00010143ab2c(puStack_c8,uStack_c0,uStack_b8,uStack_b0,uStack_a8);
    if (ppuVar12 != ppuVar27) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103421418);
      (*pcVar9)();
    }
  }
  FUN_10342193c(ppuVar11);
  func_0x000107c61574(ppuVar11);
  if (bVar10) {
LAB_103421810:
    FUN_103421b2c(param_2,param_3,param_1);
    puVar16 = auStack_69;
    FUN_1034218f8(puVar16,param_1);
    if (((ulong)puVar16 & 1) != 0) {
      lVar26 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar26 + 0x18) = 2;
      *(undefined8 *)(lVar26 + 0x10) = 1;
      *(long *)(lVar26 + 0x20) = param_2;
      *(ulong *)(lVar26 + 0x28) = param_3;
      func_0x000107c61434(param_3);
      FUN_10342193c(lVar26);
      func_0x000107c61588(lVar26);
      func_0x000100bcb1dc((long *)(lVar26 + 0x20));
    }
  }
  else {
    FUN_103421cd4(param_2,param_3);
    FUN_103421b2c(param_2,param_3,param_1);
  }
  return;
}



/* Entry: 1034218f8; end: 10342193b;  */

byte FUN_1034218f8(byte *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  
  bVar2 = *param_1;
  if (bVar2 == 2) {
    lVar3 = *(long *)(param_2 + 0x10) + 1;
    pcVar4 = (char *)(param_2 + 0x38);
    do {
      lVar3 = lVar3 + -1;
      bVar2 = lVar3 != 0;
      if (lVar3 == 0) break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 0x20;
    } while (cVar1 != '\r');
    *param_1 = lVar3 != 0;
  }
  return bVar2 & 1;
}



/* Entry: 10342193c; end: 103421b2b;  */

void FUN_10342193c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100bc7fa4();
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    puVar13 = (ulong *)(param_1 + 0x28);
    do {
      uVar8 = puVar13[-1];
      uVar3 = *puVar13;
      func_0x000107c61428(unaff_x20 + 0x28,auStack_78,0x20,0);
      lVar11 = *(long *)(unaff_x20 + 0x28);
      lVar14 = *(long *)(lVar11 + 0x10);
      func_0x000107c61434(uVar3);
      if (lVar14 != 0) {
        func_0x000107c61434(lVar11);
        uVar6 = uVar8;
        uVar9 = uVar3;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          func_0x000107c6142c(lVar11);
        }
        else {
          puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 0x18);
          uVar12 = *puVar10;
          uVar4 = puVar10[1];
          uVar15 = puVar10[2];
          func_0x000107c61434(uVar4);
          func_0x000107c61434(uVar15);
          func_0x000107c614a8(auStack_78);
          func_0x000107c6142c(lVar11);
          uVar7 = uVar1;
          func_0x000107c614f0(uVar1);
          (**(code **)(lVar2 + 8))(uVar15,uVar12,uVar4,uVar7,lVar2);
          func_0x000107c6142c(uVar15);
          func_0x000107c6142c(uVar4);
          func_0x000107c61428(unaff_x20 + 0x28,auStack_78,0x21,0);
          uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
          func_0x000107c61434(uVar12);
          uVar6 = uVar3;
          func_0x000100029284();
          func_0x000107c6142c(uVar12);
          if ((uVar6 & 1) != 0) {
            iVar5 = (int)*(undefined8 *)(unaff_x20 + 0x28);
            func_0x000107c61558();
            lVar11 = *(long *)(unaff_x20 + 0x28);
            *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
            if (iVar5 == 0) {
              FUN_10341f050();
            }
            func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar8 * 0x10 + 8));
            lVar14 = *(long *)(lVar11 + 0x38) + uVar8 * 0x18;
            uVar12 = *(undefined8 *)(lVar14 + 8);
            func_0x000107c6142c(*(undefined8 *)(lVar14 + 0x10));
            func_0x000107c6142c(uVar12);
            func_0x0001034222c0(uVar8,lVar11);
            *(long *)(unaff_x20 + 0x28) = lVar11;
          }
        }
      }
      func_0x000107c614a8(auStack_78);
      puVar13 = puVar13 + 2;
      func_0x000107c6142c(uVar3);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 103421b2c; end: 103421cd3;  */

void FUN_103421b2c(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 auStack_68 [3];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100bc7fa4();
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0x20,0);
    lVar6 = *(long *)(unaff_x20 + 0x28);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      lVar4 = param_1;
      uVar3 = param_2;
      func_0x000100029284();
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(lVar6 + 0x38) + lVar4 * 0x18;
        uVar2 = *(undefined8 *)(lVar4 + 8);
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar1);
        func_0x000107c614a8(auStack_68);
        func_0x000107c6142c(lVar6);
        auStack_68[0] = uVar1;
        func_0x000107c61434(uVar1);
        func_0x000107c61434(param_3);
        FUN_10342247c();
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(uVar2);
        uVar1 = auStack_68[0];
        func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0x21,0);
        func_0x000107c61434(uVar1);
        func_0x000107c61434(param_2);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x000107c61558(uVar2);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
        *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
        FUN_103422178(param_1,param_2,uVar1,param_1,param_2,uVar2);
        *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
        func_0x000107c614a8(auStack_68);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
        lVar6 = *(long *)(unaff_x20 + 0x20);
        func_0x000107c614f0(uVar2);
        (**(code **)(lVar6 + 8))(uVar1,param_1,param_2,uVar2,lVar6);
        func_0x000107c6142c(uVar1);
        return;
      }
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 103421cd4; end: 103421e0b;  */

void FUN_103421cd4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100bc7fa4();
  func_0x000107c61428(unaff_x20 + 0x28,auStack_48,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    lVar3 = param_1;
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(lVar5 + 0x38) + lVar3 * 0x18;
      uVar1 = *(undefined8 *)(lVar3 + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      func_0x000107c61434(uVar1);
      func_0x000107c61434(uVar4);
      func_0x000107c614a8(auStack_48);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar5);
      return;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_48);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_48,0x21,0);
  func_0x000107c61434(param_2);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61558(uVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
  FUN_103422178(param_1,param_2,PTR___swiftEmptyArrayStorage_11034f1c8,param_1,param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 103421e0c; end: 103421e23;  */

void FUN_103421e0c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000103421f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103421e24; end: 103421e43;  */

void FUN_103421e24(void)

{
  func_0x000107c61168(&PTR_PTR_112f67678);
  return;
}



/* Entry: 103421e44; end: 103421f03;  */

void FUN_103421e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c614f0(uVar2);
    puVar1 = &UNK_110653610;
    func_0x000107c613fc(&UNK_110653610,0x30,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    *(long *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    func_0x000107c6157c();
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_3);
    func_0x00010090569c(0x103421f58,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 103421f04; end: 103421f7f;  */

void FUN_103421f04(code *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000103421f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103421f80; end: 103422177;  */

undefined * FUN_103421f80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103422070);
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
    puVar3 = (undefined *)0x112f67100;
    func_0x0001000285a8(0x112f67100,&UNK_10dbc31e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103422178; end: 10342247b;  */

/* WARNING: Possible PIC construction at 0x000103422248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342224c) */

void FUN_103422178(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_4;
  uVar4 = param_5;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103422270);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    func_0x00010341f1e8(lVar5,param_6 & 1);
    uVar8 = param_5;
    func_0x000100029284();
    lVar3 = param_4;
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103422224);
      (*pcVar2)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x00010341f050();
    lVar5 = *unaff_x20;
    goto joined_r0x000103422284;
  }
  lVar5 = *unaff_x20;
joined_r0x000103422284:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x18);
    uVar1 = puVar7[2];
    *puVar7 = param_1;
    puVar7[1] = param_2;
    puVar7[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  FUN_10341eff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 10342247c; end: 103422573;  */

void FUN_10342247c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103422568);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x000103422070();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10342256c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103422570);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x20 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_110653848);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103422574);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103422574; end: 1034226c3;  */

long FUN_103422574(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1034226c4);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1034226c0);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_103422684;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_103422684:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 1034226c4; end: 1034226cf; -[SCLensSwipeFunnelOnCameraEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034226c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f676e8;
  func_0x000107c61428(param_1 + _DAT_112f676e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034226d0; end: 1034226db; -[SCLensSwipeFunnelOnCameraEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034226d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f676e8;
  func_0x000107c61428(param_1 + _DAT_112f676e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034226dc; end: 1034226e7; -[SCLensSwipeFunnelOnCameraEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034226dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f676f0;
  func_0x000107c61428(param_1 + _DAT_112f676f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034226e8; end: 1034226f3; -[SCLensSwipeFunnelOnCameraEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034226e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f676f0;
  func_0x000107c61428(param_1 + _DAT_112f676f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034226f4; end: 1034226ff; -[SCLensSwipeFunnelOnCameraEntryPoint cameraUIScopedLensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034226f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f676f8;
  func_0x000107c61428(param_1 + _DAT_112f676f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422700; end: 10342270b; -[SCLensSwipeFunnelOnCameraEntryPoint setCameraUIScopedLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f676f8;
  func_0x000107c61428(param_1 + _DAT_112f676f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342270c; end: 103422717; -[SCLensSwipeFunnelOnCameraEntryPoint lensCarouselScopeInfoProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342270c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67700;
  func_0x000107c61428(param_1 + _DAT_112f67700,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422718; end: 103422723; -[SCLensSwipeFunnelOnCameraEntryPoint setLensCarouselScopeInfoProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67700;
  func_0x000107c61428(param_1 + _DAT_112f67700,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103422724; end: 10342272f; -[SCLensSwipeFunnelOnCameraEntryPoint cameraUIScopedLensCarouselLensApplicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67708;
  func_0x000107c61428(param_1 + _DAT_112f67708,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422730; end: 10342273b; -[SCLensSwipeFunnelOnCameraEntryPoint setCameraUIScopedLensCarouselLensApplicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67708;
  func_0x000107c61428(param_1 + _DAT_112f67708,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342273c; end: 103422747; -[SCLensSwipeFunnelOnCameraEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342273c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67710;
  func_0x000107c61428(param_1 + _DAT_112f67710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422748; end: 103422753; -[SCLensSwipeFunnelOnCameraEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67710;
  func_0x000107c61428(param_1 + _DAT_112f67710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103422754; end: 10342275f; -[SCLensSwipeFunnelOnCameraEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67718;
  func_0x000107c61428(param_1 + _DAT_112f67718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422760; end: 10342276b; -[SCLensSwipeFunnelOnCameraEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103422760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67718;
  func_0x000107c61428(param_1 + _DAT_112f67718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342276c; end: 103422777; -[SCLensSwipeFunnelOnCameraEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342276c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67720;
  func_0x000107c61428(param_1 + _DAT_112f67720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422778; end: 1034227bb;  */

void FUN_103422778(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034227bc; end: 1034227c7; -[SCLensSwipeFunnelOnCameraEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034227bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67720;
  func_0x000107c61428(param_1 + _DAT_112f67720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034227c8; end: 10342281b;  */

void FUN_1034227c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342281c; end: 103422bbb;  */

/* WARNING: Possible PIC construction at 0x000103422a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103422acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103422ae0) */
/* WARNING: Removing unreachable block (ram,0x000103422b00) */
/* WARNING: Removing unreachable block (ram,0x000103422b30) */
/* WARNING: Removing unreachable block (ram,0x000103422b20) */
/* WARNING: Removing unreachable block (ram,0x000103422b60) */
/* WARNING: Removing unreachable block (ram,0x000103422b50) */
/* WARNING: Removing unreachable block (ram,0x000103422b40) */
/* WARNING: Removing unreachable block (ram,0x000103422b90) */
/* WARNING: Removing unreachable block (ram,0x000103422b80) */
/* WARNING: Removing unreachable block (ram,0x000103422b70) */
/* WARNING: Removing unreachable block (ram,0x000103422a60) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103422a50) */
/* WARNING: Removing unreachable block (ram,0x000103422a40) */
/* WARNING: Removing unreachable block (ram,0x000103422a30) */
/* WARNING: Removing unreachable block (ram,0x000103422a20) */
/* WARNING: Removing unreachable block (ram,0x000103422a10) */
/* WARNING: Removing unreachable block (ram,0x000103422ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342281c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  lVar6 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar6 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f2a0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4af1c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c3f298();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar1;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4af24();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar6);
            lVar6 = lVar1;
          }
          else {
            lVar1 = unaff_x20;
            func_0x000107c4b2f4();
            func_0x000107c61180();
            if (lVar1 != 0) {
              func_0x000107c4b258();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar6 = 0;
                FUN_10341df00();
                func_0x000107c613fc();
                *(undefined8 *)(lVar6 + 0x10) = 0;
                puVar7 = &UNK_110653640;
                func_0x000107c613fc(&UNK_110653640,0x18,7);
                func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                uVar9 = 0x112f671c8;
                func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
                func_0x000107c613fc();
                pcVar8 = FUN_103422bbc;
                func_0x0001000bdd8c(FUN_103422bbc,puVar7,uVar9);
                func_0x000107c4b364();
                func_0x000107c61180();
                uVar9 = *(undefined8 *)(lVar4 + _DAT_113038790);
                func_0x000107c61174();
                func_0x000107c4aeb0();
                func_0x000107c61180();
                func_0x000103420aac(0);
                func_0x000107c613fc();
                FUN_103420d30(lVar2,lVar3,uVar9,lVar5,lVar1,pcVar8);
                lVar6 = lVar4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 103422bbc; end: 103422bc3;  */

void FUN_103422bbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 103422bc4; end: 103422beb; -[SCLensSwipeFunnelOnCameraEntryPoint begin] */

void FUN_103422bc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10342281c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103422bec; end: 103422c2f; -[SCLensSwipeFunnelOnCameraEntryPoint end] */

void FUN_103422bec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103422c30; end: 103423047;  */

void FUN_103422c30(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0fff5d0)) ||
             (func_0x000107c605b8(0xd000000000000024,0x800000010f000a30,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53100();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f0d9d0)) ||
               (func_0x000107c605b8(0xd000000000000026,0x800000010f0f2630,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c78();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef0f0da10)) ||
                 (func_0x000107c605b8(0xd000000000000030,0x800000010f0f25f0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c530f8();
              }
              else {
                if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef10da6a0)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000015;
                    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
                       (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55df4();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ecf70)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000012,0x800000010ef13090,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          func_0x000107c602fc(0x15);
                          func_0x000107c6142c(0xe000000000000000);
                          func_0x000107c5fb78(param_2,param_3);
                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                              0x800000010ef0fc20,
                                              "LensSwipeFunnelIntegration/SCLensSwipeFunnelOnCameraEntryPoint.swift"
                                              ,0x44,2,0x45,0);
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x103423048);
                          (*pcVar1)();
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55db4();
                    }
                    goto LAB_103422cc4;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c80();
              }
            }
          }
          goto LAB_103422cc4;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103422cc4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103422cc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103423048; end: 1034230f3; -[SCLensSwipeFunnelOnCameraEntryPoint setValue:forIvarName:] */

void FUN_103423048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103422c30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034230f4; end: 1034231df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034230f4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f676e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f676f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f676f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67700,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67708,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67710,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67718,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67720,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f67728) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034231e0; end: 1034231ff; -[SCLensSwipeFunnelOnCameraEntryPoint init] */

void FUN_1034231e0(void)

{
  FUN_1034230f4();
  return;
}



/* Entry: 103423200; end: 103423233;  */

void FUN_103423200(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103423234; end: 1034232db; -[SCLensSwipeFunnelOnCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423234(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f676e8);
  func_0x000107c61610(param_1 + _DAT_112f676f0);
  func_0x000107c61610(param_1 + _DAT_112f676f8);
  func_0x000107c61610(param_1 + _DAT_112f67700);
  func_0x000107c61610(param_1 + _DAT_112f67708);
  func_0x000107c61610(param_1 + _DAT_112f67710);
  func_0x000107c61610(param_1 + _DAT_112f67718);
  func_0x000107c61610(param_1 + _DAT_112f67720);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f67728));
  return;
}



/* Entry: 1034232dc; end: 1034232fb;  */

void FUN_1034232dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9170);
  return;
}



/* Entry: 1034232fc; end: 103423307; -[SCLensSwipeFunnelOnPreviewEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034232fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67758;
  func_0x000107c61428(param_1 + _DAT_112f67758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423308; end: 103423313; -[SCLensSwipeFunnelOnPreviewEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67758;
  func_0x000107c61428(param_1 + _DAT_112f67758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423314; end: 10342331f; -[SCLensSwipeFunnelOnPreviewEntryPoint previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423314(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67760;
  func_0x000107c61428(param_1 + _DAT_112f67760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423320; end: 10342332b; -[SCLensSwipeFunnelOnPreviewEntryPoint setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67760;
  func_0x000107c61428(param_1 + _DAT_112f67760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342332c; end: 103423337; -[SCLensSwipeFunnelOnPreviewEntryPoint lensProcessingSharedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342332c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67768;
  func_0x000107c61428(param_1 + _DAT_112f67768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423338; end: 103423343; -[SCLensSwipeFunnelOnPreviewEntryPoint setLensProcessingSharedServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67768;
  func_0x000107c61428(param_1 + _DAT_112f67768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423344; end: 10342334f; -[SCLensSwipeFunnelOnPreviewEntryPoint lensCarouselScopeInfoProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423344(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67770;
  func_0x000107c61428(param_1 + _DAT_112f67770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423350; end: 10342335b; -[SCLensSwipeFunnelOnPreviewEntryPoint setLensCarouselScopeInfoProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67770;
  func_0x000107c61428(param_1 + _DAT_112f67770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342335c; end: 103423367; -[SCLensSwipeFunnelOnPreviewEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342335c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67778;
  func_0x000107c61428(param_1 + _DAT_112f67778,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423368; end: 103423373; -[SCLensSwipeFunnelOnPreviewEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423368(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67778;
  func_0x000107c61428(param_1 + _DAT_112f67778,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423374; end: 10342337f; -[SCLensSwipeFunnelOnPreviewEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67780;
  func_0x000107c61428(param_1 + _DAT_112f67780,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423380; end: 10342338b; -[SCLensSwipeFunnelOnPreviewEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67780;
  func_0x000107c61428(param_1 + _DAT_112f67780,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342338c; end: 103423397; -[SCLensSwipeFunnelOnPreviewEntryPoint lensUCOLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342338c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67788;
  func_0x000107c61428(param_1 + _DAT_112f67788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423398; end: 1034233db;  */

void FUN_103423398(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034233dc; end: 1034233e7; -[SCLensSwipeFunnelOnPreviewEntryPoint setLensUCOLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034233dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67788;
  func_0x000107c61428(param_1 + _DAT_112f67788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034233e8; end: 10342343b;  */

void FUN_1034233e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342343c; end: 10342370b;  */

/* WARNING: Possible PIC construction at 0x0001034235d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034235e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034236c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034236d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034236e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034236a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034236b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103423684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103423664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103423654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103423668) */
/* WARNING: Removing unreachable block (ram,0x000103423688) */
/* WARNING: Removing unreachable block (ram,0x0001034236b8) */
/* WARNING: Removing unreachable block (ram,0x0001034236a8) */
/* WARNING: Removing unreachable block (ram,0x0001034236e8) */
/* WARNING: Removing unreachable block (ram,0x0001034236d8) */
/* WARNING: Removing unreachable block (ram,0x0001034236c8) */
/* WARNING: Removing unreachable block (ram,0x0001034235e8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001034235d8) */
/* WARNING: Removing unreachable block (ram,0x000103423658) */

void FUN_10342343c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar6 = unaff_x20;
  func_0x000107c4f180();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b36c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4af1c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c4af24();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar6;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4b2f4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar6;
          }
          else {
            func_0x000107c4b4dc();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_10341e684();
              func_0x000107c613fc();
              *(undefined8 *)(lVar6 + 0x10) = 0;
              puVar7 = &UNK_110653668;
              func_0x000107c613fc(&UNK_110653668,0x18,7);
              func_0x000107c61614(puVar7 + 0x10,unaff_x20);
              uVar9 = 0x112f671c8;
              func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
              func_0x000107c613fc();
              pcVar8 = FUN_10342370c;
              func_0x0001000bdd8c(FUN_10342370c,puVar7,uVar9);
              func_0x000107c4aeb0(lVar4);
              func_0x000107c61180();
              uVar9 = 0;
              func_0x000103420aac(0);
              func_0x000107c613fc();
              FUN_10341ff34(lVar2,lVar3,lVar4,lVar5,pcVar8,uVar9);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10342370c; end: 103423713;  */

void FUN_10342370c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5c4ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103423714; end: 10342373b; -[SCLensSwipeFunnelOnPreviewEntryPoint begin] */

void FUN_103423714(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10342343c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10342373c; end: 10342377f; -[SCLensSwipeFunnelOnPreviewEntryPoint end] */

void FUN_10342373c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423780; end: 103423b37;  */

void FUN_103423780(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x5377656976657270) && (param_3 == -0x13ffffff9a8f909d)) ||
       (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c577c8();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef1039b10)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010efc64f0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55e24();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f0d9d0)) ||
           (func_0x000107c605b8(0xd000000000000026,0x800000010f0f2630,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c78();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
             (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c80();
          }
          else {
            if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
              uVar2 = 0xd000000000000015;
              func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0eb4140)) {
                  uVar2 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,0x800000010f14bec0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "LensSwipeFunnelIntegration/SCLensSwipeFunnelOnPreviewEntryPoint.swift"
                                        ,0x45,2,0x41,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x103423b38);
                    (*pcVar1)();
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55ed4();
                goto LAB_103423810;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55df4();
          }
        }
      }
    }
  }
LAB_103423810:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103423b38; end: 103423be3; -[SCLensSwipeFunnelOnPreviewEntryPoint setValue:forIvarName:] */

void FUN_103423b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103423780(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103423be4; end: 103423cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423be4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f67758,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67760,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67768,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67770,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67778,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67780,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f67788,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f67790) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103423cbc; end: 103423cdb; -[SCLensSwipeFunnelOnPreviewEntryPoint init] */

void FUN_103423cbc(void)

{
  FUN_103423be4();
  return;
}



/* Entry: 103423cdc; end: 103423d0f;  */

void FUN_103423cdc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103423d10; end: 103423da7; -[SCLensSwipeFunnelOnPreviewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423d10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f67758);
  func_0x000107c61610(param_1 + _DAT_112f67760);
  func_0x000107c61610(param_1 + _DAT_112f67768);
  func_0x000107c61610(param_1 + _DAT_112f67770);
  func_0x000107c61610(param_1 + _DAT_112f67778);
  func_0x000107c61610(param_1 + _DAT_112f67780);
  func_0x000107c61610(param_1 + _DAT_112f67788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f67790));
  return;
}



/* Entry: 103423da8; end: 103423dc7;  */

void FUN_103423da8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9268);
  return;
}



/* Entry: 103423dc8; end: 103423dd3; -[SCLensSwipeFunnelOnTalkEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423dc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677c0;
  func_0x000107c61428(param_1 + _DAT_112f677c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423dd4; end: 103423ddf; -[SCLensSwipeFunnelOnTalkEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677c0;
  func_0x000107c61428(param_1 + _DAT_112f677c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423de0; end: 103423deb; -[SCLensSwipeFunnelOnTalkEntryPoint lensTalkCarouselScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423de0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677c8;
  func_0x000107c61428(param_1 + _DAT_112f677c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423dec; end: 103423df7; -[SCLensSwipeFunnelOnTalkEntryPoint setLensTalkCarouselScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677c8;
  func_0x000107c61428(param_1 + _DAT_112f677c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423df8; end: 103423e03; -[SCLensSwipeFunnelOnTalkEntryPoint scopedLensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423df8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677d0;
  func_0x000107c61428(param_1 + _DAT_112f677d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e04; end: 103423e0f; -[SCLensSwipeFunnelOnTalkEntryPoint setScopedLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677d0;
  func_0x000107c61428(param_1 + _DAT_112f677d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423e10; end: 103423e1b; -[SCLensSwipeFunnelOnTalkEntryPoint lensCarouselScopeInfoProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677d8;
  func_0x000107c61428(param_1 + _DAT_112f677d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e1c; end: 103423e27; -[SCLensSwipeFunnelOnTalkEntryPoint setLensCarouselScopeInfoProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677d8;
  func_0x000107c61428(param_1 + _DAT_112f677d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423e28; end: 103423e33; -[SCLensSwipeFunnelOnTalkEntryPoint lensTalkCarouselScopedLensCarouselLensApplicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677e0;
  func_0x000107c61428(param_1 + _DAT_112f677e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e34; end: 103423e3f; -[SCLensSwipeFunnelOnTalkEntryPoint setLensTalkCarouselScopedLensCarouselLensApplicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677e0;
  func_0x000107c61428(param_1 + _DAT_112f677e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423e40; end: 103423e4b; -[SCLensSwipeFunnelOnTalkEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677e8;
  func_0x000107c61428(param_1 + _DAT_112f677e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e4c; end: 103423e57; -[SCLensSwipeFunnelOnTalkEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677e8;
  func_0x000107c61428(param_1 + _DAT_112f677e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423e58; end: 103423e63; -[SCLensSwipeFunnelOnTalkEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677f0;
  func_0x000107c61428(param_1 + _DAT_112f677f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e64; end: 103423e6f; -[SCLensSwipeFunnelOnTalkEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677f0;
  func_0x000107c61428(param_1 + _DAT_112f677f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423e70; end: 103423e7b; -[SCLensSwipeFunnelOnTalkEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f677f8;
  func_0x000107c61428(param_1 + _DAT_112f677f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423e7c; end: 103423ebf;  */

void FUN_103423e7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103423ec0; end: 103423ecb; -[SCLensSwipeFunnelOnTalkEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f677f8;
  func_0x000107c61428(param_1 + _DAT_112f677f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423ecc; end: 103423f1f;  */

void FUN_103423ecc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103423f20; end: 1034242bf;  */

/* WARNING: Possible PIC construction at 0x000103424110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034241e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034241d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034241e4) */
/* WARNING: Removing unreachable block (ram,0x000103424204) */
/* WARNING: Removing unreachable block (ram,0x000103424234) */
/* WARNING: Removing unreachable block (ram,0x000103424224) */
/* WARNING: Removing unreachable block (ram,0x000103424264) */
/* WARNING: Removing unreachable block (ram,0x000103424254) */
/* WARNING: Removing unreachable block (ram,0x000103424244) */
/* WARNING: Removing unreachable block (ram,0x000103424294) */
/* WARNING: Removing unreachable block (ram,0x000103424284) */
/* WARNING: Removing unreachable block (ram,0x000103424274) */
/* WARNING: Removing unreachable block (ram,0x000103424164) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103424154) */
/* WARNING: Removing unreachable block (ram,0x000103424144) */
/* WARNING: Removing unreachable block (ram,0x000103424134) */
/* WARNING: Removing unreachable block (ram,0x000103424124) */
/* WARNING: Removing unreachable block (ram,0x000103424114) */
/* WARNING: Removing unreachable block (ram,0x0001034241d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103423f20(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  lVar6 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar6 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c4b48c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c519b4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4af1c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c4b498();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar1;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4af24();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar6);
            lVar6 = lVar1;
          }
          else {
            lVar1 = unaff_x20;
            func_0x000107c4b2f4();
            func_0x000107c61180();
            if (lVar1 != 0) {
              func_0x000107c4b258();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar6 = 0;
                FUN_10341e94c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar6 + 0x10) = 0;
                puVar7 = &UNK_110653690;
                func_0x000107c613fc(&UNK_110653690,0x18,7);
                func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                uVar9 = 0x112f671c8;
                func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
                func_0x000107c613fc();
                pcVar8 = FUN_1034242c0;
                func_0x0001000bdd8c(FUN_1034242c0,puVar7,uVar9);
                func_0x000107c4b364();
                func_0x000107c61180();
                uVar9 = *(undefined8 *)(lVar4 + _DAT_1130387f8);
                func_0x000107c61174();
                func_0x000107c4aeb0();
                func_0x000107c61180();
                func_0x000103420aac(0);
                func_0x000107c613fc();
                FUN_103420d30(lVar2,lVar3,uVar9,lVar5,lVar1,pcVar8);
                lVar6 = lVar4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1034242c0; end: 1034242c7;  */

void FUN_1034242c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1034242c8; end: 1034242ef; -[SCLensSwipeFunnelOnTalkEntryPoint begin] */

void FUN_1034242c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103423f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034242f0; end: 103424333; -[SCLensSwipeFunnelOnTalkEntryPoint end] */

void FUN_1034242f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


