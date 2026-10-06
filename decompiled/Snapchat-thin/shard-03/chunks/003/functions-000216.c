/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102735750; end: 10273609b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102735750(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long unaff_x20;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_58;
  
  lVar23 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar23 != 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    plVar10 = (long *)(param_1 + 0x38);
    do {
      lVar21 = *plVar10;
      uVar20 = *(ulong *)(lVar21 + 0x10);
      lVar22 = *(long *)(puVar14 + 0x10);
      if (SCARRY8(lVar22,uVar20)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102736018);
        (*pcVar3)();
      }
      func_0x000107c61434(lVar21);
      puVar4 = puVar14;
      func_0x000107c61558();
      if (((int)puVar4 == 0) ||
         (uVar18 = *(ulong *)(puVar14 + 0x18) >> 1, (long)uVar18 < (long)(lVar22 + uVar20))) {
        FUN_102738fcc();
        uVar18 = *(ulong *)(puVar4 + 0x18) >> 1;
        puVar14 = puVar4;
        if (*(long *)(lVar21 + 0x10) != 0) goto LAB_102735824;
LAB_1027357a4:
        func_0x000107c6142c(lVar21);
        puVar4 = puVar14;
        if (uVar20 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10273601c);
          (*pcVar3)();
        }
      }
      else {
        puVar4 = puVar14;
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_1027357a4;
LAB_102735824:
        if (uVar18 - *(long *)(puVar4 + 0x10) < uVar20) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102736020);
          (*pcVar3)();
        }
        func_0x000107c6140c(puVar4 + *(long *)(puVar4 + 0x10) * 0x28 + 0x20,lVar21 + 0x20,uVar20,
                            &UNK_1106a6678);
        func_0x000107c6142c(lVar21);
        if (uVar20 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102736024);
            (*pcVar3)();
          }
          *(ulong *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + uVar20;
        }
      }
      lVar23 = lVar23 + -1;
      puVar14 = puVar4;
      plVar10 = plVar10 + 4;
    } while (lVar23 != 0);
  }
  lVar23 = *(long *)(puVar4 + 0x10);
  if (lVar23 == 0) {
    func_0x000107c6142c(puVar4);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001027394f0(0,lVar23,0);
    lVar21 = 0x20;
    puVar16 = puStack_58;
    do {
      uVar5 = *(undefined8 *)(puVar4 + lVar21);
      uVar20 = *(ulong *)(puVar16 + 0x10);
      uVar18 = *(ulong *)(puVar16 + 0x18);
      puStack_58 = puVar16;
      func_0x000107c61174();
      if (uVar18 >> 1 <= uVar20) {
        func_0x0001027394f0(1 < uVar18,uVar20 + 1,1);
        puVar16 = puStack_58;
      }
      *(ulong *)(puVar16 + 0x10) = uVar20 + 1;
      *(undefined8 *)(puVar16 + uVar20 * 8 + 0x20) = uVar5;
      lVar21 = lVar21 + 0x28;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    func_0x000107c6142c(puVar4);
  }
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar19 = *(undefined1 **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (undefined1 *)((ulong)puVar16 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar16) {
      puVar19 = puVar16;
    }
    func_0x000107c60480();
  }
  if (puVar19 == (undefined1 *)0x0) {
    func_0x000107c6142c();
    FUN_102739e10();
    func_0x000107c613f8(&UNK_110542090,puVar16,0,0);
    *puVar16 = 0;
  }
  else {
    func_0x000100083b20(&puStack_58);
    puVar7 = puStack_58;
    puVar6 = *(undefined1 **)(puStack_58 + _DAT_112ff76b8);
    func_0x000107c61174();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar7 != (undefined1 *)0x0) {
      lVar23 = *(long *)(unaff_x20 + _DAT_112ebb360);
      func_0x000107c53fcc();
      puVar17 = param_2;
      func_0x0001027345e0(param_1,param_2);
      uVar5 = *(undefined8 *)(lVar23 + _DAT_112ebb390);
      *(long *)(lVar23 + _DAT_112ebb390) = param_1;
      func_0x000107c6142c(uVar5);
      puVar6 = (undefined1 *)0x0;
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (((ulong)puVar16 & 0xc000000000000001) == 0) {
          if (*(undefined1 **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10273602c);
            (*pcVar3)();
          }
          puVar8 = *(undefined1 **)(puVar16 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar6;
          puVar17 = puVar16;
          FUN_102739674(puVar6,puVar16,&PTR_PTR_1126b25c0,0x112d50c78);
        }
        puVar1 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102736028);
          (*pcVar3)();
        }
        puVar12 = puVar8;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar12 == (undefined1 *)0x0) {
          FUN_102739e10();
          func_0x000107c613f8(&UNK_110542090,puVar12,0,0);
          *puVar12 = 2;
          func_0x000107c61654();
          func_0x000107c6142c(puVar15);
          func_0x000107c6142c(puStack_78);
          func_0x000107c6142c(puVar16);
          func_0x000107c615e8(puVar7);
          func_0x000107c61170(puVar8);
          return;
        }
        puVar9 = puVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar12);
        puVar4 = PTR_PTR_1126bcf68;
        func_0x000107c610f8();
        func_0x00010006c00c(puVar9,puVar17);
        puVar12 = puVar9;
        func_0x000107c5ee20(puVar9,puVar17);
        func_0x000107c45ae0();
        func_0x000107c61170(puVar12);
        func_0x00010006c090(puVar9,puVar17);
        lVar22 = 0;
        func_0x000102739b7c();
        lVar21 = lVar22;
        func_0x000107c610f8();
        lVar23 = _DAT_112ebb3c8;
        *(undefined8 *)(lVar21 + _DAT_112ebb3c8) = 0;
        *(undefined **)(lVar21 + _DAT_112ebb3c0) = puVar4;
        *(undefined8 *)(lVar21 + lVar23) = 0;
        plVar10 = &lStack_70;
        lStack_70 = lVar21;
        lStack_68 = lVar22;
        func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
        puVar12 = puVar15;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puVar15 < 0)) ||
           (puVar12 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar15 >> 0x3e == 0) {
            puVar11 = *(undefined1 **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffff8);
            if ((undefined1 *)0x7fffffffffffffff < puVar15) {
              puVar11 = puVar15;
            }
            func_0x000107c60480(puVar11);
          }
          puVar12 = (undefined1 *)0x0;
          FUN_102738e9c(0,puVar11 + 1,1,puVar15);
        }
        uVar18 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar18 + 0x10);
        puVar15 = puVar12;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar20) {
          puVar15 = (undefined1 *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_102738e9c(puVar15,uVar20 + 1,1,puVar12);
          uVar18 = (ulong)puVar15 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar20 + 1;
        *(long **)(uVar18 + uVar20 * 8 + 0x20) = plVar10;
        puVar4 = PTR_PTR_1126c4258;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c59398(puVar4);
        func_0x000107c61170(puVar14);
        func_0x000107c61174();
        puVar14 = puStack_78;
        func_0x000107c61550();
        if ((((int)puVar14 == 0) || ((long)puStack_78 < 0)) ||
           (puVar14 = puStack_78, ((ulong)puStack_78 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_78 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puStack_78 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_78) {
              puVar13 = puStack_78;
            }
            func_0x000107c60480(puVar13);
          }
          puVar14 = (undefined *)0x0;
          FUN_102738d60(0,puVar13 + 1,1,puStack_78,0x10273c9d4,0x102739280);
        }
        uVar18 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar18 + 0x10);
        puStack_78 = puVar14;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar20) {
          puStack_78 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_102738d60(puStack_78,uVar20 + 1,1,puVar14,0x10273c9d4,0x102739280);
          uVar18 = (ulong)puStack_78 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar20 + 1;
        *(undefined **)(uVar18 + uVar20 * 8 + 0x20) = puVar4;
        func_0x000107c61170(puVar8);
        func_0x00010006c090(puVar9);
        func_0x000107c61170(puVar4);
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar19);
      func_0x000107c6142c(puVar16);
      uVar5 = *(undefined8 *)(param_2 + _DAT_112f473d0);
      uVar2 = *(undefined8 *)((long)(param_2 + _DAT_112f473d0) + 8);
      puVar4 = PTR_PTR_1126a6218;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar5,uVar2);
      lVar23 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c47098();
      func_0x000107c61170(uVar5);
      func_0x000107c61170();
      func_0x00010273c9f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar23 + 0x18) = 3;
      *(undefined8 *)(lVar23 + 0x10) = 1;
      *(undefined **)(lVar23 + 0x20) = puVar4;
      func_0x000102739b9c(0);
      func_0x000107c610f8();
      func_0x000107c61434(param_4);
      func_0x000107c61174(puVar4);
      func_0x000107c61434(puStack_78);
      FUN_102738b28(lVar23,puStack_78,param_3,param_4);
      puVar16 = puVar7;
      func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_sendWithSnapDocBundles_sendParam_1126350b8);
      if (((ulong)puVar16 & 1) != 0) {
        lVar21 = lVar23;
        func_0x000107c61174(lVar23);
        func_0x000107c615f0(puVar7);
        uVar5 = 0x112ebb4f0;
        func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
        puVar16 = puVar15;
        func_0x000107c5fc48(puVar15,uVar5);
        puVar19 = puVar7;
        func_0x000107c51ef4();
        func_0x000107c61180();
        func_0x000107c615e8(puVar7);
        func_0x000107c61170(lVar21);
        func_0x000107c61170();
        if (puVar19 != (undefined1 *)0x0) {
          func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
          puVar16 = puVar19;
          func_0x000103edf20c(puVar19);
          puVar14 = &UNK_110541ff8;
          func_0x000107c613fc(&UNK_110541ff8,0x18,7);
          *(long *)(puVar14 + 0x10) = unaff_x20;
          func_0x000107c61174();
          func_0x00010075a04c(0,1,FUN_102739e50,puVar14);
          func_0x000107c6142c(puVar15);
          func_0x000107c6142c(puStack_78);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(lVar21);
          func_0x000107c615e8(puVar7);
          func_0x000107c61574(puVar16);
          func_0x000107c61574(puVar14);
          func_0x000107c61170(puVar19);
          return;
        }
      }
      FUN_102739e10();
      func_0x000107c613f8(&UNK_110542090,puVar16,0,0);
      *puVar16 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(puVar15);
      func_0x000107c6142c(puStack_78);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar23);
      func_0x000107c615e8(puVar7);
      return;
    }
    func_0x000107c6142c();
    FUN_102739e10();
    func_0x000107c613f8(&UNK_110542090,puVar16,0,0);
    *puVar16 = 1;
  }
  func_0x000107c61654();
  return;
}



/* Entry: 10273609c; end: 10273618b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler sendItemsWithResults:] */

void FUN_10273609c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x000107c614f0();
  uVar1 = 0;
  func_0x000102739e94(0,0x112ebb490,&PTR_PTR_1126aae40);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_110541f80;
  func_0x000107c613fc(&UNK_110541f80,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  uVar3 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad3f30,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10273618c; end: 1027361a3;  */

void FUN_10273618c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027361a4,0,0);
  return;
}



/* Entry: 1027361a4; end: 10273622f;  */

void FUN_1027361a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736230,uVar2,uVar3);
  return;
}



/* Entry: 102736230; end: 102736507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102736230(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c61574();
  FUN_102736508();
  if ((uVar3 & 1) != 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar10 = *(long *)(unaff_x22 + 0x10);
    lVar4 = *(long *)(lVar10 + _DAT_1130735b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar10);
    lVar10 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar10 != 0) {
      uVar3 = *(ulong *)(unaff_x22 + 0x20);
      if (uVar3 >> 0x3e == 0) {
        uVar12 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar12 = uVar3;
        }
        func_0x000107c60480();
      }
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar12 != 0) {
        uVar9 = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
        func_0x000101ccc9b8(0,uVar9,0);
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102736508);
          (*pcVar2)();
        }
        uVar13 = 0;
        lVar4 = *(long *)(unaff_x22 + 0x20);
        do {
          if ((uVar3 & 0xc000000000000001) == 0) {
            uVar14 = *(ulong *)(lVar4 + 0x20 + uVar13 * 8);
            func_0x000107c615f0(uVar14);
          }
          else {
            uVar9 = *(ulong *)(unaff_x22 + 0x20);
            uVar14 = uVar13;
            FUN_102739830();
          }
          uVar11 = uVar14;
          func_0x000107c5c958();
          func_0x000107c61180();
          uVar15 = uVar11;
          func_0x000107c5faec();
          uVar5 = uVar9;
          func_0x000107c61170(uVar11);
          func_0x000107c6142c(uVar9);
          uVar11 = uVar15 & 0xffffffffffff;
          if ((uVar9 & 0x2000000000000000) != 0) {
            uVar11 = uVar9 >> 0x38 & 0xf;
          }
          if (uVar11 == 0) {
            uVar11 = 0;
            uVar15 = 0;
            uVar9 = uVar5;
          }
          else {
            uVar15 = uVar14;
            func_0x000107c5c958(uVar14);
            func_0x000107c61180();
            uVar11 = uVar15;
            func_0x000107c5faec();
            uVar9 = uVar5;
            func_0x000107c61170(uVar15);
            uVar15 = uVar5;
          }
          uVar5 = uVar14;
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c44fcc();
          func_0x000107c61180();
          func_0x000107c615e8(uVar5);
          uVar5 = uVar6;
          func_0x000107c5faec();
          func_0x000107c61170(uVar6);
          uVar7 = 0;
          func_0x000104393e34(0);
          func_0x000107c610f8();
          func_0x000104393e58(uVar5,uVar9,uVar11,uVar15,uVar7);
          func_0x000107c615e8(uVar14);
          uVar11 = *(ulong *)(puVar1 + 0x10);
          uVar14 = uVar11 + 1;
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar11) {
            uVar9 = uVar14;
            func_0x000101ccc9b8(1 < *(ulong *)(puVar1 + 0x18),uVar14,1);
          }
          uVar13 = uVar13 + 1;
          *(ulong *)(puVar1 + 0x10) = uVar14;
          *(ulong *)(puVar1 + uVar11 * 8 + 0x20) = uVar5;
        } while (uVar12 != uVar13);
      }
      uVar7 = 0;
      func_0x000104393e34(0);
      puVar8 = puVar1;
      func_0x000107c5fc48(puVar1,uVar7);
      func_0x000107c6142c(puVar1);
      func_0x000107c5d5f8(lVar10);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001027364e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102736508; end: 10273662f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102736508(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar3 = *(long *)(lStack_48 + _DAT_1130735b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_102734830();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar3 + _DAT_112f473d8);
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112f473d0);
      uVar1 = ((undefined8 *)(lVar3 + _DAT_112f473d0))[1];
      func_0x000107c61434(uVar1);
      uVar5 = 0;
      func_0x000104522c9c(0);
      func_0x000104522318(uVar6,uVar1,uVar2,uVar5);
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c49cdc(lVar4);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c615e8(lVar4);
  }
  return lVar3;
}



/* Entry: 102736630; end: 10273670f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler onSelectionChangedWithItems:] */

void FUN_102736630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x112ebb488;
  func_0x0001000285a8(0x112ebb488,&UNK_10dad3f20);
  func_0x000107c5fc54(param_3,uVar2);
  puVar1 = &UNK_110541f58;
  func_0x000107c613fc(&UNK_110541f58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad3f28,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102736710; end: 102736a2b;  */

/* WARNING: Possible PIC construction at 0x00010273677c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027367b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027367d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027367f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102736808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027368b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102736958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273696c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027369e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102736970) */
/* WARNING: Removing unreachable block (ram,0x00010273695c) */
/* WARNING: Removing unreachable block (ram,0x0001027368b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010273680c) */
/* WARNING: Removing unreachable block (ram,0x000102736844) */
/* WARNING: Removing unreachable block (ram,0x00010273684c) */
/* WARNING: Removing unreachable block (ram,0x000102736818) */
/* WARNING: Removing unreachable block (ram,0x000102736990) */
/* WARNING: Removing unreachable block (ram,0x00010273681c) */
/* WARNING: Removing unreachable block (ram,0x000102736858) */
/* WARNING: Removing unreachable block (ram,0x000102736824) */
/* WARNING: Removing unreachable block (ram,0x0001027369a0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001027367f4) */
/* WARNING: Removing unreachable block (ram,0x0001027367d8) */
/* WARNING: Removing unreachable block (ram,0x0001027367bc) */
/* WARNING: Removing unreachable block (ram,0x000102736780) */
/* WARNING: Removing unreachable block (ram,0x0001027369cc) */
/* WARNING: Removing unreachable block (ram,0x0001027369d4) */
/* WARNING: Removing unreachable block (ram,0x000102736788) */
/* WARNING: Removing unreachable block (ram,0x0001027369e0) */
/* WARNING: Removing unreachable block (ram,0x000102736794) */
/* WARNING: Removing unreachable block (ram,0x000102736a08) */
/* WARNING: Removing unreachable block (ram,0x00010273679c) */
/* WARNING: Removing unreachable block (ram,0x000102736a28) */
/* WARNING: Removing unreachable block (ram,0x0001027367a8) */
/* WARNING: Removing unreachable block (ram,0x0001027367b0) */
/* WARNING: Removing unreachable block (ram,0x0001027369e8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102736710(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_102734830();
  if (lVar1 != 0) {
    func_0x000107c5b1f8(param_1);
    func_0x000107c61180();
    uVar2 = 0;
    func_0x000102739e94(0,0x112ebb2e0,&PTR_PTR_1126aae38);
    func_0x000107c5fc54(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102736a2c; end: 102736a4b;  */

void FUN_102736a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736a4c,0,0);
  return;
}



/* Entry: 102736a4c; end: 102736b4b;  */

/* WARNING: Removing unreachable block (ram,0x000102736adc) */

void FUN_102736a4c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x38,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x80) = lVar6;
  if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102736b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(lVar5,uVar1);
  lVar3 = lVar5;
  func_0x0001010282b0(lVar5,uVar1);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  func_0x00010006c090(lVar5,uVar1);
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102736b4c;
  lVar5 = *(long *)(unaff_x22 + 0x68);
  plVar4[0x13] = *(long *)(unaff_x22 + 0x70);
  plVar4[0x14] = lVar6;
  plVar4[0x11] = lVar3;
  plVar4[0x12] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0x15] = lVar6;
  lVar6 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x16] = lVar5;
  plVar4[0x17] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736fa8,lVar5,lVar6);
  return;
}



/* Entry: 102736b4c; end: 102736ba7;  */

void FUN_102736b4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102736ba8;
  }
  else {
    pcVar1 = FUN_102736e84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102736ba8; end: 102736c3b;  */

void FUN_102736ba8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736c3c,uVar2,uVar3);
  return;
}



/* Entry: 102736c3c; end: 102736c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102736c3c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736c90,0,0);
  return;
}



/* Entry: 102736c90; end: 102736d0f;  */

void FUN_102736c90(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102736d10;
                    /* WARNING: Could not recover jumptable at 0x000102736d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x88),uVar2,lVar3);
  return;
}



/* Entry: 102736d10; end: 102736d7b;  */

void FUN_102736d10(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 200) = param_1;
    pcVar1 = FUN_102736d7c;
  }
  else {
    pcVar1 = FUN_102736ec8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102736d7c; end: 102736deb;  */

void FUN_102736d7c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar1 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736dec,uVar3,uVar2);
  return;
}



/* Entry: 102736dec; end: 102736e3f;  */

void FUN_102736dec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  FUN_102737348(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736e40,0,0);
  return;
}



/* Entry: 102736e40; end: 102736e83;  */

void FUN_102736e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102736e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102736e84; end: 102736ec7;  */

void FUN_102736e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102736ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102736ec8; end: 102736f13;  */

void FUN_102736ec8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102736f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102736f14; end: 102736fa7;  */

void FUN_102736f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736fa8,uVar2,uVar3);
  return;
}



/* Entry: 102736fa8; end: 1027370cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102736fa8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x88);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar4 + 8))(uVar7,uVar2,lVar4);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if ((uVar7 & 1) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010273703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112ebb328);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar3);
  piVar6 = *(int **)(lVar4 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027370cc;
                    /* WARNING: Could not recover jumptable at 0x0001027370c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),uVar2,0,uVar3,lVar4
            );
  return;
}



/* Entry: 1027370cc; end: 102737117;  */

void FUN_1027370cc(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xe8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102737118,*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(lVar1 + 0xb8));
  return;
}



/* Entry: 102737118; end: 102737267;  */

void FUN_102737118(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xe8) != '\0') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x0001000834e4(unaff_x22 + 0x38);
    func_0x000100083b20(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar3 = *(long *)(unaff_x22 + 0x80);
    func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar5 = PTR_PTR_1126b1060;
    func_0x000107c610f8();
    func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
    func_0x000107c47d08();
    *(undefined **)(unaff_x22 + 0xd0) = puVar5;
    func_0x000107c61170(uVar4);
    piVar7 = *(int **)(lVar3 + 0x10);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102737268;
                    /* WARNING: Could not recover jumptable at 0x000102737230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),uVar8,0,puVar5,
               uVar2,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000102737264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102737268; end: 1027372cf;  */

void FUN_102737268(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd8));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1027372d0;
  }
  else {
    pcVar2 = (code *)0x10273730c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0xb0),*(undefined8 *)(lVar3 + 0xb8));
  return;
}



/* Entry: 1027372d0; end: 102737347;  */

void FUN_1027372d0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000102737308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102737348; end: 102737bbf;  */

/* WARNING: Possible PIC construction at 0x0001027373e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027374a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027378c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027378ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027379a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102737b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027376b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027376a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027375c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027375b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027375c8) */
/* WARNING: Removing unreachable block (ram,0x0001027376ac) */
/* WARNING: Removing unreachable block (ram,0x0001027376b8) */
/* WARNING: Removing unreachable block (ram,0x000102737b14) */
/* WARNING: Removing unreachable block (ram,0x000102737b04) */
/* WARNING: Removing unreachable block (ram,0x000102737af4) */
/* WARNING: Removing unreachable block (ram,0x000102737ae4) */
/* WARNING: Removing unreachable block (ram,0x000102737aa8) */
/* WARNING: Removing unreachable block (ram,0x000102737a98) */
/* WARNING: Removing unreachable block (ram,0x0001027379a4) */
/* WARNING: Removing unreachable block (ram,0x000102737918) */
/* WARNING: Removing unreachable block (ram,0x0001027378f0) */
/* WARNING: Removing unreachable block (ram,0x0001027378c4) */
/* WARNING: Removing unreachable block (ram,0x000102737824) */
/* WARNING: Removing unreachable block (ram,0x00010273775c) */
/* WARNING: Removing unreachable block (ram,0x0001027377b8) */
/* WARNING: Removing unreachable block (ram,0x000102737710) */
/* WARNING: Removing unreachable block (ram,0x000102737668) */
/* WARNING: Removing unreachable block (ram,0x0001027376c8) */
/* WARNING: Removing unreachable block (ram,0x0001027376cc) */
/* WARNING: Removing unreachable block (ram,0x000102737578) */
/* WARNING: Removing unreachable block (ram,0x0001027374a8) */
/* WARNING: Removing unreachable block (ram,0x00010273744c) */
/* WARNING: Removing unreachable block (ram,0x000102737450) */
/* WARNING: Removing unreachable block (ram,0x0001027374ac) */
/* WARNING: Removing unreachable block (ram,0x0001027374b4) */
/* WARNING: Removing unreachable block (ram,0x0001027374fc) */
/* WARNING: Removing unreachable block (ram,0x00010273757c) */
/* WARNING: Removing unreachable block (ram,0x000102737b40) */
/* WARNING: Removing unreachable block (ram,0x000102737594) */
/* WARNING: Removing unreachable block (ram,0x000102737b60) */
/* WARNING: Removing unreachable block (ram,0x0001027375a4) */
/* WARNING: Removing unreachable block (ram,0x000102737504) */
/* WARNING: Removing unreachable block (ram,0x000102737510) */
/* WARNING: Removing unreachable block (ram,0x000102737534) */
/* WARNING: Removing unreachable block (ram,0x000102737538) */
/* WARNING: Removing unreachable block (ram,0x0001027375c0) */
/* WARNING: Removing unreachable block (ram,0x00010273753c) */
/* WARNING: Removing unreachable block (ram,0x000102737570) */
/* WARNING: Removing unreachable block (ram,0x000102737484) */
/* WARNING: Removing unreachable block (ram,0x0001027373ec) */
/* WARNING: Removing unreachable block (ram,0x000102737414) */
/* WARNING: Removing unreachable block (ram,0x000102737b1c) */
/* WARNING: Removing unreachable block (ram,0x000102737428) */
/* WARNING: Removing unreachable block (ram,0x0001027373f0) */
/* WARNING: Removing unreachable block (ram,0x0001027375b8) */
/* WARNING: Removing unreachable block (ram,0x0001027375d8) */
/* WARNING: Removing unreachable block (ram,0x0001027375ec) */
/* WARNING: Removing unreachable block (ram,0x00010273766c) */
/* WARNING: Removing unreachable block (ram,0x000102737b80) */
/* WARNING: Removing unreachable block (ram,0x000102737684) */
/* WARNING: Removing unreachable block (ram,0x000102737ba0) */
/* WARNING: Removing unreachable block (ram,0x000102737698) */
/* WARNING: Removing unreachable block (ram,0x0001027375f4) */
/* WARNING: Removing unreachable block (ram,0x000102737b3c) */
/* WARNING: Removing unreachable block (ram,0x000102737600) */
/* WARNING: Removing unreachable block (ram,0x00010273762c) */
/* WARNING: Removing unreachable block (ram,0x000102737630) */
/* WARNING: Removing unreachable block (ram,0x0001027376b0) */
/* WARNING: Removing unreachable block (ram,0x000102737634) */
/* WARNING: Removing unreachable block (ram,0x000102737660) */

void FUN_102737348(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &DAT_112ebb350;
  FUN_1027348e0(&DAT_112ebb350,&DAT_112ebb338,0x112e5eda8,&UNK_10daab350);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102737bc0; end: 102737dc7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler editItemWithItem:] */

/* WARNING: Possible PIC construction at 0x000102737bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102737bfc) */

void FUN_102737bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102736710(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102737dc8; end: 102737fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102737dc8(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long alStack_78 [3];
  
  FUN_102736508();
  if ((param_1 & 1) == 0) {
    return 0;
  }
  func_0x000100083b20(alStack_78);
  lVar3 = *(long *)(alStack_78[0] + _DAT_1130735b8);
  func_0x000107c61174();
  func_0x000107c61170(alStack_78[0]);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = lVar4;
  func_0x000107c44774();
  if (((int)lVar3 == 0) || (FUN_102734830(), lVar7 = _DAT_112ebb2e8, lVar3 == 0)) {
    func_0x000107c615e8(lVar4);
    return 0;
  }
  lVar5 = unaff_x20 + _DAT_112ebb2e8;
  func_0x000107c61618();
  lVar2 = _DAT_112ebb550;
  if (lVar5 != 0) {
    plVar8 = alStack_78;
    func_0x000107c61428(lVar5 + _DAT_112ebb550,plVar8,0,0);
    uVar9 = lVar5 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar5);
    if (uVar9 == 0) {
      uVar9 = 0;
      plVar8 = (long *)0x0;
      goto LAB_102737f44;
    }
    uVar6 = uVar9;
    func_0x000107c5c82c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar9 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    uVar6 = uVar9 & 0xffffffffffff;
    if (((ulong)plVar8 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)plVar8 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) goto LAB_102737f44;
    func_0x000107c6142c(plVar8);
  }
  uVar9 = 0;
  plVar8 = (long *)0x0;
LAB_102737f44:
  plVar1 = (long *)(unaff_x20 + _DAT_112ebb348);
  lVar5 = *plVar1;
  lVar2 = plVar1[1];
  lVar10 = plVar1[2];
  *plVar1 = lVar3;
  plVar1[1] = uVar9;
  plVar1[2] = (long)plVar8;
  func_0x000107c61174(lVar3);
  func_0x000100d032a8(lVar5,lVar2,lVar10);
  FUN_1027356b8();
  lVar7 = unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 != 0) {
    FUN_10273a2e8();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar3);
  return 1;
}



/* Entry: 102737fb8; end: 1027381d3;  */

/* WARNING: Possible PIC construction at 0x000102738014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102738070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273808c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027380e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102738150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273816c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102738198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027381a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273819c) */
/* WARNING: Removing unreachable block (ram,0x000102738170) */
/* WARNING: Removing unreachable block (ram,0x000102738154) */
/* WARNING: Removing unreachable block (ram,0x0001027380ec) */
/* WARNING: Removing unreachable block (ram,0x0001027380f0) */
/* WARNING: Removing unreachable block (ram,0x000102738090) */
/* WARNING: Removing unreachable block (ram,0x000102738094) */
/* WARNING: Removing unreachable block (ram,0x0001027380a0) */
/* WARNING: Removing unreachable block (ram,0x0001027381b0) */
/* WARNING: Removing unreachable block (ram,0x0001027380b4) */
/* WARNING: Removing unreachable block (ram,0x000102738074) */
/* WARNING: Removing unreachable block (ram,0x000102738018) */
/* WARNING: Removing unreachable block (ram,0x00010273803c) */
/* WARNING: Removing unreachable block (ram,0x00010273801c) */
/* WARNING: Removing unreachable block (ram,0x0001027381ac) */
/* WARNING: Removing unreachable block (ram,0x0001027381b8) */

void FUN_102737fb8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112ebb358;
  FUN_1027348e0(&DAT_112ebb358,&DAT_112ebb318,0x112ebb498,&UNK_10db94350);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027381d4; end: 102738223; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler dismissChatMediaPreviewScope] */

/* WARNING: Possible PIC construction at 0x000102738210: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027381d4(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000102737c10();
  lVar1 = param_1 + _DAT_112ebb2e8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10273a3e8();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102738224; end: 1027382db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738224(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_1130735b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000104393e34(0);
    func_0x000107c5fc48(param_1,uVar3);
    func_0x000107c5d5f8(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1027382dc; end: 102738333; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler updateMediaPreviewSelection:] */

void FUN_1027382dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000104393e34(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102738224(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102738334; end: 102738363; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_102738334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102739a60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102738364; end: 102738377;  */

bool FUN_102738364(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102738378; end: 102738423;  */

void FUN_102738378(void)

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



/* Entry: 102738424; end: 102738433;  */

void FUN_102738424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102738434; end: 10273845f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler init] */

void FUN_102738434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentImplementation.MemTwoChatMediaDrawerActionHandler"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102738460);
  (*pcVar1)();
}



/* Entry: 102738460; end: 102738463;  */

void FUN_102738460(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102738464; end: 102738583; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102738558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273855c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738464(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c61610(param_1 + _DAT_112ebb2e8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb2f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb300));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb308));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb2f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb310));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb318));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb320));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb328));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb330));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb338));
  FUN_102739db0(*(undefined8 *)(param_1 + _DAT_112ebb340));
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebb348);
  func_0x000100d032a8(*puVar1,puVar1[1],puVar1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebb350));
  return;
}



/* Entry: 102738584; end: 102738587; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate sendDidReturnPromise:] */

void FUN_102738584(void)

{
  return;
}



/* Entry: 102738588; end: 10273858f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate mediaSource] */

undefined8 FUN_102738588(void)

{
  return 1;
}



/* Entry: 102738590; end: 102738597; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate shouldSendAsExternalMedia] */

undefined8 FUN_102738590(void)

{
  return 1;
}



/* Entry: 102738598; end: 1027385b3; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate memoriesSnapMetricInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738598(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebb390);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000102739e94(0,0x112ebb2d0,&PTR_PTR_1126c3358);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1027385b4; end: 1027385fb; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027385b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ebb390) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027385fc; end: 10273860b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027385fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebb390));
  return;
}



/* Entry: 10273860c; end: 10273861b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle original] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273860c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebb3c0));
  return;
}



/* Entry: 10273861c; end: 10273864f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle setOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273861c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb3c0);
  *(undefined8 *)(param_1 + _DAT_112ebb3c0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102738650; end: 10273866b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle multisnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738650(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebb3c8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000102739e94(0,0x112d54e00,&PTR_PTR_1126bcf68);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10273866c; end: 1027386cb;  */

void FUN_10273866c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000102739e94(0,param_4,param_5);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1027386cc; end: 1027386e7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle setMultisnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027386cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000102739e94(0,0x112d54e00,&PTR_PTR_1126bcf68);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb3c8);
  *(long *)(param_1 + _DAT_112ebb3c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027386e8; end: 102738713; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle init] */

void FUN_1027386e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentImplementation.ChatMediaDrawerSnapDocBundle"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102738714);
  (*pcVar1)();
}



/* Entry: 102738714; end: 10273874b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE528ChatMediaDrawerSnapDocBundle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738714(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebb3c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebb3c8));
  return;
}



/* Entry: 10273874c; end: 102738757; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters sendSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273874c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ebb3f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb3f8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102738758; end: 102738763; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setSendSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738758(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ebb3f8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102738764; end: 102738773; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters sendToType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102738764(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112ebb400);
}



/* Entry: 102738774; end: 102738783; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setSendToType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738774(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_112ebb400) = param_3;
  return;
}



/* Entry: 102738784; end: 102738793; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters disableSplitting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebb408));
  return;
}



/* Entry: 102738794; end: 1027387c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setDisableSplitting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb408);
  *(undefined8 *)(param_1 + _DAT_112ebb408) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027387c8; end: 102738827; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters commonMetricLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027387c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb410);
  func_0x000102739e94(0,0x112ebb480,&PTR_PTR_1126c4258);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102738828; end: 10273887f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setCommonMetricLoggingParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102739e94(0,0x112ebb480,&PTR_PTR_1126c4258);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb410);
  *(undefined8 *)(param_1 + _DAT_112ebb410) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102738880; end: 102738893; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters saveReplaceIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb418);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102738894; end: 1027388a7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setSaveReplaceIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb418);
  *(undefined8 *)(param_1 + _DAT_112ebb418) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027388a8; end: 1027388b7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters isLinkShareAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027388a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebb420);
}



/* Entry: 1027388b8; end: 1027388c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setIsLinkShareAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027388b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebb420) = param_3;
  return;
}



/* Entry: 1027388c8; end: 1027388d7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters isLinkShareGenerated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027388c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebb428);
}



/* Entry: 1027388d8; end: 1027388e7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setIsLinkShareGenerated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027388d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebb428) = param_3;
  return;
}



/* Entry: 1027388e8; end: 1027388fb; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters selectedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027388e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb430);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027388fc; end: 10273893f;  */

void FUN_1027388fc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102738940; end: 102738953; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setSelectedItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___s10Foundation4DataVN_110350ae0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb430);
  *(undefined8 *)(param_1 + _DAT_112ebb430) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102738954; end: 10273898f;  */

void FUN_102738954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + *param_5);
  *(undefined8 *)(param_1 + *param_5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102738990; end: 1027389ab; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters preselectedDestinations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738990(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebb438);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000102739e94(0,0x112d55bf0,&PTR_PTR_1126a6218);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1027389ac; end: 1027389c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setPreselectedDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027389ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000102739e94(0,0x112d55bf0,&PTR_PTR_1126a6218);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb438);
  *(long *)(param_1 + _DAT_112ebb438) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027389c8; end: 102738a2b;  */

void FUN_1027389c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000102739e94(0,param_4,param_5);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_6);
  *(long *)(param_1 + *param_6) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102738a2c; end: 102738a3b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters forceDirectSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102738a2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebb440);
}



/* Entry: 102738a3c; end: 102738a4b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setForceDirectSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738a3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebb440) = param_3;
  return;
}



/* Entry: 102738a4c; end: 102738a5b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters isPromptLensWithRestrictedDestinations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102738a4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebb448);
}



/* Entry: 102738a5c; end: 102738a6b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setIsPromptLensWithRestrictedDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738a5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebb448) = param_3;
  return;
}



/* Entry: 102738a6c; end: 102738a77; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters additionalText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738a6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ebb450))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb450);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102738a78; end: 102738acf;  */

void FUN_102738a78(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102738ad0; end: 102738adb; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters setAdditionalText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738ad0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ebb450);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102738adc; end: 102738b27;  */

void FUN_102738adc(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102738b28; end: 102738c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebb3f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(unaff_x20 + _DAT_112ebb400) = 5;
  lVar2 = _DAT_112ebb408;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ebb410;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ebb410) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ebb418) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ebb420) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebb428) = 0;
  *(undefined **)(unaff_x20 + _DAT_112ebb430) = puVar4;
  lVar3 = _DAT_112ebb438;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb438) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebb440) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebb448) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebb450);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + lVar3) = param_1;
  *(undefined8 *)(unaff_x20 + lVar2) = param_2;
  uVar5 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c6142c(uVar5);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102738c5c; end: 102738cbb; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters init] */

void FUN_102738c5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentImplementation.ChatMediaDrawerSendParameters"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102738c88);
  (*pcVar1)();
}



/* Entry: 102738cbc; end: 102738d4b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementationP33_BE35AE8199A2E1579FC7210A1A8E3AE529ChatMediaDrawerSendParameters .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102738cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102738cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102738d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102738d00) */
/* WARNING: Removing unreachable block (ram,0x000102738ce0) */
/* WARNING: Removing unreachable block (ram,0x000102738d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102738cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebb3f8 + 8))
  ;
  return;
}



/* Entry: 102738d4c; end: 102738d5f;  */

ulong FUN_102738d4c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738e9c);
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
  FUN_1027390e8(uVar2,uVar4,FUN_10273c914);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738e98);
      (*pcVar1)();
    }
    FUN_102739168(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102738d60; end: 102738e9b;  */

ulong FUN_102738d60(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738e9c);
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
  FUN_1027390e8(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738e98);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102738e9c; end: 102738fcb;  */

ulong FUN_102738e9c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738fcc);
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
  FUN_1027390e8(uVar2,uVar4,0x10273ca1c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102738fc8);
      (*pcVar1)();
    }
    FUN_102739398(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102738fcc; end: 1027390e7;  */

undefined * FUN_102738fcc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027390e8);
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
    puVar3 = (undefined *)0x112ebb500;
    func_0x0001000285a8(0x112ebb500,&UNK_10dad3f58);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106a6678);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1027390e8; end: 102739167;  */

undefined * FUN_1027390e8(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 102739168; end: 102739397;  */

long FUN_102739168(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10273927c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102739280);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102739e94(0,0x112ebb2d0,&PTR_PTR_1126c3358);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000102739e94(0,0x112ebb2d0,&PTR_PTR_1126c3358);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102739278);
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



/* Entry: 102739398; end: 1027394bb;  */

long FUN_102739398(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1027394b8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027394bc);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ebb4f0;
        func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ebb4f0;
      func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1027394b4);
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



/* Entry: 1027394bc; end: 102739523;  */

void FUN_1027394bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102739524();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102739524; end: 10273965f;  */

undefined *
FUN_102739524(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102739660);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000102739e94(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102739660; end: 102739673;  */

ulong FUN_102739660(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102739758);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10273975c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c3358;
    func_0x000107c61168(PTR_PTR_1126c3358);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c3358;
    func_0x000107c61168(PTR_PTR_1126c3358);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102739e94(0,0x112ebb2d0,&PTR_PTR_1126c3358);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102739830);
  (*pcVar2)();
}



/* Entry: 102739674; end: 10273982f;  */

ulong FUN_102739674(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102739758);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10273975c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102739e94(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102739830);
  (*pcVar2)();
}



/* Entry: 102739830; end: 1027399d3;  */

ulong FUN_102739830(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102739908);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10273990c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f0b9070);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027399d4);
  (*pcVar2)();
}



/* Entry: 1027399d4; end: 102739a5f;  */

void FUN_1027399d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10273a08c;
  plVar7[0xe] = lVar3;
  plVar7[0xf] = lVar6;
  plVar7[0xc] = lVar2;
  plVar7[0xd] = lVar5;
  plVar7[10] = lVar1;
  plVar7[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102736a4c,0,0);
  return;
}



/* Entry: 102739a60; end: 102739b3b;  */

/* WARNING: Possible PIC construction at 0x000102739ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102739ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102739ab4) */
/* WARNING: Removing unreachable block (ram,0x000102739ab8) */
/* WARNING: Removing unreachable block (ram,0x000102739aec) */
/* WARNING: Removing unreachable block (ram,0x000102739af4) */
/* WARNING: Removing unreachable block (ram,0x000102739af8) */
/* WARNING: Removing unreachable block (ram,0x000102739b2c) */
/* WARNING: Removing unreachable block (ram,0x000102739b10) */

void FUN_102739a60(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112ebb350;
  FUN_1027348e0(&DAT_112ebb350,&DAT_112ebb338,0x112e5eda8,&UNK_10daab350);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102739b3c; end: 102739bbb;  */

void FUN_102739b3c(void)

{
  func_0x000107c61168(&PTR_PTR_11285e338);
  return;
}


