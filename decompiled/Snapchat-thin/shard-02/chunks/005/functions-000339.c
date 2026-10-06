/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101df066c; end: 101df070f;  */

void FUN_101df066c(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6,long param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101df8a4c;
  plVar4[0xd] = param_8;
  plVar4[0xe] = unaff_x20;
  *(undefined1 *)(plVar4 + 0x1e) = param_6;
  plVar4[0xb] = param_5;
  plVar4[0xc] = param_7;
  plVar4[9] = param_3;
  plVar4[10] = param_4;
  plVar4[7] = param_1;
  plVar4[8] = param_2;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101deda1c,0,0);
  return;
}



/* Entry: 101df0710; end: 101df0877;  */

undefined *
FUN_101df0710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104887c0;
  func_0x000107c613fc(&UNK_1104887c0,0x60,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  puVar2[0x40] = param_6;
  puVar2[0x41] = param_7;
  puVar2[0x42] = param_8;
  puVar2[0x43] = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  *(undefined8 *)(puVar2 + 0x58) = param_13;
  func_0x000107c61434(param_12);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_5);
  uVar3 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd0000000000000a1,0x800000010f0120e0,&UNK_10da17db8,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 101df0878; end: 101df0913;  */

void FUN_101df0878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_13;
  *(undefined8 *)(unaff_x22 + 0x80) = param_12;
  *(undefined8 *)(unaff_x22 + 0x78) = param_11;
  *(undefined1 *)(unaff_x22 + 0xd3) = param_9._2_1_;
  *(undefined1 *)(unaff_x22 + 0xd2) = param_9._1_1_;
  *(undefined1 *)(unaff_x22 + 0xd1) = (undefined1)param_9;
  *(undefined1 *)(unaff_x22 + 0xd0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df0914,0,0);
  return;
}



/* Entry: 101df0914; end: 101df0d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df0914(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long unaff_x22;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  
  lVar18 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar18 + 0x10,unaff_x22 + 0x10,0,0);
  puVar10 = (undefined8 *)(lVar18 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x98) = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar10,0,0);
    puVar10[1] = 0;
    *puVar10 = 0x16;
    *(undefined1 *)(puVar10 + 2) = 0x80;
    func_0x000107c61654();
  }
  else {
    puVar11 = puVar10;
    func_0x0001000d224c(unaff_x22 + 0x28);
    puVar21 = *(undefined8 **)(unaff_x22 + 0x28);
    if (puVar21 != (undefined8 *)0x0) {
      func_0x0001000d224c(unaff_x22 + 0x30);
      lVar18 = *(long *)(unaff_x22 + 0x30);
      if (lVar18 != 0) {
        lVar19 = *(long *)(unaff_x22 + 0x70);
        if (lVar19 != 0) {
          uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
          puVar16 = PTR_PTR_1126af4c0;
          func_0x000107c61168();
          func_0x000107c5fadc(uVar22,lVar19);
          func_0x000107c43148();
          func_0x000107c61180();
          func_0x000107c61170(uVar22);
          if (puVar16 != (undefined *)0x0) {
            puVar12 = PTR_PTR_1126af4c0;
            func_0x000107c61168(PTR_PTR_1126af4c0);
            puVar20 = puVar16;
            func_0x000107c6148c(puVar16,puVar12);
            if (puVar20 == (undefined *)0x0) {
              func_0x000107c615e8(puVar16);
            }
            goto LAB_101df0a68;
          }
        }
        puVar20 = (undefined *)0x0;
LAB_101df0a68:
        *(undefined **)(unaff_x22 + 0xa0) = puVar20;
        uVar22 = *(undefined8 *)(unaff_x22 + 0x50);
        lVar19 = *(long *)(unaff_x22 + 0x58);
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(puVar20);
        func_0x000107c490d4(puVar16);
        uVar13 = 0;
        func_0x000103bd5d30(0);
        func_0x000107c610f8();
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000103bd5a20(uVar13,PTR___swiftEmptyArrayStorage_11034f1c8,
                            PTR___swiftEmptyArrayStorage_11034f1c8,puVar16,0,0,0,0,0,0);
        *(undefined **)(unaff_x22 + 0xa8) = puVar12;
        func_0x000107c61170(puVar21);
        func_0x000107c615e8(lVar18);
        func_0x0001000285a8(0x112d62368,&UNK_10d928280);
        *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
        func_0x000107c61174();
        lVar18 = unaff_x22 + 0x38;
        func_0x000104888f7c();
        *(long *)(unaff_x22 + 0xb0) = lVar18;
        if (0x7fffffff < lVar19) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101df0d04);
          (*pcVar8)();
        }
        lVar19 = *(long *)(unaff_x22 + 0x60);
        if ((-0x80000001 < lVar19) && (lVar23 = *(long *)(unaff_x22 + 0x58), -0x80000001 < lVar23))
        {
          if (lVar19 < 0x80000000) {
            uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
            lVar14 = 0;
            func_0x000107c5eea4();
            (**(code **)(*(long *)(lVar14 + -8) + 0x38))(uVar22,1,1,lVar14);
            bVar9 = (byte)uVar22;
            FUN_101de3414();
            plVar15 = (long *)0x13a0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xb8) = plVar15;
            *plVar15 = unaff_x22;
            plVar15[1] = (long)FUN_101df0d0c;
            lVar17 = *(long *)(unaff_x22 + 0x90);
            lVar14 = *(long *)(unaff_x22 + 0x78);
            lVar2 = *(long *)(unaff_x22 + 0x80);
            uVar4 = *(undefined1 *)(unaff_x22 + 0xd3);
            uVar5 = *(undefined1 *)(unaff_x22 + 0xd2);
            uVar6 = *(undefined1 *)(unaff_x22 + 0xd1);
            uVar7 = *(undefined1 *)(unaff_x22 + 0xd0);
            lVar1 = *(long *)(unaff_x22 + 0x68);
            lVar3 = *(long *)(unaff_x22 + 0x70);
            plVar15[0x1f6] = (long)puVar10;
            plVar15[0x1f5] = 1;
            plVar15[500] = 0;
            plVar15[499] = 0;
            *(byte *)((long)plVar15 + 299) = bVar9 & 1;
            plVar15[0x1f2] = 0;
            plVar15[0x1f1] = 0;
            plVar15[0x1f0] = 0;
            plVar15[0x1ef] = 0;
            plVar15[0x1ee] = (long)puVar20;
            plVar15[0x1ed] = lVar17;
            plVar15[0x1ec] = (long)puVar12;
            plVar15[0x1eb] = 0;
            plVar15[0x1ea] = 0;
            plVar15[0x1e9] = lVar2;
            plVar15[0x1e8] = lVar14;
            *(undefined1 *)((long)plVar15 + 0x12a) = uVar4;
            *(undefined1 *)((long)plVar15 + 0x129) = uVar5;
            *(undefined1 *)((long)plVar15 + 0x9b) = uVar6;
            *(undefined1 *)((long)plVar15 + 0x9a) = uVar7;
            plVar15[0x1e7] = lVar3;
            plVar15[0x1e6] = lVar1;
            plVar15[0x1e5] = 0;
            plVar15[0x1e4] = 0;
            plVar15[0x1e3] = 0;
            plVar15[0x1e2] = 0;
            *(int *)((long)plVar15 + 300) = (int)lVar19;
            *(int *)((long)plVar15 + 0x9c) = (int)lVar23;
            *(undefined1 *)((long)plVar15 + 0x99) = 0;
            plVar15[0x1e1] = lVar18;
            plVar15[0x1e0] = 0;
            plVar15[0x1df] = 0;
            plVar15[0x1de] = 0;
            plVar15[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
            return;
          }
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101df0d0c);
          (*pcVar8)();
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101df0d08);
        (*pcVar8)();
      }
      func_0x000107c61170();
      puVar11 = puVar21;
    }
    FUN_101df6cf4();
    puVar16 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar11,0,0);
    puVar11[1] = 0;
    *puVar11 = 0x16;
    *(undefined1 *)(puVar11 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c614b0(puVar16);
    FUN_101de2d64(0,0,puVar16);
    func_0x000107c61654();
    func_0x000107c614ac(puVar16);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000101df0cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df0d0c; end: 101df0dcb;  */

void FUN_101df0d0c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xb8));
  uVar1 = *(undefined8 *)(lVar5 + 0xb0);
  uVar3 = *(undefined8 *)(lVar5 + 0xa0);
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x90);
    func_0x000107c61170(*(undefined8 *)(lVar5 + 0xa8));
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar3);
    *(undefined8 *)(lVar5 + 200) = param_1;
    func_0x000101df89f8(uVar4,0x112d373d8,&UNK_10d9014c0);
    pcVar2 = FUN_101df0dcc;
  }
  else {
    func_0x000107c61170(*(undefined8 *)(lVar5 + 0xa8));
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar3);
    pcVar2 = FUN_101df0e38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df0dcc; end: 101df0e37;  */

void FUN_101df0dcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  *puVar5 = uVar4;
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101df0e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df0e38; end: 101df0e9f;  */

void FUN_101df0e38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000101df0e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df0ea0; end: 101df12d7; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveNewSnapWithSnapDoc:entrySource:entryType:externalId:isMyEyesOnly:isDirectorModeDraft:isFromCameraRoll:isAutoSave:overrideCaptureSessionId:clientProcessingType:] */

void FUN_101df0ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar1 = param_2;
  }
  if (param_11 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101df0710(param_3,param_4,param_5,param_6,uVar1,param_7,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101df12d8; end: 101df130f;  */

void FUN_101df12d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_13;
  *(undefined8 *)(unaff_x22 + 0x98) = param_14;
  *(undefined8 *)(unaff_x22 + 0x78) = param_10;
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df1310,0,0);
  return;
}



/* Entry: 101df1310; end: 101df14df;  */

void FUN_101df1310(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar13 + 0x10,unaff_x22 + 0x10,0,0);
  puVar9 = (undefined8 *)(lVar13 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar9;
  if (puVar9 == (undefined8 *)0x0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
    puVar9[1] = 0;
    *puVar9 = 0x16;
    *(undefined1 *)(puVar9 + 2) = 0x80;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101df14d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar13 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000285a8(0x112d62368,&UNK_10d928280);
  puVar14 = (undefined8 *)(unaff_x22 + 0x28);
  *puVar14 = uVar1;
  func_0x000104888f7c();
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar14;
  if (lVar13 < 0x80000000) {
    lVar13 = *(long *)(unaff_x22 + 0x60);
    if ((-0x80000001 < lVar13) && (lVar15 = *(long *)(unaff_x22 + 0x58), -0x80000001 < lVar15)) {
      if (lVar13 < 0x80000000) {
        lVar16 = *(long *)(unaff_x22 + 0x88);
        puVar10 = puVar14;
        FUN_101de3414();
        puVar11 = puVar10;
        FUN_101df0038();
        plVar12 = (long *)0x13a0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb0) = plVar12;
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_101df14e0;
        lVar2 = *(long *)(unaff_x22 + 0x90);
        lVar5 = *(long *)(unaff_x22 + 0x98);
        lVar3 = *(long *)(unaff_x22 + 0x78);
        lVar6 = *(long *)(unaff_x22 + 0x80);
        lVar18 = *(long *)(unaff_x22 + 0x70);
        lVar17 = *(long *)(unaff_x22 + 0x68);
        lVar4 = *(long *)(unaff_x22 + 0x40);
        lVar7 = *(long *)(unaff_x22 + 0x48);
        plVar12[0x1f6] = (long)puVar9;
        plVar12[0x1f5] = (long)puVar11;
        plVar12[500] = 0;
        plVar12[499] = 0;
        *(byte *)((long)plVar12 + 299) = (byte)puVar10 & 1;
        plVar12[0x1f2] = 0;
        plVar12[0x1f1] = 0;
        plVar12[0x1f0] = 0;
        plVar12[0x1ef] = 0;
        plVar12[0x1ee] = lVar5;
        plVar12[0x1ed] = lVar2;
        plVar12[0x1ec] = lVar16;
        plVar12[0x1eb] = 0;
        plVar12[0x1ea] = 0;
        plVar12[0x1e9] = 0;
        plVar12[0x1e8] = 0;
        *(undefined1 *)((long)plVar12 + 0x12a) = 0;
        *(undefined1 *)((long)plVar12 + 0x129) = 0;
        *(undefined1 *)((long)plVar12 + 0x9b) = 0;
        *(undefined1 *)((long)plVar12 + 0x9a) = 0;
        plVar12[0x1e7] = 0;
        plVar12[0x1e6] = 0;
        plVar12[0x1e5] = lVar6;
        plVar12[0x1e4] = lVar3;
        plVar12[0x1e3] = lVar18;
        plVar12[0x1e2] = lVar17;
        *(int *)((long)plVar12 + 300) = (int)lVar13;
        *(int *)((long)plVar12 + 0x9c) = (int)lVar15;
        *(undefined1 *)((long)plVar12 + 0x99) = 0;
        plVar12[0x1e1] = (long)puVar14;
        plVar12[0x1e0] = lVar7;
        plVar12[0x1df] = lVar4;
        plVar12[0x1de] = 0;
        plVar12[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101df14e0);
      (*pcVar8)();
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101df14dc);
    (*pcVar8)();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x101df14d8);
  (*pcVar8)();
}



/* Entry: 101df14e0; end: 101df1553;  */

void FUN_101df14e0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb0));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xc0) = param_1;
    pcVar2 = FUN_101df1554;
  }
  else {
    pcVar2 = FUN_101df1594;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df1554; end: 101df1593;  */

void FUN_101df1554(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101df1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df1594; end: 101df15c7;  */

void FUN_101df1594(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x000101df15c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df15c8; end: 101df1943; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveNewSnapWithSnapDoc:snapId:entryId:entrySource:entryType:entryTitle:entrySubtitle:clientGeneratedSnapMetadata:featuredExpirationTimeUtc:] */

void FUN_101df15c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
                  undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long alStack_d0 [6];
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112d373d8;
  puVar9 = &UNK_10d9014c0;
  uStack_70 = param_6;
  uStack_68 = param_7;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar7 = auStack_a0 + lVar3;
  if (param_4 == 0) {
    lStack_88 = 0;
    puStack_78 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    lStack_88 = param_4;
    puStack_78 = puVar9;
  }
  if (param_5 == 0) {
    lStack_90 = 0;
    puStack_80 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    lStack_90 = param_5;
    puStack_80 = puVar9;
  }
  if (param_8 == 0) {
    lStack_98 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar8 = puVar9;
    lStack_98 = param_8;
  }
  func_0x000107c61174(param_3);
  lVar5 = param_9;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar4 = param_11;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  if (lVar5 == 0) {
    param_9 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  if (lVar4 == 0) {
    lVar5 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(puVar7,param_11);
    func_0x000107c61170(lVar4);
    lVar5 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar7,lVar4 == 0,1);
  *(undefined8 *)((long)alStack_d0 + lVar3 + 0x18) = param_10;
  *(undefined1 **)((long)alStack_d0 + lVar3 + 0x20) = puVar7;
  *(long *)((long)alStack_d0 + lVar3 + 8) = param_9;
  *(undefined **)((long)alStack_d0 + lVar3 + 0x10) = puVar9;
  *(undefined **)((long)alStack_d0 + lVar3) = puVar8;
  puVar2 = puStack_78;
  puVar1 = puStack_80;
  uVar6 = param_3;
  func_0x000101df0fac(param_3,lStack_88,puStack_78,lStack_90,puStack_80,uStack_70,uStack_68,
                      lStack_98);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(puVar2);
  func_0x000101df89f8(puVar7,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 101df1944; end: 101df19c7;  */

void FUN_101df1944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_8;
  *(undefined8 *)(unaff_x22 + 0x90) = param_9;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df19c8,0,0);
  return;
}



/* Entry: 101df19c8; end: 101df1bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df19c8(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined8 *)(lVar10 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    lVar10 = *(long *)(unaff_x22 + 0x90);
    uVar2 = *(ulong *)((long)puVar1 + _DAT_112e2efd0);
    func_0x000107c4cac0();
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(unaff_x22 + 0x70);
      plVar5 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101df1c90;
      lVar10 = *(long *)(unaff_x22 + 0x78);
      lVar4 = *(long *)(unaff_x22 + 0x80);
      lVar11 = *(long *)(unaff_x22 + 0x68);
      plVar5[8] = lVar7;
      plVar5[9] = (long)puVar1;
      plVar5[6] = lVar4;
      plVar5[7] = lVar11;
      plVar5[5] = lVar10;
      pcVar6 = FUN_101df5884;
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0xa0);
      lVar13 = *(long *)(unaff_x22 + 0x80);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x0001000285a8(0x112d62368,&UNK_10d928280);
      puVar3 = (undefined8 *)(unaff_x22 + 0x48);
      *puVar3 = uVar12;
      func_0x000104888f7c();
      *(undefined8 **)(unaff_x22 + 0xb0) = puVar3;
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,1,1,lVar4);
      FUN_101de3414();
      lVar4 = lVar11;
      FUN_101df0038();
      plVar5 = (long *)0x13a0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101df1bfc;
      lVar7 = *(long *)(unaff_x22 + 0xa0);
      lVar8 = *(long *)(unaff_x22 + 0x88);
      lVar9 = *(long *)(unaff_x22 + 0x78);
      plVar5[0x1f6] = (long)puVar1;
      plVar5[0x1f5] = lVar4;
      plVar5[500] = 0;
      plVar5[499] = 0;
      *(byte *)((long)plVar5 + 299) = (byte)lVar11 & 1;
      plVar5[0x1f2] = lVar13;
      plVar5[0x1f1] = lVar9;
      plVar5[0x1f0] = 0;
      plVar5[0x1ef] = 0;
      plVar5[0x1ee] = 0;
      plVar5[0x1ed] = lVar7;
      plVar5[0x1ec] = 0;
      plVar5[0x1eb] = 0;
      plVar5[0x1ea] = 0;
      plVar5[0x1e9] = lVar10;
      plVar5[0x1e8] = lVar8;
      *(undefined1 *)((long)plVar5 + 0x12a) = 0;
      *(undefined1 *)((long)plVar5 + 0x129) = 0;
      *(undefined1 *)((long)plVar5 + 0x9b) = 0;
      *(undefined1 *)((long)plVar5 + 0x9a) = 0;
      plVar5[0x1e7] = 0;
      plVar5[0x1e6] = 0;
      plVar5[0x1e5] = 0;
      plVar5[0x1e4] = 0;
      plVar5[0x1e3] = 0;
      plVar5[0x1e2] = 0;
      *(undefined4 *)((long)plVar5 + 300) = 0;
      *(undefined4 *)((long)plVar5 + 0x9c) = 0;
      *(undefined1 *)((long)plVar5 + 0x99) = 1;
      plVar5[0x1e1] = (long)puVar3;
      plVar5[0x1e0] = 0;
      plVar5[0x1df] = 0;
      plVar5[0x1de] = 0;
      plVar5[0x1dd] = 0;
      pcVar6 = FUN_101de34fc;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
    return;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
  puVar1[1] = 0;
  *puVar1 = 0x16;
  *(undefined1 *)(puVar1 + 2) = 0x80;
  func_0x000107c61654();
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101df1ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df1bfc; end: 101df1c8f;  */

void FUN_101df1bfc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0xb0));
    func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
    *(undefined8 *)(lVar3 + 0xe8) = param_1;
    pcVar1 = FUN_101df1d50;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0xb0));
    pcVar1 = FUN_101df1cf4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df1c90; end: 101df1cf3;  */

void FUN_101df1c90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xd0) = param_1;
  *(undefined8 *)(lVar2 + 0xd8) = param_2;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101df1dac;
  }
  else {
    pcVar1 = FUN_101df2074;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df1cf4; end: 101df1d4f;  */

void FUN_101df1cf4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000101df89f8(*(undefined8 *)(unaff_x22 + 0xa0),0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df1d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df1d50; end: 101df1dab;  */

void FUN_101df1d50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  *puVar4 = uVar3;
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101df1da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df1dac; end: 101df2073;  */

void FUN_101df1dac(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long unaff_x22;
  long lStack_148;
  long lStack_138;
  long lStack_128;
  
  iVar5 = (int)*(undefined8 *)(unaff_x22 + 0xd0);
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5b634();
  func_0x000107c43750();
  func_0x000107c61180();
  if (lVar6 == 0) {
    bVar3 = false;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c49820();
    func_0x000107c61170(lVar6);
    bVar3 = lVar7 == 1;
  }
  lVar16 = *(long *)(unaff_x22 + 0xd8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x60);
  bVar4 = 0;
  FUN_101df5cc4(2,lVar16);
  puVar20 = &UNK_10d928280;
  func_0x0001000285a8(0x112d62368);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
  lVar6 = unaff_x22 + 0x40;
  func_0x000104888f7c();
  *(long *)(unaff_x22 + 0xf0) = lVar6;
  lVar7 = lVar16;
  func_0x000107c42998();
  lVar8 = lVar16;
  func_0x000107c43c94();
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lStack_128 = 0;
    puVar17 = (undefined *)0x0;
    puVar13 = puVar20;
  }
  else {
    lStack_128 = lVar16;
    func_0x000107c5faec();
    puVar13 = puVar20;
    func_0x000107c61170(lVar16);
    puVar17 = puVar20;
  }
  *(undefined **)(unaff_x22 + 0xf8) = puVar17;
  lVar16 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c5c38c();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lStack_138 = 0;
    puVar19 = (undefined *)0x0;
    puVar20 = puVar13;
  }
  else {
    lStack_138 = lVar16;
    func_0x000107c5faec();
    puVar20 = puVar13;
    func_0x000107c61170(lVar16);
    puVar19 = puVar13;
  }
  *(undefined **)(unaff_x22 + 0x100) = puVar19;
  lVar16 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lStack_148 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    lStack_148 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
  }
  *(undefined **)(unaff_x22 + 0x108) = puVar20;
  lVar16 = *(long *)(unaff_x22 + 0xd0);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar11 = *(long *)(unaff_x22 + 0x98);
  lVar9 = lVar2;
  func_0x000107c4a274();
  lVar10 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar11,1,1,lVar10);
  FUN_101de3414();
  lVar10 = lVar11;
  FUN_101df0038();
  plVar12 = (long *)0x13a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101df20dc;
  lVar14 = *(long *)(unaff_x22 + 0x98);
  lVar15 = *(long *)(unaff_x22 + 0x88);
  plVar12[0x1f6] = *(long *)(unaff_x22 + 0xa8);
  plVar12[0x1f5] = lVar10;
  plVar12[500] = 0;
  plVar12[499] = 0;
  *(byte *)((long)plVar12 + 299) = (byte)lVar11 & 1;
  plVar12[0x1f2] = 0;
  plVar12[0x1f1] = 0;
  plVar12[0x1f0] = 0;
  plVar12[0x1ef] = lVar16;
  plVar12[0x1ee] = lVar2;
  plVar12[0x1ed] = lVar14;
  plVar12[0x1ec] = 0;
  plVar12[0x1eb] = 0;
  plVar12[0x1ea] = 0;
  plVar12[0x1e9] = lVar1;
  plVar12[0x1e8] = lVar15;
  *(byte *)((long)plVar12 + 0x12a) = bVar4 & 1;
  *(bool *)((long)plVar12 + 0x129) = iVar5 == 3;
  *(bool *)((long)plVar12 + 0x9b) = bVar3;
  *(char *)((long)plVar12 + 0x9a) = (char)lVar9;
  plVar12[0x1e7] = (long)puVar20;
  plVar12[0x1e6] = lStack_148;
  plVar12[0x1e5] = (long)puVar19;
  plVar12[0x1e4] = lStack_138;
  plVar12[0x1e3] = (long)puVar17;
  plVar12[0x1e2] = lStack_128;
  *(int *)((long)plVar12 + 300) = (int)lVar8;
  *(int *)((long)plVar12 + 0x9c) = (int)lVar7;
  *(undefined1 *)((long)plVar12 + 0x99) = 1;
  plVar12[0x1e1] = lVar6;
  plVar12[0x1e0] = 0;
  plVar12[0x1df] = 0;
  plVar12[0x1de] = 0;
  plVar12[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
  return;
}



/* Entry: 101df2074; end: 101df20db;  */

void FUN_101df2074(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_101de2d64(0,0,*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61654();
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df20d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df20dc; end: 101df21db;  */

void FUN_101df20dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  *(long **)(lVar8 + 0x28) = unaff_x22;
  *(undefined8 *)(lVar8 + 0x30) = param_1;
  *(long *)(lVar8 + 0x38) = unaff_x20;
  uVar1 = *(undefined8 *)(lVar8 + 0x108);
  uVar2 = *(undefined8 *)(lVar8 + 0xf8);
  uVar4 = *(undefined8 *)(lVar8 + 0x100);
  *(long *)(lVar8 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x110));
  uVar7 = *(undefined8 *)(lVar8 + 0xf0);
  uVar3 = *(undefined8 *)(lVar8 + 0xd0);
  uVar5 = *(undefined8 *)(lVar8 + 0xd8);
  if (unaff_x20 == 0) {
    func_0x000101df89f8(*(undefined8 *)(lVar8 + 0x98),0x112d373d8,&UNK_10d9014c0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar7);
    pcVar6 = FUN_101df21dc;
  }
  else {
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar7);
    pcVar6 = FUN_101df2228;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 101df21dc; end: 101df2227;  */

void FUN_101df21dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df1d50,0,0);
  return;
}



/* Entry: 101df2228; end: 101df2297;  */

void FUN_101df2228(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar1);
  func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df2294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df2298; end: 101df2373; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveEditedSnapWithSnapDoc:existingEntryId:snapIdToReplace:overrideCaptureSessionId:] */

void FUN_101df2298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_5);
  uVar3 = uVar2;
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101df1804(param_3,param_4,param_2,param_5,uVar2,param_6,uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101df2374; end: 101df249b;  */

undefined *
FUN_101df2374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110488748;
  func_0x000107c613fc(&UNK_110488748,0x41,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  puVar2[0x40] = param_6;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  uVar3 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd00000000000004c,0x800000010f011fa0,&UNK_10da17d88,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 101df249c; end: 101df251b;  */

void FUN_101df249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x110) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df251c,0,0);
  return;
}



/* Entry: 101df251c; end: 101df2737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df251c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined8 *)(lVar8 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x98) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(ulong *)((long)puVar1 + _DAT_112e2efd0);
    func_0x000107c4cac0();
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(unaff_x22 + 0x70);
      plVar4 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101df27cc;
      lVar8 = *(long *)(unaff_x22 + 0x78);
      lVar9 = *(long *)(unaff_x22 + 0x80);
      lVar6 = *(long *)(unaff_x22 + 0x68);
      plVar4[8] = lVar7;
      plVar4[9] = (long)puVar1;
      plVar4[6] = lVar9;
      plVar4[7] = lVar6;
      plVar4[5] = lVar8;
      pcVar5 = FUN_101df5884;
    }
    else {
      lVar9 = *(long *)(unaff_x22 + 0x90);
      lVar11 = *(long *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x0001000285a8(0x112d62368,&UNK_10d928280);
      puVar3 = (undefined8 *)(unaff_x22 + 0x48);
      *puVar3 = uVar10;
      func_0x000104888f7c();
      *(undefined8 **)(unaff_x22 + 0xa0) = puVar3;
      lVar8 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar9,1,1,lVar8);
      FUN_101de3414();
      lVar8 = lVar9;
      FUN_101df0038();
      plVar4 = (long *)0x13a0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101df2738;
      lVar6 = *(long *)(unaff_x22 + 0x90);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      plVar4[0x1f6] = (long)puVar1;
      plVar4[0x1f5] = lVar8;
      plVar4[500] = 0;
      plVar4[499] = 0;
      *(byte *)((long)plVar4 + 299) = (byte)lVar9 & 1;
      plVar4[0x1f2] = lVar11;
      plVar4[0x1f1] = lVar7;
      plVar4[0x1f0] = 0;
      plVar4[0x1ef] = 0;
      plVar4[0x1ee] = 0;
      plVar4[0x1ed] = lVar6;
      plVar4[0x1ec] = 0;
      plVar4[0x1eb] = 0;
      plVar4[0x1ea] = 0;
      plVar4[0x1e9] = 0;
      plVar4[0x1e8] = 0;
      *(undefined1 *)((long)plVar4 + 0x12a) = 0;
      *(undefined1 *)((long)plVar4 + 0x129) = 0;
      *(undefined1 *)((long)plVar4 + 0x9b) = 0;
      *(undefined1 *)((long)plVar4 + 0x9a) = 0;
      plVar4[0x1e7] = 0;
      plVar4[0x1e6] = 0;
      plVar4[0x1e5] = 0;
      plVar4[0x1e4] = 0;
      plVar4[0x1e3] = 0;
      plVar4[0x1e2] = 0;
      *(undefined4 *)((long)plVar4 + 300) = 0;
      *(undefined4 *)((long)plVar4 + 0x9c) = 0;
      *(undefined1 *)((long)plVar4 + 0x99) = 1;
      plVar4[0x1e1] = (long)puVar3;
      plVar4[0x1e0] = 0;
      plVar4[0x1df] = 0;
      plVar4[0x1de] = 0;
      plVar4[0x1dd] = 0;
      pcVar5 = FUN_101de34fc;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
    return;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
  puVar1[1] = 0;
  *puVar1 = 0x16;
  *(undefined1 *)(puVar1 + 2) = 0x80;
  func_0x000107c61654();
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101df26e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df2738; end: 101df27cb;  */

void FUN_101df2738(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x90);
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0xa0));
    func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
    *(undefined8 *)(lVar3 + 0xd8) = param_1;
    pcVar1 = FUN_101df288c;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0xa0));
    pcVar1 = FUN_101df2830;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df27cc; end: 101df282f;  */

void FUN_101df27cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xc0) = param_1;
  *(undefined8 *)(lVar2 + 200) = param_2;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101df28e8;
  }
  else {
    pcVar1 = FUN_101df2b68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df2830; end: 101df288b;  */

void FUN_101df2830(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000101df89f8(*(undefined8 *)(unaff_x22 + 0x90),0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df2888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df288c; end: 101df28e7;  */

void FUN_101df288c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  *puVar4 = uVar3;
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101df28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df28e8; end: 101df2b67;  */

void FUN_101df28e8(void)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  
  iVar4 = (int)*(undefined8 *)(unaff_x22 + 0xc0);
  lVar7 = *(long *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5b634();
  bVar3 = 0;
  FUN_101df5cc4(2,lVar7);
  puVar15 = &UNK_10d928280;
  func_0x0001000285a8(0x112d62368);
  puVar13 = (undefined8 *)(unaff_x22 + 0x40);
  *puVar13 = uVar16;
  func_0x000104888f7c();
  *(undefined8 **)(unaff_x22 + 0xe0) = puVar13;
  lVar5 = lVar7;
  func_0x000107c42998();
  lVar6 = lVar7;
  func_0x000107c43c94();
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lStack_128 = 0;
    puVar14 = (undefined *)0x0;
    puVar11 = puVar15;
  }
  else {
    lStack_128 = lVar7;
    func_0x000107c5faec();
    puVar11 = puVar15;
    func_0x000107c61170(lVar7);
    puVar14 = puVar15;
  }
  *(undefined **)(unaff_x22 + 0xe8) = puVar14;
  lVar7 = *(long *)(unaff_x22 + 200);
  func_0x000107c5c38c();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lStack_138 = 0;
    puVar18 = (undefined *)0x0;
    puVar15 = puVar11;
  }
  else {
    lStack_138 = lVar7;
    func_0x000107c5faec();
    puVar15 = puVar11;
    func_0x000107c61170(lVar7);
    puVar18 = puVar11;
  }
  *(undefined **)(unaff_x22 + 0xf0) = puVar18;
  lVar7 = *(long *)(unaff_x22 + 200);
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lStack_140 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    lStack_140 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  *(undefined **)(unaff_x22 + 0xf8) = puVar15;
  lVar7 = *(long *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 200);
  lVar17 = *(long *)(unaff_x22 + 0x88);
  lVar8 = lVar1;
  func_0x000107c4a274();
  lVar9 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar17,1,1,lVar9);
  FUN_101de3414();
  lVar9 = lVar17;
  FUN_101df0038();
  plVar10 = (long *)0x13a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101df2bd0;
  lVar12 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x110);
  plVar10[0x1f6] = *(long *)(unaff_x22 + 0x98);
  plVar10[0x1f5] = lVar9;
  plVar10[500] = 0;
  plVar10[499] = 0;
  *(byte *)((long)plVar10 + 299) = (byte)lVar17 & 1;
  plVar10[0x1f2] = 0;
  plVar10[0x1f1] = 0;
  plVar10[0x1f0] = 0;
  plVar10[0x1ef] = lVar7;
  plVar10[0x1ee] = lVar1;
  plVar10[0x1ed] = lVar12;
  plVar10[0x1ec] = 0;
  plVar10[0x1eb] = 0;
  plVar10[0x1ea] = 0;
  plVar10[0x1e9] = 0;
  plVar10[0x1e8] = 0;
  *(byte *)((long)plVar10 + 0x12a) = bVar3 & 1;
  *(bool *)((long)plVar10 + 0x129) = iVar4 == 3;
  *(undefined1 *)((long)plVar10 + 0x9b) = uVar2;
  *(char *)((long)plVar10 + 0x9a) = (char)lVar8;
  plVar10[0x1e7] = (long)puVar15;
  plVar10[0x1e6] = lStack_140;
  plVar10[0x1e5] = (long)puVar18;
  plVar10[0x1e4] = lStack_138;
  plVar10[0x1e3] = (long)puVar14;
  plVar10[0x1e2] = lStack_128;
  *(int *)((long)plVar10 + 300) = (int)lVar6;
  *(int *)((long)plVar10 + 0x9c) = (int)lVar5;
  *(undefined1 *)((long)plVar10 + 0x99) = 1;
  plVar10[0x1e1] = (long)puVar13;
  plVar10[0x1e0] = 0;
  plVar10[0x1df] = 0;
  plVar10[0x1de] = 0;
  plVar10[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
  return;
}



/* Entry: 101df2b68; end: 101df2bcf;  */

void FUN_101df2b68(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_101de2d64(0,0,*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c61654();
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df2bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df2bd0; end: 101df2ccf;  */

void FUN_101df2bd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  *(long **)(lVar8 + 0x28) = unaff_x22;
  *(undefined8 *)(lVar8 + 0x30) = param_1;
  *(long *)(lVar8 + 0x38) = unaff_x20;
  uVar1 = *(undefined8 *)(lVar8 + 0xf8);
  uVar2 = *(undefined8 *)(lVar8 + 0xe8);
  uVar4 = *(undefined8 *)(lVar8 + 0xf0);
  *(long *)(lVar8 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x100));
  uVar7 = *(undefined8 *)(lVar8 + 0xe0);
  uVar3 = *(undefined8 *)(lVar8 + 0xc0);
  uVar5 = *(undefined8 *)(lVar8 + 200);
  if (unaff_x20 == 0) {
    func_0x000101df89f8(*(undefined8 *)(lVar8 + 0x88),0x112d373d8,&UNK_10d9014c0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar7);
    pcVar6 = FUN_101df2cd0;
  }
  else {
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar7);
    pcVar6 = FUN_101df2d1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 101df2cd0; end: 101df2d1b;  */

void FUN_101df2cd0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df288c,0,0);
  return;
}



/* Entry: 101df2d1c; end: 101df2d8b;  */

void FUN_101df2d1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61170(uVar1);
  func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df2d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df2d8c; end: 101df2e4b; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveEditedSnapWithSnapDoc:existingEntryId:snapIdToReplace:isDirectorModeDraft:] */

void FUN_101df2d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101df2374(param_3,param_4,param_2,param_5,uVar2,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101df2e4c; end: 101df3037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101df2e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x0001000a8868(unaff_x20 + _DAT_112e2efd8,*(undefined8 *)(unaff_x20 + _DAT_112e2efd8 + 0x18))
  ;
  puVar1 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b25e8;
  func_0x000107c610f8(PTR_PTR_1126b25e8);
  func_0x000107c453e4();
  func_0x000107c57494(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c60a44(auStack_78,0x4010000000000000,600);
  func_0x000107c5d19c();
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_101e077c8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110488720;
  func_0x000107c613fc(&UNK_110488720,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  puVar2[0x20] = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(param_3);
  uVar4 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000042,0x800000010f011f50,&UNK_10da17d78,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return puVar2;
}



/* Entry: 101df3038; end: 101df30a7;  */

void FUN_101df3038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined1 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df30a8,0,0);
  return;
}



/* Entry: 101df30a8; end: 101df322b;  */

void FUN_101df30a8(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (undefined8 *)(lVar9 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x58) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x48);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,1,1,lVar4);
    FUN_101de3414();
    lVar6 = lVar5;
    FUN_101df0038();
    plVar7 = (long *)0x13a0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101df322c;
    lVar8 = *(long *)(unaff_x22 + 0x50);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x78);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x40);
    plVar7[0x1f6] = (long)puVar3;
    plVar7[0x1f5] = lVar6;
    plVar7[500] = 0;
    plVar7[499] = 0;
    *(byte *)((long)plVar7 + 299) = (byte)lVar5 & 1;
    plVar7[0x1f2] = 0;
    plVar7[0x1f1] = 0;
    plVar7[0x1f0] = 0;
    plVar7[0x1ef] = 0;
    plVar7[0x1ee] = 0;
    plVar7[0x1ed] = lVar8;
    plVar7[0x1ec] = 0;
    plVar7[0x1eb] = lVar9;
    plVar7[0x1ea] = lVar1;
    plVar7[0x1e9] = 0;
    plVar7[0x1e8] = 0;
    *(undefined1 *)((long)plVar7 + 0x12a) = 0;
    *(undefined1 *)((long)plVar7 + 0x129) = 1;
    *(undefined1 *)((long)plVar7 + 0x9b) = 0;
    *(undefined1 *)((long)plVar7 + 0x9a) = uVar2;
    plVar7[0x1e7] = 0;
    plVar7[0x1e6] = 0;
    plVar7[0x1e5] = 0;
    plVar7[0x1e4] = 0;
    plVar7[0x1e3] = 0;
    plVar7[0x1e2] = 0;
    *(undefined4 *)((long)plVar7 + 300) = 0;
    *(undefined4 *)((long)plVar7 + 0x9c) = 0;
    *(undefined1 *)((long)plVar7 + 0x99) = 2;
    plVar7[0x1e1] = lVar4;
    plVar7[0x1e0] = 0;
    plVar7[0x1df] = 0;
    plVar7[0x1de] = 0;
    plVar7[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
    return;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
  puVar3[1] = 0;
  *puVar3 = 0x16;
  *(undefined1 *)(puVar3 + 2) = 0x80;
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101df3228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df322c; end: 101df32af;  */

void FUN_101df322c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = param_1;
    func_0x000101df89f8(*(undefined8 *)(lVar2 + 0x50),0x112d373d8,&UNK_10d9014c0);
    pcVar1 = FUN_101df32b0;
  }
  else {
    pcVar1 = FUN_101df3300;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101df32b0; end: 101df32ff;  */

void FUN_101df32b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  *puVar3 = uVar2;
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df32fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df3300; end: 101df3353;  */

void FUN_101df3300(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000101df89f8(uVar1,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101df3350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df3354; end: 101df335f; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveCameraRollImageWithImage:cameraRollId:creationDate:isMyEyesOnly:] */

void FUN_101df3354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5ee94(puVar3,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101df2e4c(param_3,param_4,param_2,puVar3,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101df3360; end: 101df3517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101df3360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112e2efd8,*(undefined8 *)(unaff_x20 + _DAT_112e2efd8 + 0x18))
  ;
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c5dd5c();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b25e8;
  func_0x000107c610f8(PTR_PTR_1126b25e8);
  func_0x000107c453e4();
  func_0x000107c57494(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  FUN_101e077c8(puVar1,param_4,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104886f8;
  func_0x000107c613fc(&UNK_1104886f8,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  puVar2[0x20] = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(param_3);
  uVar4 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000042,0x800000010f011f00,&UNK_10da17d68,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return puVar2;
}



/* Entry: 101df3518; end: 101df3587;  */

void FUN_101df3518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined1 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df3588,0,0);
  return;
}



/* Entry: 101df3588; end: 101df370b;  */

void FUN_101df3588(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (undefined8 *)(lVar9 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x58) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x48);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,1,1,lVar4);
    FUN_101de3414();
    lVar6 = lVar5;
    FUN_101df0038();
    plVar7 = (long *)0x13a0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101df370c;
    lVar8 = *(long *)(unaff_x22 + 0x50);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x78);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x40);
    plVar7[0x1f6] = (long)puVar3;
    plVar7[0x1f5] = lVar6;
    plVar7[500] = 0;
    plVar7[499] = 0;
    *(byte *)((long)plVar7 + 299) = (byte)lVar5 & 1;
    plVar7[0x1f2] = 0;
    plVar7[0x1f1] = 0;
    plVar7[0x1f0] = 0;
    plVar7[0x1ef] = 0;
    plVar7[0x1ee] = 0;
    plVar7[0x1ed] = lVar8;
    plVar7[0x1ec] = 0;
    plVar7[0x1eb] = lVar9;
    plVar7[0x1ea] = lVar1;
    plVar7[0x1e9] = 0;
    plVar7[0x1e8] = 0;
    *(undefined1 *)((long)plVar7 + 0x12a) = 0;
    *(undefined1 *)((long)plVar7 + 0x129) = 1;
    *(undefined1 *)((long)plVar7 + 0x9b) = 0;
    *(undefined1 *)((long)plVar7 + 0x9a) = uVar2;
    plVar7[0x1e7] = 0;
    plVar7[0x1e6] = 0;
    plVar7[0x1e5] = 0;
    plVar7[0x1e4] = 0;
    plVar7[0x1e3] = 0;
    plVar7[0x1e2] = 0;
    *(undefined4 *)((long)plVar7 + 300) = 0;
    *(undefined4 *)((long)plVar7 + 0x9c) = 0;
    *(undefined1 *)((long)plVar7 + 0x99) = 2;
    plVar7[0x1e1] = lVar4;
    plVar7[0x1e0] = 0;
    plVar7[0x1df] = 0;
    plVar7[0x1de] = 0;
    plVar7[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
    return;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
  puVar3[1] = 0;
  *puVar3 = 0x16;
  *(undefined1 *)(puVar3 + 2) = 0x80;
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101df3708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df370c; end: 101df378f;  */

void FUN_101df370c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = param_1;
    func_0x000101df89f8(*(undefined8 *)(lVar2 + 0x50),0x112d373d8,&UNK_10d9014c0);
    uVar1 = 0x101df8a78;
  }
  else {
    uVar1 = 0x101df8a84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101df3790; end: 101df379b; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveCameraRollVideoWithVideo:cameraRollId:creationDate:isMyEyesOnly:] */

void FUN_101df3790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5ee94(puVar3,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101df3360(param_3,param_4,param_2,puVar3,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101df379c; end: 101df38a7;  */

void FUN_101df379c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5ee94(puVar3,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  (*param_7)(param_3,param_4,param_2,puVar3,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101df38a8; end: 101df3a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101df38a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  func_0x0001000a8868(unaff_x20 + _DAT_112e2efd8,*(undefined8 *)(unaff_x20 + _DAT_112e2efd8 + 0x18))
  ;
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c60a44(auStack_88,0x4010000000000000,600);
  func_0x000107c5d19c();
  func_0x000107c61180();
  FUN_101e07e34(param_1,param_4);
  puVar2 = puVar1;
  FUN_101e077c8(puVar1,param_3,param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar3 = &UNK_1104886d0;
  func_0x000107c613fc(&UNK_1104886d0,0x2a,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  puVar3[0x28] = param_6;
  puVar3[0x29] = param_7;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar2);
  uVar4 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000044,0x800000010f011eb0,&UNK_10da17d58,puVar3);
  func_0x000107c61574(puVar3);
  func_0x00010488b12c();
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  return puVar3;
}



/* Entry: 101df3a80; end: 101df3b9f; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveStoryImage:creationDate:duration:isDurationInfinite:location:isMyEyesOnly:isFromCameraRoll:] */

void FUN_101df3a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ee94(puVar4,param_5);
  func_0x000107c61174(param_4);
  uVar2 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  uVar3 = param_4;
  FUN_101df38a8(param_1,param_4,puVar4,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101df3ba0; end: 101df3ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101df3ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112e2efd8,*(undefined8 *)(unaff_x20 + _DAT_112e2efd8 + 0x18))
  ;
  FUN_101e07950(param_1,param_3,param_2);
  func_0x0001000285a8(0x112e2f0e8,&UNK_10da17d40);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104886a8;
  func_0x000107c613fc(&UNK_1104886a8,0x2a,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar2[0x28] = param_5;
  puVar2[0x29] = param_6;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar3 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000044,0x800000010f011eb0,&UNK_10da17d50,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 101df3cec; end: 101df3dfb; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveStoryVideo:creationDate:isDurationInfinite:location:isMyEyesOnly:isFromCameraRoll:] */

void FUN_101df3cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ee94(puVar4,param_4);
  func_0x000107c61174(param_3);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_101df3ba0(param_3,puVar4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101df3dfc; end: 101df3eff;  */

undefined * FUN_101df3dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112deef20,&UNK_10da12e20);
  puVar1 = &UNK_110488630;
  func_0x000107c613fc(&UNK_110488630,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110488658;
  func_0x000107c613fc(&UNK_110488658,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_2);
  uVar3 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000019,0x800000010f011e90,&UNK_10da17d28,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 101df3f00; end: 101df3f1f;  */

void FUN_101df3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df3f20,0,0);
  return;
}



/* Entry: 101df3f20; end: 101df40c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df3f20(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  puVar2 = (undefined8 *)(lVar8 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x68) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar2,0,0);
    puVar2[1] = 0;
    *puVar2 = 0x16;
    *(undefined1 *)(puVar2 + 2) = 0x80;
    func_0x000107c61654();
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x50);
    if (*(long *)(lVar8 + 0x10) != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      puVar3 = PTR_PTR_1126a95c8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c5fc48(lVar8,PTR___sSSN_11034da80);
      func_0x000107c48d74();
      *(undefined **)(unaff_x22 + 0x70) = puVar3;
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar4);
      plVar9 = *(long **)((long)puVar2 + _DAT_112e2f010);
      plVar5 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101df40c4;
      plVar5[5] = unaff_x22 + 0x28;
      plVar5[6] = (long)plVar9;
      lVar10 = *(long *)(*plVar9 + 0x50);
      plVar5[7] = lVar10;
      lVar8 = 0;
      __sSqMa(0,lVar10);
      plVar5[8] = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      plVar5[9] = lVar8;
      uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar5[10] = uVar7;
      lVar8 = *(long *)(lVar10 + -8);
      plVar5[0xb] = lVar8;
      uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar5[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    puVar6 = puVar2;
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
    puVar6[1] = 0;
    *puVar6 = 0x22;
    *(undefined1 *)(puVar6 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101df40c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df40c4; end: 101df413b;  */

void FUN_101df40c4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0x28);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x88) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101df413c;
                    /* WARNING: Could not recover jumptable at 0x000101df4138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101df413c; end: 101df418f;  */

void FUN_101df413c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df4190,0,0);
  return;
}



/* Entry: 101df4190; end: 101df42d3;  */

void FUN_101df4190(void)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c61654();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    uVar3 = uVar5;
    func_0x000107c516c4();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
    FUN_101bb47ac(uVar5,cVar1);
    func_0x0001000285a8(0x112e2f0e0,&UNK_10da17d30);
    func_0x000103edf20c();
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_101df6944;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101df42d4;
  }
                    /* WARNING: Could not recover jumptable at 0x000101df42d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101df42d4; end: 101df4327;  */

void FUN_101df42d4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df4328,0,0);
  return;
}



/* Entry: 101df4328; end: 101df4443;  */

void FUN_101df4328(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(long *)(unaff_x22 + 0x38) = lVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c61654();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c5bfec();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101df4444);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    plVar6 = *(long **)(unaff_x22 + 0x40);
    func_0x000100cd2384(*(undefined8 *)(unaff_x22 + 0xb0),*(undefined1 *)(unaff_x22 + 0xb9));
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    *plVar6 = lVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101df443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101df4444; end: 101df44cb; -[_TtC24MemoriesSaveServicesImpl19MemoriesSaveManager saveStoryWithTitle:snapIds:] */

void FUN_101df4444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_101df3dfc(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101df44cc; end: 101df44ef;  */

void FUN_101df44cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb1) = param_6;
  *(undefined1 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df44f0,0,0);
  return;
}



/* Entry: 101df44f0; end: 101df45bf;  */

void FUN_101df44f0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined8 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined8 **)(unaff_x22 + 0x68) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0x16;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    plVar2 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_101184af0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101df45c0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101df45bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101df45c0; end: 101df4613;  */

void FUN_101df45c0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0xb2) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df4614,0,0);
  return;
}



/* Entry: 101df4614; end: 101df499b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df4614(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x22;
  long lVar13;
  ulong uVar9;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0xb2) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar11 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar11,PTR___ss5ErrorWS_11034ee10);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  }
  else {
    puVar12 = *(undefined8 **)(unaff_x22 + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      puVar5 = PTR_PTR_1126bcf28;
      func_0x000107c610f8(PTR_PTR_1126bcf28);
      func_0x000107c61174();
      func_0x000107c453e4(puVar5);
      func_0x000107c4077c(puVar12);
      func_0x000107c55ae0(puVar5);
      func_0x000107c4077c(puVar12);
      func_0x000107c56154(param_2,puVar5);
      func_0x000107c5603c(uVar11);
      func_0x000107c61170(puVar5);
      func_0x000107c61170();
      param_3 = puVar12;
    }
    func_0x0001000d224c(unaff_x22 + 0x30);
    puVar12 = *(undefined8 **)(unaff_x22 + 0x30);
    if (puVar12 != (undefined8 *)0x0) {
      func_0x0001000d224c(unaff_x22 + 0x38);
      lVar13 = *(long *)(unaff_x22 + 0x38);
      if (lVar13 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c490d4();
        uVar6 = 0;
        func_0x000103bd5d30(0);
        func_0x000107c610f8();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000103bd5a20(uVar6,PTR___swiftEmptyArrayStorage_11034f1c8,
                            PTR___swiftEmptyArrayStorage_11034f1c8,puVar5,0,0,0,0,0,0);
        *(undefined **)(unaff_x22 + 0x80) = puVar7;
        func_0x000107c61170(puVar12);
        func_0x000107c615e8(lVar13);
        func_0x0001000285a8(0x112d62368,&UNK_10d928280);
        puVar12 = (undefined8 *)(unaff_x22 + 0x40);
        *puVar12 = uVar11;
        func_0x000107c61174();
        func_0x000104888f7c();
        *(undefined8 **)(unaff_x22 + 0x88) = puVar12;
        lVar13 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        uVar8 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x90) = uVar8;
        lVar13 = 0;
        func_0x000107c5eea4();
        uVar9 = uVar8;
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar8,1,1,lVar13);
        bVar3 = (byte)uVar9;
        FUN_101de3414();
        plVar10 = (long *)0x13a0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x98) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101df499c;
        uVar1 = *(undefined1 *)(unaff_x22 + 0xb1);
        uVar2 = *(undefined1 *)(unaff_x22 + 0xb0);
        plVar10[0x1f6] = *(long *)(unaff_x22 + 0x68);
        plVar10[0x1f5] = 3;
        plVar10[500] = 0;
        plVar10[499] = 0;
        *(byte *)((long)plVar10 + 299) = bVar3 & 1;
        plVar10[0x1f2] = 0;
        plVar10[0x1f1] = 0;
        plVar10[0x1f0] = 0;
        plVar10[0x1ef] = 0;
        plVar10[0x1ee] = 0;
        plVar10[0x1ed] = uVar8;
        plVar10[0x1ec] = (long)puVar7;
        plVar10[0x1eb] = 0;
        plVar10[0x1ea] = 0;
        plVar10[0x1e9] = 0;
        plVar10[0x1e8] = 0;
        *(undefined1 *)((long)plVar10 + 0x12a) = 0;
        *(undefined1 *)((long)plVar10 + 0x129) = uVar1;
        *(undefined1 *)((long)plVar10 + 0x9b) = 0;
        *(undefined1 *)((long)plVar10 + 0x9a) = uVar2;
        plVar10[0x1e7] = 0;
        plVar10[0x1e6] = 0;
        plVar10[0x1e5] = 0;
        plVar10[0x1e4] = 0;
        plVar10[0x1e3] = 0;
        plVar10[0x1e2] = 0;
        *(undefined4 *)((long)plVar10 + 300) = 0;
        *(undefined4 *)((long)plVar10 + 0x9c) = 0;
        *(undefined1 *)((long)plVar10 + 0x99) = 0;
        plVar10[0x1e1] = (long)puVar12;
        plVar10[0x1e0] = 0;
        plVar10[0x1df] = 0;
        plVar10[0x1de] = 0;
        plVar10[0x1dd] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101de34fc,0,0);
        return;
      }
      func_0x000107c61170();
      param_3 = puVar12;
    }
    FUN_101df6cf4();
    puVar5 = &UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,param_3,0,0);
    param_3[1] = 0;
    *param_3 = 0x16;
    *(undefined1 *)(param_3 + 2) = 0x80;
    func_0x000107c61654();
    func_0x000107c614b0(puVar5);
    FUN_101de2d64(0,0,puVar5);
    func_0x000107c61654();
    func_0x000107c614ac(puVar5);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000100cd2384(*(undefined8 *)(unaff_x22 + 0x78),*(undefined1 *)(unaff_x22 + 0xb2));
  }
  func_0x000107c61170(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101df4998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df499c; end: 101df4a57;  */

void FUN_101df499c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x98));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x88);
    uVar2 = *(undefined8 *)(lVar5 + 0x90);
    uVar4 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)(lVar5 + 0xa8) = param_1;
    func_0x000101df89f8(uVar2,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c615c0(uVar2);
    pcVar3 = FUN_101df4a58;
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0x88);
    func_0x000107c61170(*(undefined8 *)(lVar5 + 0x80));
    func_0x000107c61574(uVar1);
    pcVar3 = FUN_101df4ac4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101df4a58; end: 101df4ac3;  */

void FUN_101df4a58(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x48);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb2);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000100cd2384(uVar1,uVar2);
  func_0x000107c61170(uVar3);
  *puVar5 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000101df4ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df4ac4; end: 101df4b33;  */

void FUN_101df4ac4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000101df89f8(uVar1,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c615c0(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000100cd2384(*(undefined8 *)(unaff_x22 + 0x78),*(undefined1 *)(unaff_x22 + 0xb2));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101df4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df4b34; end: 101df4be3;  */

void FUN_101df4b34(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(param_2);
      return;
    }
  }
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    uVar1 = uVar1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 101df4be4; end: 101df5863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df4be4(ulong param_1,ulong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,uint param_8,uint param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  long param_14)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  uint uStack_8c;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  ulong uStack_68;
  
  lVar4 = 0;
  uStack_98 = param_6;
  uStack_8c = param_8;
  uStack_88 = param_7;
  func_0x000107c5fcbc();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(unaff_x20 + _DAT_112e2f028);
  if (lVar14 == 0) {
    return;
  }
  uStack_a0 = param_4;
  uStack_80 = param_1;
  func_0x000107c615f0(lVar14);
  func_0x000107c614b0(param_1);
  lVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar6 = lVar18;
  func_0x000107c6147c(lVar18,&uStack_80,lVar5,lVar4,6);
  if ((int)lVar6 != 0) {
    func_0x000107c615e8(lVar14);
    (**(code **)(lVar19 + 8))(lVar18,lVar4);
    return;
  }
  uVar21 = param_2;
  uStack_c0 = param_5;
  if (param_2 == 0) {
    uStack_68 = param_1;
    func_0x000107c614b0(param_1);
    puVar7 = &uStack_80;
    func_0x000107c6147c(puVar7,&uStack_68,lVar5,&UNK_1106e3fc0,6);
    if ((int)puVar7 != 0) {
      uVar21 = uStack_80;
      if (bStack_70 < 0x40) goto LAB_101df4d30;
      FUN_101de25e0(uStack_80,uStack_78);
    }
    uVar21 = 0;
  }
LAB_101df4d30:
  lStack_a8 = lVar14;
  func_0x000107c614b0(param_2);
  uVar8 = param_1;
  func_0x000107c5ed2c();
  uVar16 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(uVar16 + 0x18) = 6;
  *(undefined8 *)(uVar16 + 0x10) = 3;
  uStack_80 = 0x3d6e6f73616572;
  uStack_78 = 0xe700000000000000;
  uStack_68 = param_1;
  func_0x000107c614b0(param_1);
  lVar4 = lVar5;
  func_0x000107c5fb18(&uStack_68,lVar5);
  lVar14 = lVar4;
  func_0x000107c5fb78();
  func_0x000107c6142c(lVar4);
  *(ulong *)(uVar16 + 0x20) = uStack_80;
  *(undefined8 *)(uVar16 + 0x28) = uStack_78;
  uStack_80 = 0x3d6e69616d6f64;
  uStack_78 = 0xe700000000000000;
  uVar10 = uVar8;
  func_0x000107c42210(uVar8);
  func_0x000107c61180();
  uVar9 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  func_0x000107c5fb78(uVar9,lVar14);
  func_0x000107c6142c(lVar14);
  *(ulong *)(uVar16 + 0x30) = uStack_80;
  *(undefined8 *)(uVar16 + 0x38) = uStack_78;
  uStack_80 = 0x3d65646f63;
  uStack_78 = 0xe500000000000000;
  uStack_b8 = uVar8;
  func_0x000107c3fcb0();
  puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  uStack_68 = uVar8;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  *(ulong *)(uVar16 + 0x40) = uStack_80;
  *(undefined8 *)(uVar16 + 0x48) = uStack_78;
  if (uVar21 != 0) {
    func_0x000107c614b0(uVar21);
    uVar9 = uVar21;
    func_0x000107c5ed2c();
    uStack_80 = 0x69796c7265646e75;
    uStack_78 = 0xeb000000003d676e;
    uStack_68 = uVar21;
    func_0x000107c614b0(uVar21);
    func_0x000107c5fb18(&uStack_68,lVar5);
    lVar14 = lVar5;
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar5);
    uVar17 = uStack_78;
    uVar10 = uStack_80;
    uVar8 = *(ulong *)(uVar16 + 0x10);
    lVar4 = uVar8 + 1;
    uVar11 = uVar16;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar8) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
      lVar14 = lVar4;
      func_0x0001000d182c(uVar11,lVar4,1,uVar16);
    }
    *(long *)(uVar11 + 0x10) = lVar4;
    lVar4 = uVar11 + uVar8 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar10;
    *(undefined8 *)(lVar4 + 0x28) = uVar17;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000011;
    uStack_78 = 0x800000010f011e70;
    uVar16 = uVar9;
    func_0x000107c42210(uVar9);
    func_0x000107c61180();
    uVar8 = uVar16;
    func_0x000107c5faec();
    func_0x000107c61170(uVar16);
    func_0x000107c5fb78(uVar8,lVar14);
    func_0x000107c6142c(lVar14);
    uVar17 = uStack_78;
    uVar8 = uStack_80;
    uVar16 = *(ulong *)(uVar11 + 0x10);
    uVar10 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar16) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001000d182c(uVar10,uVar16 + 1,1,uVar11);
    }
    *(ulong *)(uVar10 + 0x10) = uVar16 + 1;
    lVar4 = uVar10 + uVar16 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar8;
    *(undefined8 *)(lVar4 + 0x28) = uVar17;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0x69796c7265646e75;
    uStack_78 = 0xef3d65646f43676e;
    uVar16 = uVar9;
    func_0x000107c3fcb0();
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_68 = uVar16;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    puVar13 = puVar12;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar12);
    uVar17 = uStack_78;
    uVar8 = uStack_80;
    uVar16 = *(ulong *)(uVar10 + 0x10);
    puVar12 = (undefined *)(uVar16 + 1);
    uVar11 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar16) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      puVar13 = puVar12;
      func_0x0001000d182c(uVar11,puVar12,1,uVar10);
    }
    *(undefined **)(uVar11 + 0x10) = puVar12;
    lVar4 = uVar11 + uVar16 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar8;
    *(undefined8 *)(lVar4 + 0x28) = uVar17;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0x69796c7265646e75;
    uStack_78 = 0xef3d63736544676e;
    uVar16 = uVar9;
    func_0x000107c4b85c(uVar9);
    func_0x000107c61180();
    uVar8 = uVar16;
    func_0x000107c5faec();
    func_0x000107c61170(uVar16);
    func_0x000107c5fb78(uVar8,puVar13);
    func_0x000107c6142c(puVar13);
    uVar17 = uStack_78;
    uVar10 = uStack_80;
    uVar8 = *(ulong *)(uVar11 + 0x10);
    uVar16 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar8) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001000d182c(uVar16,uVar8 + 1,1,uVar11);
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + 1;
    lVar4 = uVar16 + uVar8 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar10;
    *(undefined8 *)(lVar4 + 0x28) = uVar17;
    func_0x000107c61170(uVar9);
    func_0x000107c614ac(uVar21);
  }
  uStack_80 = 0x3d747865746e6f63;
  uStack_78 = 0xe800000000000000;
  uStack_68 = CONCAT71(uStack_68._1_7_,param_3);
  puVar12 = &UNK_110488e70;
  func_0x000107c5fb18(&uStack_68,&UNK_110488e70);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  uVar17 = uStack_78;
  uVar10 = uStack_80;
  uVar8 = *(ulong *)(uVar16 + 0x10);
  uVar9 = uVar16;
  uStack_b0 = uVar21;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar8) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
    func_0x0001000d182c(uVar9,uVar8 + 1,1,uVar16);
  }
  uVar20 = 0x65736c6166;
  uVar15 = 0x65757274;
  *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
  lVar4 = uVar9 + uVar8 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar10;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0x6e456f77546d656d;
  uStack_78 = 0xee003d64656c6261;
  iVar3 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e2efd0);
  func_0x000107c4cac0();
  uVar17 = uVar15;
  if (iVar3 == 0) {
    uVar17 = uVar20;
  }
  uVar1 = 0xe400000000000000;
  if (iVar3 == 0) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar17,uVar1);
  func_0x000107c6142c(uVar1);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar9 + 0x10);
  uVar8 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar21) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001000d182c(uVar8,uVar21 + 1,1,uVar9);
  }
  *(ulong *)(uVar8 + 0x10) = uVar21 + 1;
  lVar4 = uVar8 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0x73657945794d7369;
  uStack_78 = 0xed00003d796c6e4f;
  bVar2 = (uStack_8c & 1) == 0;
  uVar17 = uVar15;
  if (bVar2) {
    uVar17 = uVar20;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar17,uVar1);
  func_0x000107c6142c(uVar1);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar8 + 0x10);
  uVar10 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar21) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001000d182c(uVar10,uVar21 + 1,1,uVar8);
  }
  *(ulong *)(uVar10 + 0x10) = uVar21 + 1;
  lVar4 = uVar10 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd000000000000011;
  uStack_78 = 0x800000010f011df0;
  bVar2 = (param_9 & 1) == 0;
  if (bVar2) {
    uVar15 = uVar20;
  }
  uVar17 = 0xe400000000000000;
  if (bVar2) {
    uVar17 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar15,uVar17);
  func_0x000107c6142c(uVar17);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar10 + 0x10);
  uVar8 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar21) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001000d182c(uVar8,uVar21 + 1,1,uVar10);
  }
  *(ulong *)(uVar8 + 0x10) = uVar21 + 1;
  lVar4 = uVar8 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0x61536f7475417369;
  uStack_78 = 0xeb000000003d6576;
  bVar2 = (param_9 & 0x100) == 0;
  uVar17 = 0x65757274;
  if (bVar2) {
    uVar17 = uVar20;
  }
  uVar15 = 0xe400000000000000;
  if (bVar2) {
    uVar15 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar17,uVar15);
  func_0x000107c6142c(uVar15);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar8 + 0x10);
  uVar10 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar21) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001000d182c(uVar10,uVar21 + 1,1,uVar8);
  }
  uVar8 = uStack_b0;
  *(ulong *)(uVar10 + 0x10) = uVar21 + 1;
  lVar4 = uVar10 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0x756f537972746e65;
  uStack_78 = 0xec0000003d656372;
  uStack_68 = CONCAT44(uStack_68._4_4_,param_10);
  puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar10 + 0x10);
  uVar9 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar21) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001000d182c(uVar9,uVar21 + 1,1,uVar10);
  }
  *(ulong *)(uVar9 + 0x10) = uVar21 + 1;
  lVar4 = uVar9 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0x7079547972746e65;
  uStack_78 = 0xea00000000003d65;
  uStack_68 = CONCAT44(uStack_68._4_4_,param_11);
  puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar21) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001000d182c(uVar10,uVar21 + 1,1,uVar9);
  }
  *(ulong *)(uVar10 + 0x10) = uVar21 + 1;
  lVar4 = uVar10 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd000000000000011;
  uStack_78 = 0x800000010f011e10;
  uVar17 = 0xe500000000000000;
  if (uStack_88 != 0) {
    uVar21 = uStack_98 & 0xffffffffffff;
    if ((uStack_88 & 0x2000000000000000) != 0) {
      uVar21 = uStack_88 >> 0x38 & 0xf;
    }
    if (uVar21 != 0) {
      uVar20 = 0x65757274;
    }
    uVar17 = 0xe500000000000000;
    if (uVar21 != 0) {
      uVar17 = 0xe400000000000000;
    }
  }
  func_0x000107c5fb78(uVar20,uVar17);
  func_0x000107c6142c(uVar17);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar10 + 0x10);
  uVar9 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar21) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001000d182c(uVar9,uVar21 + 1,1,uVar10);
  }
  *(ulong *)(uVar9 + 0x10) = uVar21 + 1;
  lVar4 = uVar9 + uVar21 * 0x10;
  *(ulong *)(lVar4 + 0x20) = uVar16;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  uStack_80 = 0x3d644970616e73;
  uStack_78 = 0xe700000000000000;
  func_0x000107c5fb78(uStack_a0,uStack_c0);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar21 = *(ulong *)(uVar9 + 0x10);
  lVar4 = uVar21 + 1;
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar21) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001000d182c(uVar10,lVar4,1,uVar9);
  }
  *(long *)(uVar10 + 0x10) = lVar4;
  lVar14 = uVar10 + uVar21 * 0x10;
  *(ulong *)(lVar14 + 0x20) = uVar16;
  *(undefined8 *)(lVar14 + 0x28) = uVar17;
  lVar14 = -0x7ffffffef0fee1d0;
  uVar17 = 0xd000000000000017;
  if (param_14 != 0) {
    lVar14 = param_14;
    uVar17 = param_13;
  }
  uVar16 = *(ulong *)(uVar10 + 0x18);
  lVar18 = uVar21 + 2;
  func_0x000107c61434(param_14);
  uVar21 = uVar10;
  if ((long)(uVar16 >> 1) < lVar18) {
    uVar21 = (ulong)(1 < uVar16);
    func_0x0001000d182c(uVar21,lVar18,1,uVar10);
  }
  lVar19 = lStack_a8;
  *(long *)(uVar21 + 0x10) = lVar18;
  lVar4 = uVar21 + lVar4 * 0x10;
  *(undefined8 *)(lVar4 + 0x20) = uVar17;
  *(long *)(lVar4 + 0x28) = lVar14;
  uStack_68 = uVar21;
  if (lRam0000000112e2f0d0 != -1) {
    func_0x000107c61568(0x112e2f0d0,FUN_101df6550);
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd00000000000001c;
  uStack_78 = 0x800000010f011e50;
  uVar17 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar15 = uVar17;
  func_0x00010011d734();
  uVar20 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar17,uVar15);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar20);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar17);
  uVar17 = 0;
  func_0x0001044db3fc(0);
  func_0x0001044dac34();
  func_0x000107c5027c(lVar19);
  func_0x000107c614ac(uVar8);
  func_0x000107c6142c(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(lVar19);
  func_0x000107c61170(uStack_b8);
  return;
}



/* Entry: 101df5864; end: 101df5883;  */

void FUN_101df5864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df5884,0,0);
  return;
}



/* Entry: 101df5884; end: 101df5933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df5884(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  plVar7 = *(long **)(lVar6 + _DAT_112e2efe8);
  uVar1 = 0;
  FUN_101df8140(0,0x112d51320,&PTR_PTR_1126b24d8);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  plVar4 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101df5934;
  plVar2[0xb] = (long)plVar4;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar5 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar6 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar6;
  lVar6 = *(long *)(lVar5 + 0x50);
  plVar2[0xf] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar2[0x10] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar4;
  *plVar4 = (long)plVar2;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)plVar7;
  lVar5 = *(long *)(*plVar7 + 0x50);
  plVar4[7] = lVar5;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  plVar4[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar4[9] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar6 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101df5934; end: 101df59a3;  */

void FUN_101df5934(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 == 0) {
    puVar1 = PTR_PTR_1126af4d0;
    func_0x000107c61168();
    *(undefined **)(lVar3 + 0x68) = puVar1;
    pcVar2 = FUN_101df59a4;
  }
  else {
    func_0x000107c61170(*(undefined8 *)(lVar3 + 0x50));
    pcVar2 = FUN_101df5c10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df59a4; end: 101df5b0b;  */

void FUN_101df59a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c430f4(puVar1,param_2,puVar6,uVar9);
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x70) = puVar1;
  func_0x000107c61170(uVar9);
  func_0x000107c61170();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x000107c61168(PTR_PTR_1126af4d0);
    puVar6 = puVar1;
    func_0x000107c6148c(puVar1,puVar2);
    *(undefined8 **)(unaff_x22 + 0x78) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      lVar7 = *(long *)(unaff_x22 + 0x40);
      if (lVar7 == 0) {
        plVar3 = (long *)0x50;
        func_0x000107c615f0(puVar1);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x90) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_101df5b88;
        lVar7 = *(long *)(unaff_x22 + 0x48);
        plVar3[5] = (long)puVar6;
        plVar3[6] = lVar7;
        pcVar4 = FUN_101df62d0;
      }
      else {
        plVar3 = (long *)0x60;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x80) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_101df5b0c;
        lVar8 = *(long *)(unaff_x22 + 0x48);
        lVar5 = *(long *)(unaff_x22 + 0x38);
        plVar3[6] = lVar7;
        plVar3[7] = lVar8;
        plVar3[5] = lVar5;
        pcVar4 = FUN_101df6068;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
      return;
    }
    func_0x000107c615e8();
    puVar6 = puVar1;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
  puVar6[1] = 0;
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 2) = 0x80;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101df5abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df5b0c; end: 101df5b87;  */

void FUN_101df5b0c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101df5c5c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101df5b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x78),param_1);
  return;
}



/* Entry: 101df5b88; end: 101df5c0f;  */

void FUN_101df5b88(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  lVar2 = *unaff_x22;
  *(long *)(lVar3 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101df5c90,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101df5c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar3 + 0x78),param_1);
  return;
}



/* Entry: 101df5c10; end: 101df5cc3;  */

void FUN_101df5c10(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101df5c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df5cc4; end: 101df604b;  */

uint FUN_101df5cc4(uint param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = 0x112d373d0;
  puStack_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  if ((param_1 & 0xff) == 2) {
    func_0x000107c3e514();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5ee94(lVar8);
      func_0x000107c61170(param_2);
    }
    pcVar6 = *(code **)(lVar11 + 0x38);
    (*pcVar6)(lVar8,param_2 == 0,1,lVar2);
    (*pcVar6)(lVar9,1,1,lVar2);
    lVar10 = (long)*(int *)(lVar10 + 0x30);
    FUN_101df89b0(lVar8,lVar5,0x112d373d8,&UNK_10d9014c0);
    FUN_101df89b0(lVar9,lVar5 + lVar10,0x112d373d8,&UNK_10d9014c0);
    pcVar6 = *(code **)(lVar11 + 0x30);
    lVar3 = lVar5;
    (*pcVar6)(lVar5,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000101df89f8(lVar9,0x112d373d8,&UNK_10d9014c0);
      func_0x000101df89f8(lVar8,0x112d373d8,&UNK_10d9014c0);
      lVar10 = lVar5 + lVar10;
      (*pcVar6)(lVar10,1,lVar2);
      if ((int)lVar10 == 1) {
        func_0x000101df89f8(lVar5,0x112d373d8,&UNK_10d9014c0);
        param_1 = 0;
        goto LAB_101df6028;
      }
    }
    else {
      FUN_101df89b0(lVar5,lVar7,0x112d373d8,&UNK_10d9014c0);
      lVar3 = lVar5 + lVar10;
      (*pcVar6)(lVar3,1,lVar2);
      puVar1 = puStack_68;
      if ((int)lVar3 != 1) {
        puVar4 = puStack_68;
        (**(code **)(lVar11 + 0x20))(puStack_68,lVar5 + lVar10,lVar2);
        func_0x000100df4c40();
        lVar10 = lVar7;
        func_0x000107c5fab8(lVar7,puVar1,lVar2,puVar4);
        pcVar6 = *(code **)(lVar11 + 8);
        (*pcVar6)(puVar1,lVar2);
        func_0x000101df89f8(lVar9,0x112d373d8,&UNK_10d9014c0);
        func_0x000101df89f8(lVar8,0x112d373d8,&UNK_10d9014c0);
        (*pcVar6)(lVar7,lVar2);
        func_0x000101df89f8(lVar5,0x112d373d8,&UNK_10d9014c0);
        param_1 = (uint)lVar10 ^ 1;
        goto LAB_101df6028;
      }
      func_0x000101df89f8(lVar9,0x112d373d8,&UNK_10d9014c0);
      func_0x000101df89f8(lVar8,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar11 + 8))(lVar7,lVar2);
    }
    func_0x000101df89f8(lVar5,0x112d373d0,&UNK_10d90f8f0);
    param_1 = 1;
  }
LAB_101df6028:
  return param_1 & 1;
}



/* Entry: 101df604c; end: 101df6067;  */

void FUN_101df604c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6068,0,0);
  return;
}



/* Entry: 101df6068; end: 101df6117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df6068(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  plVar7 = *(long **)(lVar3 + _DAT_112e2efe8);
  uVar1 = 0;
  FUN_101df8140(0,0x112d51320,&PTR_PTR_1126b24d8);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101df6118;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101df6118; end: 101df6187;  */

void FUN_101df6118(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 == 0) {
    puVar1 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    *(undefined **)(lVar3 + 0x58) = puVar1;
    pcVar2 = FUN_101df6188;
  }
  else {
    func_0x000107c61170(*(undefined8 *)(lVar3 + 0x40));
    pcVar2 = FUN_101df626c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df6188; end: 101df626b;  */

void FUN_101df6188(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c430e8(puVar1,param_2,puVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af4c0;
    func_0x000107c61168(PTR_PTR_1126af4c0);
    puVar3 = puVar1;
    func_0x000107c6148c(puVar1,puVar2);
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000101df620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000107c615e8();
    puVar3 = puVar1;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
  puVar3[1] = 0;
  *puVar3 = 0xd;
  *(undefined1 *)(puVar3 + 2) = 0x80;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101df6268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df626c; end: 101df62b7;  */

void FUN_101df626c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101df62b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df62b8; end: 101df62cf;  */

void FUN_101df62b8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df62d0,0,0);
  return;
}



/* Entry: 101df62d0; end: 101df6373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101df62d0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x30) + _DAT_112e2efe8);
  uVar1 = 0;
  FUN_101df8140(0,0x112d51320,&PTR_PTR_1126b24d8);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101df6374;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101df6374; end: 101df63db;  */

void FUN_101df6374(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  if (unaff_x20 == 0) {
    puVar1 = PTR_PTR_1126af4c0;
    func_0x000107c61168();
    *(undefined **)(lVar3 + 0x48) = puVar1;
    pcVar2 = FUN_101df63dc;
  }
  else {
    pcVar2 = FUN_101df64b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101df63dc; end: 101df64b7;  */

void FUN_101df63dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
  func_0x000107c430e0(puVar1,param_2,*(undefined8 *)(unaff_x22 + 0x28),0,puVar3);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af4c0;
    func_0x000107c61168(PTR_PTR_1126af4c0);
    puVar3 = puVar1;
    func_0x000107c6148c(puVar1,puVar2);
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000101df6458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x000107c615e8();
    puVar3 = puVar1;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
  puVar3[1] = 0;
  *puVar3 = 0xd;
  *(undefined1 *)(puVar3 + 2) = 0x80;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101df64b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df64b8; end: 101df6503;  */

void FUN_101df64b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101df6500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df6504; end: 101df654f;  */

uint FUN_101df6504(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 8) + 8))();
  return param_1 & 1;
}



/* Entry: 101df6550; end: 101df65fb;  */

void FUN_101df6550(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c564fc();
  puRam0000000112e2f0d8 = puVar1;
  return;
}



/* Entry: 101df65fc; end: 101df6617;  */

void FUN_101df65fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101df6618,0,0);
  return;
}



/* Entry: 101df6618; end: 101df6697;  */

void FUN_101df6618(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
  FUN_101df8d78(uVar4,uVar1);
  func_0x000107c61574();
  func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
  FUN_101df8d78(uVar4,uVar3);
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x000101df6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101df6698; end: 101df6793;  */

void FUN_101df6698(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101df66d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101df6794; end: 101df67bb;  */

void FUN_101df6794(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101df67a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101df67bc; end: 101df6883;  */

void FUN_101df67bc(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101df6804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101df6884;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1104885e0;
  func_0x000107c613fc(&UNK_1104885e0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101df8098,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101df6884; end: 101df6943;  */

void FUN_101df6884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101df8a58,0,0);
  return;
}


