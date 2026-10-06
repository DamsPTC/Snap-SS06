/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008ce210; end: 1008ce217;  */

void FUN_1008ce210(void)

{
  return;
}



/* Entry: 1008ce218; end: 1008ce2a7; -[SCCurrentPageEvent isEqual:] */

uint FUN_1008ce218(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1008ce2a8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x0001000bc2e0(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1008ce2a8; end: 1008cf41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008ce2a8(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long unaff_x20;
  code *pcVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = 0;
  func_0x000107c5eea4();
  lStack_98 = *(long *)(lVar9 + -8);
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d373d0;
  puStack_c0 = puVar15;
  FUN_1000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar15 = puVar15 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_c8 = puVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = puVar15 + -extraout_x12;
  puStack_b0 = puVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = puVar15 + -extraout_x12_00;
  puStack_d8 = puVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = puVar15 + -extraout_x12_01;
  puStack_d0 = puVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = 0x112d373d8;
  puStack_b8 = puVar15 + -extraout_x12_02;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = (long)(puVar15 + -extraout_x12_02) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar9 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar20 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_e8 = lVar22 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (lVar22 - extraout_x12_06) - extraout_x12_07;
  lStack_e0 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = lVar16 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar18 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar24 = lVar16 - extraout_x12_10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = uVar24 - extraout_x12_11;
  FUN_1000bc298(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar13 = 0x112d387f8;
    puVar14 = &UNK_10d902650;
    puVar15 = auStack_80;
LAB_1008ce5d4:
    func_0x0001000bc2e0(puVar15,uVar13,puVar14);
  }
  else {
    plVar10 = &lStack_88;
    func_0x000107c6147c(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    lVar6 = _DAT_1130978e8;
    lVar5 = _DAT_1130978c0;
    lVar8 = _DAT_113097848;
    if (((ulong)plVar10 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_113097828);
      if (bVar2 != *(byte *)(lStack_88 + _DAT_113097828)) goto LAB_1008cf3f0;
      if (1 < bVar2) {
        if (bVar2 == 2) {
          cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_1130978a8) + 1);
          if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978a8) + 1) == '\x01') {
            if (cVar1 == '\x01') {
LAB_1008ce6c4:
              cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_1130978b0) + 1);
              if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978b0) + 1) == '\x01') {
                if (cVar1 == '\x01') {
LAB_1008ce7d4:
                  cVar1 = *(char *)((double *)(lStack_88 + _DAT_1130978b8) + 1);
                  if (*(char *)((double *)(unaff_x20 + _DAT_1130978b8) + 1) == '\x01') {
                    if (cVar1 == '\x01') {
LAB_1008ce98c:
                      FUN_1000bc298(lStack_88 + _DAT_1130978c0,lVar22,0x112d373d8,&UNK_10d9014c0);
                      puVar15 = puStack_b0;
                      iVar4 = *(int *)(lStack_a8 + 0x30);
                      FUN_1000bc298(unaff_x20 + lVar5,puStack_b0,0x112d373d8,&UNK_10d9014c0);
                      FUN_1000bc298(lVar22,puVar15 + iVar4,0x112d373d8,&UNK_10d9014c0);
                      lVar8 = lStack_a0;
                      pcVar17 = *(code **)(lStack_98 + 0x30);
                      puVar11 = puVar15;
                      (*pcVar17)(puVar15,1,lStack_a0);
                      if ((int)puVar11 == 1) {
                        func_0x000107c61170(lStack_88);
                        func_0x0001000bc2e0(lVar22,0x112d373d8,&UNK_10d9014c0);
                        puVar11 = puVar15 + iVar4;
LAB_1008cec68:
                        (*pcVar17)(puVar11,1,lVar8);
                        if ((int)puVar11 == 1) {
                          func_0x0001000bc2e0(puVar15,0x112d373d8,&UNK_10d9014c0);
                          uVar19 = 1;
                          goto LAB_1008cf3f8;
                        }
                      }
                      else {
                        FUN_1000bc298(puVar15,lVar21,0x112d373d8,&UNK_10d9014c0);
                        puVar11 = puVar15 + iVar4;
                        (*pcVar17)(puVar11,1,lVar8);
                        lVar9 = lStack_98;
                        puVar7 = puStack_c0;
                        if ((int)puVar11 != 1) {
                          puVar11 = puStack_c0;
                          (**(code **)(lStack_98 + 0x20))(puStack_c0,puVar15 + iVar4,lVar8);
                          func_0x000100df4c40();
                          lVar16 = lVar21;
                          func_0x000107c5fab8(lVar21,puVar7,lVar8,puVar11);
                          uVar19 = (uint)lVar16;
                          func_0x000107c61170(lStack_88);
                          pcVar17 = *(code **)(lVar9 + 8);
                          (*pcVar17)(puVar7,lVar8);
                          func_0x0001000bc2e0(lVar22,0x112d373d8,&UNK_10d9014c0);
                          (*pcVar17)(lVar21,lVar8);
LAB_1008cefa4:
                          func_0x0001000bc2e0(puVar15,0x112d373d8,&UNK_10d9014c0);
                          goto LAB_1008cf3f8;
                        }
                        func_0x000107c61170(lStack_88);
                        func_0x0001000bc2e0(lVar22,0x112d373d8,&UNK_10d9014c0);
                        pcVar17 = *(code **)(lStack_98 + 8);
                        lVar9 = lVar21;
LAB_1008ceebc:
                        (*pcVar17)(lVar9,lVar8);
                      }
                      uVar13 = 0x112d373d0;
                      puVar14 = &UNK_10d90f8f0;
                      goto LAB_1008ce5d4;
                    }
                  }
                  else if ((cVar1 != '\x01') &&
                          (*(double *)(unaff_x20 + _DAT_1130978b8) ==
                           *(double *)(lStack_88 + _DAT_1130978b8))) goto LAB_1008ce98c;
                }
              }
              else if ((cVar1 != '\x01') &&
                      ((int)*(undefined8 *)(unaff_x20 + _DAT_1130978b0) ==
                       (int)*(undefined8 *)(lStack_88 + _DAT_1130978b0))) goto LAB_1008ce7d4;
            }
          }
          else if ((cVar1 != '\x01') &&
                  ((int)*(undefined8 *)(unaff_x20 + _DAT_1130978a8) ==
                   (int)*(undefined8 *)(lStack_88 + _DAT_1130978a8))) goto LAB_1008ce6c4;
        }
        else {
          cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_1130978c8) + 1);
          if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978c8) + 1) == '\x01') {
            if (cVar1 == '\x01') {
LAB_1008ce74c:
              cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_1130978d0) + 1);
              if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978d0) + 1) == '\x01') {
                if (cVar1 == '\x01') {
LAB_1008ce85c:
                  cVar1 = *(char *)((double *)(lStack_88 + _DAT_1130978d8) + 1);
                  if (*(char *)((double *)(unaff_x20 + _DAT_1130978d8) + 1) == '\x01') {
                    if (cVar1 == '\x01') {
LAB_1008cea9c:
                      cVar1 = *(char *)((double *)(lStack_88 + _DAT_1130978e0) + 1);
                      if (*(char *)((double *)(unaff_x20 + _DAT_1130978e0) + 1) == '\x01') {
                        if (cVar1 == '\x01') {
LAB_1008cebb4:
                          FUN_1000bc298(lStack_88 + _DAT_1130978e8,lVar20,0x112d373d8,&UNK_10d9014c0
                                       );
                          puVar15 = puStack_c8;
                          iVar4 = *(int *)(lStack_a8 + 0x30);
                          FUN_1000bc298(unaff_x20 + lVar6,puStack_c8,0x112d373d8,&UNK_10d9014c0);
                          FUN_1000bc298(lVar20,puVar15 + iVar4,0x112d373d8,&UNK_10d9014c0);
                          lVar8 = lStack_a0;
                          pcVar17 = *(code **)(lStack_98 + 0x30);
                          puVar11 = puVar15;
                          (*pcVar17)(puVar15,1,lStack_a0);
                          if ((int)puVar11 != 1) {
                            FUN_1000bc298(puVar15,lVar9,0x112d373d8,&UNK_10d9014c0);
                            puVar11 = puVar15 + iVar4;
                            (*pcVar17)(puVar11,1,lVar8);
                            lVar16 = lStack_98;
                            puVar7 = puStack_c0;
                            if ((int)puVar11 != 1) {
                              puVar11 = puStack_c0;
                              (**(code **)(lStack_98 + 0x20))(puStack_c0,puVar15 + iVar4,lVar8);
                              func_0x000100df4c40();
                              lVar21 = lVar9;
                              func_0x000107c5fab8(lVar9,puVar7,lVar8,puVar11);
                              uVar19 = (uint)lVar21;
                              func_0x000107c61170(lStack_88);
                              pcVar17 = *(code **)(lVar16 + 8);
                              (*pcVar17)(puVar7,lVar8);
                              func_0x0001000bc2e0(lVar20,0x112d373d8,&UNK_10d9014c0);
                              (*pcVar17)(lVar9,lVar8);
                              goto LAB_1008cefa4;
                            }
                            func_0x000107c61170(lStack_88);
                            func_0x0001000bc2e0(lVar20,0x112d373d8,&UNK_10d9014c0);
                            pcVar17 = *(code **)(lStack_98 + 8);
                            goto LAB_1008ceebc;
                          }
                          func_0x000107c61170(lStack_88);
                          func_0x0001000bc2e0(lVar20,0x112d373d8,&UNK_10d9014c0);
                          puVar11 = puVar15 + iVar4;
                          goto LAB_1008cec68;
                        }
                      }
                      else if ((cVar1 != '\x01') &&
                              (*(double *)(unaff_x20 + _DAT_1130978e0) ==
                               *(double *)(lStack_88 + _DAT_1130978e0))) goto LAB_1008cebb4;
                    }
                  }
                  else if ((cVar1 != '\x01') &&
                          (*(double *)(unaff_x20 + _DAT_1130978d8) ==
                           *(double *)(lStack_88 + _DAT_1130978d8))) goto LAB_1008cea9c;
                }
              }
              else if ((cVar1 != '\x01') &&
                      ((int)*(undefined8 *)(unaff_x20 + _DAT_1130978d0) ==
                       (int)*(undefined8 *)(lStack_88 + _DAT_1130978d0))) goto LAB_1008ce85c;
            }
          }
          else if ((cVar1 != '\x01') &&
                  ((int)*(undefined8 *)(unaff_x20 + _DAT_1130978c8) ==
                   (int)*(undefined8 *)(lStack_88 + _DAT_1130978c8))) goto LAB_1008ce74c;
        }
        goto LAB_1008cf3f0;
      }
      if (bVar2 == 0) {
        cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_113097830) + 1);
        if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097830) + 1) == '\x01') {
          if (cVar1 == '\x01') {
LAB_1008ce680:
            cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_113097838) + 1);
            if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097838) + 1) == '\x01') {
              if (cVar1 == '\x01') {
LAB_1008ce790:
                cVar1 = *(char *)((double *)(lStack_88 + _DAT_113097840) + 1);
                if (*(char *)((double *)(unaff_x20 + _DAT_113097840) + 1) == '\x01') {
                  if (cVar1 == '\x01') {
LAB_1008ce8a0:
                    FUN_1000bc298(lStack_88 + _DAT_113097848,lVar25,0x112d373d8,&UNK_10d9014c0);
                    puVar15 = puStack_b8;
                    iVar4 = *(int *)(lStack_a8 + 0x30);
                    FUN_1000bc298(unaff_x20 + lVar8,puStack_b8,0x112d373d8,&UNK_10d9014c0);
                    FUN_1000bc298(lVar25,puVar15 + iVar4,0x112d373d8,&UNK_10d9014c0);
                    lVar9 = lStack_a0;
                    pcVar17 = *(code **)(lStack_98 + 0x30);
                    puVar11 = puVar15;
                    (*pcVar17)(puVar15,1,lStack_a0);
                    if ((int)puVar11 == 1) {
                      func_0x0001000bc2e0(lVar25,0x112d373d8,&UNK_10d9014c0);
                      puVar11 = puVar15 + iVar4;
                      (*pcVar17)(puVar11,1,lVar9);
                      if ((int)puVar11 == 1) {
                        func_0x0001000bc2e0(puVar15,0x112d373d8,&UNK_10d9014c0);
                        lVar9 = _DAT_113097850;
LAB_1008ced90:
                        bVar2 = *(byte *)(unaff_x20 + lVar9);
                        bVar3 = *(byte *)(lStack_88 + lVar9);
                        func_0x000107c61170(lStack_88);
                        uVar19 = 0;
                        if (bVar3 == 2) {
                          uVar19 = (uint)(bVar2 == 2);
                        }
                        if ((bVar2 != 2) && (bVar3 != 2)) {
                          uVar19 = (bVar2 ^ bVar3) ^ 1;
                        }
                        goto LAB_1008cf3f8;
                      }
                      func_0x000107c61170(lStack_88);
                    }
                    else {
                      FUN_1000bc298(puVar15,uVar24,0x112d373d8,&UNK_10d9014c0);
                      puVar11 = puVar15 + iVar4;
                      (*pcVar17)(puVar11,1,lVar9);
                      lVar8 = lStack_98;
                      puVar7 = puStack_c0;
                      if ((int)puVar11 != 1) {
                        puVar11 = puStack_c0;
                        (**(code **)(lStack_98 + 0x20))(puStack_c0,puVar15 + iVar4,lVar9);
                        func_0x000100df4c40();
                        uVar12 = uVar24;
                        func_0x000107c5fab8(uVar24,puVar7,lVar9,puVar11);
                        pcVar17 = *(code **)(lVar8 + 8);
                        (*pcVar17)(puVar7,lVar9);
                        func_0x0001000bc2e0(lVar25,0x112d373d8,&UNK_10d9014c0);
                        (*pcVar17)(uVar24,lVar9);
                        func_0x0001000bc2e0(puVar15,0x112d373d8,&UNK_10d9014c0);
                        lVar9 = _DAT_113097850;
joined_r0x0001008cf3dc:
                        if ((uVar12 & 1) != 0) goto LAB_1008ced90;
                        goto LAB_1008cf3f0;
                      }
                      func_0x000107c61170(lStack_88);
                      func_0x0001000bc2e0(lVar25,0x112d373d8,&UNK_10d9014c0);
                      (**(code **)(lStack_98 + 8))(uVar24,lVar9);
                    }
                    uVar13 = 0x112d373d0;
                    puVar14 = &UNK_10d90f8f0;
                    goto LAB_1008ce5d4;
                  }
                }
                else if ((cVar1 != '\x01') &&
                        (*(double *)(unaff_x20 + _DAT_113097840) ==
                         *(double *)(lStack_88 + _DAT_113097840))) goto LAB_1008ce8a0;
              }
            }
            else if ((cVar1 != '\x01') &&
                    ((int)*(undefined8 *)(unaff_x20 + _DAT_113097838) ==
                     (int)*(undefined8 *)(lStack_88 + _DAT_113097838))) goto LAB_1008ce790;
          }
        }
        else if ((cVar1 != '\x01') &&
                ((int)*(undefined8 *)(unaff_x20 + _DAT_113097830) ==
                 (int)*(undefined8 *)(lStack_88 + _DAT_113097830))) goto LAB_1008ce680;
      }
      else {
        cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_113097858) + 1);
        if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097858) + 1) == '\x01') {
          if (cVar1 == '\x01') {
LAB_1008ce708:
            cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_113097860) + 1);
            if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097860) + 1) == '\x01') {
              if (cVar1 == '\x01') {
LAB_1008ce818:
                cVar1 = *(char *)((undefined8 *)(lStack_88 + _DAT_113097868) + 1);
                if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097868) + 1) == '\x01') {
                  if (cVar1 == '\x01') {
LAB_1008cea58:
                    cVar1 = *(char *)((double *)(lStack_88 + _DAT_113097870) + 1);
                    if (*(char *)((double *)(unaff_x20 + _DAT_113097870) + 1) == '\x01') {
                      if (cVar1 == '\x01') {
LAB_1008cecac:
                        cVar1 = *(char *)((double *)(lStack_88 + _DAT_113097878) + 1);
                        if (*(char *)((double *)(unaff_x20 + _DAT_113097878) + 1) == '\x01') {
                          if (cVar1 == '\x01') {
LAB_1008ceef0:
                            uVar24 = *(ulong *)(unaff_x20 + _DAT_113097880);
                            if (uVar24 == 0) {
                              if (*(long *)(lStack_88 + _DAT_113097880) == 0) goto LAB_1008cefbc;
                            }
                            else if ((*(long *)(lStack_88 + _DAT_113097880) != 0) &&
                                    (func_0x00010142cfc4(), (uVar24 & 1) != 0)) {
LAB_1008cefbc:
                              lVar9 = _DAT_113097888;
                              FUN_1000bc298(lStack_88 + _DAT_113097888,lVar16,0x112d373d8,
                                            &UNK_10d9014c0);
                              puVar15 = puStack_d0;
                              iVar4 = *(int *)(lStack_a8 + 0x30);
                              FUN_1000bc298(unaff_x20 + lVar9,puStack_d0,0x112d373d8,&UNK_10d9014c0)
                              ;
                              FUN_1000bc298(lVar16,puVar15 + iVar4,0x112d373d8,&UNK_10d9014c0);
                              lVar9 = lStack_a0;
                              pcVar17 = *(code **)(lStack_98 + 0x30);
                              puVar11 = puVar15;
                              (*pcVar17)(puVar15,1,lStack_a0);
                              if ((int)puVar11 == 1) {
                                func_0x0001000bc2e0(lVar16,0x112d373d8,&UNK_10d9014c0);
                                puVar15 = puVar15 + iVar4;
                                (*pcVar17)(puVar15,1,lVar9);
                                if ((int)puVar15 != 1) {
                                  func_0x000107c61170(lStack_88);
LAB_1008cf100:
                                  uVar13 = 0x112d373d0;
                                  puVar14 = &UNK_10d90f8f0;
                                  puVar15 = puStack_d0;
                                  goto LAB_1008ce5d4;
                                }
                                func_0x0001000bc2e0(puStack_d0,0x112d373d8,&UNK_10d9014c0);
LAB_1008cf1a8:
                                lVar8 = lStack_e0;
                                lVar9 = _DAT_113097898;
                                cVar1 = *(char *)((double *)(lStack_88 + _DAT_113097890) + 1);
                                if (*(char *)((double *)(unaff_x20 + _DAT_113097890) + 1) == '\x01')
                                {
                                  if (cVar1 == '\x01') {
LAB_1008cf1f0:
                                    FUN_1000bc298(lStack_88 + _DAT_113097898,lStack_e0,0x112d373d8,
                                                  &UNK_10d9014c0);
                                    puVar11 = puStack_d8;
                                    iVar4 = *(int *)(lStack_a8 + 0x30);
                                    FUN_1000bc298(unaff_x20 + lVar9,puStack_d8,0x112d373d8,
                                                  &UNK_10d9014c0);
                                    FUN_1000bc298(lVar8,puVar11 + iVar4,0x112d373d8,&UNK_10d9014c0);
                                    (*pcVar17)(puVar11,1,lStack_a0);
                                    puVar15 = puStack_d8;
                                    if ((int)puVar11 != 1) {
                                      FUN_1000bc298(puStack_d8,uStack_e8,0x112d373d8,&UNK_10d9014c0)
                                      ;
                                      puVar15 = puVar15 + iVar4;
                                      (*pcVar17)(puVar15,1,lStack_a0);
                                      lVar8 = lStack_98;
                                      lVar9 = lStack_a0;
                                      puVar7 = puStack_c0;
                                      puVar11 = puStack_d8;
                                      if ((int)puVar15 == 1) {
                                        func_0x000107c61170(lStack_88);
                                        func_0x0001000bc2e0(lStack_e0,0x112d373d8,&UNK_10d9014c0);
                                        (**(code **)(lStack_98 + 8))(uStack_e8,lStack_a0);
LAB_1008cf334:
                                        uVar13 = 0x112d373d0;
                                        puVar14 = &UNK_10d90f8f0;
                                        puVar15 = puStack_d8;
                                        goto LAB_1008ce5d4;
                                      }
                                      puVar15 = puStack_c0;
                                      (**(code **)(lStack_98 + 0x20))
                                                (puStack_c0,puStack_d8 + iVar4,lStack_a0);
                                      func_0x000100df4c40();
                                      uVar18 = uStack_e8;
                                      uVar12 = uStack_e8;
                                      func_0x000107c5fab8(uStack_e8,puVar7,lVar9,puVar15);
                                      pcVar17 = *(code **)(lVar8 + 8);
                                      (*pcVar17)(puVar7,lVar9);
                                      func_0x0001000bc2e0(lStack_e0,0x112d373d8,&UNK_10d9014c0);
                                      (*pcVar17)(uVar18,lVar9);
                                      func_0x0001000bc2e0(puVar11,0x112d373d8,&UNK_10d9014c0);
                                      lVar9 = _DAT_1130978a0;
                                      goto joined_r0x0001008cf3dc;
                                    }
                                    func_0x0001000bc2e0(lStack_e0,0x112d373d8,&UNK_10d9014c0);
                                    puVar15 = puStack_d8 + iVar4;
                                    (*pcVar17)(puVar15,1,lStack_a0);
                                    if ((int)puVar15 != 1) {
                                      func_0x000107c61170(lStack_88);
                                      goto LAB_1008cf334;
                                    }
                                    func_0x0001000bc2e0(puStack_d8,0x112d373d8,&UNK_10d9014c0);
                                    lVar9 = _DAT_1130978a0;
                                    goto LAB_1008ced90;
                                  }
                                }
                                else if ((cVar1 != '\x01') &&
                                        (*(double *)(unaff_x20 + _DAT_113097890) ==
                                         *(double *)(lStack_88 + _DAT_113097890)))
                                goto LAB_1008cf1f0;
                              }
                              else {
                                FUN_1000bc298(puVar15,uVar18,0x112d373d8,&UNK_10d9014c0);
                                puVar15 = puVar15 + iVar4;
                                (*pcVar17)(puVar15,1,lVar9);
                                lVar8 = lStack_98;
                                lVar9 = lStack_a0;
                                puVar7 = puStack_c0;
                                puVar11 = puStack_d0;
                                if ((int)puVar15 == 1) {
                                  func_0x000107c61170(lStack_88);
                                  func_0x0001000bc2e0(lVar16,0x112d373d8,&UNK_10d9014c0);
                                  (**(code **)(lStack_98 + 8))(uVar18,lStack_a0);
                                  goto LAB_1008cf100;
                                }
                                puVar15 = puStack_c0;
                                (**(code **)(lStack_98 + 0x20))
                                          (puStack_c0,puStack_d0 + iVar4,lStack_a0);
                                func_0x000100df4c40();
                                uVar24 = uVar18;
                                func_0x000107c5fab8(uVar18,puVar7,lVar9,puVar15);
                                pcVar23 = *(code **)(lVar8 + 8);
                                (*pcVar23)(puVar7,lVar9);
                                func_0x0001000bc2e0(lVar16,0x112d373d8,&UNK_10d9014c0);
                                (*pcVar23)(uVar18,lVar9);
                                func_0x0001000bc2e0(puVar11,0x112d373d8,&UNK_10d9014c0);
                                if ((uVar24 & 1) != 0) goto LAB_1008cf1a8;
                              }
                            }
                          }
                        }
                        else if ((cVar1 != '\x01') &&
                                (*(double *)(unaff_x20 + _DAT_113097878) ==
                                 *(double *)(lStack_88 + _DAT_113097878))) goto LAB_1008ceef0;
                      }
                    }
                    else if ((cVar1 != '\x01') &&
                            (*(double *)(unaff_x20 + _DAT_113097870) ==
                             *(double *)(lStack_88 + _DAT_113097870))) goto LAB_1008cecac;
                  }
                }
                else if ((cVar1 != '\x01') &&
                        ((int)*(undefined8 *)(unaff_x20 + _DAT_113097868) ==
                         (int)*(undefined8 *)(lStack_88 + _DAT_113097868))) goto LAB_1008cea58;
              }
            }
            else if ((cVar1 != '\x01') &&
                    ((int)*(undefined8 *)(unaff_x20 + _DAT_113097860) ==
                     (int)*(undefined8 *)(lStack_88 + _DAT_113097860))) goto LAB_1008ce818;
          }
        }
        else if ((cVar1 != '\x01') &&
                ((int)*(undefined8 *)(unaff_x20 + _DAT_113097858) ==
                 (int)*(undefined8 *)(lStack_88 + _DAT_113097858))) goto LAB_1008ce708;
      }
LAB_1008cf3f0:
      func_0x000107c61170(lStack_88);
    }
  }
  uVar19 = 0;
LAB_1008cf3f8:
  return uVar19 & 1;
}



/* Entry: 1008cf41c; end: 1008cf613;  */

/* WARNING: Possible PIC construction at 0x0001008cf510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cf520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cf5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cf5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cf5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cf5d0) */
/* WARNING: Removing unreachable block (ram,0x0001008cf5c0) */
/* WARNING: Removing unreachable block (ram,0x0001008cf524) */
/* WARNING: Removing unreachable block (ram,0x0001008cf514) */
/* WARNING: Removing unreachable block (ram,0x0001008cf5e0) */

void FUN_1008cf41c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c61174(in_x6);
  func_0x000107c61174(in_x5);
  func_0x000107c61174(in_x4);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c441b4();
  func_0x000107c61180();
  func_0x000107c441b4();
  func_0x000107c61180();
  func_0x000107c51804(puVar2);
  func_0x000107c61180();
  func_0x000107c4f700(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1008cf614; end: 1008cf617;  */

void FUN_1008cf614(void)

{
  return;
}



/* Entry: 1008cf618; end: 1008cf657; -[SCCurrentPageTrackerImplementation _isAppInForeground:] */

bool FUN_1008cf618(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0x11) {
    return false;
  }
  if (param_3 == 0x1f) {
    return true;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c3dfc0(lVar1);
  return lVar1 == 0;
}



/* Entry: 1008cf658; end: 1008cf663; -[SCTracer putSyncInstant:] */

void FUN_1008cf658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1008cf6c0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1008cf664; end: 1008cf6bf;  */

void FUN_1008cf664(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1008cf6c0; end: 1008cf76b;  */

/* WARNING: Possible PIC construction at 0x0001008cf718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cf71c) */
/* WARNING: Removing unreachable block (ram,0x0001008cf728) */
/* WARNING: Removing unreachable block (ram,0x0001008cf734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cf6c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c3e814(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1008cf76c; end: 1008cfa9f; -[SCPagePageViewReporter _didEndPageViewWithNextPageName:finishedPageName:prevPageName:startTimestamp:endTimestamp:featureStack:startDate:elapsedTime:endDate:finishedPageIsForeground:] */

void FUN_1008cf76c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_11);
  puVar2 = PTR_PTR_1126b75b8;
  func_0x000107c61160(PTR_PTR_1126b75b8);
  func_0x000107c5718c();
  func_0x000107c56a94(puVar2);
  func_0x000107c59570(puVar2);
  func_0x000107c571dc(puVar2);
  func_0x000107c54744(puVar2);
  func_0x000107c55658(puVar2);
  lVar3 = param_7;
  FUN_1008e9710();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c548e4(puVar2);
  }
  if (param_9 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x000107c61180();
    func_0x000107c61174(param_9);
    lVar5 = param_9;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_9);
        }
        puVar6 = PTR_PTR_1126b75c0;
        func_0x000107c61160(PTR_PTR_1126b75c0);
        func_0x000107c548e4();
        func_0x000107c3d798(puVar4);
        func_0x000107c61170(puVar6);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = param_9;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_9);
    func_0x000107c5976c(puVar2);
    func_0x000107c61170(puVar4);
  }
  uVar10 = *(undefined4 *)(param_4 + 0x31);
  NEON_ushl((ulong)CONCAT16((char)((uint)uVar10 >> 0x18),
                            (uint6)CONCAT14((char)((uint)uVar10 >> 0x10),
                                            (uint)CONCAT12((char)((uint)uVar10 >> 8),
                                                           (ushort)(byte)uVar10))),0x4000200030001,2
           );
  func_0x000107c52bb0(puVar2);
  dVar11 = param_3;
  func_0x000107c5a594(param_3,puVar2);
  func_0x000107c57198(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c5c9e4(param_11);
  func_0x000107c41360(dVar11 - param_3,puVar4);
  func_0x000107c61180();
  func_0x000107c571e8(puVar2);
  func_0x000107c61170(puVar4);
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c4bf74();
  func_0x000107c61170(uVar7);
  *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + 1;
  *(undefined8 *)(param_4 + 0x28) = 0xffffffffffffffff;
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1008cfaa0; end: 1008cfab7; -[SCAPagePageView setPage:] */

void FUN_1008cfaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daedd8,7,param_3,0);
  return;
}



/* Entry: 1008cfab8; end: 1008cfacf; -[SCAPagePageView setNextPage:] */

void FUN_1008cfab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e6ed18,6,param_3,0);
  return;
}



/* Entry: 1008cfad0; end: 1008cfae7; -[SCAPagePageView setSourcePage:] */

void FUN_1008cfad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f41d38,0xb,param_3,0);
  return;
}



/* Entry: 1008cfae8; end: 1008cfb3b; -[SCAPagePageView setPageSequenceId:] */

void FUN_1008cfae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1a58,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008cfb3c; end: 1008cfbc3; +[SCUserTraceLogger shared] */

void FUN_1008cfb3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1008cfbc4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam000000011372c460 != -1) {
    FUN_10002a2fc(0x11372c460,&puStack_48);
  }
  uVar1 = uRam000000011372c468;
  func_0x000107c61174(uRam000000011372c468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008cfbc4; end: 1008cfccf;  */

undefined * FUN_1008cfbc4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570();
  func_0x000107c61180();
  ppuStack_48 = &PTR___NSConcreteGlobalBlock_110a583d0;
  ppuStack_40 = &PTR___NSConcreteGlobalBlock_110a583f0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = uVar1;
  puVar9 = puVar2;
  puVar10 = puVar3;
  puVar11 = puVar4;
  func_0x000107c47aec();
  uVar8 = uRam000000011372c468;
  uRam000000011372c468 = uVar5;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar6 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar6;
  }
  func_0x000107c60e78();
  ppuVar7 = &puStack_90;
  pcStack_58 = FUN_1008cfcd0;
  puStack_80 = puVar4;
  puStack_78 = puVar3;
  puStack_70 = puVar2;
  uStack_68 = uVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar11);
  puStack_88 = PTR_PTR_1126fcea0;
  puStack_90 = puVar6;
  func_0x000107c61154(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    func_0x000107c61174(puVar10);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
    *(undefined **)((long)ppuVar7 + 8) = puVar10;
    func_0x000107c61170(uVar8);
    func_0x000107c61174(puVar9);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 0x10);
    *(undefined **)((long)ppuVar7 + 0x10) = puVar9;
    func_0x000107c61170(uVar8);
    func_0x000107c61174(puVar11);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 0x18);
    *(undefined **)((long)ppuVar7 + 0x18) = puVar11;
    func_0x000107c61170(uVar8);
    func_0x000107c3c040(ppuVar7);
  }
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  return (undefined *)ppuVar7;
}



/* Entry: 1008cfcd0; end: 1008cfda3; -[SCUserTraceLogger initWithNotificationCenter:listeners:appInsightsMetadataStorage:] */

undefined1 *
FUN_1008cfcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fcea0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c3c040(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008cfda4; end: 1008cfdc7; -[SCUserTraceLogger _observerBackgrounding] */

void FUN_1008cfda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addObserver_selector_name_object_11259c238,
             param_1,PTR_s__didEnterBackground__11252ea28,
             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_110345a10,0);
  return;
}



/* Entry: 1008cfdc8; end: 1008cfeef; -[SCUserTraceLogger logUserTraceEvent:] */

/* WARNING: Possible PIC construction at 0x0001008cfeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008cff44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cfeb0) */
/* WARNING: Removing unreachable block (ram,0x0001008cfeec) */
/* WARNING: Removing unreachable block (ram,0x0001008cfed0) */
/* WARNING: Removing unreachable block (ram,0x0001008cff48) */

void FUN_1008cfdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  lVar3 = *(long *)(param_1 + 8);
  func_0x000107c61174(lVar3);
  lVar2 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar3);
      }
      (**(code **)(*(long *)(lVar4 * 8) + 0x10))
                (*(long *)(lVar4 * 8),(long)*(int *)(param_1 + 0x20),param_3);
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = lVar3;
    func_0x000107c4080c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1008cfef0; end: 1008cff63;  */

/* WARNING: Possible PIC construction at 0x0001008cff44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008cff48) */

void FUN_1008cfef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da2a8;
  func_0x000107c61174(param_3);
  func_0x000107c3dddc(puVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4acc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008cff64; end: 1008cffa7; +[_TtC29SCAppInsightsMetadataServices29SCAppInsightsMetadataServices appInsightsMetadataStorage_LEGACY] */

void FUN_1008cff64(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113813c10,auStack_38,0,0);
  func_0x000107c6117c(uRam0000000113813c10);
  return;
}



/* Entry: 1008cffa8; end: 1008cffb3; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage leaveBreadcrumb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cffa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1008d0024)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1008cffb4; end: 1008d0113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008cffb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1008d0114; end: 1008d0137;  */

void FUN_1008d0114(long param_1,long param_2)

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



/* Entry: 1008d0138; end: 1008d01ab;  */

undefined1 FUN_1008d0138(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1008d0228;
  puStack_20 = &UNK_110848088;
  if (lRam00000001137fbac8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1137fbac8,&puStack_38);
  }
  return uRam00000001137fbac0;
}



/* Entry: 1008d01ac; end: 1008d01b7;  */

void FUN_1008d01ac(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1008d0250(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1008d01b8; end: 1008d0227;  */

void FUN_1008d01b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1008d0250(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1008d0228; end: 1008d024f;  */

void FUN_1008d0228(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c5accc(0x3fb999999999999a);
  uRam00000001137fbac0 = uVar1;
  return;
}



/* Entry: 1008d0250; end: 1008d033f;  */

/* WARNING: Removing unreachable block (ram,0x0001008d02d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0250(void)

{
  undefined8 auStack_70 [2];
  
  FUN_100087bd4(FUN_1008d05b0,auStack_70,PTR___sytN_11034f1b0 + 8);
  FUN_1000d224c(auStack_70);
  FUN_1000d28b0(0,0,0xd000000000000016,0x800000010ef86350);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c61574(auStack_70[0]);
  func_0x000107c6142c(0);
  return;
}



/* Entry: 1008d0340; end: 1008d05af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112da9618;
  func_0x000107c61428(param_1 + _DAT_112da9618,auStack_68,0,0);
  uVar7 = *(ulong *)(param_1 + lVar1);
  if (9 < *(ulong *)(uVar7 + 0x10)) {
    func_0x000107c61428(param_1 + lVar1,auStack_88,0x21,0);
    uVar3 = uVar7;
    func_0x000107c61558();
    if ((uVar3 & 1) == 0) {
      func_0x0001014c4f24();
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d05ac);
      (*pcVar2)();
    }
    uVar11 = *(undefined8 *)(uVar7 + (lVar6 + -1) * 0x10 + 0x28);
    *(long *)(uVar7 + 0x10) = lVar6 + -1;
    *(ulong *)(param_1 + lVar1) = uVar7;
    func_0x000107c614a8(auStack_88);
    func_0x000107c6142c(uVar11);
  }
  func_0x000107c61428(param_1 + lVar1,auStack_88,0x21,0);
  func_0x000107c61434(param_3);
  FUN_1008d05cc(0,0,param_2,param_3);
  func_0x000107c614a8(auStack_88);
  func_0x000107c6142c(param_3);
  uVar8 = *(undefined8 *)(param_1 + lVar1);
  uVar11 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  lVar6 = _DAT_112da9610;
  auStack_88[0] = uVar8;
  uStack_70 = uVar11;
  func_0x000107c61428(param_1 + _DAT_112da9610,auStack_a0,0x21,0);
  func_0x000107c61434(uVar8);
  FUN_100102934(auStack_88,0xd000000000000016,0x800000010ef86350);
  func_0x000107c614a8(auStack_a0);
  puVar4 = PTR_PTR_1126d05a8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d05b0);
    (*pcVar2)();
  }
  uVar10 = *(undefined8 *)(param_1 + lVar6);
  uVar8 = uVar10;
  func_0x000107c61434(uVar10);
  FUN_10018cc3c();
  func_0x000107c6142c(uVar10);
  uVar10 = uVar8;
  func_0x000107c5f9dc(uVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar8);
  func_0x000107c5a360(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  uVar9 = *(undefined8 *)(param_1 + lVar1);
  auStack_88[0] = uVar9;
  FUN_10011d734();
  func_0x000107c61434(uVar9);
  uVar8 = 0x2c;
  uVar5 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar11,uVar10);
  func_0x000107c6142c(uVar9);
  uVar11 = param_4[1];
  *param_4 = uVar8;
  param_4[1] = uVar5;
  func_0x000107c6142c(uVar11);
  return;
}



/* Entry: 1008d05b0; end: 1008d05cb;  */

void FUN_1008d05b0(void)

{
  long unaff_x20;
  
  FUN_1008d0340(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1008d05cc; end: 1008d0783;  */

void FUN_1008d05cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0694);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0698);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d069c);
    (*pcVar2)();
  }
  lVar1 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        func_0x0001000d182c();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      func_0x0001008d06a4(param_1,param_2,1,param_3,param_4);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d06a4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d06a0);
  (*pcVar2)();
}



/* Entry: 1008d0784; end: 1008d0793; +[SCAttributedCameraMainCameraStartupSubTask viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0784(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea8) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d0794; end: 1008d0947; -[SCMainCameraViewControllerStartupWorkflow _showViewPageOnboardingTooltipIfNecessary:] */

void FUN_1008d0794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_3);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c82e8;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126d3fc8;
  func_0x000107c4ddc8(PTR_PTR_1126d3fc8);
  func_0x000107c61180();
  func_0x000107c4c198(puVar3);
  func_0x000107c61180();
  func_0x000107c3f044(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c5e070(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008d0948; end: 1008d0957; +[SCAttributedCameraMainCameraStartupSubTask onboardingTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0948(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea8) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d0958; end: 1008d0963; +[SCMainCameraViewControllerLifecycleEvent viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0958(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_1130825e8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d0964; end: 1008d09f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0964(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [16];
  undefined1 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uStack_60 = param_2;
    lStack_58 = param_1;
    FUN_100087bd4(param_3,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1008d09f4; end: 1008d0a17;  */

void FUN_1008d09f4(void)

{
  FUN_1008d0964();
  return;
}



/* Entry: 1008d0a18; end: 1008d0a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0a18(uint param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 & 1;
  uVar1 = (ulong)param_1;
  if (param_1 != *(byte *)(param_2 + _DAT_112ee3d48)) {
    *(char *)(param_2 + _DAT_112ee3d48) = (char)param_1;
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ee3d40);
    FUN_1002ed07c(0);
    func_0x000107c6010c(uVar1);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1008d0a94; end: 1008d0ac3;  */

void FUN_1008d0a94(void)

{
  long unaff_x20;
  
  FUN_1008d0a18(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1008d0ac4; end: 1008d0aef;  */

void FUN_1008d0ac4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c3d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008d0af0; end: 1008d0b1b; -[SCCameraNightModeActivationHandler _resumeNightModeService] */

void FUN_1008d0af0(long param_1)

{
  if (*(char *)(param_1 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be08e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__enableLowLightBoost_nightModeEn_11255fd20,1,1,0);
    return;
  }
  return;
}



/* Entry: 1008d0b1c; end: 1008d0b47;  */

void FUN_1008d0b1c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3cdd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008d0b48; end: 1008d0d8b; -[SCFeatureRingFlashImpl _viewDidFullyAppear] */

/* WARNING: Possible PIC construction at 0x0001008d0b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d0d38) */
/* WARNING: Removing unreachable block (ram,0x0001008d0d08) */
/* WARNING: Removing unreachable block (ram,0x0001008d0cd0) */
/* WARNING: Removing unreachable block (ram,0x0001008d0cc0) */
/* WARNING: Removing unreachable block (ram,0x0001008d0c30) */
/* WARNING: Removing unreachable block (ram,0x0001008d0b8c) */
/* WARNING: Removing unreachable block (ram,0x0001008d0bac) */
/* WARNING: Removing unreachable block (ram,0x0001008d0d0c) */
/* WARNING: Removing unreachable block (ram,0x0001008d0bdc) */
/* WARNING: Removing unreachable block (ram,0x0001008d0b90) */
/* WARNING: Removing unreachable block (ram,0x0001008d0d58) */
/* WARNING: Removing unreachable block (ram,0x0001008d0d60) */
/* WARNING: Removing unreachable block (ram,0x0001008d0d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0b48(long param_1)

{
  param_1 = param_1 + _DAT_1127411f4;
  func_0x000107c61148(param_1);
  func_0x000107c4a020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008d0d8c; end: 1008d0d97;  */

void FUN_1008d0d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008d0d98; end: 1008d0dd7; -[SCMainCameraViewController isMainCameraBeingOverlaid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008d0d98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112762318;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c43c9c();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1008d0dd8; end: 1008d0e27;  */

void FUN_1008d0dd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008d0e28; end: 1008d0e5b;  */

void FUN_1008d0e28(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3cd18(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008d0e5c; end: 1008d1283; -[SCCameraVerticalToolbar _updateUpsellSlotIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008d0eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d0ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d10c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d11a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d121c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d122c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d1260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d1230) */
/* WARNING: Removing unreachable block (ram,0x0001008d1220) */
/* WARNING: Removing unreachable block (ram,0x0001008d11a8) */
/* WARNING: Removing unreachable block (ram,0x0001008d1174) */
/* WARNING: Removing unreachable block (ram,0x0001008d1108) */
/* WARNING: Removing unreachable block (ram,0x0001008d1138) */
/* WARNING: Removing unreachable block (ram,0x0001008d110c) */
/* WARNING: Removing unreachable block (ram,0x0001008d10c8) */
/* WARNING: Removing unreachable block (ram,0x0001008d10cc) */
/* WARNING: Removing unreachable block (ram,0x0001008d10dc) */
/* WARNING: Removing unreachable block (ram,0x0001008d108c) */
/* WARNING: Removing unreachable block (ram,0x0001008d1090) */
/* WARNING: Removing unreachable block (ram,0x0001008d1034) */
/* WARNING: Removing unreachable block (ram,0x0001008d1038) */
/* WARNING: Removing unreachable block (ram,0x0001008d1050) */
/* WARNING: Removing unreachable block (ram,0x0001008d105c) */
/* WARNING: Removing unreachable block (ram,0x0001008d0ffc) */
/* WARNING: Removing unreachable block (ram,0x0001008d0fa4) */
/* WARNING: Removing unreachable block (ram,0x0001008d1254) */
/* WARNING: Removing unreachable block (ram,0x0001008d0fdc) */
/* WARNING: Removing unreachable block (ram,0x0001008d0f44) */
/* WARNING: Removing unreachable block (ram,0x0001008d1008) */
/* WARNING: Removing unreachable block (ram,0x0001008d0f68) */
/* WARNING: Removing unreachable block (ram,0x0001008d0f00) */
/* WARNING: Removing unreachable block (ram,0x0001008d0ef0) */
/* WARNING: Removing unreachable block (ram,0x0001008d1264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d0e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + _DAT_112742b20) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000107c3c7cc();
  if (lVar1 == 0) {
    param_1 = param_1 + _DAT_112742b60;
    func_0x000107c61148(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e15c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c56bcc(param_1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e44b38);
  }
  else {
    puVar2 = (undefined *)(param_1 + _DAT_112742b60);
    func_0x000107c61148(puVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c3e168();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1008d1284; end: 1008d1333; -[SCCameraVerticalToolbar _shouldShowUpsellSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1008d1284(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  double dVar4;
  
  param_2 = param_2 + _DAT_112742b60;
  func_0x000107c61148(param_2);
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c42230();
  dVar4 = param_1;
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  if (param_1 == 0.0) {
    bVar3 = true;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    bVar3 = dVar4 - param_1 <= 604800.0;
    func_0x000107c61170(puVar2);
  }
  return bVar3;
}



/* Entry: 1008d1334; end: 1008d138f; -[SCPreferences arrayForKey:] */

void FUN_1008d1334(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61158(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008d1390; end: 1008d15fb; -[SCCameraVerticalToolbar _selectUpsellSlotCandidateFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d1390(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 == 0) {
    lStack_138 = 0;
  }
  else {
    lStack_138 = 0;
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          func_0x000107c61128(param_3);
        }
        uVar2 = *(ulong *)(param_1 + _DAT_112742b88);
        func_0x000107c4d9e8(uVar2,param_2,*(undefined8 *)(lStack_128 + lVar11 * 8));
        func_0x000107c61180();
        lVar3 = param_1;
        func_0x000107c3af74(param_1,param_2,uVar2);
        func_0x000107c61180();
        uVar4 = uVar2;
        func_0x000107c49b60();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((uVar4 & 1) == 0) {
          lVar5 = lVar3;
          func_0x000107c5cbb0(lVar3);
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c3f280();
          func_0x000107c4d960(puVar7,param_2,lVar6);
          func_0x000107c61180();
          ppuVar9 = &PTR__OBJC_CLASS___NSConstantArray_111180260;
          ppuVar8 = ppuVar9;
          func_0x000107c45340(&PTR__OBJC_CLASS___NSConstantArray_111180260,param_2,puVar7);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(lVar5);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar5 = lStack_138;
          func_0x000107c5cbb0(lStack_138);
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c3f280();
          func_0x000107c4d960(puVar7,param_2,lVar6);
          func_0x000107c61180();
          func_0x000107c45340(&PTR__OBJC_CLASS___NSConstantArray_111180260,param_2,puVar7);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(lVar5);
          if (uVar2 != 0) {
            if (lStack_138 == 0) {
              func_0x000107c61174(lVar3);
              lStack_138 = lVar3;
            }
            else if ((long)ppuVar9 < (long)ppuVar8) {
              func_0x000107c61174(lVar3);
              func_0x000107c61170(lStack_138);
              lStack_138 = lVar3;
            }
          }
        }
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar2);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lStack_138);
  return;
}



/* Entry: 1008d15fc; end: 1008d15ff;  */

void FUN_1008d15fc(void)

{
  return;
}



/* Entry: 1008d1600; end: 1008d16ef;  */

void FUN_1008d1600(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c6e630;
  puStack_30 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1008d16f0; end: 1008d16f3;  */

void FUN_1008d16f0(void)

{
  return;
}



/* Entry: 1008d16f4; end: 1008d1777;  */

/* WARNING: Possible PIC construction at 0x0001008d1738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d173c) */

void FUN_1008d16f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x000107c5df34(PTR_PTR_1126bd5f8,param_2,0);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008d1778; end: 1008d177b; -[SCCameraToSnappableStabilityMonitorImpl noOp] */

void FUN_1008d1778(void)

{
  return;
}



/* Entry: 1008d177c; end: 1008d17a7;  */

void FUN_1008d177c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3cdd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008d17a8; end: 1008d1937; -[SCFeatureContextShortcutImpl _viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d17a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112740618;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c3f630();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c40794();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4c238();
  func_0x000107c61180();
  func_0x000107c5bb2c(param_1,param_2,uVar7,uVar3,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c3ac98(param_1);
  if ((*(char *)(param_1 + _DAT_112740638) == '\x01') &&
     (lVar9 = (long)_DAT_11274063c, *(long *)(param_1 + lVar9) != 0)) {
    lVar6 = param_1 + _DAT_112740640;
    func_0x000107c61148(lVar6);
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5aaf8(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5b3f0(uVar8);
    func_0x000107c42e50(lVar6,param_2,param_1,uVar7,uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
  }
  *(undefined1 *)(param_1 + _DAT_112740644) = 0;
  return;
}



/* Entry: 1008d1938; end: 1008d1ad3; -[SCFeatureContextShortcutImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d1938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_68,param_1);
  lVar6 = (long)_DAT_112740680;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_70);
  }
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008d1ad4; end: 1008d1d13; -[SCFeatureContextShortcutImpl _activateContextShortcutIfAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d1ad4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (((*(byte *)(param_1 + _DAT_112740638) & 1) == 0) &&
     (lVar4 = (long)_DAT_11274063c, *(long *)(param_1 + lVar4) != 0)) {
    *(undefined1 *)(param_1 + _DAT_112740638) = 1;
    func_0x000107c3be08(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x000107c5cda4();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x000107c4b1ec();
      func_0x000107c61180();
      lVar4 = lVar1;
      func_0x000107c40808();
      func_0x000107c61170(lVar1);
      if (lVar4 == 0) {
        return;
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740660);
    *(undefined **)(param_1 + _DAT_112740660) = puVar2;
    func_0x000107c61170();
    func_0x000107c60f34();
    func_0x000107c61144(auStack_58,param_1);
    func_0x000107c60f38(uVar3);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_10614d648;
    puStack_70 = &UNK_110910e08;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(uVar3);
    uStack_68 = uVar3;
    func_0x000107c3adc0(param_1);
    func_0x000107c60f38(uVar3);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10614d6bc;
    puStack_a0 = &UNK_110859c28;
    func_0x000107c6111c(auStack_90,auStack_58);
    func_0x000107c61174(uVar3);
    uStack_98 = uVar3;
    func_0x000107c3adb8(param_1);
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10614d730;
    puStack_c8 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_c0,auStack_58);
    FUN_100bc0718(uVar3,PTR___dispatch_main_q_11034be20,&puStack_e0);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61120(auStack_90);
    func_0x000107c61170(uStack_68);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1008d1d14; end: 1008d1d17; -[SCMainCameraViewController viewDidSwipeIn] */

void FUN_1008d1d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be925b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetCameraViewType_112582308);
  return;
}



/* Entry: 1008d1d18; end: 1008d1d73; -[SCMainCameraViewController _resetCameraViewType] */

void FUN_1008d1d18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c5b308();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49bfc();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cd870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNoReply_112651040);
  return;
}



/* Entry: 1008d1d74; end: 1008d1dd7; -[SCMainCameraViewController snapKit] */

void FUN_1008d1d74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5b308();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008d1dd8; end: 1008d1e07;  */

bool FUN_1008d1dd8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008d1e08; end: 1008d1f13;  */

void FUN_1008d1e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar5 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar5 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c8078;
    func_0x000107c610f4();
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    lVar6 = lVar5 + 0x38;
    func_0x000107c61148(lVar6);
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    lVar7 = lVar5 + 0x30;
    func_0x000107c61148();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    func_0x000107c49354(puVar10,param_2,uVar1,uVar3,uVar11,lVar6,uVar2,uVar4,lVar7,uVar9,
                        *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x48));
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1008d1f14; end: 1008d21f3; -[SCFeatureSnapKitImpl initWithUserSession:legacyCameraTooltipsService:cameraHardwareResource:cameraConfiguration:blizzardLogger:grapheneMetricsReporter:renderTarget:musicFeature:itemViewService:temporaryFileWriter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008d1f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126efbd0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_5;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar8;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar3 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40794();
    uVar6 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(puVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar8);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273f714) = 1;
    lVar9 = (long)_DAT_11273f718;
    func_0x000107c61174(param_4);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_11273f71c;
    func_0x000107c61174(param_7);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_11273f720;
    func_0x000107c61174(param_8);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_8;
    func_0x000107c61170(uVar8);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11273f724,param_9);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11273f728,param_6);
    lVar9 = (long)_DAT_11273f72c;
    func_0x000107c61174(param_10);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_10;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_11273f730;
    func_0x000107c61174(param_11);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_11;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_11273f734;
    func_0x000107c61174(param_12);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_12;
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 1008d21f4; end: 1008d24d3; -[SCFeatureSnapKitImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d21f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_80,param_1);
  lVar6 = (long)_DAT_11273f74c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c5bce8();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_100c3da34;
    puStack_90 = &UNK_11090d240;
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_1061034c0;
    puStack_b8 = &UNK_11084e400;
    func_0x000107c6111c(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d8,auStack_80);
    func_0x000107c61174(param_4);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008d24d4; end: 1008d250b; -[SCFeatureSnapKitImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d24d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f740);
  *(undefined8 *)(param_1 + _DAT_11273f740) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008d250c; end: 1008d251b; -[SCFeatureSnapKitImpl isCurrentlyDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d250c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06fef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_isCurrentlyDisplayed_1125f99c8);
  return;
}



/* Entry: 1008d251c; end: 1008d2723; -[SCCameraViewController setNoReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d251c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127624bc;
  func_0x000107c57d4c(*(undefined8 *)(param_1 + lVar5),param_2,0);
  lVar1 = param_1;
  func_0x000107c3f1ac(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c406b0();
  func_0x000107c61180();
  func_0x000107c57d4c();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4b158();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c57d60();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4fa54();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c57d4c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d1e4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c57d50();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c5312c(param_1);
  lVar1 = param_1;
  func_0x000107c4f178(param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4f174();
  func_0x000107c61180();
  func_0x000107c57d50();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c504f8(*(undefined8 *)(param_1 + _DAT_1127624cc));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c3f16c(uVar4);
  func_0x000107c61180();
  func_0x000107c57d5c();
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be357d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideHeaderTitleRow__11256af90,0);
  return;
}



/* Entry: 1008d2724; end: 1008d2753; -[SCCameraViewControllerInternalState setReplyConfiguration:] */

void FUN_1008d2724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008d2754; end: 1008d2767; -[SCLegacyCameraResourcesImpl conversationMetadataProvider] */

void FUN_1008d2754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1008d2768; end: 1008d2787;  */

void FUN_1008d2768(void)

{
  func_0x000107c61168(&PTR_PTR_1127f02d8);
  return;
}



/* Entry: 1008d2788; end: 1008d283f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d2788(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_1008d2768();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112de7a60) = 0;
  *(undefined8 *)(lVar3 + _DAT_112de7a68) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112de7a70) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112de7a78) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008d2840; end: 1008d2843;  */

void FUN_1008d2840(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008d2844; end: 1008d2877;  */

void FUN_1008d2844(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008d2878; end: 1008d28db; -[_TtC36LensConversationMetadataServicesImpl32LensConversationMetadataProvider setReplyConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d2878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112de7a60;
  func_0x000107c61428(param_1 + _DAT_112de7a60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1008d28dc; end: 1008d28e3; -[SCMutablePublicCameraFeatureCatalog lensFeed] */

undefined8 FUN_1008d28dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1008d28e4; end: 1008d291b;  */

byte FUN_1008d28e4(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa0);
  }
  func_0x000107c61170();
  return bVar1 & 1;
}



/* Entry: 1008d291c; end: 1008d2b37;  */

void FUN_1008d291c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  puVar16 = PTR_PTR_1126c8890;
  if (lVar1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + 0x20;
    func_0x000107c61148();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1008d2b38;
    puStack_70 = &UNK_11084e7d0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar15);
    ppuVar3 = &puStack_88;
    uStack_68 = uVar15;
    FUN_1008d2b38();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(lVar1 + 0x100);
    lVar4 = lVar1 + 8;
    func_0x000107c61148();
    lVar5 = lVar4;
    func_0x000107c3f300();
    lVar6 = lVar1;
    func_0x000107c4b0d4(lVar1);
    func_0x000107c61180();
    lVar7 = lVar1 + 0x58;
    func_0x000107c61148();
    lVar8 = lVar7;
    func_0x000107c4b0a4();
    func_0x000107c61180();
    lVar9 = lVar1 + 0x78;
    func_0x000107c61148();
    lVar10 = lVar9;
    func_0x000107c4b2f8();
    func_0x000107c61180();
    lVar11 = lVar1 + 0x10;
    func_0x000107c61148();
    lVar12 = lVar1 + 0x80;
    func_0x000107c61148();
    lVar13 = lVar1 + 0x48;
    func_0x000107c61148();
    lVar14 = lVar13;
    func_0x000107c4b4a8();
    func_0x000107c61180();
    func_0x000107c42e64(puVar16,param_2,lVar2,ppuVar3,uVar15,lVar5,lVar6,lVar8,lVar10,lVar11,lVar12,
                        lVar14,*(undefined8 *)(lVar1 + 0xf8),*(undefined1 *)(lVar1 + 0xa7));
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1008d2b38; end: 1008d2c13;  */

void FUN_1008d2b38(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008d2c14; end: 1008d2ccf; -[SCCameraCommonLensFeatureConfigurator lensExplorerNavigation] */

void FUN_1008d2c14(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c6111c(auStack_28,param_1 + 0x68);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008d2cd0; end: 1008d2cd7; -[SCLensExplorerBadgeServices lensExplorerBadgeTracking] */

undefined8 FUN_1008d2cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008d2cd8; end: 1008d2cdf; -[SCLensPickerServices lensPicker] */

undefined8 FUN_1008d2cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008d2ce0; end: 1008d2e3b; +[SCFeatureLensFeedImplFactory featureLensFeedWithUserSession:verticalToolbar:lensCarouselManager:cameraViewType:lensExplorerNavigation:lensExplorerBadgeUsageTracking:lensPicker:applicationLifecycleEvents:pageTracker:lensThumbnailLogger:arBar:alwaysUsePickerMode:] */

void FUN_1008d2ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8ac0;
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c493c4();
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008d2e3c; end: 1008d3213; -[SCFeatureLensFeedImpl initWithUserSession:verticalToolbar:lensCarouselManager:cameraViewType:lensExplorerNavigation:lensExplorerBadgeUsageTracking:lensPicker:applicationLifecycleEvents:pageTracker:lensThumbnailLogger:arBar:alwaysUsePickerMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008d2e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_80 = PTR_PTR_1126f0418;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_11274282c,param_3);
    lVar5 = (long)_DAT_112742830;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742834) = param_6;
    lVar5 = (long)_DAT_112742838;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11274283c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112742840;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112742844;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742848);
    *(undefined **)((long)puVar1 + (long)_DAT_112742848) = puVar3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11274284c;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112742850,param_13);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742854) = param_14;
    lVar5 = (long)_DAT_112742858;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_90,puVar1);
    uVar2 = param_10;
    func_0x000107c419f0(param_10);
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_100c79da8;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_10;
    func_0x000107c41b80(param_10);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008d3214; end: 1008d3217; -[SCCameraLensesViewControllerManager lensFeedDelegate] */

void FUN_1008d3214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c093db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lensFeedDelegateHandler_112602978);
  return;
}



/* Entry: 1008d3218; end: 1008d325b; -[SCCameraLensesViewControllerManager lensFeedDelegateHandler] */

void FUN_1008d3218(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4ac70();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008d325c; end: 1008d34d7; -[SCCameraLensesViewControllerManager lazyLensFeedDelegateHandler] */

void FUN_1008d325c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = *(long *)(param_1 + 0x210);
  if (lVar5 == 0) {
    func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 0x178));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3f0bc();
    func_0x000107c61180();
    func_0x000107c61144(auStack_50,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3f328();
    func_0x000107c61180();
    func_0x000107c61144(auStack_58,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c410d8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c61174(uVar6);
    lVar5 = param_1 + 200;
    func_0x000107c61148();
    lVar3 = lVar5;
    func_0x000107c4c164();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_70,auStack_58);
    func_0x000107c6111c(auStack_68,auStack_48);
    func_0x000107c6111c(auStack_60,auStack_50);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x210);
    *(undefined **)(param_1 + 0x210) = puVar4;
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_68);
    func_0x000107c61120(auStack_70);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_58);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    lVar5 = *(long *)(param_1 + 0x210);
  }
  func_0x000107c61174(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1008d34d8; end: 1008d34ff;  */

void FUN_1008d34d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008d3500; end: 1008d353f; -[SCCameraViewControllerInfoProvider cameraFeatureCatalog] */

void FUN_1008d3500(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008d3540; end: 1008d3557; -[SCCameraViewControllerInfoProvider cameraWorkflowViewController] */

void FUN_1008d3540(long param_1)

{
  func_0x000107c61148(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d3558; end: 1008d3597; -[SCCameraViewControllerInfoProvider customStatusBarStyleContextController] */

void FUN_1008d3558(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c410d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008d3598; end: 1008d35a7; -[SCCameraViewController customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008d3598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762624);
}



/* Entry: 1008d35a8; end: 1008d35ff;  */

/* WARNING: Possible PIC construction at 0x0001008d35dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d35e0) */

void FUN_1008d35a8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1008d3600; end: 1008d369b;  */

void FUN_1008d3600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d1300;
  func_0x000107c610f4(PTR_PTR_1126d1300);
  lVar2 = param_1 + 0x38;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + 0x40;
  func_0x000107c61148(lVar3);
  lVar4 = param_1 + 0x48;
  func_0x000107c61148(lVar4);
  func_0x000107c45ca0(puVar1,param_2,lVar2,lVar3,lVar4,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008d369c; end: 1008d37cf; -[SCFeatureLensFeedDelegateHandler initWithCameraViewController:lensCarouselManager:cameraFeatureCatalog:customStatusBarStyleContextController:mainCameraViewControllerLifecycleBehaviorSubject:circumstanceEngine:] */

undefined1 *
FUN_1008d369c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126f5908;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x48),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_5);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_8);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008d37d0; end: 1008d3877;  */

/* WARNING: Possible PIC construction at 0x0001008d37fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d3800) */

void FUN_1008d37d0(long param_1)

{
  func_0x000107c61120(param_1 + 0x48);
  func_0x000107c61120(param_1 + 0x40);
  func_0x000107c61120(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1008d3878; end: 1008d388b; -[SCFeatureLensFeedImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d3878(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742870,param_3);
  return;
}


