/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100213d98; end: 100213e53; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportAbnormalCrashWithReportId:description:lastAppSessionMetadata:] */

/* WARNING: Possible PIC construction at 0x000100213e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100213e34) */

void FUN_100213d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_1);
  FUN_100213e54(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100213e54; end: 10021472f;  */

/* WARNING: Removing unreachable block (ram,0x000100214724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100213e54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puStack_218;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_90;
  undefined *puStack_80;
  
  if ((param_5 == (undefined *)0x0) || (*(long *)(param_5 + 0x10) == 0)) {
    puStack_218 = (undefined *)0x0;
    uVar18 = 0;
  }
  else {
    func_0x000107c61434(param_5);
    uVar18 = 0;
    lVar3 = -0x2ffffffffffffff0;
    func_0x000100029284();
    if ((uVar18 & 1) == 0) {
      puStack_218 = (undefined *)0x0;
      uVar18 = 0;
    }
    else {
      puVar1 = (ulong *)(*(long *)(param_5 + 0x38) + lVar3 * 0x10);
      puStack_218 = (undefined *)*puVar1;
      uVar18 = puVar1[1];
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6142c(param_5);
  }
  puVar4 = &UNK_1103ced80;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103ceec0;
  func_0x000107c613fc(&UNK_1103ceec0,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(ulong *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  func_0x000107c6157c(puVar4);
  func_0x000107c61434(param_2);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100214a84();
  puStack_80 = puVar6;
  FUN_1000d224c(&puStack_1e0);
  if (puStack_1e0 == (undefined *)0x0) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100214a84();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar7 = puStack_1e0;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_1e0);
    puVar8 = puVar7;
    func_0x000107c5f9e8(puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar7);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar9 = param_5;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (param_5 == (undefined *)0x0) {
    FUN_1001830b8(puVar7);
    puVar9 = puVar7;
  }
  func_0x000107c61434(param_5);
  puVar7 = puVar9;
  FUN_100215634(puVar9);
  func_0x000107c6142c(puVar9);
  puVar9 = puVar8;
  func_0x000107c61558(puVar8);
  puStack_1e0 = puVar8;
  FUN_100215d08(puVar7,FUN_100216600,0,puVar9,&puStack_1e0);
  func_0x000107c6142c(puVar7);
  puVar7 = puStack_1e0;
  puVar8 = PTR___sSSN_11034da80;
  lVar3 = 0x112d472a8;
  FUN_1000285a8(0x112d472a8,&UNK_10d90e490);
  puStack_a8 = puVar7;
  puStack_90 = (undefined *)lVar3;
  if (lVar3 == 0) {
    func_0x000107c6157c(puVar7);
    FUN_100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    FUN_100216878(&puStack_1e0,0x72657375,0xe400000000000000);
    FUN_100216638(&puStack_1e0,0x112d387f8,&UNK_10d902650);
  }
  else {
    FUN_100102924(&puStack_a8,&puStack_1e0);
    func_0x000107c6157c(puVar7);
    puVar9 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_a8 = puVar6;
    FUN_1001029e8(&puStack_1e0,0x72657375,0xe400000000000000,puVar9);
    puStack_80 = puStack_a8;
  }
  puVar6 = puStack_80;
  puStack_a8 = (undefined *)0x3030302d30303030;
  uStack_a0 = 0xee00303030302d30;
  puStack_90 = puVar8;
  FUN_100102924(&puStack_a8,&puStack_1e0);
  puVar9 = puVar6;
  func_0x000107c61558(puVar6);
  puStack_a8 = puVar6;
  FUN_1001029e8(&puStack_1e0,0x6d6d6f635f746967,0xea00000000007469,puVar9);
  puVar9 = puStack_a8;
  puStack_80 = puStack_a8;
  puVar6 = (undefined *)0x112d4b5e8;
  FUN_1000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(puVar6 + 0x18) = 8;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar6 + 0x28) = 0x800000010ef869e0;
  *(undefined8 *)(puVar6 + 0x30) = 0xd000000000000015;
  *(undefined8 *)(puVar6 + 0x38) = 0x800000010ef86a20;
  *(undefined **)(puVar6 + 0x48) = puVar8;
  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar6 + 0x58) = 0x800000010ef86a00;
  *(undefined8 *)(puVar6 + 0x60) = param_3;
  *(undefined8 *)(puVar6 + 0x68) = param_4;
  *(undefined **)(puVar6 + 0x78) = puVar8;
  *(undefined8 *)(puVar6 + 0x80) = 0x65707974;
  *(undefined8 *)(puVar6 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar6 + 0x90) = 0x4145434152544e55;
  *(undefined8 *)(puVar6 + 0x98) = 0xeb00000000454c42;
  *(undefined **)(puVar6 + 0xa8) = puVar8;
  *(undefined8 *)(puVar6 + 0xb0) = 0x7461645f6174656d;
  *(long *)(puVar6 + 0xd8) = lVar3;
  *(undefined8 *)(puVar6 + 0xb8) = 0xe900000000000061;
  *(undefined **)(puVar6 + 0xc0) = puVar9;
  func_0x000107c61434();
  func_0x000107c61434(puVar9);
  puVar10 = puVar6;
  FUN_100214a84();
  func_0x000107c61588(puVar6);
  uVar17 = 0x112d4b5f0;
  FUN_1000285a8(0x112d4b5f0,&UNK_10d9127d0);
  uVar14 = 4;
  func_0x000107c61408(puVar6 + 0x20,4,uVar17);
  puStack_b0 = puVar10;
  if (uVar18 != 0) {
    uVar15 = (ulong)puStack_218 & 0xffffffffffff;
    if ((uVar18 & 0x2000000000000000) != 0) {
      uVar15 = uVar18 >> 0x38 & 0xf;
    }
    if (uVar15 != 0) {
      puStack_a8 = puStack_218;
      puStack_90 = puVar8;
      uStack_a0 = uVar18;
      FUN_100102924(&puStack_a8,&puStack_1e0);
      func_0x000107c61434(uVar18);
      puVar6 = puVar10;
      func_0x000107c61558(puVar10);
      uVar14 = 0xd000000000000010;
      puStack_a8 = puVar10;
      FUN_1001029e8(&puStack_1e0,0xd000000000000010,0x800000010ef86680,puVar6);
      puStack_b0 = puStack_a8;
    }
  }
  puVar6 = puStack_b0;
  ppuVar12 = &PTR____CFConstantStringClassReference_110db1318;
  ppuVar11 = ppuVar12;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  uVar15 = uVar14;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  if (*(long *)(puVar7 + 0x10) == 0) {
LAB_1002143c0:
    uStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
    pcStack_1d0 = (code *)0x0;
    func_0x000107c6142c(uVar15);
  }
  else {
    func_0x000107c61434(puVar7);
    uVar16 = uVar15;
    func_0x000100029284(ppuVar12);
    if ((uVar16 & 1) == 0) {
      func_0x000107c61574(puVar7);
      goto LAB_1002143c0;
    }
    FUN_1000bb420(*(long *)(puVar7 + 0x38) + (long)ppuVar12 * 0x20,&puStack_1e0);
    func_0x000107c6142c(uVar15);
    func_0x000107c61574(puVar7);
  }
  uStack_1a8 = uStack_1d8;
  puStack_1b0 = puStack_1e0;
  lStack_198 = (long)puStack_1c8;
  uStack_1a0 = pcStack_1d0;
  if (puStack_1c8 == (undefined *)0x0) {
    FUN_100216638(&puStack_1b0,0x112d387f8,&UNK_10d902650);
    FUN_100216878(&puStack_a8,ppuVar11,uVar14);
    func_0x000107c6142c(uVar14);
    FUN_100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    puVar6 = puStack_b0;
  }
  else {
    FUN_100102924(&puStack_1b0,&puStack_a8);
    puVar8 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_1b0 = puVar6;
    FUN_1001029e8(&puStack_a8,ppuVar11,uVar14,puVar8);
    func_0x000107c6142c(uVar14);
    puVar6 = puStack_1b0;
  }
  puVar10 = puVar6;
  FUN_100216948(puVar6,param_1,param_2,0,0);
  FUN_1000d224c(&puStack_1b0);
  puVar8 = puStack_1b0;
  func_0x000107c5fadc(param_1,param_2);
  uVar14 = param_1;
  (**(code **)(unaff_x20 + _DAT_112da9d70))();
  if ((uVar14 & 1) == 0) {
LAB_100214574:
    uVar17 = 0;
  }
  else {
    if (*(long *)(puVar6 + 0x10) != 0) {
      func_0x000107c61434(puVar6);
      lVar3 = 0x65707974;
      uVar14 = 0;
      func_0x000100029284(0x65707974);
      if ((uVar14 & 1) == 0) {
        func_0x000107c6142c(puVar6);
      }
      else {
        FUN_1000bb420(*(long *)(puVar6 + 0x38) + lVar3 * 0x20,&puStack_1e0);
        func_0x000107c6142c(puVar6);
        ppuVar12 = &puStack_a8;
        func_0x000107c6147c(ppuVar12,&puStack_1e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        uVar14 = uStack_a0;
        if (((ulong)ppuVar12 & 1) != 0) {
          puVar13 = puStack_a8;
          FUN_1000f66f0(puStack_a8,uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
          func_0x000107c6142c(uVar14);
          if (((ulong)puVar13 & 1) != 0) goto LAB_100214574;
        }
      }
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112da9d08);
    func_0x000107c615f0(uVar17);
  }
  puVar13 = &UNK_1103ceee8;
  func_0x000107c613fc(&UNK_1103ceee8,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1002cf5f8;
  *(undefined **)(puVar13 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1c0 = (undefined *)0x1002cf410;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0x42000000;
  pcStack_1d0 = FUN_1000f6b44;
  puStack_1c8 = &UNK_1103cef00;
  ppuVar12 = &puStack_1e0;
  puStack_1b8 = puVar13;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_1b8;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1103cef38;
  func_0x000107c613fc(&UNK_1103cef38,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1002cf5f8;
  *(undefined **)(puVar13 + 0x18) = puVar5;
  puStack_1c0 = &UNK_1014dace0;
  puStack_1e0 = puVar2;
  uStack_1d8 = 0x42000000;
  pcStack_1d0 = (code *)&UNK_1012519d0;
  puStack_1c8 = &UNK_1103cef50;
  ppuVar11 = &puStack_1e0;
  puStack_1b8 = puVar13;
  func_0x000107c60bc4(ppuVar11);
  puVar13 = puStack_1b8;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar13);
  func_0x000107c5c11c(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(uVar18);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puVar4);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c615e8(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar17);
  return;
}



/* Entry: 100214730; end: 100214a77; -[KSCrashReportFilterCombine filterReports:onCompletion:] */

void FUN_100214730(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  code *extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  FUN_1001f7abc();
  FUN_1001b2714();
  FUN_1001f7b98();
  lVar2 = param_1;
  func_0x000107c4352c();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c4a910();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40808();
  if (lVar4 == 0) {
    if (unaff_x20 != 0) {
      func_0x000106af46b4();
      func_0x000100215628();
    }
  }
  else {
    lVar5 = lVar3;
    func_0x000107c40808();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar4 == lVar5) {
      FUN_1001b0fc0();
      func_0x000107c3e170();
      func_0x000107c61180();
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0x3032000000;
      pcStack_b0 = FUN_100212784;
      puStack_a8 = &UNK_100c3b6cc;
      uStack_a0 = 0;
      puStack_f0 = &uStack_f8;
      uStack_f8 = 0;
      uStack_e8 = 0x3042000000;
      puStack_c0 = &uStack_c8;
      func_0x000100212770();
      func_0x000107c61144(auStack_d0,0);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_100216458;
      puStack_108 = &UNK_110847658;
      ppuVar6 = &puStack_120;
      puStack_100 = &uStack_c8;
      func_0x000107c40794();
      puStack_190 = puVar1;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_100215018;
      puStack_178 = &UNK_1109601c0;
      FUN_1001f7b98();
      lStack_170 = param_1;
      func_0x000107c61174(ppuVar6);
      func_0x000107c61174(lVar5);
      lStack_168 = lVar5;
      func_0x000107c61174(lVar2);
      lStack_160 = lVar2;
      func_0x0001001b2730();
      func_0x000107c61174(lVar3);
      func_0x000107c40794(&puStack_190);
      func_0x0001002129f4();
      func_0x000107c611a0(puStack_f0 + 5,puStack_c0[5]);
      func_0x000107c4d9a0(lVar2);
      func_0x000107c61180();
      func_0x000107c434e8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(unaff_x19);
      func_0x000107c61170(lStack_160);
      func_0x000107c61170(lStack_168);
      func_0x000107c61170(ppuVar6);
      func_0x000107c61170(unaff_x20);
      func_0x0001001f7d80();
      FUN_1001f7bdc(&uStack_f8);
      func_0x000107c61120(auStack_d0);
      FUN_1001f7bdc(&uStack_c8);
      func_0x000107c61170(uStack_a0);
      FUN_1001f7bdc(&uStack_98);
    }
    else {
      func_0x000107c61158(param_1);
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c40808();
      func_0x000107c42a54(puVar1);
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        func_0x000106af46b4();
        (*extraout_x8)();
      }
      func_0x0001001f7d80();
    }
    func_0x0001001f7798();
  }
  func_0x0001001b2298();
  func_0x0001001b2798();
  func_0x0001001b27d0();
  func_0x0001001b274c();
  return;
}



/* Entry: 100214a78; end: 100214a7b; -[KSCrashReportFilterCombine filters] */

undefined8 FUN_100214a78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100214a7c; end: 100214a83; -[KSCrashReportFilterCombine keys] */

undefined8 FUN_100214a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100214a84; end: 100214b8f;  */

undefined * FUN_100214a84(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      FUN_100216788(param_1,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100214b90; end: 100214c27;  */

void FUN_100214b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd7c08,&UNK_10d99ac60);
  puVar1 = &UNK_110417928;
  func_0x000107c613fc(&UNK_110417928,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1006bed10,puVar1);
  return;
}



/* Entry: 100214c28; end: 100214c47;  */

void FUN_100214c28(void)

{
  func_0x000107c61168(&PTR_PTR_112dd7c80);
  return;
}



/* Entry: 100214c48; end: 100214ccb;  */

/* WARNING: Possible PIC construction at 0x000100214c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100214cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100214c94) */
/* WARNING: Removing unreachable block (ram,0x000100214cb4) */

void FUN_100214c48(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 100214ccc; end: 100214cef;  */

void FUN_100214ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107168c0;
  FUN_1000285a8(0x113016dc0,&UNK_10dc9bff8);
  func_0x000107c613fc(&UNK_1107168c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10099f57c,puVar1);
  return;
}



/* Entry: 100214cf0; end: 100214d6f;  */

void FUN_100214cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 100214d70; end: 100214e2b; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage metadataDict] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100214d70(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *(undefined8 *)(param_1 + _DAT_112da95c0);
  func_0x000107c61174();
  uVar1 = 0x112d472a8;
  FUN_1000285a8(0x112d472a8,&UNK_10d90e490);
  FUN_100087bd4(&uStack_38,0x100215314,auStack_50,uVar1);
  func_0x000107c61170(param_1);
  uVar1 = uStack_38;
  func_0x000107c5f9dc(uStack_38,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100214e2c; end: 100214e4b;  */

void FUN_100214e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112952990);
  return;
}



/* Entry: 100214e4c; end: 100214e5b;  */

void FUN_100214e4c(void)

{
  return;
}



/* Entry: 100214e5c; end: 100214fcb; -[KSCrashReportFilterAppleFmt filterReports:onCompletion:] */

void FUN_100214e5c(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong uVar7;
  
  FUN_100214e4c();
  FUN_100214fcc();
  func_0x000100214fd4();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar5 = param_3;
  func_0x000107c40808(param_3);
  func_0x000107c3e170(puVar2);
  func_0x000107c61180();
  func_0x000100214fdc();
  func_0x000100214fe4();
  uVar3 = param_3;
  func_0x000100214ff0();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      uVar6 = *(ulong *)(uVar7 * 8);
      uVar4 = param_1;
      uVar5 = uVar6;
      func_0x000107c4c1a4();
      if ((int)uVar4 == 3) {
        uVar4 = param_1;
        func_0x000107c5cae0();
        func_0x000107c61180();
        uVar5 = uVar6;
        if (uVar4 != 0) {
          func_0x000107c3d798(puVar2);
          uVar5 = uVar4;
        }
        func_0x000106af41d0();
      }
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar3;
    } while (uVar7 < uVar3);
    func_0x000100214fe4();
    uVar3 = param_3;
    func_0x000100214ff0();
  }
  func_0x000100214ff8();
  if (param_4 != 0) {
    uVar5 = 1;
    (**(code **)(param_4 + 0x10))(param_4,puVar2,1,0);
  }
  FUN_10021648c();
  FUN_1001f73dc();
  func_0x000100214ff8();
  func_0x000100216494(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar5);
  return;
}



/* Entry: 100214fcc; end: 100215017;  */

void FUN_100214fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100215018; end: 10021527b;  */

/* WARNING: Possible PIC construction at 0x0001002151fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100215220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100215224) */

void FUN_100215018(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong extraout_x9;
  undefined *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long lVar5;
  ulong uVar6;
  
  func_0x000100215000();
  FUN_1001f7b98();
  if ((unaff_x19 == (undefined *)0x0) || ((unaff_x22 & 1) == 0)) {
    if ((unaff_x22 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x48) != 0) {
        FUN_1002158d8(*(undefined8 *)(*(long *)(unaff_x21 + 0x48) + 0x10));
      }
    }
    else if (unaff_x19 == (undefined *)0x0) {
      lVar5 = *(long *)(unaff_x21 + 0x48);
      func_0x000106af4688();
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000106af4698();
      func_0x000107c42a54();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000106af4640();
      }
      func_0x0001001f7d80();
      func_0x0001001f7798();
    }
    FUN_10021644c();
  }
  else {
    func_0x000107c3d798(*(undefined8 *)(unaff_x21 + 0x28));
    FUN_10021527c(*(undefined8 *)(unaff_x21 + 0x58));
    if (extraout_x9 < *(ulong *)(unaff_x21 + 0x68)) {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x30);
      func_0x000107c4d9a0(uVar1);
      func_0x000107c61180();
      func_0x000100215290(*(undefined8 *)(unaff_x21 + 0x60));
      func_0x000107c434e8(uVar1);
      func_0x0001001b2798();
      func_0x0001001b2298();
    }
    else {
      lVar2 = *(long *)(unaff_x21 + 0x28);
      func_0x000107c4d9a0();
      func_0x000107c61180();
      func_0x000107c40808();
      lVar5 = lVar2;
      func_0x0001001b2298();
      FUN_1001b0fc0();
      func_0x000107c3e170();
      func_0x000107c61180();
      if (lVar2 != 0) {
        unaff_x19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c41998(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x000107c61180();
        for (uVar6 = 0; uVar6 < *(ulong *)(unaff_x21 + 0x68); uVar6 = uVar6 + 1) {
          puVar3 = *(undefined **)(unaff_x21 + 0x28);
          func_0x000107c4d9a0();
          func_0x000107c61180();
          puVar4 = puVar3;
          func_0x000107c40808();
          if (puVar4 != (undefined *)0x0) {
            func_0x000107c4d9a0(puVar3);
            func_0x000107c61180();
            func_0x000107c4d9a0(*(undefined8 *)(unaff_x21 + 0x40));
            func_0x000107c61180();
            func_0x000107c56bcc(unaff_x19);
            func_0x0001001b27d0();
            unaff_x19 = puVar3;
            goto code_r0x000107c61170;
          }
          func_0x000107c61170(puVar3);
        }
        func_0x000107c3d798(lVar5);
        goto code_r0x000107c61170;
      }
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 != 0) {
        FUN_1002158d8(*(undefined8 *)(lVar2 + 0x10),lVar2,lVar5,1);
      }
      FUN_10021644c();
      func_0x0001001b2298();
    }
  }
  func_0x0001001b27d0();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return;
}



/* Entry: 10021527c; end: 10021529b;  */

void FUN_10021527c(long param_1)

{
  *(long *)(*(long *)(param_1 + 8) + 0x18) = *(long *)(*(long *)(param_1 + 8) + 0x18) + 1;
  return;
}



/* Entry: 10021529c; end: 1002152fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10021529c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da9610;
  func_0x000107c61428(param_2 + _DAT_112da9610,auStack_48,0,0);
  *param_1 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61434();
  return;
}



/* Entry: 1002152fc; end: 100215327;  */

void FUN_1002152fc(void)

{
  long unaff_x20;
  
  FUN_10021529c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100215328; end: 100215587; -[KSCrashReportFilterSubset filterReports:onCompletion:] */

void FUN_100215328(ulong param_1,undefined *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong unaff_x19;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uStack_200;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_70;
  
  FUN_1001f7abc();
  FUN_1001b2610();
  uStack_70 = extraout_x8;
  FUN_1001b2714();
  FUN_1001f7b98();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808();
  func_0x000107c3e170();
  func_0x000107c61180();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x0001001b2730();
  puVar6 = &uStack_1b0;
  uStack_200 = unaff_x19;
  FUN_100215620();
  if (uStack_200 != 0) {
    lVar7 = *plStack_1a0;
    do {
      uVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          func_0x000107c61128(unaff_x19);
        }
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c41988();
        func_0x000107c61180();
        uVar4 = param_1;
        func_0x000107c4a8e4();
        func_0x000107c61180();
        uVar5 = uVar4;
        FUN_100215620();
        lVar1 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              func_0x000107c61128(uVar4);
            }
            uVar10 = *(undefined8 *)(uVar9 * 8);
            func_0x000107c43568();
            func_0x000107c61180();
            func_0x000107c4aa34(uVar10);
            func_0x000107c61180();
            func_0x000107c56bcc(puVar3);
            func_0x000107c61170(uVar10);
            func_0x0001001b27d0();
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar5);
          uVar5 = uVar4;
          FUN_100215620();
        }
        func_0x000107c61170(uVar4);
        func_0x000107c3d798(puVar2);
        func_0x0001001f7d80();
        uVar8 = uVar8 + 1;
        in_ZR = uVar8 == uStack_200;
      } while (uVar8 < uStack_200);
      puVar6 = &uStack_1b0;
      uStack_200 = unaff_x19;
      FUN_100215620();
    } while (uStack_200 != 0);
  }
  func_0x000107c61170(unaff_x19);
  if (unaff_x20 != 0) {
    func_0x000100215628(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20);
    param_2 = puVar2;
  }
  func_0x0001001b27d0();
  func_0x0001001b274c();
  func_0x000107c61170();
  func_0x0001001b27a0(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000285a8(0x112dc5bc0,&UNK_10d9857a0);
  puVar2 = &UNK_110401aa8;
  func_0x000107c613fc(&UNK_110401aa8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = param_2;
  *(undefined8 **)(puVar2 + 0x18) = puVar6;
  *(ulong *)(puVar2 + 0x20) = unaff_x19;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(unaff_x19);
  FUN_1000823a8(0x1003caaf0,puVar2);
  return;
}



/* Entry: 100215588; end: 10021561f;  */

void FUN_100215588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc5bc0,&UNK_10d9857a0);
  puVar1 = &UNK_110401aa8;
  func_0x000107c613fc(&UNK_110401aa8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1003caaf0,puVar1);
  return;
}



/* Entry: 100215620; end: 100215633;  */

void FUN_100215620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_countByEnumeratingWithState_obje_1125b2440,param_3,param_4,0x10);
  return;
}



/* Entry: 100215634; end: 1002158d7;  */

undefined * FUN_100215634(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar7 = 0x112d4b5f8;
    FUN_1000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar12,uVar7);
    puVar13 = puVar12;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar13);
  func_0x000107c61434(param_1);
  lVar15 = 0;
  while( true ) {
    while (uVar14 != 0) {
      uVar4 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar9 = lVar15 << 10 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 4;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9);
      uStack_e0 = *puVar2;
      uVar4 = puVar2[1];
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9);
      uStack_f0 = *puVar3;
      uVar7 = puVar3[1];
      uStack_e8 = uVar7;
      uStack_d8 = uVar4;
      func_0x000107c61438(uVar4,2);
      func_0x000107c61438(uVar7,2);
      func_0x000107c6147c(auStack_d0,&uStack_f0,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar4);
      if (uStack_d8 == 0) {
        func_0x000107c61574(param_1);
        func_0x0001013348a4(&uStack_e0,0x112d74040,&UNK_10d934650);
        func_0x000107c61574(puVar13);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002158d8);
        (*pcVar5)();
      }
      uVar14 = uVar14 - 1 & uVar14;
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      FUN_100102924(auStack_d0,auStack_a0);
      uVar9 = uStack_a8;
      uVar4 = uStack_b0;
      FUN_100102924(auStack_a0,auStack_80);
      uVar8 = uVar4;
      uVar10 = uVar9;
      func_0x000100029284();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar13 + 0x18) <= *(ulong *)(puVar13 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002158a8);
          (*pcVar5)();
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar13 + uVar10 + 0x40) =
             *(ulong *)(puVar13 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar9;
        FUN_100102924(auStack_80,*(long *)(puVar13 + 0x38) + uVar8 * 0x20);
        if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002158ac);
          (*pcVar5)();
        }
        *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar8 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar9;
        func_0x000107c6142c(uVar10);
        lVar1 = *(long *)(puVar13 + 0x38) + uVar8 * 0x20;
        func_0x000101334848(lVar1);
        FUN_100102924(auStack_80,lVar1);
      }
    }
    bVar6 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002158a4);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  func_0x000107c61574(puVar13);
  func_0x000107c61574(param_1);
  return puVar13;
}



/* Entry: 1002158d8; end: 1002158df;  */

void FUN_1002158d8(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001002158dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1002158e0; end: 1002159fb;  */

void FUN_1002158e0(void)

{
  undefined8 uVar1;
  ulong extraout_x9;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long lVar2;
  
  func_0x000100215000();
  FUN_1001f7b98();
  if ((unaff_x19 == 0) || ((unaff_x22 & 1) == 0)) {
    if ((unaff_x22 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x30) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x10);
        goto LAB_1002159d0;
      }
    }
    else if (unaff_x19 == 0) {
      lVar2 = *(long *)(unaff_x21 + 0x30);
      func_0x000106af4688();
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000106af4698();
      func_0x000107c42a54();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000106af4640();
      }
      func_0x0001001f7d80();
      func_0x0001001f7798();
    }
  }
  else {
    FUN_10021527c(*(undefined8 *)(unaff_x21 + 0x40));
    if (extraout_x9 < *(ulong *)(unaff_x21 + 0x50)) {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x28);
      func_0x000107c4d9a0(uVar1);
      func_0x000107c61180();
      func_0x000100215290(*(undefined8 *)(unaff_x21 + 0x48));
      func_0x000107c434e8(uVar1);
      func_0x0001001b2798();
      func_0x0001001b2298();
      goto LAB_1002159e0;
    }
    if (*(long *)(unaff_x21 + 0x30) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x10);
LAB_1002159d0:
      FUN_1002158d8(uVar1);
    }
  }
  (**(code **)(*(long *)(unaff_x21 + 0x38) + 0x10))();
LAB_1002159e0:
  func_0x0001001b27d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1002159fc; end: 100215a47;  */

void FUN_1002159fc(undefined8 param_1)

{
  FUN_1000285a8(0x112dc5bc8,&UNK_10d9857a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101742508,param_1);
  return;
}



/* Entry: 100215a48; end: 100215b07; -[KSCrashReportSinkSnapAirAppExtension filterReports:onCompletion:] */

void FUN_100215a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  FUN_1002124ac();
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_106af500c;
  puStack_40 = &UNK_110855e40;
  puStack_60 = PTR_PTR_1126f4ce8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = param_1;
  uStack_38 = param_1;
  func_0x000107c61154(&uStack_68,PTR_s_processReportsWithCompletion_onC_112622eb8,param_3,
                      &puStack_58);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100215b08; end: 100215d07; -[KSCrashReportSinkSnapAir processReportsWithCompletion:onCompleteReport:] */

void FUN_100215b08(long param_1,undefined1 *param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  ulong uStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [32];
  ulong uStack_230;
  ulong *puStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  FUN_1001b6048();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x0001001b6050();
  puVar6 = &uStack_140;
  uVar5 = 0;
  plVar7 = (long *)0x10;
  uStack_188 = param_3;
  func_0x000107c4080c();
  if (param_3 != 0) {
    unaff_x28 = *plStack_130;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_130 != unaff_x28) {
          func_0x000107c61128(uStack_188);
        }
        unaff_x24 = *(undefined8 *)(lStack_138 + unaff_x27 * 8);
        unaff_x25 = PTR_PTR_1126d0618;
        func_0x000107c44258();
        unaff_x23 = PTR_PTR_1126d0618;
        func_0x000107c4425c();
        func_0x000107c61180();
        func_0x000107c5cdb8(*(undefined8 *)(param_1 + 0x10));
        func_0x000107c61144(auStack_148,param_1);
        unaff_x26 = *(undefined8 *)(param_1 + 8);
        puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_178 = 0xc2000000;
        puStack_170 = &UNK_106af4fbc;
        puStack_168 = &UNK_110848558;
        param_2 = auStack_148;
        func_0x000107c6111c(auStack_158);
        FUN_1001b6048();
        uStack_160 = param_4;
        puStack_150 = unaff_x25;
        func_0x000107c4f298(unaff_x26);
        func_0x000107c61170(uStack_160);
        func_0x000106af5000();
        func_0x000107c61120(auStack_148);
        func_0x000107c61170(unaff_x23);
        unaff_x27 = unaff_x27 + 1;
      } while (unaff_x27 < param_3);
      puVar6 = &uStack_140;
      uVar5 = 0;
      plVar7 = (long *)0x10;
      param_3 = uStack_188;
      func_0x000107c4080c();
    } while (param_3 != 0);
  }
  func_0x000107c61170(uStack_188);
  func_0x0001001b6058();
  uVar3 = uStack_188;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000106af5000();
  func_0x000107c61120(auStack_148);
  uVar4 = uVar3;
  func_0x000107c60bd8();
  pcStack_198 = FUN_100215d08;
  uVar8 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
  uStack_220 = ~uVar8;
  puStack_228 = (ulong *)(uVar4 + 0x40);
  uVar8 = -uVar8;
  uStack_210 = 0xffffffffffffffff;
  if (uVar8 < 0x40) {
    uStack_210 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_218 = 0;
  uStack_210 = uStack_210 & *puStack_228;
  uStack_230 = uVar4;
  puStack_208 = param_2;
  puStack_200 = puVar6;
  lStack_1f0 = unaff_x28;
  uStack_1e0 = unaff_x27;
  uStack_1d8 = unaff_x26;
  puStack_1d0 = unaff_x25;
  uStack_1c8 = unaff_x24;
  puStack_1c0 = unaff_x23;
  uStack_1b8 = 0;
  uStack_1b0 = param_4;
  uStack_1a8 = uVar3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x000107c61434();
  func_0x000107c6157c(puVar6);
  FUN_100216040(&uStack_260);
  uVar4 = uStack_258;
  uVar3 = uStack_260;
  if (uStack_258 == 0) goto LAB_100215ffc;
  FUN_100102924(auStack_250,auStack_280);
  lVar12 = *plVar7;
  uVar8 = uVar3;
  uVar11 = uVar4;
  func_0x000100029284();
  lVar9 = *(long *)(lVar12 + 0x10);
  uVar10 = (ulong)~(uint)uVar11 & 1;
  lVar13 = lVar9 + uVar10;
  if (SCARRY8(lVar9,uVar10)) {
LAB_100216038:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021603c);
    (*pcVar2)();
  }
  if (*(long *)(lVar12 + 0x18) < lVar13) {
    FUN_100102b0c(lVar13,(uint)uVar5 & 1);
    uVar8 = uVar3;
    uVar5 = uVar4;
    func_0x000100029284();
    if (((uint)uVar11 & 1) != ((uint)uVar5 & 1)) {
LAB_100215e0c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100215e1c);
      (*pcVar2)();
    }
LAB_100215e20:
    if ((uVar11 & 1) != 0) goto LAB_100215e24;
LAB_100215e7c:
    lVar9 = *plVar7;
    lVar13 = lVar9 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    FUN_100102924(auStack_280,*(long *)(lVar9 + 0x38) + uVar8 * 0x20);
    if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
LAB_10021603c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100216040);
      (*pcVar2)();
    }
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  }
  else {
    if ((uVar5 & 1) != 0) goto LAB_100215e20;
    func_0x0001010fc388();
    if ((uVar11 & 1) == 0) goto LAB_100215e7c;
LAB_100215e24:
    lVar13 = *plVar7;
    FUN_1000bb420(auStack_280,auStack_2a0);
    func_0x000107c6142c(uVar4);
    FUN_100183ab8(auStack_280);
    lVar13 = *(long *)(lVar13 + 0x38) + uVar8 * 0x20;
    FUN_100183ab8(lVar13);
    FUN_100102924(auStack_2a0,lVar13);
  }
  FUN_100216040(&uStack_260);
  uVar5 = uStack_260;
  uVar3 = uStack_258;
  while (uVar3 != 0) {
    uStack_260 = uVar5;
    uStack_258 = uVar3;
    FUN_100102924(auStack_250,auStack_280);
    lVar12 = *plVar7;
    uVar4 = uVar5;
    uVar8 = uVar3;
    func_0x000100029284();
    lVar9 = *(long *)(lVar12 + 0x10);
    uVar11 = (ulong)~(uint)uVar8 & 1;
    lVar13 = lVar9 + uVar11;
    if (SCARRY8(lVar9,uVar11)) goto LAB_100216038;
    if (*(long *)(lVar12 + 0x18) < lVar13) {
      FUN_100102b0c(lVar13,1);
      uVar4 = uVar5;
      uVar11 = uVar3;
      func_0x000100029284();
      if (((uint)uVar8 & 1) != ((uint)uVar11 & 1)) goto LAB_100215e0c;
    }
    if ((uVar8 & 1) == 0) {
      lVar9 = *plVar7;
      lVar13 = lVar9 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar3;
      FUN_100102924(auStack_280,*(long *)(lVar9 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) goto LAB_10021603c;
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    }
    else {
      lVar13 = *plVar7;
      FUN_1000bb420(auStack_280,auStack_2a0);
      func_0x000107c6142c(uVar3);
      FUN_100183ab8(auStack_280);
      lVar13 = *(long *)(lVar13 + 0x38) + uVar4 * 0x20;
      FUN_100183ab8(lVar13);
      FUN_100102924(auStack_2a0,lVar13);
    }
    FUN_100216040(&uStack_260);
    uVar5 = uStack_260;
    uVar3 = uStack_258;
  }
LAB_100215ffc:
  func_0x000100216694(uStack_230,puStack_228,uStack_220,uStack_218,uStack_210);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 100215d08; end: 10021603f;  */

void FUN_100215d08(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  FUN_100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_100215ffc;
  FUN_100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_100216038:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10021603c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    FUN_100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_100215e0c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100215e1c);
      (*pcVar3)();
    }
LAB_100215e20:
    if ((uVar5 & 1) != 0) goto LAB_100215e24;
LAB_100215e7c:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    FUN_100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_10021603c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100216040);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_100215e20;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_100215e7c;
LAB_100215e24:
    lVar10 = *param_5;
    FUN_1000bb420(auStack_f0,auStack_110);
    func_0x000107c6142c(uVar2);
    FUN_100183ab8(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_100183ab8(lVar10);
    FUN_100102924(auStack_110,lVar10);
  }
  FUN_100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    FUN_100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_100216038;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      FUN_100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_100215e0c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      FUN_100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_10021603c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      FUN_1000bb420(auStack_f0,auStack_110);
      func_0x000107c6142c(uVar2);
      FUN_100183ab8(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_100183ab8(lVar10);
      FUN_100102924(auStack_110,lVar10);
    }
    FUN_100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_100215ffc:
  func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100216040; end: 1002161c7;  */

void FUN_100216040(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
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
  
  lVar3 = *unaff_x20;
  lVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  lVar1 = lVar10;
  if (uVar11 == 0) {
    uVar9 = lVar4 + 0x40U >> 6;
    uVar11 = uVar9;
    if ((long)uVar9 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar8 = uVar11 - 1;
    do {
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002161c8);
        (*pcVar7)();
      }
      if ((long)uVar9 <= lVar1) {
        uVar11 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        goto LAB_1002160ec;
      }
      uVar11 = *(ulong *)(lVar5 + lVar1 * 8);
      lVar10 = lVar10 + 1;
    } while (uVar11 == 0);
  }
  lVar8 = lVar1;
  uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar8 << 6;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x10);
  uStack_80 = *puVar2;
  uVar6 = puVar2[1];
  uStack_78 = uVar6;
  FUN_1000bb420(*(long *)(lVar3 + 0x38) + uVar9 * 0x20,&uStack_70);
  func_0x000107c61434(uVar6);
LAB_1002160ec:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar4;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = uVar11;
  pcVar7 = (code *)unaff_x20[5];
  FUN_1002161c8(&uStack_80,&uStack_b0,0x112d74040,&UNK_10d934650);
  if (lStack_a8 == 0) {
    FUN_100216638(&uStack_80,0x112d74040,&UNK_10d934650);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    lStack_d8 = lStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    (*pcVar7)(param_1,&uStack_e0);
    FUN_100216638(&uStack_e0,0x112da9f08,&UNK_10da55920);
    FUN_100216638(&uStack_80,0x112d74040,&UNK_10d934650);
  }
  return;
}



/* Entry: 1002161c8; end: 10021620f;  */

undefined8 FUN_1002161c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100216210; end: 1002162b3;  */

void FUN_100216210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc60d8,&UNK_10d985ec0);
  puVar1 = &UNK_1104023d8;
  func_0x000107c613fc(&UNK_1104023d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101749b20,puVar1);
  return;
}



/* Entry: 1002162b4; end: 1002162ef;  */

void FUN_1002162b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002162f0; end: 10021633b;  */

void FUN_1002162f0(undefined8 param_1)

{
  FUN_1000285a8(0x112dc61e0,&UNK_10d985fd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10174c5e0,param_1);
  return;
}



/* Entry: 10021633c; end: 10021638f;  */

void FUN_10021633c(void)

{
  func_0x000107c61168(&PTR_PTR_11297d100);
  return;
}



/* Entry: 100216390; end: 1002163b3;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_100216390(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uStack0000000000000018;
  undefined *puStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  puStack0000000000000020 = &UNK_110847658;
  uStack0000000000000028 = *(undefined8 *)(param_2 + 0x20);
  puVar3 = &stack0x00000008;
  uStack0000000000000018 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar4;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar4 = pcRam0000000113817cd0;
  FUN_10002a3a8(puVar3);
  func_0x000107c61180();
  (*pcVar4)(puVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1002163b4; end: 10021644b;  */

void FUN_1002163b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc6420,&UNK_10d9861d0);
  puVar1 = &UNK_110402738;
  func_0x000107c613fc(&UNK_110402738,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100591eb0,puVar1);
  return;
}



/* Entry: 10021644c; end: 100216457;  */

void FUN_10021644c(void)

{
  long unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x000100216454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x21 + 0x50) + 0x10))();
  return;
}



/* Entry: 100216458; end: 10021648b;  */

void FUN_100216458(void)

{
  func_0x0001001b0fcc();
  FUN_100216390(&UNK_100c3b608);
  return;
}



/* Entry: 10021648c; end: 1002164a7;  */

void FUN_10021648c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1002164a8; end: 1002164f3;  */

void FUN_1002164a8(undefined8 param_1)

{
  FUN_1000285a8(0x112dc6478,&UNK_10d986280);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10051cd08,param_1);
  return;
}



/* Entry: 1002164f4; end: 100216513;  */

void FUN_1002164f4(void)

{
  func_0x000107c61168(&PTR_PTR_11297d348);
  return;
}



/* Entry: 100216514; end: 1002165ab;  */

void FUN_100216514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd6450,&UNK_10d998ef0);
  puVar1 = &UNK_110414e70;
  func_0x000107c613fc(&UNK_110414e70,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10193903c,puVar1);
  return;
}



/* Entry: 1002165ac; end: 1002165ff;  */

void FUN_1002165ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100216600; end: 100216637;  */

void FUN_100216600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000bb420(param_2 + 2,param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 100216638; end: 100216677;  */

undefined8 FUN_100216638(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100216678; end: 10021669b;  */

void FUN_100216678(undefined8 param_1)

{
  FUN_1000285a8(0x112dc7c88,&UNK_10d988470);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10176c310,param_1);
  return;
}



/* Entry: 10021669c; end: 10021673f;  */

void FUN_10021669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc1e20,&UNK_10d97e7b0);
  puVar1 = &UNK_1103f9c98;
  func_0x000107c613fc(&UNK_1103f9c98,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_1016d6b2c,puVar1);
  return;
}



/* Entry: 100216740; end: 100216743;  */

void FUN_100216740(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100216744; end: 100216763;  */

void FUN_100216744(void)

{
  func_0x000107c61168(&PTR_PTR_112969440);
  return;
}



/* Entry: 100216764; end: 100216787;  */

void FUN_100216764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f9fe8;
  FUN_1000285a8(0x112dc1ef0,&UNK_10d97e988);
  func_0x000107c613fc(&UNK_1103f9fe8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1003ca9f0,puVar1);
  return;
}



/* Entry: 100216788; end: 1002167d7;  */

undefined8 FUN_100216788(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d4b5f0;
  FUN_1000285a8(0x112d4b5f0,&UNK_10d9127d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1002167d8; end: 100216857;  */

void FUN_1002167d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112deca38,&UNK_10d9b8960);
  puVar1 = &UNK_11042e650;
  func_0x000107c613fc(&UNK_11042e650,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100798138,puVar1);
  return;
}



/* Entry: 100216858; end: 100216877;  */

void FUN_100216858(void)

{
  func_0x000107c61168(&PTR_PTR_112decab0);
  return;
}



/* Entry: 100216878; end: 100216947;  */

void FUN_100216878(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001010fc388();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x0001010f6278(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 100216948; end: 1002171e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100216948(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uStack_90;
  long lStack_88;
  long alStack_80 [4];
  
  puVar1 = PTR_PTR_1126d01d0;
  func_0x000107c610f8(PTR_PTR_1126d01d0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c55218(puVar1);
  func_0x000107c61170();
  (**(code **)(unaff_x20 + _DAT_112da9da0))();
  lVar2 = param_2;
  func_0x000107c3ed14();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  func_0x000107c570d4(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c57d8c(puVar1);
  uVar3 = 0x6873617263;
  func_0x000107c5fadc(0x6873617263,0xe500000000000000);
  func_0x000107c548e4(puVar1);
  func_0x000107c61170(uVar3);
  FUN_1000d224c(alStack_80);
  lVar2 = alStack_80[0];
  if (alStack_80[0] != 0) {
    func_0x000107c40244();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c53774(puVar1);
  FUN_1000d224c(alStack_80);
  lVar2 = alStack_80[0];
  if (alStack_80[0] != 0) {
    func_0x000107c3ef4c(alStack_80[0]);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c52bbc(puVar1);
  FUN_1000d224c(alStack_80);
  lVar2 = alStack_80[0];
  if (alStack_80[0] != 0) {
    func_0x000107c5d8c0(alStack_80[0]);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c527f8(puVar1);
  FUN_1000d224c(alStack_80);
  lVar2 = alStack_80[0];
  if (alStack_80[0] != 0) {
    func_0x000107c43938(alStack_80[0]);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c54bb0(puVar1);
  puVar4 = PTR_PTR_1126d01d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c53a6c();
  (**(code **)(unaff_x20 + _DAT_112da9d70))();
  if ((((ulong)puVar5 & 1) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    lVar2 = 0x65707974;
    uVar9 = 0;
    func_0x000100029284(0x65707974);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      FUN_1000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,alStack_80);
      func_0x000107c6142c(param_1);
      puVar6 = &uStack_90;
      func_0x000107c6147c(puVar6,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar2 = lStack_88;
      if (((ulong)puVar6 & 1) != 0) {
        FUN_1000f66f0(uStack_90,lStack_88,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
        func_0x000107c6142c(lVar2);
      }
    }
  }
  func_0x000107c5a228(puVar4);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100216cfc:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    func_0x000107c61434(param_1);
    lVar2 = 0x65765f6873617263;
    uVar9 = 0;
    func_0x000100029284(0x65765f6873617263);
    if ((uVar9 & 1) != 0) {
      FUN_1000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,alStack_80);
      func_0x000107c6142c(param_1);
      puVar6 = &uStack_90;
      func_0x000107c6147c(puVar6,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar2 = lStack_88;
      if (((ulong)puVar6 & 1) != 0) {
        uVar9 = uStack_90;
        func_0x000107c5fadc(uStack_90,lStack_88);
        func_0x000107c6142c(lVar2);
        func_0x000107c527fc(puVar1);
        func_0x000107c61170(uVar9);
      }
      goto LAB_100216cfc;
    }
    func_0x000107c6142c(param_1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (lVar2 != 0) {
    func_0x000107c61434(param_1);
    lVar2 = 0x65707974;
    uVar9 = 0;
    func_0x000100029284(0x65707974);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uVar9 = 0;
      lVar2 = 0;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_100216e64;
LAB_100216db4:
      func_0x000107c61434(param_1);
      lVar7 = -0x2fffffffffffffee;
      uVar8 = 0;
      func_0x000100029284(0xd000000000000012);
      if ((uVar8 & 1) == 0) {
        func_0x000107c6142c(param_1);
        goto LAB_100216e64;
      }
      FUN_1000bb420(*(long *)(param_1 + 0x38) + lVar7 * 0x20,alStack_80);
      func_0x000107c6142c(param_1);
      puVar6 = &uStack_90;
      func_0x000107c6147c(puVar6,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar6 & 1) == 0) goto LAB_100216e64;
      if ((uStack_90 != 0xd000000000000019) || (lStack_88 != -0x7ffffffef1079580)) {
        uVar8 = uStack_90;
        func_0x000107c605b8(uStack_90,lStack_88,0xd000000000000019,0x800000010ef86a80,0);
        func_0x000107c6142c(lStack_88);
        if ((uVar8 & 1) != 0) goto LAB_1002170c8;
        if (lVar2 == 0) goto LAB_100217190;
        goto LAB_100216e68;
      }
      func_0x000107c6142c(0x800000010ef86a80);
LAB_1002170c8:
      func_0x000107c6142c(lVar2);
      FUN_10027feac(puVar1,param_1);
      func_0x000107c57d94(puVar1);
      uVar3 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c52788(puVar1);
      func_0x000107c61170(uVar3);
      uVar3 = 0xd000000000000019;
      func_0x000107c5fadc(0xd000000000000019,0x800000010ef86a80);
      func_0x000107c59a34(puVar1);
      func_0x000107c61170(uVar3);
      FUN_1000d224c(alStack_80);
      if (alStack_80[0] == 0) {
        param_4 = 0;
      }
      else {
        param_4 = alStack_80[0];
        func_0x000107c52060(alStack_80[0]);
        func_0x000107c61180();
        func_0x000107c615e8(alStack_80[0]);
      }
      func_0x000107c58fc0(puVar1);
LAB_1002170a0:
      func_0x000107c61170(param_4);
      goto LAB_1002171a0;
    }
    FUN_1000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,alStack_80);
    func_0x000107c6142c(param_1);
    puVar6 = &uStack_90;
    func_0x000107c6147c(puVar6,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_88;
    uVar9 = uStack_90;
    if ((int)puVar6 == 0) {
      uVar9 = 0;
      lVar2 = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_100216db4;
LAB_100216e64:
    if (lVar2 != 0) {
LAB_100216e68:
      if (((((((lVar2 == -0x14ffffffffbab3be) && (uVar9 == 0x4145434152544e55)) ||
             (uVar8 = uVar9,
             func_0x000107c605b8(uVar9,lVar2,0x4145434152544e55,0xeb00000000454c42,0),
             (uVar8 & 1) != 0)) || ((lVar2 == -0x14ffffffffb4bebb && (uVar9 == 0x4c5f59524f4d454d)))
            ) || (((uVar8 = uVar9,
                   func_0x000107c605b8(uVar9,lVar2,0x4c5f59524f4d454d,0xeb000000004b4145,0),
                   (uVar8 & 1) != 0 ||
                   ((lVar2 == -0x15ffffffffffa6ae && (uVar9 == 0x4f4d454d5f574f4c)))) ||
                  (uVar8 = uVar9,
                  func_0x000107c605b8(uVar9,lVar2,0x4f4d454d5f574f4c,0xea00000000005952,0),
                  (uVar8 & 1) != 0)))) ||
          ((((lVar2 == -0x7ffffffef1079540 && (uVar9 == 0xd000000000000010)) ||
            (uVar8 = uVar9, func_0x000107c605b8(uVar9,lVar2,0xd000000000000010,0x800000010ef86ac0,0)
            , (uVar8 & 1) != 0)) ||
           (((lVar2 == -0x7ffffffef1079c90 && (uVar9 == 0xd000000000000013)) ||
            ((uVar8 = uVar9,
             func_0x000107c605b8(uVar9,lVar2,0xd000000000000013,0x800000010ef86370,0),
             (uVar8 & 1) != 0 || ((lVar2 == -0x7ffffffef1079c70 && (uVar9 == 0xd000000000000017)))))
            ))))) ||
         (uVar8 = uVar9, func_0x000107c605b8(uVar9,lVar2,0xd000000000000017,0x800000010ef86390,0),
         (uVar8 & 1) != 0)) {
        FUN_10027feac(puVar1,param_1);
        uVar8 = uVar9;
        lVar7 = lVar2;
        FUN_1002822d4(uVar9,lVar2);
        FUN_100282520(puVar1,param_1,uVar8,lVar7);
        func_0x000107c6142c(lVar7);
        if ((lVar2 == -0x7ffffffef1079c70) && (uVar9 == 0xd000000000000017)) {
          func_0x000107c6142c(0x800000010ef86390);
        }
        else {
          func_0x000107c605b8(uVar9,lVar2,0xd000000000000017,0x800000010ef86390,0);
          func_0x000107c6142c(lVar2);
          if ((uVar9 & 1) == 0) goto LAB_1002171a0;
        }
        if (param_5 == 0) {
          param_4 = 0;
        }
        else {
          func_0x000107c5fadc(param_4);
        }
        func_0x000107c57844(puVar1);
        goto LAB_1002170a0;
      }
      func_0x000107c6142c(lVar2);
    }
  }
LAB_100217190:
  func_0x0001014d8c5c(puVar1,param_1);
LAB_1002171a0:
  func_0x000107c57d84(puVar1);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1002171e4; end: 100217287;  */

void FUN_1002171e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112deced8,&UNK_10d9b9230);
  puVar1 = &UNK_11042ea18;
  func_0x000107c613fc(&UNK_11042ea18,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1003a3e70,puVar1);
  return;
}



/* Entry: 100217288; end: 1002172a7;  */

void FUN_100217288(void)

{
  func_0x000107c61168(&PTR_PTR_112decf50);
  return;
}



/* Entry: 1002172a8; end: 10021730f; +[AirRequest descriptor] */

void FUN_1002172a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fafc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cde0f0,
                        &PTR____CFConstantStringClassReference_110f88038,&PTR_DAT_1133f2ff0,
                        &PTR_s_id_p_1133f3008,0x3e,0x198,0x1c);
    puRam00000001137fafc0 = puVar1;
  }
  return;
}



/* Entry: 100217310; end: 10021732b;  */

void FUN_100217310(undefined8 param_1)

{
  FUN_1000285a8(0x112decee0,&UNK_10d9b9238);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a3e14,param_1);
  return;
}



/* Entry: 10021732c; end: 10021737b;  */

void FUN_10021732c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021737c; end: 10021739b;  */

void FUN_10021737c(void)

{
  func_0x000107c61168(&PTR_PTR_1129c3190);
  return;
}



/* Entry: 10021739c; end: 10021741b;  */

void FUN_10021739c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112decfd0,&UNK_10d9b93d0);
  puVar1 = &UNK_11042eae0;
  func_0x000107c613fc(&UNK_11042eae0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10064a6e4,puVar1);
  return;
}



/* Entry: 10021741c; end: 10021743b;  */

void FUN_10021741c(void)

{
  func_0x000107c61168(&PTR_PTR_112ded048);
  return;
}



/* Entry: 10021743c; end: 1002174df;  */

void FUN_10021743c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded298,&UNK_10d9b9910);
  puVar1 = &UNK_11042ed38;
  func_0x000107c613fc(&UNK_11042ed38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1006f6f64,puVar1);
  return;
}



/* Entry: 1002174e0; end: 1002174ff;  */

void FUN_1002174e0(void)

{
  func_0x000107c61168(&PTR_PTR_112ded310);
  return;
}



/* Entry: 100217500; end: 10021751b;  */

void FUN_100217500(undefined8 param_1)

{
  FUN_1000285a8(0x112ded2a0,&UNK_10d9b9918);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f6f08,param_1);
  return;
}



/* Entry: 10021751c; end: 10021756b;  */

void FUN_10021751c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021756c; end: 10021758b;  */

void FUN_10021756c(void)

{
  func_0x000107c61168(&PTR_PTR_112942160);
  return;
}



/* Entry: 10021758c; end: 100217647;  */

void FUN_10021758c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded390,&UNK_10d9b9b10);
  puVar1 = &UNK_11042ee00;
  func_0x000107c613fc(&UNK_11042ee00,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1003a3cd8,puVar1);
  return;
}



/* Entry: 100217648; end: 100217667;  */

void FUN_100217648(void)

{
  func_0x000107c61168(&PTR_PTR_112ded408);
  return;
}



/* Entry: 100217668; end: 100217683;  */

void FUN_100217668(undefined8 param_1)

{
  FUN_1000285a8(0x112ded398,&UNK_10d9b9b18);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a3c7c,param_1);
  return;
}



/* Entry: 100217684; end: 1002176d3;  */

void FUN_100217684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002176d4; end: 1002176f3;  */

void FUN_1002176d4(void)

{
  func_0x000107c61168(&PTR_PTR_1129759b0);
  return;
}



/* Entry: 1002176f4; end: 100217773;  */

void FUN_1002176f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded588,&UNK_10d9b9e60);
  puVar1 = &UNK_11042ef90;
  func_0x000107c613fc(&UNK_11042ef90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101a3b71c,puVar1);
  return;
}



/* Entry: 100217774; end: 1002177bf;  */

void FUN_100217774(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002177c0; end: 1002177db;  */

void FUN_1002177c0(undefined8 param_1)

{
  FUN_1000285a8(0x112ded590,&UNK_10d9b9e68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3b82c,param_1);
  return;
}



/* Entry: 1002177dc; end: 10021782b;  */

void FUN_1002177dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021782c; end: 10021784b;  */

void FUN_10021782c(void)

{
  func_0x000107c61168(&PTR_PTR_112975dd0);
  return;
}



/* Entry: 10021784c; end: 1002178e3;  */

void FUN_10021784c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc2e28,&UNK_10d97fe60);
  puVar1 = &UNK_1103fbac0;
  func_0x000107c613fc(&UNK_1103fbac0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1016edf74,puVar1);
  return;
}



/* Entry: 1002178e4; end: 100217917;  */

void FUN_1002178e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100217918; end: 1002179d3;  */

void FUN_100217918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df0e00,&UNK_10d9be120);
  puVar1 = &UNK_110433268;
  func_0x000107c613fc(&UNK_110433268,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1004351f8,puVar1);
  return;
}



/* Entry: 1002179d4; end: 1002179f3;  */

void FUN_1002179d4(void)

{
  func_0x000107c61168(&PTR_PTR_112df0e78);
  return;
}



/* Entry: 1002179f4; end: 100217a0f;  */

void FUN_1002179f4(undefined8 param_1)

{
  FUN_1000285a8(0x112dd5798,&UNK_10d997c88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007de728,param_1);
  return;
}



/* Entry: 100217a10; end: 100217a5f;  */

void FUN_100217a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100217a60; end: 100217b03;  */

void FUN_100217a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd8ee0,&UNK_10d99c4c0);
  puVar1 = &UNK_110418ac8;
  func_0x000107c613fc(&UNK_110418ac8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10041ffec,puVar1);
  return;
}



/* Entry: 100217b04; end: 100217b23;  */

void FUN_100217b04(void)

{
  func_0x000107c61168(&PTR_PTR_112dd8f58);
  return;
}



/* Entry: 100217b24; end: 100217b3f;  */

void FUN_100217b24(undefined8 param_1)

{
  FUN_1000285a8(0x112dd7c10,&UNK_10d99ac68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006becb4,param_1);
  return;
}



/* Entry: 100217b40; end: 100217b8f;  */

void FUN_100217b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100217b90; end: 100217baf;  */

void FUN_100217b90(void)

{
  func_0x000107c61168(&PTR_PTR_1129ad050);
  return;
}



/* Entry: 100217bb0; end: 100217bfb;  */

void FUN_100217bb0(undefined8 param_1)

{
  FUN_1000285a8(0x112dc5f28,&UNK_10d985bd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003dcae8,param_1);
  return;
}



/* Entry: 100217bfc; end: 100217c1b;  */

void FUN_100217bfc(void)

{
  func_0x000107c61168(&PTR_PTR_11297d288);
  return;
}



/* Entry: 100217c1c; end: 100217c9b;  */

void FUN_100217c1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd9118,&UNK_10d99c890);
  puVar1 = &UNK_110418c78;
  func_0x000107c613fc(&UNK_110418c78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007057c4,puVar1);
  return;
}



/* Entry: 100217c9c; end: 100217cbb;  */

void FUN_100217c9c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd9190);
  return;
}



/* Entry: 100217cbc; end: 100217cd7;  */

void FUN_100217cbc(undefined8 param_1)

{
  FUN_1000285a8(0x112dd6458,&UNK_10d998ef8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101939208,param_1);
  return;
}



/* Entry: 100217cd8; end: 100217d27;  */

void FUN_100217cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100217d28; end: 100217d43;  */

void FUN_100217d28(undefined8 param_1)

{
  FUN_1000285a8(0x112decfd8,&UNK_10d9b93d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10064a688,param_1);
  return;
}



/* Entry: 100217d44; end: 100217d93;  */

void FUN_100217d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100217d94; end: 100217db3;  */

void FUN_100217d94(void)

{
  func_0x000107c61168(&PTR_PTR_1129c3280);
  return;
}


