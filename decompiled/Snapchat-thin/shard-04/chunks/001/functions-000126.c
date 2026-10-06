/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031a08b0; end: 1031a08b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a08b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar3 = _DAT_112f48410;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = lVar5 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar1 = lVar6;
    func_0x000107c5c8a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar2 = lVar1;
    func_0x000107c5c8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar6 = lVar2;
    func_0x000107c4adac();
    func_0x000107c61170(lVar2);
  }
  lVar3 = lVar5 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c5c8a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar3 = lVar1;
    func_0x000107c5c8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      FUN_1031a0254(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112f48418);
  *(undefined **)(lVar5 + _DAT_112f48418) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  *(long *)(lVar5 + _DAT_112f48420) = lVar6;
  return;
}



/* Entry: 1031a08b8; end: 1031a08db; -[SCChatCommandManager clearCommandTokenStyle] */

void FUN_1031a08b8(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = "clearCommandTokenStyle()";
  puVar2 = &UNK_1106199d0;
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0("clearCommandTokenStyle()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1106199d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x1031a14b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106199e8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1031a08dc; end: 1031a09bb;  */

void FUN_1031a08dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0(param_3);
  func_0x000107c61180();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_6;
  uStack_50 = param_5;
  lStack_48 = param_4;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c4e590(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 1031a09bc; end: 1031a0a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031a09bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = _DAT_112f48410;
  lVar1 = unaff_x20 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c5c8a8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar1;
      func_0x000107c43770(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c417a8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 1031a0a58; end: 1031a0b0b;  */

void FUN_1031a0a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = *param_5;
    uVar2 = uVar4;
    func_0x000107c61558();
    *param_5 = uVar4;
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      func_0x0001031a0dcc(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      *param_5 = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x0001031a0dcc(uVar4,uVar2 + 1,1,uVar3);
      *param_5 = uVar4;
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    lVar1 = uVar4 + uVar2 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
  }
  return;
}



/* Entry: 1031a0b0c; end: 1031a0b6b; -[SCChatCommandManager init] */

void FUN_1031a0b0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatCommandManager.ChatCommandManager",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a0b38);
  (*pcVar1)();
}



/* Entry: 1031a0b6c; end: 1031a0ba3; -[SCChatCommandManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a0b6c(long param_1)

{
  func_0x0001011b3128(param_1 + _DAT_112f48410);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f48418));
  return;
}



/* Entry: 1031a0ba4; end: 1031a0bef;  */

void FUN_1031a0ba4(void)

{
  func_0x000107c61168(&PTR_PTR_1128be510);
  return;
}



/* Entry: 1031a0bf0; end: 1031a0c07;  */

/* WARNING: Possible PIC construction at 0x00010319f72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319f730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a0bf0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  lVar3 = lVar11 + _DAT_112f48410;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = lVar3;
  func_0x000107c5c8a8();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c8a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c4adac();
  func_0x000107c61170(lVar5);
  if ((((-1 < lVar1) && (-1 < lVar8)) && (lVar1 <= lVar4)) && (lVar8 <= lVar4 - lVar1)) {
    if (lVar9 == 0) {
      uVar12 = 0xe400000000000000;
      uVar6 = 0x7a697571;
    }
    else {
      if (lVar9 != 1) goto code_r0x000107c615e8;
      uVar12 = 0xea00000000007364;
      uVar6 = 0x7261636873616c66;
    }
    func_0x000107c5fb78(uVar6,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    lVar8 = 0x2f;
    lVar4 = lVar8;
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    lVar5 = lVar4;
    func_0x000107c4adac();
    func_0x000107c61170(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c5fadc(0x2f,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c48af4(puVar7);
    func_0x000107c61170(lVar8);
    FUN_10319f76c(lVar9);
    uVar12 = 0;
    func_0x000100eca28c(0);
    uVar6 = uVar12;
    func_0x000100ecbdec();
    lVar8 = lVar9;
    func_0x000107c5f9dc(lVar9,uVar12,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c6142c(lVar9);
    if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f760);
      (*pcVar2)();
    }
    func_0x000107c529d4(puVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c49718(lVar3);
    if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f764);
      (*pcVar2)();
    }
    if (SBORROW8(lVar1 + lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10319f768);
      (*pcVar2)();
    }
    lVar8 = lVar3;
    func_0x000107c5068c();
    func_0x0001011ce4f8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    puVar10 = PTR_PTR_1126a6548;
    func_0x000107c610f8();
    func_0x000107c48ee8();
    *(undefined **)(lVar8 + 0x20) = puVar10;
    uVar6 = *(undefined8 *)(lVar11 + _DAT_112f48418);
    *(long *)(lVar11 + _DAT_112f48418) = lVar8;
    func_0x000107c6142c(uVar6);
    lVar11 = lVar3;
    func_0x000107c5c8a8(lVar3);
    func_0x000107c61180();
    lVar8 = lVar11;
    func_0x000107c5c8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c4adac(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar7);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1031a0c08; end: 1031a0ecb;  */

ulong FUN_1031a0c08(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031a0cec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031a0cf0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6548;
    func_0x000107c61168(PTR_PTR_1126a6548);
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
    puVar4 = PTR_PTR_1126a6548;
    func_0x000107c61168(PTR_PTR_1126a6548);
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
  FUN_1031a13f8(0,0x112d657d8,&PTR_PTR_1126a6548);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031a0dcc);
  (*pcVar2)();
}



/* Entry: 1031a0ecc; end: 1031a13df;  */

undefined * FUN_1031a0ecc(char *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  char **ppcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined *puStack_c8;
  char acStack_c0 [24];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c4adac();
  if (lRam0000000112f483d8 != -1) {
    func_0x000107c61568(0x112f483d8,FUN_10319ec68);
  }
  puVar2 = &UNK_110619b88;
  func_0x000107c613fc(&UNK_110619b88,0x18,7);
  *(undefined ***)(puVar2 + 0x10) = &puStack_c8;
  puVar15 = &UNK_110619bb0;
  func_0x000107c613fc(&UNK_110619bb0,0x20,7);
  *(code **)(puVar15 + 0x10) = FUN_1031a13e0;
  *(undefined **)(puVar15 + 0x18) = puVar2;
  pcStack_80 = FUN_1031a1480;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101abda9c;
  puStack_88 = &UNK_110619bc8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_78;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar4);
  func_0x000107c429b4(param_2);
  func_0x000107c60bd0(ppuVar3);
  pcVar12 = "";
  puVar4 = puVar15;
  func_0x000107c61544(puVar15,"",0x72,0x6b,0x6a,1);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a1354);
    (*pcVar1)();
  }
  pcVar16 = *(char **)(puStack_c8 + 0x10);
  if ((ulong)param_1 >> 0x3e == 0) {
    if (pcVar16 != *(char **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10)) {
LAB_1031a1388:
      puVar15 = (undefined *)0x0;
      goto LAB_1031a138c;
    }
  }
  else {
    pcVar17 = (char *)((ulong)param_1 & 0xffffffffffffff8);
    if ((char *)0x7fffffffffffffff < param_1) {
      pcVar17 = param_1;
    }
    pcVar5 = pcVar17;
    func_0x000107c60480();
    if (pcVar16 != pcVar5) goto LAB_1031a1388;
    func_0x000107c60480();
    pcVar16 = pcVar17;
  }
  if (pcVar16 == (char *)0x0) {
    puVar15 = (undefined *)0x1;
  }
  else {
    lVar14 = 0;
    pcVar17 = (char *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(char **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= pcVar17) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a1334);
          (*pcVar1)();
        }
        pcVar5 = *(char **)(param_1 + (long)pcVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        pcVar5 = pcVar17;
        pcVar12 = param_1;
        FUN_1031a0c08();
      }
      pcVar6 = pcVar5;
      func_0x000107c4f888();
      lVar7 = param_2;
      pcVar11 = pcVar12;
      func_0x000107c4adac();
      if (((((long)pcVar6 < 0) || ((long)pcVar12 < 0)) || (lVar7 < (long)pcVar6)) ||
         (lVar7 - (long)pcVar6 < (long)pcVar12)) {
LAB_1031a12e8:
        func_0x000107c61170(pcVar5);
LAB_1031a1324:
        puVar15 = (undefined *)0x0;
        goto LAB_1031a138c;
      }
      if (*(char **)(puStack_c8 + 0x10) <= pcVar17) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a1338);
        (*pcVar1)();
      }
      pcVar12 = *(char **)(puStack_c8 + lVar14 + 0x20);
      pcVar6 = *(char **)(puStack_c8 + lVar14 + 0x28);
      pcVar8 = pcVar5;
      func_0x000107c4f888();
      if (pcVar12 != pcVar8 || pcVar6 != pcVar11) goto LAB_1031a12e8;
      pcStack_d8 = (char *)0x0;
      pcStack_d0 = (char *)0x0;
      if (lRam0000000112f483d0 != -1) {
        func_0x000107c61568(0x112f483d0,FUN_10319ec18);
      }
      func_0x000107c4f888(pcVar5);
      lVar7 = param_2;
      func_0x000107c3e348();
      func_0x000107c61180();
      if (lVar7 == 0) {
        uStack_98 = 0;
        puStack_a0 = (undefined *)0x0;
        puStack_88 = (undefined *)0x0;
        puStack_90 = (undefined *)0x0;
      }
      else {
        func_0x000107c60234(&puStack_a0);
        func_0x000107c615e8(lVar7);
      }
      pcVar6 = acStack_c0;
      func_0x0001031a1438(&puStack_a0,pcVar6,0x112d387f8,&UNK_10d902650);
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(acStack_c0);
        pcVar12 = (char *)0x0;
      }
      else {
        uVar9 = 0;
        func_0x0001031a13f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppcVar10 = &pcStack_e0;
        pcVar6 = acStack_c0;
        func_0x000107c6147c(ppcVar10,pcVar6,PTR___sypN_11034f1a8 + 8,uVar9,6);
        pcVar12 = pcStack_e0;
        if ((int)ppcVar10 == 0) {
          pcVar12 = (char *)0x0;
        }
      }
      pcVar11 = pcVar5;
      func_0x000107c5d0f0();
      if ((pcVar11 != (char *)0x0) && (pcVar11 != (char *)0x1)) {
        if (pcVar12 == (char *)0x0) goto LAB_1031a1274;
LAB_1031a12fc:
        func_0x000107c61170(pcVar5);
        pcVar5 = pcVar12;
LAB_1031a1314:
        func_0x000107c61170(pcVar5);
        func_0x00010006e7f4(&puStack_a0);
        goto LAB_1031a1324;
      }
      pcVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ecc();
      if (pcVar12 == (char *)0x0) {
        if (pcVar11 != (char *)0x0) {
          func_0x000107c61170(pcVar11);
          goto LAB_1031a1314;
        }
      }
      else {
        if (pcVar11 == (char *)0x0) goto LAB_1031a12fc;
        func_0x0001031a13f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174();
        pcVar8 = pcVar12;
        pcVar6 = pcVar11;
        func_0x000107c60118();
        func_0x000107c61170(pcVar11);
        func_0x000107c61170(pcVar12);
        func_0x000107c61170(pcVar12);
        if (((ulong)pcVar8 & 1) == 0) goto LAB_1031a1314;
      }
LAB_1031a1274:
      pcVar8 = pcStack_d0;
      pcVar11 = pcStack_d8;
      pcVar13 = pcVar5;
      func_0x000107c4f888();
      pcVar12 = pcVar6;
      func_0x000107c61170(pcVar5);
      func_0x00010006e7f4(&puStack_a0);
      if ((pcVar11 != pcVar13) || (pcVar8 != pcVar6)) goto LAB_1031a1324;
      pcVar17 = pcVar17 + 1;
      lVar14 = lVar14 + 0x10;
    } while (pcVar16 != pcVar17);
    puVar15 = (undefined *)0x1;
  }
LAB_1031a138c:
  puVar4 = puStack_c8;
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    FUN_1031a0a58();
    return puVar4;
  }
  return puVar15;
}



/* Entry: 1031a13e0; end: 1031a13f7;  */

void FUN_1031a13e0(void)

{
  FUN_1031a0a58();
  return;
}



/* Entry: 1031a13f8; end: 1031a147f;  */

void FUN_1031a13f8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031a1480; end: 1031a14df;  */

void FUN_1031a1480(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031a14e0; end: 1031a152b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a14e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f48458) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031a152c; end: 1031a1583; -[SCMerlinTeamSnapchatSendGate initWithMerlinOnboardingStatusManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a152c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f48458) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1031a1584; end: 1031a186b;  */

/* WARNING: Possible PIC construction at 0x0001031a1754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a17e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a1820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a17e4) */
/* WARNING: Removing unreachable block (ram,0x0001031a1758) */
/* WARNING: Removing unreachable block (ram,0x0001031a1824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a1584(byte param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar1 = &UNK_110619c88;
  func_0x000107c613fc(&UNK_110619c88,0x29,7);
  *(code **)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(long *)(puVar1 + 0x20) = unaff_x20;
  puVar1[0x28] = param_1;
  if ((param_1 & 1) == 0) {
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f48458);
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
    uVar2 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 == 0) {
LAB_1031a1688:
      func_0x000107c5c734();
      func_0x000107c61180();
    }
    else {
      uVar3 = uVar2;
      func_0x000107c4a5b0();
      func_0x000107c615e8(uVar2);
      if ((int)uVar3 == 0) goto LAB_1031a1688;
      uVar2 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar2 == 0) {
LAB_1031a165c:
        func_0x000107c5c734();
        func_0x000107c61180();
      }
      else {
        uVar3 = uVar2;
        func_0x000107c49bf4();
        func_0x000107c615e8(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_1031a165c;
        if ((param_2 & 1) != 0) {
          puVar4 = PTR_PTR_1126ae560;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar1 = &UNK_110619cb0;
          func_0x000107c613fc(&UNK_110619cb0,0x18,7);
          *(undefined **)(puVar1 + 0x10) = puVar4;
          func_0x000107c61174(puVar4);
          (*param_3)(0x1031a1bc4,puVar1);
          goto code_r0x000107c61574;
        }
        func_0x000107c5c734();
        func_0x000107c61180();
      }
    }
    if (uVar5 != 0) {
      uVar2 = uVar5;
      func_0x000107c4a5b0();
      if ((int)uVar2 == 0) {
        func_0x000107c615e8(uVar5);
      }
      else {
        func_0x000107c5c7a4(uVar5);
        func_0x000107c615e8(uVar5);
      }
    }
  }
  (*param_5)();
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031a186c; end: 1031a18ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a186c(code *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  
  if ((param_4 & 1) != 0) {
    lVar1 = *(long *)(param_3 + _DAT_112f48458);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a5b0();
      if ((int)lVar2 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        func_0x000107c5c7a4(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  (*param_1)();
  return;
}



/* Entry: 1031a18f0; end: 1031a19a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a18f0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f48458);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a5b0();
      if ((int)lVar2 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        func_0x000107c5c7a4(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 1031a19a4; end: 1031a1a73; -[SCMerlinTeamSnapchatSendGate gateSendAttemptWithIsTeamSnapchatConversation:canPresentJIT:presentJIT:completion:] */

/* WARNING: Possible PIC construction at 0x0001031a1a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a1a5c) */

void FUN_1031a19a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110619dc8;
  func_0x000107c613fc(&UNK_110619dc8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_110619df0;
  func_0x000107c613fc(&UNK_110619df0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_1031a1584(param_3,param_4,0x1031a1f6c,puVar1,0x1031a1fb8,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031a1a74; end: 1031a1b07;  */

void FUN_1031a1a74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_110619e08;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  pcVar2 = *(code **)(param_3 + 0x10);
  func_0x000107c6157c(param_2);
  (*pcVar2)(param_3,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 1031a1b08; end: 1031a1b43; -[SCMerlinTeamSnapchatSendGate disclosureAcceptedForIsTeamSnapchatConversation:] */

uint FUN_1031a1b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1031a18f0(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1031a1b44; end: 1031a1ba3; -[SCMerlinTeamSnapchatSendGate init] */

void FUN_1031a1b44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMerlinTeamSnapchatSendGate.SCMerlinTeamSnapchatSendGate",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a1b70);
  (*pcVar1)();
}



/* Entry: 1031a1ba4; end: 1031a1bcb; -[SCMerlinTeamSnapchatSendGate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a1ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f48458));
  return;
}



/* Entry: 1031a1bcc; end: 1031a1beb;  */

void FUN_1031a1bcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031a1bec; end: 1031a1c07;  */

void FUN_1031a1bec(long param_1,long param_2)

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



/* Entry: 1031a1c08; end: 1031a1c27;  */

void FUN_1031a1c08(void)

{
  func_0x000107c61168(&PTR_PTR_1128be5e0);
  return;
}



/* Entry: 1031a1c28; end: 1031a1f57;  */

/* WARNING: Possible PIC construction at 0x0001031a1dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a1ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a1f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a1ecc) */
/* WARNING: Removing unreachable block (ram,0x0001031a1dc4) */
/* WARNING: Removing unreachable block (ram,0x0001031a1f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a1c28(byte param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_110619d28;
  func_0x000107c613fc(&UNK_110619d28,0x18,7);
  *(long *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_110619d50;
  func_0x000107c613fc(&UNK_110619d50,0x29,7);
  *(code **)(puVar3 + 0x10) = FUN_1031a1f58;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(long *)(puVar3 + 0x20) = param_3;
  puVar3[0x28] = param_1;
  if ((param_1 & 1) == 0) {
    func_0x000107c60bc4(param_5);
    pcVar7 = *(code **)(param_5 + 0x10);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar2);
    (*pcVar7)(param_5,0);
    goto code_r0x000107c61574;
  }
  uVar8 = *(ulong *)(param_3 + _DAT_112f48458);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  uVar4 = uVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_1031a1d64:
    func_0x000107c5c734();
    func_0x000107c61180();
joined_r0x0001031a1d74:
    if (uVar8 == 0) goto LAB_1031a1dac;
LAB_1031a1d78:
    uVar4 = uVar8;
    func_0x000107c4a5b0();
    if ((int)uVar4 == 0) {
      func_0x000107c615e8(uVar8);
      goto LAB_1031a1dac;
    }
    uVar4 = uVar8;
    func_0x000107c5c7a4(uVar8);
    func_0x000107c615e8(uVar8);
    bVar1 = uVar4 == 1;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c4a5b0();
    func_0x000107c615e8(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_1031a1d64;
    uVar4 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 == 0) {
LAB_1031a1d20:
      func_0x000107c5c734();
      func_0x000107c61180();
      goto joined_r0x0001031a1d74;
    }
    uVar5 = uVar4;
    func_0x000107c49bf4();
    func_0x000107c615e8(uVar4);
    if ((uVar5 & 1) != 0) goto LAB_1031a1d20;
    if ((param_2 & 1) != 0) {
      puVar2 = PTR_PTR_1126ae560;
      func_0x000107c610f8(PTR_PTR_1126ae560);
      func_0x000107c453e4();
      func_0x000107c61618();
      if (param_4 != 0) {
        puVar6 = puVar2;
        func_0x000107c61174(puVar2);
        func_0x000107c61174();
        FUN_1031a2448(param_4,puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(param_4);
      }
      func_0x000107c43bf4(puVar2);
      func_0x000107c61180();
      puVar2 = &UNK_110619d78;
      func_0x000107c613fc(&UNK_110619d78,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1031a1fa8;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      uStack_60 = 0x1031a1fb4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101286f34;
      puStack_68 = &UNK_110619d90;
      puStack_58 = puVar2;
      func_0x000107c60bc4(&puStack_80);
      puVar2 = puStack_58;
      func_0x000107c6157c(puVar3);
      goto code_r0x000107c61574;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar8 != 0) goto LAB_1031a1d78;
LAB_1031a1dac:
    bVar1 = false;
  }
  (**(code **)(param_5 + 0x10))(param_5,bVar1);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1031a1f58; end: 1031a1f73;  */

void FUN_1031a1f58(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001031a1f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1031a1f74; end: 1031a1f9f;  */

void FUN_1031a1f74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031a1fa0; end: 1031a1fbb;  */

void FUN_1031a1fa0(long param_1,long param_2)

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



/* Entry: 1031a1fbc; end: 1031a2043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a1fbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f48488,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f48490) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48498) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f484a0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031a2044; end: 1031a20df; -[SCMerlinTeamSnapchatSendGateWorkflow initWithTeamSnapchatSendGate:merlinOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a2044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f48488,0);
  *(undefined8 *)(param_1 + _DAT_112f48490) = 0;
  *(undefined8 *)(param_1 + _DAT_112f48498) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f484a0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1031a20e0; end: 1031a218b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a20e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f48490);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f484a0);
    func_0x000107c61174();
    func_0x000107c61174(uVar3);
    uVar2 = uVar3;
    func_0x000107c4ffec();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031a218c; end: 1031a224f; -[SCMerlinTeamSnapchatSendGateWorkflow dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a218c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112f48490);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112f484a0);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(uVar4);
    uVar2 = uVar4;
    func_0x000107c4ffec();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031a2250; end: 1031a22a7; -[SCMerlinTeamSnapchatSendGateWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031a226c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a2270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a2250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f48498));
  return;
}



/* Entry: 1031a22a8; end: 1031a2343; -[SCMerlinTeamSnapchatSendGateWorkflow gateSendAttemptWithChatIdentifier:inputContext:completionBlock:] */

/* WARNING: Possible PIC construction at 0x0001031a2320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a2324) */

void FUN_1031a22a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1031a26c4(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1031a2344; end: 1031a23c3;  */

void FUN_1031a2344(undefined **param_1,long param_2,byte *param_3)

{
  byte bVar1;
  undefined **ppuVar2;
  long lVar3;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12b38;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar2 && param_2 == lVar3) {
    bVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar3,0);
    bVar1 = (byte)param_1;
  }
  func_0x000107c6142c(lVar3);
  *param_3 = bVar1 & 1;
  return;
}



/* Entry: 1031a23c4; end: 1031a23cf;  */

void FUN_1031a23c4(undefined **param_1,long param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  long lVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12b38;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar2 && param_2 == lVar3) {
    bVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar3,0);
    bVar1 = (byte)param_1;
  }
  func_0x000107c6142c(lVar3);
  *pbVar4 = bVar1 & 1;
  return;
}



/* Entry: 1031a23d0; end: 1031a23fb; -[SCMerlinTeamSnapchatSendGateWorkflow init] */

void FUN_1031a23d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMerlinTeamSnapchatSendGate.SCMerlinTeamSnapchatSendGateWorkflow",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a23fc);
  (*pcVar1)();
}



/* Entry: 1031a23fc; end: 1031a2447; -[SCMerlinTeamSnapchatSendGateWorkflow merlinOnboardingNeedsDismiss:] */

/* WARNING: Possible PIC construction at 0x0001031a2430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a2434) */

void FUN_1031a23fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1031a27f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1031a2448; end: 1031a26c3;  */

/* WARNING: Possible PIC construction at 0x0001031a25a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a2600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a2640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031a2650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a2644) */
/* WARNING: Removing unreachable block (ram,0x0001031a2604) */
/* WARNING: Removing unreachable block (ram,0x0001031a2610) */
/* WARNING: Removing unreachable block (ram,0x0001031a2620) */
/* WARNING: Removing unreachable block (ram,0x0001031a25a8) */
/* WARNING: Removing unreachable block (ram,0x0001031a2654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a2448(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_110619e40;
  func_0x000107c613fc(&UNK_110619e40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  param_1 = param_1 + _DAT_112f48488;
  func_0x000107c61618();
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (lVar2 != 0) {
      puVar6 = PTR_PTR_1126ae560;
      func_0x000107c610f8(PTR_PTR_1126ae560);
      func_0x000107c453e4();
      func_0x000107c43bf4();
      func_0x000107c61180();
      puVar3 = &UNK_110619e68;
      func_0x000107c613fc(&UNK_110619e68,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_1031a2894;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_60 = 0x1031a289c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101286f34;
      puStack_68 = &UNK_110619e80;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar3);
      pcVar5 = "presentTeamSnapchatJIT(completion:)";
      func_0x0001000c10c0("presentTeamSnapchatJIT(completion:)");
      func_0x000107c61180();
      func_0x000107c5dc64(puVar6);
      func_0x000107c615e8(pcVar5);
      func_0x000107c60bd0(ppuVar4);
      goto code_r0x000107c61170;
    }
  }
  func_0x0001002ed07c(0);
  puVar6 = (undefined *)0x1;
  func_0x000107c6010c(1);
  func_0x000107c3fefc(param_2);
  func_0x000107c61574(puVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1031a26c4; end: 1031a27f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a26c4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  byte *pbStack_50;
  byte bStack_41;
  
  func_0x000107c61604(param_3 + _DAT_112f48488);
  func_0x000107c60bc4(param_4);
  func_0x000107c4e360();
  func_0x000107c61180();
  if (*(long *)(param_3 + _DAT_112f48490) == 0 && param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar3 = 1;
      goto LAB_1031a274c;
    }
    func_0x000107c61170();
  }
  uVar3 = 0;
LAB_1031a274c:
  uVar4 = *(undefined8 *)(param_3 + _DAT_112f48498);
  bStack_41 = 0;
  if (param_1 != 0) {
    pbStack_50 = &bStack_41;
    func_0x000104522a44(FUN_1031a28ec,auStack_60,0x1031a23cc,0);
  }
  bVar1 = bStack_41;
  func_0x000107c61614(auStack_60,param_3);
  func_0x000107c60bc4(param_4);
  FUN_1031a1c28(bVar1,uVar3,uVar4,auStack_60,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61610(auStack_60);
  func_0x000107c60bd0(param_4);
  return;
}



/* Entry: 1031a27f4; end: 1031a2873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a27f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f48490);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f48490) = 0;
    func_0x000107c4ffec(*(undefined8 *)(unaff_x20 + _DAT_112f484a0),param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar1 = unaff_x20 + _DAT_112f48488;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c42610();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1031a2874; end: 1031a2893;  */

void FUN_1031a2874(void)

{
  func_0x000107c61168(&PTR_PTR_1128be6a0);
  return;
}



/* Entry: 1031a2894; end: 1031a28bb;  */

void FUN_1031a2894(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002ed07c(0);
  uVar1 = 1;
  func_0x000107c6010c(1);
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1031a28bc; end: 1031a28eb;  */

void FUN_1031a28bc(long param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_2 != 0) {
    return;
  }
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c3ebcc();
  }
  (*pcVar1)();
  return;
}



/* Entry: 1031a28ec; end: 1031a28ef;  */

void FUN_1031a28ec(undefined **param_1,long param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  long lVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12b38;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar2 && param_2 == lVar3) {
    bVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar3,0);
    bVar1 = (byte)param_1;
  }
  func_0x000107c6142c(lVar3);
  *pbVar4 = bVar1 & 1;
  return;
}



/* Entry: 1031a28f0; end: 1031a296f;  */

void FUN_1031a28f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f484d0,&UNK_10db95470);
  puVar1 = &UNK_110619eb8;
  func_0x000107c613fc(&UNK_110619eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031a2a78,puVar1);
  return;
}



/* Entry: 1031a2970; end: 1031a2a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a2970(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c4cd8c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_1031a1c08();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f48458) = uVar2;
  plVar5 = &lStack_58;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000100083b20(&uStack_48);
  lVar3 = 0;
  FUN_1031a2874();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112f48488,0);
  *(undefined8 *)(lVar4 + _DAT_112f48490) = 0;
  *(long **)(lVar4 + _DAT_112f48498) = plVar5;
  *(undefined8 *)(lVar4 + _DAT_112f484a0) = uStack_48;
  plVar5 = &lStack_68;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1031a2a78; end: 1031a2a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a2a78(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c4cd8c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_1031a1c08();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f48458) = uVar2;
  plVar5 = &lStack_58;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000100083b20(&uStack_48);
  lVar3 = 0;
  FUN_1031a2874();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112f48488,0);
  *(undefined8 *)(lVar4 + _DAT_112f48490) = 0;
  *(long **)(lVar4 + _DAT_112f48498) = plVar5;
  *(undefined8 *)(lVar4 + _DAT_112f484a0) = uStack_48;
  plVar5 = &lStack_68;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1031a2a80; end: 1031a2b0b;  */

void FUN_1031a2a80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112f484d8;
  func_0x0001000285a8(0x112f484d8,&UNK_10db95500);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x0001003b3b80(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1031a2b0c; end: 1031a2b33;  */

void FUN_1031a2b0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112f484d8;
  func_0x0001000285a8(0x112f484d8,&UNK_10db95500);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x0001003b3b80(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1031a2b34; end: 1031a2cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031a2b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f484f0;
  func_0x000107c61614(unaff_x20 + _DAT_112f484f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f484e8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f484e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1031a2cd4; end: 1031a2d33; -[SCChatCommandMenuScope init] */

void FUN_1031a2cd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatCommandMenuScope.SCChatCommandMenuScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a2d00);
  (*pcVar1)();
}



/* Entry: 1031a2d34; end: 1031a2d7b; -[SCChatCommandMenuScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031a2d34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f484e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f484e8));
  param_1 = param_1 + _DAT_112f484f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031a2d7c; end: 1031a2d9b;  */

void FUN_1031a2d7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128be778);
  return;
}



/* Entry: 1031a2d9c; end: 1031a2d9f;  */

void FUN_1031a2d9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db955a8;
  func_0x000107c61520(&UNK_10db955a8,&UNK_11061a020);
  puRam0000000112f48520 = puVar1;
  return;
}



/* Entry: 1031a2da0; end: 1031a2ddf;  */

void FUN_1031a2da0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db955a8;
  func_0x000107c61520(&UNK_10db955a8,&UNK_11061a020);
  puRam0000000112f48520 = puVar1;
  return;
}



/* Entry: 1031a2de0; end: 1031a2e8b;  */

void FUN_1031a2de0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031a2e8c; end: 1031a2f3b;  */

void FUN_1031a2e8c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1031a2f3c; end: 1031a2fbb;  */

undefined8 * FUN_1031a2f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031a2fbc; end: 1031a305b;  */

int FUN_1031a2fbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031a305c; end: 1031a306b; -[SCDetectedChatIntent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031a305c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f48528);
}



/* Entry: 1031a306c; end: 1031a30b7; -[SCDetectedChatIntent conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a306c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f48530);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f48530))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1031a30b8; end: 1031a30bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a30b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f48528) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f48530);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031a30c0; end: 1031a320b; -[SCDetectedChatIntent initWithType:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a30c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  *(undefined8 *)(param_1 + _DAT_112f48528) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f48530);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031a320c; end: 1031a3393; -[SCDetectedChatIntent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031a320c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(*(undefined8 *)(param_1 + _DAT_112f48528));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f48530);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f48530))[1];
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1031a3394; end: 1031a3413; -[SCDetectedChatIntent isEqual:] */

uint FUN_1031a3394(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001031a32b4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1031a3414; end: 1031a3417; -[SCDetectedChatIntent copyWithZone:] */

void FUN_1031a3414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1031a3418; end: 1031a3433; -[SCDetectedChatIntent description] */

void FUN_1031a3418(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031a3434; end: 1031a34af; -[SCDetectedChatIntent init] */

void FUN_1031a3434(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCChatIntentDetectionServices/DetectedChatIntentWrapper.swift",0x3d,2,0x36,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a347c);
  (*pcVar1)();
}



/* Entry: 1031a34b0; end: 1031a34c3; -[SCDetectedChatIntent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a34b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f48530 + 8))
  ;
  return;
}



/* Entry: 1031a34c4; end: 1031a34e3;  */

void FUN_1031a34c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128be848);
  return;
}



/* Entry: 1031a34e4; end: 1031a34e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a34e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f48528) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f48530);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031a34e8; end: 1031a3813;  */

void FUN_1031a34e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_11061a1d0;
  func_0x000107c613fc(&UNK_11061a1d0,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_10;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_5;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(0x1031a3624,puVar1);
  return;
}



/* Entry: 1031a3814; end: 1031a3823;  */

undefined1  [16] FUN_1031a3814(void)

{
  return ZEXT816(0x11061a1f8);
}



/* Entry: 1031a3824; end: 1031a386f;  */

void FUN_1031a3824(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x0001031a6c88();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126acd40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1031a3870; end: 1031a3957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031a3870(double param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f48560);
  func_0x000106b7ff68();
  param_1 = param_1 - (double)iVar2;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a3950);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      return (long)param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a3958);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a3954);
  (*pcVar1)();
}



/* Entry: 1031a3958; end: 1031a3bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a3958(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  func_0x000106a3a9e4(*(undefined8 *)(lStack_38 + 0x10),1);
  func_0x000107c61574(lStack_38);
  func_0x000107c61604(unaff_x20 + _DAT_112f485b0,param_1);
  plVar5 = *(long **)(unaff_x20 + _DAT_112f48568);
  puVar1 = &UNK_11061a2c0;
  func_0x000107c613fc(&UNK_11061a2c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcVar2 = FUN_1031a678c;
  puVar4 = puVar1;
  (**(code **)(*plVar5 + 0x60))(FUN_1031a678c);
  func_0x000107c61574(puVar1);
  pcVar3 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f485a0),pcVar3,puVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1031a3bf8; end: 1031a3d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a3bf8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_70;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + _DAT_112f48590);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c4a5d8();
      func_0x000107c615e8(lVar2);
      if (((int)lVar5 != 0) && (uVar3 = param_4, func_0x000107c4fa50(), (uVar3 & 1) != 0)) {
        func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
        param_3 = param_3 + 0x10;
        func_0x000107c61618();
        if (param_3 == 0) {
          return;
        }
        func_0x0001031a3b48();
        func_0x000107c61170(param_3);
        return;
      }
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c40674(param_4);
    func_0x000107c61180();
    uVar3 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112f48560);
    func_0x000106b7ff8c();
    if (iVar1 == 0) {
      func_0x0001031a408c(param_1,param_2,uVar3,puVar4);
    }
    else {
      FUN_1031a3e34(param_1,param_2,uVar3,puVar4);
    }
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 1031a3d98; end: 1031a3deb;  */

void FUN_1031a3d98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001031a3b48();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1031a3dec; end: 1031a3e33; -[_TtC24ConvoSafetyPromptFeature15CSPChatObserver registerWithInputContext:] */

void FUN_1031a3dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1031a3958(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031a3e34; end: 1031a5453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a3e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_a0;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&uStack_a0 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c6142c(uStack_68);
  lStack_70 = -0x2fffffffffffffea;
  uStack_68 = 0x800000010f12c0b0;
  func_0x000107c5fb78(param_3,param_4);
  func_0x000107c5fb78(0x29636e7973612820,0xe800000000000000);
  func_0x000107c6142c(uStack_68);
  func_0x0001000d224c(&lStack_70);
  lVar2 = lStack_70;
  func_0x000106a3aa5c(*(undefined8 *)(lStack_70 + 0x10),1);
  func_0x000107c5eea0(lVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f485a8);
  uVar4 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  uStack_a0 = param_3;
  func_0x000107c6142c(uVar4);
  puVar5 = &UNK_11061a2c0;
  func_0x000107c613fc(&UNK_11061a2c0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  (**(code **)(lVar11 + 0x10))(lVar10,lVar7,lVar3);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar8 + 0x40 & (uVar8 ^ 0xffffffffffffffff);
  puVar6 = &UNK_11061a2e8;
  func_0x000107c613fc(&UNK_11061a2e8,uVar9 + lVar12,uVar8 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(long *)(puVar6 + 0x28) = lVar2;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  *(undefined8 *)(puVar6 + 0x38) = param_2;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar9,lVar10,lVar3);
  func_0x000107c61438(param_4,2);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(lVar2);
  func_0x000107c61434(param_2);
  FUN_1031a5694(uStack_a0,param_4,param_1,param_2,0x1031a67a4,puVar6);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(puVar6);
  (**(code **)(lVar11 + 8))(lVar7,lVar3);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1031a5454; end: 1031a5693;  */

/* WARNING: Possible PIC construction at 0x0001031a55ac: Changing call to branch */

void FUN_1031a5454(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_98 = param_11;
  uStack_a0 = param_10;
  lVar2 = 0;
  uStack_90 = param_9;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_3 == 0) && (param_2 != 0)) {
    func_0x000107c61174(param_2);
    func_0x000107c5eea0(lVar3);
    func_0x000107c5ee68(param_7);
    (**(code **)(lVar5 + 8))(lVar3,lVar2);
    uVar4 = *(undefined8 *)(param_6 + 0x10);
    func_0x000106a3aad4(uVar4,1);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a568c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a5690);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a5694);
      (*pcVar1)();
    }
    func_0x000106a3ab4c(uVar4,(long)param_1);
    func_0x000107c61428(param_8 + 0x10,&uStack_88,0,0);
    param_8 = param_8 + 0x10;
    func_0x000107c61618();
    if (param_8 == 0) {
      func_0x000107c61170(param_2);
      return;
    }
    func_0x0001031a48e4(param_2,uStack_90,uStack_a0,uStack_98);
  }
  else {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_80);
    uStack_88 = 0xd000000000000017;
    uStack_80 = 0x800000010f12c1e0;
    func_0x000107c5fb78(param_4,param_5);
    func_0x000107c6142c(uStack_80);
    uVar4 = *(undefined8 *)(param_6 + 0x10);
    param_8 = -0x2fffffffffffffef;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f12c200);
    func_0x000106a3af90(uVar4,param_8,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1031a5694; end: 1031a62a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a5694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uStack_68;
  
  uVar4 = param_1;
  func_0x0001000d224c(&uStack_68);
  FUN_1031a3870();
  lVar1 = unaff_x20 + _DAT_112f48580;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  puVar5 = &UNK_11061a2c0;
  func_0x000107c613fc(&UNK_11061a2c0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11061a310;
  func_0x000107c613fc(&UNK_11061a310,0x58,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  *(undefined8 *)(puVar6 + 0x20) = param_6;
  *(undefined8 *)(puVar6 + 0x28) = uStack_68;
  *(undefined **)(puVar6 + 0x30) = puVar5;
  *(undefined8 *)(puVar6 + 0x38) = param_1;
  *(undefined8 *)(puVar6 + 0x40) = param_2;
  *(undefined8 *)(puVar6 + 0x48) = param_3;
  *(undefined8 *)(puVar6 + 0x50) = param_4;
  pcVar7 = *(code **)(lVar3 + 0x28);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uStack_68);
  func_0x000107c6157c(puVar5);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  (*pcVar7)(param_1,param_2,FUN_1031a67b0,puVar6,uVar2,lVar3);
  func_0x000107c61574(uStack_68);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 1031a62a4; end: 1031a63c7;  */

void FUN_1031a62a4(undefined8 param_1,char param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == '\x01') {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x22);
    func_0x000107c5fb78(0xd000000000000020,0x800000010f12c160);
    uVar1 = 0x112d393f0;
    uStack_58 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_48);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar1 = 0x7365725f65766173;
    func_0x000107c5fadc(0x7365725f65766173,0xed000065736e6f70);
    func_0x000106a3af90(uVar2,uVar1,1);
    func_0x000107c61170(uVar1);
    func_0x000100d39f8c(param_1,1);
  }
  (*param_4)();
  return;
}



/* Entry: 1031a63c8; end: 1031a663f;  */

void FUN_1031a63c8(long param_1,char param_2,code *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_168 [88];
  long lStack_110;
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
  long lStack_b0;
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
  
  if (param_2 == '\x01') {
    lStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c5fb78(0xd000000000000022,0x800000010f12c190);
    uVar1 = 0x112d393f0;
    lStack_110 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_110,&lStack_b0,uVar1,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_a8);
    func_0x0001000d224c(&lStack_b0);
    lVar4 = lStack_b0;
    uVar3 = *(undefined8 *)(lStack_b0 + 0x10);
    uVar1 = 0x65665f6c61636f6c;
    func_0x000107c5fadc(0x65665f6c61636f6c,0xeb00000000686374);
    func_0x000106a3af90(uVar3,uVar1,1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar1);
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    (*param_3)(&lStack_b0);
  }
  else {
    lStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(uStack_a8);
    lStack_b0 = -0x2fffffffffffffee;
    uStack_a8 = 0x800000010f12c1c0;
    lVar4 = *(long *)(param_1 + 0x10);
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_110 = lVar4;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0x7374706d6f727020,0xe800000000000000);
    func_0x000107c6142c(uStack_a8);
    if (lVar4 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      lStack_110 = 0;
    }
    else {
      uStack_88 = *(undefined8 *)(param_1 + 0x48);
      uStack_90 = *(undefined8 *)(param_1 + 0x40);
      uStack_78 = *(undefined8 *)(param_1 + 0x58);
      uStack_80 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x70);
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_a8 = *(undefined8 *)(param_1 + 0x28);
      lStack_b0 = *(long *)(param_1 + 0x20);
      uStack_98 = *(undefined8 *)(param_1 + 0x38);
      uStack_a0 = *(undefined8 *)(param_1 + 0x30);
      uStack_e8 = *(undefined8 *)(param_1 + 0x48);
      uStack_f0 = *(undefined8 *)(param_1 + 0x40);
      uStack_d8 = *(undefined8 *)(param_1 + 0x58);
      uStack_e0 = *(undefined8 *)(param_1 + 0x50);
      uStack_108 = *(undefined8 *)(param_1 + 0x28);
      lStack_110 = *(long *)(param_1 + 0x20);
      uStack_f8 = *(undefined8 *)(param_1 + 0x38);
      uStack_100 = *(undefined8 *)(param_1 + 0x30);
      uStack_70 = uStack_d0;
      uStack_68 = uStack_c8;
      uStack_60 = uStack_c0;
      FUN_1031a68dc(&lStack_b0,auStack_168);
    }
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_60 = uStack_c0;
    uStack_a8 = uStack_108;
    lStack_b0 = lStack_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    (*param_3)(&lStack_b0);
    FUN_1031a6984(&lStack_110,0x112f485e8,&UNK_10db956e8);
  }
  return;
}



/* Entry: 1031a6640; end: 1031a669f; -[_TtC24ConvoSafetyPromptFeature15CSPChatObserver init] */

void FUN_1031a6640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoSafetyPromptFeature.CSPChatObserver",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a666c);
  (*pcVar1)();
}



/* Entry: 1031a66a0; end: 1031a676b; -[_TtC24ConvoSafetyPromptFeature15CSPChatObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031a66a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f48560));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f48568));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48570));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f48578));
  func_0x0001000834e4(param_1 + _DAT_112f48580);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f48588));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48590));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f48598));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f485a0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f485a8 + 8));
  param_1 = param_1 + _DAT_112f485b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031a676c; end: 1031a678b;  */

void FUN_1031a676c(void)

{
  func_0x000107c61168(&PTR_PTR_1128be918);
  return;
}



/* Entry: 1031a678c; end: 1031a67af;  */

void FUN_1031a678c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  uVar1 = *param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (uVar1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    uVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (uVar1 == 0) {
      return;
    }
    func_0x0001031a3b48();
  }
  else {
    uVar2 = uVar1;
    func_0x000107c49b20();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x000107c3f894(uVar1);
      func_0x000107c61180();
      func_0x000104522a44(0x1031a6794,auStack_50,0x1031a679c);
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x0001031a3b48();
        func_0x000107c61170(lVar3);
      }
    }
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1031a67b0; end: 1031a67e7;  */

void FUN_1031a67b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001031a5ab8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1031a67e8; end: 1031a682b;  */

long FUN_1031a67e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1031a682c; end: 1031a685b;  */

void FUN_1031a682c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001031a5d44(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1031a685c; end: 1031a6873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a685c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  pcVar7 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  if (param_2 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000010;
    uStack_98 = 0x800000010f12c110;
    lVar8 = *(long *)(param_1 + 0x10);
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    alStack_78[0] = lVar8;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x7374706d6f727020,0xe800000000000000);
    func_0x000107c6142c(uStack_98);
    func_0x000106a3aea0(*(undefined8 *)(lVar1 + 0x10),lVar8);
    func_0x000107c61428(lVar5 + 0x10,alStack_78,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      FUN_1031a67e8(lVar5 + _DAT_112f48580,&uStack_a0);
      func_0x000107c61170(lVar5);
      func_0x0001000a8868(&uStack_a0,uStack_88);
      puVar6 = &UNK_11061a388;
      func_0x000107c613fc(&UNK_11061a388,0x28,7);
      *(long *)(puVar6 + 0x10) = lVar1;
      *(code **)(puVar6 + 0x18) = pcVar7;
      *(undefined8 *)(puVar6 + 0x20) = uVar2;
      pcVar7 = *(code **)(lStack_80 + 0x30);
      func_0x000107c6157c(lVar1);
      func_0x000107c6157c(uVar2);
      (*pcVar7)(param_1,uVar4,uVar3,0x1031a6868,puVar6,uStack_88,lStack_80);
      func_0x000107c61574(puVar6);
      func_0x0001000834e4(&uStack_a0);
    }
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000026;
    uStack_98 = 0x800000010f12c130;
    alStack_78[0] = param_2;
    func_0x000107c614b0(param_2);
    uVar4 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(alStack_78,uVar4);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uStack_98);
    (*pcVar7)();
  }
  return;
}



/* Entry: 1031a6874; end: 1031a68cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a6874(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = 0;
  func_0x000107c5eea4();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar12 = uVar12 + 0x30 & (uVar12 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8))
  ;
  uVar4 = *puVar1;
  uStack_160 = puVar1[1];
  lStack_168 = unaff_x20 + uVar12;
  lVar9 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar9 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&uStack_1a0 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar15 = param_1[1];
  if (lVar15 != 0) {
    uStack_178 = *param_1;
    uStack_88 = param_1[7];
    uStack_90 = param_1[6];
    uStack_78 = param_1[9];
    uStack_80 = param_1[8];
    uStack_70 = param_1[10];
    uStack_a8 = param_1[3];
    uStack_b0 = param_1[2];
    uStack_98 = param_1[5];
    uStack_a0 = param_1[4];
    func_0x000107c61428(lVar2 + 0x10,auStack_c8,0,0);
    lVar3 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar11 = *(long *)(lVar3 + _DAT_112f48570);
      uStack_188 = uVar4;
      lStack_170 = lVar8;
      func_0x000107c61174();
      func_0x0001031a6918(param_1,auStack_120);
      func_0x000107c61170(lVar3);
      lVar8 = lVar11;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      if (lVar8 == 0) {
        FUN_1031a6984(param_1,0x112f485e8,&UNK_10db956e8);
      }
      else {
        uVar4 = uStack_158;
        uStack_180 = uVar5;
        func_0x000107c5fadc(uStack_158,uVar5);
        uVar5 = 0;
        uStack_190 = uVar4;
        func_0x0001000295c4();
        lStack_198 = lVar8;
        func_0x000107c5ffdc();
        uStack_1a0 = uVar5;
        (**(code **)(lVar16 + 0x10))(lVar14,lStack_168,lVar9);
        uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
        uVar13 = uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff);
        uVar18 = lVar17 + uVar13 + 7 & 0xfffffffffffffff8;
        puVar6 = &UNK_11061a400;
        lStack_168 = lVar2;
        func_0x000107c613fc(&UNK_11061a400,uVar18 + 0x70,uVar12 | 7);
        *(undefined8 *)(puVar6 + 0x10) = uStack_158;
        *(undefined8 *)(puVar6 + 0x18) = uStack_180;
        *(long *)(puVar6 + 0x20) = lStack_170;
        (**(code **)(lVar16 + 0x20))(puVar6 + uVar13,lVar14,lVar9);
        uVar4 = uStack_160;
        lVar8 = lStack_168;
        *(long *)(puVar6 + uVar18) = lStack_168;
        *(undefined8 *)(puVar6 + uVar18 + 8) = uStack_188;
        *(undefined8 *)((long)(puVar6 + uVar18 + 8) + 8) = uStack_160;
        puVar1 = (undefined8 *)(puVar6 + uVar18 + 0x18);
        *puVar1 = uStack_178;
        puVar1[1] = lVar15;
        puVar1[10] = uStack_70;
        puVar1[7] = uStack_88;
        puVar1[6] = uStack_90;
        puVar1[9] = uStack_78;
        puVar1[8] = uStack_80;
        puVar1[3] = uStack_a8;
        puVar1[2] = uStack_b0;
        puVar1[5] = uStack_98;
        puVar1[4] = uStack_a0;
        uStack_130 = 0x1031a6c60;
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0x42000000;
        puStack_140 = &UNK_101043a98;
        puStack_138 = &UNK_11061a418;
        ppuVar7 = &puStack_150;
        puStack_128 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_128;
        func_0x0001031a6918(param_1,auStack_120);
        func_0x000107c61434(uStack_180);
        func_0x000107c6157c(lStack_170);
        func_0x000107c6157c(lVar8);
        func_0x000107c61434(uVar4);
        func_0x000107c61574(puVar6);
        uVar5 = uStack_190;
        lVar8 = lStack_198;
        uVar4 = uStack_1a0;
        func_0x000107c5b49c(lStack_198);
        FUN_1031a6984(param_1,0x112f485e8,&UNK_10db956e8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
      }
    }
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 != 0) {
    plVar10 = *(long **)(lVar8 + 8);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110954a20,&stack0xffffffffffffffc0,1);
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 1031a68d0; end: 1031a68db;  */

void FUN_1031a68d0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_168 [88];
  long lStack_110;
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
  long lStack_b0;
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
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (((uint)param_2 & 0xff) == 1) {
    lStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x24,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c5fb78(0xd000000000000022,0x800000010f12c190);
    uVar2 = 0x112d393f0;
    lStack_110 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_110,&lStack_b0,uVar2,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_a8);
    func_0x0001000d224c(&lStack_b0);
    lVar5 = lStack_b0;
    uVar4 = *(undefined8 *)(lStack_b0 + 0x10);
    uVar2 = 0x65665f6c61636f6c;
    func_0x000107c5fadc(0x65665f6c61636f6c,0xeb00000000686374);
    func_0x000106a3af90(uVar4,uVar2,1);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(uVar2);
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    (*pcVar1)(&lStack_b0);
  }
  else {
    lStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x1c,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c6142c(uStack_a8);
    lStack_b0 = -0x2fffffffffffffee;
    uStack_a8 = 0x800000010f12c1c0;
    lVar5 = *(long *)(param_1 + 0x10);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_110 = lVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0x7374706d6f727020,0xe800000000000000);
    func_0x000107c6142c(uStack_a8);
    if (lVar5 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      lStack_110 = 0;
    }
    else {
      uStack_88 = *(undefined8 *)(param_1 + 0x48);
      uStack_90 = *(undefined8 *)(param_1 + 0x40);
      uStack_78 = *(undefined8 *)(param_1 + 0x58);
      uStack_80 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x70);
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_a8 = *(undefined8 *)(param_1 + 0x28);
      lStack_b0 = *(long *)(param_1 + 0x20);
      uStack_98 = *(undefined8 *)(param_1 + 0x38);
      uStack_a0 = *(undefined8 *)(param_1 + 0x30);
      uStack_e8 = *(undefined8 *)(param_1 + 0x48);
      uStack_f0 = *(undefined8 *)(param_1 + 0x40);
      uStack_d8 = *(undefined8 *)(param_1 + 0x58);
      uStack_e0 = *(undefined8 *)(param_1 + 0x50);
      uStack_108 = *(undefined8 *)(param_1 + 0x28);
      lStack_110 = *(long *)(param_1 + 0x20);
      uStack_f8 = *(undefined8 *)(param_1 + 0x38);
      uStack_100 = *(undefined8 *)(param_1 + 0x30);
      uStack_70 = uStack_d0;
      uStack_68 = uStack_c8;
      uStack_60 = uStack_c0;
      FUN_1031a68dc(&lStack_b0,auStack_168);
    }
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_60 = uStack_c0;
    uStack_a8 = uStack_108;
    lStack_b0 = lStack_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    (*pcVar1)(&lStack_b0);
    FUN_1031a6984(&lStack_110,0x112f485e8,&UNK_10db956e8);
  }
  return;
}



/* Entry: 1031a68dc; end: 1031a6967;  */

undefined8 FUN_1031a68dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1031b23b8(param_2,param_1);
  return param_2;
}



/* Entry: 1031a6968; end: 1031a6983;  */

void FUN_1031a6968(long param_1,long param_2)

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


