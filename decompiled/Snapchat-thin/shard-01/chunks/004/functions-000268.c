/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fa8e7c; end: 100fa8ecf;  */

void FUN_100fa8e7c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1e8) = param_1;
  *(undefined1 *)(lVar1 + 0x111) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa8ed0,0,0);
  return;
}



/* Entry: 100fa8ed0; end: 100fa925f;  */

void FUN_100fa8ed0(void)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x1e8);
  if (*(char *)(unaff_x22 + 0x111) == '\x01') {
    *(undefined8 **)(unaff_x22 + 0x128) = puVar6;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x128,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar9);
    *(undefined8 **)(unaff_x22 + 0x118) = puVar6;
    func_0x000107c614b0(puVar6);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    lVar3 = unaff_x22 + 0x108;
    func_0x000107c6147c(lVar3,unaff_x22 + 0x118,uVar7,&UNK_110371da0,0);
    if ((int)lVar3 == 0) {
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
      func_0x0001000d224c(unaff_x22 + 0x68);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar3 = *(long *)(unaff_x22 + 0x70);
      uVar9 = uVar8;
      func_0x000107c614f0(uVar8);
      func_0x000107c602fc(0x1b);
      *(undefined8 *)(unaff_x22 + 0x78) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0xe000000000000000;
      func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d6a0);
      *(undefined8 **)(unaff_x22 + 0x120) = puVar6;
      func_0x000107c603d0(unaff_x22 + 0x120,unaff_x22 + 0x78,uVar7,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
      (**(code **)(lVar3 + 0xc0))(0,*(undefined8 *)(unaff_x22 + 0x78),uVar7,uVar9,lVar3);
      func_0x000107c6142c(uVar7);
      func_0x000107c615e8(uVar8);
      func_0x0001000d224c(unaff_x22 + 0x88);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar3 = *(long *)(unaff_x22 + 0x90);
      uVar8 = uVar7;
      func_0x000107c614f0(uVar7);
      (**(code **)(lVar3 + 0xb8))
                (puVar6,0xd00000000000001a,0x800000010ef1d6c0,0xd000000000000010,0x800000010ef1d6e0,
                 uVar8,lVar3);
      func_0x000107c615e8(uVar7);
      func_0x0001000d224c(unaff_x22 + 0x98);
      plVar4 = *(long **)(unaff_x22 + 0x98);
      lVar3 = *(long *)(unaff_x22 + 0xa0);
      plVar5 = plVar4;
      func_0x000107c614f0(plVar4);
      (**(code **)(lVar3 + 0x10))(0,0xffffffffffffffff,0,0,plVar5,lVar3);
      func_0x000107c615e8();
      func_0x000100faa6e0();
      func_0x000107c613f8(&UNK_110371da0,plVar4,0,0);
      *plVar4 = (long)puVar6;
      *(undefined1 *)(plVar4 + 1) = 2;
      func_0x000107c61654();
    }
    else {
      func_0x000107c614ac();
      uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
      func_0x000100faa6e0();
      func_0x000107c613f8(&UNK_110371da0,puVar6,0,0);
      *puVar6 = uVar7;
      *(undefined1 *)(puVar6 + 1) = uVar1;
      func_0x000107c61654();
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
    func_0x000107c5ee20(uVar7,uVar8);
    func_0x000107c51c28();
    func_0x000107c61180();
    *(undefined8 **)(unaff_x22 + 0x1f0) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x0001000285a8(0x112d51118,&UNK_10d917b38);
    func_0x000103edf20c();
    *(undefined8 **)(unaff_x22 + 0x1f8) = puVar6;
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = FUN_100fab6ac;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x200) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fa9260;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fa925c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fa9260; end: 100fa92b3;  */

void FUN_100fa9260(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x208) = param_1;
  *(undefined1 *)(lVar1 + 0x112) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fa92b4,0,0);
  return;
}



/* Entry: 100fa92b4; end: 100fa9fd7;  */

void FUN_100fa92b4(double param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined1 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  long *plVar34;
  long lVar35;
  
  puVar27 = *(undefined8 **)(unaff_x22 + 0x208);
  if (*(char *)(unaff_x22 + 0x112) == '\x01') {
    *(undefined8 **)(unaff_x22 + 0x130) = puVar27;
    iVar6 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar6 != 0) {
      uVar22 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x130,uVar22,PTR___ss5ErrorWS_11034ee10);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar25 = *(undefined1 *)(unaff_x22 + 0x111);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f8));
    func_0x000107c615e8(uVar31);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar26);
    FUN_100faa720(uVar21,uVar25);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f8));
    func_0x000107c4a7f8(puVar27);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100fa9fd0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100fa9fd4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100fa9fd8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar30 = (long)param_1;
    puVar7 = puVar27;
    func_0x000107c4a78c();
    func_0x000107c61180();
    puVar33 = puVar7;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar7);
    lVar24 = puVar33[2];
    func_0x000107c6142c(puVar33);
    puVar7 = puVar27;
    func_0x000107c42a34();
    iVar6 = (int)puVar7;
    if (iVar6 == 0) {
      puVar7 = puVar27;
      func_0x000107c4a78c();
      func_0x000107c61180();
      puVar33 = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        func_0x000107c5fc54();
        puVar33 = puVar7;
        func_0x000107c5fc48();
        func_0x000107c6142c(puVar7);
      }
      puVar9 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      func_0x000107c42fcc();
      func_0x000107c61180();
      func_0x000107c61170(puVar33);
      puVar10 = &UNK_110371ce0;
      func_0x000107c613fc(&UNK_110371ce0,0x18,7);
      plVar34 = (long *)(puVar10 + 0x10);
      *plVar34 = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x100faa748;
      *(undefined **)(unaff_x22 + 0x38) = puVar10;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x100faa5e4;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110371cf8;
      lVar23 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar23);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(uVar22);
      func_0x000107c429cc(puVar9);
      func_0x000107c60bd0(lVar23);
      func_0x000107c61428(plVar34,unaff_x22 + 0x40,0,0);
      lVar35 = *(long *)(*plVar34 + 0x10);
      func_0x0001000d224c(unaff_x22 + 0xd8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar23 = *(long *)(unaff_x22 + 0xe0);
      uVar21 = uVar22;
      func_0x000107c614f0();
      func_0x000107c602fc(0x3c);
      func_0x000107c5fb78(0xd00000000000001f,0x800000010ef1d790);
      *(long *)(unaff_x22 + 0x148) = lVar30;
      puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puVar12 = PTR___sSiN_11034deb0;
      puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar14);
      func_0x000107c5fb78(0x7463656c6573202c,0xeb000000003d6465);
      *(long *)(unaff_x22 + 0x150) = lVar24;
      puVar14 = puVar15;
      func_0x000107c6057c(puVar12,puVar15);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar14);
      func_0x000107c5fb78(0x7265766e6f63202c,0xec0000003d646574);
      *(long *)(unaff_x22 + 0x158) = lVar35;
      func_0x000107c6057c(puVar12,puVar15);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar15);
      (**(code **)(lVar23 + 0xc0))(1,0,0xe000000000000000,uVar21,lVar23);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c615e8(uVar22);
      if ((lVar24 != 0) && (lVar35 == 0)) {
        func_0x0001000d224c(unaff_x22 + 0xf8);
        uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
        lVar23 = *(long *)(unaff_x22 + 0x100);
        uVar21 = uVar22;
        func_0x000107c614f0(uVar22);
        func_0x000107c602fc(0x2a);
        func_0x000107c6142c(0xe000000000000000);
        *(long *)(unaff_x22 + 0x160) = lVar24;
        puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar12);
        func_0x000107c5fb78(0x736d65746920,0xe600000000000000);
        (**(code **)(lVar23 + 0xc0))(0,0xd000000000000022,0x800000010ef1d7b0,uVar21,lVar23);
        func_0x000107c6142c(0x800000010ef1d7b0);
        func_0x000107c615e8(uVar22);
        func_0x0001000d224c(unaff_x22 + 0x58);
        plVar4 = *(long **)(unaff_x22 + 0x58);
        lVar23 = *(long *)(unaff_x22 + 0x60);
        plVar11 = plVar4;
        func_0x000107c614f0();
        func_0x000100faa6e0();
        puVar12 = &UNK_110371da0;
        func_0x000107c613f8(&UNK_110371da0,plVar11,0,0);
        *plVar11 = lVar24;
        *(undefined1 *)(plVar11 + 1) = 1;
        (**(code **)(lVar23 + 0xb8))();
        func_0x000107c615e8(plVar4);
        func_0x000107c614ac(puVar12);
      }
      lVar20 = *(long *)(*plVar34 + 0x10);
      func_0x0001000d224c(unaff_x22 + 0xe8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar23 = *(long *)(unaff_x22 + 0xf0);
      uVar21 = uVar22;
      func_0x000107c614f0(uVar22);
      lVar16 = lVar30;
      (**(code **)(lVar23 + 0x10))(lVar20 != 0,lVar30,lVar24,lVar35,uVar21,lVar23);
      func_0x000107c615e8(uVar22);
      puVar7 = puVar27;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar23 = lVar16;
      if (puVar7 == (undefined8 *)0x0) {
LAB_100fa9e00:
        puVar7 = puVar27;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (puVar7 == (undefined8 *)0x0) {
          func_0x000107c5cda4();
          func_0x000107c61180();
          uVar25 = *(undefined1 *)(unaff_x22 + 0x112);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar5 = *(undefined1 *)(unaff_x22 + 0x111);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x1e8);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
          if (puVar27 == (undefined8 *)0x0) {
            func_0x000107c615e8(uVar17);
            func_0x000100faa734(uVar32,uVar25);
            func_0x000107c61170(uVar21);
            func_0x000107c61170(uVar31);
            func_0x000107c61170(puVar9);
            FUN_100faa720(uVar22,uVar5);
            func_0x000107c615e8(uVar26);
            puVar33 = (undefined8 *)0x0;
            puVar28 = (undefined8 *)0x0;
            uVar25 = 0;
            lVar23 = 1;
          }
          else {
            puVar28 = puVar27;
            func_0x000107c5d38c();
            func_0x000107c615e8(uVar17);
            func_0x000100faa734(uVar32,uVar25);
            func_0x000107c61170(uVar21);
            func_0x000107c61170(uVar31);
            func_0x000107c61170(puVar27);
            func_0x000107c61170(puVar9);
            FUN_100faa720(uVar22,uVar5);
            func_0x000107c615e8(uVar26);
            puVar33 = (undefined8 *)0x0;
            lVar23 = 0;
            uVar25 = 0;
          }
        }
        else {
          uVar31 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x1e8);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
          uVar25 = *(undefined1 *)(unaff_x22 + 0x112);
          uVar5 = *(undefined1 *)(unaff_x22 + 0x111);
          puVar33 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(uVar17);
          func_0x000100faa734(uVar31,uVar25);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar32);
          func_0x000107c61170(puVar9);
          FUN_100faa720(uVar22,uVar5);
          func_0x000107c615e8(uVar26);
          puVar28 = (undefined8 *)0x0;
          uVar25 = 1;
        }
      }
      else {
        puVar33 = puVar7;
        func_0x000107c5faec();
        lVar23 = lVar16;
        func_0x000107c61170(puVar7);
        puVar7 = puVar27;
        func_0x000107c5cda4();
        func_0x000107c61180();
        if (puVar7 == (undefined8 *)0x0) {
          func_0x000107c6142c(lVar16);
          goto LAB_100fa9e00;
        }
        uVar31 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1e8);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1f0);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1d0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
        uVar25 = *(undefined1 *)(unaff_x22 + 0x112);
        uVar5 = *(undefined1 *)(unaff_x22 + 0x111);
        puVar28 = puVar7;
        func_0x000107c5d38c();
        func_0x000107c615e8(uVar17);
        func_0x000100faa734(uVar31,uVar25);
        func_0x000107c61170(uVar21);
        func_0x000107c61170(uVar32);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
        FUN_100faa720(uVar22,uVar5);
        func_0x000107c615e8(uVar26);
        uVar25 = 0;
        lVar23 = lVar16;
      }
      puVar27 = *(undefined8 **)(unaff_x22 + 0x170);
      uVar22 = *(undefined8 *)(puVar10 + 0x10);
      func_0x000107c61434(uVar22);
      func_0x000107c61574(puVar10);
      *puVar27 = uVar22;
      puVar27[1] = puVar33;
      puVar27[2] = lVar23;
      puVar27[3] = puVar28;
      *(undefined1 *)(puVar27 + 4) = uVar25;
      puVar27[5] = lVar30;
      puVar27[6] = lVar24;
      puVar27[7] = lVar35;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100fa9898;
    }
    pcVar1 = "failed with error: ";
    uVar22 = 0xd00000000000001f;
    if (iVar6 != 2) {
      pcVar1 = "selection_config";
      uVar22 = 0xd000000000000014;
    }
    pcVar2 = "recap_config_insufficient_items";
    uVar21 = 0xd000000000000019;
    if (iVar6 != 1) {
      pcVar2 = pcVar1;
      uVar21 = uVar22;
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar25 = *(undefined1 *)(unaff_x22 + 0x112);
    uVar5 = *(undefined1 *)(unaff_x22 + 0x111);
    func_0x0001000d224c(unaff_x22 + 0xa8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar24 = *(long *)(unaff_x22 + 0xb0);
    uVar32 = uVar26;
    func_0x000107c614f0(uVar26);
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar21,(ulong)pcVar2 | 0x8000000000000000);
    (**(code **)(lVar24 + 0xc0))(0,0xd000000000000023,0x800000010ef1d720,uVar32,lVar24);
    func_0x000107c6142c(0x800000010ef1d720);
    func_0x000107c615e8(uVar26);
    func_0x0001000d224c(unaff_x22 + 0xb8);
    puVar3 = *(ulong **)(unaff_x22 + 0xb8);
    lVar24 = *(long *)(unaff_x22 + 0xc0);
    puVar8 = puVar3;
    func_0x000107c614f0();
    func_0x000100faa6e0();
    puVar27 = (undefined8 *)&UNK_110371da0;
    puVar33 = puVar27;
    puVar13 = puVar8;
    func_0x000107c613f8(&UNK_110371da0,puVar8,0,0);
    *puVar13 = (ulong)puVar7 & 0xffffffff;
    *(undefined1 *)(puVar13 + 1) = 0;
    (**(code **)(lVar24 + 0xb8))();
    func_0x000107c615e8(puVar3);
    func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
    func_0x000107c614ac(puVar33);
    func_0x0001000d224c(unaff_x22 + 200);
    uVar21 = *(undefined8 *)(unaff_x22 + 200);
    lVar24 = *(long *)(unaff_x22 + 0xd0);
    uVar26 = uVar21;
    func_0x000107c614f0(uVar21);
    (**(code **)(lVar24 + 0x10))(0,lVar30,0,0,uVar26,lVar24);
    func_0x000107c615e8(uVar21);
    func_0x000107c613f8(&UNK_110371da0,puVar8,0,0);
    *puVar8 = (ulong)puVar7 & 0xffffffff;
    *(undefined1 *)(puVar8 + 1) = 0;
    func_0x000107c61654();
    func_0x000100faa734(uVar19,uVar25);
    func_0x000107c61170(uVar31);
    FUN_100faa720(uVar22,uVar5);
    func_0x000107c61170(uVar17);
    func_0x000107c615e8(uVar18);
  }
  func_0x000107c615e8(uVar29);
  *(undefined8 **)(unaff_x22 + 0x118) = puVar27;
  func_0x000107c614b0(puVar27);
  uVar22 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar24 = unaff_x22 + 0x108;
  func_0x000107c6147c(lVar24,unaff_x22 + 0x118,uVar22,&UNK_110371da0,0);
  if ((int)lVar24 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
    func_0x0001000d224c(unaff_x22 + 0x68);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar24 = *(long *)(unaff_x22 + 0x70);
    uVar26 = uVar21;
    func_0x000107c614f0(uVar21);
    func_0x000107c602fc(0x1b);
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d6a0);
    *(undefined8 **)(unaff_x22 + 0x120) = puVar27;
    func_0x000107c603d0(unaff_x22 + 0x120,unaff_x22 + 0x78,uVar22,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(lVar24 + 0xc0))(0,*(undefined8 *)(unaff_x22 + 0x78),uVar22,uVar26,lVar24);
    func_0x000107c6142c(uVar22);
    func_0x000107c615e8(uVar21);
    func_0x0001000d224c(unaff_x22 + 0x88);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar24 = *(long *)(unaff_x22 + 0x90);
    uVar21 = uVar22;
    func_0x000107c614f0(uVar22);
    (**(code **)(lVar24 + 0xb8))
              (puVar27,0xd00000000000001a,0x800000010ef1d6c0,0xd000000000000010,0x800000010ef1d6e0,
               uVar21,lVar24);
    func_0x000107c615e8(uVar22);
    func_0x0001000d224c(unaff_x22 + 0x98);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x98);
    lVar24 = *(long *)(unaff_x22 + 0xa0);
    puVar33 = puVar7;
    func_0x000107c614f0(puVar7);
    (**(code **)(lVar24 + 0x10))(0,0xffffffffffffffff,0,0,puVar33,lVar24);
    func_0x000107c615e8();
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,puVar7,0,0);
    *puVar7 = puVar27;
    *(undefined1 *)(puVar7 + 1) = 2;
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac();
    uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar25 = *(undefined1 *)(unaff_x22 + 0x110);
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,puVar27,0,0);
    *puVar27 = uVar22;
    *(undefined1 *)(puVar27 + 1) = uVar25;
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100fa9898:
                    /* WARNING: Could not recover jumptable at 0x000100fa98b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fa9fd8; end: 100faa277;  */

void FUN_100fa9fd8(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0x1a8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  puVar2 = (undefined8 *)&UNK_1107a6f08;
  func_0x000107c613f8(&UNK_1107a6f08,puVar7,0,0);
  *puVar7 = uVar8;
  *(undefined8 **)(unaff_x22 + 0x118) = puVar2;
  func_0x000107c614b0();
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar3 = unaff_x22 + 0x108;
  func_0x000107c6147c(lVar3,unaff_x22 + 0x118,uVar8,&UNK_110371da0,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
    func_0x0001000d224c(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar3 = *(long *)(unaff_x22 + 0x70);
    uVar4 = uVar5;
    func_0x000107c614f0(uVar5);
    func_0x000107c602fc(0x1b);
    puVar7 = (undefined8 *)(unaff_x22 + 0x78);
    *puVar7 = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d6a0);
    *(undefined8 **)(unaff_x22 + 0x120) = puVar2;
    func_0x000107c603d0(unaff_x22 + 0x120,puVar7,uVar8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(lVar3 + 0xc0))(0,*puVar7,uVar8,uVar4,lVar3);
    func_0x000107c6142c(uVar8);
    func_0x000107c615e8(uVar5);
    func_0x0001000d224c(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = *(long *)(unaff_x22 + 0x90);
    uVar5 = uVar8;
    func_0x000107c614f0(uVar8);
    (**(code **)(lVar3 + 0xb8))
              (puVar2,0xd00000000000001a,0x800000010ef1d6c0,0xd000000000000010,0x800000010ef1d6e0,
               uVar5,lVar3);
    func_0x000107c615e8(uVar8);
    func_0x0001000d224c(unaff_x22 + 0x98);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x98);
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    puVar6 = puVar7;
    func_0x000107c614f0(puVar7);
    (**(code **)(lVar3 + 0x10))(0,0xffffffffffffffff,0,0,puVar6,lVar3);
    func_0x000107c615e8();
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,puVar7,0,0);
    *puVar7 = puVar2;
    *(undefined1 *)(puVar7 + 1) = 2;
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,puVar2,0,0);
    *puVar2 = uVar8;
    *(undefined1 *)(puVar2 + 1) = uVar1;
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
  }
                    /* WARNING: Could not recover jumptable at 0x000100faa274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faa278; end: 100faa503;  */

void FUN_100faa278(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1b0));
  puVar7 = *(undefined8 **)(unaff_x22 + 0x1c8);
  *(undefined8 **)(unaff_x22 + 0x118) = puVar7;
  func_0x000107c614b0(puVar7);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x108;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x118,uVar8,&UNK_110371da0,0);
  if ((int)lVar2 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
    func_0x0001000d224c(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar2 = *(long *)(unaff_x22 + 0x70);
    uVar3 = uVar4;
    func_0x000107c614f0(uVar4);
    func_0x000107c602fc(0x1b);
    puVar9 = (undefined8 *)(unaff_x22 + 0x78);
    *puVar9 = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000019,0x800000010ef1d6a0);
    *(undefined8 **)(unaff_x22 + 0x120) = puVar7;
    func_0x000107c603d0(unaff_x22 + 0x120,puVar9,uVar8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(lVar2 + 0xc0))(0,*puVar9,uVar8,uVar3,lVar2);
    func_0x000107c6142c(uVar8);
    func_0x000107c615e8(uVar4);
    func_0x0001000d224c(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar4 = uVar8;
    func_0x000107c614f0(uVar8);
    (**(code **)(lVar2 + 0xb8))
              (puVar7,0xd00000000000001a,0x800000010ef1d6c0,0xd000000000000010,0x800000010ef1d6e0,
               uVar4,lVar2);
    func_0x000107c615e8(uVar8);
    func_0x0001000d224c(unaff_x22 + 0x98);
    plVar6 = *(long **)(unaff_x22 + 0x98);
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    plVar5 = plVar6;
    func_0x000107c614f0(plVar6);
    (**(code **)(lVar2 + 0x10))(0,0xffffffffffffffff,0,0,plVar5,lVar2);
    func_0x000107c615e8();
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,plVar6,0,0);
    *plVar6 = (long)puVar7;
    *(undefined1 *)(plVar6 + 1) = 2;
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
    func_0x000100faa6e0();
    func_0x000107c613f8(&UNK_110371da0,puVar7,0,0);
    *puVar7 = uVar8;
    *(undefined1 *)(puVar7 + 1) = uVar1;
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
  }
                    /* WARNING: Could not recover jumptable at 0x000100faa500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100faa504; end: 100faa64b;  */

void FUN_100faa504(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0x21,0);
  uVar4 = *(ulong *)(param_4 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_4 + 0x10) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_100fb4c74(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_4 + 0x10) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100fb4c74(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined1 *)(lVar1 + 0x28) = 3;
  *(ulong *)(param_4 + 0x10) = uVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 100faa64c; end: 100faa71f;  */

void FUN_100faa64c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100faa720; end: 100faa7a3;  */

void FUN_100faa720(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100faa7a4; end: 100faa7f3;  */

undefined8 * FUN_100faa7a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100faa76c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100faa790(uVar3,uVar2);
  return param_1;
}



/* Entry: 100faa7f4; end: 100faa82f;  */

undefined8 * FUN_100faa7f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100faa790(uVar3,uVar2);
  return param_1;
}



/* Entry: 100faa830; end: 100faa8df;  */

int FUN_100faa830(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100faa8e0; end: 100faa947;  */

long FUN_100faa8e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100faa948; end: 100faaad3;  */

undefined8 * FUN_100faa948(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[2];
  func_0x000107c61434();
  if (lVar1 == 1) {
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    uVar2 = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 0x19) = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x11) = uVar2;
  }
  else {
    param_1[1] = param_2[1];
    param_1[2] = lVar1;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    func_0x000107c61434(lVar1);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 100faaad4; end: 100faab07;  */

undefined8 FUN_100faaad4(undefined8 param_1)

{
  (*(code *)&DAT_1038e0a74)();
  return param_1;
}



/* Entry: 100faab08; end: 100faaba7;  */

undefined8 * FUN_100faab08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  if (param_1[2] != 1) {
    lVar2 = param_2[2];
    if (lVar2 != 1) {
      param_1[1] = param_2[1];
      param_1[2] = lVar2;
      func_0x000107c6142c();
      param_1[3] = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      goto LAB_100faab84;
    }
    FUN_100faaad4(param_1 + 1);
  }
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 0x19) = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x11) = uVar1;
LAB_100faab84:
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 100faaba8; end: 100faac73;  */

int FUN_100faaba8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100faac74; end: 100faae03;  */

/* WARNING: Removing unreachable block (ram,0x000100faacd8) */

void FUN_100faac74(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c50098(uVar2,param_2,*(undefined8 *)(unaff_x22 + 0x30),0,
                      *(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x0001000285a8(0x112d51120,&UNK_10d917bc8);
  func_0x0001048da110(unaff_x22 + 0x18);
  func_0x000107c615e8(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  func_0x000107c506cc();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100faae04);
    (*pcVar1)();
  }
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  lVar4 = lVar3;
  func_0x000100759c94(lVar3,0);
  func_0x000107c61170(lVar3);
  uVar2 = 0x112d51138;
  func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_100faaf50,0,uVar2);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  func_0x000107c61574(lVar4);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100faae04;
                    /* WARNING: Could not recover jumptable at 0x000100faadfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x100fab34c)();
  return;
}



/* Entry: 100faae04; end: 100faae57;  */

void FUN_100faae04(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(undefined1 *)(lVar1 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faae58,0,0);
  return;
}



/* Entry: 100faae58; end: 100faaf0f;  */

void FUN_100faae58(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100faaee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100faaf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 100faaf10; end: 100faaf4f;  */

void FUN_100faaf10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd469f0;
  func_0x000107c61520(&UNK_10dd469f0,&UNK_1107b5fe0);
  puRam0000000112d51128 = puVar1;
  return;
}



/* Entry: 100faaf50; end: 100faafdb;  */

void FUN_100faaf50(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x21;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x112d51140;
  func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
  func_0x0001048da110(param_1);
  if (unaff_x21 != 0) {
    FUN_100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar1,0,0);
    *puVar1 = uStack_38;
  }
  return;
}



/* Entry: 100faafdc; end: 100faaff3;  */

void FUN_100faafdc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faaff4,0,0);
  return;
}



/* Entry: 100faaff4; end: 100fab0bb;  */

void FUN_100faaff4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab0bc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371f20;
  func_0x000107c613fc(&UNK_110371f20,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabcf4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab0bc; end: 100fab0fb;  */

void FUN_100fab0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabcd0,0,0);
  return;
}



/* Entry: 100fab0fc; end: 100fab113;  */

void FUN_100fab0fc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab114,0,0);
  return;
}



/* Entry: 100fab114; end: 100fab1db;  */

void FUN_100fab114(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab1dc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371ef8;
  func_0x000107c613fc(&UNK_110371ef8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_100fabb9c,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab1dc; end: 100fab21b;  */

void FUN_100fab1dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabccc,0,0);
  return;
}



/* Entry: 100fab21c; end: 100fab233;  */

void FUN_100fab21c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab234,0,0);
  return;
}



/* Entry: 100fab234; end: 100fab2fb;  */

void FUN_100fab234(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab2fc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371ea8;
  func_0x000107c613fc(&UNK_110371ea8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabb40,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab2fc; end: 100fab33b;  */

void FUN_100fab2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab33c,0,0);
  return;
}



/* Entry: 100fab33c; end: 100fab363;  */

void FUN_100fab33c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100fab348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 100fab364; end: 100fab42b;  */

void FUN_100fab364(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab42c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371e80;
  func_0x000107c613fc(&UNK_110371e80,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabcf0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab42c; end: 100fab46b;  */

void FUN_100fab42c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabcd4,0,0);
  return;
}



/* Entry: 100fab46c; end: 100fab483;  */

void FUN_100fab46c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab484,0,0);
  return;
}



/* Entry: 100fab484; end: 100fab54b;  */

void FUN_100fab484(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab54c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371ed0;
  func_0x000107c613fc(&UNK_110371ed0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabcec,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab54c; end: 100fab58b;  */

void FUN_100fab54c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabcd8,0,0);
  return;
}



/* Entry: 100fab58c; end: 100fab5a3;  */

void FUN_100fab58c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab5a4,0,0);
  return;
}



/* Entry: 100fab5a4; end: 100fab66b;  */

void FUN_100fab5a4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab66c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371fe8;
  func_0x000107c613fc(&UNK_110371fe8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabcfc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab66c; end: 100fab6ab;  */

void FUN_100fab66c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabcdc,0,0);
  return;
}



/* Entry: 100fab6ac; end: 100fab6c3;  */

void FUN_100fab6ac(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab6c4,0,0);
  return;
}



/* Entry: 100fab6c4; end: 100fab78b;  */

void FUN_100fab6c4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab78c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371f98;
  func_0x000107c613fc(&UNK_110371f98,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabc98,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab78c; end: 100fab7cb;  */

void FUN_100fab78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabce0,0,0);
  return;
}



/* Entry: 100fab7cc; end: 100fab7e3;  */

void FUN_100fab7cc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab7e4,0,0);
  return;
}



/* Entry: 100fab7e4; end: 100fab8ab;  */

void FUN_100fab7e4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab8ac;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371fc0;
  func_0x000107c613fc(&UNK_110371fc0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabcf8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab8ac; end: 100fab8eb;  */

void FUN_100fab8ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabce4,0,0);
  return;
}



/* Entry: 100fab8ec; end: 100fab903;  */

void FUN_100fab8ec(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fab904,0,0);
  return;
}



/* Entry: 100fab904; end: 100fab9cb;  */

void FUN_100fab904(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100fab94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100fab9cc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110371f48;
  func_0x000107c613fc(&UNK_110371f48,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100fabba8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100fab9cc; end: 100faba0b;  */

void FUN_100fab9cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fabce8,0,0);
  return;
}



/* Entry: 100faba0c; end: 100faba23;  */

void FUN_100faba0c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100faba24,0,0);
  return;
}



/* Entry: 100faba24; end: 100fabaef;  */

void FUN_100faba24(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x68);
  if (0xfe < *(ushort *)(unaff_x22 + 0x78) >> 8) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_100fabaf0;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_110371f70;
    func_0x000107c613fc(&UNK_110371f70,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x00010075a04c(0,1,FUN_100fabc7c,puVar2);
    func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fabaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 100fabaf0; end: 100fabb2f;  */

void FUN_100fabaf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fabb30,0,0);
  return;
}



/* Entry: 100fabb30; end: 100fabb4b;  */

void FUN_100fabb30(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100fabb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined2 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 100fabb4c; end: 100fabb9b;  */

void FUN_100fabb4c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000100fabcb8(uVar4,uVar1,param_2);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100fabb9c; end: 100fabbb3;  */

void FUN_100fabb9c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000100fabcb8(uVar4,uVar1,PTR__swift_unknownObjectRetain_11034f540);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100fabbb4; end: 100fabc03;  */

void FUN_100fabbb4(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100fabc04; end: 100fabc17;  */

void FUN_100fabc04(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  return;
}



/* Entry: 100fabc18; end: 100fabc7b;  */

void FUN_100fabc18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)((long)param_1 + 0x11);
  uVar4 = *(undefined1 *)(param_1 + 2);
  func_0x000100fabc84(uVar1,uVar2,uVar4,uVar3);
  puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  *(undefined1 *)(puVar5 + 2) = uVar4;
  *(undefined1 *)((long)puVar5 + 0x11) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 100fabc7c; end: 100fabcff;  */

void FUN_100fabc7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)((long)param_1 + 0x11);
  uVar4 = *(undefined1 *)(param_1 + 2);
  func_0x000100fabc84(uVar1,uVar2,uVar4,uVar3);
  puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x40) + 0x28);
  *puVar6 = uVar1;
  puVar6[1] = uVar2;
  *(undefined1 *)(puVar6 + 2) = uVar4;
  *(undefined1 *)((long)puVar6 + 0x11) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar5);
  return;
}



/* Entry: 100fabd00; end: 100fabe9f;  */

undefined8 FUN_100fabd00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c602fc(0x20);
  uVar1 = 0xe000000000000000;
  func_0x000107c6142c(0xe000000000000000);
  func_0x00010011df08();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c5fb78(uVar2,param_2);
  func_0x000107c6142c(param_2);
  uVar2 = 0xd00000000000001e;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1d800);
  func_0x000107c6142c(0x800000010ef1d800);
  func_0x000107c46814(unaff_x20);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 100fabea0; end: 100fabebf;  */

void FUN_100fabea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fabec0,0,0);
  return;
}



/* Entry: 100fabec0; end: 100fabfbf;  */

void FUN_100fabec0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d51148,&UNK_10d917c28);
  puVar2 = &UNK_110372010;
  func_0x000107c613fc(&UNK_110372010,0x38,7);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  *(undefined8 *)(puVar2 + 0x30) = uVar1;
  func_0x000107c615f0(uVar3);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  uVar4 = 0;
  func_0x0001048897a0(0,1,0,FUN_100fac1c4,puVar2);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  func_0x000107c61574(puVar2);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fabfc0;
                    /* WARNING: Could not recover jumptable at 0x000100fabfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab21c();
  return;
}



/* Entry: 100fabfc0; end: 100fac013;  */

void FUN_100fabfc0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fac014,0,0);
  return;
}



/* Entry: 100fac014; end: 100fac0bf;  */

void FUN_100fac014(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fac098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100fac0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 100fac0c0; end: 100fac1c3;  */

void FUN_100fac0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  puVar1 = &UNK_110372038;
  func_0x000107c613fc(&UNK_110372038,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  pcStack_60 = FUN_100fac730;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100fac344;
  puStack_68 = &UNK_110372050;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c507d4(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100fac1c4; end: 100fac1d3;  */

void FUN_100fac1c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar5 = &puStack_80;
  puVar4 = &UNK_110372038;
  func_0x000107c613fc(&UNK_110372038,0x28,7,uVar3,*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  pcStack_60 = FUN_100fac730;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100fac344;
  puStack_68 = &UNK_110372050;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c507d4(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 100fac1d4; end: 100fac343;  */

void FUN_100fac1d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  puVar1 = param_1;
  func_0x000107c4403c();
  func_0x000107c61180();
  puVar2 = param_1;
  func_0x000107c44314();
  if ((puVar1 == (undefined8 *)0x0) && (puVar2 == (undefined8 *)0x0)) {
    func_0x000107c4412c();
    func_0x000107c61180();
    if (param_1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100fac8ac();
    }
    else {
      uVar3 = 0;
      FUN_100fac9a0(0);
      uVar4 = 0x112d51160;
      func_0x0001000285a8(0x112d51160,&UNK_10da11350);
      uVar5 = uVar4;
      func_0x000100fac9e4();
      puVar1 = param_1;
      func_0x000107c5f9e8(param_1,uVar3,uVar4,uVar5);
      func_0x000107c61170(param_1);
    }
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000100b60be8(&puStack_50);
    func_0x000107c61430(puVar1,2);
  }
  else {
    puVar6 = puVar2;
    FUN_100fac758();
    puVar7 = (undefined8 *)&UNK_1103721a0;
    func_0x000107c613f8(&UNK_1103721a0,puVar6,0,0);
    *puVar6 = param_3;
    puVar6[1] = param_4;
    puVar6[2] = puVar1;
    puVar6[3] = puVar2;
    *(undefined1 *)(puVar6 + 4) = 3;
    uStack_48 = 1;
    puStack_50 = puVar7;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(puVar1);
    func_0x000100b60be8(&puStack_50);
    func_0x000107c61170(puVar1);
    FUN_100fac798(puStack_50,uStack_48);
  }
  return;
}



/* Entry: 100fac344; end: 100fac38b;  */

void FUN_100fac344(long param_1,undefined8 param_2)

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



/* Entry: 100fac38c; end: 100fac3bb;  */

undefined1  [16] FUN_100fac38c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100fac9a0(0);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 100fac3bc; end: 100fac43b;  */

undefined1  [16] FUN_100fac3bc(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_100fac650;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_100fac650:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 100fac43c; end: 100fac4bb;  */

undefined1  [16] FUN_100fac43c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [56];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0x0;
    func_0x000107c60694();
  }
  else {
    func_0x000107c60694(1);
    puVar2 = auStack_78;
    func_0x000107c5fb58(puVar2,param_1,param_2);
  }
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    lVar8 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar8 + uVar7 * 0x10);
      uVar4 = puVar1[1];
      if (uVar4 == 0) {
        if (param_2 == 0) goto LAB_100fac70c;
      }
      else if ((param_2 != 0) &&
              ((uVar3 = *puVar1, uVar3 == param_1 && uVar4 == param_2 ||
               (func_0x000107c605b8(uVar3,uVar4,param_1,param_2,0), (uVar3 & 1) != 0)))) {
LAB_100fac70c:
        uVar5 = 1;
        goto LAB_100fac718;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_100fac718:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 100fac4bc; end: 100fac66f;  */

undefined1  [16] FUN_100fac4bc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_100fac9a0(0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100fac670; end: 100fac72f;  */

undefined1  [16] FUN_100fac670(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar6 + param_3 * 0x10);
      uVar3 = puVar1[1];
      if (uVar3 == 0) {
        if (param_2 == 0) goto LAB_100fac70c;
      }
      else if ((param_2 != 0) &&
              ((uVar2 = *puVar1, uVar2 == param_1 && uVar3 == param_2 ||
               (func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0), (uVar2 & 1) != 0)))) {
LAB_100fac70c:
        uVar4 = 1;
        goto LAB_100fac718;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_100fac718:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 100fac730; end: 100fac757;  */

void FUN_100fac730(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = param_1;
  func_0x000107c4403c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  puVar2 = param_1;
  func_0x000107c44314();
  if ((puVar1 == (undefined8 *)0x0) && (puVar2 == (undefined8 *)0x0)) {
    func_0x000107c4412c();
    func_0x000107c61180();
    if (param_1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100fac8ac();
    }
    else {
      uVar3 = 0;
      FUN_100fac9a0(0);
      uVar4 = 0x112d51160;
      func_0x0001000285a8(0x112d51160,&UNK_10da11350);
      uVar7 = uVar4;
      func_0x000100fac9e4();
      puVar1 = param_1;
      func_0x000107c5f9e8(param_1,uVar3,uVar4,uVar7);
      func_0x000107c61170(param_1);
    }
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000100b60be8(&puStack_50);
    func_0x000107c61430(puVar1,2);
  }
  else {
    puVar5 = puVar2;
    FUN_100fac758();
    puVar6 = (undefined8 *)&UNK_1103721a0;
    func_0x000107c613f8(&UNK_1103721a0,puVar5,0,0);
    *puVar5 = uVar4;
    puVar5[1] = uVar7;
    puVar5[2] = puVar1;
    puVar5[3] = puVar2;
    *(undefined1 *)(puVar5 + 4) = 3;
    uStack_48 = 1;
    puStack_50 = puVar6;
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(puVar1);
    func_0x000100b60be8(&puStack_50);
    func_0x000107c61170(puVar1);
    FUN_100fac798(puStack_50,uStack_48);
  }
  return;
}



/* Entry: 100fac758; end: 100fac797;  */

void FUN_100fac758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d917e64;
  func_0x000107c61520(&UNK_10d917e64,&UNK_1103721a0);
  puRam0000000112d51150 = puVar1;
  return;
}



/* Entry: 100fac798; end: 100fac7ab;  */

void FUN_100fac798(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100fac7ac; end: 100fac99f;  */

undefined * FUN_100fac7ac(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d50c90,&UNK_10d917638);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fac8a8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fac8ac);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100fac9a0; end: 100faca27;  */

void FUN_100fac9a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51158 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bcf20;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d51158 = puVar1;
  return;
}



/* Entry: 100faca28; end: 100facb1b;  */

undefined * FUN_100faca28(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112d511c0);
    puVar3 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar9[-1];
      uVar1 = *puVar9;
      func_0x000107c61174();
      func_0x000107c615f0(uVar1);
      uVar5 = uVar4;
      FUN_100fac3bc();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100facb18);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100facb1c);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 100facb1c; end: 100facc37;  */

undefined1  [16] FUN_100facb1c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  uVar1 = (uint)(param_1 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    auStack_58[0] = param_1;
    if (uVar5 != 0) {
      auStack_58[0] = param_1 & 0x3fffffffffffffff;
    }
LAB_100facb58:
    func_0x000100fad324();
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar4 = 0x112d51208;
    func_0x0001000285a8(0x112d51208,&UNK_10d917ec8);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar3,uVar4,0xe);
    if ((uVar2 & 1) == 0) goto LAB_100facbf8;
    if (lStack_68 != 0) {
      FUN_100fadab4(&uStack_80,auStack_58);
      func_0x0001000a8868(auStack_58,uStack_40);
      uVar3 = uStack_40;
      uVar4 = uStack_38;
      func_0x000107c5ec78(uStack_40,uStack_38);
      func_0x0001000834e4(auStack_58);
      goto LAB_100facc24;
    }
  }
  else {
    if (uVar5 == 2) {
      auStack_58[0] = param_1 & 0x3fffffffffffffff;
      goto LAB_100facb58;
    }
LAB_100facbf8:
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  FUN_100fada74(&uStack_80,0x112d51200,&UNK_10d917ec0);
  uVar3 = 0;
  uVar4 = 0;
LAB_100facc24:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 100facc38; end: 100facc63;  */

undefined1  [16] FUN_100facc38(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong *unaff_x20;
  undefined1 auVar7 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *unaff_x20;
  uVar2 = 0;
  uVar1 = (uint)(uVar4 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    auStack_58[0] = uVar4;
    if (uVar6 != 0) {
      auStack_58[0] = uVar4 & 0x3fffffffffffffff;
    }
LAB_100facb58:
    func_0x000100fad324();
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar5 = 0x112d51208;
    func_0x0001000285a8(0x112d51208,&UNK_10d917ec8);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar3,uVar5,0xe);
    if ((uVar2 & 1) == 0) goto LAB_100facbf8;
    if (lStack_68 != 0) {
      FUN_100fadab4(&uStack_80,auStack_58);
      func_0x0001000a8868(auStack_58,uStack_40);
      uVar3 = uStack_40;
      uVar5 = uStack_38;
      func_0x000107c5ec78(uStack_40,uStack_38);
      func_0x0001000834e4(auStack_58);
      goto LAB_100facc24;
    }
  }
  else {
    if (uVar6 == 2) {
      auStack_58[0] = uVar4 & 0x3fffffffffffffff;
      goto LAB_100facb58;
    }
LAB_100facbf8:
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  FUN_100fada74(&uStack_80,0x112d51200,&UNK_10d917ec0);
  uVar3 = 0;
  uVar5 = 0;
LAB_100facc24:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 100facc64; end: 100facddb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100facc64(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong auStack_68 [7];
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      auStack_68[0] = param_1;
      func_0x000107c614b0();
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0x112d511d0;
      func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
      puVar4 = auStack_68 + 1;
      func_0x000107c6147c(puVar4,auStack_68,uVar2,uVar3,0xe);
      if (((ulong)puVar4 & 1) == 0) {
        auStack_68[5] = 0;
        auStack_68[2] = 0;
        auStack_68[1] = 0;
        auStack_68[4] = 0;
        auStack_68[3] = 0;
        FUN_100fada74(auStack_68 + 1,0x112d511d8,&UNK_10d917cb0);
        return 1;
      }
      goto LAB_100facd60;
    }
  }
  else if (uVar6 != 2) {
    return 0;
  }
  auStack_68[0] = param_1 & 0x3fffffffffffffff;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112d511d0;
  func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
  puVar4 = auStack_68 + 1;
  func_0x000107c6147c(puVar4,auStack_68,uVar2,uVar3,0xe);
  if (((ulong)puVar4 & 1) == 0) {
    auStack_68[5] = 0;
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
    FUN_100fada74(auStack_68 + 1,0x112d511d8,&UNK_10d917cb0);
    return 2;
  }
LAB_100facd60:
  func_0x0001000a8868(auStack_68 + 1,auStack_68[4]);
  uVar5 = auStack_68[4];
  (**(code **)(auStack_68[5] + 0x10))(auStack_68[4],auStack_68[5]);
  func_0x0001000834e4(auStack_68 + 1);
  return uVar5;
}



/* Entry: 100facddc; end: 100facde3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100facddc(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *unaff_x20;
  ulong auStack_68 [7];
  
  auStack_68[0] = *unaff_x20;
  uVar1 = (uint)(auStack_68[0] >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      func_0x000107c614b0();
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar3 = 0x112d511d0;
      func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
      puVar4 = auStack_68 + 1;
      func_0x000107c6147c(puVar4,auStack_68,uVar2,uVar3,0xe);
      if (((ulong)puVar4 & 1) == 0) {
        auStack_68[5] = 0;
        auStack_68[2] = 0;
        auStack_68[1] = 0;
        auStack_68[4] = 0;
        auStack_68[3] = 0;
        FUN_100fada74(auStack_68 + 1,0x112d511d8,&UNK_10d917cb0);
        return 1;
      }
      goto LAB_100facd60;
    }
  }
  else if (uVar6 != 2) {
    return 0;
  }
  auStack_68[0] = auStack_68[0] & 0x3fffffffffffffff;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar3 = 0x112d511d0;
  func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
  puVar4 = auStack_68 + 1;
  func_0x000107c6147c(puVar4,auStack_68,uVar2,uVar3,0xe);
  if (((ulong)puVar4 & 1) == 0) {
    auStack_68[5] = 0;
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
    FUN_100fada74(auStack_68 + 1,0x112d511d8,&UNK_10d917cb0);
    return 2;
  }
LAB_100facd60:
  func_0x0001000a8868(auStack_68 + 1,auStack_68[4]);
  uVar5 = auStack_68[4];
  (**(code **)(auStack_68[5] + 0x10))(auStack_68[4],auStack_68[5]);
  func_0x0001000834e4(auStack_68 + 1);
  return uVar5;
}



/* Entry: 100facde4; end: 100face23;  */

void FUN_100facde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d511c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d917c6c;
  func_0x000107c61520(&UNK_10d917c6c,&UNK_110372230);
  puRam0000000112d511c8 = puVar1;
  return;
}



/* Entry: 100face24; end: 100face7f;  */

void FUN_100face24(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 100face80; end: 100facedb;  */

undefined8 * FUN_100face80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100facedc; end: 100facf17;  */

undefined8 * FUN_100facedc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100facf18; end: 100facfbb;  */

int FUN_100facf18(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100facfbc; end: 100fad08f;  */

long FUN_100facfbc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100fad090; end: 100fad0a3;  */

/* WARNING: Possible PIC construction at 0x000100fad130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fad104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fad134) */
/* WARNING: Removing unreachable block (ram,0x000100fad14c) */
/* WARNING: Removing unreachable block (ram,0x000100fad13c) */
/* WARNING: Removing unreachable block (ram,0x000100fad108) */

void FUN_100fad090(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
    if ((bVar2 != 1) && (bVar2 != 2)) {
      return;
    }
  }
  else {
    if (bVar2 == 3) {
      func_0x000107c61170(uVar3,uVar1,param_1[2],param_1[3]);
      uVar3 = uVar1;
      goto code_r0x000107c61170;
    }
    if ((bVar2 != 4) && (bVar2 != 5)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 100fad0a4; end: 100fad157;  */

/* WARNING: Possible PIC construction at 0x000100fad130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fad104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fad134) */
/* WARNING: Removing unreachable block (ram,0x000100fad14c) */
/* WARNING: Removing unreachable block (ram,0x000100fad13c) */
/* WARNING: Removing unreachable block (ram,0x000100fad108) */

void FUN_100fad0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 3) {
    if (param_5 == 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    if ((param_5 != 1) && (param_5 != 2)) {
      return;
    }
  }
  else {
    if (param_5 == 3) {
      func_0x000107c61170();
      param_1 = param_2;
      goto code_r0x000107c61170;
    }
    if ((param_5 != 4) && (param_5 != 5)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 100fad158; end: 100fad227;  */

undefined8 * FUN_100fad158(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000100facfe8(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 100fad228; end: 100fad26f;  */

undefined8 * FUN_100fad228(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_100fad0a4(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 100fad270; end: 100fad38b;  */

int FUN_100fad270(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100fad38c; end: 100fad3f3;  */

undefined8 * FUN_100fad38c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000100fad324(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000100fad35c(uVar1);
  return param_1;
}



/* Entry: 100fad3f4; end: 100fad50b;  */

int FUN_100fad3f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100fad50c; end: 100fad88b;  */

undefined1  [16] FUN_100fad50c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *unaff_x20;
  bVar3 = *(byte *)(unaff_x20 + 4);
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      uStack_58 = 0x800000010ef1d860;
      uStack_60 = 0xd000000000000021;
      goto LAB_100fad870;
    }
    if (bVar3 == 1) {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      func_0x000107c5fb78(0xd000000000000030,0x800000010ef1d890);
      func_0x000107c614cc(uVar6,auStack_68,auStack_80);
      uVar6 = uStack_70;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_58);
      uStack_60 = 0xd000000000000020;
      uStack_58 = 0x800000010ef1d970;
      func_0x000107c614cc(uVar6,auStack_d0,auStack_e8);
      uStack_78 = uStack_e0;
      uVar6 = uStack_d8;
    }
LAB_100fad848:
    func_0x000107c60640(uStack_78,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
  }
  else {
    if (bVar3 != 3) {
      if (bVar3 == 4) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        func_0x000107c602fc(0x1f);
        func_0x000107c6142c(uStack_58);
        uStack_60 = 0xd00000000000001c;
        uStack_58 = 0x800000010ef1d950;
        func_0x000107c614cc(uVar6,auStack_b0,auStack_c8);
        uStack_78 = uStack_c0;
        uVar6 = uStack_b8;
      }
      else {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        func_0x000107c602fc(0x26);
        func_0x000107c6142c(uStack_58);
        uStack_60 = 0xd000000000000023;
        uStack_58 = 0x800000010ef1d920;
        func_0x000107c614cc(uVar6,auStack_90,auStack_a8);
        uStack_78 = uStack_a0;
        uVar6 = uStack_98;
      }
      goto LAB_100fad848;
    }
    uVar1 = unaff_x20[2];
    uVar2 = unaff_x20[3];
    uVar7 = unaff_x20[1];
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x5d);
    uVar4 = 0x800000010ef1d8d0;
    func_0x000107c5fb78(0xd00000000000002f,0x800000010ef1d8d0);
    func_0x000107c417f0(uVar6);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c5fb78(uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    uVar5 = 0xe700000000000000;
    func_0x000107c5fb78(0x203a79656b202c,0xe700000000000000);
    func_0x000107c417f0(uVar7);
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c5fb78(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0xd000000000000014,0x800000010ef1d900);
    uStack_88 = uVar1;
    func_0x000107c614b0(uVar1);
    uVar6 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&uStack_88,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    func_0x000107c5fb78(0x737574617473202c,0xea0000000000203a);
    uVar6 = 0;
    uStack_88 = uVar2;
    func_0x000100f99cd0(0);
    func_0x000107c603d0(&uStack_88,&uStack_60,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  func_0x000107c5fb78(0x2e,0xe100000000000000);
LAB_100fad870:
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = uStack_60;
  return auVar8;
}



/* Entry: 100fad88c; end: 100fad8b7;  */

undefined1  [16] FUN_100fad88c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *unaff_x20;
  bVar3 = *(byte *)(unaff_x20 + 4);
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      uStack_58 = 0x800000010ef1d860;
      uStack_60 = 0xd000000000000021;
      goto LAB_100fad870;
    }
    if (bVar3 == 1) {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      func_0x000107c5fb78(0xd000000000000030,0x800000010ef1d890);
      func_0x000107c614cc(uVar6,auStack_68,auStack_80);
      uVar6 = uStack_70;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_58);
      uStack_60 = 0xd000000000000020;
      uStack_58 = 0x800000010ef1d970;
      func_0x000107c614cc(uVar6,auStack_d0,auStack_e8);
      uStack_78 = uStack_e0;
      uVar6 = uStack_d8;
    }
LAB_100fad848:
    func_0x000107c60640(uStack_78,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
  }
  else {
    if (bVar3 != 3) {
      if (bVar3 == 4) {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        func_0x000107c602fc(0x1f);
        func_0x000107c6142c(uStack_58);
        uStack_60 = 0xd00000000000001c;
        uStack_58 = 0x800000010ef1d950;
        func_0x000107c614cc(uVar6,auStack_b0,auStack_c8);
        uStack_78 = uStack_c0;
        uVar6 = uStack_b8;
      }
      else {
        uStack_60 = 0;
        uStack_58 = 0xe000000000000000;
        func_0x000107c602fc(0x26);
        func_0x000107c6142c(uStack_58);
        uStack_60 = 0xd000000000000023;
        uStack_58 = 0x800000010ef1d920;
        func_0x000107c614cc(uVar6,auStack_90,auStack_a8);
        uStack_78 = uStack_a0;
        uVar6 = uStack_98;
      }
      goto LAB_100fad848;
    }
    uVar1 = unaff_x20[2];
    uVar2 = unaff_x20[3];
    uVar7 = unaff_x20[1];
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x5d);
    uVar4 = 0x800000010ef1d8d0;
    func_0x000107c5fb78(0xd00000000000002f,0x800000010ef1d8d0);
    func_0x000107c417f0(uVar6);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c5fb78(uVar5,uVar4);
    func_0x000107c6142c(uVar4);
    uVar5 = 0xe700000000000000;
    func_0x000107c5fb78(0x203a79656b202c,0xe700000000000000);
    func_0x000107c417f0(uVar7);
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c5fb78(uVar6,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0xd000000000000014,0x800000010ef1d900);
    uStack_88 = uVar1;
    func_0x000107c614b0(uVar1);
    uVar6 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&uStack_88,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    func_0x000107c5fb78(0x737574617473202c,0xea0000000000203a);
    uVar6 = 0;
    uStack_88 = uVar2;
    func_0x000100f99cd0(0);
    func_0x000107c603d0(&uStack_88,&uStack_60,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  func_0x000107c5fb78(0x2e,0xe100000000000000);
LAB_100fad870:
  auVar8._8_8_ = uStack_58;
  auVar8._0_8_ = uStack_60;
  return auVar8;
}



/* Entry: 100fad8b8; end: 100fad8db;  */

void FUN_100fad8b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100fac758();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100fad8dc; end: 100fad8e3;  */

void FUN_100fad8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d917e64;
  func_0x000107c61520(&UNK_10d917e64,&UNK_1103721a0);
  puRam0000000112d51150 = puVar1;
  return;
}


