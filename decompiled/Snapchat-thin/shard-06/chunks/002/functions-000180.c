/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10463a350; end: 10463b463;  */

byte FUN_10463a350(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  code *pcVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  int *piStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  int *piStack_68;
  
  lVar9 = 0;
  FUN_1046305a8();
  lStack_80 = *(long *)(lVar9 + -8);
  lStack_78 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar9 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar21 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar9 = 0x11308b098;
  uStack_90 = uVar21;
  func_0x0001000285a8(0x11308b098,&UNK_10dd22808);
  lStack_88 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = uVar21 - extraout_x8_01;
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar26 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar21 = lVar27 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = uVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = uVar21 - extraout_x12;
  lVar9 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = (uVar21 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  if (*param_1 == *param_2) {
    lVar11 = 0;
    puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_b0 = lVar23;
    lStack_a8 = extraout_x13;
    FUN_104638d5c();
    iVar5 = *(int *)(lVar11 + 0x14);
    lVar23 = (long)*(int *)(lVar9 + 0x30);
    lStack_a0 = lVar11;
    piStack_98 = param_1;
    piStack_68 = param_2;
    FUN_104638d94((long)param_1 + (long)iVar5,lVar24,0x112d36580,&UNK_10d9016d0);
    piVar7 = piStack_68;
    FUN_104638d94((long)piStack_68 + (long)iVar5,lVar24 + lVar23,0x112d36580,&UNK_10d9016d0);
    pcVar25 = *(code **)(lVar26 + 0x30);
    lVar11 = lVar24;
    (*pcVar25)(lVar24,1,lVar10);
    if ((int)lVar11 == 1) {
      lVar23 = lVar24 + lVar23;
      (*pcVar25)(lVar23,1,lVar10);
      if ((int)lVar23 == 1) {
        func_0x00010463e514(lVar24,0x112d36580,&UNK_10d9016d0);
LAB_10463a6d8:
        lVar24 = lStack_a0;
        uVar21 = *(ulong *)((long)piStack_98 + (long)*(int *)(lStack_a0 + 0x18));
        lVar23 = *(long *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x18));
        if (uVar21 == 0) {
          if (lVar23 == 0) {
LAB_10463a728:
            piVar7 = piStack_98;
            iVar5 = *(int *)(lVar24 + 0x1c);
            lVar9 = (long)*(int *)(lVar9 + 0x30);
            FUN_104638d94((long)piStack_98 + (long)iVar5,lStack_a8,0x112d36580,&UNK_10d9016d0);
            piVar8 = piStack_68;
            FUN_104638d94((long)piStack_68 + (long)iVar5,lStack_a8 + lVar9,0x112d36580,
                          &UNK_10d9016d0);
            lVar24 = lStack_a8;
            (*pcVar25)(lStack_a8,1,lVar10);
            uVar21 = uStack_70;
            if ((int)lVar24 == 1) {
              lVar9 = lStack_a8 + lVar9;
              (*pcVar25)(lVar9,1,lVar10);
              if ((int)lVar9 != 1) {
LAB_10463a80c:
                uVar14 = 0x112d7e680;
                puVar16 = &UNK_10d95e350;
                lVar24 = lStack_a8;
                goto LAB_10463a644;
              }
              func_0x00010463e514(lStack_a8,0x112d36580,&UNK_10d9016d0);
LAB_10463a88c:
              lVar24 = lStack_b0;
              if ((((*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x20)) ==
                     *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x20))) &&
                   (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x24)) ==
                    *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x24)))) &&
                  (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x28)) ==
                   *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x28)))) &&
                 (*(char *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x2c)) ==
                  *(char *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x2c)))) {
                iVar5 = *(int *)(lStack_a0 + 0x30);
                lVar9 = (long)*(int *)(lStack_88 + 0x30);
                FUN_104638d94((long)piVar7 + (long)iVar5,lStack_b0,0x112d3ae80,&UNK_10d912fe0);
                piVar8 = piStack_68;
                FUN_104638d94((long)piStack_68 + (long)iVar5,lVar24 + lVar9,0x112d3ae80,
                              &UNK_10d912fe0);
                lVar10 = lStack_78;
                pcVar25 = *(code **)(lStack_80 + 0x30);
                lVar23 = lVar24;
                (*pcVar25)(lVar24,1,lStack_78);
                uVar21 = uStack_90;
                if ((int)lVar23 == 1) {
                  lVar9 = lVar24 + lVar9;
                  (*pcVar25)(lVar9,1,lVar10);
                  if ((int)lVar9 != 1) {
LAB_10463a9cc:
                    uVar14 = 0x11308b098;
                    puVar16 = &UNK_10dd22808;
                    goto LAB_10463a644;
                  }
                  func_0x00010463e514(lVar24,0x112d3ae80,&UNK_10d912fe0);
LAB_10463aa40:
                  puVar1 = (ulong *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x34));
                  uVar21 = *puVar1;
                  uVar3 = puVar1[1];
                  uVar19 = puVar1[2];
                  uVar4 = puVar1[3];
                  puVar1 = (ulong *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x34));
                  uVar13 = *puVar1;
                  uVar15 = puVar1[1];
                  uVar17 = puVar1[2];
                  uVar18 = puVar1[3];
                  if (uVar3 == 0) {
                    if (uVar15 == 0) {
LAB_10463abbc:
                      piVar8 = piStack_68;
                      piVar7 = piStack_98;
                      puVar1 = (ulong *)((long)piStack_98 + (long)*(int *)(lStack_a0 + 0x38));
                      uVar21 = puVar1[1];
                      puVar2 = (ulong *)((long)piStack_68 + (long)*(int *)(lStack_a0 + 0x38));
                      uVar19 = puVar2[1];
                      if (uVar21 == 0) {
                        if (uVar19 == 0) goto LAB_10463ac0c;
                      }
                      else if ((uVar19 != 0) &&
                              (((uVar13 = *puVar1, uVar13 == *puVar2 && (uVar21 == uVar19)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (), (uVar13 & 1) != 0)))) {
LAB_10463ac0c:
                        bVar20 = *(byte *)((long)piVar7 + (long)*(int *)(lStack_a0 + 0x3c)) ^
                                 *(byte *)((long)piVar8 + (long)*(int *)(lStack_a0 + 0x3c)) ^ 1;
                        goto LAB_10463a64c;
                      }
                      goto LAB_10463a648;
                    }
LAB_10463aafc:
                    func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                    func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                    func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                  }
                  else {
                    if (uVar15 == 0) goto LAB_10463aafc;
                    if (((uVar21 == uVar13) && (uVar3 == uVar15)) ||
                       (uVar12 = uVar21,
                       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                 (uVar21,uVar3,uVar13,uVar15,0), (uVar12 & 1) != 0)) {
                      if ((uVar19 == uVar17) && (uVar4 == uVar18)) {
                        func_0x000100e3ecdc(uVar13,uVar15,uVar19,uVar4);
                        func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                        _swift_bridgeObjectRelease(uVar18);
                        _swift_bridgeObjectRelease(uVar15);
                        func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                      }
                      else {
                        uVar12 = uVar19;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar19,uVar4,uVar17,uVar18,0);
                        func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                        func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                        _swift_bridgeObjectRelease(uVar18);
                        _swift_bridgeObjectRelease(uVar15);
                        func_0x0001030bb6f8(uVar21,uVar3,uVar19,uVar4);
                        if ((uVar12 & 1) == 0) goto LAB_10463a648;
                      }
                      goto LAB_10463abbc;
                    }
                    func_0x000100e3ecdc(uVar13,uVar15,uVar17,uVar18);
                    func_0x000100e3ecdc(uVar21,uVar3,uVar19,uVar4);
                    _swift_bridgeObjectRelease(uVar18);
                    _swift_bridgeObjectRelease(uVar15);
                    uVar13 = uVar21;
                    uVar15 = uVar3;
                    uVar17 = uVar19;
                    uVar18 = uVar4;
                  }
                  func_0x0001030bb6f8(uVar13,uVar15,uVar17,uVar18);
                }
                else {
                  FUN_104638d94(lVar24,uStack_90,0x112d3ae80,&UNK_10d912fe0);
                  lVar23 = lVar24 + lVar9;
                  (*pcVar25)(lVar23,1,lVar10);
                  puVar6 = puStack_b8;
                  if ((int)lVar23 == 1) {
                    FUN_10463d0d0(uVar21,FUN_1046305a8);
                    goto LAB_10463a9cc;
                  }
                  func_0x000103e04070(lVar24 + lVar9,puStack_b8);
                  uVar19 = uVar21;
                  FUN_104630cd4(uVar21,puVar6);
                  FUN_10463d0d0(puVar6,FUN_1046305a8);
                  FUN_10463d0d0(uVar21,FUN_1046305a8);
                  func_0x00010463e514(lVar24,0x112d3ae80,&UNK_10d912fe0);
                  if ((uVar19 & 1) != 0) goto LAB_10463aa40;
                }
              }
            }
            else {
              FUN_104638d94(lStack_a8,uStack_70,0x112d36580,&UNK_10d9016d0);
              lVar24 = lStack_a8 + lVar9;
              (*pcVar25)(lVar24,1,lVar10);
              if ((int)lVar24 == 1) {
                (**(code **)(lVar26 + 8))(uVar21,lVar10);
                goto LAB_10463a80c;
              }
              lVar24 = lVar27;
              (**(code **)(lVar26 + 0x20))(lVar27,lStack_a8 + lVar9,lVar10);
              func_0x000101553b98();
              uVar19 = uVar21;
              __sSQ2eeoiySbx_xtFZTj(uVar21,lVar27,lVar10,lVar24);
              pcVar25 = *(code **)(lVar26 + 8);
              (*pcVar25)(lVar27,lVar10);
              (*pcVar25)(uVar21,lVar10);
              func_0x00010463e514(lStack_a8,0x112d36580,&UNK_10d9016d0);
              if ((uVar19 & 1) != 0) goto LAB_10463a88c;
            }
          }
        }
        else if (lVar23 != 0) {
          _swift_bridgeObjectRetain(lVar23);
          uVar19 = uVar21;
          _swift_bridgeObjectRetain();
          func_0x000101058cd4();
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(lVar23);
          if ((uVar19 & 1) != 0) goto LAB_10463a728;
        }
      }
      else {
LAB_10463a630:
        uVar14 = 0x112d7e680;
        puVar16 = &UNK_10d95e350;
LAB_10463a644:
        func_0x00010463e514(lVar24,uVar14,puVar16);
      }
    }
    else {
      FUN_104638d94(lVar24,uVar21,0x112d36580,&UNK_10d9016d0);
      lVar11 = lVar24 + lVar23;
      (*pcVar25)(lVar11,1,lVar10);
      if ((int)lVar11 == 1) {
        (**(code **)(lVar26 + 8))(uVar21,lVar10);
        goto LAB_10463a630;
      }
      lVar11 = lVar27;
      (**(code **)(lVar26 + 0x20))(lVar27,lVar24 + lVar23,lVar10);
      func_0x000101553b98();
      uVar19 = uVar21;
      __sSQ2eeoiySbx_xtFZTj(uVar21,lVar27,lVar10,lVar11);
      pcVar22 = *(code **)(lVar26 + 8);
      (*pcVar22)(lVar27,lVar10);
      (*pcVar22)(uVar21,lVar10);
      func_0x00010463e514(lVar24,0x112d36580,&UNK_10d9016d0);
      if ((uVar19 & 1) != 0) goto LAB_10463a6d8;
    }
  }
LAB_10463a648:
  bVar20 = 0;
LAB_10463a64c:
  return bVar20 & 1;
}



/* Entry: 10463b464; end: 10463b6ff;  */

void FUN_10463b464(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
  }
  lVar3 = param_1 + *(int *)(param_2 + 0x30);
  lVar4 = 0;
  FUN_1046305a8();
  lVar5 = lVar3;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar3,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar5 = lVar3 + iVar1;
    (*pcVar7)(lVar5,1,lVar2);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar6 + 8))(lVar3 + iVar1,lVar2);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x18)));
    lVar5 = lVar3 + *(int *)(lVar4 + 0x20);
    if (*(long *)(lVar5 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x24) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x38)));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x44) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x48) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x58) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x5c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x60) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 100) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x68) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x80) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x8c)));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x94) + 8));
    lVar5 = lVar3 + *(int *)(lVar4 + 0xa0);
    if (*(long *)(lVar5 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x10));
    }
    iVar1 = *(int *)(lVar4 + 0xb8);
    lVar5 = lVar3 + iVar1;
    (*pcVar7)(lVar5,1,lVar2);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar6 + 8))(lVar3 + iVar1,lVar2);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0xc0) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0xc4) + 8));
    lVar3 = lVar3 + *(int *)(lVar4 + 0xd8);
    if (*(long *)(lVar3 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
    }
  }
  lVar3 = param_1 + *(int *)(param_2 + 0x34);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}



/* Entry: 10463b700; end: 10463d0cf;  */

undefined8 * FUN_10463b700(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  *param_1 = *param_2;
  lVar16 = (long)*(int *)(param_3 + 0x14);
  lVar11 = 0;
  __s10Foundation3URLVMa();
  lVar20 = *(long *)(lVar11 + -8);
  pcVar21 = *(code **)(lVar20 + 0x30);
  lVar12 = (long)param_2 + lVar16;
  (*pcVar21)(lVar12,1,lVar11);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar20 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar11);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar16,0,1,lVar11);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  lVar16 = (long)*(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  _swift_bridgeObjectRetain();
  lVar12 = (long)param_2 + lVar16;
  (*pcVar21)(lVar12,1,lVar11);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar20 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar11);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar16,0,1,lVar11);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  iVar10 = *(int *)(param_3 + 0x24);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
  iVar10 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar12 = 0;
  FUN_1046305a8();
  lVar16 = *(long *)(lVar12 + -8);
  puVar13 = puVar2;
  (**(code **)(lVar16 + 0x30))(puVar2,1,lVar12);
  if ((int)puVar13 == 0) {
    uVar19 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar19;
    lVar17 = (long)*(int *)(lVar12 + 0x14);
    _swift_bridgeObjectRetain();
    lVar18 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar18,1,lVar11);
    if ((int)lVar18 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar11);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,lVar11);
    }
    else {
      lVar18 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
    lVar18 = puVar3[1];
    _swift_bridgeObjectRetain();
    if (lVar18 == 1) {
      uVar19 = *puVar3;
      uVar23 = puVar3[3];
      uVar22 = puVar3[2];
      puVar13[1] = puVar3[1];
      *puVar13 = uVar19;
      puVar13[3] = uVar23;
      puVar13[2] = uVar22;
      puVar13[4] = puVar3[4];
    }
    else {
      *puVar13 = *puVar3;
      puVar13[1] = lVar18;
      uVar19 = puVar3[3];
      puVar13[2] = puVar3[2];
      puVar13[3] = uVar19;
      puVar13[4] = puVar3[4];
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(uVar19);
    }
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
    uVar19 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar19;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x30)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x30));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x34)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x34));
    uVar14 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x38));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38)) = uVar14;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x3c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x3c));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x40));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x40));
    *puVar13 = *puVar3;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x44));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x44));
    uVar19 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar19;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x48));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48));
    uVar22 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar22;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x4c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x50)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x50));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x54)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x54));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x58));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x58));
    uVar23 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar23;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x5c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x5c));
    uVar4 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar4;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x60));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60));
    uVar5 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar5;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 100));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 100));
    uVar6 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar6;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x68));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x68));
    uVar7 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar7;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x6c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x6c));
    *puVar13 = *puVar3;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x70)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x70));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x74)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x74));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x78)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x78));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x7c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x7c));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x80));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x80));
    uVar8 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar8;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x84)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x84));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x88)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x88));
    uVar15 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x8c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x8c)) = uVar15;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x90));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x90));
    *puVar13 = *puVar3;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x94));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x94));
    uVar9 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar9;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x98)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x9c));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa0));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa0));
    lVar18 = puVar3[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar9);
    if (lVar18 == 0) {
      uVar19 = *puVar3;
      puVar13[1] = puVar3[1];
      *puVar13 = uVar19;
      puVar13[2] = puVar3[2];
    }
    else {
      *puVar13 = *puVar3;
      puVar13[1] = lVar18;
      uVar19 = puVar3[2];
      puVar13[2] = uVar19;
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(uVar19);
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa4));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa8));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa8));
    *puVar13 = *puVar3;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xac));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xac));
    *puVar13 = *puVar3;
    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb4));
    lVar17 = (long)*(int *)(lVar12 + 0xb8);
    lVar18 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar18,1,lVar11);
    if ((int)lVar18 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar11);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,lVar11);
    }
    else {
      lVar11 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xbc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xbc));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc0));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc0));
    uVar19 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar19;
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc4));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc4));
    uVar19 = puVar3[1];
    *puVar13 = *puVar3;
    puVar13[1] = uVar19;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 200)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xcc));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd4));
    puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd8));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd8));
    lVar11 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    if (lVar11 == 0) {
      uVar19 = *puVar2;
      uVar23 = puVar2[3];
      uVar22 = puVar2[2];
      puVar13[1] = puVar2[1];
      *puVar13 = uVar19;
      puVar13[3] = uVar23;
      puVar13[2] = uVar22;
      uVar19 = puVar2[4];
      puVar13[5] = puVar2[5];
      puVar13[4] = uVar19;
      puVar13[6] = puVar2[6];
    }
    else {
      *puVar13 = *puVar2;
      puVar13[1] = lVar11;
      uVar19 = puVar2[3];
      puVar13[2] = puVar2[2];
      puVar13[3] = uVar19;
      uVar22 = puVar2[5];
      puVar13[4] = puVar2[4];
      puVar13[5] = uVar22;
      puVar13[6] = puVar2[6];
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar22);
    }
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar12);
  }
  else {
    lVar12 = 0x112d3ae80;
    func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  lVar12 = puVar2[1];
  if (lVar12 == 0) {
    uVar19 = *puVar2;
    uVar23 = puVar2[3];
    uVar22 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar19;
    puVar1[3] = uVar23;
    puVar1[2] = uVar22;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = lVar12;
    uVar19 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar19;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
  }
  iVar10 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  *(undefined1 *)((long)param_1 + (long)iVar10) = *(undefined1 *)((long)param_2 + (long)iVar10);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10463d0d0; end: 10463d10b;  */

undefined8 FUN_10463d0d0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10463d10c; end: 10463e3cb;  */

undefined8 * FUN_10463d10c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar9 = (long)*(int *)(param_3 + 0x14);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar11)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = (long)param_2 + lVar9;
  (*pcVar11)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x24);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar6 = 0;
  FUN_1046305a8();
  lVar9 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar9 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar13 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    lVar12 = (long)*(int *)(lVar6 + 0x14);
    lVar8 = (long)puVar2 + lVar12;
    (*pcVar11)(lVar8,1,lVar5);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar12,(long)puVar2 + lVar12,lVar5);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar12,0,1,lVar5);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar12,(long)puVar2 + lVar12,
              *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x18));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x1c));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
    puVar7[4] = puVar3[4];
    uVar15 = *puVar3;
    uVar14 = puVar3[3];
    uVar13 = puVar3[2];
    puVar7[1] = puVar3[1];
    *puVar7 = uVar15;
    puVar7[3] = uVar14;
    puVar7[2] = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x2c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x34)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x40));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x40));
    *puVar7 = *puVar3;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x44));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x48));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x4c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x50)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x50));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x54)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x54));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x58));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x58));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x5c));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x5c));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x60));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x60));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 100));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 100));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x68));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x68));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x6c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x6c));
    *puVar7 = *puVar3;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x70)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x70));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x74)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x74));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x78)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x78));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x7c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x7c));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x80));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x80));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x84)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x84));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x88)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x88));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x8c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x8c));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x90));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x90));
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar3 + 1);
    *puVar7 = *puVar3;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x94));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x94));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x98)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x9c));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa0));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa0));
    uVar13 = *puVar3;
    puVar7[1] = puVar3[1];
    *puVar7 = uVar13;
    puVar7[2] = puVar3[2];
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa4));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xa8));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xa8));
    *puVar7 = *puVar3;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xac));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xac));
    *puVar7 = *puVar3;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xb4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xb4));
    lVar12 = (long)*(int *)(lVar6 + 0xb8);
    lVar8 = (long)puVar2 + lVar12;
    (*pcVar11)(lVar8,1,lVar5);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar12,(long)puVar2 + lVar12,lVar5);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar12,0,1,lVar5);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar12,(long)puVar2 + lVar12,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xbc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xbc));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc0));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc0));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xc4));
    uVar13 = *puVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xc4));
    puVar3[1] = puVar7[1];
    *puVar3 = uVar13;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 200)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xcc));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xd0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xd0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xd4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xd4));
    puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0xd8));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0xd8));
    uVar13 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar7[1] = puVar2[1];
    *puVar7 = uVar13;
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
    uVar13 = puVar2[4];
    puVar7[5] = puVar2[5];
    puVar7[4] = uVar13;
    puVar7[6] = puVar2[6];
    (**(code **)(lVar9 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x112d3ae80;
    func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar13 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar15;
  puVar1[2] = uVar14;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}



/* Entry: 10463e3cc; end: 10463e3e3;  */

void FUN_10463e3cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10463e3e4; end: 10463e553;  */

void FUN_10463e3e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBi64_WV_11034d670 + 0x40;
  uVar2 = 0x112d71a80;
  lVar1 = 0x13f;
  func_0x00010463e4c8(0x13f,0x112d71a80,PTR___s10Foundation3URLVMa_110350988);
  if (uVar2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = &UNK_10dd227a8;
    puStack_60 = &UNK_10dd227c0;
    puStack_58 = &UNK_10dd227c0;
    puStack_50 = &UNK_10dd227c0;
    puStack_48 = &UNK_10dd227c0;
    uVar2 = 0x113010cd8;
    lVar1 = 0x13f;
    lStack_68 = lStack_78;
    func_0x00010463e4c8(0x13f,0x113010cd8,FUN_1046305a8);
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &UNK_10dd227d8;
      puStack_30 = &UNK_10dd227f0;
      puStack_28 = &UNK_10dd227c0;
      _swift_initStructMetadata(param_1,0x100,0xc,&puStack_80,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10463e554; end: 10463e58b;  */

void FUN_10463e554(undefined8 param_1)

{
  if (lRam000000011308b0f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e816568);
  return;
}



/* Entry: 10463e58c; end: 10463e5fb;  */

undefined8 FUN_10463e58c(double *param_1,double *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  double dVar12;
  ulong uVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar27;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  code *pcVar31;
  undefined8 uVar32;
  ulong uVar33;
  code *pcVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_fc;
  ulong uStack_f8;
  ulong uStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  double dStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar38 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
  FUN_104640c70(uVar38,(long)param_2 + (long)*(int *)(param_3 + 0x14));
  if ((uVar38 & 1) == 0) {
    return 0;
  }
  puVar8 = (ulong *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar9 = (ulong *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar16 = 0;
  __s10Foundation3URLVMa();
  lVar35 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar35 + 0x40));
  lVar30 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar39 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar39 + -8) + 0x40));
  uVar33 = lVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar40 = uVar33 - extraout_x12;
  lVar39 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar39 + -8) + 0x40));
  lVar29 = uVar40 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar38 = lVar29 - extraout_x12_00;
  uVar24 = puVar9[1];
  if (puVar8[1] == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar17 = *puVar8;
    if (((uVar17 != *puVar9) || (puVar8[1] != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  lVar18 = 0;
  uStack_d8 = uVar33;
  uStack_d0 = lVar29;
  dStack_c8 = (double)lVar30;
  FUN_1046305a8();
  iVar15 = *(int *)(lVar18 + 0x14);
  lVar30 = (long)*(int *)(lVar39 + 0x30);
  uStack_e0 = lVar39;
  uStack_c0 = lVar18;
  func_0x000104630640((long)puVar8 + (long)iVar15,uVar38,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)puVar9 + (long)iVar15,uVar38 + lVar30,0x112d36580,&UNK_10d9016d0);
  pcVar34 = *(code **)(lVar35 + 0x30);
  lVar39 = uVar38;
  (*pcVar34)(uVar38,1,lVar16);
  if ((int)lVar39 == 1) {
    lVar30 = uVar38 + lVar30;
    (*pcVar34)(lVar30,1,lVar16);
    if ((int)lVar30 != 1) goto LAB_104634d5c;
    FUN_104637ce8(uVar38,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uVar38,uVar40,0x112d36580,&UNK_10d9016d0);
    lVar39 = uVar38 + lVar30;
    (*pcVar34)(lVar39,1,lVar16);
    dVar12 = dStack_c8;
    if ((int)lVar39 == 1) {
      (**(code **)(lVar35 + 8))(uVar40,lVar16);
      goto LAB_104634d5c;
    }
    dVar19 = dStack_c8;
    (**(code **)(lVar35 + 0x20))(dStack_c8,uVar38 + lVar30,lVar16);
    func_0x000101553b98();
    uVar24 = uVar40;
    __sSQ2eeoiySbx_xtFZTj(uVar40,dVar12,lVar16,dVar19);
    pcVar31 = *(code **)(lVar35 + 8);
    (*pcVar31)(dVar12,lVar16);
    (*pcVar31)(uVar40,lVar16);
    FUN_104637ce8(uVar38,0x112d36580,&UNK_10d9016d0);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
  }
  uVar38 = uStack_c0;
  uVar24 = *(ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x18));
  lVar39 = *(long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x18));
  if (uVar24 == 0) {
    if (lVar39 != 0) {
      return 0;
    }
  }
  else {
    if (lVar39 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar39);
    uVar33 = uVar24;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(lVar39);
    if ((uVar33 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uVar38 + 0x1c)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uVar38 + 0x1c))) {
    return 0;
  }
  puVar20 = (undefined8 *)((long)puVar8 + (long)*(int *)(uVar38 + 0x20));
  uVar21 = *puVar20;
  lVar39 = puVar20[1];
  uVar24 = puVar20[2];
  uVar37 = puVar20[3];
  uVar36 = puVar20[4];
  puVar20 = (undefined8 *)((long)puVar9 + (long)*(int *)(uVar38 + 0x20));
  uVar28 = *puVar20;
  lVar30 = puVar20[1];
  uVar32 = puVar20[2];
  uVar10 = puVar20[3];
  uVar26 = puVar20[4];
  if (lVar39 == 1) {
    if (lVar30 != 1) {
LAB_104634e94:
      func_0x000104637d28(uVar28,lVar30,uVar32,uVar10);
      func_0x000104637d28(uVar21,lVar39,uVar24,uVar37,uVar36);
      FUN_104635c8c(uVar21,lVar39,uVar24,uVar37,uVar36);
      FUN_104635c8c(uVar28,lVar30,uVar32,uVar10,uVar26);
      return 0;
    }
  }
  else {
    if (lVar30 == 1) goto LAB_104634e94;
    uStack_f8 = uVar10;
    uStack_f0 = uVar21;
    dStack_e8 = (double)uVar24;
    uStack_b8 = uVar21;
    lStack_b0 = lVar39;
    uStack_a8 = uVar24;
    uStack_a0 = uVar37;
    uStack_98 = uVar36;
    uStack_90 = uVar28;
    lStack_88 = lVar30;
    uStack_80 = uVar32;
    uStack_78 = uVar10;
    uStack_70 = uVar26;
    func_0x000104637d28(uVar28,lVar30,uVar32,uVar10);
    func_0x000104637d28(uStack_f0,lVar39,dStack_e8,uVar37,uVar36);
    puVar20 = &uStack_b8;
    FUN_1046442cc(puVar20,&uStack_90);
    uStack_fc = (uint)puVar20;
    _swift_bridgeObjectRelease(lVar30);
    _swift_bridgeObjectRelease(uStack_f8);
    FUN_104635c8c(uStack_f0,lVar39,dStack_e8,uVar37,uVar36);
    if ((uStack_fc & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uVar38 + 0x24));
  uVar24 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uVar38 + 0x24));
  uVar33 = puVar2[1];
  if (uVar24 == 0) {
    if (uVar33 != 0) {
      return 0;
    }
  }
  else {
    if (uVar33 == 0) {
      return 0;
    }
    uVar40 = *puVar1;
    if (((uVar40 != *puVar2) || (uVar24 != uVar33)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar40 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uVar38 + 0x28)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uVar38 + 0x28))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uVar38 + 0x2c)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uVar38 + 0x2c))) {
    return 0;
  }
  if (*(int *)((long)puVar8 + (long)*(int *)(uVar38 + 0x30)) !=
      *(int *)((long)puVar9 + (long)*(int *)(uVar38 + 0x30))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uVar38 + 0x34)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uVar38 + 0x34))) {
    return 0;
  }
  uVar24 = *(ulong *)((long)puVar8 + (long)*(int *)(uVar38 + 0x38));
  lVar39 = *(long *)((long)puVar9 + (long)*(int *)(uVar38 + 0x38));
  if (uVar24 == 0) {
    if (lVar39 != 0) {
      return 0;
    }
  }
  else {
    if (lVar39 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar39);
    uVar33 = uVar24;
    _swift_bridgeObjectRetain();
    FUN_10464eb08();
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(lVar39);
    if ((uVar33 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uVar38 + 0x3c)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uVar38 + 0x3c))) {
    return 0;
  }
  plVar3 = (long *)((long)puVar8 + (long)*(int *)(uVar38 + 0x40));
  plVar4 = (long *)((long)puVar9 + (long)*(int *)(uVar38 + 0x40));
  cVar14 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar14 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar14 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x44));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x44));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x48));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x48));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x4c)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x4c))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x50)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x50))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x54)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x54))) {
    return 0;
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x58));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x58));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x60));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x60));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 100));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 100));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x68));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x68));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  plVar3 = (long *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x6c));
  plVar4 = (long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x6c));
  cVar14 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar14 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar14 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  if (*(long *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x70)) !=
      *(long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x70))) {
    return 0;
  }
  if (*(long *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x74)) !=
      *(long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x78)) !=
      *(int *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x78))) {
    return 0;
  }
  if (*(int *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x7c)) !=
      *(int *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x7c))) {
    return 0;
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x80));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x80));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  if (*(long *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x84)) !=
      *(long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x84))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x88)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x88))) {
    return 0;
  }
  uVar38 = *(ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x8c));
  lVar39 = *(long *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x8c));
  if (uVar38 == 0) {
    if (lVar39 != 0) {
      return 0;
    }
  }
  else {
    if (lVar39 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar39);
    uVar24 = uVar38;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar38);
    _swift_bridgeObjectRelease(lVar39);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x90));
  pdVar6 = (double *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x90));
  cVar14 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar14 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar14 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x94));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x94));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x98)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x98))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0x9c)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0x9c))) {
    return 0;
  }
  puVar20 = (undefined8 *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar39 = puVar20[1];
  puVar7 = (undefined8 *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar30 = puVar7[1];
  if (lVar39 == 0) {
    if (lVar30 != 0) {
      return 0;
    }
  }
  else {
    if (lVar30 == 0) {
      return 0;
    }
    uVar32 = *puVar20;
    uVar37 = puVar20[2];
    dStack_e8 = (double)*puVar7;
    uVar28 = puVar7[2];
    func_0x0001046305e0(dStack_e8,lVar30,uVar28);
    func_0x0001046305e0(uVar32,lVar39,uVar37);
    uVar21 = uVar32;
    FUN_1047ae93c(uVar32,lVar39,uVar37,dStack_e8,lVar30,uVar28);
    dStack_e8 = (double)CONCAT44(dStack_e8._4_4_,(int)uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(lVar30);
    func_0x000104630610(uVar32,lVar39,uVar37);
    if (((ulong)dStack_e8 & 1) == 0) {
      return 0;
    }
  }
  uVar38 = uStack_d0;
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xa4)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xa4))) {
    return 0;
  }
  pdVar5 = (double *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xa8));
  pdVar6 = (double *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xa8));
  cVar14 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar14 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar14 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xac));
  pdVar6 = (double *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xac));
  cVar14 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar14 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar14 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  if (*(int *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xb0)) !=
      *(int *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xb0))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xb4)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xb4))) {
    return 0;
  }
  iVar15 = *(int *)(uStack_c0 + 0xb8);
  lVar39 = (long)*(int *)(uStack_e0 + 0x30);
  func_0x000104630640((long)puVar8 + (long)iVar15,uStack_d0,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)puVar9 + (long)iVar15,uVar38 + lVar39,0x112d36580,&UNK_10d9016d0);
  (*pcVar34)(uVar38,1,lVar16);
  uVar24 = uStack_d0;
  if ((int)uVar38 == 1) {
    lVar39 = uStack_d0 + lVar39;
    (*pcVar34)(lVar39,1,lVar16);
    uVar38 = uStack_d0;
    if ((int)lVar39 != 1) {
LAB_104634d5c:
      FUN_104637ce8(uVar38,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    FUN_104637ce8(uStack_d0,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uStack_d0,uStack_d8,0x112d36580,&UNK_10d9016d0);
    lVar30 = uVar24 + lVar39;
    (*pcVar34)(lVar30,1,lVar16);
    dVar12 = dStack_c8;
    uVar38 = uStack_d0;
    if ((int)lVar30 == 1) {
      (**(code **)(lVar35 + 8))(uStack_d8,lVar16);
      uVar38 = uStack_d0;
      goto LAB_104634d5c;
    }
    dVar19 = dStack_c8;
    (**(code **)(lVar35 + 0x20))(dStack_c8,uStack_d0 + lVar39,lVar16);
    func_0x000101553b98();
    uVar24 = uStack_d8;
    uVar33 = uStack_d8;
    __sSQ2eeoiySbx_xtFZTj(uStack_d8,dVar12,lVar16,dVar19);
    pcVar34 = *(code **)(lVar35 + 8);
    (*pcVar34)(dVar12,lVar16);
    (*pcVar34)(uVar24,lVar16);
    FUN_104637ce8(uVar38,0x112d36580,&UNK_10d9016d0);
    if ((uVar33 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xbc)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xbc))) {
    return 0;
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar38 = puVar1[1];
  puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar24 = puVar2[1];
  if (uVar38 == 0) {
    if (uVar24 != 0) {
      return 0;
    }
  }
  else {
    if (uVar24 == 0) {
      return 0;
    }
    uVar33 = *puVar1;
    if (((uVar33 != *puVar2) || (uVar38 != uVar24)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar33 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 200)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 200))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xcc)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xcc))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xd0)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xd0))) {
    return 0;
  }
  if (*(char *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xd4)) !=
      *(char *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xd4))) {
    return 0;
  }
  puVar8 = (ulong *)((long)puVar8 + (long)*(int *)(uStack_c0 + 0xd8));
  puVar9 = (ulong *)((long)puVar9 + (long)*(int *)(uStack_c0 + 0xd8));
  uVar38 = *puVar8;
  uVar23 = puVar8[1];
  uVar24 = puVar8[2];
  uVar11 = puVar8[3];
  uVar27 = puVar8[4];
  uVar33 = puVar8[5];
  dVar12 = (double)puVar8[6];
  uVar40 = *puVar9;
  uVar13 = puVar9[1];
  uVar17 = puVar9[2];
  uStack_e0 = puVar9[3];
  uStack_f8 = puVar9[4];
  uStack_f0 = puVar9[5];
  dStack_e8 = (double)puVar9[6];
  uStack_d8 = uVar27;
  uStack_d0 = uVar33;
  dStack_c8 = dVar12;
  uStack_c0 = uVar11;
  if (uVar23 == 0) {
    if (uVar13 == 0) {
      func_0x000103bfd2e8(uVar38,0,uVar24,uVar11,uVar27,uVar33,dVar12);
      func_0x000103bfd2e8(uVar40,0,uVar17,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
LAB_104635c6c:
      func_0x0001034a6828(uVar38,uVar23,uVar24,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      return 1;
    }
  }
  else if (uVar13 != 0) {
    if ((((uVar38 == uVar40) && (uVar23 == uVar13)) ||
        (uVar33 = uVar38,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar38,uVar23,uVar40,uVar13,0), (uVar33 & 1) != 0)) &&
       (((uVar24 == uVar17 && (uStack_c0 == uStack_e0)) ||
        (uVar33 = uVar24,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar24,uStack_c0,uVar17,uStack_e0,0), (uVar33 & 1) != 0)))) {
      uVar25 = uStack_d0;
      uVar27 = uStack_d8;
      uVar11 = uStack_f0;
      uVar33 = uStack_f8;
      if ((uStack_d8 == uStack_f8) && (uStack_d0 == uStack_f0)) {
        func_0x000103bfd2e8(uVar38,uVar23,uVar24,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
        uVar33 = uStack_e0;
        dVar12 = dStack_e8;
        func_0x000103bfd2e8(uVar40,uVar13,uVar17,uStack_e0,uVar27,uVar25,dStack_e8);
        func_0x0001034a6828(uVar40,uVar13,uVar17,uVar33,uVar27,uVar25,dVar12);
      }
      else {
        uVar22 = uStack_d8;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uStack_d8,uStack_d0,uStack_f8,uStack_f0,0);
        uStack_fc = (uint)uVar22;
        func_0x000103bfd2e8(uVar38,uVar23,uVar24,uStack_c0,uVar27,uVar25,dStack_c8);
        uVar27 = uStack_e0;
        dVar12 = dStack_e8;
        func_0x000103bfd2e8(uVar40,uVar13,uVar17,uStack_e0,uVar33,uVar11,dStack_e8);
        func_0x0001034a6828(uVar40,uVar13,uVar17,uVar27,uVar33,uVar11,dVar12);
        uVar25 = uStack_c0;
        uVar33 = uStack_d8;
        uVar40 = uStack_d0;
        dVar19 = dStack_c8;
        if ((uStack_fc & 1) == 0) goto LAB_104635c34;
      }
      uVar25 = uStack_c0;
      uVar33 = uStack_d8;
      uVar40 = uStack_d0;
      dVar19 = dStack_c8;
      if (dStack_c8 == dStack_e8) goto LAB_104635c6c;
    }
    else {
      func_0x000103bfd2e8(uVar38,uVar23,uVar24,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      uVar27 = uStack_e0;
      dVar12 = dStack_e8;
      uVar11 = uStack_f0;
      uVar33 = uStack_f8;
      func_0x000103bfd2e8(uVar40,uVar13,uVar17,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
      func_0x0001034a6828(uVar40,uVar13,uVar17,uVar27,uVar33,uVar11,dVar12);
      uVar25 = uStack_c0;
      uVar33 = uStack_d8;
      uVar40 = uStack_d0;
      dVar19 = dStack_c8;
    }
    goto LAB_104635c34;
  }
  func_0x000103bfd2e8(uVar38,uVar23,uVar24,uVar11,uVar27,uVar33,dVar12);
  uVar25 = uStack_e0;
  dVar19 = dStack_e8;
  uStack_110 = uVar13;
  uStack_108 = uVar40;
  func_0x000103bfd2e8(uVar40,uVar13,uVar17,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
  func_0x0001034a6828(uVar38,uVar23,uVar24,uVar11,uVar27,uVar33,dVar12);
  uVar38 = uStack_108;
  uVar23 = uStack_110;
  uVar24 = uVar17;
  uVar33 = uStack_f8;
  uVar40 = uStack_f0;
LAB_104635c34:
  func_0x0001034a6828(uVar38,uVar23,uVar24,uVar25,uVar33,uVar40,dVar19);
  return 0;
}



/* Entry: 10463e5fc; end: 10463ecd3;  */

long * FUN_10463e5fc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar11 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar19 = (long)*(int *)(param_3 + 0x14);
    lVar12 = 0;
    FUN_10464151c();
    lVar15 = (long)param_2 + lVar19;
    _swift_getEnumCaseMultiPayload(lVar15,lVar12);
    if ((int)lVar15 == 0) {
      lVar17 = 0;
      __s10Foundation3URLVMa();
      lVar20 = *(long *)(lVar17 + -8);
      lVar15 = (long)param_2 + lVar19;
      (**(code **)(lVar20 + 0x30))(lVar15,1,lVar17);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar20 + 0x10))((long)param_1 + lVar19,(long)param_2 + lVar19,lVar17);
        (**(code **)(lVar20 + 0x38))((long)param_1 + lVar19,0,1,lVar17);
      }
      else {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar19,(long)param_2 + lVar19,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar19,lVar12,0);
    }
    else {
      _memcpy((long)param_1 + lVar19,(long)param_2 + lVar19,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar16 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar16;
    lVar12 = 0;
    FUN_1046305a8();
    lVar17 = (long)*(int *)(lVar12 + 0x14);
    lVar19 = 0;
    __s10Foundation3URLVMa();
    lVar20 = *(long *)(lVar19 + -8);
    pcVar21 = *(code **)(lVar20 + 0x30);
    _swift_bridgeObjectRetain(uVar16);
    lVar15 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar15,1,lVar19);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar19);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,lVar19);
    }
    else {
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
    lVar15 = puVar4[1];
    _swift_bridgeObjectRetain();
    if (lVar15 == 1) {
      uVar16 = *puVar4;
      uVar23 = puVar4[3];
      uVar22 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar3[3] = uVar23;
      puVar3[2] = uVar22;
      puVar3[4] = puVar4[4];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar15;
      uVar16 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar16;
      puVar3[4] = puVar4[4];
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar16);
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
    uVar16 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar16;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x30)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x30));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x34)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x34));
    uVar14 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x38));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38)) = uVar14;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x3c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x3c));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x40));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x40));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x44));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x44));
    uVar16 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar16;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x48));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48));
    uVar22 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar22;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x4c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x50)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x50));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x54)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x54));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x58));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x58));
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x5c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x5c));
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x60));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60));
    uVar6 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar6;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 100));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 100));
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x68));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x68));
    uVar8 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar8;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x6c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x6c));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x70)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x70));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x74)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x74));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x78)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x78));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x7c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x7c));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x80));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x80));
    uVar9 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar9;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x84)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x84));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x88)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x88));
    uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x8c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x8c)) = uVar18;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x90));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x90));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x94));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x94));
    uVar10 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar10;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x98)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x9c));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa0));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa0));
    lVar15 = puVar4[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar10);
    if (lVar15 == 0) {
      uVar16 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar3[2] = puVar4[2];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar15;
      uVar16 = puVar4[2];
      puVar3[2] = uVar16;
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar16);
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa4));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xa8));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa8));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xac));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xac));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xb4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb4));
    lVar17 = (long)*(int *)(lVar12 + 0xb8);
    lVar15 = (long)puVar2 + lVar17;
    (*pcVar21)(lVar15,1,lVar19);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar19);
      (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar17,0,1,lVar19);
    }
    else {
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xbc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xbc));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc0));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc0));
    uVar16 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar16;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xc4));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc4));
    uVar16 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar16;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 200)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xcc));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd0));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd4)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd4));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0xd8));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xd8));
    lVar15 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    if (lVar15 == 0) {
      uVar16 = *puVar2;
      uVar23 = puVar2[3];
      uVar22 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar16;
      puVar1[3] = uVar23;
      puVar1[2] = uVar22;
      uVar16 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar16;
      puVar1[6] = puVar2[6];
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = lVar15;
      uVar16 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar16;
      uVar22 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar22;
      puVar1[6] = puVar2[6];
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar22);
    }
  }
  else {
    lVar15 = *param_2;
    *param_1 = lVar15;
    uVar13 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar15 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10463ecd4; end: 10463ef2b;  */

void FUN_10463ecd4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar5 = (long)*(int *)(param_2 + 0x14);
  uVar2 = 0;
  FUN_10464151c(0);
  lVar3 = param_1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar3,uVar2);
  if ((int)lVar3 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar4 + -8);
    lVar3 = param_1 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 8))(param_1 + lVar5,lVar4);
    }
  }
  param_1 = param_1 + *(int *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar5 = 0;
  FUN_1046305a8();
  iVar1 = *(int *)(lVar5 + 0x14);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar7)(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x18)));
  lVar3 = param_1 + *(int *)(lVar5 + 0x20);
  if (*(long *)(lVar3 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x38)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x44) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x48) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x58) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x5c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x60) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 100) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x68) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x80) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x8c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0x94) + 8));
  lVar3 = param_1 + *(int *)(lVar5 + 0xa0);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
  }
  iVar1 = *(int *)(lVar5 + 0xb8);
  lVar3 = param_1 + iVar1;
  (*pcVar7)(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0xc0) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar5 + 0xc4) + 8));
  param_1 = param_1 + *(int *)(lVar5 + 0xd8);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10463ef2c; end: 10463ff5f;  */

undefined8 * FUN_10463ef2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  *param_1 = *param_2;
  lVar16 = (long)*(int *)(param_3 + 0x14);
  lVar10 = 0;
  FUN_10464151c();
  lVar12 = (long)param_2 + lVar16;
  _swift_getEnumCaseMultiPayload(lVar12,lVar10);
  if ((int)lVar12 == 0) {
    lVar14 = 0;
    __s10Foundation3URLVMa();
    lVar17 = *(long *)(lVar14 + -8);
    lVar12 = (long)param_2 + lVar16;
    (**(code **)(lVar17 + 0x30))(lVar12,1,lVar14);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar14);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,lVar14);
    }
    else {
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar16,lVar10,0);
  }
  else {
    _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
            *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar13 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar13;
  lVar10 = 0;
  FUN_1046305a8();
  lVar14 = (long)*(int *)(lVar10 + 0x14);
  lVar16 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar16 + -8);
  pcVar18 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar13);
  lVar12 = (long)param_2 + lVar14;
  (*pcVar18)(lVar12,1,lVar16);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar14,(long)param_2 + lVar14,lVar16);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar14,0,1,lVar16);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)puVar1 + lVar14,(long)param_2 + lVar14,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x20));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
  lVar12 = puVar3[1];
  _swift_bridgeObjectRetain();
  if (lVar12 == 1) {
    uVar13 = *puVar3;
    uVar20 = puVar3[3];
    uVar19 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar13;
    puVar2[3] = uVar20;
    puVar2[2] = uVar19;
    puVar2[4] = puVar3[4];
  }
  else {
    *puVar2 = *puVar3;
    puVar2[1] = lVar12;
    uVar13 = puVar3[3];
    puVar2[2] = puVar3[2];
    puVar2[3] = uVar13;
    puVar2[4] = puVar3[4];
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
  }
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
  uVar13 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar13;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
  uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38)) = uVar11;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x40));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x40));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x44));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x44));
  uVar13 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar13;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x48));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x48));
  uVar19 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar19;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x4c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x50)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x50));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x54)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x54));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x58));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x58));
  uVar20 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar20;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x5c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x5c));
  uVar4 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x60));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x60));
  uVar5 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 100));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 100));
  uVar6 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x68));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x68));
  uVar7 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x6c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x6c));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x70)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x70));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x74)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x74));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x78));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x7c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x80));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x80));
  uVar8 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar8;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x84)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x84));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x88)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x88));
  uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x8c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x8c)) = uVar15;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x90));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x90));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x94));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x94));
  uVar9 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar9;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x98)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x9c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xa0));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa0));
  lVar12 = puVar3[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar9);
  if (lVar12 == 0) {
    uVar13 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar13;
    puVar2[2] = puVar3[2];
  }
  else {
    *puVar2 = *puVar3;
    puVar2[1] = lVar12;
    uVar13 = puVar3[2];
    puVar2[2] = uVar13;
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa4));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xa8));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa8));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xac));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xac));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xb4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb4));
  lVar14 = (long)*(int *)(lVar10 + 0xb8);
  lVar12 = (long)param_2 + lVar14;
  (*pcVar18)(lVar12,1,lVar16);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar14,(long)param_2 + lVar14,lVar16);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar14,0,1,lVar16);
  }
  else {
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)puVar1 + lVar14,(long)param_2 + lVar14,
            *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xbc));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xc0));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc0));
  uVar13 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar13;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xc4));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc4));
  uVar13 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar13;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 200)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xcc));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xd0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd4));
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0xd8));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd8));
  lVar12 = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar13);
  if (lVar12 == 0) {
    uVar13 = *param_2;
    uVar20 = param_2[3];
    uVar19 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar20;
    puVar1[2] = uVar19;
    uVar13 = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar13;
    puVar1[6] = param_2[6];
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = lVar12;
    uVar13 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar13;
    uVar19 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar19;
    puVar1[6] = param_2[6];
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar19);
  }
  return param_1;
}



/* Entry: 10463ff60; end: 10463ff9b;  */

undefined8 FUN_10463ff60(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10464151c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10463ff9c; end: 104640487;  */

undefined8 * FUN_10463ff9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  FUN_10464151c();
  lVar5 = (long)param_2 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar5,lVar4);
  if ((int)lVar5 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    lVar9 = *(long *)(lVar7 + -8);
    lVar5 = (long)param_2 + lVar6;
    (**(code **)(lVar9 + 0x30))(lVar5,1,lVar7);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar7);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar6,0,1,lVar7);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,lVar4,0);
  }
  else {
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar10 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  lVar4 = 0;
  FUN_1046305a8();
  lVar9 = (long)*(int *)(lVar4 + 0x14);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar6);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)puVar1 + lVar9,(long)param_2 + lVar9,lVar6);
    (**(code **)(lVar7 + 0x38))((long)puVar1 + lVar9,0,1,lVar6);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)puVar1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40)
           );
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x20));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x20));
  puVar2[4] = puVar3[4];
  uVar12 = *puVar3;
  uVar11 = puVar3[3];
  uVar10 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar12;
  puVar2[3] = uVar11;
  puVar2[2] = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x40));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x44));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x44));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x48));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x48));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x4c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x50)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x50));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x54)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x54));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x58));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x58));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x5c));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x5c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x60));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x60));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 100));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 100));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x68));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x68));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x6c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x6c));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x70)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x70));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x74)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x74));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x78));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x7c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x80));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x80));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x84)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x84));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x88)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x88));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x8c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x8c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x90));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x90));
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar2 = *puVar3;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x94));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x94));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x98)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x9c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa0));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa0));
  uVar10 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar10;
  puVar2[2] = puVar3[2];
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa4));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xa8));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xa8));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xac));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xac));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xb4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xb4));
  lVar9 = (long)*(int *)(lVar4 + 0xb8);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar6);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)puVar1 + lVar9,(long)param_2 + lVar9,lVar6);
    (**(code **)(lVar7 + 0x38))((long)puVar1 + lVar9,0,1,lVar6);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)puVar1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40)
           );
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xbc));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc0));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xc0));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xc4));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xc4));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 200)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xcc));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xd0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd4));
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0xd8));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0xd8));
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar10 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar10;
  puVar1[6] = param_2[6];
  return param_1;
}



/* Entry: 104640488; end: 104640bbb;  */

undefined8 * FUN_104640488(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    lVar9 = (long)*(int *)(param_3 + 0x14);
    FUN_10463ff60((long)param_1 + lVar9);
    lVar4 = 0;
    FUN_10464151c();
    lVar8 = (long)param_2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar8,lVar4);
    if ((int)lVar8 == 0) {
      lVar6 = 0;
      __s10Foundation3URLVMa();
      lVar10 = *(long *)(lVar6 + -8);
      lVar8 = (long)param_2 + lVar9;
      (**(code **)(lVar10 + 0x30))(lVar8,1,lVar6);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
        (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
      }
      else {
        lVar8 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
                *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,lVar4,0);
    }
    else {
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar7 = param_2[1];
  uVar5 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  lVar9 = 0;
  FUN_1046305a8();
  lVar12 = (long)*(int *)(lVar9 + 0x14);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar6 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar8 = (long)puVar1 + lVar12;
  (*pcVar11)(lVar8,1,lVar6);
  lVar4 = (long)param_2 + lVar12;
  (*pcVar11)(lVar4,1,lVar6);
  if ((int)lVar8 == 0) {
    if ((int)lVar4 != 0) {
      (**(code **)(lVar10 + 8))((long)puVar1 + lVar12,lVar6);
      goto LAB_104640640;
    }
    (**(code **)(lVar10 + 0x28))((long)puVar1 + lVar12,(long)param_2 + lVar12,lVar6);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar12,(long)param_2 + lVar12,lVar6);
    (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar12,0,1,lVar6);
  }
  else {
LAB_104640640:
    lVar8 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)puVar1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(lVar9 + 0x18);
  uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
  *(undefined8 *)((long)puVar1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
  if (puVar2[1] == 1) {
LAB_1046406b4:
    uVar7 = *puVar3;
    uVar13 = puVar3[3];
    uVar5 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar7;
    puVar2[3] = uVar13;
    puVar2[2] = uVar5;
  }
  else {
    lVar8 = puVar3[1];
    if (lVar8 == 1) {
      func_0x000103def2c0(puVar2);
      goto LAB_1046406b4;
    }
    *puVar2 = *puVar3;
    puVar2[1] = lVar8;
    _swift_bridgeObjectRelease();
    uVar7 = puVar3[3];
    uVar5 = puVar2[3];
    puVar2[2] = puVar3[2];
    puVar2[3] = uVar7;
    _swift_bridgeObjectRelease(uVar5);
  }
  puVar2[4] = puVar3[4];
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x24));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
  lVar8 = (long)*(int *)(lVar9 + 0x38);
  uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
  *(undefined8 *)((long)puVar1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x44));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x44));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x48));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x4c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x50)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x50));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x54)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x54));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x58));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x58));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x5c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x5c));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x60));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x60));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 100));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 100));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x68));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x68));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x6c));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x6c));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x70)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x70));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x74)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x74));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x78)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x78));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x7c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x7c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x80));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x80));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x84)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x84));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x88)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x88));
  lVar8 = (long)*(int *)(lVar9 + 0x8c);
  uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
  *(undefined8 *)((long)puVar1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x90));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x90));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x94));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x94));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x98)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x9c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x9c));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa0));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa0));
  if (puVar2[1] == 0) {
LAB_10464097c:
    uVar7 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar7;
    puVar2[2] = puVar3[2];
  }
  else {
    lVar8 = puVar3[1];
    if (lVar8 == 0) {
      func_0x0001017b6670(puVar2);
      goto LAB_10464097c;
    }
    *puVar2 = *puVar3;
    puVar2[1] = lVar8;
    _swift_bridgeObjectRelease();
    uVar7 = puVar2[2];
    puVar2[2] = puVar3[2];
    _swift_bridgeObjectRelease(uVar7);
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa4));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xa8));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xa8));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xac));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xac));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb0)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xb0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xb4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xb4));
  lVar12 = (long)*(int *)(lVar9 + 0xb8);
  lVar8 = (long)puVar1 + lVar12;
  (*pcVar11)(lVar8,1,lVar6);
  lVar4 = (long)param_2 + lVar12;
  (*pcVar11)(lVar4,1,lVar6);
  if ((int)lVar8 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar10 + 0x28))((long)puVar1 + lVar12,(long)param_2 + lVar12,lVar6);
      goto LAB_104640a84;
    }
    (**(code **)(lVar10 + 8))((long)puVar1 + lVar12,lVar6);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x20))((long)puVar1 + lVar12,(long)param_2 + lVar12,lVar6);
    (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar12,0,1,lVar6);
    goto LAB_104640a84;
  }
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)puVar1 + lVar12,(long)param_2 + lVar12,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40)
         );
LAB_104640a84:
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xbc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xbc));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc0));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xc0));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xc4));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xc4));
  uVar7 = puVar3[1];
  uVar5 = puVar2[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 200)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xcc)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xcc));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xd0)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xd0));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xd4)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0xd4));
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0xd8));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0xd8));
  if (puVar1[1] != 0) {
    lVar8 = param_2[1];
    if (lVar8 != 0) {
      *puVar1 = *param_2;
      puVar1[1] = lVar8;
      _swift_bridgeObjectRelease();
      uVar7 = param_2[3];
      uVar5 = puVar1[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar7;
      _swift_bridgeObjectRelease(uVar5);
      uVar7 = param_2[5];
      uVar5 = puVar1[5];
      puVar1[4] = param_2[4];
      puVar1[5] = uVar7;
      _swift_bridgeObjectRelease(uVar5);
      puVar1[6] = param_2[6];
      return param_1;
    }
    func_0x0001017b6774(puVar1);
  }
  uVar7 = *param_2;
  uVar13 = param_2[3];
  uVar5 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar13;
  puVar1[2] = uVar5;
  uVar7 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar7;
  puVar1[6] = param_2[6];
  return param_1;
}



/* Entry: 104640bbc; end: 104640bd3;  */

void FUN_104640bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104640bd4; end: 104640c67;  */

void FUN_104640bd4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  FUN_10464151c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1046305a8();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 104640c68; end: 104640c6f;  */

bool FUN_104640c68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long alStack_90 [4];
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  alStack_90[3] = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_90[3] + 0x40));
  lVar5 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d7e680;
  alStack_90[1] = lVar5;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  lVar10 = 0x112d36580;
  lStack_70 = lVar5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar6 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_90[2] = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar4 = 0;
  FUN_10464151c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar8 = (long *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)plVar8 - extraout_x12_01;
  lVar10 = 0x11308b1e0;
  func_0x0001000285a8(0x11308b1e0,&UNK_10dd228b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar9 - extraout_x8_03;
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001046417fc(param_1,lVar7);
  func_0x0001046417fc(param_2,lVar7 + lVar10);
  lVar5 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar4);
  iVar2 = (int)lVar5;
  if (2 < iVar2) {
    if (iVar2 == 3) {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 3) goto LAB_104640f48;
    }
    else if (iVar2 == 4) {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 4) {
LAB_104640f48:
        FUN_10463ff60(lVar7);
        return true;
      }
    }
    else {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 5) goto LAB_104640f48;
    }
LAB_104640f58:
    func_0x000104641840(lVar7,0x11308b1e0,&UNK_10dd228b0);
    return false;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      func_0x0001046417fc(lVar7,plVar8);
      lVar3 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar3,lVar4);
      if ((int)lVar3 == 1) {
        lVar3 = *plVar8;
        lVar10 = *(long *)(lVar7 + lVar10);
        FUN_10463ff60(lVar7);
        return lVar3 == lVar10;
      }
    }
    else {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 2) goto LAB_104640f48;
    }
    goto LAB_104640f58;
  }
  func_0x0001046417fc(lVar7,lVar9);
  lVar5 = lVar7 + lVar10;
  _swift_getEnumCaseMultiPayload(lVar5,lVar4);
  if ((int)lVar5 != 0) {
    func_0x000104641840(lVar9,0x112d36580,&UNK_10d9016d0);
    goto LAB_104640f58;
  }
  func_0x0001001021cc(lVar9,lVar12);
  func_0x0001001021cc(lVar7 + lVar10,lVar13);
  lVar5 = lStack_70;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  func_0x000100029394(lVar12,lStack_70);
  func_0x000100029394(lVar13,lVar5 + lVar3);
  lVar4 = lStack_68;
  lVar10 = alStack_90[3];
  pcVar11 = *(code **)(alStack_90[3] + 0x30);
  lVar9 = lVar5;
  (*pcVar11)(lVar5,1,lStack_68);
  uVar6 = alStack_90[2];
  if ((int)lVar9 == 1) {
    func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
    lVar3 = lVar5 + lVar3;
    (*pcVar11)(lVar3,1,lVar4);
    if ((int)lVar3 == 1) {
      func_0x000104641840(lVar5,0x112d36580,&UNK_10d9016d0);
      goto LAB_104640f48;
    }
  }
  else {
    func_0x000100029394(lVar5,alStack_90[2]);
    lVar9 = lVar5 + lVar3;
    (*pcVar11)(lVar9,1,lVar4);
    lVar1 = alStack_90[1];
    if ((int)lVar9 != 1) {
      lVar9 = alStack_90[1];
      (**(code **)(lVar10 + 0x20))(alStack_90[1],lVar5 + lVar3,lVar4);
      func_0x000101553b98();
      __sSQ2eeoiySbx_xtFZTj(uVar6,lVar1,lVar4,lVar9);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar1,lVar4);
      func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
      func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
      (*pcVar11)(alStack_90[2],lVar4);
      func_0x000104641840(lVar5,0x112d36580,&UNK_10d9016d0);
      if ((uVar6 & 1) != 0) goto LAB_104640f48;
      goto LAB_1046410d8;
    }
    func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar10 + 8))(uVar6,lVar4);
  }
  func_0x000104641840(lVar5,0x112d7e680,&UNK_10d95e350);
LAB_1046410d8:
  FUN_10463ff60(lVar7);
  return false;
}



/* Entry: 104640c70; end: 10464117f;  */

bool FUN_104640c70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long alStack_90 [4];
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  alStack_90[3] = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_90[3] + 0x40));
  lVar5 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d7e680;
  alStack_90[1] = lVar5;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  lVar10 = 0x112d36580;
  lStack_70 = lVar5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  uVar6 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_90[2] = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12_00;
  lVar4 = 0;
  FUN_10464151c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar8 = (long *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)plVar8 - extraout_x12_01;
  lVar10 = 0x11308b1e0;
  func_0x0001000285a8(0x11308b1e0,&UNK_10dd228b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar9 - extraout_x8_03;
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x0001046417fc(param_1,lVar7);
  func_0x0001046417fc(param_2,lVar7 + lVar10);
  lVar5 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar4);
  iVar2 = (int)lVar5;
  if (2 < iVar2) {
    if (iVar2 == 3) {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 3) goto LAB_104640f48;
    }
    else if (iVar2 == 4) {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 4) {
LAB_104640f48:
        FUN_10463ff60(lVar7);
        return true;
      }
    }
    else {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 5) goto LAB_104640f48;
    }
LAB_104640f58:
    func_0x000104641840(lVar7,0x11308b1e0,&UNK_10dd228b0);
    return false;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      func_0x0001046417fc(lVar7,plVar8);
      lVar3 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar3,lVar4);
      if ((int)lVar3 == 1) {
        lVar3 = *plVar8;
        lVar10 = *(long *)(lVar7 + lVar10);
        FUN_10463ff60(lVar7);
        return lVar3 == lVar10;
      }
    }
    else {
      lVar10 = lVar7 + lVar10;
      _swift_getEnumCaseMultiPayload(lVar10,lVar4);
      if ((int)lVar10 == 2) goto LAB_104640f48;
    }
    goto LAB_104640f58;
  }
  func_0x0001046417fc(lVar7,lVar9);
  lVar5 = lVar7 + lVar10;
  _swift_getEnumCaseMultiPayload(lVar5,lVar4);
  if ((int)lVar5 != 0) {
    func_0x000104641840(lVar9,0x112d36580,&UNK_10d9016d0);
    goto LAB_104640f58;
  }
  func_0x0001001021cc(lVar9,lVar12);
  func_0x0001001021cc(lVar7 + lVar10,lVar13);
  lVar5 = lStack_70;
  lVar3 = (long)*(int *)(lVar3 + 0x30);
  func_0x000100029394(lVar12,lStack_70);
  func_0x000100029394(lVar13,lVar5 + lVar3);
  lVar4 = lStack_68;
  lVar10 = alStack_90[3];
  pcVar11 = *(code **)(alStack_90[3] + 0x30);
  lVar9 = lVar5;
  (*pcVar11)(lVar5,1,lStack_68);
  uVar6 = alStack_90[2];
  if ((int)lVar9 == 1) {
    func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
    lVar3 = lVar5 + lVar3;
    (*pcVar11)(lVar3,1,lVar4);
    if ((int)lVar3 == 1) {
      func_0x000104641840(lVar5,0x112d36580,&UNK_10d9016d0);
      goto LAB_104640f48;
    }
  }
  else {
    func_0x000100029394(lVar5,alStack_90[2]);
    lVar9 = lVar5 + lVar3;
    (*pcVar11)(lVar9,1,lVar4);
    lVar1 = alStack_90[1];
    if ((int)lVar9 != 1) {
      lVar9 = alStack_90[1];
      (**(code **)(lVar10 + 0x20))(alStack_90[1],lVar5 + lVar3,lVar4);
      func_0x000101553b98();
      __sSQ2eeoiySbx_xtFZTj(uVar6,lVar1,lVar4,lVar9);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar1,lVar4);
      func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
      func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
      (*pcVar11)(alStack_90[2],lVar4);
      func_0x000104641840(lVar5,0x112d36580,&UNK_10d9016d0);
      if ((uVar6 & 1) != 0) goto LAB_104640f48;
      goto LAB_1046410d8;
    }
    func_0x000104641840(lVar13,0x112d36580,&UNK_10d9016d0);
    func_0x000104641840(lVar12,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar10 + 8))(uVar6,lVar4);
  }
  func_0x000104641840(lVar5,0x112d7e680,&UNK_10d95e350);
LAB_1046410d8:
  FUN_10463ff60(lVar7);
  return false;
}



/* Entry: 104641180; end: 1046412a3;  */

long * FUN_104641180(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar4 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar4 + 0x40));
      return param_1;
    }
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar4 + -8);
    plVar2 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
    if ((int)plVar2 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1046412a4; end: 104641313;  */

void FUN_1046412a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)uVar1 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar3 = *(long *)(lVar2 + -8);
    uVar1 = param_1;
    (**(code **)(lVar3 + 0x30))(param_1,1,lVar2);
    if ((int)uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104641310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))(param_1,lVar2);
      return;
    }
  }
  return;
}



/* Entry: 104641314; end: 10464151b;  */

undefined8 FUN_104641314(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar2);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Entry: 10464151c; end: 104641553;  */

void FUN_10464151c(undefined8 param_1)

{
  if (lRam000000011308b1a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e816590);
  return;
}



/* Entry: 104641554; end: 10464175b;  */

undefined8 FUN_104641554(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar2);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Entry: 10464175c; end: 10464178b;  */

void FUN_10464175c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104641764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10464178c; end: 10464187f;  */

void FUN_10464178c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 104641880; end: 1046419d3;  */

byte FUN_104641880(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_1[1] ^ param_2[1] | param_2[2] ^ param_1[2]) ^ 0xff) & 1;
}



/* Entry: 1046419d4; end: 104641a23;  */

undefined8 FUN_1046419d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11304dbb8;
  func_0x0001000285a8(0x11304dbb8,&UNK_10dd22560);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104641a24; end: 104641a27;  */

undefined8 FUN_104641a24(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  double dStack_80;
  
  uVar1 = *param_1;
  if ((uVar1 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar1 = param_1[2];
  if ((uVar1 != param_2[2] || param_1[3] != param_2[3]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar1 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[4];
    if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[6] != (int)param_2[6]) {
    return 0;
  }
  if ((int)param_1[7] != (int)param_2[7]) {
    return 0;
  }
  uVar1 = param_1[8];
  if (((uVar1 != param_2[8]) || (param_1[9] != param_2[9])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  if (param_1[10] != param_2[10]) {
    return 0;
  }
  if ((((byte)param_1[0xb] ^ (byte)param_2[0xb]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x59) ^ *(byte *)((long)param_2 + 0x59)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x5a) ^ *(byte *)((long)param_2 + 0x5a)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x5b) ^ *(byte *)((long)param_2 + 0x5b)) & 1) != 0) {
    return 0;
  }
  uVar1 = param_2[0xd];
  if (param_1[0xd] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[0xc];
    if (((uVar2 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0xe] ^ (byte)param_2[0xe]) & 1) != 0) {
    return 0;
  }
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar1);
    uVar12 = uVar2;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[0x10];
  uVar1 = param_2[0x10];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    FUN_104840a2c(0);
    _objc_retain(uVar1);
    _objc_retain();
    uVar12 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x11] ^ (byte)param_2[0x11]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x89) ^ *(byte *)((long)param_2 + 0x89)) & 1) != 0) {
    return 0;
  }
  uVar2 = param_1[0x13];
  uVar1 = param_1[0x12];
  uVar14 = param_1[0x15];
  uVar12 = param_1[0x14];
  uVar9 = param_1[0x17];
  uVar6 = param_1[0x16];
  dVar4 = (double)param_1[0x18];
  uVar10 = param_2[0x13];
  uVar7 = param_2[0x12];
  uVar15 = param_2[0x15];
  uVar13 = param_2[0x14];
  uVar11 = param_2[0x17];
  uVar8 = param_2[0x16];
  dVar5 = (double)param_2[0x18];
  uStack_f0 = uVar7;
  uStack_e8 = uVar10;
  uStack_e0 = uVar13;
  uStack_d8 = uVar15;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  dStack_c0 = dVar5;
  uStack_b0 = uVar1;
  uStack_a8 = uVar2;
  uStack_a0 = uVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar6;
  uStack_88 = uVar9;
  dStack_80 = dVar4;
  if (uVar2 == 0) {
    if (uVar10 == 0) {
      FUN_1046419d4(&uStack_b0,auStack_128);
      FUN_1046419d4(&uStack_f0,auStack_128);
LAB_104642018:
      func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
      return 1;
    }
  }
  else if (uVar10 != 0) {
    if ((((uVar1 == uVar7) && (uVar2 == uVar10)) ||
        (uVar3 = uVar1,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,uVar2,uVar7,uVar10,0), (uVar3 & 1) != 0)) &&
       (((uVar12 == uVar13 && (uVar14 == uVar15)) ||
        (uVar3 = uVar12,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar12,uVar14,uVar13,uVar15,0), (uVar3 & 1) != 0)))) {
      if ((uVar6 == uVar8) && (uVar9 == uVar11)) {
        FUN_1046419d4(&uStack_b0,auStack_128);
        FUN_1046419d4(&uStack_f0,auStack_128);
        func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar6,uVar9,dVar5);
      }
      else {
        uVar3 = uVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar9,uVar8,uVar11,0);
        FUN_1046419d4(&uStack_b0,auStack_128);
        FUN_1046419d4(&uStack_f0,auStack_128);
        func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar8,uVar11,dVar5);
        if ((uVar3 & 1) == 0) goto LAB_10464204c;
      }
      if (dVar4 == dVar5) goto LAB_104642018;
    }
    else {
      FUN_1046419d4(&uStack_b0,auStack_128);
      FUN_1046419d4(&uStack_f0,auStack_128);
      func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar8,uVar11,dVar5);
    }
    goto LAB_10464204c;
  }
  FUN_1046419d4(&uStack_b0,auStack_128);
  FUN_1046419d4(&uStack_f0,auStack_128);
  func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
  uVar1 = uVar7;
  uVar2 = uVar10;
  uVar12 = uVar13;
  uVar14 = uVar15;
  uVar6 = uVar8;
  uVar9 = uVar11;
  dVar4 = dVar5;
LAB_10464204c:
  func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
  return 0;
}



/* Entry: 104641a28; end: 104641ac7;  */

uint FUN_104641a28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_104641b7c(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 104641ac8; end: 104641b7b;  */

void FUN_104641ac8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_298 [200];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_b8;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_138 = unaff_x20[0x13];
  uStack_140 = unaff_x20[0x12];
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x15];
  uStack_130 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_178 = unaff_x20[0xb];
  uStack_180 = unaff_x20[10];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xd];
  uStack_170 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0xf];
  uStack_160 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x11];
  uStack_150 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[3];
  uStack_1c0 = unaff_x20[2];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[5];
  uStack_1b0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_198 = unaff_x20[7];
  uStack_1a0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_188 = unaff_x20[9];
  uStack_190 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_1c8 = unaff_x20[1];
  uStack_1d0 = *unaff_x20;
  uStack_118 = unaff_x20[0x17];
  uStack_120 = unaff_x20[0x16];
  uStack_40 = unaff_x20[0x18];
  uStack_110 = unaff_x20[0x18];
  func_0x00010397e204(&uStack_100,auStack_298);
  __sSS10describingSSx_tclufC(&uStack_1d0,param_1);
  return;
}



/* Entry: 104641b7c; end: 104642053;  */

undefined8 FUN_104641b7c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  double dStack_80;
  
  uVar1 = *param_1;
  if ((uVar1 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar1 = param_1[2];
  if ((uVar1 != param_2[2] || param_1[3] != param_2[3]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar1 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[4];
    if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[6] != (int)param_2[6]) {
    return 0;
  }
  if ((int)param_1[7] != (int)param_2[7]) {
    return 0;
  }
  uVar1 = param_1[8];
  if (((uVar1 != param_2[8]) || (param_1[9] != param_2[9])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  if (param_1[10] != param_2[10]) {
    return 0;
  }
  if ((((byte)param_1[0xb] ^ (byte)param_2[0xb]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x59) ^ *(byte *)((long)param_2 + 0x59)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x5a) ^ *(byte *)((long)param_2 + 0x5a)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x5b) ^ *(byte *)((long)param_2 + 0x5b)) & 1) != 0) {
    return 0;
  }
  uVar1 = param_2[0xd];
  if (param_1[0xd] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[0xc];
    if (((uVar2 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0xe] ^ (byte)param_2[0xe]) & 1) != 0) {
    return 0;
  }
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar1);
    uVar12 = uVar2;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[0x10];
  uVar1 = param_2[0x10];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    FUN_104840a2c(0);
    _objc_retain(uVar1);
    _objc_retain();
    uVar12 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x11] ^ (byte)param_2[0x11]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x89) ^ *(byte *)((long)param_2 + 0x89)) & 1) != 0) {
    return 0;
  }
  uVar2 = param_1[0x13];
  uVar1 = param_1[0x12];
  uVar14 = param_1[0x15];
  uVar12 = param_1[0x14];
  uVar9 = param_1[0x17];
  uVar6 = param_1[0x16];
  dVar4 = (double)param_1[0x18];
  uVar10 = param_2[0x13];
  uVar7 = param_2[0x12];
  uVar15 = param_2[0x15];
  uVar13 = param_2[0x14];
  uVar11 = param_2[0x17];
  uVar8 = param_2[0x16];
  dVar5 = (double)param_2[0x18];
  uStack_f0 = uVar7;
  uStack_e8 = uVar10;
  uStack_e0 = uVar13;
  uStack_d8 = uVar15;
  uStack_d0 = uVar8;
  uStack_c8 = uVar11;
  dStack_c0 = dVar5;
  uStack_b0 = uVar1;
  uStack_a8 = uVar2;
  uStack_a0 = uVar12;
  uStack_98 = uVar14;
  uStack_90 = uVar6;
  uStack_88 = uVar9;
  dStack_80 = dVar4;
  if (uVar2 == 0) {
    if (uVar10 == 0) {
      FUN_1046419d4(&uStack_b0,auStack_128);
      FUN_1046419d4(&uStack_f0,auStack_128);
LAB_104642018:
      func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
      return 1;
    }
  }
  else if (uVar10 != 0) {
    if ((((uVar1 == uVar7) && (uVar2 == uVar10)) ||
        (uVar3 = uVar1,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,uVar2,uVar7,uVar10,0), (uVar3 & 1) != 0)) &&
       (((uVar12 == uVar13 && (uVar14 == uVar15)) ||
        (uVar3 = uVar12,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar12,uVar14,uVar13,uVar15,0), (uVar3 & 1) != 0)))) {
      if ((uVar6 == uVar8) && (uVar9 == uVar11)) {
        FUN_1046419d4(&uStack_b0,auStack_128);
        FUN_1046419d4(&uStack_f0,auStack_128);
        func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar6,uVar9,dVar5);
      }
      else {
        uVar3 = uVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar9,uVar8,uVar11,0);
        FUN_1046419d4(&uStack_b0,auStack_128);
        FUN_1046419d4(&uStack_f0,auStack_128);
        func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar8,uVar11,dVar5);
        if ((uVar3 & 1) == 0) goto LAB_10464204c;
      }
      if (dVar4 == dVar5) goto LAB_104642018;
    }
    else {
      FUN_1046419d4(&uStack_b0,auStack_128);
      FUN_1046419d4(&uStack_f0,auStack_128);
      func_0x0001034a6828(uVar7,uVar10,uVar13,uVar15,uVar8,uVar11,dVar5);
    }
    goto LAB_10464204c;
  }
  FUN_1046419d4(&uStack_b0,auStack_128);
  FUN_1046419d4(&uStack_f0,auStack_128);
  func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
  uVar1 = uVar7;
  uVar2 = uVar10;
  uVar12 = uVar13;
  uVar14 = uVar15;
  uVar6 = uVar8;
  uVar9 = uVar11;
  dVar4 = dVar5;
LAB_10464204c:
  func_0x0001034a6828(uVar1,uVar2,uVar12,uVar14,uVar6,uVar9,dVar4);
  return 0;
}



/* Entry: 104642054; end: 1046420f7;  */

long FUN_104642054(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1046420f8; end: 104642223;  */

undefined8 * FUN_1046420f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar5 = param_2[0xf];
  uVar3 = param_2[0x10];
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar3;
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  lVar4 = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _objc_retain(uVar3);
  if (lVar4 == 0) {
    uVar5 = param_2[0x12];
    uVar7 = param_2[0x15];
    uVar6 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar6;
    uVar5 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x18] = param_2[0x18];
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar4;
    uVar5 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar5;
    uVar6 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar6;
    param_1[0x18] = param_2[0x18];
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  return param_1;
}



/* Entry: 104642224; end: 104642477;  */

undefined8 * FUN_104642224(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _objc_retain();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)((long)param_2 + 0x89);
  lVar2 = param_1[0x13];
  if (lVar2 == 0) {
    if (param_2[0x13] == 0) {
      uVar3 = param_2[0x13];
      uVar1 = param_2[0x12];
      uVar5 = param_2[0x15];
      uVar4 = param_2[0x14];
      uVar7 = param_2[0x17];
      uVar6 = param_2[0x16];
      param_1[0x18] = param_2[0x18];
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar4;
      param_1[0x17] = uVar7;
      param_1[0x16] = uVar6;
      param_1[0x13] = uVar3;
      param_1[0x12] = uVar1;
    }
    else {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      uVar1 = param_2[0x15];
      param_1[0x15] = uVar1;
      param_1[0x16] = param_2[0x16];
      uVar3 = param_2[0x17];
      param_1[0x17] = uVar3;
      param_1[0x18] = param_2[0x18];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (param_2[0x13] == 0) {
    func_0x0001017b6774(param_1 + 0x12);
    uVar5 = param_2[0x15];
    uVar4 = param_2[0x14];
    uVar3 = param_2[0x17];
    uVar1 = param_2[0x16];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    param_1[0x18] = param_2[0x18];
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar4;
    param_1[0x17] = uVar3;
    param_1[0x16] = uVar1;
    param_1[0x13] = uVar7;
    param_1[0x12] = uVar6;
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[0x14] = param_2[0x14];
    uVar1 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[0x16] = param_2[0x16];
    uVar1 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    param_1[0x18] = param_2[0x18];
  }
  return param_1;
}



/* Entry: 104642478; end: 1046425bb;  */

undefined8 * FUN_104642478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)((long)param_2 + 0x89);
  if (param_1[0x13] != 0) {
    lVar3 = param_2[0x13];
    if (lVar3 != 0) {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_2[0x15];
      uVar1 = param_1[0x15];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = param_2[0x17];
      uVar1 = param_1[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0x18] = param_2[0x18];
      return param_1;
    }
    func_0x0001017b6774(param_1 + 0x12);
  }
  uVar2 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar1;
  uVar2 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 1046425bc; end: 104642683;  */

int FUN_1046425bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104642684; end: 104642883;  */

void FUN_104642684(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined1 param_24,
                  undefined4 param_25,undefined8 param_26,undefined1 param_27,undefined4 param_28,
                  undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
                  undefined1 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
                  undefined1 param_37,undefined4 param_38,undefined8 param_39,undefined4 param_40)

{
  undefined1 auStack_318 [248];
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined1 uStack_1ce;
  undefined5 uStack_1cd;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_1e0 = param_10;
  uStack_e8 = param_10;
  uStack_1d8 = param_11;
  uStack_e0 = param_11;
  uStack_1d0 = (undefined1)param_12;
  uStack_d8 = (undefined1)param_12;
  uStack_1cf = param_12._1_1_;
  uStack_1ce = param_12._2_1_;
  uStack_1c8 = param_14;
  uStack_1c0 = param_15;
  uStack_d0 = param_14;
  uStack_c8 = param_15;
  uStack_1b8 = param_16;
  uStack_c0 = param_16;
  uStack_1b0 = param_17;
  uStack_b8 = param_17;
  uStack_1a8 = param_18;
  uStack_b0 = param_18;
  uStack_1a0 = param_20;
  uStack_a8 = param_20;
  uStack_198 = param_21;
  uStack_a0 = param_21;
  uStack_190 = param_23;
  uStack_98 = param_23;
  uStack_188 = param_24;
  uStack_90 = param_24;
  uStack_180 = param_26;
  uStack_88 = param_26;
  uStack_178 = param_27;
  uStack_80 = param_27;
  uStack_170 = param_29;
  uStack_78 = param_29;
  uStack_168 = param_30;
  uStack_70 = param_30;
  uStack_160 = param_32;
  uStack_158 = param_33;
  uStack_68 = param_32;
  uStack_60 = param_33;
  uStack_58 = param_35;
  uStack_150 = param_35;
  uStack_148 = param_36;
  uStack_50 = param_36;
  uStack_140 = param_37;
  uStack_48 = param_37;
  uStack_138 = param_39;
  uStack_40 = param_39;
  uStack_38 = (undefined1)param_40;
  uStack_130 = param_40;
  uStack_220 = param_2;
  uStack_218 = param_3;
  uStack_210 = param_4;
  uStack_208 = param_5;
  uStack_200 = param_6;
  uStack_1f8 = param_7;
  uStack_1f0 = param_8;
  uStack_1e8 = param_9;
  auStack_128[0] = param_2;
  uStack_120 = param_3;
  uStack_118 = param_4;
  uStack_110 = param_5;
  uStack_108 = param_6;
  uStack_100 = param_7;
  uStack_f8 = param_8;
  uStack_f0 = param_9;
  func_0x0001037b0db4(&uStack_220,auStack_318);
  func_0x0001037b0e30(auStack_128);
  param_1[0x19] = CONCAT71(uStack_157,uStack_158);
  param_1[0x18] = uStack_160;
  param_1[0x1b] = uStack_148;
  param_1[0x1a] = uStack_150;
  param_1[0x1d] = uStack_138;
  param_1[0x1c] = CONCAT71(uStack_13f,uStack_140);
  *(undefined4 *)(param_1 + 0x1e) = uStack_130;
  param_1[0x11] = CONCAT71(uStack_197,uStack_198);
  param_1[0x10] = uStack_1a0;
  param_1[0x13] = CONCAT71(uStack_187,uStack_188);
  param_1[0x12] = uStack_190;
  param_1[0x15] = CONCAT71(uStack_177,uStack_178);
  param_1[0x14] = uStack_180;
  param_1[0x17] = CONCAT71(uStack_167,uStack_168);
  param_1[0x16] = uStack_170;
  param_1[9] = uStack_1d8;
  param_1[8] = uStack_1e0;
  param_1[0xb] = uStack_1c8;
  param_1[10] = CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0)));
  param_1[0xd] = uStack_1b8;
  param_1[0xc] = uStack_1c0;
  param_1[0xf] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[0xe] = uStack_1b0;
  param_1[1] = uStack_218;
  *param_1 = CONCAT71(uStack_21f,uStack_220);
  param_1[3] = uStack_208;
  param_1[2] = uStack_210;
  param_1[5] = uStack_1f8;
  param_1[4] = uStack_200;
  param_1[7] = uStack_1e8;
  param_1[6] = CONCAT71(uStack_1ef,uStack_1f0);
  return;
}



/* Entry: 104642884; end: 104642943;  */

uint FUN_104642884(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
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
  undefined4 uStack_30;
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_130 = *(undefined4 *)(param_1 + 0x1e);
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_30 = *(undefined4 *)(param_2 + 0x1e);
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_1046434f4(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 104642944; end: 104642b5b;  */

void FUN_104642944(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_328 [248];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
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
  undefined4 uStack_40;
  
  uStack_168 = unaff_x20[0x19];
  uStack_170 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0x17];
  uStack_180 = unaff_x20[0x16];
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0x1b];
  uStack_160 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_1a8 = unaff_x20[0x11];
  uStack_1b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[0xf];
  uStack_1c0 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_198 = unaff_x20[0x13];
  uStack_1a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_188 = unaff_x20[0x15];
  uStack_190 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_1e8 = unaff_x20[9];
  uStack_1f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_1f8 = unaff_x20[7];
  uStack_200 = unaff_x20[6];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_1d8 = unaff_x20[0xb];
  uStack_1e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_1c8 = unaff_x20[0xd];
  uStack_1d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  uStack_228 = unaff_x20[1];
  uStack_230 = *unaff_x20;
  uStack_218 = unaff_x20[3];
  uStack_220 = unaff_x20[2];
  uStack_208 = unaff_x20[5];
  uStack_210 = unaff_x20[4];
  uStack_148 = unaff_x20[0x1d];
  uStack_150 = unaff_x20[0x1c];
  uStack_40 = *(undefined4 *)(unaff_x20 + 0x1e);
  uStack_140 = *(undefined4 *)(unaff_x20 + 0x1e);
  func_0x0001037b0db4(&uStack_130,auStack_328);
  __sSS10describingSSx_tclufC(&uStack_230,param_1);
  return;
}



/* Entry: 104642b5c; end: 104642b9b; +[SCWebViewContext identity] */

void FUN_104642b5c(void)

{
  if (lRam000000011308b1e8 != -1) {
    _swift_once(0x11308b1e8,0x104642a14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113814f68);
  return;
}



/* Entry: 104642b9c; end: 104642d5b; -[SCWebViewContext withInitialUrl:] */

void FUN_104642b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_448 [248];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uVar1 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10465ba60(&uStack_258);
  uStack_158 = uStack_248;
  uStack_160 = uStack_250;
  uStack_288 = uStack_190;
  uStack_290 = uStack_198;
  uStack_278 = uStack_180;
  uStack_280 = uStack_188;
  uStack_268 = uStack_170;
  uStack_270 = uStack_178;
  uStack_260 = uStack_168;
  uStack_2c8 = uStack_1d0;
  uStack_2d0 = uStack_1d8;
  uStack_2b8 = uStack_1c0;
  uStack_2c0 = uStack_1c8;
  uStack_2a8 = uStack_1b0;
  uStack_2b0 = uStack_1b8;
  uStack_298 = uStack_1a0;
  uStack_2a0 = uStack_1a8;
  uStack_308 = uStack_210;
  uStack_310 = uStack_218;
  uStack_2f8 = uStack_200;
  uStack_300 = uStack_208;
  uStack_2e8 = uStack_1f0;
  uStack_2f0 = uStack_1f8;
  uStack_2d8 = uStack_1e0;
  uStack_2e0 = uStack_1e8;
  uStack_348 = uStack_250;
  uStack_350 = uStack_258;
  uStack_338 = uStack_240;
  uStack_340 = uStack_248;
  uStack_328 = uStack_230;
  uStack_330 = uStack_238;
  uStack_318 = uStack_220;
  uStack_320 = uStack_228;
  _swift_bridgeObjectRetain(param_2);
  func_0x000101994d34(&uStack_160);
  uStack_88 = uStack_288;
  uStack_90 = uStack_290;
  uStack_78 = uStack_278;
  uStack_80 = uStack_280;
  uStack_68 = uStack_268;
  uStack_70 = uStack_270;
  uStack_60 = uStack_260;
  uStack_c8 = uStack_2c8;
  uStack_d0 = uStack_2d0;
  uStack_b8 = uStack_2b8;
  uStack_c0 = uStack_2c0;
  uStack_a8 = uStack_2a8;
  uStack_b0 = uStack_2b0;
  uStack_98 = uStack_298;
  uStack_a0 = uStack_2a0;
  uStack_108 = uStack_308;
  uStack_110 = uStack_310;
  uStack_f8 = uStack_2f8;
  uStack_100 = uStack_300;
  uStack_e8 = uStack_2e8;
  uStack_f0 = uStack_2f0;
  uStack_d8 = uStack_2d8;
  uStack_e0 = uStack_2e0;
  uStack_128 = uStack_328;
  uStack_130 = uStack_330;
  uStack_118 = uStack_318;
  uStack_120 = uStack_320;
  uStack_150 = uStack_350;
  uStack_138 = uStack_338;
  uStack_348 = param_3;
  uStack_340 = param_2;
  uStack_148 = param_3;
  uStack_140 = param_2;
  _objc_allocWithZone(uVar1);
  func_0x0001037b0db4(&uStack_150,auStack_448);
  puVar2 = &uStack_150;
  FUN_104658cf4(puVar2);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_1);
  func_0x0001037b0e30(&uStack_350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104642d5c; end: 104642e3b; -[SCWebViewContext withBrowserType:] */

void FUN_104642d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_330 [248];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10465ba60(&uStack_238);
  uStack_78 = uStack_170;
  uStack_80 = uStack_178;
  uStack_68 = uStack_160;
  uStack_70 = uStack_168;
  uStack_58 = uStack_150;
  uStack_60 = uStack_158;
  uStack_50 = uStack_148;
  uStack_b8 = uStack_1b0;
  uStack_c0 = uStack_1b8;
  uStack_a8 = uStack_1a0;
  uStack_b0 = uStack_1a8;
  uStack_98 = uStack_190;
  uStack_a0 = uStack_198;
  uStack_88 = uStack_180;
  uStack_90 = uStack_188;
  uStack_d8 = uStack_1d0;
  uStack_e0 = uStack_1d8;
  uStack_c8 = uStack_1c0;
  uStack_d0 = uStack_1c8;
  uStack_138 = uStack_230;
  uStack_140 = uStack_238;
  uStack_128 = uStack_220;
  uStack_130 = uStack_228;
  uStack_118 = uStack_210;
  uStack_120 = uStack_218;
  uStack_108 = uStack_200;
  uStack_110 = uStack_208;
  uStack_f8 = uStack_1f0;
  uStack_100 = uStack_1f8;
  uStack_f0 = uStack_1e8;
  uStack_1e0 = param_3;
  uStack_e8 = param_3;
  _objc_allocWithZone(uVar1);
  func_0x0001037b0db4(&uStack_140,auStack_330);
  puVar2 = &uStack_140;
  FUN_104658cf4(puVar2);
  _objc_release(param_1);
  func_0x0001037b0e30(&uStack_238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104642e3c; end: 104643497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104642e3c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar6 = *(long *)(param_1 + _DAT_11308b5c0);
  lVar10 = lVar6;
  if (lVar6 == 0) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308b5c0);
    _objc_retain(lVar10);
  }
  lVar14 = ((undefined8 *)(param_1 + _DAT_11308b5c8))[1];
  if (lVar14 == 0) {
    uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_11308b5c8);
    lStack_a8 = ((undefined8 *)(unaff_x20 + _DAT_11308b5c8))[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uStack_a0 = *(undefined8 *)(param_1 + _DAT_11308b5c8);
    lStack_a8 = lVar14;
  }
  lVar15 = ((undefined8 *)(param_1 + _DAT_11308b5d0))[1];
  if (lVar15 == 0) {
    uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_11308b5d0);
    lStack_b8 = ((undefined8 *)(unaff_x20 + _DAT_11308b5d0))[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uStack_b0 = *(undefined8 *)(param_1 + _DAT_11308b5d0);
    lStack_b8 = lVar15;
  }
  lVar18 = *(long *)(param_1 + _DAT_11308b5d8);
  lVar21 = lVar18;
  if (lVar18 == 0) {
    lVar21 = *(long *)(unaff_x20 + _DAT_11308b5d8);
    _objc_retain(lVar21);
  }
  lVar22 = ((undefined8 *)(param_1 + _DAT_11308b5e0))[1];
  if (lVar22 == 0) {
    uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_11308b5e0);
    lStack_d0 = ((undefined8 *)(unaff_x20 + _DAT_11308b5e0))[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uStack_c8 = *(undefined8 *)(param_1 + _DAT_11308b5e0);
    lStack_d0 = lVar22;
  }
  lVar24 = *(long *)(param_1 + _DAT_11308b5e8);
  lVar25 = lVar24;
  if (lVar24 == 0) {
    lVar25 = *(long *)(unaff_x20 + _DAT_11308b5e8);
    _objc_retain(lVar25);
  }
  lVar26 = *(long *)(param_1 + _DAT_11308b5f0);
  lVar28 = lVar26;
  if (lVar26 == 0) {
    lVar28 = *(long *)(unaff_x20 + _DAT_11308b5f0);
    _objc_retain(lVar28);
  }
  lVar29 = *(long *)(param_1 + _DAT_11308b5f8);
  lVar11 = lVar29;
  if (lVar29 == 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_11308b5f8);
    _objc_retain(lVar11);
  }
  lVar7 = _DAT_11308b600;
  uStack_88 = *(undefined8 *)(param_1 + _DAT_11308b600);
  _objc_retain(lVar6);
  _swift_bridgeObjectRetain(lVar14);
  _swift_bridgeObjectRetain(lVar15);
  _objc_retain(lVar18);
  _swift_bridgeObjectRetain(lVar22);
  _objc_retain(lVar24);
  _objc_retain(lVar26);
  _objc_retain(lVar29);
  if ((int)uStack_88 == 0) {
    uStack_88 = *(undefined8 *)(unaff_x20 + lVar7);
  }
  lVar6 = ((undefined8 *)(param_1 + _DAT_11308b608))[1];
  if (lVar6 == 0) {
    uStack_108 = *(undefined8 *)(unaff_x20 + _DAT_11308b608);
    lStack_110 = ((undefined8 *)(unaff_x20 + _DAT_11308b608))[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + _DAT_11308b608);
    lStack_110 = lVar6;
  }
  lVar15 = *(long *)(param_1 + _DAT_11308b610);
  lVar14 = lVar15;
  if (lVar15 == 0) {
    lVar14 = *(long *)(unaff_x20 + _DAT_11308b610);
    _objc_retain(lVar14);
  }
  lVar22 = *(long *)(param_1 + _DAT_11308b618);
  lVar18 = lVar22;
  if (lVar22 == 0) {
    lVar18 = *(long *)(unaff_x20 + _DAT_11308b618);
    _objc_retain(lVar18);
  }
  lVar26 = *(long *)(param_1 + _DAT_11308b620);
  lVar24 = lVar26;
  if (lVar26 == 0) {
    lVar24 = *(long *)(unaff_x20 + _DAT_11308b620);
    _objc_retain(lVar24);
  }
  lVar7 = *(long *)(param_1 + _DAT_11308b628);
  lVar29 = lVar7;
  if (lVar7 == 0) {
    lVar29 = *(long *)(unaff_x20 + _DAT_11308b628);
    _objc_retain(lVar29);
  }
  lVar8 = *(long *)(param_1 + _DAT_11308b630);
  lVar16 = lVar8;
  if (lVar8 == 0) {
    lVar16 = *(long *)(unaff_x20 + _DAT_11308b630);
    _objc_retain(lVar16);
  }
  lVar17 = *(long *)(param_1 + _DAT_11308b638);
  lVar19 = lVar17;
  if (lVar17 == 0) {
    lVar19 = *(long *)(unaff_x20 + _DAT_11308b638);
    _objc_retain(lVar19);
  }
  lVar20 = *(long *)(param_1 + _DAT_11308b640);
  lVar4 = lVar20;
  if (lVar20 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_11308b640);
    _swift_bridgeObjectRetain();
  }
  lVar27 = *(long *)(param_1 + _DAT_11308b648);
  lVar12 = lVar27;
  if (lVar27 == 0) {
    lVar12 = *(long *)(unaff_x20 + _DAT_11308b648);
    _objc_retain(lVar12);
  }
  lVar9 = *(long *)(param_1 + _DAT_11308b650);
  lVar30 = lVar9;
  if (lVar9 == 0) {
    lVar30 = *(long *)(unaff_x20 + _DAT_11308b650);
    _objc_retain(lVar30);
  }
  if ((*(byte *)(param_1 + _DAT_11308b658) & 1) == 0) {
    uVar5 = *(undefined1 *)(unaff_x20 + _DAT_11308b658);
  }
  else {
    uVar5 = 1;
  }
  if ((*(byte *)(param_1 + _DAT_11308b660) & 1) == 0) {
    uVar23 = *(undefined1 *)(unaff_x20 + _DAT_11308b660);
  }
  else {
    uVar23 = 1;
  }
  if ((*(byte *)(param_1 + _DAT_11308b668) & 1) == 0) {
    uVar13 = *(undefined1 *)(unaff_x20 + _DAT_11308b668);
  }
  else {
    uVar13 = 1;
  }
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11308b5c0) = lVar10;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b5c8);
  *puVar1 = uStack_a0;
  puVar1[1] = lStack_a8;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b5d0);
  *puVar1 = uStack_b0;
  puVar1[1] = lStack_b8;
  *(long *)(lVar3 + _DAT_11308b5d8) = lVar21;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b5e0);
  *puVar1 = uStack_c8;
  puVar1[1] = lStack_d0;
  *(long *)(lVar3 + _DAT_11308b5e8) = lVar25;
  *(long *)(lVar3 + _DAT_11308b5f0) = lVar28;
  *(long *)(lVar3 + _DAT_11308b5f8) = lVar11;
  *(undefined8 *)(lVar3 + _DAT_11308b600) = uStack_88;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b608);
  *puVar1 = uStack_108;
  puVar1[1] = lStack_110;
  *(long *)(lVar3 + _DAT_11308b610) = lVar14;
  *(long *)(lVar3 + _DAT_11308b618) = lVar18;
  *(long *)(lVar3 + _DAT_11308b620) = lVar24;
  *(long *)(lVar3 + _DAT_11308b628) = lVar29;
  *(long *)(lVar3 + _DAT_11308b630) = lVar16;
  *(long *)(lVar3 + _DAT_11308b638) = lVar19;
  *(long *)(lVar3 + _DAT_11308b640) = lVar4;
  *(long *)(lVar3 + _DAT_11308b648) = lVar12;
  *(long *)(lVar3 + _DAT_11308b650) = lVar30;
  *(undefined1 *)(lVar3 + _DAT_11308b658) = uVar5;
  *(undefined1 *)(lVar3 + _DAT_11308b660) = uVar23;
  *(undefined1 *)(lVar3 + _DAT_11308b668) = uVar13;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(lVar6);
  _objc_retain(lVar15);
  _objc_retain(lVar22);
  _objc_retain(lVar26);
  _objc_retain(lVar7);
  _objc_retain(lVar8);
  _objc_retain(lVar17);
  _swift_bridgeObjectRetain(lVar20);
  _objc_retain(lVar27);
  _objc_retain(lVar9);
  _objc_msgSendSuper2(auStack_78,puVar2);
  return;
}



/* Entry: 104643498; end: 1046434f3; -[SCWebViewContext merge:] */

void FUN_104643498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104642e3c(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046434f4; end: 104643a43;  */

byte FUN_1046434f4(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *param_2;
  if (*param_1 == 2) {
    if (bVar1 == 2) goto LAB_104643534;
  }
  else {
    bVar3 = 0;
    if ((bVar1 == 2) || (((*param_1 ^ bVar1) & 1) != 0)) goto LAB_1046439ac;
LAB_104643534:
    lVar4 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar4 == 0) {
      if (lVar2 == 0) {
LAB_10464358c:
        lVar4 = *(long *)(param_1 + 0x20);
        lVar2 = *(long *)(param_2 + 0x20);
        if (lVar4 == 0) {
          if (lVar2 == 0) {
LAB_1046435e4:
            if (param_1[0x30] == 1) {
              if (param_2[0x30] != 1) goto LAB_1046439a8;
            }
            else {
              bVar3 = 0;
              if ((param_2[0x30] == 1) || (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)))
              goto LAB_1046439ac;
            }
            lVar4 = *(long *)(param_1 + 0x40);
            lVar2 = *(long *)(param_2 + 0x40);
            if (lVar4 == 0) {
              if (lVar2 == 0) {
LAB_104643674:
                if (param_1[0x50] == 1) {
                  if (param_2[0x50] != 1) goto LAB_1046439a8;
                }
                else {
                  bVar3 = 0;
                  if ((param_2[0x50] == 1) ||
                     (*(double *)(param_1 + 0x48) != *(double *)(param_2 + 0x48)))
                  goto LAB_1046439ac;
                }
                bVar1 = param_2[0x51];
                if (param_1[0x51] == 2) {
                  if (bVar1 != 2) goto LAB_1046439a8;
                }
                else {
                  bVar3 = 0;
                  if ((bVar1 == 2) || (((param_1[0x51] ^ bVar1) & 1) != 0)) goto LAB_1046439ac;
                }
                bVar1 = param_2[0x52];
                if (param_1[0x52] == 2) {
                  if (bVar1 != 2) goto LAB_1046439a8;
                }
                else {
                  bVar3 = 0;
                  if ((bVar1 == 2) || (((param_1[0x52] ^ bVar1) & 1) != 0)) goto LAB_1046439ac;
                }
                if (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58)) {
                  lVar4 = *(long *)(param_1 + 0x68);
                  lVar2 = *(long *)(param_2 + 0x68);
                  if (lVar4 == 0) {
                    if (lVar2 == 0) {
LAB_104643774:
                      if (param_1[0x78] == 1) {
                        if (param_2[0x78] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[0x78] == 1) ||
                           (*(double *)(param_1 + 0x70) != *(double *)(param_2 + 0x70)))
                        goto LAB_1046439ac;
                      }
                      if (param_1[0x88] == 1) {
                        if (param_2[0x88] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[0x88] == 1) ||
                           (*(double *)(param_1 + 0x80) != *(double *)(param_2 + 0x80)))
                        goto LAB_1046439ac;
                      }
                      if (param_1[0x98] == 1) {
                        if (param_2[0x98] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[0x98] == 1) ||
                           (*(double *)(param_1 + 0x90) != *(double *)(param_2 + 0x90)))
                        goto LAB_1046439ac;
                      }
                      if (param_1[0xa8] == 1) {
                        if (param_2[0xa8] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[0xa8] == 1) ||
                           (*(double *)(param_1 + 0xa0) != *(double *)(param_2 + 0xa0)))
                        goto LAB_1046439ac;
                      }
                      if (param_1[0xb8] == 1) {
                        if (param_2[0xb8] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[0xb8] == 1) ||
                           (*(double *)(param_1 + 0xb0) != *(double *)(param_2 + 0xb0)))
                        goto LAB_1046439ac;
                      }
                      if (param_1[200] == 1) {
                        if (param_2[200] != 1) goto LAB_1046439a8;
                      }
                      else {
                        bVar3 = 0;
                        if ((param_2[200] == 1) ||
                           (*(double *)(param_1 + 0xc0) != *(double *)(param_2 + 0xc0)))
                        goto LAB_1046439ac;
                      }
                      uVar5 = *(ulong *)(param_1 + 0xd0);
                      if (uVar5 == 0) {
                        if (*(long *)(param_2 + 0xd0) == 0) goto LAB_104643900;
                      }
                      else if ((*(long *)(param_2 + 0xd0) != 0) &&
                              (func_0x00010142cfc4(), (uVar5 & 1) != 0)) {
LAB_104643900:
                        if (param_1[0xe0] == 1) {
                          if (param_2[0xe0] != 1) goto LAB_1046439a8;
                        }
                        else {
                          bVar3 = 0;
                          if ((param_2[0xe0] == 1) ||
                             (*(double *)(param_1 + 0xd8) != *(double *)(param_2 + 0xd8)))
                          goto LAB_1046439ac;
                        }
                        if (param_1[0xf0] == 1) {
                          if (param_2[0xf0] != 1) goto LAB_1046439a8;
                        }
                        else {
                          bVar3 = 0;
                          if ((param_2[0xf0] == 1) ||
                             (*(double *)(param_1 + 0xe8) != *(double *)(param_2 + 0xe8)))
                          goto LAB_1046439ac;
                        }
                        if ((((param_1[0xf1] ^ param_2[0xf1]) & 1) == 0) &&
                           (((param_1[0xf2] ^ param_2[0xf2]) & 1) == 0)) {
                          bVar3 = param_1[0xf3] ^ param_2[0xf3] ^ 1;
                          goto LAB_1046439ac;
                        }
                      }
                    }
                  }
                  else if (lVar2 != 0) {
                    uVar5 = *(ulong *)(param_1 + 0x60);
                    if (((uVar5 == *(ulong *)(param_2 + 0x60)) && (lVar4 == lVar2)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar5,lVar4,*(ulong *)(param_2 + 0x60),lVar2,0), (uVar5 & 1) != 0
                       )) goto LAB_104643774;
                  }
                }
              }
            }
            else if (lVar2 != 0) {
              uVar5 = *(ulong *)(param_1 + 0x38);
              if (((uVar5 == *(ulong *)(param_2 + 0x38)) && (lVar4 == lVar2)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar5,lVar4,*(ulong *)(param_2 + 0x38),lVar2,0), (uVar5 & 1) != 0))
              goto LAB_104643674;
            }
          }
        }
        else if (lVar2 != 0) {
          uVar5 = *(ulong *)(param_1 + 0x18);
          if (((uVar5 == *(ulong *)(param_2 + 0x18)) && (lVar4 == lVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar5,lVar4,*(ulong *)(param_2 + 0x18),lVar2,0), (uVar5 & 1) != 0))
          goto LAB_1046435e4;
        }
      }
    }
    else if (lVar2 != 0) {
      uVar5 = *(ulong *)(param_1 + 8);
      if (((uVar5 == *(ulong *)(param_2 + 8)) && (lVar4 == lVar2)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar5,lVar4,*(ulong *)(param_2 + 8),lVar2,0), (uVar5 & 1) != 0))
      goto LAB_10464358c;
    }
  }
LAB_1046439a8:
  bVar3 = 0;
LAB_1046439ac:
  return bVar3 & 1;
}



/* Entry: 104643a44; end: 104643b7f;  */

undefined1 * FUN_104643a44(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  *(undefined2 *)(param_1 + 0x51) = *(undefined2 *)(param_2 + 0x51);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  param_1[0x78] = param_2[0x78];
  param_1[0x88] = param_2[0x88];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x98] = param_2[0x98];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  param_1[0xa8] = param_2[0xa8];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  param_1[0xb8] = param_2[0xb8];
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  param_1[200] = param_2[200];
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  param_1[0xe0] = param_2[0xe0];
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  param_1[0xf0] = param_2[0xf0];
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = param_2[0xf2];
  param_1[0xf3] = param_2[0xf3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 104643b80; end: 104643d1b;  */

undefined1 * FUN_104643b80(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x78] = param_2[0x78];
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x98] = param_2[0x98];
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  param_1[0xa8] = param_2[0xa8];
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0xb8] = param_2[0xb8];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[200] = param_2[200];
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  param_1[0xe0] = param_2[0xe0];
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  param_1[0xf0] = param_2[0xf0];
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = param_2[0xf2];
  param_1[0xf3] = param_2[0xf3];
  return param_1;
}



/* Entry: 104643d1c; end: 104643d67;  */

void FUN_104643d1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  uVar4 = param_2[0x1b];
  uVar3 = param_2[0x1a];
  uVar6 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar5;
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  return;
}



/* Entry: 104643d68; end: 104643eab;  */

undefined1 * FUN_104643d68(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  *(undefined2 *)(param_1 + 0x51) = *(undefined2 *)(param_2 + 0x51);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  param_1[0x78] = param_2[0x78];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  param_1[0x98] = param_2[0x98];
  param_1[0xa8] = param_2[0xa8];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0xb8] = param_2[0xb8];
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  param_1[200] = param_2[200];
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  param_1[0xe0] = param_2[0xe0];
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  param_1[0xf0] = param_2[0xf0];
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = param_2[0xf2];
  param_1[0xf3] = param_2[0xf3];
  return param_1;
}



/* Entry: 104643eac; end: 104643faf;  */

int FUN_104643eac(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3d] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104643fb0; end: 104644007;  */

uint FUN_104643fb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_104644008(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104644008; end: 1046440d3;  */

bool FUN_104644008(double *param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  ushort uVar5;
  double dVar6;
  
  dVar4 = *param_1;
  dVar2 = param_1[1];
  if (*(char *)(param_1 + 6) == '\0') {
    if ((*(char *)(param_2 + 6) == '\0') && (*param_2 == dVar4)) {
      dVar4 = param_1[2];
      dVar6 = param_2[2];
      bVar3 = false;
      if (!NAN(dVar2) && !NAN(param_2[1])) {
        bVar3 = dVar2 == param_2[1];
      }
LAB_104644098:
      bVar1 = false;
      if (dVar4 == dVar6) {
        bVar1 = bVar3;
      }
      return bVar1;
    }
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if ((*(char *)(param_2 + 6) == '\x01') &&
       (uVar5 = NEON_uminv(CONCAT26(-(ushort)(param_2[3] == param_1[3]),
                                    CONCAT24(-(ushort)(param_2[2] == param_1[2]),
                                             CONCAT22(-(ushort)(param_2[1] == dVar2),
                                                      -(ushort)(*param_2 == dVar4)))),2),
       (uVar5 & 1) != 0)) {
      dVar4 = param_1[5];
      dVar6 = param_2[5];
      bVar3 = param_1[4] == param_2[4];
      goto LAB_104644098;
    }
  }
  else if (*(char *)(param_2 + 6) == '\x02') {
    return dVar2 == param_2[1] && SUB84(dVar4,0) == *(int *)param_2;
  }
  return false;
}



/* Entry: 1046440d4; end: 1046440ff;  */

long FUN_1046440d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104644100; end: 1046441bf;  */

int FUN_104644100(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046441c0; end: 104644207;  */

uint FUN_1046441c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1046442cc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104644208; end: 10464428b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104644208(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_30;
  lVar2 = 0;
  FUN_10465ea2c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b710);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308b718);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11308b720) = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  puRam0000000113814f70 = (undefined1 *)plVar4;
  return;
}



/* Entry: 10464428c; end: 1046442cb; +[SCWebviewAttributionInfo identity] */

void FUN_10464428c(void)

{
  if (lRam000000011308b1f0 != -1) {
    _swift_once(0x11308b1f0,FUN_104644208);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113814f70);
  return;
}



/* Entry: 1046442cc; end: 10464443b;  */

bool FUN_1046442cc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  if (uVar2 == 0) {
    if (uVar1 == 0) {
LAB_10464437c:
      return (int)param_1[4] == (int)param_2[4];
    }
  }
  else if (uVar1 != 0) {
    uVar3 = param_1[2];
    if (((uVar3 == param_2[2]) && (uVar2 == uVar1)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[2],uVar1,0), (uVar3 & 1) != 0)) goto LAB_10464437c;
  }
  return false;
}



/* Entry: 10464443c; end: 1046444af;  */

undefined8 * FUN_10464443c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1046444b0; end: 1046444fb;  */

undefined8 * FUN_1046444b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1046444fc; end: 1046445c3;  */

int FUN_1046444fc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046445c4; end: 1046445f7; +[SCWebBrowserEventDictKeys browserMetadata] */

void FUN_1046445c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d726573776f7262,0xef61746164617465);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046445f8; end: 10464462b; +[SCWebBrowserEventDictKeys optInPreload] */

void FUN_1046445f8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x705f6e695f74706f,0xee0064616f6c6572);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10464462c; end: 10464465f; +[SCWebBrowserEventDictKeys enablePrefetch] */

void FUN_10464462c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x705f656c62616e65,0xef68637465666572);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644660; end: 10464468b; +[SCWebBrowserEventDictKeys didReceiveGAHit] */

void FUN_104644660(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f208e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10464468c; end: 1046446b7; +[SCWebBrowserEventDictKeys didTapOpenInBrowser] */

void FUN_10464468c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f208e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046446b8; end: 1046446e3; +[SCWebBrowserEventDictKeys didInterceptPixelRequest] */

void FUN_1046446b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f208e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046446e4; end: 10464470f; +[SCWebBrowserEventDictKeys didInitialRedirect] */

void FUN_1046446e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f208e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644710; end: 10464473b; +[SCWebBrowserEventDictKeys didLoadPrefetchHints] */

void FUN_104644710(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f208ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10464473c; end: 104644767; +[SCWebBrowserEventDictKeys didLoadPrefetchedHTML] */

void FUN_10464473c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f208ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644768; end: 104644793; +[SCWebBrowserEventDictKeys willLoadURLInBrowser] */

void FUN_104644768(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f208ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644794; end: 1046447bf; +[SCWebBrowserEventDictKeys didLoadURLInBrowser] */

void FUN_104644794(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f208f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046447c0; end: 1046447eb; +[SCWebBrowserEventDictKeys didStartNavigation] */

void FUN_1046447c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f208f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046447ec; end: 104644817; +[SCWebBrowserEventDictKeys didReceiveInitialResponse] */

void FUN_1046447ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f208f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644818; end: 104644843; +[SCWebBrowserEventDictKeys didCommitNavigation] */

void FUN_104644818(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f208f60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644844; end: 104644877; +[SCWebBrowserEventDictKeys htmlDownloaded] */

void FUN_104644844(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x776f645f6c6d7468,0xef646564616f6c6e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644878; end: 1046448a3; +[SCWebBrowserEventDictKeys domContentLoaded] */

void FUN_104644878(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f208f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046448a4; end: 1046448cf; +[SCWebBrowserEventDictKeys firstContentfulPaint] */

void FUN_1046448a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f208fa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046448d0; end: 1046448ff; +[SCWebBrowserEventDictKeys fullyLoaded] */

void FUN_1046448d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x616f6c5f6c6c7566,0xeb00000000646564);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644900; end: 10464492b; +[SCWebBrowserEventDictKeys didFinishInitialNavigation] */

void FUN_104644900(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f208fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10464492c; end: 104644957; +[SCWebBrowserEventDictKeys didFinalizePerformanceMetrics] */

void FUN_10464492c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f208fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644958; end: 104644983; +[SCWebBrowserEventDictKeys onEvent] */

void FUN_104644958(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f209010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644984; end: 1046449af; +[SCWebBrowserEventDictKeys interimPerformanceMetricsUpdate] */

void FUN_104644984(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f209030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046449b0; end: 1046449db; +[SCWebBrowserEventDictKeys urlLoadOnCTATap] */

void FUN_1046449b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f209050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046449dc; end: 104644a07; +[SCWebBrowserEventDictKeys didReceivePerformanceEntries] */

void FUN_1046449dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f209090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644a08; end: 104644a33; +[SCWebBrowserEventDictKeys didReceiveWebviewErrors] */

void FUN_104644a08(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2090b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644a34; end: 104644a5f; +[SCWebBrowserEventDictKeys exbInAppHtmlUrlResolveStart] */

void FUN_104644a34(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f2090d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644a60; end: 104644a8b; +[SCWebBrowserEventDictKeys exbInAppHtmlUrlResolveSuccess] */

void FUN_104644a60(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f209100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644a8c; end: 104644ab7; +[SCWebBrowserEventDictKeys exbInAppHtmlUrlResolveNetworkError] */

void FUN_104644a8c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644ab8; end: 104644ae3; +[SCWebBrowserEventDictKeys exbInAppHtmlUrlResolveRedirectHintsMismatch] */

void FUN_104644ab8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x800000010f209160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644ae4; end: 104644b13; +[SCWebBrowserEventDictKeys exbSubNav] */

void FUN_104644ae4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f6275735f627865,0xeb0000000076616e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644b14; end: 104644b3f; +[SCWebBrowserEventDictKeys detectCidParamsDrop] */

void FUN_104644b14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f2091a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644b40; end: 104644b6b; +[SCWebBrowserEventDictKeys attemptDeeplink] */

void FUN_104644b40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2091c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644b6c; end: 104644b97; +[SCWebBrowserEventDictKeys deeplinkSucceed] */

void FUN_104644b6c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2091e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644b98; end: 104644bcb; +[SCWebBrowserEventDictKeys exbTriggered] */

void FUN_104644b98(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676972745f627865,0xed00006465726567);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644bcc; end: 104644bf7; +[SCWebBrowserEventDictKeys webViewPartiallyAppear] */

void FUN_104644bcc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f209200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644bf8; end: 104644c23; +[SCWebBrowserEventDictKeys webViewFullyAppear] */

void FUN_104644bf8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644c24; end: 104644c4f; +[SCWebBrowserEventDictKeys browserInteractiveIndex] */

void FUN_104644c24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f209240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104644c50; end: 104644c83; +[SCWebBrowserEventDictKeys deeplinkFailed] */

void FUN_104644c50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6e696c70656564,0xef64656c6961665f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


