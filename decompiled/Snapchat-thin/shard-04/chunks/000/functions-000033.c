/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fae848; end: 102fae87b;  */

undefined1  [16] FUN_102fae848(void)

{
  return ZEXT816(0x1105f5d88);
}



/* Entry: 102fae87c; end: 102fae8a3;  */

void FUN_102fae87c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102fae8a4; end: 102fae8ab;  */

undefined8 FUN_102fae8a4(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102fc14d4();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102fae8ac; end: 102fae917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fae8ac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100356dc4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f2d850) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102fae918; end: 102fae91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fae918(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100356dc4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f2d850) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102fae920; end: 102fae96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fae920(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f2d850) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fae96c; end: 102faeb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102fae96c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x0001048575f8();
  func_0x000107c61574(lVar1);
  puVar3 = &UNK_10db71fa8;
  func_0x000107c614e0(&UNK_10db71fa8);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102faeb18);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_102faef38(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102faeb14);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_102faec58(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_102faec58(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_102faeb34;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_102faeb34:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  return puVar6;
}



/* Entry: 102faeb68; end: 102faeb87;  */

void FUN_102faeb68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102faeb88; end: 102faebe7; -[_TtC30MessageReportingPluginRegistry37MessageReportingPluginFactoryServices buildSaberPlugins] */

void FUN_102faeb88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102fae96c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f2d880;
  func_0x0001000285a8(0x112f2d880,&UNK_10db72068);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102faebe8; end: 102faec47; -[_TtC30MessageReportingPluginRegistry37MessageReportingPluginFactoryServices init] */

void FUN_102faebe8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessageReportingPluginRegistry.MessageReportingPluginFactoryServices",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102faec14);
  (*pcVar1)();
}



/* Entry: 102faec48; end: 102faec57; -[_TtC30MessageReportingPluginRegistry37MessageReportingPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102faec48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2d850));
  return;
}



/* Entry: 102faec58; end: 102faed7f;  */

ulong FUN_102faec58(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102faed80);
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
  FUN_102faed80(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102faed7c);
      (*pcVar1)();
    }
    FUN_102faee00(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102faed80; end: 102faedff;  */

undefined * FUN_102faed80(undefined *param_1,undefined *param_2)

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
    FUN_102faef24();
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



/* Entry: 102faee00; end: 102faef23;  */

long FUN_102faee00(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102faef20);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102faef24);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f2d880;
        func_0x0001000285a8(0x112f2d880,&UNK_10db72068);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f2d880;
      func_0x0001000285a8(0x112f2d880,&UNK_10db72068);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102faef1c);
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



/* Entry: 102faef24; end: 102faef37;  */

void FUN_102faef24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2d888 == (undefined *)0x0 || ((ulong)puRam0000000112f2d888 & 1) != 0) {
    puVar1 = &UNK_10e9684e6;
    func_0x000107c61518(&UNK_10e9684e6,0x25,0,0);
    puRam0000000112f2d888 = puVar1;
  }
  return;
}



/* Entry: 102faef38; end: 102faf0eb;  */

ulong FUN_102faef38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102faf020);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102faf024);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ea0e28;
    func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
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
    uVar4 = 0x112ea0e28;
    func_0x0001000285a8(0x112ea0e28,&UNK_10dab2e60);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f117350);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102faf0ec);
  (*pcVar2)();
}



/* Entry: 102faf0ec; end: 102faf0fb;  */

undefined1  [16] FUN_102faf0ec(void)

{
  return ZEXT816(0x1105f5e78);
}



/* Entry: 102faf0fc; end: 102faf15b; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl init] */

void FUN_102faf0fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomReportServicesImpl.CustomReportComposerFactoryImpl",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102faf128);
  (*pcVar1)();
}



/* Entry: 102faf15c; end: 102faf1e3; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102faf1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102faf1cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102faf15c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2d8a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2d8b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2d8b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2d8c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f2d8c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f2d8d0));
  return;
}



/* Entry: 102faf1e4; end: 102faf54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102faf1e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  puVar2 = PTR_PTR_1126ac8e8;
  func_0x000107c610f8(PTR_PTR_1126ac8e8);
  func_0x000107c479ec();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f2d8a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f2d8b0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_112f2d8b8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar4);
          lVar4 = lVar3;
        }
        else {
          lVar6 = *(long *)(unaff_x20 + _DAT_112f2d8c8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            lVar4 = lVar5;
          }
          else {
            lVar9 = lVar3;
            func_0x000107c4c1dc(lVar3);
            func_0x000107c61180();
            func_0x000107c56b20(puVar2);
            func_0x000107c615e8(lVar9);
            puVar7 = &UNK_1105f5f48;
            func_0x000107c613fc(&UNK_1105f5f48,0x18,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_80 = FUN_102fb0b30;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100c75f50;
            puStack_88 = &UNK_1105f5f60;
            puStack_78 = puVar7;
            func_0x000107c60bc4(&puStack_a0);
            puVar7 = puStack_78;
            func_0x000107c61174();
            func_0x000107c61574(puVar7);
            func_0x000107c56fe0(puVar2);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c52da0(puVar2);
            lVar9 = *(long *)(unaff_x20 + _DAT_112f2d8c0);
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              func_0x000107c5c734();
              func_0x000107c61180();
            }
            func_0x000107c571c4(puVar2);
            func_0x000107c615e8(lVar9);
            puVar7 = &UNK_1105f5f98;
            func_0x000107c613fc(&UNK_1105f5f98,0x20,7);
            *(long *)(puVar7 + 0x10) = lVar6;
            *(long *)(puVar7 + 0x18) = unaff_x20;
            pcStack_80 = (code *)0x102fb0b54;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100f11710;
            puStack_88 = &UNK_1105f5fb0;
            puStack_78 = puVar7;
            func_0x000107c60bc4(&puStack_a0);
            puVar7 = puStack_78;
            func_0x000107c61174(unaff_x20);
            func_0x000107c615f0(lVar6);
            func_0x000107c61574(puVar7);
            puVar7 = &UNK_1105f5fe8;
            func_0x000107c613fc(&UNK_1105f5fe8,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,unaff_x20);
            pcStack_80 = (code *)0x102fb0b5c;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100f10508;
            puStack_88 = &UNK_1105f6000;
            puStack_78 = puVar7;
            func_0x000107c60bc4(&puStack_a0);
            func_0x000107c61574(puStack_78);
            FUN_102fb0b64(0);
            func_0x000107c614e8();
            lVar9 = lVar4;
            func_0x000107c4c214(lVar4);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c5a6c8(puVar2);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar6);
            lVar4 = lVar9;
          }
        }
      }
      func_0x000107c615e8(lVar4);
    }
  }
  return puVar2;
}



/* Entry: 102faf54c; end: 102faf74f;  */

void FUN_102faf54c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5edd0(lVar10,param_1,param_2);
  lVar1 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_102fb0c28(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar11 = *(code **)(lVar13 + 0x20);
    (*pcVar11)(lVar7,lVar10,lVar2);
    pcVar3 = "openUrl(urlString:)";
    func_0x0001000c10c0("openUrl(urlString:)");
    func_0x000107c61180();
    (**(code **)(lVar13 + 0x10))(lVar8,lVar7,lVar2);
    uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1105f6128;
    func_0x000107c613fc(&UNK_1105f6128,uVar12 + lVar9,uVar6 | 7);
    (*pcVar11)(puVar4 + uVar12,lVar8,lVar2);
    pcStack_60 = FUN_102fb0c68;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105f6140;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e590(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    (**(code **)(lVar13 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 102faf750; end: 102faf79b;  */

undefined8 FUN_102faf750(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5e274(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,param_2,0);
  func_0x000107c61180();
  func_0x000107c569dc();
  return param_1;
}



/* Entry: 102faf79c; end: 102fafa6f;  */

void FUN_102faf79c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_a0;
    ppuVar4 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar7 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    ppuVar9 = &puStack_a0;
    uVar2 = 0x6e697274536c7275;
    func_0x000107c5fadc(0x6e697274536c7275,0xe900000000000067);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102fafa70;
    uStack_78 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101137fac;
    puStack_88 = &UNK_1105f6028;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_102fafca8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101138058;
    puStack_88 = &UNK_1105f6050;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar5 = 0x7453656761506e6f;
    func_0x000107c5fadc(0x7453656761506e6f,0xed00006465747261);
    pcStack_80 = (code *)0x102fb0ba8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101279ab8;
    puStack_88 = &UNK_1105f6078;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_80 = (code *)0x102fb0bc8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10127a6c0;
    puStack_88 = &UNK_1105f60a0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar5);
    uVar5 = 0x6946656761506e6f;
    func_0x000107c5fadc(0x6946656761506e6f,0xee0064656873696e);
    pcStack_80 = (code *)0x102fb0be8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101279ab8;
    puStack_88 = &UNK_1105f60c8;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_80 = (code *)0x102fb0c08;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10127a6c0;
    puStack_88 = &UNK_1105f60f0;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 102fafa70; end: 102fafca7;  */

undefined8 FUN_102fafa70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5eb08();
  lVar6 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  puVar3 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c61168(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  lVar1 = param_1;
  func_0x000107c6148c(param_1,puVar3);
  uVar4 = 0;
  if ((lVar1 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_1);
    func_0x000107c5edd0(lVar10,uStack_68,param_3);
    lVar5 = lVar10;
    (**(code **)(lVar9 + 0x30))(lVar10,1,lVar2);
    if ((int)lVar5 == 1) {
      func_0x000107c61170(param_1);
      FUN_102fb0c28(lVar10,0x112d36580,&UNK_10d9016d0);
      uVar4 = 0;
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar8,lVar10,lVar2);
      (**(code **)(lVar9 + 0x10))(lVar11,lVar8,lVar2);
      func_0x000107c5eaec(lVar7,0x404e000000000000,lVar11,0);
      func_0x000107c5eae0();
      (**(code **)(lVar6 + 8))(lVar7,lStack_70);
      func_0x000107c4b768(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* Entry: 102fafca8; end: 102fafcab;  */

void FUN_102fafca8(void)

{
  return;
}



/* Entry: 102fafcac; end: 102fafd67;  */

void FUN_102fafcac(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    func_0x0001000a7158();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_102fb02f0();
      }
      func_0x000107c615e8(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x000102fb06b0(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_102fb01c0(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 102fafd68; end: 102fafe3f;  */

void FUN_102fafd68(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c61168(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000107c61428(param_3 + *param_4,auStack_70,0x21,0);
      func_0x000107c615f0(param_2);
      func_0x000107c61174(param_1);
      FUN_102fafcac(param_2,lVar2);
      func_0x000107c614a8(auStack_70);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102fafe40; end: 102faff03;  */

void FUN_102fafe40(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c61168(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + *param_3,auStack_60,0x21,0);
      func_0x000107c61174(param_1);
      FUN_102fafcac(0,lVar2);
      func_0x000107c614a8(auStack_60);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102faff04; end: 102fb0027; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl createCoreReportDepsWithNavigator:] */

void FUN_102faff04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102faf1e4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb0028; end: 102fb0097; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl webView:didStartProvisionalNavigation:] */

/* WARNING: Possible PIC construction at 0x000102fb0078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb007c) */

void FUN_102fb0028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102fb0928(param_3,&DAT_112f2d8d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102fb0098; end: 102fb0107; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl webView:didFinishNavigation:] */

/* WARNING: Possible PIC construction at 0x000102fb00e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb00ec) */

void FUN_102fb0098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102fb0928(param_3,&DAT_112f2d8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102fb0108; end: 102fb018f; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_102fb0108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102fb0a24(param_3,param_4,FUN_102fb01b0,auStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102fb0190; end: 102fb01af;  */

void FUN_102fb0190(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad670);
  return;
}



/* Entry: 102fb01b0; end: 102fb01bf;  */

void FUN_102fb01b0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102fb01bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102fb01c0; end: 102fb02ef;  */

void FUN_102fb01c0(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x0001000a7158();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb0284);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_102fb044c(lVar5);
    uVar2 = param_2;
    func_0x0001000a7158();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb0250);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102fb02f0();
    lVar5 = *unaff_x20;
    goto joined_r0x000102fb0298;
  }
  lVar5 = *unaff_x20;
joined_r0x000102fb0298:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb02f0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 102fb02f0; end: 102fb044b;  */

void FUN_102fb02f0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f2d908,&UNK_10db72118);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102fb03cc;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c615f0();
        if (uVar6 != 0) break;
LAB_102fb03cc:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb044c);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102fb0424;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102fb0424:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102fb044c; end: 102fb081b;  */

void FUN_102fb044c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112f2d908;
  func_0x0001000285a8(0x112f2d908,&UNK_10db72118);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102fb067c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb06ac);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_102fb067c;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c615f0(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102fb06b0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 102fb081c; end: 102fb0927;  */

undefined * FUN_102fb081c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112f2d908);
  puVar2 = puVar6;
  func_0x000107c60498();
  uStack_48 = *(ulong *)(param_1 + 0x28);
  uStack_50 = *(ulong *)(param_1 + 0x20);
  uVar3 = uStack_50;
  func_0x0001000a7158();
  if ((uVar4 & 1) == 0) {
    puVar7 = (ulong *)(param_1 + 0x30);
    do {
      puVar6 = puVar6 + -1;
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_50;
      *(ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb0928);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c615f0(uStack_48);
        return puVar2;
      }
      uVar5 = puVar7[1];
      uStack_50 = *puVar7;
      func_0x000107c615f0(uStack_48);
      uVar3 = uStack_50;
      func_0x0001000a7158();
      puVar7 = puVar7 + 2;
      uStack_48 = uVar5;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb08f8);
  (*pcVar1)();
}



/* Entry: 102fb0928; end: 102fb0a23;  */

void FUN_102fb0928(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  lVar4 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar4,&uStack_50,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if ((*(long *)(lVar4 + 0x10) == 0) || (func_0x0001000a7158(), (uVar2 & 1) == 0)) {
    func_0x000107c614a8(&uStack_50);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
    func_0x000107c614a8(&uStack_50);
    func_0x000107c615f0(lVar3);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
    lVar4 = lVar3;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar1);
    if (lVar4 != 0) {
      func_0x000107c60234(&uStack_50,lVar4);
      func_0x000107c615e8(lVar4);
      goto LAB_102fb09f8;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_102fb09f8:
  FUN_102fb0c28(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 102fb0a24; end: 102fb0b2f;  */

void FUN_102fb0a24(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar2 = param_2;
  func_0x000107c5c744();
  func_0x000107c61180();
  if (lVar2 == 0) {
    (*param_3)();
    func_0x000107c50300(param_2);
    func_0x000107c61180();
    func_0x000107c5eae8(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c61170(param_2);
    func_0x000107c5eae0();
    (**(code **)(lVar3 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    func_0x000107c4b768(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c61170();
    (*param_3)(1);
  }
  return;
}



/* Entry: 102fb0b30; end: 102fb0b63;  */

void FUN_102fb0b30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&puStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5edd0(lVar10,param_1,param_2);
  lVar1 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_102fb0c28(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar11 = *(code **)(lVar13 + 0x20);
    (*pcVar11)(lVar7,lVar10,lVar2);
    pcVar3 = "openUrl(urlString:)";
    func_0x0001000c10c0("openUrl(urlString:)");
    func_0x000107c61180();
    (**(code **)(lVar13 + 0x10))(lVar8,lVar7,lVar2);
    uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1105f6128;
    func_0x000107c613fc(&UNK_1105f6128,uVar12 + lVar9,uVar6 | 7);
    (*pcVar11)(puVar4 + uVar12,lVar8,lVar2);
    pcStack_60 = FUN_102fb0c68;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105f6140;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_58);
    func_0x000107c4e590(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    (**(code **)(lVar13 + 8))(lVar7,lVar2);
  }
  return;
}



/* Entry: 102fb0b64; end: 102fb0c27;  */

void FUN_102fb0b64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f0a8e0 = puVar1;
  return;
}



/* Entry: 102fb0c28; end: 102fb0c67;  */

undefined8 FUN_102fb0c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102fb0c68; end: 102fb0c93;  */

/* WARNING: Possible PIC construction at 0x000102fb0008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb000c) */

void FUN_102fb0c68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = 0x112d377a8;
  FUN_102fb0c94(0x112d377a8,&UNK_10d901780);
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102fb0c94; end: 102fb0cd3;  */

void FUN_102fb0c94(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100dfa6ec(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102fb0cd4; end: 102fb0cd7; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl webView:didFailNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100d2ee94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100d2eea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d2ee98) */
/* WARNING: Removing unreachable block (ram,0x000100d2eea8) */

void FUN_102fb0cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102fb0928(param_3,&DAT_112f2d8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102fb0cd8; end: 102fb0d23; -[_TtC24CustomReportServicesImpl31CustomReportComposerFactoryImpl webView:didFailProvisionalNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100d2ee94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100d2eea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d2ee98) */
/* WARNING: Removing unreachable block (ram,0x000100d2eea8) */

void FUN_102fb0cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102fb0928(param_3,&DAT_112f2d8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102fb0d24; end: 102fb0dcf;  */

void FUN_102fb0d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 102fb0dd0; end: 102fb0f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102fb0dd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4d814();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c3eb30();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4e26c();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_11308b2c0);
  puVar5 = &UNK_1105f6178;
  func_0x000107c613fc(&UNK_1105f6178,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  func_0x0001000285a8(0x112f2d910,&UNK_10db72120);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  pcVar6 = FUN_102fb107c;
  func_0x0001000bdd8c(FUN_102fb107c,puVar5);
  pcVar7 = pcVar6;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar6);
  puVar5 = PTR_PTR_1126ac8f0;
  func_0x000107c610f8(PTR_PTR_1126ac8f0);
  func_0x000107c45f18();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(pcVar7);
  return puVar5;
}



/* Entry: 102fb0f60; end: 102fb107b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb0f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  lVar2 = 0;
  FUN_102fb0190();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f2d8d0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102fb081c();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  lVar1 = _DAT_112f2d8d8;
  FUN_102fb081c();
  *(undefined **)(lVar3 + lVar1) = puVar5;
  *(undefined8 *)(lVar3 + _DAT_112f2d8a8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f2d8b0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f2d8b8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f2d8c0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f2d8c8) = param_6;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_70,puVar5);
  *param_1 = plVar6;
  return;
}



/* Entry: 102fb107c; end: 102fb108b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb107c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar10 = &lStack_70;
  lVar6 = 0;
  FUN_102fb0190();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar5 = _DAT_112f2d8d0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102fb081c();
  *(undefined **)(lVar7 + lVar5) = puVar8;
  lVar5 = _DAT_112f2d8d8;
  FUN_102fb081c();
  *(undefined **)(lVar7 + lVar5) = puVar9;
  *(undefined8 *)(lVar7 + _DAT_112f2d8a8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f2d8b0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f2d8b8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f2d8c0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f2d8c8) = uVar11;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar10;
  return;
}



/* Entry: 102fb108c; end: 102fb10bf;  */

/* WARNING: Possible PIC construction at 0x000102fb1098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb10a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb109c) */
/* WARNING: Removing unreachable block (ram,0x000102fb10ac) */

void FUN_102fb108c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fb10c0; end: 102fb1123;  */

void FUN_102fb10c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb1124; end: 102fb11a7;  */

void FUN_102fb1124(undefined8 param_1)

{
  if (lRam0000000112f2d940 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73c6cc);
  return;
}



/* Entry: 102fb11a8; end: 102fb11cb;  */

void FUN_102fb11a8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102fb0dd0();
  *param_1 = param_2;
  return;
}



/* Entry: 102fb11cc; end: 102fb121f;  */

void FUN_102fb11cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 102fb1220; end: 102fb1383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102fb1220(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4d814();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c3eb30();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11308b2c0);
  puVar4 = &UNK_1105f61b8;
  func_0x000107c613fc(&UNK_1105f61b8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  func_0x0001000285a8(0x112f2d910,&UNK_10db72120);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  pcVar5 = FUN_102fb1494;
  func_0x0001000bdd8c(FUN_102fb1494,puVar4);
  pcVar6 = pcVar5;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar5);
  puVar4 = PTR_PTR_1126ac8f0;
  func_0x000107c610f8(PTR_PTR_1126ac8f0);
  func_0x000107c45f18();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(pcVar6);
  return puVar4;
}



/* Entry: 102fb1384; end: 102fb1493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1384(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  lVar2 = 0;
  FUN_102fb0190();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f2d8d0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102fb081c();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  lVar1 = _DAT_112f2d8d8;
  FUN_102fb081c();
  *(undefined **)(lVar3 + lVar1) = puVar5;
  *(undefined8 *)(lVar3 + _DAT_112f2d8a8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f2d8b0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f2d8b8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f2d8c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f2d8c8) = param_5;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_70,puVar5);
  *param_1 = plVar6;
  return;
}



/* Entry: 102fb1494; end: 102fb149f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1494(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar10 = &lStack_70;
  lVar6 = 0;
  FUN_102fb0190();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar5 = _DAT_112f2d8d0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102fb081c();
  *(undefined **)(lVar7 + lVar5) = puVar8;
  lVar5 = _DAT_112f2d8d8;
  FUN_102fb081c();
  *(undefined **)(lVar7 + lVar5) = puVar9;
  *(undefined8 *)(lVar7 + _DAT_112f2d8a8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f2d8b0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f2d8b8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f2d8c0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f2d8c8) = uVar4;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar10;
  return;
}



/* Entry: 102fb14a0; end: 102fb14cb;  */

/* WARNING: Possible PIC construction at 0x000102fb14ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fb14bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fb14b0) */
/* WARNING: Removing unreachable block (ram,0x000102fb14c0) */

void FUN_102fb14a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102fb14cc; end: 102fb1527;  */

void FUN_102fb14cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb1528; end: 102fb15a7;  */

void FUN_102fb1528(undefined8 param_1)

{
  if (lRam0000000112f2da30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73c730);
  return;
}



/* Entry: 102fb15a8; end: 102fb15cb;  */

void FUN_102fb15a8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102fb1220();
  *param_1 = param_2;
  return;
}



/* Entry: 102fb15cc; end: 102fb15d7; -[SCLimitedCustomReportServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb15cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f2daf0;
  func_0x000107c61428(param_1 + _DAT_112f2daf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb15d8; end: 102fb15e3; -[SCLimitedCustomReportServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb15d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f2daf0;
  func_0x000107c61428(param_1 + _DAT_112f2daf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb15e4; end: 102fb15ef; -[SCLimitedCustomReportServiceProvider composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb15e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f2daf8;
  func_0x000107c61428(param_1 + _DAT_112f2daf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb15f0; end: 102fb15fb; -[SCLimitedCustomReportServiceProvider setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb15f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f2daf8;
  func_0x000107c61428(param_1 + _DAT_112f2daf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb15fc; end: 102fb1607; -[SCLimitedCustomReportServiceProvider composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb15fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f2db00;
  func_0x000107c61428(param_1 + _DAT_112f2db00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb1608; end: 102fb1613; -[SCLimitedCustomReportServiceProvider setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f2db00;
  func_0x000107c61428(param_1 + _DAT_112f2db00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb1614; end: 102fb161f; -[SCLimitedCustomReportServiceProvider composerPeopleBridgeFriendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f2db08;
  func_0x000107c61428(param_1 + _DAT_112f2db08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb1620; end: 102fb162b; -[SCLimitedCustomReportServiceProvider setComposerPeopleBridgeFriendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f2db08;
  func_0x000107c61428(param_1 + _DAT_112f2db08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb162c; end: 102fb1637; -[SCLimitedCustomReportServiceProvider webBrowsingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb162c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f2db10;
  func_0x000107c61428(param_1 + _DAT_112f2db10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102fb1638; end: 102fb167b;  */

void FUN_102fb1638(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102fb167c; end: 102fb1687; -[SCLimitedCustomReportServiceProvider setWebBrowsingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb167c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f2db10;
  func_0x000107c61428(param_1 + _DAT_112f2db10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb1688; end: 102fb16db;  */

void FUN_102fb1688(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102fb16dc; end: 102fb188b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb16dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3ff88();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3ffdc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5e1d4();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = 0;
            FUN_102fb1528();
            func_0x000107c613fc();
            *(long *)(lVar6 + 0x10) = lVar2;
            *(long *)(lVar6 + 0x18) = lVar3;
            *(long *)(lVar6 + 0x20) = lVar4;
            *(long *)(lVar6 + 0x28) = lVar5;
            uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f2db18);
            *(long *)(unaff_x20 + _DAT_112f2db18) = lVar6;
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c6157c(lVar6);
            func_0x000107c61574(uVar7);
            FUN_102fb1220();
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c61574(lVar6);
            return;
          }
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar1 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102fb188c; end: 102fb1917; -[SCLimitedCustomReportServiceProvider provide] */

void FUN_102fb188c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_102fb16dc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "CustomReportServicesImpl/SCLimitedCustomReportServiceProvider.swift",0x43,2,
                      0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb1918);
  (*pcVar1)();
}



/* Entry: 102fb1918; end: 102fb194b; -[SCLimitedCustomReportServiceProvider __safeProvide] */

void FUN_102fb1918(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102fb16dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102fb194c; end: 102fb198f; -[SCLimitedCustomReportServiceProvider end] */

void FUN_102fb194c(undefined8 param_1)

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



/* Entry: 102fb1990; end: 102fb1c6b;  */

void FUN_102fb1990(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53680();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d2c00)) ||
             (func_0x000107c605b8(0xd000000000000022,0x800000010ef2d400,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536b4();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0ff8fc0)) &&
               (func_0x000107c605b8(0xd000000000000012,0x800000010f007040,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "CustomReportServicesImpl/SCLimitedCustomReportServiceProvider.swift"
                                  ,0x43,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb1c6c);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a690();
          }
        }
        goto LAB_102fb1a1c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_102fb1a1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102fb1c6c; end: 102fb1d17; -[SCLimitedCustomReportServiceProvider setValue:forIvarName:] */

void FUN_102fb1c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102fb1990(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102fb1d18; end: 102fb1dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1d18(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f2daf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f2daf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f2db00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f2db08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f2db10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f2db18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102fb1dc8; end: 102fb1de7; -[SCLimitedCustomReportServiceProvider init] */

void FUN_102fb1dc8(void)

{
  FUN_102fb1d18();
  return;
}



/* Entry: 102fb1de8; end: 102fb1e1b;  */

void FUN_102fb1de8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102fb1e1c; end: 102fb1e93; -[SCLimitedCustomReportServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb1e1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f2daf0);
  func_0x000107c61610(param_1 + _DAT_112f2daf8);
  func_0x000107c61610(param_1 + _DAT_112f2db00);
  func_0x000107c61610(param_1 + _DAT_112f2db08);
  func_0x000107c61610(param_1 + _DAT_112f2db10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2db18));
  return;
}



/* Entry: 102fb1e94; end: 102fb1eb3;  */

void FUN_102fb1e94(void)

{
  func_0x000107c61168(&PTR_PTR_112f2db60);
  return;
}



/* Entry: 102fb1eb4; end: 102fb1ee7;  */

void FUN_102fb1eb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102fb1ee8; end: 102fb2007;  */

void FUN_102fb1ee8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar1 = lVar2;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar3 = lVar1;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        if (lVar3 != 0) {
          puVar4 = PTR_PTR_1126df0f8;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          func_0x000107c61574(param_2);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          goto LAB_102fb1fec;
        }
      }
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar2);
    }
  }
  puVar4 = (undefined *)0x0;
LAB_102fb1fec:
  *param_1 = puVar4;
  return;
}



/* Entry: 102fb2008; end: 102fb2017;  */

void FUN_102fb2008(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      lVar2 = lVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126df0f8;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          func_0x000107c61574(lVar1);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          goto LAB_102fb1fec;
        }
      }
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  puVar5 = (undefined *)0x0;
LAB_102fb1fec:
  *param_1 = puVar5;
  return;
}



/* Entry: 102fb2018; end: 102fb203b;  */

void FUN_102fb2018(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102fb203c; end: 102fb212f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb203c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  puVar1 = &UNK_1105f6278;
  func_0x000107c613fc(&UNK_1105f6278,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112ed14e0,&UNK_10daf8360);
  func_0x000107c613fc();
  pcVar2 = FUN_102fb2130;
  func_0x0001000bdd8c(FUN_102fb2130,puVar1);
  lVar3 = 0;
  func_0x000100923e7c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(code **)(lVar4 + _DAT_112f2dcb0) = pcVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61154(&lStack_40,puVar1);
  uVar6 = 0;
  func_0x00010032ddac(0);
  func_0x000107c610f8();
  func_0x000100923e9c(plVar5,uVar6);
  func_0x000107c61574(pcVar2);
  *param_1 = plVar5;
  return;
}



/* Entry: 102fb2130; end: 102fb2133;  */

void FUN_102fb2130(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      lVar2 = lVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126df0f8;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          func_0x000107c61574(lVar1);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          goto LAB_102fb1fec;
        }
      }
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  puVar5 = (undefined *)0x0;
LAB_102fb1fec:
  *param_1 = puVar5;
  return;
}



/* Entry: 102fb2134; end: 102fb23ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb2134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_c8 = param_3;
  uStack_c0 = param_1;
  uStack_b8 = param_4;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f2dcb0);
  func_0x0001000295c4(0);
  (**(code **)(lVar11 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar2 = lVar12;
  func_0x000107c5fff0(lVar12);
  (**(code **)(lVar11 + 8))(lVar12,lVar3);
  puVar4 = &UNK_1105f62e0;
  func_0x000107c613fc(&UNK_1105f62e0,0x38,7);
  uVar6 = uStack_b8;
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x18) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x20) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x28) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  uStack_70 = 0x102fb275c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105f62f8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar6);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar9;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_98,uVar9,uVar7,lVar1,uVar6);
  func_0x000107c5ffe8(0,lVar10,puVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 102fb23ac; end: 102fb255b;  */

void FUN_102fb23ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  ppuVar5 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    puVar1 = &UNK_1105f6330;
    func_0x000107c613fc(&UNK_1105f6330,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    pcStack_50 = FUN_102fb2788;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105f6348;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar1);
    func_0x000100162d98(&UNK_10db72260,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
  }
  else {
    if (param_5 == 0) {
      param_4 = 0;
    }
    else {
      func_0x000107c5fadc(param_4,param_5);
    }
    func_0x000107c5acc0(puStack_70);
    puVar3 = puStack_70;
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    puVar4 = &UNK_1105f6380;
    func_0x000107c613fc(&UNK_1105f6380,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    pcStack_50 = FUN_102fb27ac;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_1105f6398;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c4db80(puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 102fb255c; end: 102fb262b;  */

void FUN_102fb255c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = 0;
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c3ebcc();
    uVar3 = (undefined1)param_1;
  }
  puVar1 = &UNK_1105f63d0;
  func_0x000107c613fc(&UNK_1105f63d0,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  puVar1[0x20] = uVar3;
  pcStack_40 = FUN_102fb27b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105f63e8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10db72260,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102fb262c; end: 102fb26d7; -[_TtC33SCFamilyCenterEligibilityServices36SCFamilyCenterEligibilityCheckerImpl checkEligibilityForFriendId:completion:] */

void FUN_102fb262c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_1105f62b8;
  func_0x000107c613fc(&UNK_1105f62b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102fb2134(param_3,param_2,0x102fb2748,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102fb26d8; end: 102fb2737; -[_TtC33SCFamilyCenterEligibilityServices36SCFamilyCenterEligibilityCheckerImpl init] */

void FUN_102fb26d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFamilyCenterEligibilityServices.SCFamilyCenterEligibilityCheckerImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102fb2704);
  (*pcVar1)();
}



/* Entry: 102fb2738; end: 102fb2787; -[_TtC33SCFamilyCenterEligibilityServices36SCFamilyCenterEligibilityCheckerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102fb2738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f2dcb0));
  return;
}



/* Entry: 102fb2788; end: 102fb27ab;  */

void FUN_102fb2788(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 102fb27ac; end: 102fb27b3;  */

void FUN_102fb27ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined1 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  uVar5 = 0;
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c3ebcc();
    uVar5 = (undefined1)param_1;
  }
  puVar3 = &UNK_1105f63d0;
  func_0x000107c613fc(&UNK_1105f63d0,0x21,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  puVar3[0x20] = uVar5;
  pcStack_40 = FUN_102fb27b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105f63e8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000100162d98(&UNK_10db72260,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}


