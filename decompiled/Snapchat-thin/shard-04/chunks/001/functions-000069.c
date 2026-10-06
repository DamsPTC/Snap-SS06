/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030a5cb8; end: 1030a5cdf; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter dismissAttachment] */

void FUN_1030a5cb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030a57fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030a5ce0; end: 1030a5cf7; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030a5ce0(long param_1)

{
  return *(int *)(param_1 + _DAT_112f393e8) == 1;
}



/* Entry: 1030a5cf8; end: 1030a5d33; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter canHandleAttachment:] */

bool FUN_1030a5cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 7;
}



/* Entry: 1030a5d34; end: 1030a611f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a5d34(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  char cStack_51;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f39350);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000d224c(&puStack_a8);
    puVar8 = puStack_a8;
    lVar12 = *(long *)(unaff_x20 + _DAT_112f39340);
    if (*(int *)(*(long *)(lVar12 + _DAT_113068240) + _DAT_113067ed0) == 0x16) {
      puVar2 = puStack_a8;
      func_0x000107c614f0(puStack_a8);
      (**(code **)(lStack_a0 + 8))
                (&cStack_51,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,puVar2);
      func_0x000107c615e8(puVar8);
      if (cStack_51 == '\x01') {
        lVar3 = unaff_x20 + _DAT_112f393d8;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x0001041bb118(0);
          func_0x0001041b9710(lVar12);
          func_0x000107c3d258(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar12);
        }
      }
    }
    else {
      func_0x000107c615e8(puStack_a8);
    }
    lVar4 = 0;
    FUN_1030ad190();
    lVar3 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112f39580) = 0;
    lVar12 = lVar3 + _DAT_112f39588;
    *(undefined8 *)(lVar12 + 8) = 0;
    func_0x000107c61614(lVar12,0);
    *(long *)(lVar3 + _DAT_112f39578) = lVar1;
    puVar8 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_68 = lVar3;
    lStack_60 = lVar4;
    func_0x000107c615f0(lVar1);
    plVar5 = &lStack_68;
    func_0x000107c61154(plVar5,puVar8,0,0);
    func_0x000107c5677c();
    *(undefined ***)((long)plVar5 + _DAT_112f39588 + 8) = &PTR_DAT_110607da0;
    func_0x000107c61604();
    plVar6 = plVar5;
    FUN_1030a6120(plVar5);
    plVar7 = plVar6;
    FUN_1030a6728();
    puVar8 = PTR_PTR_1126acb88;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(plVar7);
    uVar9 = *(undefined8 *)((long)plVar5 + _DAT_112f39580);
    *(undefined **)((long)plVar5 + _DAT_112f39580) = puVar8;
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f393e0);
    *(long **)(unaff_x20 + _DAT_112f393e0) = plVar5;
    func_0x000107c61174(plVar5);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f39380);
    lVar4 = 0;
    FUN_1030ac694();
    lVar3 = lVar4;
    func_0x000107c610f8();
    lVar12 = lVar3 + _DAT_112f39480;
    *(undefined8 *)(lVar12 + 8) = 0;
    func_0x000107c61614(lVar12,0);
    *(undefined8 *)(lVar3 + _DAT_112f39478) = uVar9;
    *(undefined ***)(lVar12 + 8) = &PTR_DAT_110607db8;
    func_0x000107c61604();
    puVar8 = PTR_s_init_1125d9248;
    lStack_78 = lVar3;
    lStack_70 = lVar4;
    func_0x000107c61174(uVar9);
    plVar7 = &lStack_78;
    func_0x000107c61154(plVar7,puVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f393f0);
    *(long **)(unaff_x20 + _DAT_112f393f0) = plVar7;
    func_0x000107c61170(uVar9);
    *(undefined8 *)(unaff_x20 + _DAT_112f393e8) = 1;
    uVar13 = *(ulong *)(unaff_x20 + _DAT_112f39348);
    uVar10 = uVar13;
    func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_attachUI_completion__1125a0c10);
    if ((uVar10 & 1) == 0) {
      func_0x000107c61170(plVar5);
    }
    else {
      puVar8 = &UNK_110607df0;
      func_0x000107c613fc(&UNK_110607df0,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      pcStack_88 = FUN_1030ab050;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000b0c7c;
      puStack_90 = &UNK_110607e08;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar2 = puStack_80;
      func_0x000107c61580(puVar8,2);
      func_0x000107c61574(puVar2);
      func_0x000107c3e2c4(uVar13);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(plVar5);
      func_0x000107c61578(puVar8,2);
    }
    func_0x000107c61170(plVar6);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1030a6120; end: 1030a6727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a6120(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar4 = &UNK_110607df0;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_110607df0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_110607df0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x000107c613fc(&UNK_110607df0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = PTR_PTR_1126acbc8;
  func_0x000107c610f8(PTR_PTR_1126acbc8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x1030ab074;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_110607e30;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar2;
  func_0x000107c60bc4(ppuVar6);
  pcStack_b8 = FUN_1030a8364;
  uStack_b0 = 0;
  puStack_d8 = puVar1;
  lStack_d0 = 0x42000000;
  pcStack_c8 = FUN_1030aaa24;
  puStack_c0 = &UNK_110607e58;
  ppuVar7 = &puStack_d8;
  func_0x000107c60bc4(ppuVar7);
  uStack_e8 = 0x1030ab07c;
  puStack_108 = puVar1;
  uStack_100 = 0x42000000;
  pcStack_f8 = FUN_1030aaa84;
  puStack_f0 = &UNK_110607e80;
  ppuVar8 = &puStack_108;
  puStack_e0 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  uStack_118 = 0x1030ab084;
  puStack_138 = puVar1;
  uStack_130 = 0x42000000;
  puStack_128 = &UNK_100c75f50;
  puStack_120 = &UNK_110607ea8;
  ppuVar9 = &puStack_138;
  puStack_110 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be8(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_110);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(uStack_b0);
  puVar10 = puStack_80;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar10);
  func_0x0001000d224c(&puStack_d8);
  lVar12 = lStack_d0;
  puVar4 = puStack_d8;
  puVar10 = puStack_d8;
  func_0x000107c614f0(puStack_d8);
  puStack_a8 = (undefined *)0xd000000000000031;
  uStack_a0 = 0x800000010f11d450;
  pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff00);
  (**(code **)(lVar12 + 8))
            (&puStack_108,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,puVar10,lVar12);
  func_0x000107c615e8(puVar4);
  if ((char)puStack_108 == '\x01') {
    func_0x000107c56a84(puVar5);
    puVar4 = &UNK_110607df0;
    func_0x000107c613fc(&UNK_110607df0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_88 = 0x1030ab09c;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1030a8f50;
    puStack_90 = &UNK_110607f20;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_80);
    func_0x000107c54eb4(puVar5);
    func_0x000107c60bd0(ppuVar6);
  }
  puVar4 = &UNK_110607df0;
  puVar10 = puVar4;
  func_0x000107c613fc(&UNK_110607df0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  uStack_88 = 0x1030ab08c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1030a9708;
  puStack_90 = &UNK_110607ed0;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c59a60(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c613fc(&UNK_110607df0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_88 = 0x1030ab094;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1030a9834;
  puStack_90 = &UNK_110607ef8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c58ff8(puVar5);
  func_0x000107c60bd0(ppuVar6);
  lVar11 = *(long *)(unaff_x20 + _DAT_112f393a0);
  func_0x000107c41414();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar12 != 0) {
    lVar11 = lVar12;
    func_0x000107c409cc();
    func_0x000107c61180();
    lVar16 = lVar12;
    if (lVar11 != 0) {
      lVar13 = lVar11;
      func_0x000107c508d0();
      func_0x000107c61180();
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f39398);
      func_0x000107c5dbd4(uVar14);
      func_0x000107c61180();
      lVar15 = lVar13;
      func_0x000107c40974(lVar13);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      lVar16 = lVar15;
      func_0x000107c41408(lVar15);
      func_0x000107c61180();
      func_0x000107c53e8c(puVar5);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar13);
      func_0x000107c615e8(lVar15);
    }
    func_0x000107c615e8(lVar16);
  }
  func_0x0001000d224c(&puStack_a8);
  puVar4 = puStack_a8;
  func_0x000107c53548(puVar5);
  func_0x000107c615e8(puVar4);
  lVar11 = *(long *)(unaff_x20 + _DAT_112f39378);
  func_0x000107c4e6c4();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar12 != 0) {
    lVar11 = lVar12;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    uVar14 = 0;
    if (lVar11 == 0) goto LAB_1030a66d8;
    uVar14 = *(undefined8 *)(lVar11 + _DAT_1130937d8);
    lVar12 = ((undefined8 *)(lVar11 + _DAT_1130937d8))[1];
    func_0x000107c61434(lVar12);
    func_0x000107c61170(lVar11);
    if (lVar12 != 0) {
      func_0x000107c5fadc(uVar14,lVar12);
      func_0x000107c6142c(lVar12);
      goto LAB_1030a66d8;
    }
  }
  uVar14 = 0;
LAB_1030a66d8:
  func_0x000107c59498(puVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c57370(puVar5);
  return puVar5;
}



/* Entry: 1030a6728; end: 1030a729f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a6728(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_70;
  long lStack_68;
  
  lVar14 = _DAT_113068218;
  lVar15 = *(long *)(unaff_x20 + _DAT_112f39340);
  uVar19 = *(ulong *)(*(long *)(lVar15 + _DAT_113068218) + _DAT_113090278);
  if (uVar19 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar20 = uVar19;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar19);
    func_0x000103094f58(0,uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1030a7284);
      (*pcVar4)();
    }
    uVar22 = 0;
    do {
      puVar13 = puStack_70;
      if ((uVar19 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar19 + uVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar22;
        func_0x0001030b68c0(uVar22,uVar19);
      }
      uVar6 = uVar10;
      FUN_1030a73ac();
      func_0x000107c61170(uVar10);
      uVar10 = *(ulong *)(puVar13 + 0x10);
      puStack_70 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar10) {
        func_0x000103094f58(1 < *(ulong *)(puVar13 + 0x18),uVar10 + 1,1);
      }
      puVar13 = puStack_70;
      uVar22 = uVar22 + 1;
      *(ulong *)(puStack_70 + 0x10) = uVar10 + 1;
      *(ulong *)(puStack_70 + uVar10 * 8 + 0x20) = uVar6;
    } while (uVar20 != uVar22);
    func_0x000107c6142c(uVar19);
  }
  lVar21 = ((undefined8 *)(lVar15 + _DAT_113068220))[1];
  if (lVar21 == 0) {
    uStack_88 = 0;
    lVar16 = -0x2000000000000000;
  }
  else {
    uStack_88 = *(undefined8 *)(lVar15 + _DAT_113068220);
    lVar16 = lVar21;
  }
  lVar23 = ((undefined8 *)(lVar15 + _DAT_113068228))[1];
  if (lVar23 == 0) {
    uStack_90 = 0;
    lVar24 = -0x2000000000000000;
  }
  else {
    uStack_90 = *(undefined8 *)(lVar15 + _DAT_113068228);
    lVar24 = lVar23;
  }
  puVar1 = (undefined8 *)(*(long *)(lVar15 + lVar14) + _DAT_113090270);
  uVar17 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(*(long *)(lVar15 + lVar14) + _DAT_113090280);
  uVar18 = *puVar1;
  uVar2 = puVar1[1];
  puVar7 = PTR_PTR_1126acb90;
  func_0x000107c610f8();
  uVar8 = 0;
  FUN_1030ab104(0,0x112f38c58,&PTR_PTR_1126acb00);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(lVar21);
  func_0x000107c61434(lVar23);
  puVar9 = puVar13;
  func_0x000107c5fc48(puVar13,uVar8);
  func_0x000107c6142c(puVar13);
  func_0x000107c5fadc(uStack_88,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c5fadc(uStack_90,lVar24);
  func_0x000107c6142c(lVar24);
  func_0x000107c5fadc(uVar17,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(uVar18,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c46ff0();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  lVar21 = *(long *)(lVar15 + lVar14);
  lVar16 = *(long *)(lVar21 + _DAT_113090288);
  if (lVar16 == 0) {
    lVar16 = *(long *)(lVar21 + _DAT_113090290);
  }
  else {
    uVar17 = *(undefined8 *)(lVar16 + _DAT_113090328);
    uVar11 = ((undefined8 *)(lVar16 + _DAT_113090328))[1];
    uVar18 = *(undefined8 *)(lVar16 + _DAT_113090330);
    uVar2 = ((undefined8 *)(lVar16 + _DAT_113090330))[1];
    uVar19 = *(ulong *)(lVar16 + _DAT_113090338);
    if (uVar19 >> 0x3e == 0) {
      uVar20 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar20 = uVar19 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar19) {
        uVar20 = uVar19;
      }
      func_0x000107c60480();
    }
    if (uVar20 == 0) {
      func_0x000107c61174(lVar16);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61174(lVar16);
      func_0x000103094f24(0,uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030a72a0);
        (*pcVar4)();
      }
      uVar22 = 0;
      do {
        puVar13 = puStack_70;
        if ((uVar19 & 0xc000000000000001) == 0) {
          uVar10 = *(ulong *)(uVar19 + uVar22 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar22;
          func_0x0001030b6724(uVar22,uVar19);
        }
        uVar8 = *(undefined8 *)(uVar10 + _DAT_1130902f0);
        uVar3 = ((undefined8 *)(uVar10 + _DAT_1130902f0))[1];
        puVar9 = PTR_PTR_1126acaf0;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar8,uVar3);
        func_0x000107c470c8();
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar8);
        uVar10 = *(ulong *)(puVar13 + 0x10);
        puStack_70 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar10) {
          func_0x000103094f24(1 < *(ulong *)(puVar13 + 0x18),uVar10 + 1,1);
        }
        uVar22 = uVar22 + 1;
        *(ulong *)(puStack_70 + 0x10) = uVar10 + 1;
        *(undefined **)(puStack_70 + uVar10 * 8 + 0x20) = puVar9;
        puVar13 = puStack_70;
      } while (uVar20 != uVar22);
    }
    puVar9 = PTR_PTR_1126acba8;
    func_0x000107c610f8(PTR_PTR_1126acba8);
    func_0x000107c5fadc(uVar17,uVar11);
    func_0x000107c5fadc(uVar18,uVar2);
    uVar11 = 0;
    FUN_1030ab104(0,0x112f38c48,&PTR_PTR_1126acaf0);
    puVar12 = puVar13;
    func_0x000107c5fc48(puVar13,uVar11);
    func_0x000107c6142c(puVar13);
    func_0x000107c48d4c(puVar9);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(puVar12);
    func_0x000107c53d04(puVar7);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(puVar9);
    lVar21 = *(long *)(lVar15 + lVar14);
    lVar16 = *(long *)(lVar21 + _DAT_113090290);
  }
  if (lVar16 != 0) {
    func_0x000107c61174();
    lVar21 = ((undefined8 *)(lVar16 + _DAT_113090408))[1];
    if (lVar21 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar16 + _DAT_113090408);
      func_0x000107c61434(lVar21);
      func_0x000107c5fadc(uVar17,lVar21);
      func_0x000107c6142c(lVar21);
    }
    func_0x000107c52bcc(puVar7);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar17);
    lVar21 = *(long *)(lVar15 + lVar14);
  }
  lVar21 = *(long *)(lVar21 + _DAT_113090298);
  if (lVar21 != 0) {
    func_0x000107c61174();
    lVar16 = ((undefined8 *)(lVar21 + _DAT_113090408))[1];
    if (lVar16 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar21 + _DAT_113090408);
      func_0x000107c61434(lVar16);
      func_0x000107c5fadc(uVar17,lVar16);
      func_0x000107c6142c(lVar16);
    }
    func_0x000107c551f0(puVar7);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(uVar17);
  }
  lVar21 = ((undefined8 *)(lVar15 + _DAT_113068230))[1];
  if (lVar21 == 0) {
    uVar17 = 0;
    lVar16 = -0x2000000000000000;
  }
  else {
    uVar17 = *(undefined8 *)(lVar15 + _DAT_113068230);
    lVar16 = lVar21;
  }
  func_0x000103bfb8b0(0);
  func_0x000107c61434(lVar21);
  lVar21 = lVar16;
  func_0x000103bfaab8(uVar17,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c5fadc(uVar17,lVar21);
  func_0x000107c6142c(lVar21);
  func_0x000107c54b38(puVar7);
  func_0x000107c61170(uVar17);
  puVar1 = (undefined8 *)(*(long *)(lVar15 + lVar14) + _DAT_1130902b8);
  lVar21 = puVar1[1];
  if (lVar21 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *puVar1;
    func_0x000107c61434(lVar21);
    func_0x000107c5fadc(uVar17,lVar21);
    func_0x000107c6142c(lVar21);
  }
  func_0x000107c53cf0(puVar7);
  func_0x000107c61170(uVar17);
  lVar21 = *(long *)(*(long *)(lVar15 + lVar14) + _DAT_1130902a0);
  puVar13 = (undefined *)0x0;
  if (lVar21 != 0) {
    func_0x000107c61174();
    puVar9 = PTR___sSiN_11034deb0;
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    uVar17 = *(undefined8 *)(lVar21 + _DAT_113090240);
    uVar18 = ((undefined8 *)(lVar21 + _DAT_113090240))[1];
    puVar13 = PTR_PTR_1126acba0;
    func_0x000107c610f8(PTR_PTR_1126acba0);
    func_0x000107c5fadc(puVar9,puVar12);
    func_0x000107c6142c(puVar12);
    func_0x000107c5fadc(uVar17,uVar18);
    func_0x000107c46290(puVar13);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar17);
  }
  func_0x000107c54594(puVar7);
  func_0x000107c61170(puVar13);
  uVar17 = *(undefined8 *)(*(long *)(lVar15 + lVar14) + _DAT_1130902a8);
  func_0x000107c601c8(uVar17);
  func_0x000107c599e4(puVar7);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(*(long *)(lVar15 + lVar14) + _DAT_1130902b0);
  func_0x000107c601c8(uVar17);
  func_0x000107c52a8c(puVar7);
  func_0x000107c61170(uVar17);
  puVar1 = (undefined8 *)(*(long *)(lVar15 + _DAT_113068240) + _DAT_113067eb0);
  lVar14 = puVar1[1];
  if (lVar14 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *puVar1;
    func_0x000107c5fb1c(uVar17);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar14);
  }
  func_0x000107c522e0(puVar7);
  func_0x000107c61170(uVar17);
  func_0x0001000d224c(&puStack_70);
  puVar13 = puStack_70;
  puVar9 = puStack_70;
  func_0x000107c614f0(puStack_70);
  uVar20 = 0x800000010f11d3e0;
  uVar5 = 0x25;
  func_0x00010403c628(0xd000000000000025,0x800000010f11d3e0,puVar9);
  func_0x000107c615e8(puVar13);
  uVar19 = (ulong)(uVar5 & 1);
  func_0x000107c5fca0(uVar19);
  func_0x000107c55794(puVar7);
  func_0x000107c61170(uVar19);
  uVar19 = (ulong)*(byte *)(lVar15 + _DAT_113068248);
  func_0x000107c5fca0(uVar19);
  func_0x000107c555dc(puVar7);
  func_0x000107c61170(uVar19);
  uVar19 = ((undefined8 *)(lVar15 + _DAT_113068250))[1];
  if (uVar19 >> 0x3c < 0xf) {
    uVar18 = *(undefined8 *)(lVar15 + _DAT_113068250);
    func_0x00010006c00c(uVar18,uVar19);
    uVar17 = uVar18;
    func_0x000107c5ee20(uVar18,uVar19);
    func_0x0001000b44c0(uVar18);
  }
  else {
    uVar17 = 0;
    uVar19 = uVar20;
  }
  uVar11 = uVar17;
  func_0x000107c55b60(puVar7);
  func_0x000107c61170(uVar17);
  FUN_1030a7f60();
  uVar18 = 0;
  if (uVar19 != 0) {
    uVar18 = uVar17;
  }
  uVar20 = 0xe000000000000000;
  if (uVar19 != 0) {
    uVar20 = uVar19;
  }
  uVar17 = 0;
  if (lStack_68 != 0) {
    uVar17 = uVar11;
  }
  lVar14 = -0x2000000000000000;
  if (lStack_68 != 0) {
    lVar14 = lStack_68;
  }
  puVar13 = PTR_PTR_1126acb98;
  func_0x000107c610f8(PTR_PTR_1126acb98);
  func_0x000107c5fadc(uVar18,uVar20);
  func_0x000107c6142c(uVar20);
  func_0x000107c5fadc(uVar17,lVar14);
  func_0x000107c6142c(lVar14);
  func_0x000107c46968(puVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c52a90(puVar7);
  func_0x000107c61170(puVar13);
  uVar19 = (ulong)bRam0000000112f39538;
  func_0x000107c5fca0(uVar19);
  func_0x000107c54b28(puVar7);
  func_0x000107c61170(uVar19);
  uVar18 = uRam0000000112f394f8;
  uVar17 = uRam0000000112f394f0;
  func_0x000107c61434(uRam0000000112f394f8);
  func_0x000107c5fadc(uVar17,uVar18);
  func_0x000107c6142c(uVar18);
  func_0x000107c5675c(puVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c5fdd0(uRam0000000112f394b0);
  func_0x000107c56758(puVar7);
  func_0x000107c61170(uVar17);
  return puVar7;
}



/* Entry: 1030a72a0; end: 1030a7383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a72a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f393d8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001041bb118(0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f39340);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001041b9710();
      func_0x000107c61170(uVar2);
      uVar2 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2b0();
      func_0x000107c3d254(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030a7384; end: 1030a73ab; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter presentAttachment] */

void FUN_1030a7384(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030a5d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030a73ac; end: 1030a7f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a73ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = (undefined *)0x0;
  func_0x000107c5eea4();
  puStack_78 = *(undefined **)(puVar1 + -8);
  puStack_70 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puStack_78 + 0x40));
  lVar16 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = _DAT_1130901a8;
  lStack_80 = lVar16 - extraout_x12;
  lVar15 = *(long *)(param_1 + _DAT_1130901e0);
  func_0x0001030a48b4(*(undefined8 *)(lVar15 + _DAT_1130901a8));
  puVar1 = PTR_PTR_1126acbb0;
  func_0x000107c610f8(PTR_PTR_1126acbb0);
  func_0x000107c49468();
  lVar13 = ((undefined8 *)(lVar15 + _DAT_1130901b0))[1];
  if (lVar13 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar15 + _DAT_1130901b0);
    func_0x000107c61434(lVar13);
    func_0x000107c5fadc(uVar17,lVar13);
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c53cf8(puVar1);
  func_0x000107c61170(uVar17);
  puVar14 = (undefined8 *)(ulong)*(byte *)(param_1 + _DAT_1130901e8);
  puVar2 = PTR_PTR_1126acbb8;
  func_0x000107c610f8(PTR_PTR_1126acbb8);
  func_0x000107c46900();
  if (((undefined8 *)(param_1 + _DAT_1130901f0))[1] == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + _DAT_1130901f0);
    func_0x000107c5fadc(uVar17);
  }
  func_0x000107c559e4(puVar2);
  func_0x000107c61170(uVar17);
  puVar3 = *(undefined8 **)(param_1 + _DAT_113090200);
  puVar11 = *(undefined8 **)(param_1 + _DAT_1130901f8);
  FUN_1030a48c4();
  if (puVar3 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)0x0;
    FUN_1030ab104(0,0x112f38c50,&PTR_PTR_1126acaf8);
    puVar18 = puVar3;
    func_0x000107c5fc48(puVar3);
    func_0x000107c6142c(puVar3);
  }
  puVar19 = puVar18;
  func_0x000107c567ec(puVar2);
  func_0x000107c61170(puVar18);
  FUN_1030a7f60();
  puVar4 = PTR_PTR_1126acb00;
  puVar3 = puVar11;
  func_0x000107c610f8();
  func_0x000107c46908();
  puStack_68 = puVar4;
  switch(*(undefined8 *)(lVar15 + lVar5)) {
  default:
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar14);
    return puStack_68;
  case 2:
    func_0x000107c6142c(puVar14);
    if (puVar11 == (undefined8 *)0x0) goto code_r0x0001030a7954;
    func_0x000107c5fadc(puVar18,puVar11);
code_r0x0001030a78b8:
    func_0x000107c6142c(puVar11);
    puVar4 = puStack_68;
    break;
  case 3:
    func_0x000107c6142c(puVar11);
    if (puVar14 != (undefined8 *)0x0) {
      func_0x000107c5fadc(puVar19,puVar14);
      puVar11 = puVar14;
      puVar18 = puVar19;
      goto code_r0x0001030a78b8;
    }
code_r0x0001030a7954:
    puVar18 = (undefined8 *)0x0;
    puVar4 = puStack_68;
    break;
  case 4:
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar14);
    puVar14 = *(undefined8 **)(unaff_x20 + _DAT_112f39370);
    func_0x000107c4e6c0();
    func_0x000107c61180();
    if (puVar14 == (undefined8 *)0x0) {
      lVar13 = *(long *)(unaff_x20 + _DAT_112f39378);
      func_0x000107c4e6c4();
      func_0x000107c61180();
      lVar5 = lVar13;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      if (lVar5 == 0) {
        puVar18 = (undefined8 *)0x0;
        puVar4 = puStack_68;
      }
      else {
        lVar13 = lVar5;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        puVar4 = puStack_68;
        if (lVar13 != 0) {
          puVar18 = *(undefined8 **)(lVar13 + _DAT_1130937d8);
          puVar3 = (undefined8 *)((undefined8 *)(lVar13 + _DAT_1130937d8))[1];
          func_0x000107c61434(puVar3);
          func_0x000107c61170(lVar13);
          if (puVar3 != (undefined8 *)0x0) goto code_r0x0001030a784c;
        }
        puVar18 = (undefined8 *)0x0;
      }
    }
    else {
      puVar18 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
      puVar4 = puStack_68;
code_r0x0001030a784c:
      func_0x000107c5fadc(puVar18,puVar3);
      func_0x000107c6142c(puVar3);
    }
    func_0x000107c55418(puVar4);
    goto code_r0x0001030a7d88;
  case 5:
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar14);
    puVar18 = *(undefined8 **)(unaff_x20 + _DAT_112f39370);
    func_0x000107c4248c();
    func_0x000107c61180();
    puVar4 = puStack_68;
    if (puVar18 == (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(unaff_x20 + _DAT_112f39378);
      puVar14 = puVar19;
      func_0x000107c42498();
      func_0x000107c61180();
      puVar11 = puVar14;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      if (puVar11 != (undefined8 *)0x0) {
        puVar14 = puVar11;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        if (puVar14 != (undefined8 *)0x0) {
          puVar18 = puVar14;
          func_0x000107c4248c();
          func_0x000107c61180();
          func_0x000107c61170(puVar14);
          puVar4 = puStack_68;
          if (puVar18 != (undefined8 *)0x0) goto code_r0x0001030a7920;
        }
      }
      func_0x000107c42498();
      func_0x000107c61180();
      puVar18 = puVar19;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar19);
      puVar4 = puStack_68;
      if (puVar18 != (undefined8 *)0x0) {
        puVar14 = puVar18;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(puVar18);
        if (puVar14 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar18 = puVar14;
          func_0x000107c4e4d8();
          func_0x000107c61180();
          func_0x000107c61170(puVar14);
          if (puVar18 != (undefined8 *)0x0) goto code_r0x0001030a7920;
        }
      }
    }
    else {
code_r0x0001030a7920:
      puVar14 = puVar18;
      func_0x000107c5faec();
      func_0x000107c61170(puVar18);
      func_0x000107c5fadc(puVar14,puVar3);
      func_0x000107c6142c(puVar3);
      puVar18 = puVar14;
    }
    break;
  case 6:
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c();
    func_0x00010404c8b0();
    uVar17 = *puVar14;
    uVar12 = puVar14[1];
    puVar11 = *(undefined8 **)(unaff_x20 + _DAT_112f39370);
    func_0x000107c61434(uVar12);
    puVar14 = puVar11;
    func_0x000107c3d9a8();
    func_0x000107c61180();
    if (puVar14 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar18 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
    }
    puVar4 = PTR_PTR_1126acbc0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar17,uVar12);
    func_0x000107c6142c(uVar12);
    puVar19 = puVar3;
    func_0x000107c5fadc(puVar18,puVar3);
    func_0x000107c6142c(puVar3);
    func_0x000107c46904();
    func_0x000107c61170(uVar17);
    func_0x000107c61170();
    func_0x00010404c8f0();
    uVar17 = *puVar18;
    uVar12 = puVar18[1];
    func_0x000107c61434(uVar12);
    puVar14 = puVar11;
    func_0x000107c3d9ac();
    func_0x000107c61180();
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar3 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
    }
    puVar8 = PTR_PTR_1126acbc0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar17,uVar12);
    func_0x000107c6142c(uVar12);
    puVar18 = puVar19;
    func_0x000107c5fadc(puVar3,puVar19);
    func_0x000107c6142c(puVar19);
    func_0x000107c46904();
    puStack_78 = puVar8;
    func_0x000107c61170(uVar17);
    func_0x000107c61170();
    func_0x00010404c970();
    uVar17 = *puVar3;
    uVar12 = puVar3[1];
    func_0x000107c61434(uVar12);
    puVar14 = puVar11;
    func_0x000107c3fa10();
    func_0x000107c61180();
    puStack_70 = puVar4;
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar3 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
    }
    puVar8 = PTR_PTR_1126acbc0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar17,uVar12);
    func_0x000107c6142c(uVar12);
    puVar19 = puVar18;
    func_0x000107c5fadc(puVar3,puVar18);
    func_0x000107c6142c(puVar18);
    func_0x000107c46904();
    func_0x000107c61170(uVar17);
    func_0x000107c61170();
    func_0x00010404c930();
    uVar17 = *puVar3;
    uVar12 = puVar3[1];
    func_0x000107c61434(uVar12);
    puVar14 = puVar11;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    if (puVar14 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar3 = puVar14;
      func_0x000107c5faec();
      func_0x000107c61170(puVar14);
    }
    puVar9 = PTR_PTR_1126acbc0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar17,uVar12);
    func_0x000107c6142c(uVar12);
    puVar14 = puVar19;
    func_0x000107c5fadc(puVar3,puVar19);
    func_0x000107c6142c(puVar19);
    func_0x000107c46904();
    func_0x000107c61170(uVar17);
    func_0x000107c61170();
    func_0x00010404c9b0();
    uVar17 = *puVar3;
    uVar12 = puVar3[1];
    func_0x000107c61434(uVar12);
    func_0x000107c4ebd8();
    func_0x000107c61180();
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar3 = puVar11;
      func_0x000107c5faec();
      func_0x000107c61170(puVar11);
    }
    puVar10 = PTR_PTR_1126acbc0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar17,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fadc(puVar3,puVar14);
    func_0x000107c6142c(puVar14);
    func_0x000107c46904();
    func_0x000107c61170(uVar17);
    func_0x000107c61170();
    func_0x0001030baef8();
    func_0x000107c613fc();
    puVar7 = puStack_70;
    puVar6 = puStack_78;
    puVar3[3] = 0xb;
    puVar3[2] = 5;
    puVar3[4] = puStack_70;
    puVar3[5] = puStack_78;
    puVar3[6] = puVar8;
    puVar3[7] = puVar9;
    puVar3[8] = puVar10;
    uVar17 = 0;
    FUN_1030ab104(0,0x112f39428,&PTR_PTR_1126acbc0);
    func_0x000107c61174(puVar7);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar9);
    func_0x000107c61174(puVar10);
    puVar18 = puVar3;
    func_0x000107c5fc48(puVar3,uVar17);
    func_0x000107c61574(puVar3);
    puVar4 = puStack_68;
    func_0x000107c59a3c(puStack_68);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    goto code_r0x0001030a7d88;
  case 7:
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar14);
    puVar18 = *(undefined8 **)(unaff_x20 + _DAT_112f39370);
    func_0x000107c4ebd8(puVar18);
    func_0x000107c61180();
    puVar4 = puStack_68;
    break;
  case 8:
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar14);
    lVar13 = *(long *)(unaff_x20 + _DAT_112f39378);
    func_0x000107c3e944();
    func_0x000107c61180();
    lVar5 = lVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    lVar13 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar13 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      return puStack_68;
    }
    func_0x000107c5ee94(lVar16,lVar13);
    func_0x000107c61170(lVar13);
    puVar8 = puStack_70;
    puVar4 = puStack_78;
    lVar5 = lStack_80;
    (**(code **)(puStack_78 + 0x20))(lStack_80,lVar16,puStack_70);
    puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar17 = 0x2d4d4d2d79797979;
    uVar12 = 0xea00000000006464;
    func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
    func_0x000107c53e28(puVar6);
    func_0x000107c61170(uVar17);
    func_0x000107c5ee70();
    puVar7 = puVar6;
    func_0x000107c5c1b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    puVar9 = puStack_68;
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    func_0x000107c55418(puVar9);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    (**(code **)(puVar4 + 8))(lVar5,puVar8);
    return puVar9;
  }
  func_0x000107c55418(puVar4);
code_r0x0001030a7d88:
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1030a7f60; end: 1030a822f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030a7f60(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar3 = uStack_60;
  func_0x000107c614f0(uStack_60);
  uVar4 = 0x800000010f11d410;
  uVar1 = 0xd000000000000039;
  func_0x00010403c628(0xd000000000000039,0x800000010f11d410,uVar3,uStack_58);
  func_0x000107c615e8(uStack_60);
  if ((uVar1 & 1) == 0) {
    lVar6 = unaff_x20;
    uVar3 = uStack_58;
    FUN_1030a98a4();
    lVar8 = *(long *)(unaff_x20 + _DAT_112f39370);
    lVar2 = lVar8;
    func_0x000107c43634();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61434(uVar4);
    }
    else {
      lVar6 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c4aa24();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      return lVar6;
    }
    func_0x000107c6142c(uVar4);
    return lVar6;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f39378);
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar6 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar3 = uVar4;
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar2 != 0) {
      lVar6 = lVar2;
      func_0x000107c5faec(lVar2);
      uVar3 = uVar4;
      func_0x000107c61170(lVar2);
      goto LAB_1030a8100;
    }
    lVar6 = 0;
    uVar3 = uVar4;
  }
  uVar4 = 0;
LAB_1030a8100:
  lVar8 = *(long *)(unaff_x20 + _DAT_112f39370);
  lVar2 = lVar8;
  func_0x000107c43634();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar7 = 0;
    uVar5 = 0;
    uVar9 = uVar3;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c5faec();
    uVar9 = uVar3;
    func_0x000107c61170(lVar2);
    uVar5 = uVar3;
  }
  func_0x000107c4aa24();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar2 = 0;
    uVar9 = 0;
  }
  else {
    lVar2 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
  }
  uVar3 = 0;
  func_0x000103bfbea8(0);
  func_0x000103bfbb08(lVar7,uVar5,lVar2,uVar9,lVar6,uVar4,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar4);
  lVar6 = *(long *)(lVar7 + _DAT_112ff7008);
  lVar2 = ((long *)(lVar7 + _DAT_112ff7008))[1];
  func_0x000107c61434(*(undefined8 *)(lVar7 + _DAT_112ff7010 + 8));
  func_0x000107c61434(lVar2);
  func_0x000107c61170(lVar7);
  return lVar6;
}



/* Entry: 1030a8230; end: 1030a830f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a8230(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f393b0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    uStack_58 = 0x1030ab0f4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110608038;
    ppuVar2 = &puStack_78;
    lStack_50 = param_1;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_50;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1030a8310; end: 1030a8363;  */

void FUN_1030a8310(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1030a57fc();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030a8364; end: 1030a8367;  */

/* WARNING: Possible PIC construction at 0x0001030926d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030925a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030926dc) */
/* WARNING: Removing unreachable block (ram,0x0001030925a8) */
/* WARNING: Removing unreachable block (ram,0x0001030925d4) */
/* WARNING: Removing unreachable block (ram,0x0001030925bc) */
/* WARNING: Removing unreachable block (ram,0x0001030925d8) */
/* WARNING: Removing unreachable block (ram,0x0001030926e8) */
/* WARNING: Removing unreachable block (ram,0x000103092700) */

void FUN_1030a8364(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long alStack_a0 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126acae8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      func_0x000107c60e78();
      if (puRam0000000112f38b30 == (undefined *)0x0) {
        *(undefined1 **)((long)alStack_a0 + lVar4) = &stack0xfffffffffffffff0;
        *(code **)((long)alStack_a0 + lVar4 + 8) = FUN_103092738;
        puVar5 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
        func_0x000107c61168();
        func_0x000107c614ec();
        puRam0000000112f38b30 = puVar5;
        return;
      }
      return;
    }
    goto code_r0x000107c46fa4;
  }
  puVar5 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x000107c610f8();
  uStack_60 = 0;
  func_0x000107c48f08();
  uVar2 = uStack_60;
  if (puVar5 == (undefined *)0x0) {
    uVar10 = uStack_60;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61654();
    func_0x000107c610f8(PTR_PTR_1126acae8);
    goto code_r0x000107c46fa4;
  }
  func_0x000107c61174();
  puVar6 = param_1;
  func_0x000107c5fb5c(param_1,param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4c7f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar7 = (undefined *)0x0;
  FUN_103092738();
  puVar8 = puVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar5);
  if ((ulong)puVar8 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) != 1) goto LAB_1030926c0;
LAB_1030924dc:
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103092734);
        (*pcVar3)();
      }
      lVar4 = *(long *)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      puVar7 = puVar8;
      FUN_1030b5d48();
    }
    lVar9 = lVar4;
    func_0x000107c4d928();
    func_0x000107c61170(lVar4);
    if (lVar9 != 1) goto LAB_1030926c0;
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      lVar4 = *(long *)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      puVar7 = puVar8;
      FUN_1030b5d48();
    }
    func_0x000107c6142c(puVar8);
    lVar9 = lVar4;
    func_0x000107c4f888();
    func_0x000107c61170(lVar4);
    if ((lVar9 == 0) && (puVar6 == puVar7)) {
      func_0x000107c610f8(PTR_PTR_1126acae8);
      goto code_r0x000107c46fa4;
    }
  }
  else {
    puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar5 = puVar8;
    }
    puVar11 = puVar5;
    func_0x000107c60480();
    if ((puVar11 == (undefined *)0x1) && (func_0x000107c60480(), puVar5 != (undefined *)0x0))
    goto LAB_1030924dc;
LAB_1030926c0:
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c610f8(PTR_PTR_1126acae8);
code_r0x000107c46fa4:
                    /* WARNING: Could not recover jumptable at 0x00010c01faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1030a8368; end: 1030a88c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a8368(undefined **param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuStack_180;
  long lStack_178;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *apuStack_d8 [3];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char acStack_69 [9];
  
  ppuVar9 = apuStack_d8;
  func_0x000107c61428(param_3 + 0x10,ppuVar9,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    ppuVar14 = *(undefined ***)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar14 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      ppuVar14 = param_1;
    }
    func_0x000107c60480();
  }
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar14 != (undefined **)0x0) {
    puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar9 = (undefined **)((ulong)ppuVar14 & ((long)ppuVar14 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000102d2206c(0,ppuVar9,0);
    if ((long)ppuVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a88c4);
      (*pcVar12)();
    }
    ppuVar17 = (undefined **)0x0;
    do {
      puVar16 = puStack_130;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= (long)ppuVar17) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a8608);
          (*pcVar12)();
        }
        ppuVar13 = (undefined **)param_1[(long)ppuVar17 + 4];
        func_0x000107c61174();
      }
      else {
        ppuVar13 = ppuVar17;
        ppuVar9 = param_1;
        func_0x000102d20f64();
      }
      ppuStack_180 = ppuVar13;
      FUN_1030a9ad4(&puStack_c0,&ppuStack_180);
      func_0x000107c61170(ppuVar13);
      uVar3 = *(ulong *)(puVar16 + 0x10);
      ppuVar13 = (undefined **)(uVar3 + 1);
      puStack_130 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar3) {
        ppuVar9 = ppuVar13;
        func_0x000102d2206c(1 < *(ulong *)(puVar16 + 0x18),ppuVar13,1);
      }
      ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      *(undefined ***)(puStack_130 + 0x10) = ppuVar13;
      *(undefined **)(puStack_130 + uVar3 * 0x48 + 0x28) = puStack_b8;
      *(undefined **)(puStack_130 + uVar3 * 0x48 + 0x20) = puStack_c0;
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x60) = uStack_80;
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x48) = uStack_98;
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x40) = uStack_a0;
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x58) = uStack_88;
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x50) = uStack_90;
      *(ulong *)(puStack_130 + uVar3 * 0x48 + 0x38) = CONCAT71(uStack_a7,uStack_a8);
      *(undefined8 *)(puStack_130 + uVar3 * 0x48 + 0x30) = uStack_b0;
      puVar16 = puStack_130;
    } while (ppuVar14 != ppuVar17);
  }
  if ((ulong)param_2 >> 0x3e == 0) {
    ppuVar14 = *(undefined ***)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar14 = (undefined **)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < param_2) {
      ppuVar14 = param_2;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (ppuVar14 != (undefined **)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a8604);
          (*pcVar12)();
        }
        puVar4 = param_2[(long)(puVar15 + 4)];
        func_0x000107c61174();
        ppuVar17 = ppuVar9;
      }
      else {
        puVar4 = puVar15;
        ppuVar17 = param_2;
        func_0x000102d20f50();
      }
      if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a8600);
        (*pcVar12)();
      }
      ppuVar13 = (undefined **)(puVar15 + 1);
      puVar5 = puVar4;
      func_0x000107c4a950();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5faec();
      ppuVar9 = ppuVar17;
      func_0x000107c61170(puVar5);
      puVar5 = puVar4;
      func_0x000107c3f9a8();
      func_0x000107c61170(puVar4);
      puVar4 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar4 & 1) == 0) {
        ppuVar9 = (undefined **)(*(long *)(puVar8 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        func_0x000102d21f54(0,ppuVar9,1,puVar8);
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      ppuVar1 = (undefined **)(uVar3 + 1);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        ppuVar9 = ppuVar1;
        func_0x000102d21f54(puVar8,ppuVar1,1,puVar7);
      }
      *(undefined ***)(puVar8 + 0x10) = ppuVar1;
      *(undefined **)(puVar8 + uVar3 * 0x18 + 0x20) = puVar6;
      *(undefined ***)(puVar8 + uVar3 * 0x18 + 0x28) = ppuVar17;
      puVar8[uVar3 * 0x18 + 0x30] = (char)puVar5;
      puVar15 = puVar15 + 1;
    } while (ppuVar13 != ppuVar14);
  }
  func_0x0001000b44c0(0,0xf000000000000000);
  uStack_b0 = 0;
  uStack_a8 = 2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0xf000000000000000;
  uStack_90 = 0;
  uStack_78 = 1;
  uStack_120 = 0;
  uStack_118 = 2;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0xf000000000000000;
  uStack_100 = 0;
  uStack_e8 = 1;
  puStack_130 = puVar16;
  puStack_128 = puVar8;
  puStack_c0 = puVar16;
  puStack_b8 = puVar8;
  func_0x000102d226a8(&puStack_c0,&ppuStack_180);
  func_0x0001017b6434(&puStack_130);
  func_0x00010428a35c(0);
  func_0x000107c610f8();
  ppuVar9 = &puStack_c0;
  func_0x000104288eb8(ppuVar9);
  if ((ulong)param_1 >> 0x3e == 0) {
    ppuVar14 = *(undefined ***)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar14 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      ppuVar14 = param_1;
    }
    func_0x000107c60480();
  }
  if (ppuVar14 != (undefined **)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a88c0);
          (*pcVar12)();
        }
        puVar8 = param_1[(long)(puVar16 + 4)];
        func_0x000107c61174(puVar8);
      }
      else {
        puVar8 = puVar16;
        func_0x000102d20f64(puVar16,param_1);
      }
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1030a8764);
        (*pcVar12)();
      }
      ppuVar17 = (undefined **)(puVar16 + 1);
      FUN_1030aa450();
      func_0x000107c61170(puVar8);
      puVar16 = puVar16 + 1;
    } while (ppuVar17 != ppuVar14);
  }
  func_0x0001000d224c(&ppuStack_180);
  ppuVar14 = ppuStack_180;
  lVar10 = _DAT_112f39340;
  if (*(int *)(*(long *)(*(long *)(param_3 + _DAT_112f39340) + _DAT_113068240) + _DAT_113067ed0) ==
      0x16) {
    ppuVar17 = ppuStack_180;
    func_0x000107c614f0(ppuStack_180);
    (**(code **)(lStack_178 + 8))
              (acStack_69,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,ppuVar17);
    func_0x000107c615e8(ppuVar14);
    if (acStack_69[0] == '\x01') {
      func_0x0001000d224c(&ppuStack_180);
      ppuVar14 = ppuStack_180;
      FUN_1030a505c(ppuVar9);
      func_0x000107c61170(param_3);
      func_0x000107c61170(ppuVar9);
      ppuVar9 = ppuVar14;
      goto LAB_1030a8898;
    }
  }
  else {
    func_0x000107c615e8(ppuStack_180);
  }
  lVar10 = *(long *)(*(long *)(param_3 + lVar10) + _DAT_113068238);
  if (lVar10 != 0) {
    puVar2 = (undefined8 *)(lVar10 + _DAT_113067a18);
    pcVar12 = (code *)*puVar2;
    if (pcVar12 != (code *)0x0) {
      uVar11 = puVar2[1];
      func_0x000107c6157c(uVar11);
      (*pcVar12)(ppuVar9);
      func_0x000100d33c3c(pcVar12,uVar11);
    }
  }
  func_0x000107c61170(param_3);
LAB_1030a8898:
  func_0x000107c61170(ppuVar9);
  return;
}



/* Entry: 1030a88c4; end: 1030a8933;  */

void FUN_1030a88c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1030a8934(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1030a8934; end: 1030a8d0b;  */

/* WARNING: Possible PIC construction at 0x0001030a8ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a8c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a8cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a8ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a8b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a8b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a8b08) */
/* WARNING: Removing unreachable block (ram,0x0001030a8cd4) */
/* WARNING: Removing unreachable block (ram,0x0001030a8c38) */
/* WARNING: Removing unreachable block (ram,0x0001030a8cec) */
/* WARNING: Removing unreachable block (ram,0x0001030a8ba0) */
/* WARNING: Removing unreachable block (ram,0x0001030a8ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a8934(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f393f0);
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(unaff_x20 + _DAT_112f39340) + _DAT_113068240) + _DAT_113067eb0);
    lVar2 = puVar1[1];
    if (lVar2 != 0) {
      uVar4 = *puVar1;
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
    }
    FUN_1030ab104(0,0x112dcf430,&PTR_PTR_1126b3e90);
    func_0x000103dec308(0x14);
    func_0x000107c602fc(0x34);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c61174();
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f393e0);
    if (lVar3 == 0) {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(unaff_x20 + _DAT_112f39340) + _DAT_113068240) + _DAT_113067eb0);
      lVar3 = puVar1[1];
      if (lVar3 == 0) {
        func_0x000107c61174(lVar2);
      }
      else {
        uVar4 = *puVar1;
        func_0x000107c61174(lVar2);
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
      }
      FUN_1030ab104(0,0x112dcf430,&PTR_PTR_1126b3e90);
      func_0x000103dec308(0x15);
      func_0x000107c602fc(0x46);
      func_0x000107c5fb78(0x5b,0xe100000000000000);
      func_0x000107c61174();
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c5faec();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar3);
      FUN_1030abf28(param_1,param_2,lVar3);
      unaff_x20 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1030a8d0c; end: 1030a8d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a8d0c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar1 = puVar2;
  }
  else {
    FUN_1030a8da0();
    puVar2 = *(undefined **)(puVar1 + _DAT_112f39390);
  }
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1030a8da0; end: 1030a8f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a8da0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f39360);
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4077c();
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126acbd0;
    func_0x000107c610f8();
    func_0x000107c470f8(param_1,param_2);
    puVar5 = &UNK_110607df0;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_110607df0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110607f58;
    func_0x000107c613fc(&UNK_110607f58,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f39368);
    func_0x000107c613fc(&UNK_110607df0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar3 = &UNK_110607f80;
    func_0x000107c613fc(&UNK_110607f80,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1030ab0a4;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    *(undefined **)(puVar3 + 0x20) = puVar5;
    *(undefined **)(puVar3 + 0x28) = puVar2;
    uStack_60 = 0x1030ab0ac;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_110607f98;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c61174(puVar2);
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c503a8(uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 1030a8f50; end: 1030a8f87;  */

void FUN_1030a8f50(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1030a8f88; end: 1030a9707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a8f88(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_180;
  long lStack_178;
  undefined *puStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  char acStack_69 [9];
  
  func_0x000107c61428(param_4 + 0x10,auStack_d8,0,0);
  uVar4 = param_4 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    return;
  }
  uVar23 = param_1;
  func_0x000107c4acb8();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1030ab104(0,0x112f0dcf0,&PTR_PTR_1126ac2e0);
  uVar6 = uVar23;
  func_0x000107c5fc54(uVar23,uVar5);
  func_0x000107c61170(uVar23);
  uVar23 = param_1;
  func_0x000107c4ada8();
  func_0x000107c61180();
  uVar7 = 0;
  FUN_1030ab104(0,0x112f0dce8,&PTR_PTR_1126ac2d8);
  uVar8 = uVar23;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar23);
  uVar23 = param_1;
  func_0x000107c4ecb8();
  uVar9 = param_1;
  func_0x000107c4284c();
  func_0x000107c61180();
  uVar26 = param_1;
  func_0x000107c5c0c0();
  uVar17 = param_1;
  func_0x000107c3e4f8();
  uVar25 = param_1;
  func_0x000107c4ac9c();
  func_0x000107c61180();
  if (uVar25 == 0) {
    uStack_1c0 = 0xf000000000000000;
    uStack_1b8 = 0;
    uVar18 = uVar7;
  }
  else {
    uStack_1b8 = uVar25;
    func_0x000107c5ee30();
    uVar18 = uVar7;
    func_0x000107c61170(uVar25);
    uStack_1c0 = uVar7;
  }
  func_0x000107c4e6d8();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar25 = param_1;
    func_0x000107c49804();
    func_0x000107c61170(param_1);
    uVar20 = (int)uVar25 - 1;
  }
  if (uVar6 >> 0x3e == 0) {
    uVar25 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar25 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar25 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar25 != 0) {
    puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar18 = uVar25 & ((long)uVar25 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000102d2206c(0,uVar18,0);
    if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a9708);
      (*pcVar24)();
    }
    uVar7 = 0;
    do {
      puVar22 = puStack_130;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) <= (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a9370);
          (*pcVar24)();
        }
        uVar10 = *(ulong *)(uVar6 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar7;
        uVar18 = uVar6;
        func_0x000102d20f64();
      }
      uStack_180 = uVar10;
      FUN_1030a9ad4(&puStack_c0,&uStack_180);
      func_0x000107c61170(uVar10);
      uVar19 = *(ulong *)(puVar22 + 0x10);
      uVar10 = uVar19 + 1;
      puStack_130 = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar19) {
        uVar18 = uVar10;
        func_0x000102d2206c(1 < *(ulong *)(puVar22 + 0x18),uVar10,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puStack_130 + 0x10) = uVar10;
      *(undefined **)(puStack_130 + uVar19 * 0x48 + 0x28) = puStack_b8;
      *(undefined **)(puStack_130 + uVar19 * 0x48 + 0x20) = puStack_c0;
      *(long *)(puStack_130 + uVar19 * 0x48 + 0x60) = lStack_80;
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x48) = uStack_98;
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x40) = uStack_a0;
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x58) = uStack_88;
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x50) = uStack_90;
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x38) = CONCAT71(uStack_a7,uStack_a8);
      *(ulong *)(puStack_130 + uVar19 * 0x48 + 0x30) = uStack_b0;
      puVar22 = puStack_130;
    } while (uVar25 != uVar7);
  }
  if (uVar8 >> 0x3e == 0) {
    uVar25 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar25 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar25 = uVar8;
    }
    func_0x000107c60480();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
  if (uVar25 != 0) {
    uVar7 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a936c);
          (*pcVar24)();
        }
        uVar10 = *(ulong *)(uVar8 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
        uVar19 = uVar18;
      }
      else {
        uVar10 = uVar7;
        uVar19 = uVar8;
        func_0x000102d20f50();
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a9368);
        (*pcVar24)();
      }
      uVar11 = uVar10;
      func_0x000107c4a950();
      func_0x000107c61180();
      uVar12 = uVar11;
      func_0x000107c5faec();
      uVar18 = uVar19;
      func_0x000107c61170(uVar11);
      uVar11 = uVar10;
      func_0x000107c3f9a8();
      func_0x000107c61170(uVar10);
      puVar13 = puVar15;
      func_0x000107c61558();
      puVar14 = puVar15;
      if (((ulong)puVar13 & 1) == 0) {
        uVar18 = *(long *)(puVar15 + 0x10) + 1;
        puVar14 = (undefined *)0x0;
        func_0x000102d21f54(0,uVar18,1,puVar15);
      }
      uVar3 = *(ulong *)(puVar14 + 0x10);
      uVar10 = uVar3 + 1;
      puVar15 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar3) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        uVar18 = uVar10;
        func_0x000102d21f54(puVar15,uVar10,1,puVar14);
      }
      *(ulong *)(puVar15 + 0x10) = uVar10;
      *(ulong *)(puVar15 + uVar3 * 0x18 + 0x20) = uVar12;
      *(ulong *)(puVar15 + uVar3 * 0x18 + 0x28) = uVar19;
      puVar15[uVar3 * 0x18 + 0x30] = (char)uVar11;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar25);
  }
  uStack_118 = 2;
  uVar25 = 2;
  if ((int)uVar23 != 2) {
    uVar25 = (ulong)((int)uVar23 == 1);
  }
  if (uVar9 != 0) {
    uVar23 = uVar9;
    func_0x000107c5dab8();
    uStack_118 = (undefined1)uVar23;
  }
  uVar23 = 2;
  if ((int)uVar26 != 2) {
    uVar23 = (ulong)((int)uVar26 == 1);
  }
  uVar26 = 2;
  if ((int)uVar17 != 2) {
    uVar26 = (ulong)((int)uVar17 == 1);
  }
  lVar21 = 0;
  if (uVar20 < 5) {
    lVar21 = (ulong)uVar20 + 1;
  }
  func_0x000100de78a0(uStack_1b8,uStack_1c0);
  func_0x0001000b44c0(0,0xf000000000000000);
  uStack_90 = uStack_1b8;
  uStack_88 = uStack_1c0;
  uStack_78 = 1;
  uStack_100 = uStack_1b8;
  uStack_f8 = uStack_1c0;
  uStack_e8 = 1;
  puStack_130 = puVar22;
  puStack_128 = puVar15;
  uStack_120 = uVar25;
  uStack_110 = uVar23;
  uStack_108 = uVar26;
  lStack_f0 = lVar21;
  puStack_c0 = puVar22;
  puStack_b8 = puVar15;
  uStack_b0 = uVar25;
  uStack_a8 = uStack_118;
  uStack_a0 = uVar23;
  uStack_98 = uVar26;
  lStack_80 = lVar21;
  func_0x000102d226a8(&puStack_c0,&uStack_180);
  func_0x0001017b6434(&puStack_130);
  func_0x00010428a35c(0);
  func_0x000107c610f8();
  ppuVar16 = &puStack_c0;
  func_0x000104288eb8(ppuVar16);
  if (uVar6 >> 0x3e == 0) {
    uVar23 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar23 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar23 != 0) {
    uVar26 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a9704);
          (*pcVar24)();
        }
        uVar17 = *(ulong *)(uVar6 + uVar26 * 8 + 0x20);
        func_0x000107c61174(uVar17);
      }
      else {
        uVar17 = uVar26;
        func_0x000102d20f64(uVar26,uVar6);
      }
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1030a9528);
        (*pcVar24)();
      }
      uVar25 = uVar26 + 1;
      FUN_1030aa450();
      func_0x000107c61170(uVar17);
      uVar26 = uVar26 + 1;
    } while (uVar25 != uVar23);
  }
  func_0x0001000d224c(&uStack_180);
  uVar23 = uStack_180;
  lVar21 = _DAT_112f39340;
  if (*(int *)(*(long *)(*(long *)(uVar4 + _DAT_112f39340) + _DAT_113068240) + _DAT_113067ed0) ==
      0x16) {
    uVar26 = uStack_180;
    func_0x000107c614f0(uStack_180);
    (**(code **)(lStack_178 + 8))
              (acStack_69,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar26);
    func_0x000107c615e8(uVar23);
    if (acStack_69[0] == '\x01') {
      func_0x0001000d224c(&uStack_180);
      uVar23 = uStack_180;
      FUN_1030a505c(ppuVar16);
      func_0x000107c61170(uVar23);
      goto LAB_1030a9644;
    }
  }
  else {
    func_0x000107c615e8(uStack_180);
  }
  lVar21 = *(long *)(*(long *)(uVar4 + lVar21) + _DAT_113068238);
  if (lVar21 != 0) {
    puVar2 = (undefined8 *)(lVar21 + _DAT_113067a18);
    pcVar24 = (code *)*puVar2;
    if (pcVar24 != (code *)0x0) {
      uVar5 = puVar2[1];
      func_0x000107c6157c(uVar5);
      (*pcVar24)(ppuVar16);
      func_0x000100d33c3c(pcVar24,uVar5);
    }
  }
LAB_1030a9644:
  if (param_3 >> 0x3c < 0xf) {
    func_0x00010006c00c(param_2,param_3);
    FUN_1030a9d18(param_2,param_3);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar8);
    func_0x0001000b44c0(uStack_1b8,uStack_1c0);
    func_0x000107c61170(ppuVar16);
    func_0x000107c61170(uVar9);
    func_0x0001000b44c0(param_2,param_3);
  }
  else {
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar8);
    func_0x0001000b44c0(uStack_1b8,uStack_1c0);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(ppuVar16);
    uVar4 = uVar9;
  }
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1030a9708; end: 1030a97af;  */

/* WARNING: Possible PIC construction at 0x0001030a975c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a9760) */

void FUN_1030a9708(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(param_2);
    (*pcVar1)(param_2,0,0xf000000000000000);
    func_0x0001000b44c0(0,0xf000000000000000);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(param_2);
    param_2 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030a97b0; end: 1030a98a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a97b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_3 + _DAT_112f393f8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000100d33c3c(uVar2,uVar3);
    func_0x000107c6157c(param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1030a98a4; end: 1030a9ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030a98a4(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + _DAT_112f39378);
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar8 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar3 = lVar8;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010901e6c8();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c4adac();
        lVar8 = 0;
        lVar4 = param_2;
      }
      else {
        lVar8 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        func_0x000107c61434(param_2);
        lVar4 = param_2;
        func_0x000107c5fb5c(lVar8);
        func_0x000107c6142c(param_2);
        lVar5 = lVar3;
        func_0x000107c4adac();
        if (param_2 != 0) {
          func_0x000107c61434(param_2);
          lVar6 = lVar8;
          lVar4 = param_2;
          func_0x000107c5fb5c();
          func_0x000107c6142c(param_2);
          if (SBORROW8(lVar5,lVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a99e0);
            (*pcVar1)();
          }
        }
      }
      lVar5 = lVar3;
      func_0x000107c5c380();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      lStack_70 = lVar6;
      lStack_68 = lVar4;
      func_0x000107c5eb68(lVar7);
      func_0x000100e8b654();
      func_0x000107c601f0(lVar7,PTR___sSSN_11034da80,lVar5);
      func_0x000107c61170(lVar3);
      (**(code **)(lVar9 + 8))(lVar7,lVar2);
      func_0x000107c6142c(lVar4);
    }
  }
  return lVar8;
}



/* Entry: 1030a9ad4; end: 1030a9d17;  */

void FUN_1030a9ad4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *param_2;
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5dbfc();
  func_0x000107c61170(lVar9);
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar3 = lVar9;
  func_0x000107c5ba28();
  func_0x000107c61170(lVar9);
  func_0x000103bfc098();
  lVar9 = lVar8;
  func_0x000107c433b8();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c410b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar10 == 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar12 = param_3;
  }
  else {
    lVar9 = lVar10;
    func_0x000107c5faec();
    lVar12 = param_3;
    func_0x000107c61170(lVar10);
    lVar10 = param_3;
  }
  lVar4 = lVar8;
  func_0x000107c4c16c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    lVar11 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  lVar4 = lVar8;
  func_0x000107c5c260();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_1030ab104(0,0x112f0de00,&PTR_PTR_1126ac2f0);
    lVar6 = lVar4;
    func_0x000107c5fc54(lVar4,uVar5);
    func_0x000107c61170(lVar4);
    lVar4 = lVar6;
    func_0x000103bfc0a8();
    func_0x000107c6142c(lVar6);
  }
  lVar6 = lVar8;
  func_0x000107c433c0();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5d388();
    func_0x000107c61170(lVar6);
    if (3 < lVar7 - 1U) {
      lVar7 = 0;
    }
  }
  func_0x000107c5c260();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar5 = 0;
    FUN_1030ab104(0,0x112f0de00,&PTR_PTR_1126ac2f0);
    lVar6 = lVar8;
    func_0x000107c5fc54(lVar8,uVar5);
    func_0x000107c61170(lVar8);
    lVar8 = lVar6;
    func_0x000103bfc328();
    func_0x000107c6142c(lVar6);
  }
  uVar1 = (int)lVar2 - 1;
  lVar2 = 0;
  if (uVar1 < 7) {
    lVar2 = (ulong)uVar1 + 1;
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar9;
  param_1[3] = lVar10;
  param_1[4] = lVar11;
  param_1[5] = lVar12;
  param_1[6] = lVar4;
  param_1[7] = lVar7;
  param_1[8] = lVar8;
  return;
}



/* Entry: 1030a9d18; end: 1030a9f3b;  */

/* WARNING: Removing unreachable block (ram,0x0001030a9dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a9d18(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  ulong auStack_80 [2];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8(PTR_PTR_1126acbd8);
  func_0x00010006c00c(param_2,param_3);
  uVar3 = param_2;
  FUN_1030aae08(param_2,param_3);
  func_0x00010006c090(param_2,param_3);
  puVar4 = PTR_PTR_1126b86e8;
  func_0x000107c610f8(PTR_PTR_1126b86e8);
  func_0x000107c453e4();
  func_0x000107c5eea0(lVar6);
  func_0x000107c5ee8c();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a9f34);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a9f3c);
      (*pcVar1)();
    }
    func_0x000107c5469c(puVar4);
    func_0x000107c55b58(puVar4);
    func_0x0001000d224c(auStack_80);
    if (auStack_80[0] != 0) {
      uVar5 = auStack_80[0];
      func_0x000107c61150(auStack_80[0],PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_streamEvent__112674b68);
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(auStack_80[0]);
        return;
      }
      func_0x000107c61174(puVar4);
      func_0x000107c5c124(auStack_80[0]);
      func_0x000107c615e8(auStack_80[0]);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a9f38);
  (*pcVar1)();
}



/* Entry: 1030a9f3c; end: 1030aa093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a9f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_58;
  long lStack_50;
  char cStack_41;
  
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f39340);
  if (*(int *)(*(long *)(lVar5 + _DAT_113068240) + _DAT_113067ed0) == 0x16) {
    uVar2 = uStack_58;
    func_0x000107c614f0(uStack_58);
    (**(code **)(lStack_50 + 8))(&cStack_41,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2);
    func_0x000107c615e8(uVar3);
    if (cStack_41 == '\x01') {
      func_0x0001000d224c(&uStack_58);
      FUN_1030a5284(param_1,param_2);
      func_0x000107c61170(uStack_58);
      return;
    }
  }
  else {
    func_0x000107c615e8(uStack_58);
  }
  lVar5 = *(long *)(lVar5 + _DAT_113068238);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + _DAT_113067a20);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = puVar1[1];
      func_0x000107c6157c(uVar3);
      (*pcVar4)(param_1,param_2);
      func_0x000100d33c3c(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 1030aa094; end: 1030aa0b3; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aa094(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + _DAT_112f393e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f393e0),PTR_s_presentViewController_animated_c_112621588,
               param_3,1,0);
    return;
  }
  return;
}



/* Entry: 1030aa0b4; end: 1030aa287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030aa0b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar3 = &puStack_b0;
  ppuVar6 = &puStack_b0;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112f39360);
    func_0x000107c615f0(uVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
    puVar2 = (undefined *)(param_1 + 0x10);
    func_0x000107c61618();
    uVar5 = 0x112f39430;
    puStack_b0 = puVar2;
    func_0x0001000285a8(0x112f39430,&UNK_10db845c0);
    func_0x000107c5fb18(&puStack_b0,uVar5);
    uVar4 = 0;
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    func_0x0001048b0b48(ppuVar3,uVar5,0x27,uVar4);
    uVar5 = 0;
    FUN_1030ab104(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar2 = &UNK_110607fd0;
    func_0x000107c613fc(&UNK_110607fd0,0x20,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcStack_90 = FUN_1030ab0e4;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1010c8c0c;
    puStack_98 = &UNK_110607fe8;
    puStack_88 = puVar2;
    func_0x000107c60bc4(&puStack_b0);
    puVar2 = puStack_88;
    func_0x000107c6157c(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c503b0(0x4024000000000000,uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar5);
  }
  return lVar1 == 0;
}



/* Entry: 1030aa288; end: 1030aa3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aa288(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_58 [24];
  
  if (param_3 == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 == 0) {
      return;
    }
    puVar2 = *(undefined **)(param_4 + _DAT_112f39390);
    func_0x000107c61174(puVar2);
    func_0x000107c61170(param_4);
    func_0x000107c4d664(puVar2);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4077c();
    func_0x000107c4077c(param_3);
    puVar2 = PTR_PTR_1126acbd0;
    func_0x000107c610f8(PTR_PTR_1126acbd0);
    func_0x000107c470f8(param_1,param_2);
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uVar1 = *(undefined8 *)(param_4 + _DAT_112f39390);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(param_4);
      func_0x000107c4d664(uVar1);
      func_0x000107c61170(uVar1);
    }
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030aa3b8; end: 1030aa44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aa3b8(ulong param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uVar1 = *(undefined8 *)(param_4 + _DAT_112f39390);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(param_4);
      func_0x000107c4d664(uVar1);
      func_0x000107c61170(uVar1);
    }
  }
  else {
    (*param_2)();
  }
  return;
}



/* Entry: 1030aa450; end: 1030aa70f;  */

/* WARNING: Possible PIC construction at 0x0001030aa490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030aa620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030aa684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030aa624) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6d4) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6dc) */
/* WARNING: Removing unreachable block (ram,0x0001030aa62c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa638) */
/* WARNING: Removing unreachable block (ram,0x0001030aa494) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4e4) */
/* WARNING: Removing unreachable block (ram,0x0001030aa55c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4ec) */
/* WARNING: Removing unreachable block (ram,0x0001030aa5dc) */
/* WARNING: Removing unreachable block (ram,0x0001030aa5f0) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4f4) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4fc) */
/* WARNING: Removing unreachable block (ram,0x0001030aa49c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa52c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4a4) */
/* WARNING: Removing unreachable block (ram,0x0001030aa58c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4ac) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6b0) */
/* WARNING: Removing unreachable block (ram,0x0001030aa4b4) */
/* WARNING: Removing unreachable block (ram,0x0001030aa5b8) */
/* WARNING: Removing unreachable block (ram,0x0001030aa688) */
/* WARNING: Removing unreachable block (ram,0x0001030aa648) */
/* WARNING: Removing unreachable block (ram,0x0001030aa698) */
/* WARNING: Removing unreachable block (ram,0x0001030aa64c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6d0) */
/* WARNING: Removing unreachable block (ram,0x0001030aa658) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6ac) */
/* WARNING: Removing unreachable block (ram,0x0001030aa66c) */
/* WARNING: Removing unreachable block (ram,0x0001030aa694) */
/* WARNING: Removing unreachable block (ram,0x0001030aa6ec) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_1030aa450(undefined8 param_1)

{
  func_0x000107c433b8();
  func_0x000107c61180();
  func_0x000107c5ba28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030aa710; end: 1030aaa23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aa710(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1 = (long *)*param_1;
  plVar3 = param_1;
  lVar4 = param_2;
  func_0x000107c433c4();
  func_0x000107c61180();
  plVar1 = plVar3;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x00010404c8b0();
  plVar2 = (long *)*plVar3;
  lVar5 = plVar3[1];
  if ((plVar2 == plVar1 && lVar5 == lVar4) ||
     (func_0x000107c605b8(plVar2,lVar5,plVar1,lVar4,0), ((ulong)plVar2 & 1) != 0)) {
    func_0x000107c6142c(lVar4);
    uVar6 = *(undefined8 *)(param_2 + _DAT_112f39370);
    func_0x000107c433e0();
    func_0x000107c61180();
    if (param_1 == (long *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c524fc(uVar6);
  }
  else {
    func_0x00010404c8f0();
    plVar3 = (long *)*plVar2;
    lVar5 = plVar2[1];
    if ((plVar3 == plVar1 && lVar5 == lVar4) ||
       (func_0x000107c605b8(plVar3,lVar5,plVar1,lVar4,0), ((ulong)plVar3 & 1) != 0)) {
      func_0x000107c6142c(lVar4);
      uVar6 = *(undefined8 *)(param_2 + _DAT_112f39370);
      func_0x000107c433e0();
      func_0x000107c61180();
      if (param_1 == (long *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar5);
      }
      func_0x000107c52500(uVar6);
    }
    else {
      func_0x00010404c970();
      plVar2 = (long *)*plVar3;
      lVar5 = plVar3[1];
      if (((plVar2 == plVar1) && (lVar5 == lVar4)) ||
         (func_0x000107c605b8(plVar2,lVar5,plVar1,lVar4,0), ((ulong)plVar2 & 1) != 0)) {
        func_0x000107c6142c(lVar4);
        uVar6 = *(undefined8 *)(param_2 + _DAT_112f39370);
        func_0x000107c433e0();
        func_0x000107c61180();
        if (param_1 == (long *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar5);
        }
        func_0x000107c53418(uVar6);
      }
      else {
        func_0x00010404c930();
        plVar3 = (long *)*plVar2;
        lVar5 = plVar2[1];
        if (((plVar3 == plVar1) && (lVar5 == lVar4)) ||
           (func_0x000107c605b8(plVar3,lVar5,plVar1,lVar4,0), ((ulong)plVar3 & 1) != 0)) {
          func_0x000107c6142c(lVar4);
          uVar6 = *(undefined8 *)(param_2 + _DAT_112f39370);
          func_0x000107c433e0();
          func_0x000107c61180();
          if (param_1 == (long *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar5);
          }
          func_0x000107c59840(uVar6);
        }
        else {
          func_0x00010404c9b0();
          plVar2 = (long *)*plVar3;
          lVar5 = plVar3[1];
          if ((plVar2 == plVar1) && (lVar5 == lVar4)) {
            func_0x000107c6142c(lVar4);
          }
          else {
            func_0x000107c605b8(plVar2,lVar5,plVar1,lVar4,0);
            func_0x000107c6142c(lVar4);
            if (((ulong)plVar2 & 1) == 0) {
              return;
            }
          }
          uVar6 = *(undefined8 *)(param_2 + _DAT_112f39370);
          func_0x000107c433e0();
          func_0x000107c61180();
          if (param_1 == (long *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar5);
          }
          func_0x000107c57618(uVar6);
        }
      }
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1030aaa24; end: 1030aaa83;  */

void FUN_1030aaa24(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1030aaa84; end: 1030aac63;  */

/* WARNING: Possible PIC construction at 0x0001030aab18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030aab1c) */

void FUN_1030aaa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1030ab104(0,0x112f0dcf0,&PTR_PTR_1126ac2e0);
  func_0x000107c5fc54(param_2,uVar3);
  uVar3 = 0;
  FUN_1030ab104(0,0x112f0dce8,&PTR_PTR_1126ac2d8);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030aac64; end: 1030aace3;  */

undefined * FUN_1030aac64(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 1030aace4; end: 1030aae07;  */

long FUN_1030aace4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1030aae04);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1030aae08);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f38a58;
        func_0x0001000285a8(0x112f38a58,&UNK_10db84230);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f38a58;
      func_0x0001000285a8(0x112f38a58,&UNK_10db84230);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030aae00);
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



/* Entry: 1030aae08; end: 1030aaec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030aae08(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 unaff_x21;
  long lStack_88;
  long lStack_80;
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  uStack_40 = 0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uStack_68 = uStack_40;
  if (unaff_x20 == 0) {
    param_1 = uStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(param_1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    uStack_68 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  pcStack_48 = FUN_1030aaec8;
  uStack_70 = param_1;
  uStack_58 = uStack_68;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(&lStack_88);
  lVar3 = lStack_88;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f39340);
  if (*(int *)(*(long *)(lVar4 + _DAT_113068240) + _DAT_113067ed0) == 0x16) {
    lVar1 = lStack_88;
    func_0x000107c614f0(lStack_88);
    (**(code **)(lStack_80 + 8))(&cStack_71,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar1);
    func_0x000107c615e8(lVar3);
    if (cStack_71 == '\x01') {
      func_0x0001000d224c(&lStack_88);
      func_0x0001030a53c8();
      func_0x000107c61170(lStack_88);
      unaff_x20 = unaff_x20 + _DAT_112f393d8;
      func_0x000107c61618();
      lVar3 = 0;
      if (unaff_x20 != 0) {
        func_0x0001041bb118(0);
        func_0x0001041b9710(lVar4);
        puVar2 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        lVar3 = 0;
        func_0x0001041bf5c0(0);
        func_0x0001041bf2b0();
        func_0x000107c3d24c(unaff_x20);
        func_0x000107c615e8(unaff_x20);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(lVar3);
      }
    }
  }
  else {
    func_0x000107c615e8(lStack_88);
    lVar3 = lStack_88;
  }
  return lVar3;
}



/* Entry: 1030aaec8; end: 1030ab04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aaec8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  long lStack_40;
  char cStack_31;
  
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f39340);
  if (*(int *)(*(long *)(lVar5 + _DAT_113068240) + _DAT_113067ed0) == 0x16) {
    uVar1 = uStack_48;
    func_0x000107c614f0(uStack_48);
    (**(code **)(lStack_40 + 8))(&cStack_31,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1);
    func_0x000107c615e8(uVar4);
    if (cStack_31 == '\x01') {
      func_0x0001000d224c(&uStack_48);
      func_0x0001030a53c8();
      func_0x000107c61170(uStack_48);
      lVar2 = unaff_x20 + _DAT_112f393d8;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x0001041bb118(0);
        func_0x0001041b9710(lVar5);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        uVar4 = 0;
        func_0x0001041bf5c0(0);
        func_0x0001041bf2b0();
        func_0x000107c3d24c(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar4);
      }
    }
  }
  else {
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 1030ab050; end: 1030ab0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ab050(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f393d8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f39340);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b9710();
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2b0();
      func_0x000107c3d254(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030ab0b8; end: 1030ab0e3;  */

void FUN_1030ab0b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030ab0e4; end: 1030ab103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ab0e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_3 == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    puVar3 = *(undefined **)(lVar1 + _DAT_112f39390);
    func_0x000107c61174(puVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c4d664(puVar3);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4077c();
    func_0x000107c4077c(param_3);
    puVar3 = PTR_PTR_1126acbd0;
    func_0x000107c610f8(PTR_PTR_1126acbd0);
    func_0x000107c470f8(param_1,param_2);
    func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112f39390);
      func_0x000107c61174(uVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1030ab104; end: 1030ab143;  */

void FUN_1030ab104(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030ab144; end: 1030ab19b;  */

void FUN_1030ab144(long param_1,long param_2)

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



/* Entry: 1030ab19c; end: 1030abd2f;  */

void FUN_1030ab19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106080a8;
  func_0x000107c613fc(&UNK_1106080a8,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_13;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_2;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_1030abd30,puVar1);
  return;
}



/* Entry: 1030abd30; end: 1030abd6b;  */

void FUN_1030abd30(void)

{
  long unaff_x20;
  
  func_0x0001030ab2f4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1030abd6c; end: 1030abedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030abd6c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  uVar2 = 0x112dbe6f8;
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11308b850);
  func_0x0001000bda74(uVar3,uVar2);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = 0;
  FUN_1030a55c8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112f39308;
  func_0x0001000285a8(0x112f39470,&UNK_10db84670);
  func_0x000107c613fc();
  func_0x000107c61174();
  lVar7 = param_2;
  func_0x0001000c2754();
  *(long *)(lVar6 + lVar1) = lVar7;
  lVar1 = _DAT_112f39310;
  uVar2 = 0x112e9a198;
  func_0x0001000285a8(0x112e9a198,&UNK_10daa72a8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar6 + lVar1) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f392f0) = *(undefined8 *)(param_2 + _DAT_113068240);
  *(undefined8 *)(lVar6 + _DAT_112f392f8) = uVar3;
  *(undefined **)(lVar6 + _DAT_112f39300) = puVar4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar4);
  func_0x000107c61170(param_2);
  *param_1 = plVar8;
  return;
}



/* Entry: 1030abee0; end: 1030abf27;  */

undefined ** FUN_1030abee0(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 1030abf28; end: 1030ac4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030abf28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 auStack_160 [7];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [88];
  
  lVar2 = 0x112d3ae80;
  uStack_108 = param_3;
  pcStack_100 = (code *)param_2;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_120 + -extraout_x8;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar16 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar2 = 0x112d36580;
  lStack_f8 = lVar16;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar19 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar20 = *(long *)(lVar3 + -8);
  lVar22 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar18 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar21 - extraout_x12_02;
  func_0x000107c5edd0(lVar18,param_1,pcStack_100);
  lVar2 = lVar18;
  (**(code **)(lVar20 + 0x30))(lVar18,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x0001030ac75c(lVar18,0x112d36580,&UNK_10d9016d0);
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39480);
    func_0x000107c61618();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x000107c615e8();
      func_0x0001041b5884();
      uVar12 = *puVar4;
      puVar4 = (undefined8 *)puVar4[1];
      lVar2 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar13 = auStack_b8;
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      *(undefined1 **)(lVar2 + 0x28) = puVar13;
      puVar6 = puVar4;
      func_0x000107c61434();
      func_0x0001041b5a50();
      puVar9 = PTR___sSSN_11034da80;
      uVar5 = *puVar6;
      uVar1 = puVar6[1];
      *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar2 + 0x30) = uVar5;
      *(undefined8 *)(lVar2 + 0x38) = uVar1;
      func_0x000107c61434();
      lVar3 = lVar2;
      func_0x000100214a84(lVar2);
      func_0x000107c61588(lVar2);
      func_0x0001030ac75c((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c5fadc(uVar12,puVar4);
      func_0x000107c6142c(puVar4);
      lVar2 = lVar3;
      func_0x000107c5f9dc(lVar3,puVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar3);
      func_0x000107c466bc(puVar10);
      func_0x000107c61170();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar2);
    }
  }
  else {
    pcStack_100 = *(code **)(lVar20 + 0x20);
    lStack_118 = lVar14;
    (*pcStack_100)(lVar14,lVar18,lVar3);
    pcVar17 = *(code **)(lVar20 + 0x38);
    (*pcVar17)(lVar19,1,1,lVar3);
    (*pcVar17)(lVar16,1,1,lVar3);
    lVar2 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar13,1,1,lVar2);
    *(undefined1 *)(lVar14 + -8) = 0;
    *(undefined8 *)(lVar14 + -0x10) = 0;
    *(undefined8 *)(lVar14 + -0x18) = 0;
    *(undefined8 *)(lVar14 + -0x20) = 0;
    *(undefined8 *)(lVar14 + -0x28) = 0;
    *(undefined8 *)(lVar14 + -0x30) = 0;
    *(undefined8 *)(lVar14 + -0x38) = 0;
    *(undefined1 **)(lVar14 + -0x40) = puVar13;
    func_0x000104638e24(lStack_f8,1,lVar19,0,lVar16,0,0,0,0);
    puVar7 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar8 = puVar7;
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar9 = &UNK_110608150;
    func_0x000107c613fc(&UNK_110608150,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,unaff_x20);
    (**(code **)(lVar20 + 0x10))(lVar21,lStack_118,lVar3);
    uVar15 = (ulong)*(byte *)(lVar20 + 0x50);
    uVar23 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
    puVar10 = &UNK_110608178;
    func_0x000107c613fc(&UNK_110608178,uVar23 + lVar22,uVar15 | 7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    (*pcStack_100)(puVar10 + uVar23,lVar21,lVar3);
    pcStack_c8 = FUN_1030ac79c;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_100e38b5c;
    puStack_d0 = &UNK_110608190;
    ppuVar11 = &puStack_e8;
    puStack_c0 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_c0);
    func_0x000107c5dc64(puVar8);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar8);
    uVar12 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar16 = lStack_f8;
    lVar2 = lStack_110;
    func_0x000100e39298(lStack_f8,lStack_110);
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar2);
    puVar9 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    lVar14 = lVar2;
    func_0x000103c5d254(lVar2,puVar7,puVar9,unaff_x20,0,0,0,0);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar9);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f39478));
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar14);
    func_0x000100e392dc(lVar16);
    (**(code **)(lVar20 + 8))(lStack_118,lVar3);
  }
  return;
}



/* Entry: 1030ac500; end: 1030ac5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ac500(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_3 + 0x10,puVar2,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 != 0) {
      func_0x000107c5ed2c();
    }
    if ((param_1 == 0) || (param_2 != 0)) {
      lVar1 = param_3 + _DAT_112f39480;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c61170(param_3);
      }
      else {
        func_0x000107c615e8();
        func_0x000107c5ed70();
        func_0x000107c61170(param_3);
        func_0x000107c6142c(puVar2);
      }
      func_0x000107c61170(param_2);
    }
    else {
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5575c(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 1030ac5fc; end: 1030ac65b; -[_TtC40SCAdAttachmentHandlerImplementationSwift25AdLeadGenAttachmentRouter init] */

void FUN_1030ac5fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdLeadGenAttachmentRouter",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ac628);
  (*pcVar1)();
}



/* Entry: 1030ac65c; end: 1030ac693; -[_TtC40SCAdAttachmentHandlerImplementationSwift25AdLeadGenAttachmentRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030ac65c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39478));
  param_1 = param_1 + _DAT_112f39480;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030ac694; end: 1030ac6b3;  */

void FUN_1030ac694(void)

{
  func_0x000107c61168(&PTR_PTR_1128b35d0);
  return;
}



/* Entry: 1030ac6b4; end: 1030ac737; -[_TtC40SCAdAttachmentHandlerImplementationSwift25AdLeadGenAttachmentRouter webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001030ac6f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ac70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ac6f4) */
/* WARNING: Removing unreachable block (ram,0x0001030ac710) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ac6b4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030ac738; end: 1030ac79b;  */

undefined8 FUN_1030ac738(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030ac79c; end: 1030ac7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ac79c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar3 = auStack_48;
  func_0x000107c61428(uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff),lVar2 + 0x10,puVar3,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_2 != 0) {
      func_0x000107c5ed2c();
    }
    if ((param_1 == 0) || (param_2 != 0)) {
      lVar1 = lVar2 + _DAT_112f39480;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c615e8();
        func_0x000107c5ed70();
        func_0x000107c61170(lVar2);
        func_0x000107c6142c(puVar3);
      }
      func_0x000107c61170(param_2);
    }
    else {
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5575c(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 1030ac7ec; end: 1030ac807;  */

void FUN_1030ac7ec(long param_1,long param_2)

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



/* Entry: 1030ac808; end: 1030ac883; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ac808(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f39580) = 0;
  param_1 = param_1 + _DAT_112f39588;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdAttachmentHandlerImplementationSwift/AdLeadGenViewController.swift",0x46,
                      2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ac884);
  (*pcVar1)();
}



/* Entry: 1030ac884; end: 1030acf5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ac884(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *unaff_x20;
  
  func_0x000107c614f0();
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar2,PTR_s_viewDidLoad_112684cd8);
  func_0x0001030baf1c();
  func_0x000107c61534();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar2 + 0x20) = puVar5;
  puVar4 = puVar3;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe6666666666666);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar2 + 0x28) = puVar5;
  puVar4 = puVar3;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar2 + 0x30) = puVar5;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3feccccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined **)(puVar2 + 0x38) = puVar4;
  FUN_1030ad64c();
  func_0x000107c610f8();
  FUN_1030ad1b0(0x3fe0000000000000,0,0x3fe0000000000000,0x3ff0000000000000,puVar2,0,puVar3);
  puVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf40);
    (*pcVar1)();
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c(puVar6);
  func_0x000107c61170();
  func_0x0001008478a8();
  puVar7 = puVar6;
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  puVar8 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf44);
    (*pcVar1)();
  }
  puVar10 = puVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  *(undefined1 **)(puVar7 + 0x20) = puVar9;
  puVar8 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf48);
    (*pcVar1)();
  }
  puVar10 = puVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  *(undefined1 **)(puVar7 + 0x28) = puVar9;
  puVar8 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar9 != (undefined1 *)0x0) {
    puVar10 = puVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    *(undefined1 **)(puVar7 + 0x30) = puVar9;
    puVar8 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf50);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar10 = puVar9;
    func_0x000107c3ec1c(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    *(undefined1 **)(puVar7 + 0x38) = puVar9;
    uVar11 = 0;
    FUN_1030ad67c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar8 = puVar7;
    func_0x000107c5fc48(puVar7,uVar11);
    func_0x000107c61574(puVar7);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(puVar8);
    lVar12 = *(long *)(unaff_x20 + _DAT_112f39580);
    puVar7 = puVar2;
    if (lVar12 != 0) {
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c5a050();
      puVar7 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf54);
        (*pcVar1)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170(puVar7);
      puVar7 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf58);
        (*pcVar1)();
      }
      puVar8 = puVar7;
      func_0x000107c515ac();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c613fc(puVar6,((ulong)*(uint *)(puVar6 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                          *(ushort *)(puVar6 + 0x34) | 7);
      *(undefined8 *)(puVar6 + 0x18) = 9;
      *(undefined8 *)(puVar6 + 0x10) = 4;
      lVar13 = lVar12;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c5cbe4(puVar8);
      func_0x000107c61180();
      lVar14 = lVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar7);
      *(long *)(puVar6 + 0x20) = lVar14;
      lVar13 = lVar12;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c4acb0(puVar8);
      func_0x000107c61180();
      lVar14 = lVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar7);
      *(long *)(puVar6 + 0x28) = lVar14;
      lVar13 = lVar12;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c5ce8c(puVar8);
      func_0x000107c61180();
      lVar14 = lVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar7);
      *(long *)(puVar6 + 0x30) = lVar14;
      lVar13 = lVar12;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf5c);
        (*pcVar1)();
      }
      puVar7 = unaff_x20;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      lVar14 = lVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar7);
      *(long *)(puVar6 + 0x38) = lVar14;
      puVar7 = puVar6;
      func_0x000107c5fc48(puVar6,uVar11);
      func_0x000107c61574(puVar6);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar8);
    }
    func_0x000107c61170(puVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030acf4c);
  (*pcVar1)();
}



/* Entry: 1030acf5c; end: 1030acf83; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController viewDidLoad] */

void FUN_1030acf5c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030ac884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030acf84; end: 1030ad063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030acf84(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  
  func_0x000107c614f0();
  puVar3 = PTR_s_viewWillDisappear__112685438;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillDisappear__112685438,param_1 & 1);
  lVar1 = unaff_x20 + _DAT_112f39588;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar5 = *(code **)(lVar1 + _DAT_112f393f8);
    if (pcVar5 != (code *)0x0) {
      uVar4 = ((undefined8 *)(lVar1 + _DAT_112f393f8))[1];
      uVar2 = uVar4;
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      FUN_1030ad66c(pcVar5,uVar4);
      if ((ulong)puVar3 >> 0x3c < 0xf) {
        FUN_1030a9f3c(uVar2,puVar3);
        func_0x000107c615e8(lVar1);
        func_0x0001000b44c0(uVar2,puVar3);
        return;
      }
    }
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1030ad064; end: 1030ad093; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController viewWillDisappear:] */

void FUN_1030ad064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1030acf84(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030ad094; end: 1030ad11b; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ad094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1 + _DAT_112f39588;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1030aaec8();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1030ad11c; end: 1030ad147; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController initWithNibName:bundle:] */

void FUN_1030ad11c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdLeadGenViewController",0x40,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ad148);
  (*pcVar1)();
}



/* Entry: 1030ad148; end: 1030ad18f; -[_TtC40SCAdAttachmentHandlerImplementationSwift23AdLeadGenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030ad148(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39578));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39580));
  param_1 = param_1 + _DAT_112f39588;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030ad190; end: 1030ad1af;  */

void FUN_1030ad190(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3698);
  return;
}



/* Entry: 1030ad1b0; end: 1030ad4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030ad1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong auStack_b8 [3];
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f395b8;
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar4 = &stack0xffffffffffffff70;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  lVar1 = _DAT_112f395b8;
  uVar10 = *(undefined8 *)(puVar4 + _DAT_112f395b8);
  if (param_5 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_5) {
      uVar12 = param_5;
    }
    func_0x000107c60480();
  }
  if (uVar12 == 0) {
    func_0x000107c61174(uVar10);
    func_0x000107c6142c(param_5);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(uVar10);
    func_0x000100c077e4(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ad4ec);
      (*pcVar2)();
    }
    uVar13 = 0;
    puVar3 = puStack_98;
    do {
      if ((param_5 & 0xc000000000000001) == 0) {
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ad380);
          (*pcVar2)();
        }
        if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ad384);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_5 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar13;
        func_0x0001030b6a70(uVar13,param_5);
      }
      uVar6 = uVar5;
      func_0x000107c3ab24();
      func_0x000107c61180();
      uVar7 = 0;
      func_0x000100ef8bfc();
      uStack_a0 = uVar7;
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar3 + 0x10);
      auStack_b8[0] = uVar6;
      puStack_98 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
        func_0x000100c077e4(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
      }
      puVar3 = puStack_98;
      uVar13 = uVar13 + 1;
      *(ulong *)(puStack_98 + 0x10) = uVar5 + 1;
      func_0x000100102924(auStack_b8,puStack_98 + uVar5 * 0x20 + 0x20);
    } while (uVar12 != uVar13);
    func_0x000107c6142c(param_5);
  }
  puVar8 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar3);
  func_0x000107c535a0(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  uVar10 = *(undefined8 *)(puVar4 + lVar1);
  if (param_6 == 0) {
    func_0x000107c61174(uVar10);
    lVar11 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1030ad67c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar10);
    lVar11 = param_6;
    func_0x000107c5fc48(param_6,uVar7);
    func_0x000107c6142c(param_6);
  }
  func_0x000107c56084(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c597c4(param_1,param_2,*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c54598(param_3,param_4,*(undefined8 *)(puVar4 + lVar1));
  puVar9 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c49770(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 1030ad4ec; end: 1030ad567; -[_TtC40SCAdAttachmentHandlerImplementationSwift19GradientDimmingView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ad4ec(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f395b8;
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdAttachmentHandlerImplementationSwift/AdLeadGenViewController.swift",0x46,
                      2,0x6e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ad568);
  (*pcVar2)();
}



/* Entry: 1030ad568; end: 1030ad5d7; -[_TtC40SCAdAttachmentHandlerImplementationSwift19GradientDimmingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ad568(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f395b8);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1030ad5d8; end: 1030ad603; -[_TtC40SCAdAttachmentHandlerImplementationSwift19GradientDimmingView initWithFrame:] */

void FUN_1030ad5d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.GradientDimmingView",0x3c,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ad604);
  (*pcVar1)();
}



/* Entry: 1030ad604; end: 1030ad607;  */

void FUN_1030ad604(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ad608; end: 1030ad63b;  */

void FUN_1030ad608(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ad63c; end: 1030ad64b; -[_TtC40SCAdAttachmentHandlerImplementationSwift19GradientDimmingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ad63c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f395b8));
  return;
}



/* Entry: 1030ad64c; end: 1030ad66b;  */

void FUN_1030ad64c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3768);
  return;
}



/* Entry: 1030ad66c; end: 1030ad67b;  */

void FUN_1030ad66c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1030ad67c; end: 1030ad6df;  */

void FUN_1030ad67c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030ad6e0; end: 1030ad6e3;  */

void FUN_1030ad6e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ad6e4; end: 1030ada1f;  */

/* WARNING: Removing unreachable block (ram,0x0001030ada18) */
/* WARNING: Removing unreachable block (ram,0x0001030ada14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ad6e4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d130();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ada20);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030ad928;
    }
  }
  uVar7 = 0;
LAB_1030ad928:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030ada20; end: 1030ada2b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentPresentRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030ada20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030ad6e4(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030ada2c; end: 1030add67;  */

/* WARNING: Removing unreachable block (ram,0x0001030add60) */
/* WARNING: Removing unreachable block (ram,0x0001030add5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ada2c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d118();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030add68);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030adc70;
    }
  }
  uVar7 = 0;
LAB_1030adc70:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030add68; end: 1030add73; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentDidPresentWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030add68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030ada2c(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030add74; end: 1030ae1d3;  */

/* WARNING: Removing unreachable block (ram,0x0001030ae1c8) */
/* WARNING: Removing unreachable block (ram,0x0001030ae1cc) */
/* WARNING: Removing unreachable block (ram,0x0001030ae1c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030add74(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d12c();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar10 = 0;
  }
  else {
    lVar3 = param_4;
    func_0x000107c5ed2c();
    lVar10 = lVar3;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar3);
  }
  if (puVar2 != (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar8 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar5 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uVar8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar6 = PTR___sSuN_11034e220;
    puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    puVar9 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar5;
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(puVar6);
    puVar5 = puVar7;
    if (param_4 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db0dd8;
      func_0x000107c61174();
      func_0x0001030af9e8(lVar10);
      func_0x000107c61434(puVar9);
      func_0x000107c5fadc(lVar10,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c5e508(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(lVar10);
    }
    func_0x0001000d224c(&puStack_68);
    puVar6 = puStack_68;
    puVar7 = puVar5;
    if (puStack_68 != (undefined *)0x0) {
      puVar7 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ae1d4);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_5 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_5 + _DAT_113067eb0))[1] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar8);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar8);
    if (((undefined8 *)(param_5 + _DAT_113067eb8))[1] != 0) {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar8);
      goto LAB_1030ae06c;
    }
  }
  uVar8 = 0;
LAB_1030ae06c:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  if (param_4 != 0) {
    func_0x000107c5ed2c();
    func_0x000107c3fcb0();
    func_0x000107c52988(puVar2);
    lVar10 = param_4;
    func_0x000107c4b85c();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c54664(puVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar10);
  }
  func_0x0001000d224c(&puStack_68);
  puVar5 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030ae1d4; end: 1030ae1df; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentPresentFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

/* WARNING: Possible PIC construction at 0x0001030af8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030af900) */

void FUN_1030ae1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_1030add74(param_3,param_2,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030ae1e0; end: 1030ae517;  */

/* WARNING: Removing unreachable block (ram,0x0001030ae510) */
/* WARNING: Removing unreachable block (ram,0x0001030ae50c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ae1e0(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d128();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ae518);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030ae424;
    }
  }
  uVar7 = 0;
LAB_1030ae424:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030ae518; end: 1030ae523; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentPreloadRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030ae518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030ae1e0(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030ae524; end: 1030ae85f;  */

/* WARNING: Removing unreachable block (ram,0x0001030ae858) */
/* WARNING: Removing unreachable block (ram,0x0001030ae854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ae524(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d114();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ae860);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030ae768;
    }
  }
  uVar7 = 0;
LAB_1030ae768:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030ae860; end: 1030ae86b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentDidPreloadWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030ae860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030ae524(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030ae86c; end: 1030aeccb;  */

/* WARNING: Removing unreachable block (ram,0x0001030aecc0) */
/* WARNING: Removing unreachable block (ram,0x0001030aecc4) */
/* WARNING: Removing unreachable block (ram,0x0001030aecbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ae86c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d124();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar10 = 0;
  }
  else {
    lVar3 = param_4;
    func_0x000107c5ed2c();
    lVar10 = lVar3;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar3);
  }
  if (puVar2 != (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar8 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar5 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uVar8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar6 = PTR___sSuN_11034e220;
    puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    puVar9 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar5;
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(puVar6);
    puVar5 = puVar7;
    if (param_4 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db0dd8;
      func_0x000107c61174();
      func_0x0001030af9e8(lVar10);
      func_0x000107c61434(puVar9);
      func_0x000107c5fadc(lVar10,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c5e508(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(lVar10);
    }
    func_0x0001000d224c(&puStack_68);
    puVar6 = puStack_68;
    puVar7 = puVar5;
    if (puStack_68 != (undefined *)0x0) {
      puVar7 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030aeccc);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_5 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_5 + _DAT_113067eb0))[1] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar8);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar8);
    if (((undefined8 *)(param_5 + _DAT_113067eb8))[1] != 0) {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar8);
      goto LAB_1030aeb64;
    }
  }
  uVar8 = 0;
LAB_1030aeb64:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  if (param_4 != 0) {
    func_0x000107c5ed2c();
    func_0x000107c3fcb0();
    func_0x000107c52988(puVar2);
    lVar10 = param_4;
    func_0x000107c4b85c();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c54664(puVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar10);
  }
  func_0x0001000d224c(&puStack_68);
  puVar5 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030aeccc; end: 1030aecd7; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentPreloadFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

/* WARNING: Possible PIC construction at 0x0001030af8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030af900) */

void FUN_1030aeccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_1030ae86c(param_3,param_2,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030aecd8; end: 1030af013;  */

/* WARNING: Removing unreachable block (ram,0x0001030af00c) */
/* WARNING: Removing unreachable block (ram,0x0001030af008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030aecd8(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d120();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030af014);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030aef1c;
    }
  }
  uVar7 = 0;
LAB_1030aef1c:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030af014; end: 1030af01f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentDismissRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030af014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030aecd8(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030af020; end: 1030af35b;  */

/* WARNING: Removing unreachable block (ram,0x0001030af354) */
/* WARNING: Removing unreachable block (ram,0x0001030af350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030af020(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d110();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar4 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uVar7);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar5 = PTR___sSuN_11034e220;
    puVar6 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c5e508(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar5);
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    puVar5 = puVar6;
    if (puStack_68 != (undefined *)0x0) {
      puVar5 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030af35c);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar5);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_4 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_4 + _DAT_113067eb0))[1] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar7);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar7);
    if (((undefined8 *)(param_4 + _DAT_113067eb8))[1] != 0) {
      uVar7 = *(undefined8 *)(param_4 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar7);
      goto LAB_1030af264;
    }
  }
  uVar7 = 0;
LAB_1030af264:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030af35c; end: 1030af367; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentDidDismissWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_1030af35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030af020(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030af368; end: 1030af403;  */

void FUN_1030af368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030af404; end: 1030af863;  */

/* WARNING: Removing unreachable block (ram,0x0001030af858) */
/* WARNING: Removing unreachable block (ram,0x0001030af85c) */
/* WARNING: Removing unreachable block (ram,0x0001030af854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030af404(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d11c();
  func_0x000107c61180();
  if (param_4 == 0) {
    lVar10 = 0;
  }
  else {
    lVar3 = param_4;
    func_0x000107c5ed2c();
    lVar10 = lVar3;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar3);
  }
  if (puVar2 != (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27338;
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    uVar8 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar5 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uVar8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f27358;
    func_0x000107c61174();
    puVar6 = PTR___sSuN_11034e220;
    puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    puStack_68 = param_3;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    puVar9 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar5;
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(puVar6);
    puVar5 = puVar7;
    if (param_4 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db0dd8;
      func_0x000107c61174();
      func_0x0001030af9e8(lVar10);
      func_0x000107c61434(puVar9);
      func_0x000107c5fadc(lVar10,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c5e508(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(lVar10);
    }
    func_0x0001000d224c(&puStack_68);
    puVar6 = puStack_68;
    puVar7 = puVar5;
    if (puStack_68 != (undefined *)0x0) {
      puVar7 = puStack_68;
      func_0x000107c3d2d8();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030af864);
        (*pcVar1)();
      }
      func_0x000107c45314(puVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126cf560;
  func_0x000107c610f8(PTR_PTR_1126cf560);
  func_0x000107c453e4();
  if (param_5 == 0) {
    func_0x000107c522e0(puVar2);
  }
  else {
    if (((undefined8 *)(param_5 + _DAT_113067eb0))[1] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb0);
      func_0x000107c5fadc(uVar8);
    }
    func_0x000107c522e0(puVar2);
    func_0x000107c61170(uVar8);
    if (((undefined8 *)(param_5 + _DAT_113067eb8))[1] != 0) {
      uVar8 = *(undefined8 *)(param_5 + _DAT_113067eb8);
      func_0x000107c5fadc(uVar8);
      goto LAB_1030af6fc;
    }
  }
  uVar8 = 0;
LAB_1030af6fc:
  func_0x000107c58f88(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c570b4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55f68(puVar2);
  func_0x000107c53f00(puVar2);
  if (param_4 != 0) {
    func_0x000107c5ed2c();
    func_0x000107c3fcb0();
    func_0x000107c52988(puVar2);
    lVar10 = param_4;
    func_0x000107c4b85c();
    func_0x000107c61180();
    if (lVar10 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c54664(puVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar10);
  }
  func_0x0001000d224c(&puStack_68);
  puVar5 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_68);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1030af864; end: 1030af86f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger logAttachmentDismissFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

/* WARNING: Possible PIC construction at 0x0001030af8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030af900) */

void FUN_1030af864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_1030af404(param_3,param_2,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030af870; end: 1030af92f;  */

/* WARNING: Possible PIC construction at 0x0001030af8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030af900) */

void FUN_1030af870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  (*param_8)(param_3,param_2,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030af930; end: 1030af98f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger init] */

void FUN_1030af930(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAttachmentPresenterLogger",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030af95c);
  (*pcVar1)();
}



/* Entry: 1030af990; end: 1030af9c7; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentPresenterLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030af9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030af9b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030af990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f395e8));
  return;
}



/* Entry: 1030af9c8; end: 1030afa5b;  */

void FUN_1030af9c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3828);
  return;
}



/* Entry: 1030afa5c; end: 1030afabb; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdPlayableAttachmentPresenter init] */

void FUN_1030afa5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdPlayableAttachmentPresenter",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030afa88);
  (*pcVar1)();
}


