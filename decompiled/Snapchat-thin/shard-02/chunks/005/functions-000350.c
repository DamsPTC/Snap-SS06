/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e36608; end: 101e36647;  */

void FUN_101e36608(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e36648; end: 101e366d3;  */

void FUN_101e36648(long param_1,long param_2)

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



/* Entry: 101e366d4; end: 101e37753;  */

undefined * FUN_101e366d4(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uStack_110;
  long lStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long alStack_c8 [4];
  undefined1 auStack_a8 [32];
  long alStack_88 [3];
  long lStack_70;
  
  lVar3 = 0;
  uStack_d8 = param_2;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - extraout_x12_01;
  uVar11 = param_1;
  func_0x000107c44a2c();
  if ((int)uVar11 == 0) {
    uVar12 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar5 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f014790);
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
  else {
    uVar11 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37738);
      (*pcVar1)();
    }
    uVar4 = uVar11;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uStack_f8 = param_1;
    lStack_f0 = lVar15;
    lStack_e8 = lVar3;
    if (uVar4 != 0) {
      uStack_110 = uVar4;
      func_0x000107c600f4(lVar18);
      func_0x000107c5ed4c(alStack_88);
      puVar10 = PTR___sypN_11034f1a8;
      if (lStack_70 != 0) {
        pcStack_100 = "rted template type";
        lStack_108 = lVar18;
        do {
          func_0x000100102924(alStack_88,auStack_a8);
          func_0x0001000bb420(auStack_a8,alStack_c8);
          uVar5 = 0;
          FUN_101e37754(0,0x112d55598,&PTR_PTR_1126b25d0);
          puVar6 = &uStack_d0;
          func_0x000107c6147c(puVar6,alStack_c8,puVar10 + 8,uVar5,6);
          uVar11 = uStack_d0;
          if ((int)puVar6 == 0) {
            uVar11 = 0x6574616c706d6574;
            func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
            uVar4 = 0xd000000000000036;
            func_0x000107c5fadc(0xd000000000000036,0x800000010f014860);
            puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
            func_0x000107c42a5c();
            func_0x000107c61180();
            func_0x000107c61170(uStack_110);
LAB_101e3749c:
            func_0x000107c61170(uVar11);
            uVar11 = uVar4;
            lVar17 = lVar18;
LAB_101e376d8:
            func_0x000107c61170(uVar11);
            func_0x000100183ab8(auStack_a8);
            pcVar1 = *(code **)(lStack_f0 + 8);
            goto LAB_101e376f0;
          }
          uVar7 = uStack_d0;
          func_0x000107c4abb4();
          uVar9 = uVar11;
          uVar4 = uVar11;
          if ((int)uVar7 == 4) {
            func_0x0001000d224c(alStack_c8);
            lVar15 = alStack_c8[0];
            uVar7 = *(ulong *)(alStack_c8[0] + 0x10);
            func_0x000107c3fa04();
            func_0x000107c61180();
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37728);
              (*pcVar1)();
            }
            uVar5 = 0xd00000000000002e;
            func_0x000107c5fadc(0xd00000000000002e,(ulong)pcStack_100 | 0x8000000000000000);
            uVar8 = uVar7;
            func_0x000107c3ebd4();
            func_0x000107c61574(lVar15);
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(uVar5);
            if ((uVar8 & 1) == 0) {
              func_0x000107c40dc8();
              func_0x000107c61180();
              if (uVar9 != 0) {
                uVar7 = uVar9;
                func_0x000107c44904();
                if ((int)uVar7 != 0) {
                  uVar7 = uVar9;
                  func_0x000107c44990();
                  lVar18 = lStack_108;
                  if ((int)uVar7 != 0) {
                    uVar7 = uVar9;
                    func_0x000107c4ce20();
                    func_0x000107c61180();
                    if (uVar7 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37748);
                      (*pcVar1)();
                    }
                    uVar8 = uVar7;
                    func_0x000107c4ce50();
                    func_0x000107c61170(uVar7);
                    lVar18 = lStack_108;
                    if ((int)uVar8 != 5) {
                      uVar7 = uVar9;
                      func_0x000107c4ce20();
                      func_0x000107c61180();
                      if (uVar7 == 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3774c);
                        (*pcVar1)();
                      }
                      uVar8 = uVar7;
                      func_0x000107c4ce50();
                      func_0x000107c61170(uVar7);
                      if ((int)uVar8 != 6) goto LAB_101e368d4;
                    }
                    uVar12 = 0x6574616c706d6574;
                    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                    uVar5 = 0xd000000000000046;
                    func_0x000107c5fadc(0xd000000000000046,0x800000010f0149e0);
                    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
                    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                    func_0x000107c42a5c();
                    func_0x000107c61180();
                    func_0x000107c61170(uStack_110);
                    goto LAB_101e376c0;
                  }
LAB_101e368d4:
                  func_0x000100183ab8(auStack_a8);
                  func_0x000107c61170(uVar9);
                  uVar11 = uVar4;
                  goto LAB_101e3682c;
                }
                func_0x000107c61170(uVar9);
              }
              uVar12 = 0x6574616c706d6574;
              func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
              uVar5 = 0xd00000000000003b;
              func_0x000107c5fadc(0xd00000000000003b,0x800000010f0149a0);
              puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
              func_0x000107c42a5c();
              func_0x000107c61180();
              func_0x000107c61170(uStack_110);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar11);
              func_0x000100183ab8(auStack_a8);
              pcVar1 = *(code **)(lStack_f0 + 8);
              lVar17 = lStack_108;
              goto LAB_101e376f0;
            }
            func_0x000100183ab8(auStack_a8);
            lVar18 = lStack_108;
          }
          else {
            if ((int)uVar7 == 1) {
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar4 != 0) {
                uVar7 = uVar4;
                func_0x000107c3e240();
                if ((int)uVar7 == 2) goto LAB_101e368d4;
                uVar12 = 0x6574616c706d6574;
                func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
                uVar5 = 0xd000000000000052;
                func_0x000107c5fadc(0xd000000000000052,0x800000010f014a70);
                puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                func_0x000107c42a5c();
                func_0x000107c61180();
                func_0x000107c61170(uStack_110);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar5);
                goto LAB_101e3749c;
              }
              uVar12 = 0x6574616c706d6574;
              func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
              uVar5 = 0xd00000000000003a;
              func_0x000107c5fadc(0xd00000000000003a,0x800000010f014a30);
              puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
              func_0x000107c42a5c();
              func_0x000107c61180();
              uVar9 = uStack_110;
LAB_101e376c0:
              func_0x000107c61170(uVar9);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(uVar5);
              lVar17 = lVar18;
              goto LAB_101e376d8;
            }
            func_0x000100183ab8(auStack_a8);
          }
LAB_101e3682c:
          func_0x000107c61170(uVar11);
          func_0x000107c5ed4c(alStack_88);
        } while (lStack_70 != 0);
      }
      lVar3 = lStack_e8;
      lVar15 = lStack_f0;
      (**(code **)(lStack_f0 + 8))(lVar18,lStack_e8);
      func_0x000107c61170(uStack_110);
    }
    uVar11 = uStack_f8;
    uVar4 = uStack_f8;
    func_0x000107c4ca10();
    func_0x000107c61180();
    if (uVar4 != 0) {
      func_0x000107c600f4(lVar17);
      func_0x000107c5ed4c(alStack_88);
      puVar10 = PTR___sypN_11034f1a8;
      lVar15 = lStack_f0;
      lVar3 = lStack_e8;
      while (lStack_f0 = lVar15, lStack_e8 = lVar3, lStack_70 != 0) {
        func_0x000100102924(alStack_88,auStack_a8);
        func_0x0001000bb420(auStack_a8,alStack_c8);
        uVar5 = 0;
        FUN_101e37754(0,0x112d512f8,&PTR_PTR_1126b25d8);
        puVar6 = &uStack_d0;
        plVar13 = alStack_c8;
        func_0x000107c6147c(puVar6,plVar13,puVar10 + 8,uVar5,6);
        uVar11 = uStack_d0;
        if ((int)puVar6 == 0) {
          uVar5 = 0x6574616c706d6574;
          func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
          uVar7 = 0xd000000000000037;
          func_0x000107c5fadc(0xd000000000000037,0x800000010f0148a0);
          puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
LAB_101e3738c:
          func_0x000107c61170(uVar7);
          func_0x000100183ab8(auStack_a8);
          pcVar1 = *(code **)(lStack_f0 + 8);
          goto LAB_101e376f0;
        }
        uVar7 = uStack_d0;
        func_0x000107c4ca5c();
        if (((int)uVar7 == 2) || (uVar7 = uVar11, func_0x000107c4ca5c(), (int)uVar7 == 3)) {
          uVar5 = 0x6574616c706d6574;
          func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
          uVar7 = 0xd00000000000003c;
          func_0x000107c5fadc(0xd00000000000003c,0x800000010f014960);
          puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar5);
          goto LAB_101e3738c;
        }
        uVar7 = uVar11;
        func_0x000107c4b7ec();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3772c);
          (*pcVar1)();
        }
        uVar9 = uVar7;
        func_0x000107c5faec();
        plVar14 = plVar13;
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(plVar13);
        uVar7 = uVar9 & 0xffffffffffff;
        if (((ulong)plVar13 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)plVar13 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) {
LAB_101e36e4c:
          uVar12 = 0x6574616c706d6574;
          func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
          uVar5 = 0xd000000000000073;
          func_0x000107c5fadc(0xd000000000000073,0x800000010f0148e0);
          puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar5);
          uVar7 = uVar11;
          goto LAB_101e3738c;
        }
        uVar7 = uVar11;
        func_0x000107c4b7f0();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37730);
          (*pcVar1)();
        }
        uVar9 = uVar7;
        func_0x000107c5faec();
        plVar13 = plVar14;
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(plVar14);
        uVar7 = uVar9 & 0xffffffffffff;
        if (((ulong)plVar14 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)plVar14 >> 0x38 & 0xf;
        }
        if (uVar7 != 0) goto LAB_101e36e4c;
        uVar7 = uVar11;
        func_0x000107c3abfc();
        func_0x000107c61180();
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37734);
          (*pcVar1)();
        }
        uVar9 = uVar7;
        func_0x000107c5faec();
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(plVar13);
        uVar7 = uVar9 & 0xffffffffffff;
        if (((ulong)plVar13 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)plVar13 >> 0x38 & 0xf;
        }
        if (uVar7 == 0) goto LAB_101e36e4c;
        func_0x000100183ab8(auStack_a8);
        func_0x000107c61170(uVar11);
        func_0x000107c5ed4c(alStack_88);
        lVar15 = lStack_f0;
        lVar3 = lStack_e8;
      }
      (**(code **)(lVar15 + 8))(lVar17,lVar3);
      func_0x000107c61170(uVar4);
      uVar11 = uStack_f8;
    }
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37740);
      (*pcVar1)();
    }
    uVar4 = uVar11;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    if (uVar4 == 0) {
      bVar2 = false;
    }
    else {
      func_0x000107c600f4(lVar16);
      func_0x000107c5ed4c(alStack_88);
      puVar10 = PTR___sypN_11034f1a8;
      if (lStack_70 == 0) {
        bVar2 = false;
      }
      else {
        lVar15 = 0;
        do {
          func_0x000100102924(alStack_88,auStack_a8);
          func_0x0001000bb420(auStack_a8,alStack_c8);
          uVar5 = 0;
          FUN_101e37754(0,0x112d55598,&PTR_PTR_1126b25d0);
          puVar6 = &uStack_d0;
          func_0x000107c6147c(puVar6,alStack_c8,puVar10 + 8,uVar5,6);
          uVar11 = uStack_d0;
          if ((int)puVar6 == 0) {
            uVar12 = 0x6574616c706d6574;
            func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
            uVar5 = 0xd000000000000036;
            func_0x000107c5fadc(0xd000000000000036,0x800000010f014860);
            puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
            func_0x000107c42a5c();
            func_0x000107c61180();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar5);
            func_0x000100183ab8(auStack_a8);
            pcVar1 = *(code **)(lStack_f0 + 8);
            lVar17 = lVar16;
            goto LAB_101e376f0;
          }
          func_0x0001044e03bc(0);
          uVar7 = uVar11;
          func_0x0001044de514();
          func_0x000107c61170(uVar11);
          func_0x000100183ab8(auStack_a8);
          if (((uVar7 & 1) != 0) && (bVar2 = SCARRY8(lVar15,1), lVar15 = lVar15 + 1, bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e36dcc);
            (*pcVar1)();
          }
          func_0x000107c5ed4c(alStack_88);
        } while (lStack_70 != 0);
        bVar2 = lVar15 == 1;
        lVar3 = lStack_e8;
        lVar15 = lStack_f0;
      }
      (**(code **)(lVar15 + 8))(lVar16,lVar3);
      func_0x000107c61170(uVar4);
    }
    func_0x0001000d224c(alStack_88);
    lVar15 = alStack_88[0];
    uVar11 = *(ulong *)(alStack_88[0] + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37744);
      (*pcVar1)();
    }
    uVar5 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010f014730);
    uVar4 = uVar11;
    func_0x000107c3ebd4();
    func_0x000107c61574(lVar15);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar5);
    if ((uVar4 & 1) != 0 || bVar2) {
      uVar11 = uStack_f8;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37750);
        (*pcVar1)();
      }
      uVar4 = uVar11;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      if (uVar4 == 0) {
        lVar3 = 0;
        lVar15 = 0;
      }
      else {
        func_0x000107c600f4(lStack_e0);
        func_0x000107c5ed4c(alStack_88);
        puVar10 = PTR___sypN_11034f1a8;
        if (lStack_70 == 0) {
          lVar3 = 0;
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          lVar3 = 0;
          do {
            func_0x000100102924(alStack_88,auStack_a8);
            func_0x0001000bb420(auStack_a8,alStack_c8);
            uVar5 = 0;
            FUN_101e37754(0,0x112d55598,&PTR_PTR_1126b25d0);
            puVar6 = &uStack_d0;
            func_0x000107c6147c(puVar6,alStack_c8,puVar10 + 8,uVar5,6);
            uVar11 = uStack_d0;
            if ((int)puVar6 == 0) {
              uVar12 = 0x6574616c706d6574;
              func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
              uVar5 = 0xd000000000000036;
              func_0x000107c5fadc(0xd000000000000036,0x800000010f014860);
              puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
              func_0x000107c42a5c();
              func_0x000107c61180();
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(uVar5);
              func_0x000100183ab8(auStack_a8);
              pcVar1 = *(code **)(lStack_f0 + 8);
              lVar17 = lStack_e0;
LAB_101e376f0:
              (*pcVar1)(lVar17,lStack_e8);
              return puVar10;
            }
            uVar7 = uStack_d0;
            func_0x000107c4abb4();
            if ((int)uVar7 == 1) {
              uVar7 = uVar11;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3773c);
                (*pcVar1)();
              }
              uVar9 = uVar7;
              func_0x000107c3e240();
              func_0x000107c61170(uVar7);
              if (((int)uVar9 == 2) && (bVar2 = SCARRY8(lVar15,1), lVar15 = lVar15 + 1, bVar2)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37720);
                (*pcVar1)();
              }
            }
            func_0x0001044e03bc(0);
            uVar7 = uVar11;
            func_0x0001044de750();
            func_0x000107c61170(uVar11);
            func_0x000100183ab8(auStack_a8);
            if (((uVar7 & 1) != 0) && (bVar2 = SCARRY8(lVar3,1), lVar3 = lVar3 + 1, bVar2)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37170);
              (*pcVar1)();
            }
            func_0x000107c5ed4c(alStack_88);
          } while (lStack_70 != 0);
        }
        (**(code **)(lStack_f0 + 8))(lStack_e0,lStack_e8);
        func_0x000107c61170(uVar4);
      }
      func_0x0001000d224c(alStack_88);
      uVar11 = *(ulong *)(alStack_88[0] + 0x10);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37754);
        (*pcVar1)();
      }
      uVar5 = 0xd00000000000002e;
      func_0x000107c5fadc(0xd00000000000002e,0x800000010f014730);
      uVar4 = uVar11;
      func_0x000107c3ebd4();
      func_0x000107c61574(alStack_88[0]);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(uVar5);
      if ((uVar4 & 1) == 0) {
        if (SCARRY8(lVar15,lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37724);
          (*pcVar1)();
        }
        if (lVar15 + lVar3 != 1) {
          uVar12 = 0x6574616c706d6574;
          func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
          uVar5 = 0xd000000000000039;
          func_0x000107c5fadc(0xd000000000000039,0x800000010f014820);
          puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          goto LAB_101e36ab4;
        }
      }
      return (undefined *)0x0;
    }
    uVar12 = 0x6574616c706d6574;
    func_0x000107c5fadc(0x6574616c706d6574,0xe800000000000000);
    uVar5 = 0xd000000000000042;
    func_0x000107c5fadc(0xd000000000000042,0x800000010f0147d0);
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
  }
LAB_101e36ab4:
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  return puVar10;
}



/* Entry: 101e37754; end: 101e37793;  */

void FUN_101e37754(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e37794; end: 101e377a7;  */

bool FUN_101e37794(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e377a8; end: 101e37853;  */

void FUN_101e377a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e37854; end: 101e37857;  */

void FUN_101e37854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e31c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ad10;
  func_0x000107c61520(&UNK_10da1ad10,&UNK_11048cf80);
  puRam0000000112e31c98 = puVar1;
  return;
}



/* Entry: 101e37858; end: 101e37897;  */

void FUN_101e37858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e31c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ad10;
  func_0x000107c61520(&UNK_10da1ad10,&UNK_11048cf80);
  puRam0000000112e31c98 = puVar1;
  return;
}



/* Entry: 101e37898; end: 101e37aa3;  */

int FUN_101e37898(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e37914;
        goto LAB_101e378f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e378f8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101e37914:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e37aa4; end: 101e37edf;  */

/* WARNING: Removing unreachable block (ram,0x000101e37b28) */

undefined * FUN_101e37aa4(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  uVar4 = param_2;
  func_0x000107c51f68();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37ee0);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  lVar3 = lVar2;
  func_0x0001010282b0(lVar2,uVar4);
  func_0x00010006c090(lVar2,uVar4);
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(param_2);
  uVar5 = uVar4;
  func_0x000107c4b82c();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    uVar14 = 0;
    do {
      puVar6 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      puVar12 = puVar6;
      func_0x000107c4b838();
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c5ce0c();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      if (uVar7 == 0) {
        func_0x000107c6142c(puVar13);
        func_0x000107c615e8(uVar4);
        goto LAB_101e37e9c;
      }
      uVar11 = uVar7;
      func_0x000107c44be0();
      if ((uVar11 & 1) == 0) {
        func_0x000107c6142c(puVar13);
        func_0x000107c615e8(uVar4);
LAB_101e37e94:
        func_0x000107c61170(uVar7);
LAB_101e37e9c:
        func_0x000107c61170(lVar3);
        return (undefined *)0x0;
      }
      func_0x000107c4b838(puVar6);
      func_0x000107c61180();
      pcStack_88 = FUN_101e37ee0;
      uStack_80 = 0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100ff0b04;
      puStack_90 = &UNK_11048d078;
      ppuVar8 = &puStack_a8;
      func_0x000107c60bc4(ppuVar8);
      uVar11 = uVar4;
      func_0x000107c4e918();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar6);
      if (uVar11 == 0) {
LAB_101e37d44:
        uVar15 = 0;
      }
      else {
        uVar9 = 0;
        func_0x0001002ed07c(0);
        uVar10 = uVar11;
        func_0x000107c5fc54(uVar11,uVar9);
        func_0x000107c61170(uVar11);
        if (uVar10 >> 0x3e == 0) {
          uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar11 = uVar10 & 0xffffffffffffff8;
          if ((uVar10 & 0x8000000000000000) != 0) {
            uVar11 = uVar10;
          }
          func_0x000107c60480();
        }
        if ((long)uVar11 < 1) {
          func_0x000107c6142c(uVar10);
          goto LAB_101e37d44;
        }
        if (uVar11 != 1) {
LAB_101e37e60:
          func_0x000107c6142c(puVar13);
          func_0x000107c615e8(uVar4);
          func_0x000107c6142c(uVar10);
          goto LAB_101e37e94;
        }
        if (uVar10 >> 0x3e == 0) {
          uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar11 = uVar10 & 0xffffffffffffff8;
          if ((uVar10 & 0x8000000000000000) != 0) {
            uVar11 = uVar10;
          }
          func_0x000107c60480();
        }
        if (uVar11 == 0) goto LAB_101e37e60;
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37ed8);
            (*pcVar1)();
          }
          uVar9 = *(undefined8 *)(uVar10 + 0x20);
          func_0x000107c61174(uVar9);
        }
        else {
          uVar9 = 0;
          func_0x0001002ec9a0(0,uVar10);
        }
        func_0x000107c6142c(uVar10);
        uVar11 = uVar4;
        func_0x000107c4e924();
        func_0x000107c61180();
        if (uVar11 == 0) {
          func_0x000107c6142c(puVar13);
          func_0x000107c615e8(uVar4);
          func_0x000107c61170(uVar9);
          goto LAB_101e37e94;
        }
        uVar10 = uVar11;
        func_0x000107c44838();
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar9);
        uVar15 = 1;
        if ((int)uVar10 != 0) {
          uVar15 = 2;
        }
      }
      uVar11 = uVar7;
      func_0x000107c5d040();
      func_0x000107c61180();
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37edc);
        (*pcVar1)();
      }
      uVar10 = uVar11;
      func_0x000107c42378();
      func_0x000107c61170(uVar11);
      if (uVar14 == 0x100000000) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37ed4);
        (*pcVar1)();
      }
      puVar6 = puVar13;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar6 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_101e37f44(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar11 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar11) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_101e37f44(puVar13,uVar11 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar11 + 1;
      *(int *)(puVar13 + uVar11 * 0x18 + 0x20) = (int)uVar14;
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar13 + uVar11 * 0x18 + 0x28) = uVar10;
      puVar13[uVar11 * 0x18 + 0x30] = uVar15;
      func_0x000107c61170(uVar7);
    } while (uVar5 != uVar14);
  }
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(lVar3);
  return puVar13;
}



/* Entry: 101e37ee0; end: 101e37f43;  */

bool FUN_101e37ee0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar3 == 1) {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e37f44);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
    bVar2 = (int)lVar3 == 5;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 101e37f44; end: 101e3804f;  */

undefined * FUN_101e37f44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e38050);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e31c90;
    func_0x0001000285a8(0x112e31c90,&UNK_10da1ad00);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar2 != param_4 || param_4 + uVar5 * 0x18 + 0x20 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 101e38050; end: 101e3806b;  */

void FUN_101e38050(long param_1,long param_2)

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



/* Entry: 101e3806c; end: 101e38183;  */

/* WARNING: Removing unreachable block (ram,0x000101e380e0) */

undefined * FUN_101e3806c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x000107c5c7cc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  func_0x000107c610f8(PTR_PTR_1126bfa60);
  uVar1 = uVar2;
  FUN_101e38184(uVar2,param_2);
  func_0x00010006c090(uVar2,param_2);
  func_0x000107c5c7d8(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126bfa68;
  func_0x000107c610f8(PTR_PTR_1126bfa68);
  uVar4 = uVar2;
  func_0x000107c5ee20(uVar2,param_2);
  func_0x000107c48c6c(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar2,param_2);
  return puVar3;
}



/* Entry: 101e38184; end: 101e38243;  */

long FUN_101e38184(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uVar2 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c613fc(unaff_x20,0x38,7);
  lVar3 = lVar1;
  func_0x000100bb5fd8(lVar1,param_2,uVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar2);
  return lVar3;
}



/* Entry: 101e38244; end: 101e382b3;  */

undefined8 FUN_101e38244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100bb5fd8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 101e382b4; end: 101e382f7;  */

void FUN_101e382b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e382f8; end: 101e38347;  */

undefined8 FUN_101e382f8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101e38348; end: 101e3838b;  */

undefined1  [16] FUN_101e38348(void)

{
  return ZEXT816(0x11048d190);
}



/* Entry: 101e3838c; end: 101e383b3;  */

void FUN_101e3838c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e383b4; end: 101e383bb;  */

undefined8 FUN_101e383b4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101e383bc; end: 101e38457;  */

long FUN_101e383bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000100bf354c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000100bf3d38(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100bf44c8();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return unaff_x20;
}



/* Entry: 101e38458; end: 101e38493;  */

void FUN_101e38458(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e38494; end: 101e384d7;  */

undefined1  [16] FUN_101e38494(void)

{
  return ZEXT816(0x11048d258);
}



/* Entry: 101e384d8; end: 101e3852b;  */

void FUN_101e384d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e3852c; end: 101e386d7;  */

long FUN_101e3852c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x000100bf4530();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100bf45bc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100bf4658();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 101e386d8; end: 101e3874b;  */

void FUN_101e386d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101e3874c; end: 101e3878f;  */

undefined1  [16] FUN_101e3874c(void)

{
  return ZEXT816(0x11048d320);
}



/* Entry: 101e38790; end: 101e387e3;  */

void FUN_101e38790(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e387e4; end: 101e3898f;  */

long FUN_101e387e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x000100bf2920();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100bf29a4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100bf2a00();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 101e38990; end: 101e38a03;  */

void FUN_101e38990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101e38a04; end: 101e38a47;  */

undefined1  [16] FUN_101e38a04(void)

{
  return ZEXT816(0x11048d3e8);
}



/* Entry: 101e38a48; end: 101e38a9b;  */

void FUN_101e38a48(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e38a9c; end: 101e38d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e38a9c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_c0 + -extraout_x8;
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434(uVar8);
  func_0x000107c40ef8(uVar5);
  func_0x000107c61180();
  func_0x000107c5ee94(puVar3);
  func_0x000107c61170(uVar5);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_78,0x21,0);
  func_0x000100fd88c8(puVar3,uVar7,uVar8);
  func_0x000107c614a8(auStack_78);
  lVar2 = _DAT_112fec8a8;
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar6 + _DAT_112fec8a8,auStack_90,0,0);
  uVar7 = *(undefined8 *)(lVar6 + lVar2);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar7);
  FUN_101e3a41c(auStack_78,auStack_b8);
  if (lStack_a0 == 0) {
    lVar2 = 0x112e32170;
    puVar3 = auStack_b8;
    func_0x000101e3a46c(puVar3,0x112e32170,&UNK_10da1b5c0);
    uVar1 = 0;
  }
  else {
    func_0x0001000a8868(auStack_b8,lStack_a0);
    (**(code **)(lStack_98 + 0x28))(param_1,lStack_a0,lStack_98);
    uVar1 = (uint)param_1;
    puVar3 = auStack_b8;
    func_0x0001000834e4(puVar3);
    lVar2 = lStack_a0;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000103b250a0();
  lVar6 = lVar2;
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar2);
  func_0x000103b25028();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar6);
  uVar7 = 0x6e776f6e6b6e75;
  if (param_2 == 1) {
    uVar7 = 0x6579616c706f656e;
  }
  uVar5 = 0xe700000000000000;
  if (param_2 == 1) {
    uVar5 = 0xe900000000000072;
  }
  uVar4 = 0x726579616c707661;
  if (param_2 != 0) {
    uVar4 = uVar7;
  }
  uVar7 = 0xe800000000000000;
  if (param_2 != 0) {
    uVar7 = uVar5;
  }
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000103b250f8();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x0001058ee7a8(uVar8,puVar3,lVar2,uVar4,uVar1 & 1,uVar7,1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000101e3a46c(auStack_78,0x112e32170,&UNK_10da1b5c0);
  return;
}



/* Entry: 101e38d64; end: 101e3918f;  */

void FUN_101e38d64(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_88,0x20,0);
  lVar11 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar3 = *param_2;
    uVar10 = param_2[1];
    lStack_b8 = param_3;
    lStack_b0 = param_4;
    func_0x000107c61434(lVar11);
    func_0x000100029284(lVar3);
    if ((uVar10 & 1) != 0) {
      (**(code **)(lVar14 + 0x10))
                (lVar15,*(long *)(lVar11 + 0x38) + *(long *)(lVar14 + 0x48) * lVar3,lVar2);
      (**(code **)(lVar14 + 0x20))(lVar12,lVar15,lVar2);
      func_0x000107c614a8(auStack_88);
      func_0x000107c6142c(lVar11);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c40ef8(uVar4);
      func_0x000107c61180();
      func_0x000107c5ee94(lVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c5ee68(lVar12);
      pcStack_c0 = *(code **)(lVar14 + 8);
      lVar14 = lVar2;
      (*pcStack_c0)(lVar5,lVar2);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
      lStack_c8 = lVar12;
      func_0x000103b250a0();
      lVar11 = lVar14;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar14);
      func_0x000103b25028();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar11);
      lVar12 = lStack_b0;
      lVar11 = lStack_b8;
      uVar4 = 0x6e776f6e6b6e75;
      if (lStack_b8 == 1) {
        uVar4 = 0x6579616c706f656e;
      }
      uVar8 = 0xe700000000000000;
      if (lStack_b8 == 1) {
        uVar8 = 0xe900000000000072;
      }
      uVar6 = 0x726579616c707661;
      if (lStack_b8 != 0) {
        uVar6 = uVar4;
      }
      uVar4 = 0xe800000000000000;
      if (lStack_b8 != 0) {
        uVar4 = uVar8;
      }
      bVar1 = lStack_b0 == 0;
      func_0x000107c5fadc(uVar6,uVar4);
      func_0x000107c6142c(uVar4);
      lVar15 = lVar5;
      uStack_d0 = uVar13;
      func_0x0001058ee468(param_1,uVar13,lVar5,lVar14,uVar6,bVar1);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar6);
      lVar5 = lStack_c8;
      if (lVar12 != 0) {
        lVar14 = lVar12;
        func_0x000107c614b0(lVar12);
        func_0x000103b250a0();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar15);
        uVar7 = 0x72655f616964656d;
        uVar4 = 0xe900000000000072;
        func_0x000107c5fadc(0x72655f616964656d,0xe900000000000072);
        func_0x000107c614cc(lVar12,auStack_90,auStack_a8);
        uVar6 = uStack_98;
        FUN_101e39b48(uStack_a0,uStack_98);
        uVar8 = uStack_a0;
        uVar13 = uVar6;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar6);
        func_0x000103b25028();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar13);
        uVar13 = 0x6579616c706f656e;
        if (lVar11 != 1) {
          uVar4 = 0xe700000000000000;
          uVar13 = 0x6e776f6e6b6e75;
        }
        uVar9 = 0x726579616c707661;
        if (lVar11 != 0) {
          uVar9 = uVar13;
        }
        uVar13 = 0xe800000000000000;
        if (lVar11 != 0) {
          uVar13 = uVar4;
        }
        uVar4 = uVar13;
        func_0x000107c5fadc(uVar9,uVar13);
        func_0x000107c6142c(uVar13);
        func_0x000103b250f8();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
        func_0x0001058eeb0c(uStack_d0,lVar14,uVar7,uVar8,uVar6,uVar9,uVar13,1);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar13);
        func_0x000107c614ac(lStack_b0);
      }
      (*pcStack_c0)(lVar5,lVar2);
      return;
    }
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c614a8(auStack_88);
  return;
}



/* Entry: 101e39190; end: 101e39207;  */

void FUN_101e39190(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_4)(param_2,param_3,0);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101e39208; end: 101e396df;  */

void FUN_101e39208(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  
  lVar2 = 0x112d373d8;
  lStack_d8 = param_4;
  lStack_d0 = param_3;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_110 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c8 = lVar13 - extraout_x12_00;
  lStack_b8 = *param_2;
  uVar6 = param_2[1];
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,0x20,0);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar11 = *(long *)(lVar7 + 0x10);
  uStack_c0 = uVar6;
  func_0x000107c61434(uVar6);
  if (lVar11 != 0) {
    func_0x000107c61434(lVar7);
    lVar11 = lStack_b8;
    uVar6 = uStack_c0;
    func_0x000100029284(lStack_b8);
    if ((uVar6 & 1) != 0) {
      puStack_e0 = puVar8;
      (**(code **)(lVar12 + 0x10))
                (lVar13,*(long *)(lVar7 + 0x38) + *(long *)(lVar12 + 0x48) * lVar11,lVar2);
      lVar11 = lStack_c8;
      (**(code **)(lVar12 + 0x20))(lStack_c8,lVar13,lVar2);
      func_0x000107c614a8(auStack_90);
      func_0x000107c6142c(lVar7);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c40ef8(uVar3);
      func_0x000107c61180();
      func_0x000107c5ee94(lVar10);
      func_0x000107c61170(uVar3);
      func_0x000107c5ee68(lVar11);
      pcStack_e8 = *(code **)(lVar12 + 8);
      lVar11 = lVar2;
      (*pcStack_e8)(lVar10,lVar2);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
      lStack_f0 = lVar2;
      func_0x000103b250a0();
      lVar2 = lVar11;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar11);
      func_0x000103b25028();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar2);
      lVar7 = lStack_d8;
      uVar3 = 0x6e776f6e6b6e75;
      if (lStack_d0 == 1) {
        uVar3 = 0x6579616c706f656e;
      }
      uVar5 = 0xe700000000000000;
      if (lStack_d0 == 1) {
        uVar5 = 0xe900000000000072;
      }
      uVar4 = 0x726579616c707661;
      if (lStack_d0 != 0) {
        uVar4 = uVar3;
      }
      uVar3 = 0xe800000000000000;
      if (lStack_d0 != 0) {
        uVar3 = uVar5;
      }
      bVar1 = lStack_d8 == 0;
      func_0x000107c5fadc(uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      lVar13 = lVar10;
      uStack_f8 = uVar9;
      func_0x0001058ede7c(param_1,uVar9,lVar10,lVar11,uVar4,bVar1);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(uVar4);
      lVar2 = lStack_f0;
      if (lVar7 == 0) {
        (*pcStack_e8)(lStack_c8,lStack_f0);
        puVar8 = puStack_e0;
      }
      else {
        lVar2 = lVar7;
        func_0x000107c614b0(lVar7);
        func_0x000103b250a0();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar13);
        uVar3 = 0x655f726579616c70;
        func_0x000107c5fadc(0x655f726579616c70,0xea00000000007272);
        uStack_100 = uVar3;
        func_0x000107c614cc(lVar7,auStack_98,auStack_b0);
        uVar5 = uStack_a0;
        FUN_101e39b48(uStack_a8,uStack_a0);
        uVar3 = uVar5;
        func_0x000107c5fadc();
        uStack_108 = uStack_a8;
        func_0x000107c6142c(uVar5);
        func_0x000103b25028();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar3);
        puVar8 = puStack_e0;
        uVar3 = 0xe900000000000072;
        uVar9 = 0x6579616c706f656e;
        if (lStack_d0 != 1) {
          uVar3 = 0xe700000000000000;
          uVar9 = 0x6e776f6e6b6e75;
        }
        uVar4 = 0x726579616c707661;
        if (lStack_d0 != 0) {
          uVar4 = uVar9;
        }
        uVar9 = 0xe800000000000000;
        if (lStack_d0 != 0) {
          uVar9 = uVar3;
        }
        uVar3 = uVar9;
        func_0x000107c5fadc(uVar4,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000103b250f8();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar3);
        uVar3 = uStack_100;
        func_0x0001058eeb0c(uStack_f8,lVar2,uStack_100,uStack_108,uVar5,uVar4,uVar9,1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uStack_108);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c614ac(lVar7);
        lVar2 = lStack_f0;
        (*pcStack_e8)(lStack_c8,lStack_f0);
      }
      goto LAB_101e39660;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_90);
LAB_101e39660:
  (**(code **)(lVar12 + 0x38))(puVar8,1,1,lVar2);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,0x21,0);
  func_0x000100fd88c8(puVar8,lStack_b8,uStack_c0);
  func_0x000107c614a8(auStack_90);
  return;
}



/* Entry: 101e396e0; end: 101e39873;  */

void FUN_101e396e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_5)(param_2,param_3,param_4);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101e39874; end: 101e398e7;  */

void FUN_101e39874(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_4)(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101e398e8; end: 101e39b47;  */

void FUN_101e398e8(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_88,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar3 = *param_2;
    uVar7 = param_2[1];
    lStack_90 = param_3;
    func_0x000107c61434(lVar8);
    func_0x000100029284(lVar3);
    if ((uVar7 & 1) != 0) {
      (**(code **)(lVar9 + 0x10))
                (lVar12,*(long *)(lVar8 + 0x38) + *(long *)(lVar9 + 0x48) * lVar3,lVar2);
      (**(code **)(lVar9 + 0x20))(lVar10,lVar12,lVar2);
      func_0x000107c614a8(auStack_88);
      func_0x000107c6142c(lVar8);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c40ef8(uVar4);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c5ee68(lVar10);
      pcVar13 = *(code **)(lVar9 + 8);
      lVar8 = lVar2;
      (*pcVar13)(puVar5,lVar2);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000103b250a0();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar8);
      uVar4 = 0x6e776f6e6b6e75;
      if (lStack_90 == 1) {
        uVar4 = 0x6579616c706f656e;
      }
      uVar1 = 0xe700000000000000;
      if (lStack_90 == 1) {
        uVar1 = 0xe900000000000072;
      }
      uVar6 = 0x726579616c707661;
      if (lStack_90 != 0) {
        uVar6 = uVar4;
      }
      uVar4 = 0xe800000000000000;
      if (lStack_90 != 0) {
        uVar4 = uVar1;
      }
      func_0x000107c5fadc(uVar6,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x0001058ee1bc(param_1,uVar11,puVar5,uVar6,1);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
      (*pcVar13)(lVar10,lVar2);
      return;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_88);
  return;
}



/* Entry: 101e39b48; end: 101e39edf;  */

undefined1  [16] FUN_101e39b48(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  long alStack_b0 [6];
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar8 = param_1[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  plVar3 = (long *)((long)alStack_b0 + (0x20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar6 = (long *)((long)plVar3 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar7 = (long *)((long)plVar6 - extraout_x12_00);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(plVar7);
  plVar1 = plVar7;
  func_0x000107c605a0(plVar7,param_1,param_2);
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1;
    uVar4 = param_2;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar8 + 0x20))(uVar4,plVar7,param_1);
  }
  else {
    (**(code **)(lVar8 + 8))(plVar7,param_1);
  }
  plVar2 = plVar1;
  func_0x000107c5ed2c();
  func_0x000107c614ac(plVar1);
  plVar1 = plVar2;
  func_0x0001090967b0();
  func_0x000107c61170(plVar2);
  if ((int)plVar1 == 0) {
    (*pcVar9)(plVar3);
    plVar1 = plVar3;
    func_0x000107c605a0(plVar3,param_1,param_2);
    if (plVar1 == (long *)0x0) {
      plVar1 = param_1;
      func_0x000107c613f8(param_1,param_2,0,0);
      (**(code **)(lVar8 + 0x20))(param_2,plVar3,param_1);
    }
    else {
      (**(code **)(lVar8 + 8))(plVar3);
      plVar3 = param_1;
    }
    plVar6 = plVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(plVar1);
    plVar1 = plVar6;
    func_0x000107c42210();
    func_0x000107c61180();
    plVar7 = plVar1;
    func_0x000107c5faec();
    func_0x000107c61170(plVar1);
    plVar1 = plVar6;
    func_0x000107c3fcb0();
    plStack_70 = plVar7;
    plStack_68 = plVar3;
    func_0x000107c5fb78(0x207e20,0xe300000000000000);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    plStack_80 = plVar1;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c61170(plVar6);
    func_0x000107c6142c(puVar5);
  }
  else {
    (*pcVar9)(plVar6);
    plVar1 = plVar6;
    func_0x000107c605a0(plVar6,param_1,param_2);
    if (plVar1 == (long *)0x0) {
      plVar1 = param_1;
      func_0x000107c613f8(param_1,param_2,0,0);
      (**(code **)(lVar8 + 0x20))(param_2,plVar6,param_1);
    }
    else {
      (**(code **)(lVar8 + 8))(plVar6);
      plVar6 = param_1;
    }
    plVar3 = plVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(plVar1);
    plVar1 = plVar3;
    func_0x00010909689c();
    func_0x000107c61180();
    func_0x000107c61170(plVar3);
    plStack_68 = (long *)0xe000000000000000;
    if (plVar1 == (long *)0x0) {
      plStack_70 = (long *)0x0;
    }
    else {
      plVar3 = plVar1;
      func_0x000107c5faec();
      func_0x000107c61170();
      plStack_80 = (long *)0x20;
      uStack_78 = 0xe100000000000000;
      alStack_b0[4] = 0;
      alStack_b0[5] = 0xe000000000000000;
      plStack_70 = plVar3;
      plStack_68 = plVar6;
      func_0x000100e8b654();
      plVar7[-2] = (long)plVar1;
      plVar7[-1] = (long)plVar1;
      plVar7[-4] = (long)PTR___sSSN_11034da80;
      plVar7[-3] = (long)plVar1;
      plVar3 = alStack_b0 + 6;
      plVar7 = alStack_b0 + 4;
      func_0x000107c601fc(plVar3,plVar7,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      func_0x000107c6142c(plVar6);
      plVar1 = plVar7;
      func_0x000107c5fb1c(plVar3,plVar7);
      func_0x000107c6142c(plVar7);
      plStack_70 = plVar3;
      plStack_68 = plVar1;
    }
  }
  auVar10._8_8_ = plStack_68;
  auVar10._0_8_ = plStack_70;
  return auVar10;
}



/* Entry: 101e39ee0; end: 101e39f23;  */

void FUN_101e39ee0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e39f24; end: 101e39f87;  */

void FUN_101e39f24(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [56];
  
  puVar2 = &UNK_11048d678;
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_11048d560;
  func_0x000107c613fc(&UNK_11048d560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  func_0x000107c613fc(&UNK_11048d678,0x58,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar5;
  *(undefined2 *)(puVar2 + 0x48) = *(undefined2 *)(param_1 + 6);
  *(undefined8 *)(puVar2 + 0x50) = param_2;
  func_0x000107c6157c(puVar1);
  FUN_101e3a290(param_1,auStack_88);
  func_0x00010090569c(FUN_101e3a3f4,puVar2,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101e39f88; end: 101e3a087;  */

void FUN_101e39f88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [56];
  
  lVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_11048d560;
  func_0x000107c613fc(&UNK_11048d560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  func_0x000107c613fc(param_6,0x60,7);
  *(undefined **)(param_6 + 0x10) = puVar1;
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(param_6 + 0x20) = param_1[1];
  *(undefined8 *)(param_6 + 0x18) = uVar4;
  *(undefined8 *)(param_6 + 0x30) = uVar6;
  *(undefined8 *)(param_6 + 0x28) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(param_6 + 0x40) = param_1[5];
  *(undefined8 *)(param_6 + 0x38) = uVar4;
  *(undefined2 *)(param_6 + 0x48) = *(undefined2 *)(param_1 + 6);
  *(undefined8 *)(param_6 + 0x50) = param_2;
  *(undefined8 *)(param_6 + 0x58) = param_3;
  func_0x000107c6157c(puVar1);
  FUN_101e3a290(param_1,auStack_98);
  func_0x000107c614b0(param_3);
  func_0x00010090569c(param_7,param_6,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_6);
  return;
}



/* Entry: 101e3a088; end: 101e3a163;  */

void FUN_101e3a088(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [56];
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_11048d560;
  func_0x000107c613fc(&UNK_11048d560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar4);
  puVar2 = &UNK_11048d5b0;
  func_0x000107c613fc(&UNK_11048d5b0,0x4a,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar5;
  *(undefined2 *)(puVar2 + 0x48) = *(undefined2 *)(param_1 + 6);
  func_0x000107c6157c(puVar1);
  FUN_101e3a290(param_1,auStack_78);
  func_0x00010090569c(FUN_101e3a2cc,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101e3a164; end: 101e3a177;  */

void FUN_101e3a164(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [56];
  
  puVar2 = &UNK_11048d588;
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_11048d560;
  func_0x000107c613fc(&UNK_11048d560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  func_0x000107c613fc(&UNK_11048d588,0x58,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar2 + 0x20) = param_1[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar2 + 0x40) = param_1[5];
  *(undefined8 *)(puVar2 + 0x38) = uVar5;
  *(undefined2 *)(puVar2 + 0x48) = *(undefined2 *)(param_1 + 6);
  *(undefined8 *)(puVar2 + 0x50) = param_2;
  func_0x000107c6157c(puVar1);
  FUN_101e3a290(param_1,auStack_88);
  func_0x00010090569c(FUN_101e3a268,puVar2,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101e3a178; end: 101e3a267;  */

void FUN_101e3a178(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [56];
  
  lVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_11048d560;
  func_0x000107c613fc(&UNK_11048d560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c613fc(param_5,0x58,7);
  *(undefined **)(param_5 + 0x10) = puVar1;
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(param_5 + 0x20) = param_1[1];
  *(undefined8 *)(param_5 + 0x18) = uVar4;
  *(undefined8 *)(param_5 + 0x30) = uVar6;
  *(undefined8 *)(param_5 + 0x28) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(param_5 + 0x40) = param_1[5];
  *(undefined8 *)(param_5 + 0x38) = uVar4;
  *(undefined2 *)(param_5 + 0x48) = *(undefined2 *)(param_1 + 6);
  *(undefined8 *)(param_5 + 0x50) = param_2;
  func_0x000107c6157c(puVar1);
  FUN_101e3a290(param_1,auStack_88);
  func_0x00010090569c(param_6,param_5,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_5);
  return;
}



/* Entry: 101e3a268; end: 101e3a28f;  */

void FUN_101e3a268(void)

{
  long unaff_x20;
  
  FUN_101e39874(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x50)
                ,FUN_101e398e8);
  return;
}



/* Entry: 101e3a290; end: 101e3a2cb;  */

undefined8 FUN_101e3a290(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103b29a00)(param_2,param_1);
  return param_2;
}



/* Entry: 101e3a2cc; end: 101e3a2d7;  */

void FUN_101e3a2cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar5,1,1,lVar4);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61428(lVar4 + 0x30,auStack_70,0x21,0);
    func_0x000100fda9f8(puVar5,uVar1,uVar2);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(lVar4);
  }
  func_0x000101e3a46c(puVar5,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101e3a2d8; end: 101e3a3b3;  */

void FUN_101e3a2d8(void)

{
  long unaff_x20;
  
  FUN_101e396e0(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x50)
                ,*(undefined8 *)(unaff_x20 + 0x58),FUN_101e39208);
  return;
}



/* Entry: 101e3a3b4; end: 101e3a3f3;  */

void FUN_101e3a3b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e3a3f4; end: 101e3a41b;  */

void FUN_101e3a3f4(void)

{
  long unaff_x20;
  
  FUN_101e39874(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x50)
                ,FUN_101e38a9c);
  return;
}



/* Entry: 101e3a41c; end: 101e3a4ab;  */

undefined8 FUN_101e3a41c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e32170;
  func_0x0001000285a8(0x112e32170,&UNK_10da1b5c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101e3a4ac; end: 101e3a4fb;  */

void FUN_101e3a4ac(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e32178 != 0) {
    return;
  }
  puVar1 = &UNK_11048d6a0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e32178 = param_1;
  return;
}



/* Entry: 101e3a4fc; end: 101e3a673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e3a4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a9658;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  func_0x000100bf3e04();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar5 + 0x10) = puVar2;
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(undefined8 *)(lVar5 + 0x28) = param_3;
  *(undefined **)(lVar5 + 0x30) = puVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001000d224c(alStack_88);
  plVar6 = alStack_88;
  func_0x0001000a8868(plVar6,lStack_70);
  uVar7 = 2;
  func_0x000100774b74(2,0x27,1,lStack_70,ppuStack_68,plVar6);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar5 + 0x20) = uVar7;
  func_0x0001000834e4(alStack_88);
  ppuStack_68 = &PTR_DAT_11048d510;
  alStack_88[0] = lVar5;
  lStack_70 = lVar4;
  func_0x0001002c2f64(0);
  func_0x000107c610f8();
  plVar6 = alStack_88;
  func_0x000100bf4414();
  func_0x000107c61170(param_3);
  *(long **)(unaff_x20 + 0x10) = plVar6;
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101e3a674; end: 101e3a67b;  */

void FUN_101e3a674(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e3a67c; end: 101e3a69f;  */

void FUN_101e3a67c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e3a6a0; end: 101e3a6ab;  */

void FUN_101e3a6a0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101e3a6ac; end: 101e3a70f;  */

void FUN_101e3a6ac(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e3a710; end: 101e3a723;  */

void FUN_101e3a710(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11048d788;
  if (lRam0000000112e32318 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e32318 = param_1;
  }
  return;
}



/* Entry: 101e3a724; end: 101e3ac17;  */

code * FUN_101e3a724(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_a0 + -extraout_x8;
  lVar2 = 0;
  func_0x000103b2dc40();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  pcVar7 = (code *)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &UNK_11048d7a8;
  func_0x000107c613fc(&UNK_11048d7a8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_80 = puVar3;
  uStack_78 = param_1;
  uStack_70 = param_2;
  func_0x000100087bd4(puVar6,FUN_101e3e048,auStack_90,lVar1);
  func_0x000107c61574(puVar3);
  puVar4 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar4 == 1) {
    FUN_101e3dfc0(puVar6,0x112e32328,&UNK_10da1b750);
    puVar3 = &UNK_11048d7d0;
    func_0x000107c613fc(&UNK_11048d7d0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    func_0x000107c61434(param_2);
    pcVar7 = FUN_101e3e064;
    func_0x0001000c0ebc(FUN_101e3e064,puVar3);
    func_0x000107c61574(puVar3);
    pcVar5 = FUN_101e3ac18;
    func_0x0001000bfde0(FUN_101e3ac18,0,lVar2);
    func_0x000107c61574(pcVar7);
  }
  else {
    func_0x000101e3cf20(puVar6,pcVar7);
    func_0x0001000285a8(0x112e32358,&UNK_10da1b930);
    pcVar5 = pcVar7;
    func_0x000100854cb0(pcVar7);
    func_0x000101e3cee4(pcVar7);
  }
  return pcVar5;
}



/* Entry: 101e3ac18; end: 101e3aceb;  */

void FUN_101e3ac18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar3 = 0x112e32348;
  func_0x0001000285a8(0x112e32348,&UNK_10da1b778);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000101e3e000(param_2,puVar5,0x112e32348,&UNK_10da1b778);
  func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8));
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000103b2dc40();
  puVar4 = puVar5 + iVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar4,1,lVar3);
  if ((int)puVar4 != 1) {
    func_0x000101e3cf20(puVar5 + iVar1,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e3acec);
  (*pcVar2)();
}



/* Entry: 101e3acec; end: 101e3aed3;  */

void FUN_101e3acec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long alStack_c0 [4];
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_61;
  
  lVar2 = 0x112e32348;
  alStack_c0[1] = param_1;
  func_0x0001000285a8(0x112e32348,&UNK_10da1b778);
  alStack_c0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)alStack_c0 + -extraout_x8);
  lVar2 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - extraout_x8_00;
  func_0x000101e3cf64(param_1,lVar5);
  lVar2 = 0;
  func_0x000103b2dc40();
  pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar7)(lVar5,0,1,lVar2);
  puVar3 = &UNK_11048d7a8;
  func_0x000107c613fc(&UNK_11048d7a8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar4 = 0x112d518a8;
  puStack_90 = puVar3;
  uStack_88 = param_2;
  uStack_80 = param_3;
  lStack_78 = lVar5;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_61,FUN_101e3dfa4,auStack_a0,uVar4);
  func_0x000107c61574(puVar3);
  FUN_101e3dfc0(lVar5,0x112e32328,&UNK_10da1b750);
  func_0x000101e3cf64(alStack_c0[1],lVar5);
  (*pcVar7)(lVar5,0,1,lVar2);
  iVar1 = *(int *)(alStack_c0[2] + 0x30);
  *puVar6 = param_2;
  *(undefined8 *)((long)alStack_c0 + -extraout_x8 + 8) = param_3;
  FUN_101e3df10(lVar5,(long)puVar6 + (long)iVar1);
  func_0x000107c61434(param_3);
  func_0x000100087c34(puVar6);
  FUN_101e3dfc0(puVar6,0x112e32348,&UNK_10da1b778);
  return;
}



/* Entry: 101e3aed4; end: 101e3af7f;  */

void FUN_101e3aed4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000103b2dc40();
    (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
  }
  else {
    FUN_101e3af80(param_1,param_3,param_4);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e3af80; end: 101e3b2cf;  */

void FUN_101e3af80(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000103b2dc40();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar9 = 0x112e32320;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar6 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  uVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar11 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uStack_90 = param_3;
  if (*(long *)(lVar6 + 0x10) == 0) {
    bVar8 = true;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar3 = param_2;
    func_0x000100029284(param_2);
    bVar8 = (param_3 & 1) == 0;
    if (!bVar8) {
      func_0x000101e3cf64(*(long *)(lVar6 + 0x38) + *(long *)(lVar5 + 0x48) * lVar3,param_1);
    }
    func_0x000107c6142c(lVar6);
  }
  pcVar7 = *(code **)(lVar5 + 0x38);
  (*pcVar7)(param_1,bVar8,1,lVar2);
  func_0x000107c614a8(auStack_78);
  (*pcVar7)(lVar12,1,1,lVar2);
  lVar9 = (long)*(int *)(lVar9 + 0x30);
  func_0x000101e3e000(param_1,lVar10,0x112e32328,&UNK_10da1b750);
  func_0x000101e3e000(lVar12,lVar10 + lVar9,0x112e32328,&UNK_10da1b750);
  pcVar7 = *(code **)(lVar5 + 0x30);
  lVar6 = lVar10;
  (*pcVar7)(lVar10,1,lVar2);
  if ((int)lVar6 == 1) {
    func_0x000101e3dfc0(lVar12,0x112e32328,&UNK_10da1b750);
    lVar9 = lVar10 + lVar9;
    (*pcVar7)(lVar9,1,lVar2);
    if ((int)lVar9 == 1) {
      func_0x000101e3dfc0(lVar10,0x112e32328,&UNK_10da1b750);
      return;
    }
  }
  else {
    func_0x000101e3e000(lVar10,uVar11,0x112e32328,&UNK_10da1b750);
    lVar6 = lVar10 + lVar9;
    (*pcVar7)(lVar6,1,lVar2);
    puVar1 = puStack_98;
    if ((int)lVar6 != 1) {
      func_0x000101e3cf20(lVar10 + lVar9,puStack_98);
      uVar4 = uVar11;
      func_0x000103b2dc78(uVar11,puVar1);
      func_0x000101e3cee4(puVar1);
      func_0x000101e3dfc0(lVar12,0x112e32328,&UNK_10da1b750);
      func_0x000101e3cee4(uVar11);
      func_0x000101e3dfc0(lVar10,0x112e32328,&UNK_10da1b750);
      if ((uVar4 & 1) != 0) {
        return;
      }
      goto LAB_101e3b23c;
    }
    func_0x000101e3dfc0(lVar12,0x112e32328,&UNK_10da1b750);
    func_0x000101e3cee4(uVar11);
  }
  func_0x000101e3dfc0(lVar10,0x112e32320,&UNK_10da1b8d0);
LAB_101e3b23c:
  func_0x000101e3c73c(param_2,uStack_90);
  return;
}



/* Entry: 101e3b2d0; end: 101e3b36b;  */

void FUN_101e3b2d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101e3b36c(param_3,param_4,param_5);
    func_0x000107c61574(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e3b36c; end: 101e3bbe3;  */

void FUN_101e3b36c(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long alStack_d0 [4];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [24];
  
  lVar14 = 0x112e32320;
  uStack_98 = param_3;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar20 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12;
  lVar8 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  uVar7 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[2] = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar7 - extraout_x12_00;
  lStack_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_01;
  alStack_d0[3] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar8 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = uVar7 - extraout_x12_03;
  lVar8 = 0;
  func_0x000103b2dc40();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar15 = (undefined8 *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_d0[1] = (long)puVar15 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = ((long)puVar15 - extraout_x12_04) - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar19 - extraout_x12_06);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x20,0);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  lStack_a8 = lVar14;
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101e3b688:
    func_0x000107c614a8(auStack_78);
    lVar14 = lStack_a0;
  }
  else {
    func_0x000107c61434(lVar11);
    uVar18 = param_1;
    uVar16 = param_2;
    func_0x000100029284(param_1);
    if ((uVar16 & 1) == 0) {
      func_0x000107c6142c(lVar11);
      goto LAB_101e3b688;
    }
    func_0x000101e3cf64(*(long *)(lVar11 + 0x38) + *(long *)(lVar13 + 0x48) * uVar18,lVar19);
    func_0x000101e3cf20(lVar19,puVar21);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar11);
    func_0x000101e3cf64(puVar21,lVar17);
    (**(code **)(lVar13 + 0x38))(lVar17,0,1,lVar8);
    lVar11 = (long)*(int *)(lVar14 + 0x30);
    func_0x000101e3e000(uStack_98,lVar20,0x112e32328,&UNK_10da1b750);
    func_0x000101e3e000(lVar17,lVar20 + lVar11,0x112e32328,&UNK_10da1b750);
    pcVar12 = *(code **)(lVar13 + 0x30);
    lVar14 = lVar20;
    (*pcVar12)(lVar20,1,lVar8);
    if ((int)lVar14 == 1) {
      func_0x000101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
      lVar11 = lVar20 + lVar11;
      (*pcVar12)(lVar11,1,lVar8);
      lVar14 = lStack_a0;
      if ((int)lVar11 != 1) {
LAB_101e3b6f4:
        lVar14 = lStack_a0;
        func_0x000101e3dfc0(lVar20,0x112e32320,&UNK_10da1b8d0);
        goto LAB_101e3b70c;
      }
      func_0x000101e3dfc0(lVar20,0x112e32328,&UNK_10da1b750);
LAB_101e3b7dc:
      func_0x000101e3cee4(puVar21);
    }
    else {
      func_0x000101e3e000(lVar20,uVar7,0x112e32328,&UNK_10da1b750);
      lVar14 = lVar20 + lVar11;
      (*pcVar12)(lVar14,1,lVar8);
      lVar19 = alStack_d0[1];
      if ((int)lVar14 == 1) {
        func_0x000101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
        func_0x000101e3cee4(uVar7);
        goto LAB_101e3b6f4;
      }
      func_0x000101e3cf20(lVar20 + lVar11,alStack_d0[1]);
      uVar18 = uVar7;
      func_0x000103b2dc78(uVar7,lVar19);
      func_0x000101e3cee4(lVar19);
      func_0x000101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
      func_0x000101e3cee4(uVar7);
      func_0x000101e3dfc0(lVar20,0x112e32328,&UNK_10da1b750);
      lVar14 = lStack_a0;
      if ((uVar18 & 1) != 0) goto LAB_101e3b7dc;
LAB_101e3b70c:
      func_0x000101e3cf64(puVar21,puVar15);
      puVar4 = puVar15;
      func_0x000107c614c4(puVar15,lVar8);
      if ((int)puVar4 == 0) {
        func_0x000101e3cee4(puVar21);
        puVar21 = puVar15;
        goto LAB_101e3b7dc;
      }
      if ((int)puVar4 == 1) {
        uVar9 = *puVar15;
        func_0x000107c4fd54(*(undefined8 *)(unaff_x20 + 0x10));
        func_0x000107c615e8(uVar9);
        goto LAB_101e3b7dc;
      }
      func_0x000101e3cee4(puVar21);
      lVar20 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar20 + -8) + 8))(puVar15,lVar20);
    }
  }
  uVar9 = uStack_98;
  lVar20 = alStack_d0[3];
  func_0x000101e3e000(uStack_98,alStack_d0[3],0x112e32328,&UNK_10da1b750);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000101e3c9ac(lVar20,param_1,param_2);
  func_0x000107c614a8(auStack_78);
  (**(code **)(lVar13 + 0x38))(lVar14,1,1,lVar8);
  lVar17 = lStack_b0;
  lVar20 = (long)*(int *)(lStack_a8 + 0x30);
  func_0x000101e3e000(uVar9,lStack_b0,0x112e32328,&UNK_10da1b750);
  func_0x000101e3e000(lVar14,lVar17 + lVar20,0x112e32328,&UNK_10da1b750);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar17;
  (*pcVar12)(lVar17,1,lVar8);
  lVar11 = alStack_d0[2];
  if ((int)lVar13 == 1) {
    func_0x000101e3dfc0(lVar14,0x112e32328,&UNK_10da1b750);
    lVar20 = lVar17 + lVar20;
    (*pcVar12)(lVar20,1,lVar8);
    if ((int)lVar20 == 1) {
      func_0x000101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
LAB_101e3ba18:
      if (*(long *)(unaff_x20 + 0x38) < 1) {
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x28,auStack_78,0x21,0);
      uVar7 = *(ulong *)(unaff_x20 + 0x28);
      uVar18 = *(ulong *)(uVar7 + 0x10);
      if (uVar18 == 0) {
        uVar10 = 0;
        uVar16 = 0;
      }
      else {
        lVar14 = 0;
        uVar10 = 0;
        do {
          uVar16 = *(ulong *)(uVar7 + lVar14 + 0x20);
          uVar1 = *(ulong *)(uVar7 + lVar14 + 0x28);
          if ((uVar16 == param_1 && uVar1 == param_2) ||
             (func_0x000107c605b8(uVar16,uVar1,param_1,param_2,0), (uVar16 & 1) != 0)) {
            uVar16 = uVar10 + 1;
            uVar18 = *(ulong *)(uVar7 + 0x10);
            if (uVar18 - 1 != uVar10) {
              do {
                if (uVar18 <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x101e3bbdc);
                  (*pcVar12)();
                }
                uVar1 = *(ulong *)(uVar7 + lVar14 + 0x30);
                uVar2 = *(ulong *)(uVar7 + lVar14 + 0x38);
                if ((uVar1 != param_1 || uVar2 != param_2) &&
                   (uVar5 = uVar1, func_0x000107c605b8(uVar1,uVar2,param_1,param_2,0),
                   (uVar5 & 1) == 0)) {
                  if (uVar16 != uVar10) {
                    if (uVar18 <= uVar10) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x101e3bbe0);
                      (*pcVar12)();
                    }
                    puVar21 = (undefined8 *)(uVar7 + 0x20 + uVar10 * 0x10);
                    uVar9 = *puVar21;
                    uVar3 = puVar21[1];
                    func_0x000107c61434(uVar3);
                    func_0x000107c61434(uVar2);
                    uVar18 = uVar7;
                    func_0x000107c61558();
                    *(ulong *)(unaff_x20 + 0x28) = uVar7;
                    if ((uVar18 & 1) == 0) {
                      func_0x0001014c4f24();
                      *(ulong *)(unaff_x20 + 0x28) = uVar7;
                    }
                    lVar8 = uVar7 + uVar10 * 0x10;
                    uVar6 = *(undefined8 *)(lVar8 + 0x28);
                    *(ulong *)(lVar8 + 0x20) = uVar1;
                    *(ulong *)(lVar8 + 0x28) = uVar2;
                    func_0x000107c6142c(uVar6);
                    *(ulong *)(unaff_x20 + 0x28) = uVar7;
                    if (*(ulong *)(uVar7 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x101e3bbe4);
                      (*pcVar12)();
                    }
                    lVar8 = uVar7 + lVar14;
                    uVar6 = *(undefined8 *)(lVar8 + 0x38);
                    *(undefined8 *)(lVar8 + 0x30) = uVar9;
                    *(undefined8 *)(lVar8 + 0x38) = uVar3;
                    func_0x000107c6142c(uVar6);
                    *(ulong *)(unaff_x20 + 0x28) = uVar7;
                  }
                  uVar10 = uVar10 + 1;
                }
                uVar16 = uVar16 + 1;
                uVar18 = *(ulong *)(uVar7 + 0x10);
                lVar14 = lVar14 + 0x10;
              } while (uVar16 != uVar18);
            }
            goto LAB_101e3baa4;
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x10;
        } while (uVar18 != uVar10);
        uVar16 = *(ulong *)(uVar7 + 0x10);
        uVar10 = uVar18;
LAB_101e3baa4:
        if ((long)uVar16 < (long)uVar10) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101e3bab0);
          (*pcVar12)();
        }
      }
      func_0x000101755f94(uVar10,uVar16);
      func_0x000107c614a8(auStack_78);
      return;
    }
  }
  else {
    func_0x000101e3e000(lVar17,alStack_d0[2],0x112e32328,&UNK_10da1b750);
    lVar13 = lVar17 + lVar20;
    (*pcVar12)(lVar13,1,lVar8);
    lVar8 = alStack_d0[1];
    if ((int)lVar13 != 1) {
      func_0x000101e3cf20(lVar17 + lVar20,alStack_d0[1]);
      uVar7 = lVar11;
      func_0x000103b2dc78(lVar11,lVar8);
      func_0x000101e3cee4(lVar8);
      func_0x000101e3dfc0(lVar14,0x112e32328,&UNK_10da1b750);
      func_0x000101e3cee4(lVar11);
      func_0x000101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
      if ((uVar7 & 1) != 0) goto LAB_101e3ba18;
      goto LAB_101e3b9a0;
    }
    func_0x000101e3dfc0(lVar14,0x112e32328,&UNK_10da1b750);
    func_0x000101e3cee4(lVar11);
  }
  func_0x000101e3dfc0(lVar17,0x112e32320,&UNK_10da1b8d0);
LAB_101e3b9a0:
  func_0x000101e3c73c(param_1,param_2);
  func_0x000101e3cb48();
  return;
}



/* Entry: 101e3bbe4; end: 101e3bc5b;  */

void FUN_101e3bbe4(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101e3bc5c();
    func_0x000107c61574(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e3bc5c; end: 101e3bef7;  */

void FUN_101e3bc5c(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  ulong auStack_c0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000103b2dc40();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar14 = (undefined8 *)((long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0x112e32330;
  func_0x0001000285a8(0x112e32330,&UNK_10da1b760);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)puVar14 - extraout_x8_00);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,1,0);
  lVar17 = *(long *)(unaff_x20 + 0x20);
  puVar18 = (ulong *)(lVar17 + 0x40);
  auStack_c0[1] = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-auStack_c0[1] < 0x40) {
    uVar13 = ~(-1L << (-auStack_c0[1] & 0x3f));
  }
  uVar13 = uVar13 & *puVar18;
  uVar9 = 0x3f - auStack_c0[1];
  func_0x000107c61438(lVar17,2);
  lVar19 = 0;
  lVar6 = lVar19;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar19 << 6;
      lVar6 = *(long *)(lVar17 + 0x38);
      puVar5 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar10 * 0x10);
      uVar7 = puVar5[1];
      *puVar16 = *puVar5;
      puVar16[1] = uVar7;
      iVar1 = *(int *)(lVar4 + 0x30);
      func_0x000101e3cf64(lVar6 + *(long *)(lVar8 + 0x48) * uVar10,(long)puVar16 + (long)iVar1);
      func_0x000101e3cf64((long)puVar16 + (long)iVar1,puVar14);
      puVar5 = puVar14;
      func_0x000107c614c4(puVar14,lVar3);
      if ((int)puVar5 == 0) {
        func_0x000107c61434(uVar7);
        func_0x000101e3cee4(puVar14);
      }
      else if ((int)puVar5 == 1) {
        uVar15 = *puVar14;
        uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
        func_0x000107c61434(uVar7);
        func_0x000107c4fd54(uVar11);
        func_0x000107c615e8(uVar15);
      }
      else {
        lVar6 = 0;
        func_0x000107c5ede0();
        pcVar12 = *(code **)(*(long *)(lVar6 + -8) + 8);
        func_0x000107c61434(uVar7);
        (*pcVar12)(puVar14,lVar6);
      }
      FUN_101e3dfc0(puVar16,0x112e32330,&UNK_10da1b760);
      lVar6 = lVar19;
    }
    bVar2 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar2) break;
    if ((long)(uVar9 >> 6) <= lVar19) {
      func_0x000107c6142c(lVar17);
      FUN_101e3df08(lVar17,puVar18,~auStack_c0[1],lVar6,0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
      *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar7);
      func_0x000107c61428(unaff_x20 + 0x28,auStack_90,1,0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6142c(uVar7);
      return;
    }
    uVar13 = puVar18[lVar19];
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x101e3bef8);
  (*pcVar12)();
}



/* Entry: 101e3bef8; end: 101e3bf8b;  */

void FUN_101e3bef8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101e3bf8c(param_3,param_4);
    func_0x000107c61574(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e3bf8c; end: 101e3cee3;  */

void FUN_101e3bf8c(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x8_01;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong *puVar21;
  long unaff_x20;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  code *pcVar29;
  ulong auStack_120 [5];
  undefined *puStack_b0;
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [32];
  
  lVar18 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar9 = (long)auStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar17 - extraout_x12_00;
  lVar5 = 0;
  func_0x000103b2dc40();
  uVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar22 + 0x40));
  lVar18 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_120[4] = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)(lVar18 - extraout_x12_01);
  lVar18 = 0x112e32330;
  func_0x0001000285a8(0x112e32330,&UNK_10da1b760);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (ulong *)((long)puVar14 - extraout_x8_01);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_80,1,0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  puVar21 = (ulong *)(lVar6 + 0x40);
  auStack_120[1] = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar27 = 0xffffffffffffffff;
  if (-auStack_120[1] < 0x40) {
    uVar27 = ~(-1L << (-auStack_120[1] & 0x3f));
  }
  uVar27 = uVar27 & *puVar21;
  uVar15 = 0x3f - auStack_120[1];
  func_0x000107c61438(lVar6,2);
  lVar23 = 0;
  puStack_b0 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  auStack_120[3] = uVar22;
  auStack_120[2] = lVar9;
  lVar9 = lVar23;
  while( true ) {
    for (; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
      uVar25 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) | lVar23 << 6;
      lVar9 = *(long *)(lVar6 + 0x38);
      puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar16 * 0x10);
      uVar25 = *puVar1;
      uVar10 = puVar1[1];
      *puVar26 = uVar25;
      puVar26[1] = uVar10;
      lVar28 = (long)*(int *)(lVar18 + 0x30);
      lVar19 = *(long *)(uVar22 + 0x48);
      func_0x000101e3cf64(lVar9 + lVar19 * uVar16,(long)puVar26 + lVar28);
      func_0x000107c61434(uVar10);
      uVar16 = param_1;
      func_0x000107c5fbb8(param_1,param_2,uVar25,uVar10);
      if ((uVar16 & 1) == 0) {
        func_0x000101e3cf64((long)puVar26 + lVar28,lVar13);
        pcVar29 = *(code **)(uVar22 + 0x38);
        (*pcVar29)(lVar13,0,1,lVar5);
        FUN_101e3df10(lVar13,lVar17);
        lVar9 = lVar17;
        (**(code **)(uVar22 + 0x30))(lVar17,1,lVar5);
        if ((int)lVar9 == 1) {
          func_0x000107c61434(uVar10);
          FUN_101e3dfc0(lVar17,0x112e32328,&UNK_10da1b750);
          func_0x000107c61434(puStack_b0);
          uVar22 = uVar10;
          func_0x000100029284();
          func_0x000107c6142c(puStack_b0);
          if ((uVar22 & 1) == 0) {
            uVar24 = 1;
            uVar22 = auStack_120[2];
          }
          else {
            puVar8 = puStack_b0;
            func_0x000107c61558();
            apuStack_98[0] = puStack_b0;
            if ((int)puVar8 == 0) {
              FUN_101e48938();
            }
            puStack_b0 = apuStack_98[0];
            func_0x000107c6142c(*(undefined8 *)
                                 (*(long *)(apuStack_98[0] + 0x30) + uVar25 * 0x10 + 8));
            uVar22 = auStack_120[2];
            func_0x000101e3cf20(*(long *)(puStack_b0 + 0x38) + uVar25 * lVar19,auStack_120[2]);
            FUN_101e48e10(uVar25,puStack_b0);
            uVar24 = 0;
          }
          (*pcVar29)(uVar22,uVar24,1,lVar5);
          func_0x000107c6142c(uVar10);
          FUN_101e3dfc0(uVar22,0x112e32328,&UNK_10da1b750);
          uVar22 = auStack_120[3];
        }
        else {
          func_0x000101e3cf20(lVar17,auStack_120[4]);
          func_0x000107c61434(uVar10);
          puVar8 = puStack_b0;
          func_0x000107c61558();
          apuStack_98[0] = puStack_b0;
          uVar22 = uVar25;
          uVar16 = uVar10;
          func_0x000100029284();
          uVar20 = (ulong)~(uint)uVar16 & 1;
          lVar9 = *(long *)(puStack_b0 + 0x10) + uVar20;
          if (SCARRY8(*(long *)(puStack_b0 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c724);
            (*pcVar29)();
          }
          if (*(long *)(puStack_b0 + 0x18) < lVar9) {
            FUN_101e3d3fc(lVar9,puVar8);
            uVar22 = uVar25;
            uVar20 = uVar10;
            func_0x000100029284();
            if (((uint)uVar16 & 1) != ((uint)uVar20 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c73c);
              (*pcVar29)();
            }
          }
          else if ((int)puVar8 == 0) {
            FUN_101e48938();
          }
          puVar8 = apuStack_98[0];
          puStack_b0 = apuStack_98[0];
          if ((uVar16 & 1) == 0) {
            *(ulong *)(apuStack_98[0] + (uVar22 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_98[0] + (uVar22 >> 6) * 8 + 0x40) | 1L << (uVar22 & 0x3f);
            puVar1 = (ulong *)(*(long *)(apuStack_98[0] + 0x30) + uVar22 * 0x10);
            *puVar1 = uVar25;
            puVar1[1] = uVar10;
            func_0x000101e3cf20(auStack_120[4],*(long *)(apuStack_98[0] + 0x38) + uVar22 * lVar19);
            lVar9 = *(long *)(puVar8 + 0x10);
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c72c);
              (*pcVar29)();
            }
            *(long *)(puVar8 + 0x10) = lVar9 + 1;
            uVar22 = auStack_120[3];
          }
          else {
            func_0x000101e3df60(auStack_120[4],*(long *)(apuStack_98[0] + 0x38) + uVar22 * lVar19);
            func_0x000107c6142c(uVar10);
            uVar22 = auStack_120[3];
          }
        }
      }
      else {
        func_0x000101e3cf64((long)puVar26 + lVar28,puVar14);
        puVar7 = puVar14;
        func_0x000107c614c4(puVar14,lVar5);
        if ((int)puVar7 == 0) {
          func_0x000101e3cee4(puVar14);
        }
        else if ((int)puVar7 == 1) {
          uVar24 = *puVar14;
          func_0x000107c4fd54(*(undefined8 *)(unaff_x20 + 0x10));
          func_0x000107c615e8(uVar24);
        }
        else {
          lVar9 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar9 + -8) + 8))(puVar14,lVar9);
        }
      }
      FUN_101e3dfc0(puVar26,0x112e32330,&UNK_10da1b760);
      lVar9 = lVar23;
    }
    bVar4 = SCARRY8(lVar23,1);
    lVar23 = lVar23 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c70c);
      (*pcVar29)();
    }
    if ((long)(uVar15 >> 6) <= lVar23) break;
    uVar27 = puVar21[lVar23];
  }
  func_0x000107c6142c(lVar6);
  FUN_101e3df08(lVar6,puVar21,~auStack_120[1],lVar9,0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puStack_b0;
  func_0x000107c61434();
  func_0x000107c6142c(uVar24);
  func_0x000107c61428(unaff_x20 + 0x28,apuStack_98,0x21,0);
  uVar27 = *(ulong *)(unaff_x20 + 0x28);
  puVar21 = (ulong *)(uVar27 + 0x10);
  uVar22 = *puVar21;
  if (uVar22 == 0) {
    uVar15 = 0;
    uVar25 = 0;
  }
  else {
    lVar18 = 0;
    uVar15 = 0;
    do {
      uVar24 = *(undefined8 *)(uVar27 + lVar18 + 0x20);
      uVar12 = *(undefined8 *)(uVar27 + lVar18 + 0x28);
      func_0x000107c61434(uVar12);
      uVar10 = param_1;
      func_0x000107c5fbb8(param_1,param_2,uVar24,uVar12);
      func_0x000107c6142c(uVar12);
      uVar25 = uVar15 + 1;
      if ((uVar10 & 1) != 0) {
        uVar22 = *puVar21;
        if (uVar22 - 1 != uVar15) {
          do {
            if (uVar22 <= uVar25) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c710);
              (*pcVar29)();
            }
            lVar5 = uVar27 + lVar18;
            uVar24 = *(undefined8 *)(lVar5 + 0x30);
            uVar12 = *(undefined8 *)(lVar5 + 0x38);
            func_0x000107c61434(uVar12);
            uVar22 = param_1;
            func_0x000107c5fbb8(param_1,param_2,uVar24,uVar12);
            func_0x000107c6142c(uVar12);
            if ((uVar22 & 1) == 0) {
              if (uVar25 != uVar15) {
                if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
                  pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c714);
                  (*pcVar29)();
                }
                if (*puVar21 <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c718);
                  (*pcVar29)();
                }
                if (*puVar21 <= uVar25) {
                    /* WARNING: Does not return */
                  pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c71c);
                  (*pcVar29)();
                }
                puVar14 = (undefined8 *)(uVar27 + 0x20 + uVar15 * 0x10);
                uVar24 = *puVar14;
                uVar2 = puVar14[1];
                uVar12 = *(undefined8 *)(lVar5 + 0x30);
                uVar3 = *(undefined8 *)(lVar5 + 0x38);
                func_0x000107c61434(uVar2);
                func_0x000107c61434(uVar3);
                uVar22 = uVar27;
                func_0x000107c61558();
                *(ulong *)(unaff_x20 + 0x28) = uVar27;
                if ((uVar22 & 1) == 0) {
                  func_0x0001014c4f24();
                  *(ulong *)(unaff_x20 + 0x28) = uVar27;
                }
                lVar5 = uVar27 + uVar15 * 0x10;
                uVar11 = *(undefined8 *)(lVar5 + 0x28);
                *(undefined8 *)(lVar5 + 0x20) = uVar12;
                *(undefined8 *)(lVar5 + 0x28) = uVar3;
                func_0x000107c6142c(uVar11);
                *(ulong *)(unaff_x20 + 0x28) = uVar27;
                if (*(ulong *)(uVar27 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                  pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c720);
                  (*pcVar29)();
                }
                lVar5 = uVar27 + lVar18;
                uVar12 = *(undefined8 *)(lVar5 + 0x38);
                *(undefined8 *)(lVar5 + 0x30) = uVar24;
                *(undefined8 *)(lVar5 + 0x38) = uVar2;
                func_0x000107c6142c(uVar12);
                *(ulong *)(unaff_x20 + 0x28) = uVar27;
              }
              uVar15 = uVar15 + 1;
            }
            uVar25 = uVar25 + 1;
            puVar21 = (ulong *)(uVar27 + 0x10);
            uVar22 = *puVar21;
            lVar18 = lVar18 + 0x10;
          } while (uVar25 != uVar22);
        }
        if ((long)uVar25 < (long)uVar15) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x101e3c728);
          (*pcVar29)();
        }
        goto LAB_101e3c5d0;
      }
      lVar18 = lVar18 + 0x10;
      uVar15 = uVar25;
    } while (uVar22 != uVar25);
    uVar15 = *puVar21;
    uVar25 = uVar15;
  }
LAB_101e3c5d0:
  func_0x000101755f94(uVar15,uVar25);
  func_0x000107c614a8(apuStack_98);
  func_0x000107c6142c(puStack_b0);
  return;
}



/* Entry: 101e3cee4; end: 101e3cfa7;  */

undefined8 FUN_101e3cee4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103b2dc40();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101e3cfa8; end: 101e3d373;  */

ulong FUN_101e3cfa8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3d090);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_101e3d3fc(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3d048);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101e48938();
    lVar4 = *unaff_x20;
    goto joined_r0x000101e3d0a4;
  }
  lVar4 = *unaff_x20;
joined_r0x000101e3d0a4:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000103b2dc40();
    uVar3 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2;
    lVar4 = 0;
    func_0x000103b2dc40();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(uVar3,param_1,lVar4);
    return uVar3;
  }
  FUN_101e3d374();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 101e3d374; end: 101e3d3fb;  */

void FUN_101e3d374(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  func_0x000103b2dc40();
  func_0x000101e3cf20(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e3d3fc);
  (*pcVar2)();
}



/* Entry: 101e3d3fc; end: 101e3dc3b;  */

void FUN_101e3d3fc(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 auStack_a8 [72];
  
  lVar5 = 0;
  func_0x000103b2dc40();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar18 = *unaff_x20;
  lVar5 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar5 = param_1;
  }
  uVar6 = 0x112e32338;
  func_0x0001000285a8(0x112e32338,&UNK_10da1b8e0);
  lVar7 = lVar18;
  func_0x000107c60490(lVar18,lVar5,param_2,uVar6);
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_101e3d6d0:
    func_0x000107c61574(lVar18);
LAB_101e3d6d8:
    *unaff_x20 = lVar7;
    return;
  }
  puVar21 = (ulong *)(lVar18 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar21;
  lVar5 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar17 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e3d700);
          (*pcVar4)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar18);
            goto LAB_101e3d6d8;
          }
          uVar20 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
            *puVar21 = -1L << (uVar20 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar21,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar18 + 0x10) = 0;
          goto LAB_101e3d6d0;
        }
        uVar20 = puVar21[lVar17];
        lVar8 = lVar8 + 1;
      } while (uVar20 == 0);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar17 = lVar8;
    }
    uVar12 = LZCOUNT(uVar12) | lVar17 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar12 * 0x10);
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    lVar19 = *(long *)(lVar10 + 0x48);
    lVar8 = *(long *)(lVar18 + 0x38) + lVar19 * uVar12;
    if ((param_2 & 1) == 0) {
      func_0x000101e3cf64(lVar8,puVar11);
      func_0x000107c61434(uVar2);
    }
    else {
      func_0x000101e3cf20(lVar8,puVar11);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar6,uVar2);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar12 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar5 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar12) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e3d704);
          (*pcVar4)();
        }
        uVar13 = 0;
        if (uVar15 != uVar12) {
          uVar13 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar12 | bVar3);
        uVar15 = *(ulong *)(lVar5 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar5 + uVar13) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar5 + uVar13);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000101e3cf20(puVar11,*(long *)(lVar7 + 0x38) + lVar19 * uVar12);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar17;
  } while( true );
}



/* Entry: 101e3dc3c; end: 101e3dcbb;  */

undefined * FUN_101e3dc3c(undefined *param_1,undefined *param_2)

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
    FUN_101e49340();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101e3dcbc; end: 101e3dde3;  */

ulong FUN_101e3dcbc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3dde4);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101e3dc3c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3dde0);
      (*pcVar1)();
    }
    FUN_101e3dde4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101e3dde4; end: 101e3df07;  */

long FUN_101e3dde4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e3df04);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e3df08);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e32350;
        func_0x0001000285a8(0x112e32350,&UNK_10da1b780);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e32350;
      func_0x0001000285a8(0x112e32350,&UNK_10da1b780);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e3df00);
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



/* Entry: 101e3df08; end: 101e3df0f;  */

void FUN_101e3df08(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101e3df10; end: 101e3dfa3;  */

undefined8 FUN_101e3df10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101e3dfa4; end: 101e3dfbf;  */

void FUN_101e3dfa4(void)

{
  long unaff_x20;
  
  FUN_101e3b2d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101e3dfc0; end: 101e3e047;  */

undefined8 FUN_101e3dfc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e3e048; end: 101e3e063;  */

void FUN_101e3e048(void)

{
  long unaff_x20;
  
  FUN_101e3aed4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e3e064; end: 101e3e07f;  */

uint FUN_101e3e064(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x000103b2dc40();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = 0x112e32320;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar10 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  uVar6 = *param_1;
  if ((uVar6 != uVar1) || (param_1[1] != uVar2)) {
    func_0x000107c605b8(uVar6,param_1[1],uVar1,uVar2,0);
    uVar8 = 0;
    if ((uVar6 & 1) == 0) goto LAB_101e3abf4;
  }
  lVar7 = 0x112e32348;
  puStack_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e32348,&UNK_10da1b778);
  iVar3 = *(int *)(lVar7 + 0x30);
  (**(code **)(lVar14 + 0x38))(lVar11,1,1,lVar5);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000101e3e000((long)param_1 + (long)iVar3,lVar9,0x112e32328,&UNK_10da1b750);
  func_0x000101e3e000(lVar11,lVar9 + lVar13,0x112e32328,&UNK_10da1b750);
  pcVar12 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar9;
  (*pcVar12)(lVar9,1,lVar5);
  if ((int)lVar14 == 1) {
    func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
    lVar13 = lVar9 + lVar13;
    (*pcVar12)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      func_0x000101e3dfc0(lVar9,0x112e32328,&UNK_10da1b750);
      uVar8 = 0;
      goto LAB_101e3abf4;
    }
  }
  else {
    func_0x000101e3e000(lVar9,lVar10,0x112e32328,&UNK_10da1b750);
    lVar14 = lVar9 + lVar13;
    (*pcVar12)(lVar14,1,lVar5);
    puVar4 = puStack_68;
    if ((int)lVar14 != 1) {
      func_0x000101e3cf20(lVar9 + lVar13,puStack_68);
      lVar13 = lVar10;
      func_0x000103b2dc78(lVar10,puVar4);
      FUN_101e3cee4(puVar4);
      func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
      FUN_101e3cee4(lVar10);
      func_0x000101e3dfc0(lVar9,0x112e32328,&UNK_10da1b750);
      uVar8 = (uint)lVar13 ^ 1;
      goto LAB_101e3abf4;
    }
    func_0x000101e3dfc0(lVar11,0x112e32328,&UNK_10da1b750);
    FUN_101e3cee4(lVar10);
  }
  func_0x000101e3dfc0(lVar9,0x112e32320,&UNK_10da1b8d0);
  uVar8 = 1;
LAB_101e3abf4:
  return uVar8 & 1;
}



/* Entry: 101e3e080; end: 101e3e0c3;  */

void FUN_101e3e080(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101e3e0c4; end: 101e3e0e3;  */

void FUN_101e3e0c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101e3e0e4; end: 101e3e107;  */

void FUN_101e3e0e4(void)

{
  undefined8 in_x4;
  
  FUN_101e3eb68();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x4);
  return;
}



/* Entry: 101e3e108; end: 101e3e317;  */

/* WARNING: Removing unreachable block (ram,0x000101e3e220) */

void FUN_101e3e108(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [32];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_3 != 0) {
    func_0x000107c5edd0(puVar8,param_2);
    puVar2 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_101e3f040(puVar8,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar1);
      uVar7 = 0;
      lVar3 = lVar9;
      func_0x000107c5ede8(lVar9,0);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      lVar5 = lVar3;
      func_0x000107c5ee20(lVar3,uVar7);
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar6);
      func_0x000107c51774(param_1);
      func_0x000107c61180();
      func_0x00010006c090(lVar3,uVar7);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar10 + 8))(lVar9,lVar1);
      func_0x000107c61428(param_4 + 0x10,auStack_90,1,0);
      uVar7 = *(undefined8 *)(param_4 + 0x10);
      *(undefined **)(param_4 + 0x10) = puVar4;
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 101e3e318; end: 101e3e59f;  */

void FUN_101e3e318(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112e32328;
  puVar3 = &UNK_10da1b750;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c44314();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar2 = lVar1;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
        func_0x000107c5ee20(lVar2,puVar3);
        func_0x00010006c090(lVar2,puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c51770();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      *(undefined **)(param_4 + 0x10) = puVar3;
      func_0x000107c61170(uVar4);
      return;
    }
    func_0x000107c615e8(param_1);
  }
  lVar1 = 0;
  func_0x000103b2dc40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,1,1,lVar1);
  (*param_2)(puVar5,1,0,2);
  FUN_101e3f040(puVar5,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e3e5a0; end: 101e3e5e7;  */

void FUN_101e3e5a0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 101e3e5e8; end: 101e3e76b;  */

void FUN_101e3e5e8(long param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)&uStack_50 - extraout_x8;
  if (param_1 != 0) {
    lStack_48 = param_1;
    func_0x000107c614b0();
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar3 = 0;
    func_0x000100ea57c8(0);
    puVar4 = &uStack_50;
    func_0x000107c6147c(puVar4,&lStack_48,uVar2,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = 0;
      func_0x000103b2dc40();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar1,1,1,lVar5);
      uVar2 = uStack_50;
      func_0x000107c61174(uStack_50);
      (*param_2)(lVar1,uStack_50,0,0);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      goto LAB_101e3e73c;
    }
  }
  lVar5 = 0;
  func_0x000103b2dc40();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar1,1,1,lVar5);
  (*param_2)(lVar1,0xd000000000000017,0x800000010f014bb0,1);
LAB_101e3e73c:
  FUN_101e3f040(lVar1,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e3e76c; end: 101e3eb67;  */

undefined * FUN_101e3e76c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  long lVar12;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&pcStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = param_1;
  func_0x000103b25150(param_1);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(lVar10,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c4766c(puVar2);
  func_0x000107c61170(lVar10);
  func_0x000107c5eea0(lVar11);
  func_0x000107c5ee6c(lVar11 - extraout_x12,0x40f5180000000000);
  pcStack_70 = *(code **)(lVar12 + 8);
  (*pcStack_70)(lVar11,lVar1);
  uVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar3 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c5fc48(uVar7,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar3);
  func_0x000107c61170(uVar7);
  puVar4 = PTR_PTR_1126bff90;
  func_0x000107c61168(PTR_PTR_1126bff90);
  func_0x000107c4e954();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5e4d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5ee70();
  puVar6 = puVar4;
  func_0x000107c5e548(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
    lVar10 = *(long *)(param_1 + 0x30);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5fadc(uVar7);
    lVar10 = *(long *)(param_1 + 0x30);
  }
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5fadc(uVar8);
  }
  puVar5 = PTR_PTR_1126c98a8;
  func_0x000107c610f8(PTR_PTR_1126c98a8);
  func_0x000107c4704c();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c5e530(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar6 = PTR_PTR_1126b8010;
  func_0x000107c610f8(PTR_PTR_1126b8010);
  func_0x000107c45ee0();
  puVar9 = puVar4;
  func_0x000107c5e730(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c5e86c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar6 = PTR_PTR_1126b1378;
  func_0x000107c61168(PTR_PTR_1126b1378);
  func_0x000107c4c950(puVar2);
  func_0x000107c5d908(puVar6);
  func_0x000107c61180();
  puVar9 = puVar4;
  func_0x000107c5e758(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  puVar6 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126bfef0;
  func_0x000107c610f8(PTR_PTR_1126bfef0);
  func_0x000107c47670();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  (*pcStack_70)(lVar11 - extraout_x12,lVar1);
  return puVar9;
}



/* Entry: 101e3eb68; end: 101e3efd3;  */

void FUN_101e3eb68(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long extraout_x8;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long alStack_e0 [4];
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  plVar11 = (long *)((long)alStack_e0 + lVar2 + 0x10);
  puVar3 = &UNK_11048d848;
  func_0x000107c613fc(&UNK_11048d848,0x38,7);
  puVar3[0x10] = (char)param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(param_5);
  lVar12 = param_1;
  func_0x000107c4ca5c();
  if ((lVar12 == 2) || (lVar12 = param_1, func_0x000107c4ca5c(), lVar12 == 1)) {
    puVar4 = &UNK_11048d870;
    alStack_e0[3] = param_6;
    uStack_bc = param_2;
    uStack_b8 = param_3;
    uStack_b0 = param_4;
    uStack_a8 = param_5;
    func_0x000107c613fc(&UNK_11048d870,0x18,7);
    plVar13 = (long *)(puVar4 + 0x10);
    *plVar13 = 0;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_101e3f000;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f11160;
    puStack_88 = &UNK_11048d888;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11048d8c0;
    func_0x000107c613fc(&UNK_11048d8c0,0x28,7);
    *(code **)(puVar6 + 0x10) = FUN_101e3efd4;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    pcStack_80 = (code *)0x101e3f024;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f7cecc;
    puStack_88 = &UNK_11048d8d8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    pcStack_80 = (code *)0x101e3f030;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x101e3f098;
    puStack_88 = &UNK_11048d900;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11048d938;
    func_0x000107c613fc(&UNK_11048d938,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_101e3efd4;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcStack_80 = (code *)0x101e3f038;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100ff4e14;
    puStack_88 = &UNK_11048d950;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar9);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c4c798(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61428(plVar13,&puStack_a0,0,0);
    lVar12 = *plVar13;
    if (lVar12 == 0) {
      lVar12 = 0;
      func_0x000103b2dc40();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(plVar11,1,1,lVar12);
      *(long *)((long)alStack_e0 + lVar2) = alStack_e0[3];
      FUN_101e45b38(plVar11,0xd00000000000001c,0x800000010f014b90,1,uStack_bc & 1,uStack_b8,
                    uStack_b0,uStack_a8);
    }
    else {
      *plVar11 = lVar12;
      lVar10 = 0;
      func_0x000103b2dc40();
      func_0x000107c6159c(plVar11,lVar10,0);
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(plVar11,0,1,lVar10);
      func_0x000107c61174(lVar12);
      func_0x000107c61174();
      *(long *)((long)alStack_e0 + lVar2) = alStack_e0[3];
      FUN_101e45b38(plVar11,0,0,0xff,uStack_bc & 1,uStack_b8,uStack_b0,uStack_a8);
      func_0x000107c61170(lVar12);
    }
    FUN_101e3f040(plVar11,0x112e32328,&UNK_10da1b750);
    func_0x000107c61574(puVar3);
    puVar3 = puVar4;
  }
  else {
    lVar12 = 0;
    func_0x000103b2dc40();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(plVar11,1,1,lVar12);
    *(undefined8 *)((long)alStack_e0 + lVar2) = param_6;
    FUN_101e45b38(plVar11,3,0,2,param_2 & 1,param_3,param_4,param_5);
    FUN_101e3f040(plVar11,0x112e32328,&UNK_10da1b750);
  }
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101e3efd4; end: 101e3efff;  */

void FUN_101e3efd4(void)

{
  FUN_101e45b38();
  return;
}



/* Entry: 101e3f000; end: 101e3f03f;  */

/* WARNING: Removing unreachable block (ram,0x000101e3e220) */

void FUN_101e3f000(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [32];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_3 != 0) {
    func_0x000107c5edd0(puVar8,param_2);
    puVar2 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_101e3f040(puVar8,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar1);
      uVar7 = 0;
      lVar3 = lVar9;
      func_0x000107c5ede8(lVar9,0);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      lVar5 = lVar3;
      func_0x000107c5ee20(lVar3,uVar7);
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar6);
      func_0x000107c51774(param_1);
      func_0x000107c61180();
      func_0x00010006c090(lVar3,uVar7);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar10 + 8))(lVar9,lVar1);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_90,1,0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined **)(unaff_x20 + 0x10) = puVar4;
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 101e3f040; end: 101e3f07f;  */

undefined8 FUN_101e3f040(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e3f080; end: 101e3f09b;  */

void FUN_101e3f080(long param_1,long param_2)

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



/* Entry: 101e3f09c; end: 101e3f1cb;  */

uint FUN_101e3f09c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x50);
  if (*(byte *)(unaff_x20 + 0x50) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e3f134);
      (*pcVar1)();
    }
    uVar3 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f014bf0);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    uVar5 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *(char *)(unaff_x20 + 0x50) = (char)lVar4;
  }
  return uVar5 & 1;
}



/* Entry: 101e3f1cc; end: 101e3f37b;  */

void FUN_101e3f1cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_52;
  undefined1 auStack_51 [16];
  undefined1 uStack_41;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_11048d9e0;
  func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar4);
  func_0x000107c6157c(uVar4);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_41,FUN_101e4b858,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar1 = &UNK_11048da08;
  puVar2 = puVar1;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000100087bd4(auStack_51,0x101e4b870,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000100087bd4(&uStack_52,0x101e4b888,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}


